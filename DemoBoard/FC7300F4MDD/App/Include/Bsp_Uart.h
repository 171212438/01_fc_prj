#ifndef _BSP_UART_H_
#define _BSP_UART_H_

#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_Uart_Init(void);

#if UART_MULTICORE_SUPPORT == STD_ON

#else


#endif

#endif /* _BSP_UART_H_ */
