#include "Bsp_Gpt.h"

/************ Interrupt Map *******************/
#if (defined GPT_FTU_4_ISR_USED)
extern ISR(GPT_FTU_4_ISR);
void FTU4_IRQHandler(void)
{
    GPT_FTU_4_ISR();
}
#endif

#if (defined GPT_FTU_5_ISR_USED)
extern ISR(GPT_FTU_5_ISR);
void FTU5_IRQHandler(void)
{
    GPT_FTU_5_ISR();
}
#endif

#if (defined GPT_EFTU_0_TOM_1_ISR_USED)
extern ISR(GPT_EFTU_0_TOM_1_ISR);
void EFTU0_TOM_8_15_IRQHandler(void)
{
    GPT_EFTU_0_TOM_1_ISR();
}
#endif

#if (defined GPT_EFTU_1_TOM_0_ISR_USED)
extern ISR(GPT_EFTU_1_TOM_0_ISR);
void EFTU1_TOM_0_7_IRQHandler(void)
{
    GPT_EFTU_1_TOM_0_ISR();
}
#endif

/************ Callout Functions *******************/
void Gpt_WdgCondition_Notification(void)
{
    Wdg_174_Instance0_SetTriggerCondition(50);
}
#if (WDG_INSTANCE1 == STD_ON)
void Gpt_WdgInstance1Condition_Notification(void)
{
    Wdg_174_Instance1_SetTriggerCondition(50);
}
#endif
#if (WDG_INSTANCE2 == STD_ON)
void Gpt_WdgInstance2Condition_Notification(void)
{
    Wdg_174_Instance2_SetTriggerCondition(50);
}
#endif
#if (WDG_INSTANCE3 == STD_ON)
void Gpt_WdgInstance3Condition_Notification(void)
{
    Wdg_174_Instance3_SetTriggerCondition(50);
}
#endif
/************ Global functions *******************/
void Bsp_Gpt_Init(void)
{
    if (0 == GET_CPU_ID())
    {
    	Eftu_Init(&Eftu_Config);
        Gpt_Init(&Gpt_Config);
        Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannel_WDGCondition);
        Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannel_WDGCondition, 15000U);
        IntMgr_SetPriority(FTU4_IRQn, 3);
        IntMgr_EnableInterrupt(FTU4_IRQn);
    }else if(1 == GET_CPU_ID())
    {
#if (WDG_INSTANCE1 == STD_ON)
        Gpt_Init(&Gpt_Config);
        Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannel_WDGInstance1Condition);
        Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannel_WDGInstance1Condition, 15000U);
        IntMgr_SetPriority(FTU5_IRQn, 3);
        IntMgr_EnableInterrupt(FTU5_IRQn);
#endif
    }else if(2 == GET_CPU_ID())
    {
#if (WDG_INSTANCE2 == STD_ON)
        Gpt_Init(&Gpt_Config);
        Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannel_WDGInstance2Condition);
        Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannel_WDGInstance2Condition, 480000U);
        IntMgr_SetPriority(eFTU0_TOM_8TO15_IRQn, 3);
        IntMgr_EnableInterrupt(eFTU0_TOM_8TO15_IRQn);
#endif
    }else if(3 == GET_CPU_ID())
    {
#if (WDG_INSTANCE3 == STD_ON)
        Gpt_Init(&Gpt_Config);
        Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannel_WDGInstance3Condition);
        Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannel_WDGInstance3Condition, 480000U);
        IntMgr_SetPriority(eFTU1_TOM_0TO7_IRQn, 3);
        IntMgr_EnableInterrupt(eFTU1_TOM_0TO7_IRQn);
#endif
    }
}

