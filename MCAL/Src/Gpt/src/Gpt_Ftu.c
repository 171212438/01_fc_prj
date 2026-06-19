/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file    Gpt_Ftu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Ftu - driver API and development errors implemention.
 *   @details This file contains the Gpt_Ftu Autosar driver API and development errors implemention.
 *
 *   @addtogroup Gpt_Ftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_FTU
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
*   0.1.0       24/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.4.0       14/11/2023    QXW0076       N/A          clear some misra warning
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (update global time base, the timer width
of FTU1/2 change to 24bit)
*                                                        and fix bug
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add
Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/
/* PRQA S 2071,5087 EOF
   2071: [E] This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON: Variables and text need to be placed in the specified location
*/
#ifdef __cplusplus
extern "C"
{
#endif
#define DEBUG_LOG
/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"
#include "Gpt_Hw_Irq.h"
#include "Gpt_Ftu.h"
#include "SchM_Gpt.h"
#include "Gpt_Ftu_RegOps.h"
#include "Common_Cfg.h"

/**
 * @file           Gpt_Ftu.c
 * @{
 */

/** @} */

#if defined(GPT_FTU_USED)
/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS, MACROS)
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define GPT_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
/**
 * @brief          Local array variable used to store the runtime target time value.
 */
GPT_DATA_SECTION static uint32 Gpt_Ftu_u32TargetValue[MAX_CONFIGURED_CHANNELS_U8];

#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
GPT_DATA_SECTION static uint32 Gpt_Ftu_u32NextTargetValue[MAX_CONFIGURED_CHANNELS_U8];
#endif

/**
 * @brief          Local array variable used to store the Ftu Compare value.
 */
GPT_DATA_SECTION static uint32 Gpt_Ftu_u32CompareValue[MAX_CONFIGURED_CHANNELS_U8];

/**
 * @brief          Local array variable used to store the Ftu Channel Mode.
 */
GPT_DATA_SECTION static Gpt_ChannelModeType Gpt_Ftu_eChannelMode[MAX_CONFIGURED_CHANNELS_U8];

#define GPT_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"

#define GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"
/**
 * @brief          Pointer to the logic channel map.
 */
GPT_DATA_SECTION static const Gpt_ChannelType *pGptFtuHw2ChannelMap;

#define GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"
/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

#if defined(GPT_FTU_ISR_USED)

GPT_TEXT_SECTION static void Gpt_Ftu_ProcessCommonInterrupt(uint8 u8FtuModule, uint8 u8FtuChannel);

#if defined(GPT_FTU_0_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_0_ISR);
#endif
#if defined(GPT_FTU_1_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_1_ISR);
#endif
#if defined(GPT_FTU_2_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_2_ISR);
#endif
#if defined(GPT_FTU_3_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_3_ISR);
#endif
#if defined(GPT_FTU_4_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_4_ISR);
#endif
#if defined(GPT_FTU_5_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_5_ISR);
#endif
#if defined(GPT_FTU_6_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_6_ISR);
#endif
#if defined(GPT_FTU_7_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_7_ISR);
#endif
#if defined(GPT_FTU_8_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_8_ISR);
#endif
#if defined(GPT_FTU_9_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_9_ISR);
#endif
#if defined(GPT_FTU_10_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_10_ISR);
#endif
#if defined(GPT_FTU_11_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_FTU_11_ISR);
#endif
#endif
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/

#if defined(GPT_FTU_ISR_USED)
/**
 * @brief Process common interrupt function [SWDESG_GPT_130]
 *
 * @param u8FtuModule FTU module
 * @param u8FtuChannel FTU channel for current module
 */
