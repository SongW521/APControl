#ifndef APWIDGET_H
#define APWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <iostream>
#include <iomanip>
#include <QThread>
#include "CtrlCommand.h"
#include "recthread.h"
#include "hidconnect.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class APWidget;
}
QT_END_NAMESPACE

class APWidget : public QWidget
{
    Q_OBJECT

public:
    APWidget(QWidget *parent = nullptr);
    ~APWidget();

    void debugCmd(CmdType cmd);

private:
    void deleteOb();
signals:
    void stopPollSignal(int DevId);

private slots:

    void CmdToMainSlot(CmdType cmd);

    void on_exitBT_clicked();

    void on_setInputBT_clicked();

    void on_setOutputBT_clicked();

    void on_inputTypeCB_1_currentIndexChanged(int index);

    void on_inputTypeCB_2_currentIndexChanged(int index);

    void on_outputTypeCB_1_currentIndexChanged(int index);

    void on_outputTypeCB_2_activated(int index);

    void on_checkDacCB_1_currentIndexChanged(int index);

    void on_checkAdcCB_1_currentIndexChanged(int index);

    void on_readFlashBT_clicked();

    void on_writeFlashBT_clicked();

    void on_resetFlashBT_clicked();

    void on_cleanFlashBT_clicked();

    void on_linkBT_clicked();

private:
    Ui::APWidget *ui;
    HidConnect   *Dev[2];
    RecThread    *recThread[2];
    QThread      *thread[2];


    //数据
    uchar         ConStatus = 0;
    uchar         DevId = 0;
    uchar         Address = 0;
    QString       DevConfig = {" "};

    uchar         Coupler1 = 0;
    uchar         Coupler2 = 0;
    uchar         InputMode1 = 0;
    uchar         InputMode2 = 0;
    uchar         InputRange1 = 0;
    uchar         InputRange2 = 0;
    uchar         InputRealRange1 = 0;
    uchar         InputRealRange2 = 0;

    uchar         OutputMode1 = 0;
    uchar         OutputMode2 = 0;
    uchar         OutputRange1 = 0;
    uchar         OutputRange2 = 0;

    CmdType       SysCmd = {0};
    CmdType       AdcCmd = {0};
    CmdType       DacCmd = {0};
    CmdType       AdcCalCmd = {0};
    CmdType       DacCalCmd = {0};
    CmdType       FlashCmd = {0};

    QStringList   BNCStd = {"AUTO","0.08    V","0.16    V","0.32    V","0.64    V",
                            "1.28    V","2.56    V","5.12    V","10.24    V"};
    QStringList   XLRStd = {"AUTO","0.16    V","0.32    V","0.64    V","1.28    V",
                            "2.56    V","5.12    V","10.24    V","20.48    V"};
};
#endif // APWIDGET_H
