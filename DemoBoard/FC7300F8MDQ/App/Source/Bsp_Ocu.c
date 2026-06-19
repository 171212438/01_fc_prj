#include "Bsp_Ocu.h"

/************ Interrupt Map *******************/
#if (defined OCU_FTU_0_ISR_USED)
extern ISR(OCU_FTU_0_ISR);
void FTU0_IRQHandler(void)
{
    OCU_FTU_0_ISR();
}
#endif

#if (defined OCU_FTU_3_ISR_USED)
extern ISR(OCU_FTU_3_ISR);
void FTU3_IRQHandler(void)
{
    OCU_FTU_3_ISR();
}
#endif

/************ Callback functions *******************/
void Ocu_Notification_channel_0(void)
{
    __asm("nop");
}
void Ocu_Notification_channel_1(void)
{
    __asm("nop");
}
/************ Global functions *******************/
#if (OCU_MULTICORE_SUPPORT == STD_ON)
void Bsp_Ocu_Init(void)
{
	if (0 == GET_CPU_ID())
	{
	    Ocu_Init(&Ocu_Config);
	    Ocu_EnableNotification(OcuConf_OcuChannel_OcuChannel_0);
	    Ocu_StartChannel(OcuConf_OcuChannel_OcuChannel_0);
	    Ocu_DisableNotification(OcuConf_OcuChannel_OcuChannel_0);

	    IntMgr_SetPriority(FTU0_IRQn, 4);
	    IntMgr_EnableInterrupt(FTU0_IRQn);
	}
	else if(1 == GET_CPU_ID())
	{
//	    Ocu_Init(&Ocu_Config);
//	    Ocu_EnableNotification(OcuConf_OcuChannel_OcuChannel_1);
//	    Ocu_StartChannel(OcuConf_OcuChannel_OcuChannel_1);
//
//	    IntMgr_SetPriority(FTU3_IRQn, 4);
//	    IntMgr_EnableInterrupt(FTU3_IRQn);
	}
}

#else
void Bsp_Ocu_Init(void)
{
    Ocu_Init(&Ocu_Config);
    Ocu_EnableNotification(OcuConf_OcuChannel_OcuChannel_0);
    Ocu_StartChannel(OcuConf_OcuChannel_OcuChannel_0);
    Ocu_DisableNotification(OcuConf_OcuChannel_OcuChannel_0);
    Ocu_StopChannel(OcuConf_OcuChannel_OcuChannel_0);
    Ocu_DeInit();

    IntMgr_SetPriority(FTU0_IRQn, 4);
    IntMgr_EnableInterrupt(FTU0_IRQn);


}
#endif




