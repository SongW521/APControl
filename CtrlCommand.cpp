//==============================================================================
//
// Title:		ControlCommand.cpp
// Purpose:		A short description of the implementation.
//
// Created on:	2024/5/9 at 18:34:09 by .
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include "CtrlCommand.h"

#include <QDebug>

//设置CRC校验值
uchar setCRC(CmdType aimCmd)
{
    uchar crc = 0x00;
    for(int i = 2;i < 7;i++ )
    {
        crc += aimCmd.byte[i];
    }
    return crc;
}
//设置系统命令
CmdType setSystemCommand(uchar devId,uchar address)
{
    CmdType sysCmd = {0};

    uchar cmd = (uchar)((devId << 6) | 0x3F);	//cmd控制读取指定设备

    sysCmd.byte[0] = 0xEB;
    sysCmd.byte[1] = 0x90;
    sysCmd.byte[2] = cmd;
    sysCmd.byte[3] = address;
    sysCmd.byte[4] = 0x00;
    sysCmd.byte[5] = 0x00;
    sysCmd.byte[6] = 0x00;
    sysCmd.byte[7] = setCRC(sysCmd);

    return sysCmd;

}
//设置ADC控制命令
CmdType setADCCommand(uchar devId ,uchar coupler1,uchar coupler2,uchar inputMode1,uchar inputMode2,uchar range1,uchar range2 )
{
    CmdType adcCmd = {0};

    uchar cmd = (uchar)((devId << 6) | 0x04);
    uchar d0 = (uchar)((coupler1 << 7) | inputMode1);   //D0控制通道一 耦合模式与接口类型
    uchar d1 = range1;   					 //D1控制通道一 量程
    uchar d2 = (uchar)((coupler2 << 7) | inputMode2);   //D2控制通道二 耦合模式与接口类型
    uchar d3 = range2;   					 //D3控制通道二 量程

    if(inputMode1 > 3 && inputMode1 < 8)
    {
        d1 = 0x00;
        d2 = 0x00;
        d3 = 0x00;
    }
    adcCmd.byte[0] = 0xEB;
    adcCmd.byte[1] = 0x90;
    adcCmd.byte[2] = cmd;
    adcCmd.byte[3] = d0;
    adcCmd.byte[4] = d1;
    adcCmd.byte[5] = d2;
    adcCmd.byte[6] = d3;
    adcCmd.byte[7] = setCRC(adcCmd);

    return adcCmd;
}
//设置DAC控制命令
CmdType setDACCommand(uchar devID,uchar outputMode1,uchar outputMode2,uchar range1,uchar range2)
{
    CmdType dacCmd = {0};

    uchar cmd = (uchar)((devID << 6) | 0x0A);
    uchar d0 = (uchar)((outputMode1 << 4) | range1);  	   //D0 控制输出通道1接口类型和量程
    uchar d1 = (uchar)((outputMode2 << 4) | range2);	  //D1 控制输出通道2接口类型和量程
    uchar d2 = 0x00;       								 //D2控制IO电平

    //判断固定量程
    if(outputMode1 == 0 || (outputMode1 > 3 && outputMode1 < 8)) d0 = d0 & 0xF0;
    if(outputMode2 == 0 ) d1 = 0x00;

    switch (outputMode1)         //判断IO电平模式
    {
    case 0: d2 = 0x00;break;
    case 2: d2 = 0x02;break;
    default:d2 = 0x0F;break;
    }
    dacCmd.byte[0] = 0xEB;
    dacCmd.byte[1] = 0x90;
    dacCmd.byte[2] = cmd;
    dacCmd.byte[3] = d0;
    dacCmd.byte[4] = d1;
    dacCmd.byte[5] = d2;
    dacCmd.byte[6] = 0x00;
    dacCmd.byte[7] = setCRC(dacCmd);


    return dacCmd;
}

