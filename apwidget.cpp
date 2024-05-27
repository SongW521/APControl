#include "apwidget.h"
#include "ui_apwidget.h"


APWidget::APWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::APWidget)
{
    ui->setupUi(this);
    Dev_1 = new HidConnect();
    Dev_2 = new HidConnect();
}

APWidget::~APWidget()
{
    delete ui;
}

void APWidget::debugCmd(CmdType cmd)
{
    for(int i = 0; i < 8; i++)
    {
        std::wcout << std::setw(2) << std::setfill(L'0') << std::hex << cmd.byte[i]<<" ";
    }
    std::wcout <<std::endl;
}

void APWidget::on_linkBT_clicked()
{
    DevId = (uchar)ui->devSecCB->currentIndex();
    if (!ConStatus) {
        if (DevId == 0) {
            if (Dev_1->conDev()) {
                ui->linkBT->setStyleSheet("background-color: rgb(0, 200, 0);");
                ui->linkBT->setText("连接开启");
                ui->devSecCB->setEnabled(false);
                ConStatus = 1;
                qDebug() << "open success";

                //建立并启动接收命令线程
                recThread = new RecThread(Dev_1);
                thread = new QThread();
                recThread->moveToThread(thread);
                connect(thread, &QThread::started, recThread, &RecThread::RecPoll);
                connect(recThread, &RecThread::CmdToMainSignal, this, &APWidget::CmdToMainSlot);
                thread->start();
                //发送读设备指令
                SysCmd = setSystemCommand(DevId,0x01);
                Dev_1->sendCmd(SysCmd);
//                debugCmd(SysCmd);
            }
        }

    } else {
        if (Dev_1->disconDev()) {
            ui->linkBT->setStyleSheet("background-color: rgb(200, 0, 0);");
            ui->linkBT->setText("连接关闭");
            ui->devSecCB->setEnabled(true);
            ConStatus = 0;
            qDebug() << "close success";
            //发送断开指令
        }

    }
}


void APWidget::on_exitBT_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "提示", "是否退出?",
                                                    QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // 用户选择了继续
        qApp->quit();
    } else {
        // 用户选择了取消
    }

}


void APWidget::on_readRangeBT_clicked()
{
    DevId = (uchar)ui->devSecCB->currentIndex();
    SysCmd = setSystemCommand(DevId,0x04);
    debugCmd(SysCmd);
}


void APWidget::on_setInputBT_clicked()
{
    //获取参数
    DevId = (uchar)ui->devSecCB->currentIndex();
    InputMode1 = (uchar)ui->inputTypeCB_1->currentIndex();
    InputMode2  = (uchar)ui->inputTypeCB_2->currentIndex();
    Coupler1 = (uchar)ui->dcRB_1->isChecked();
    Coupler2 = (uchar)ui->dcRB_2->isChecked();
    InputRange1 = (uchar)((ui->inputRangeCB_1->currentIndex() + 15) % 16);
    InputRange2 = (uchar)((ui->inputRangeCB_2->currentIndex() + 15) % 16);
    if(InputMode1 > 2) InputMode1  = InputMode1 + 1;

    AdcCmd = setADCCommand(DevId,Coupler1,Coupler2,InputMode1,InputMode2,InputRange1,InputRange2);
    debugCmd(AdcCmd);
}


void APWidget::on_setOutputBT_clicked()
{
    //获取参数
    DevId = (uchar)ui->devSecCB->currentIndex();
    OutputMode1  = (uchar)ui->outputTypeCB_1->currentIndex();
    OutputMode2  = (uchar)ui->outputTypeCB_2->currentIndex();
    OutputRange1 = (uchar)((ui->outputRangeCB_1->currentIndex() + 15) % 16);
    OutputRange2 = (uchar)((ui->outputRangeCB_2->currentIndex() + 15) % 16);
    if(OutputMode1 > 2) OutputMode1  = OutputMode1 + 1;

    DacCmd = setDACCommand(DevId,OutputMode1,OutputMode2,OutputRange1,OutputRange2);
    debugCmd(DacCmd);
}


void APWidget::on_inputTypeCB_1_currentIndexChanged(int index)
{
    //输入设置为：”bnc iepe”时，必须为AC耦合,量程可设置
    if(index < 3)
    {
        ui->acRB_1->setEnabled(true);
        ui->dcRB_1->setEnabled(true);
        ui->inputTypeCB_2->setEnabled(true);
        ui->inputRangeCB_1->setEnabled(true);
        ui->inputRangeCB_2->setEnabled(true);
        //若通道2输入类型为"bnc iepe"时，通道2耦合类型仍不可设置
        if (ui->inputTypeCB_2->currentIndex() != 1) {
            ui->acRB_2->setEnabled(true);
            ui->dcRB_2->setEnabled(true);
        }
        if(index == 1)
        {
            ui->acRB_1->setChecked(true);
            ui->acRB_1->setEnabled(true);
            ui->dcRB_1->setEnabled(false);

        }

    }
    //当通道1输入为“4：digital-BNC，5：digital-XLR，6：OPT”时，通道2不可以设置，所有量程不可以设置,AC/DC不可设置。
    else
    {
        //通道二不可以设置
        ui->inputTypeCB_2->setCurrentIndex(0);
        ui->inputTypeCB_2->setEnabled(false);
        //所有量程不可设置
        ui->inputRangeCB_1->setCurrentIndex(0);
        ui->inputRangeCB_2->setCurrentIndex(0);
        ui->inputRangeCB_1->setEnabled(false);
        ui->inputRangeCB_2->setEnabled(false);

        //ac|dc不可设置
        ui->acRB_1->setChecked(true);
        ui->acRB_2->setChecked(true);
        ui->acRB_1->setEnabled(false);
        ui->dcRB_1->setEnabled(false);
        ui->acRB_2->setEnabled(false);
        ui->dcRB_2->setEnabled(false);
    }
}


