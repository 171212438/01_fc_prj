#ifndef _BSP_PWM_H_
#define _BSP_PWM_H_

#include "Bsp_McalHeader.h"



/************ Global functions *******************/
void Bsp_Pwm_Init(void);
void Bsp_Pwm_20ms_Task_Event(void);
void Bsp_Pwm_5ms_Task_Event(void);

#endif /* _BSP_PWM_H_ */
