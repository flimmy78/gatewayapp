/*************************************************
  Copyright (C), 1988-1999,  Tech. Co., Ltd.
  File name:      
  Author:       Version:        Date:
  Description:   
  Others:         
  Function List:  
    1. ....
  History:         
                   
    1. Date:
       Author:
       Modification:
    2. ...
*************************************************/

#ifndef __USART_H_
#define __USART_H_

/*
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*/
#include  "bsp.h"
#include "stm32f2xx_usart.h"



#define USART_BUFF_LENGHT				   	512

typedef struct
{
	uint16_t index;	
	uint8_t	 pdata[USART_BUFF_LENGHT];	
} usart_buff_t;







#define SerialBuffDefault() {0,0,{0}}



/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void usart2_init(u32 band_rate);
void usart3_init(u32 band_rate);
void usart5_init(u32 band_rate);
void USART2_IRQHandler(void);
void USART3_IRQHandler(void);
void UART5_IRQHandler(void);
void USART_OUT(USART_TypeDef* USARTx, uint8_t *Data,...);

#endif



