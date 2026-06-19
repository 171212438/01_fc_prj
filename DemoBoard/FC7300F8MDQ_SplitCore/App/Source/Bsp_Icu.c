#include "Bsp_Icu.h"

/************ Interrupt Map *******************/
void Icu_Key1_Edge_Detect(void);
void Icu_Key2_Edge_Detect(void);
void Icu_Key3_Edge_Detect(void);


uint32 u32GlobalPeroid;
uint32 u32GlobalActiveTime;
#ifdef ICU_PORT_A_ISR_USED
extern ISR(ICU_PORT_A_ISR);
void PORTA_IRQHandler(void)
{
	ICU_PORT_A_ISR();
}
#endif

#ifdef ICU_PORT_D_ISR_USED
extern ISR(ICU_PORT_D_ISR);
void PORTD_IRQHandler(void)
{
	ICU_PORT_D_ISR();
}
#endif

/************ Callback functions *******************/
void Icu_Key1_Edge_Detect(void)
{
    __asm("nop");
}

void Icu_Key2_Edge_Detect(void)
{
    __asm("nop");
}

void Icu_Key3_Edge_Detect(void)
{
    __asm("nop");
}


void  Bsp_Icu_5ms_Task_Event(void)
{
	Icu_DutyCycleType t_l_DutyCycle;
	Icu_GetDutyCycleValues(IcuConf_IcuChannel_IcuChannel_Eftu_DutyCycle_Measurement,&t_l_DutyCycle);
	if(t_l_DutyCycle.PeriodTime != 0)
	{
		u32GlobalActiveTime = t_l_DutyCycle.ActiveTime;
		u32GlobalPeroid = t_l_DutyCycle.PeriodTime;
	}
}

/************ Global functions *******************/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
void Bsp_Icu_Init(void)
{
	if (0 == GET_CPU_ID())
	{
		Icu_Init(&Icu_Config);
		IntMgr_SetPriority(PORTD_IRQn, 5);
		IntMgr_EnableInterrupt(PORTD_IRQn);
		Icu_EnableNotification(0);
		Icu_EnableNotification(1);
		Icu_EnableEdgeDetection(0);
		Icu_EnableEdgeDetection(1);
		/*The pwm input is from EFTU0_TOM0_CH0 */
		Icu_StartSignalMeasurement(IcuConf_IcuChannel_IcuChannel_Eftu_DutyCycle_Measurement);

	}
	else if(1 == GET_CPU_ID())
	{
		Icu_Init(&Icu_Config);
		IntMgr_SetPriority(PORTA_IRQn, 4);
		IntMgr_EnableInterrupt(PORTA_IRQn);
		Icu_EnableNotification(2);
		Icu_EnableEdgeDetection(2);
	}
}
#else
void Bsp_Icu_Init(void)
{

		Icu_Init(&Icu_Config);
		IntMgr_SetPriority(PORTD_IRQn, 5);
		IntMgr_EnableInterrupt(PORTD_IRQn);
		IntMgr_SetPriority(PORTA_IRQn, 4);
		IntMgr_EnableInterrupt(PORTA_IRQn);
		Icu_EnableNotification(0);
		Icu_EnableNotification(1);
		Icu_EnableEdgeDetection(0);
		Icu_EnableEdgeDetection(1);
		Icu_EnableNotification(2);
		Icu_EnableEdgeDetection(2);
}
#endif




