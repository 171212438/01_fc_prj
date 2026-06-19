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

#if (defined GPT_FTU_6_ISR_USED)
extern ISR(GPT_FTU_6_ISR);
void FTU6_IRQHandler(void)
{
    GPT_FTU_6_ISR();
}
#endif

#if (defined GPT_FTU_1_ISR_USED)
extern ISR(GPT_FTU_1_ISR);
void FTU1_IRQHandler(void)
{
    GPT_FTU_1_ISR();
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
/************ Global functions *******************/
void Bsp_Gpt_Init(void)
{
    if (0 == GET_CPU_ID())
    {
        Gpt_Init(&Gpt_Config);
        Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannel_WDGCondition);
        Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannel_WDGCondition, 15000U);
        IntMgr_SetPriority(FTU4_IRQn, 3);
        IntMgr_SetPriority(FTU1_IRQn, 3);
        IntMgr_EnableInterrupt(FTU4_IRQn);
        IntMgr_EnableInterrupt(FTU1_IRQn);
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
        Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannel_WDGInstance2Condition, 15000U);
        IntMgr_SetPriority(FTU6_IRQn, 3);
        IntMgr_EnableInterrupt(FTU6_IRQn);
#endif
    }
}

