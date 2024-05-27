#include "recthread.h"

RecThread::RecThread(HidConnect *Dev)
{
    dev = Dev;
}

void RecThread::RecPoll()
{
    qDebug()<<"线程打开";
    CmdType cmd = {0};
    while (conStatus) {
        if (dev->hasData()) {
            qDebug()<<"接收数据";
            cmd = dev->recCmd();
            emit CmdToMainSignal(cmd);
        }
    }
}