/* [SWS_Gpt_00186] */
GPT_TEXT_SECTION static void Gpt_Ftu_ProcessCommonInterrupt(uint8 u8FtuModule, uint8 u8FtuChannel)
{
    uint8  u8ConfigChannelIndex;
    uint32 u32CvRegVal;
    uint32 u32CntRegVal;
    uint32 u32ModRegVal;
    uint32 u32NextValue;
    uint32 u32NextValue_Diff;
    uint32 u32LoopTimeout = 65535U;

    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:The macro GPT_FTU_MODULE is meaningful although the value of it is zero */
    u8ConfigChannelIndex =
        pGptFtuHw2ChannelMap[GPT_FTU_MODULE + ((uint8)GPT_FTU_MODULE_CHANNEL_NUM_U8 * u8FtuModule) +
                             u8FtuChannel];
/* PRQA S 2986 -- */
#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
    if (Gpt_Ftu_u32NextTargetValue[u8ConfigChannelIndex] != 0x0U)
    {
        Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex] =
            Gpt_Ftu_u32NextTargetValue[u8ConfigChannelIndex];
        Gpt_Ftu_u32NextTargetValue[u8ConfigChannelIndex] = 0x0U;
    }
#endif

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_35();
    if (Gpt_Ftu_eChannelMode[u8ConfigChannelIndex] == GPT_CH_MODE_ONESHOT)
    {
        /*  [SWS_Gpt_00327]*/
        GPT_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[u8FtuModule], u8FtuChannel);
    }
    else
    {
        do
        {
            /*  [SWS_Gpt_00327]*/
            GPT_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[u8FtuModule], u8FtuChannel);

            u32CvRegVal  = GPT_FTU_HWA_ReadChannelValue(FTU_PTRS[u8FtuModule], u8FtuChannel);
            u32CntRegVal = GPT_FTU_HWA_ReadModuleCounter(FTU_PTRS[u8FtuModule]);
            u32ModRegVal = GPT_FTU_HWA_ReadModuleCompareValue(FTU_PTRS[u8FtuModule]);
            if (u32CvRegVal > u32CntRegVal)
            {
                u32CntRegVal = u32CntRegVal + u32ModRegVal + 1u;
            }
            else
            {
                /* Do nothing */
            }
            u32NextValue =
                ((((u32CntRegVal - u32CvRegVal) / Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex]) + 1u) *
                 Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex]) +
                u32CvRegVal;
            if (u32NextValue > u32ModRegVal)
            {
                u32NextValue = (u32NextValue - u32ModRegVal) - 1u;
            }
            else
            {
                /* Do thing */
            }
            GPT_FTU_HWA_SetChannelValue(FTU_PTRS[u8FtuModule], u8FtuChannel, u32NextValue);
            /* Store the Compare Value to ram variable */
            Gpt_Ftu_u32CompareValue[u8ConfigChannelIndex] = u32NextValue;
            u32CntRegVal = GPT_FTU_HWA_ReadModuleCounter(FTU_PTRS[u8FtuModule]);
            if (u32CntRegVal < u32NextValue)
            {
                u32NextValue_Diff = u32NextValue - u32CntRegVal;
            }
            else
            {
                u32NextValue_Diff = u32ModRegVal - u32CntRegVal + u32NextValue;
            }
            u32LoopTimeout = u32LoopTimeout - 1U;
        }
        while ((u32NextValue_Diff > Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex]) &&
               (u32LoopTimeout > 0U));
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_35();

    /* Call GPT upper layer handler */
    /* PRQA S 2986,3469 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:The macro GPT_FTU_MODULE is meaningful although the value of it is zero */
    Gpt_Hw_ProcessCommonInterrupt(u8FtuChannel,
                                  GPT_FTU_MODULE +
                                      ((uint8)GPT_FTU_MODULE_CHANNEL_NUM_U8 * u8FtuModule));
    /* PRQA S 2986,3469 -- */
}

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
#if defined(GPT_FTU_0_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_0_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_0], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_0, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_1_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_1_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_1], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_1, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_2_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_2_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_2], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_2, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_3_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_3_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_3], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_3, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_4_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_4_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_4], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_4, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_5_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_5_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_5], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_5, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_6_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_6_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_6], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_6, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_7_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_7_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_7], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_7, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_8_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_8_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_8], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_8, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_9_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_9_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_9], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_9, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_10_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_10_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_10], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_10, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_FTU_11_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(GPT_FTU_11_ISR)
{
    uint8 u8FTUchannel;

    for (u8FTUchannel = 0U; u8FTUchannel < GPT_FTU_MODULE_CHANNEL_NUM_U8; u8FTUchannel++)
    {
        if ((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
            (GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[GPT_FTU_11], u8FTUchannel)))
        {
            Gpt_Ftu_ProcessCommonInterrupt(GPT_FTU_11, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

/* PRQA S 3006,1006 -- */
#endif

/**
 * @brief FTU initialization [SWDESG_GPT_068]
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 * @param bDbgModeEnable Enable/Disable debug mode flag
 * @param pFtuConfig FTU configuration pointer
 * @param u8Gtbmode FTU Gtb mode
 * @param pFtuHw2ChannelMap Hardware to logic channel map pointer
 * @param eChannelMode FTU channel mode
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_Init(Gpt_ModuleType                  eModule,
                                      uint8                           u8Channel,
                                      boolean                         bDbgModeEnable,
                                      const Gpt_ConfigChannelFtuType *pFtuConfig,
                                      uint8                           u8Gtbmode,
                                      const Gpt_ChannelType          *pFtuHw2ChannelMap,
                                      Gpt_ChannelModeType             eChannelMode)
{
    uint8 u8ConfigChannelIndex;

    /* disable timer channel */
    GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_NO_CLK);
    /* Set register value update mode */
    GPT_FTU_HWA_ClearModuleUpdateRegBySync(FTU_PTRS[eModule]);

    /* disable interrupt on this channel*/
    GPT_FTU_HWA_DisableChannelInterrupt(FTU_PTRS[eModule], u8Channel);

    /* clear interrupt flags */
    GPT_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[eModule], u8Channel);

    /* Clear Fault interrupt flags */
    GPT_FTU_HWA_ClearModuleAllFaultFlag(FTU_PTRS[eModule]);

    /* Disable TOIE flags */
    GPT_FTU_HWA_DisableOverflowInterrupt(FTU_PTRS[eModule]);

    /* Disable FAULTM flags */
    GPT_FTU_HWA_DisableModuleFaultMode(FTU_PTRS[eModule]);

    /*config Ftu Gtb mode*/
    GPT_FTU_HWA_ConfigGTBMode(FTU_PTRS[eModule], u8Gtbmode);

    if ((boolean)TRUE == bDbgModeEnable)
    {
        /* enable debug mode */

        GPT_FTU_HWA_ConfigModuleDebugMode(FTU_PTRS[eModule], GPT_FTU_DBG_COUNTER_WORKS_CHN_WORKS);
    }
    else
    {
        /* disable debug mode */
        GPT_FTU_HWA_ConfigModuleDebugMode(FTU_PTRS[eModule], GPT_FTU_DBG_COUNTER_STOP_CHN_WORKS);
    }

    /* Set channel mode */
    GPT_FTU_HWA_SetOutputMode(FTU_PTRS[eModule], u8Channel);

    /* Set Counter register to 0 and Initial Counter Value to 0 [SWS_Gpt_00329] */
    GPT_FTU_HWA_ClearModuleCounterInitialValue(FTU_PTRS[eModule], (uint32)0U);
    GPT_FTU_HWA_ClearModuleCounter(FTU_PTRS[eModule], (uint32)1U);

    /* Assigning the logic channel map pointer */
    pGptFtuHw2ChannelMap = pFtuHw2ChannelMap;
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:The macro GPT_FTU_MODULE is meaningful although the value of it is zero */
    u8ConfigChannelIndex =
        pGptFtuHw2ChannelMap[GPT_FTU_MODULE + ((uint8)GPT_FTU_MODULE_CHANNEL_NUM_U8 * eModule) + u8Channel];
    /* PRQA S 2986 -- */
#if (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON)
    if ((eModule == GPT_MODULE_FTU_1) || (eModule == GPT_MODULE_FTU_2))
    {
        /* Set Compare Value register to 0xFFFFFF for FTU1 or FTU2(in FC7240/FC7300F8MDQ) */
        GPT_FTU_HWA_SetChannelValue(FTU_PTRS[eModule], u8Channel, (uint32)0xFFFFFFU);

        /* Store the Compare Value to ram variable */
        Gpt_Ftu_u32CompareValue[u8ConfigChannelIndex] = (uint32)0xFFFFFFU;

        /* write the Ftu Modulo Register with 0xFFFFFF for FTU1 or FTU2(in FC7240/FC7300F8MDQ)*/
        GPT_FTU_HWA_SetModuleCompareValue(FTU_PTRS[eModule], (uint32)0xFFFFFFU);
    }
    else
#endif /* (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON) */
    {
        /* Set Compare Value register to 0xFFFF */
        GPT_FTU_HWA_SetChannelValue(FTU_PTRS[eModule], u8Channel, (uint32)0xFFFFU);

        /* Store the Compare Value to ram variable */
        Gpt_Ftu_u32CompareValue[u8ConfigChannelIndex] = (uint32)0xFFFFU;

        /* write the Ftu Modulo Register with 0xFFFF */
        GPT_FTU_HWA_SetModuleCompareValue(FTU_PTRS[eModule], (uint32)0xFFFFU);
    }

    /* set the prescaler with the wanted value */
    GPT_FTU_HWA_SetModulePrescale(FTU_PTRS[eModule], pFtuConfig->eFtuPrescaler);

    Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex] = 0U;

#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
    Gpt_Ftu_u32NextTargetValue[u8ConfigChannelIndex] = 0U;
#endif

    Gpt_Ftu_eChannelMode[u8ConfigChannelIndex] = eChannelMode;
    /* set timer clock */
    if (GPT_FTU_MDOULE_BUS_CLK == pFtuConfig->eFtuClkSrc)
    {
        GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_BUS_CLK);
    }
    else if (GPT_FTU_MDOULE_NO_CLK == pFtuConfig->eFtuClkSrc)
    {
        GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_NO_CLK);
    }
    else
    {
        GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_PCC_CLK);
        if (pFtuConfig->eFtuClkSrc > GPT_FTU_MDOULE_PCC_CLK)
        {
            GPT_FTU_HWA_SetExternalClkSrc(FTU_PTRS[eModule], (uint32)(pFtuConfig->eFtuClkSrc) - 4U);
        }
    }
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initialization [SWDESG_GPT_070]
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_DeInit(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8  u8ConfigChannelIndex;
    uint32 u32RegVal;

    /* Set register value update mode */
    GPT_FTU_HWA_ClearModuleUpdateRegBySync(FTU_PTRS[eModule]);

    /* disable timer channel */
    GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_NO_CLK);

    /* disable interrupts */
    GPT_FTU_HWA_DisableChannelInterrupt(FTU_PTRS[eModule], u8Channel);

    /* Read FTU channel interrupt flag, clear interrupt flag must read CSC register first */
    u32RegVal = GPT_FTU_HWA_ReadChannelInterruptFlag(FTU_PTRS[eModule], u8Channel);

    /* clear interrupt flag */
    if (0u != u32RegVal)
    {
        GPT_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[eModule], u8Channel);
    }

    /* Clear output mode */
    GPT_FTU_HWA_ClearOutputMode(FTU_PTRS[eModule], u8Channel);

    /*  Set Counter register to 0 and Initial Counter Value to 0 */
    GPT_FTU_HWA_ClearModuleCounterInitialValue(FTU_PTRS[eModule], (uint32)0U);
    GPT_FTU_HWA_ClearModuleCounter(FTU_PTRS[eModule], (uint32)0U);
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:The macro GPT_FTU_MODULE is meaningful although the value of it is zero */
    u8ConfigChannelIndex =
        pGptFtuHw2ChannelMap[GPT_FTU_MODULE + ((uint8)GPT_FTU_MODULE_CHANNEL_NUM_U8 * eModule) + u8Channel];
    /* PRQA S 2986 -- */
    /* Set Compare Value register to 0 */
    GPT_FTU_HWA_SetChannelValue(FTU_PTRS[eModule], u8Channel, (uint32)0U);

    /* Store the Compare Value to ram variable */
    Gpt_Ftu_u32CompareValue[u8ConfigChannelIndex] = (uint32)0U;

    /*  Write the Ftu Modulo Register to 0 */
    GPT_FTU_HWA_SetModuleCompareValue(FTU_PTRS[eModule], (uint32)0U);

    /* Clear debug mode */
    GPT_FTU_HWA_ConfigModuleDebugMode(FTU_PTRS[eModule], GPT_FTU_DBG_COUNTER_STOP_CHN_WORKS);

    Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex] = 0U;
}
#endif

