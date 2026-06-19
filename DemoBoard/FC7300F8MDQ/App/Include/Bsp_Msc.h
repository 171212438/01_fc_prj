#ifndef _BSP_MSC_H_
#define _BSP_MSC_H_

#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_Msc_Init(void);
void Bsp_Msc_5ms_Task_Event(void);
void Bsp_Msc_20ms_Task_Event(void);
void Bsp_Msc_100ms_Task_Event(void);
void Bsp_Msc_1s_Task_Event(void);

#endif /* _BSP_LIN_H_ */
