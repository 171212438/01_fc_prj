#include "Bsp_Icu.h"

/************ Interrupt Map *******************/
void Icu_Key1_Edge_Detect(void);
void Icu_Key2_Edge_Detect(void);
void Icu_Key3_Edge_Detect(void);
extern void PORTA_IRQHandler(void);
extern void PORTD_IRQHandler(void);

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

#ifdef ICU_PORT_B_ISR_USED
extern ISR(ICU_PORT_B_ISR);
void PORTB_IRQHandler(void)
{
	ICU_PORT_B_ISR();
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
/************ Global functions *******************/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
void Bsp_Icu_Init(void)
{
	if (0 == GET_CPU_ID())
	{
		Icu_Init(&Icu_Config);
		IntMgr_SetPriority(PORTD_IRQn, 5);
		IntMgr_EnableInterrupt(PORTD_IRQn);
		IntMgr_SetPriority(PORTB_IRQn, 5);
		IntMgr_EnableInterrupt(PORTB_IRQn);
		Icu_EnableNotification(0);
		Icu_EnableNotification(1);
		Icu_EnableEdgeDetection(0);
		Icu_EnableEdgeDetection(1);
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
		IntMgr_SetPriority(PORTB_IRQn, 5);
		IntMgr_EnableInterrupt(PORTB_IRQn);
		Icu_EnableNotification(0);
		Icu_EnableNotification(1);
		Icu_EnableEdgeDetection(0);
		Icu_EnableEdgeDetection(1);
		Icu_EnableNotification(2);
		Icu_EnableEdgeDetection(2);
}
#endif




