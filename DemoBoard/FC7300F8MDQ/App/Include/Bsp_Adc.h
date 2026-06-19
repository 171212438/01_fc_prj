#ifndef _BSP_ADC_H_
#define _BSP_ADC_H_

#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_Adc_Init(void);
void Bsp_Adc_20ms_Task_Event(void);
void Bsp_Adc_1s_Task_Event(void);

#endif /* _BSP_ADC_H_ */