/**
 * @brief Start FTU timer [SWDESG_GPT_074]
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 * @param u32Value FTU start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)
{
    uint8  u8ConfigChannelIndex;
    uint32 u32CounterValue;
    uint32 u32CompareValue;
    uint32 u32RegVal;
    uint32 u32CounterMaxValue;

    /* To update accurate value for FTU_CV_ADDR32, interrupts is suspended*/
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_18();

    /* Configure channel compare register */
    u32CounterValue = GPT_FTU_HWA_ReadModuleCounter(FTU_PTRS[eModule]);

#if (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON)
    if ((eModule == GPT_MODULE_FTU_1) || (eModule == GPT_MODULE_FTU_2))
    {
        u32CounterMaxValue = GPT_FTU_24BIT_CNT_MAX_VALUE_U32;
    }
    else
#endif /* (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON) */
    {
        u32CounterMaxValue = GPT_FTU_CNT_MAX_VALUE_U32;
    }

    if ((uint32)(u32CounterValue + u32Value) > u32CounterMaxValue)
    {
        u32CompareValue = (uint32)(u32Value - (u32CounterMaxValue - u32CounterValue + 1U));
    }
    else
    {
        u32CompareValue = (uint32)(u32CounterValue + u32Value);
    }
    /* Read FTU channel interrupt flag, clear interrupt flag must read CSC register first */
    u32RegVal = GPT_FTU_HWA_ReadChannelInterruptFlag(FTU_PTRS[eModule], u8Channel);

    /* clear interrupt flag */
    if (0U != u32RegVal)
    {
        GPT_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[eModule], u8Channel);
    }
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:The macro GPT_FTU_MODULE is meaningful although the value of it is zero */
    u8ConfigChannelIndex =
        pGptFtuHw2ChannelMap[GPT_FTU_MODULE + ((uint8)GPT_FTU_MODULE_CHANNEL_NUM_U8 * eModule) + u8Channel];
    /* PRQA S 2986 -- */
    /* enable interrupt */
    GPT_FTU_HWA_EnableChannelInterrupt(FTU_PTRS[eModule], u8Channel);

    /* Set channel compare value */
    GPT_FTU_HWA_SetChannelValue(FTU_PTRS[eModule], u8Channel, (uint32)u32CompareValue);

    /* Store the Compare Value to ram variable */
    Gpt_Ftu_u32CompareValue[u8ConfigChannelIndex] = (uint32)u32CompareValue;

    Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex] = u32Value;

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_18();
}

