#ifndef _BSP_CAN_H_
#define _BSP_CAN_H_

#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_Can_Init(void);
void Bsp_Can_1s_Task_Event(void);
void Bsp_Can_100ms_Task_Event(void);
void Bsp_Can_5ms_Task_Event(void);

#endif /* _BSP_CAN_H_ */
