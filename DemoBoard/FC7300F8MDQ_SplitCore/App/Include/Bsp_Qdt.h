#ifndef _BSP_QDT_H_
#define _BSP_QDT_H_

#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_Qdt_Init(void);
void Bsp_Qdt_1s_Task_Event(void);
void Bsp_Qdt_500us_Task_Event(void);
#endif /* _BSP_QDT_H_ */