/**
 * @brief Stop FTU timer [SWDESG_GPT_076]
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel)
{

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_19();
    /* disable interrupt */
    GPT_FTU_HWA_DisableChannelInterrupt(FTU_PTRS[eModule], u8Channel);
    GPT_FTU_HWA_ClearChannelFlag(FTU_PTRS[eModule], u8Channel);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_19();
}

/**
 * @brief Get FTU elapsed value [SWDESG_GPT_073]
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 * @param pReturnChannelOverflow Channel overflow flag
 * @param pTargetValue Target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Ftu_GetTimeElapsed(Gpt_ModuleType eModule,
                                                  uint8          u8Channel,
                                                  boolean       *pReturnChannelOverflow,
                                                  uint32        *pTargetValue)
{
    uint8  u8ConfigChannelIndex;
    uint32 u32ReturnValue;
    uint32 u32CompareValue;
    uint32 u32CounterValue;
    uint32 u32CounterMaxValue;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23();
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:The macro GPT_FTU_MODULE is meaningful although the value of it is zero */
    u8ConfigChannelIndex =
        pGptFtuHw2ChannelMap[GPT_FTU_MODULE + ((uint8)GPT_FTU_MODULE_CHANNEL_NUM_U8 * eModule) + u8Channel];
    /* PRQA S 2986 -- */
    /* Read compare value registers from ram variable, Because CV has an update mechanism */
    u32CompareValue = Gpt_Ftu_u32CompareValue[u8ConfigChannelIndex];

    /* Read FTU counter value */
    u32CounterValue = GPT_FTU_HWA_ReadModuleCounter(FTU_PTRS[eModule]);

    *pTargetValue = Gpt_Ftu_u32TargetValue[u8ConfigChannelIndex];

