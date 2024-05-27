#include "hidconnect.h"


HidConnect::HidConnect()
{
    hidApi.registerDeviceErrorCallback( &hidDeviceErrorCb );
}

bool HidConnect::conDev()
{
    devList = hidApi.scanDevices();
    for (size_t i = 0; i < devList.size(); i++) {                       // 可打印扫描到的设备的信息
        if (devList[i].getProductString() == L"GT audio") {
            std::wcout << i + 1 << ". DEVICE\n"
                       << "Path        : " << devList[i].getPath().c_str()  << std::endl
                       << "Vendor Id   : " << devList[i].getVendorId()      << std::endl
                       << "Product Id  : " << devList[i].getProductId()     << std::endl
                       << "Serial      : " << devList[i].getSerial()        << std::endl
                       << "Manufacturer: " << devList[i].getManufacturer()  << std::endl
                       << "Product     : " << devList[i].getProductString() << std::endl
                       << "Release No  : " << devList[i].getRelease()       << std::endl
                       << "Usage Page  : " << devList[i].getUsagePage()     << std::endl
                       << "Usage       : " << devList[i].getUsage()         << std::endl
                       << "Interface   : " << devList[i].getInterface()     << std::endl
                       << "-----------------------------------------------" << std::endl;
            hidDev = devList[i];
        }
    }
    if (hidDev.isInitialized()) {
        bool isOpen = hidDev.open();                                    // 打开设备
        if (isOpen) {                                                   // 若打开成功
            return true;
        } else {
            QMessageBox::critical(nullptr, "错误", "无法连接设备", QMessageBox::Yes);
        }
    } else {
        QMessageBox::critical(nullptr, "错误", "找不到设备", QMessageBox::Yes);
    }
    return false;
}

bool HidConnect::disconDev()
{
    if (hidDev.isOpened()) {
        bool isClose = hidDev.close();
        if (isClose) {
            return true;
        } else {
            QMessageBox::critical(nullptr, "错误", "无法断开连接", QMessageBox::Yes);
        }
    } else {
        QMessageBox::critical(nullptr, "错误", "设备未连接", QMessageBox::Yes);
    }
    return false;
}
std::string bytesToHexString(const unsigned char* bytes, size_t length)
{
    std::ostringstream oss;
    oss << std::hex << std::setfill('0');

    for (size_t i = 0; i < length; i++)
    {
        oss << std::setw(2) << static_cast<uint32_t>(bytes[i]);
    }

    return oss.str();
}
void HidConnect::sendCmd(CmdType cmd)
{
    std::vector<unsigned char> data(std::begin(cmd.byte), std::end(cmd.byte));
    data.insert(data.begin(), 0x00);
    if (hidDev.isOpened()) {
        // 调用 HidDevice 的 write 函数发送数据
        int bytesWritten = hidDev.write(data);
        if (!bytesWritten) {
            QMessageBox::critical(nullptr, "错误", "发送失败", QMessageBox::Yes);
        } else {
            for (int i = 0; i < 8; ++i) {
                std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(uint8_t(data[i])) << " ";
            }
            std::cout << std::endl;
        }
    } else {
        QMessageBox::critical(nullptr, "错误", "设备未连接", QMessageBox::Yes);
    }
}

CmdType HidConnect::recCmd()
{
    CmdType cmd = {0};
    std::vector<unsigned char> recData;
    recData = hidDev.read(2000);
    for (int i=0;i<8;i++) {
        cmd.byte[i] = recData[i+1];
    }
    return cmd;
}

bool HidConnect::hasData()
{
    return hidDev.readAvailable();
}

// 回调函数，用于处理连接错误
void HidConnect::hidDeviceErrorCb(HidDevice dev, HidError err)
{
    std::cout << "Device error occured:  " << err.getErrorCode() << " - " << err.getErrorString() << " - " << dev.getPath() << std::endl;
}
