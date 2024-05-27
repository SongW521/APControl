#ifndef HIDCONNECT_H
#define HIDCONNECT_H

#include <iostream>
#include <QDebug>
#include <QMessageBox>
#include <iomanip>
#include "HidApi.h"
#include "CtrlCommand.h"

class HidConnect
{
public:
    HidConnect();
    bool conDev();
    bool disconDev();
    void sendCmd(CmdType cmd);
    CmdType recCmd();
    bool hasData();
    static void hidDeviceErrorCb(HidDevice dev, HidError err);

private:
    HidApi hidApi;
    HidDevice hidDev;//HID设备
    HidDeviceList devList;//HID设备列表



};

#endif // HIDCONNECT_H