#if (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON)
    if ((eModule == GPT_MODULE_FTU_1) || (eModule == GPT_MODULE_FTU_2))
    {
        u32CounterMaxValue = GPT_FTU_24BIT_CNT_MAX_VALUE_U32;
    }
    else
#endif /* (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON) */
    {
        u32CounterMaxValue = GPT_FTU_CNT_MAX_VALUE_U32;
    }

    /* Calculate the elapsed time [SWS_Gpt_00361] */
    if (u32CounterValue > u32CompareValue)
    {
        /* Counter value passed the set-up Target value - might have roll-over */
        if (((u32CounterMaxValue - u32CounterValue) + u32CompareValue) <= *pTargetValue)
        {
            /* New compare value was read by register read - isr served in time - we have roll-over */
            u32ReturnValue = *pTargetValue - ((u32CounterMaxValue - u32CounterValue) +
                                              u32CompareValue + GPT_FTU_OVERFLOW_PAD_U32);
        }
        else
        {
            /* There is an delay in serving ISR or updating u32CompareValue - report last timer time */
            u32ReturnValue = *pTargetValue;
        }
    }
    else if ((u32CounterValue < u32CompareValue) &&
             ((u32CompareValue - u32CounterValue) <= *pTargetValue))
    {
        /* Timer in between ISRs period */
        u32ReturnValue = *pTargetValue - (u32CompareValue - u32CounterValue);
    }
    else
    {
        u32ReturnValue = *pTargetValue;
    }

    /*Check interrupt status flag*/
    if (0u != (GPT_FTU_HWA_ReadChannelInterruptFlag(FTU_PTRS[eModule], u8Channel)))
    {
        /* Channel counter was roll-over */
        *pReturnChannelOverflow = (boolean)TRUE;
    }
    else
    {
        /* Channel counter was not rollover */
        *pReturnChannelOverflow = (boolean)FALSE;
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23();
    return u32ReturnValue;
}