// 设置ADC校准命令
CmdType setADCCalCommand(uchar devID, uchar calConf)
{
    CmdType adcCalCmd = {0};
    uchar cmd = (devID << 6) | calConf | 0x10;
    uchar d0 = 0x00;
    uchar d1 = 0x00;
    uchar d2 = 0x00;			 // 设置直流偏置
    uchar d3 = 0x00;
    if (calConf == 7) {			 // 设置ADC增益
        d0 = 0x4E;
        d1 = 0x20;
    } else {
        d0 = 0x75;
        d1 = 0x30;
    }

    adcCalCmd.byte[0] = 0xEB;
    adcCalCmd.byte[1] = 0x90;
    adcCalCmd.byte[2] = cmd;
    adcCalCmd.byte[3] = d0;
    adcCalCmd.byte[4] = d1;
    adcCalCmd.byte[5] = d2;
    adcCalCmd.byte[6] = d3;
    adcCalCmd.byte[7] = setCRC(adcCalCmd);

    return adcCalCmd;
}

// 设置DAC校准命令
CmdType setDACCalCommand(uchar devID, uchar calConf)
{
    CmdType dacCalCmd = {0};
    uchar cmd = (devID << 6) | calConf | 0x20;
    uchar d0 = 0x27;			 // 设置DAC增益
    uchar d1 = 0x37;
    uchar d2 = 0x02;			 // 设置直流偏置
    uchar d3 = 0x00;

    dacCalCmd.byte[0] = 0xEB;
    dacCalCmd.byte[1] = 0x90;
    dacCalCmd.byte[2] = cmd;
    dacCalCmd.byte[3] = d0;
    dacCalCmd.byte[4] = d1;
    dacCalCmd.byte[5] = d2;
    dacCalCmd.byte[6] = d3;
    dacCalCmd.byte[7] = setCRC(dacCalCmd);

    return dacCalCmd;
}

// 设置Flash命令
CmdType setFlashCommand(uchar devID, uchar operate) {
    CmdType flashCmd = {0};
    uchar cmd = (devID << 6) | 0x15;
    uchar d0 = operate;			 // 设置Flash操作
    uchar d1 = 0x00;
    uchar d2 = 0x00;
    uchar d3 = 0x00;

    flashCmd.byte[0] = 0xEB;
    flashCmd.byte[1] = 0x90;
    flashCmd.byte[2] = cmd;
    flashCmd.byte[3] = d0;
    flashCmd.byte[4] = d1;
    flashCmd.byte[5] = d2;
    flashCmd.byte[6] = d3;
    flashCmd.byte[7] = setCRC(flashCmd);

    return flashCmd;
}

//CRC校验
bool CRCVerify(CmdType aimCmd)
{
    uchar crc = 0x00;

    for(int i = 2;i < 7;i++ )
    {
        crc += aimCmd.byte[i];
    }
    return crc == aimCmd.byte[7];
}

//解析设备参数
QString getDevConfig(CmdType rceCmd)
{
    QString devConfig = " ";
    devConfig = QString("(GT aduio) 型号:%1%2 -- 版本:%3 -- 通道: %4进%5出" )
                    .arg(rceCmd.byte[3], 2, 16, QLatin1Char('0'))
                    .arg(rceCmd.byte[4], 2, 16, QLatin1Char('0'))
                    .arg(rceCmd.byte[5], 2, 16, QLatin1Char('0'))
                    .arg(rceCmd.byte[2] >> 4, 2, 16)
                    .arg(rceCmd.byte[2] & 0x0F, 2, 16);

    return devConfig;
}

//解析设备真实量程
void getDevRealRange(CmdType rceCmd, QString *realRange)
{
    QString stdRange[10] = {"AUTO","89.6 V","44.8 V","22.4 V","11.2 V"
                        ,"5.6 V","2.8 V","1.4 V","0.7 V","0.35 V"};

    int index1 = ((rceCmd.byte[3] & 0x0F) + 1) % 16;
    int index2 = ((rceCmd.byte[5] & 0x0F) + 1) % 16;

    qDebug() << index1 << " "  <<index2  ;

    realRange[0] = stdRange[index1];
    realRange[1] = stdRange[index2];


}
