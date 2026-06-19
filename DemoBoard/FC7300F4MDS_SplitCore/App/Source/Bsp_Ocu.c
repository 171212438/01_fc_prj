#include "Bsp_Ocu.h"

/************ Interrupt Map *******************/
extern ISR(OCU_EFTU0_TOM_0_7_ISR);
void EFTU0_TOM_0_7_IRQHandler(void)
{
    OCU_EFTU0_TOM_0_7_ISR();
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
        Ocu_SetAbsoluteThreshold(OcuConf_OcuChannel_OcuChannel_2, 0, 0x8000);
        Ocu_EnableNotification(OcuConf_OcuChannel_OcuChannel_2);
        Ocu_StartChannel(OcuConf_OcuChannel_OcuChannel_2);
        Ocu_SetPinAction(OcuConf_OcuChannel_OcuChannel_2, OCU_TOGGLE);

        IntMgr_EnableInterrupt(EFTU0_TOM0_7_IRQn);
        IntMgr_SetPriority(EFTU0_TOM0_7_IRQn, 4);
    }
    else if (1 == GET_CPU_ID())
    {
        Ocu_Init(&Ocu_Config);
        Ocu_EnableNotification(OcuConf_OcuChannel_OcuChannel_1);
        Ocu_StartChannel(OcuConf_OcuChannel_OcuChannel_1);
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
}
#endif