#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
/**
 * @brief FTU change next timeout value [SWDESG_GPT_069]
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 * @param u32Value The value of next timeout
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_ChangeNextTimeoutValue(Gpt_ModuleType eModule,
                                                        uint8          u8Channel,
                                                        uint32         u32Value)
{
    uint8 u8ConfigChannelIndex;
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:The macro GPT_FTU_MODULE is meaningful although the value of it is zero */
    u8ConfigChannelIndex =
        pGptFtuHw2ChannelMap[GPT_FTU_MODULE + ((uint8)GPT_FTU_MODULE_CHANNEL_NUM_U8 * eModule) + u8Channel];
    /* PRQA S 2986 -- */
    /* Update the target time value to be used on next cycle */
    Gpt_Ftu_u32NextTargetValue[u8ConfigChannelIndex] = u32Value;
}
#endif /* GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON */

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Start predef timer [SWDESG_GPT_071]
 *
 * @param eModule FTU module
 * @param bDbgModeEnable Enable/Disable debug mode flag
 * @param eClkSrc FTU clock source
 * @param ePrescale FTU prescaler
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_StartPredefTimer(Gpt_ModuleType          eModule,
                                                  boolean                 bDbgModeEnable,
                                                  Gpt_FtuModuleClkSrcType eClkSrc,
                                                  Gpt_FtuPrescalerType    ePrescale)
{

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21();

    /* Clear module update register mode */
    GPT_FTU_HWA_ClearModuleUpdateRegBySync(FTU_PTRS[eModule]);

    /* disable the FTU timer */
    GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_NO_CLK);

    /* Clear Fault interrupt flags */
    GPT_FTU_HWA_ClearModuleAllFaultFlag(FTU_PTRS[eModule]);

    /* Disable TOIE flags */
    GPT_FTU_HWA_DisableOverflowInterrupt(FTU_PTRS[eModule]);

    /* Disable FAULTM flags */
    GPT_FTU_HWA_DisableModuleFaultMode(FTU_PTRS[eModule]);

    /* Set Initial Counter Value to 0 */
    GPT_FTU_HWA_ClearModuleCounterInitialValue(FTU_PTRS[eModule], (uint32)0U);

