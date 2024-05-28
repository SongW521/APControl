#ifndef RECTHREAD_H
#define RECTHREAD_H


#include <QObject>
#include "hidconnect.h"
#include "CtrlCommand.h"
#include <QApplication>

class RecThread : public QObject
{

    Q_OBJECT
public:
    RecThread(HidConnect *Dev, int DevId);
signals:
    void CmdToMainSignal(CmdType cmd);
public slots:
    void RecPoll();
    void stopPollSlot(int DevId);
private:
    HidConnect *dev;
    int conStatus = 1;
    int devId;
};

#endif // RECTHREAD_H
