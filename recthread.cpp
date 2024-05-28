#include "recthread.h"

RecThread::RecThread(HidConnect *Dev, int DevId)
{
    dev = Dev;
    devId = DevId;
}

void RecThread::RecPoll()
{
    qDebug()<<"devId:"<<devId<<"  线程打开";
    CmdType cmd = {0};
    while (conStatus) {
        if (dev->hasData()) {
            cmd = dev->recCmd();
            emit CmdToMainSignal(cmd);
        }
    }
}


void RecThread::stopPollSlot(int DevId)
{
    if (DevId == devId) {
        conStatus = 0;
    }
}