#if (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON)
    if ((eModule == GPT_MODULE_FTU_1) || (eModule == GPT_MODULE_FTU_2))
    {
        /* write the Ftu Modulo Register with 0xFFFFFF for FTU1 or FTU2(in FC7240/FC7300F8MDQ)*/
        GPT_FTU_HWA_SetModuleCompareValue(FTU_PTRS[eModule], (uint32)0xFFFFFFU);
    }
    else
#endif /* (GPT_CFG_FTU12_24_BIT_SUPPORT == STD_ON) */
    {
        /* write the Ftu Modulo Register with 0xFFFF */
        GPT_FTU_HWA_SetModuleCompareValue(FTU_PTRS[eModule], (uint32)0xFFFFU);
    }

    /* Clear bit CPWMS */
    GPT_FTU_HWA_DisableModuleCpwmMode(FTU_PTRS[eModule]);

    if ((boolean)TRUE == bDbgModeEnable)
    {
        /* enable debug mode */
        GPT_FTU_HWA_ConfigModuleDebugMode(FTU_PTRS[eModule], GPT_FTU_DBG_COUNTER_WORKS_CHN_WORKS);
    }
    else
    {

        /* disable debug mode */
        GPT_FTU_HWA_ConfigModuleDebugMode(FTU_PTRS[eModule], GPT_FTU_DBG_COUNTER_STOP_CHN_WORKS);
    }

    /* set the prescaler with the wanted value */
    GPT_FTU_HWA_SetModulePrescale(FTU_PTRS[eModule], ePrescale);

    /* Intialize FTU timer by writing any value to CNT register when CLKS not equal 0 */
    GPT_FTU_HWA_ClearModuleCounter(FTU_PTRS[eModule], (uint32)1U);

    if (GPT_FTU_MDOULE_BUS_CLK == eClkSrc)
    {
        GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_BUS_CLK);
    }
    else if (GPT_FTU_MDOULE_NO_CLK == eClkSrc)
    {
        GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_NO_CLK);
    }
    else
    {
        GPT_FTU_HWA_SetModuleClkSrc(FTU_PTRS[eModule], GPT_FTU_MDOULE_PCC_CLK);
        if (eClkSrc > GPT_FTU_MDOULE_PCC_CLK)
        {
            GPT_FTU_HWA_SetExternalClkSrc(FTU_PTRS[eModule], (uint32)(eClkSrc)-4U);
        }
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21();
}

/**
 * @brief Get predef timer value [SWDESG_GPT_072]
 *
 * @param eModule FTU module
 * @return uint32 Predef timer value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Ftu_GetPredefTimerValue(Gpt_ModuleType eModule)
{
    uint32 u32ReturnValue;

    /* Read counter registers */
    u32ReturnValue = GPT_FTU_HWA_ReadModuleCounter(FTU_PTRS[eModule]);

    return u32ReturnValue;
}
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif
#ifdef __cplusplus
}
#endif

/** @} */
