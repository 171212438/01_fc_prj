#include "Bsp_Ocu.h"

/************ Interrupt Map *******************/

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
    }
    else if(1 == GET_CPU_ID())
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




