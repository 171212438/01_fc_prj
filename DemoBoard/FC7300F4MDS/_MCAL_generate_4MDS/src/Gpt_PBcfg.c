/**
*   @file    Gpt_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt Post-Bulid configuration.
*   @details This file contains the Gpt Autosar Post-Bulid configuration.
*
*   @addtogroup GPT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_PBcfg.C
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       17/12/2021    QXW0032       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.4.0       14/11/2023    QXW0076       N/A          clear some misra warning
*   0.5.0       17/01/2024    QXW0076       N/A          add global time base and fix bug
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (update global time base, the timer width of FTU1/2 change to 24bit)
*                                                        and fix bug
*   0.7.0       26/04/2024    QXW0076       N/A          Optimization the xdm of GPT module and add TPU feature(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Cfg.h"
#include "Gpt.h"


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"
/**
* @{
* @brief The callback functions defined by the user to be called as channel notifications
*/
extern void Wdg_Cbk_GptNotification0(void);
extern void Gpt_WdgCondition_Notification(void);
/** @} */
#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"


GPT_DATA_SECTION static const Gpt_ConfigPredefChannelType *const Gpt_pInitPredefTimerChannelPB[GPT_HW_PREDEFTIMER_NUM]=
{
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR
};

GPT_DATA_SECTION static const Gpt_ConfigChannelType Gpt_InitChannelPB[MAX_CONFIGURED_CHANNELS_U8] =
{
    {
        .tGptChannelCommonConfig = {
            .u8GptChannel = (uint8)(GPT_FTU_CH_0), /* GPT physical channel no. */
            .eGptModule = (Gpt_ModuleType)(GPT_MODULE_FTU_4), /* hardware module ID */
            .eGptChannelMode = (Gpt_ChannelModeType)(GPT_CH_MODE_CONTINUOUS), /* Timer mode:continous/one-shot */
            .u32GptChannelTickValueMax = (Gpt_ValueType)(65535U), /* Maximum ticks value*/
            .bGptDebugModeEnable = (boolean)(FALSE), /* Debug Mode Enable/Disable */
            .u32GptWakeupSource = (uint32)0U, /* Wakeup source information */
            .bGptEnableWakeup = (boolean)FALSE, /* Wakeup capability */
            .pGptNotification = &Wdg_Cbk_GptNotification0,/* Channel notification */
            .eGtbEn = GPT_GTB_Dis,/* Global time fuction(Only for FTU/TPU/EFTU channel) */
        },
        
        .tGptChannelHwSpecificConfig = {

            .tGptFtuChannelConfig = {
                .eFtuClkSrc = GPT_FTU_MDOULE_PCC_CLK, 
                .eFtuPrescaler = GPT_FTU_DIV_32
            }
        }

    },

    {
        .tGptChannelCommonConfig = {
            .u8GptChannel = (uint8)(GPT_FTU_CH_1), /* GPT physical channel no. */
            .eGptModule = (Gpt_ModuleType)(GPT_MODULE_FTU_4), /* hardware module ID */
            .eGptChannelMode = (Gpt_ChannelModeType)(GPT_CH_MODE_CONTINUOUS), /* Timer mode:continous/one-shot */
            .u32GptChannelTickValueMax = (Gpt_ValueType)(65535U), /* Maximum ticks value*/
            .bGptDebugModeEnable = (boolean)(FALSE), /* Debug Mode Enable/Disable */
            .u32GptWakeupSource = (uint32)0U, /* Wakeup source information */
            .bGptEnableWakeup = (boolean)FALSE, /* Wakeup capability */
            .pGptNotification = &Gpt_WdgCondition_Notification,/* Channel notification */
            .eGtbEn = GPT_GTB_Dis,/* Global time fuction(Only for FTU/TPU/EFTU channel) */
        },
        
        .tGptChannelHwSpecificConfig = {

            .tGptFtuChannelConfig = {
                .eFtuClkSrc = GPT_FTU_MDOULE_PCC_CLK, 
                .eFtuPrescaler = GPT_FTU_DIV_32
            }
        }

    }


};

GPT_DATA_SECTION static const Gpt_ChannelType GPT_HW2ChannelMap[MAX_GPT_CHANNEL_NUM] =
{

        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_6*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_0_CH_7*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_6*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_1_CH_7*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_6*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_2_CH_7*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_6*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_3_CH_7*/
        GptConf_GptChannelConfiguration_GptChannel_WDG, /*mapping of FTU_4_CH_0*/
        GptConf_GptChannelConfiguration_GptChannel_WDGCondition, /*mapping of FTU_4_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_4_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_4_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_4_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_4_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_4_CH_6*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_4_CH_7*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_6*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FTU_5_CH_7*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FCPIT_0_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FCPIT_0_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FCPIT_0_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of FCPIT_0_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_0_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_0_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_0_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_0_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_1_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_1_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_1_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_1_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_2_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_2_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_2_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of TSTMP_2_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of AONTIMER_0_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of RTC_0_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of PTIMER_0_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of PTIMER_1_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of PTIMER_2_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_6*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_0_CH_7*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_1_CH_0*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_1_CH_1*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_1_CH_2*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_1_CH_3*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_1_CH_4*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_1_CH_5*/
        GPT_HW_CHANNEL_UNUSED, /*mapping of EFTU_0_TOM_1_CH_6*/
        GPT_HW_CHANNEL_UNUSED /*mapping of EFTU_0_TOM_1_CH_7*/
};



/*PostBuild configuration structure.*/
GPT_DATA_SECTION const Gpt_ConfigType Gpt_Config =
{
    Gpt_InitChannelPB,
    Gpt_pInitPredefTimerChannelPB,
    GPT_HW2ChannelMap,

    NULL_PTR,

    NULL_PTR,   
};

#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