void APWidget::on_inputTypeCB_2_currentIndexChanged(int index)
{
    //输入设置为：”bnc iepe”时，必须为AC耦合,量程可设置
    if(index == 0)
    {
        ui->acRB_2->setEnabled(true);
        ui->dcRB_2->setEnabled(true);
    }
    else if(index == 1)
    {
        ui->acRB_2->setChecked(true);
        ui->dcRB_2->setEnabled(false);
    }
    else if(index == 2)
    {
        ui->dcRB_2->setEnabled(true);
    }

}


void APWidget::on_outputTypeCB_1_currentIndexChanged(int index)
{
    //CH1，无输出，固定量程0
    if(index == 0)
    {
        ui->outputRangeCB_1->setCurrentIndex(0);
        ui->outputRangeCB_1->setEnabled(false);
        ui->outputTypeCB_2->setEnabled(true);
    }
    //量程0-7对应BNC输出幅度：10.24/5.12/2.56/1.28/0.64/0.32/0.16V/0.08Vrms，
    else if(index == 1)
    {
        ui->outputRangeCB_1->clear();
        ui->outputRangeCB_1->addItems(BNCStd);
        ui->outputRangeCB_1->setEnabled(true);
        ui->outputTypeCB_2->setEnabled(true);

    }
    else if(index == 2)
    {
        ui->outputRangeCB_1->clear();
        ui->outputRangeCB_1->addItems(XLRStd);
        ui->outputTypeCB_2->setEnabled(true);
        ui->outputRangeCB_1->setEnabled(true);
    }
    //当通道1输出为“4：digital-BNC，5：digital-XLR，6：OPT”时，通道2不可以设置，所有量程不可以设置
    else if (index == 3 || index == 4 || index == 5 || index == 6)
    {

        //通道二不可以设置
        ui->outputTypeCB_2->setCurrentIndex(0);
        ui->outputTypeCB_2->setEnabled(false);
        //所有量程不可设置
        ui->outputRangeCB_1->setCurrentIndex(0);
        ui->outputRangeCB_2->setCurrentIndex(0);
        ui->outputRangeCB_1->setEnabled(false);
        ui->outputRangeCB_2->setEnabled(false);
    }

}


void APWidget::on_outputTypeCB_2_activated(int index)
{
    if(index == 0)
    {
        ui->outputRangeCB_2->setCurrentIndex(0);
        ui->outputRangeCB_2->setEnabled(false);
    }
    //量程0-7对应BNC输出幅度：10.24/5.12/2.56/1.28/0.64/0.32/0.16V/0.08Vrms，
    else if(index == 1)
    {
        ui->outputRangeCB_2->clear();
        ui->outputRangeCB_2->addItems(BNCStd);
        ui->outputRangeCB_2->setEnabled(true);
    }
    else if(index == 2)
    {
        ui->outputRangeCB_2->clear();
        ui->outputRangeCB_2->addItems(XLRStd);
        ui->outputRangeCB_2->setEnabled(true);
    }
}


void APWidget::on_checkDacCB_1_currentIndexChanged(int index)
{
    if (index) {
        DevId = (uchar)ui->devSecCB->currentIndex();
        AdcCalCmd = setADCCalCommand(DevId, index+5);
        debugCmd(AdcCalCmd);
    }
}


void APWidget::on_checkAdcCB_1_currentIndexChanged(int index)
{
    if (index) {
        DevId = (uchar)ui->devSecCB->currentIndex();
        DacCalCmd = setDACCalCommand(DevId, index+9);
        debugCmd(DacCalCmd);
    }
}


void APWidget::on_readFlashBT_clicked()
{
    DevId = (uchar)ui->devSecCB->currentIndex();
    FlashCmd = setFlashCommand(DevId, 1);
    debugCmd(FlashCmd);
}


void APWidget::on_writeFlashBT_clicked()
{
    DevId = (uchar)ui->devSecCB->currentIndex();
    FlashCmd = setFlashCommand(DevId, 2);
    debugCmd(FlashCmd);
}


void APWidget::on_resetFlashBT_clicked()
{
    DevId = (uchar)ui->devSecCB->currentIndex();
    FlashCmd = setFlashCommand(DevId, 4);
    debugCmd(FlashCmd);
}


void APWidget::on_cleanFlashBT_clicked()
{
    DevId = (uchar)ui->devSecCB->currentIndex();
    FlashCmd = setFlashCommand(DevId, 3);
    debugCmd(FlashCmd);
}

void APWidget::CmdToMainSlot(CmdType cmd)
{
    debugCmd(cmd);
}


