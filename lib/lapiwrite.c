/**********************************************************
        LMOSEM文件管理API文件lapiwrite.c
***********************************************************
                彭东 ＠ 2013.09.15.12.10
**********************************************************/
#include "lmosemtypes.h"
#include "lmosemmctrl.h"


sysstus_t api_write(hand_t fhand,buf_t buf,size_t len,uint_t flgs)
{
    sysstus_t rets;
    API_ENTRY_PARE4(SNR_FS_WRITE,rets,fhand,buf,len,flgs);
    return rets;
}