




#ifndef __PROTOCOL_H_
#define __PROTOCOL_H_

/*
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*/
#include  <includes.h>



//报文头尾标识
#define TELEGRAM_HEAD		0x68//
#define TELEGRAM_END		0x16


#define DIR_UP_FLAG			(u8)(1<<0)




//协议命令字
#define  LH_CMD_LOGIN		0x0100	//登录指令
#define  LH_CMD_HEART		0x0200	//心跳指令






typedef struct
{
	u8 head;
	u16 len;
	u32 addr;
	u8 ctr_uint;
	u16 dev_type;
	u16 cmd;
	u8 *data;
	u8 time[6];
	u16 crc16;
	u8 end;
}telegram_t;











#endif
