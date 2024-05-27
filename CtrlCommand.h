#ifndef CTRLCOMMAND_H
#define CTRLCOMMAND_H

#include <qstring.h>
#include <qtypes.h>
typedef struct {
    uchar byte[8];
}CmdType;
//==============================================================================
//指令设置函数
CmdType setSystemCommand(uchar devId,uchar address);
CmdType setADCCommand(uchar devId,uchar coupler1,uchar coupler2,uchar inputMode1,uchar inputMode2,uchar range1,uchar range2 );
CmdType setDACCommand(uchar devId,uchar outputMode1,uchar outputMode2,uchar range1,uchar range2);
CmdType setADCCalCommand(uchar devID, uchar calConf);
CmdType setDACCalCommand(uchar devID, uchar calConf);
CmdType setFlashCommand(uchar devID, uchar operate);
//==============================================================================
// 指令解析函数
bool CRCVerify(CmdType aimCmd);
QString getDevConfig(CmdType rceCmd);
QString getDevRealRange(CmdType rceCmd);


#endif // CTRLCOMMAND_H
