/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file    Gpt_Tpu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Tpu - driver API and development errors implemention.
 *   @details This file contains the Gpt_Tpu Autosar driver API and development errors implemention.
 *
 *   @addtogroup Gpt_Tpu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_Tpu
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
*   0.7.0       26/04/2024    QXW0074       N/A          Gpt_Tpu Initial version
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"
#include "Gpt_Hw_Irq.h"
#include "Gpt_Tpu.h"
#include "Gpt_Tpu_RegOps.h"
#include "SchM_Gpt.h"

#if defined(GPT_TPU_USED)

/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define GPT_START_SEC_VAR_NO_INIT_32
#include "Gpt_MemMap.h"
/**
 * @brief          Local array variable used to store the runtime target time value.
 */
GPT_DATA_SECTION static uint32 Gpt_Tpu_u32TargetValue[GPT_TPU_CHANNEL_NUM];

#define GPT_STOP_SEC_VAR_NO_INIT_32
#include "Gpt_MemMap.h"

#define GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"

/**
 * @brief          Local array variable used to store the Tpu channel mode.
 */
GPT_DATA_SECTION static Gpt_ChannelModeType Gpt_Tpu_eChannelMode[GPT_TPU_CHANNEL_NUM];

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

#if defined(GPT_TPU_ISR_USED)
LOCAL_INLINE void            Gpt_Tpu_IrqHandler(uint8 u8StartChannel, uint8 u8EndChannel);
GPT_TEXT_SECTION static void Gpt_Tpu_ProcessCommonInterrupt(uint8 u8TpuChannel);
#endif

#if defined(GPT_TPU_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_TPU_CH0_7_ISR);
GPT_TEXT_SECTION ISR(GPT_TPU_CH8_15_ISR);
GPT_TEXT_SECTION ISR(GPT_TPU_CH16_23_ISR);
GPT_TEXT_SECTION ISR(GPT_TPU_CH24_31_ISR);
#endif
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/
#if defined(GPT_TPU_ISR_USED)
/**
 * @brief TPU Channel interrupt handler [SWDESG_GPT_133]
 *
 * @param u8StartChannel   -Start channel of the handler
 * @param u8EndChannel     -End channel of the handler
 */
LOCAL_INLINE void Gpt_Tpu_IrqHandler(uint8 u8StartChannel, uint8 u8EndChannel)
{
    uint8 u8TpuChannel;
    for (u8TpuChannel = u8StartChannel; u8TpuChannel <= u8EndChannel; u8TpuChannel++)
    {
        if ((boolean)TRUE == TPU_E_HWA_ReadEventInterruptFlagAndEnable(TPU_E, u8TpuChannel))
        {
            Gpt_Tpu_ProcessCommonInterrupt(u8TpuChannel);
        }
        else
        {
            /* Do nothing */
        }
    }
}
#endif
/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
#if defined(GPT_TPU_ISR_USED)
/**
 * @brief Process common interrupt function [SWDESG_GPT_134]
 *
 * @param u8TpuChannel TPU channel for current module
 */
/* [SWS_Gpt_00186] */
GPT_TEXT_SECTION static void Gpt_Tpu_ProcessCommonInterrupt(uint8 u8TpuChannel)
{
    uint32 u32ER1RegVal;
    uint32 u32TCR1RegVal;
    uint32 u32NextValue;
    uint32 u32NextValue_Diff;
    uint32 u32LoopTimeout = 65535U;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_39();
    if (Gpt_Tpu_eChannelMode[u8TpuChannel] == GPT_CH_MODE_ONESHOT)
    {
        /* Clear interrupt status which trigger by channel event */
        TPU_E_HWA_ClearChEventISRFlg(TPU_E, u8TpuChannel);
        /* Clear Match event flag */
        TPU_E_HWA_ClearMatchEvent(TPU_E, u8TpuChannel);
    }
    else
    {
        do
        {
            /* [SWS_Gpt_00327] */
            /* Clear interrupt status which trigger by channel event */
            TPU_E_HWA_ClearChEventISRFlg(TPU_E, u8TpuChannel);
            /* Clear Match event flag */
            TPU_E_HWA_ClearMatchEvent(TPU_E, u8TpuChannel);
            /* Set next match value */
            u32ER1RegVal  = TPU_E_HWA_GetER1MatchValue(TPU_E, u8TpuChannel);
            u32TCR1RegVal = TPU_E_HWA_GetTCR1CounterValue(TPU_E);
            if (u32ER1RegVal > u32TCR1RegVal)
            {
                u32TCR1RegVal = u32TCR1RegVal + GPT_TPU_E_TCR_MAX_VALUE_U32 + 1u;
            }
            else
            {
                /* Do nothing */
            }
            u32NextValue =
                ((((u32TCR1RegVal - u32ER1RegVal) / Gpt_Tpu_u32TargetValue[u8TpuChannel]) + 1u) *
                 Gpt_Tpu_u32TargetValue[u8TpuChannel]) +
                u32ER1RegVal;
            if (u32NextValue > GPT_TPU_E_TCR_MAX_VALUE_U32)
            {
                u32NextValue = (u32NextValue - GPT_TPU_E_TCR_MAX_VALUE_U32) - 1u;
            }
            else
            {
                /* Do nothing */
            }
            TPU_E_HWA_SetER1MatchValue(TPU_E, u8TpuChannel, u32NextValue);
            /* Enable Match enable flag */
            TPU_E_HWA_EnableMatch(TPU_E, u8TpuChannel);
            u32TCR1RegVal = TPU_E_HWA_GetTCR1CounterValue(TPU_E);
            if (u32TCR1RegVal < u32NextValue)
            {
                u32NextValue_Diff = u32NextValue - u32TCR1RegVal;
            }
            else
            {
                u32NextValue_Diff = GPT_TPU_E_TCR_MAX_VALUE_U32 - u32TCR1RegVal + u32NextValue;
            }
            u32LoopTimeout = u32LoopTimeout - 1U;
        }
        while ((u32NextValue_Diff > Gpt_Tpu_u32TargetValue[u8TpuChannel]) && (u32LoopTimeout > 0U));
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_39();
    /* Call GPT upper layer handler */
    Gpt_Hw_ProcessCommonInterrupt(u8TpuChannel, (uint8)GPT_TPU_MODULE);
}

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_TPU_CH0_7_ISR)
{
    Gpt_Tpu_IrqHandler(TPU_CH_0, TPU_CH_7);
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */

/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_TPU_CH8_15_ISR)
{
    Gpt_Tpu_IrqHandler(TPU_CH_8, TPU_CH_15);
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */

/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_TPU_CH16_23_ISR)
{
    Gpt_Tpu_IrqHandler(TPU_CH_16, TPU_CH_23);
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */

/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_TPU_CH24_31_ISR)
{
    Gpt_Tpu_IrqHandler(TPU_CH_24, TPU_CH_31);
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
/* PRQA S 3006,1006 -- */
#endif

/**
 * @brief Initialize TPU timer [SWDESG_GPT_116]
 *
 * @param u8Channel TPU channel
 * @param bDbgModeEnable TPU debug mode flag
 * @param pTpuConfig TPU initialization configuration pointer
 * @param eGtbEn TPU Gtb mode
 * @param eChannelMode TPU channel mode
 */
GPT_TEXT_SECTION void Gpt_LL_Tpu_Init(uint8                                 u8Channel,
                                      boolean                               bDbgModeEnable,
                                      const Gpt_ConfigChannelTpuType *const pTpuConfig,
                                      Gpt_GtbType                           eGtbEn,
                                      Gpt_ChannelModeType                   eChannelMode)
{
    /* Disable Match enable flag */
    TPU_E_HWA_DisableMatch(TPU_E, u8Channel);
    /* Disable channel event triggered interrupt */
    TPU_E_HWA_DisableChEventInt(TPU_E, u8Channel);
    /* Clear interrupt status which trigger by channel event */
    TPU_E_HWA_ClearChEventISRFlg(TPU_E, u8Channel);
    /* Clear Match event flag */
    TPU_E_HWA_ClearMatchEvent(TPU_E, u8Channel);
    if ((boolean)TRUE == bDbgModeEnable)
    {
        /* enable debug mode */
        TPU_E_HWA_SetCounterHalt(TPU_E, GPT_TPU_DBG_CNT_RUN);
    }
    else
    {
        /* disable debug mode */
        TPU_E_HWA_SetCounterHalt(TPU_E, GPT_TPU_DBG_CNT_STOP);
    }
    /* If select TCRCLK as the clock source for the tcr1 prescaler, then configure the TCRCLK signal
     * filter */
    if (pTpuConfig->eTpuClockSrc == GPT_TPU_CLK_TCRCLK)
    {
        TPU_E_HWA_SetTCRCLKFilter(TPU_E,
                                  ((uint32)(pTpuConfig->eTcrClkFilterClock)) |
                                      ((uint32)(pTpuConfig->eTcrClkFilterMode)));
        /* If the TCRCLK signal input is filtered with the same filter clock as the channel input
         * signal, then need to configure the channel digital filter control */
        if (pTpuConfig->eTcrClkFilterClock == GPT_TPU_TCRCLK_FITLER_CLOCK_CHANNELS_CLOCK)
        {
            /* Set channel digital filter control */
            TPU_E_HWA_SetFilterCtrl(TPU_E, (uint32)pTpuConfig->eFilterMode);
            /* Set filter prescaler clock control */
            if (pTpuConfig->eFilterPrescaler == GPT_TPU_PRESCALER_DIV_256)
            {
                TPU_E_HWA_SetFilterClkSrc(TPU_E, (uint8)0U);
                TPU_E_HWA_SetFilterPrescaler(TPU_E, (uint8)GPT_TPU_PRESCALER_DIV_128);
            }
            else
            {
                TPU_E_HWA_SetFilterClkSrc(TPU_E, (uint8)1U);
                TPU_E_HWA_SetFilterPrescaler(TPU_E, (uint8)pTpuConfig->eFilterPrescaler);
            }
        }
        else
        {
            /* Do nothing */
        }
    }
    else
    {
        /* Do nothing */
    }
    /* Set TCR1 clock control and prescaler */
    if (pTpuConfig->u16Prescaler < 256U)
    {
        TPU_E_HWA_SetTCR1ClkControl(TPU_E, pTpuConfig->eTpuClockSrc);
        TPU_E_HWA_SetTCR1Prescaler(TPU_E, (uint32)(pTpuConfig->u16Prescaler - 1U));
    }
    else
    {
        TPU_E_HWA_SetTCR1ClkControl(TPU_E, pTpuConfig->eTpuClockSrc);
        TPU_E_HWA_SetTCR1Prescaler(TPU_E, (uint32)((pTpuConfig->u16Prescaler / 2) - 1U));
    }
    /* Channel filter bypass */
    TPU_E_HWA_SetChFilter(TPU_E, u8Channel, (uint32)GPT_TPU_CH_FILTER_BYPASS);
    /* Time base selection of part1 */
    TPU_E_HWA_SetChTBS1(TPU_E, u8Channel, GPT_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR1);
    /* Time base selection of part2 */
    TPU_E_HWA_SetChTBS2(TPU_E, u8Channel, GPT_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR1);
    /* Set Predefined channel modes */
    TPU_E_HWA_SetPDCM(TPU_E, u8Channel, GPT_TPUE_SM_ST);

    Gpt_Tpu_eChannelMode[u8Channel] = eChannelMode;

    if (GPT_GTB_Dis == eGtbEn)
    {
        /* ETPU global time base enable */
        SCM_HWA_EnableGTBC(SCM_FTU_GTBC_TPU_GTBC_MASK);
    }
    else
    {
        /* ETPU global time base disable */
        SCM_HWA_DisableGTBC(SCM_FTU_GTBC_TPU_GTBC_MASK);
    }
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief TPU timer De-initializatoin [SWDESG_GPT_117]
 *
 * @param u8Channel TPU channel
 */
GPT_TEXT_SECTION void Gpt_LL_Tpu_DeInit(uint8 u8Channel)
{
    /* ETPU global time base disable */
    SCM_HWA_DisableGTBC(SCM_FTU_GTBC_TPU_GTBC_MASK);
    /* Disable Match enable flag */
    TPU_E_HWA_DisableMatch(TPU_E, u8Channel);
    /* Disable channel event triggered interrupt */
    TPU_E_HWA_DisableChEventInt(TPU_E, u8Channel);
    /* Clear interrupt status which trigger by channel event */
    TPU_E_HWA_ClearChEventISRFlg(TPU_E, u8Channel);
    /* Clear Match event flag */
    TPU_E_HWA_ClearMatchEvent(TPU_E, u8Channel);

    /* Clear debug mode */
    TPU_E_HWA_SetCounterHalt(TPU_E, GPT_TPU_DBG_CNT_RUN);
    /* Clear TCRCLK signal filter control */
    TPU_E_HWA_SetTCRCLKFilter(TPU_E,
                              ((uint32)(GPT_TPU_TCRCLK_FITLER_CLOCK_BUS_CLOCK_DIV2)) |
                                  ((uint32)(GPT_TPU_TCRCLK_FITLER_MODE_TWO_SAMPLE)));
    /* Clear channel digital filter control */
    TPU_E_HWA_SetFilterCtrl(TPU_E, (uint32)GPT_TPU_FILTER_TWO_SAMPLE);
    /* Clear filter prescaler clock control */
    TPU_E_HWA_SetFilterClkSrc(TPU_E, (uint8)0U);
    TPU_E_HWA_SetFilterPrescaler(TPU_E, (uint8)GPT_TPU_PRESCALER_DIV_1);
    /* Clear TCR1 clock control and prescaler */
    TPU_E_HWA_SetTCR1ClkControl(TPU_E, GPT_TPU_CLK_TCRCLK);
    TPU_E_HWA_SetTCR1Prescaler(TPU_E, (uint32)0U);

    /* Reset the Channel Filter bypass mode */
    TPU_E_HWA_SetChFilter(TPU_E, u8Channel, (uint32)GPT_TPU_CH_FILTER_OPEN);
    /* Disable service request */
    TPU_E_HWA_DisablervReq(TPU_E, u8Channel);
    /*Reset ER1*/
    TPU_E_HWA_SetER1MatchValue(TPU_E, u8Channel, (uint32)0U);
    Gpt_Tpu_u32TargetValue[u8Channel] = 0U;
}
#endif

/**
 * @brief Start TPU timer [SWDESG_GPT_118]
 *
 * @param u8Channel TPU channel
 * @param u32Value TPU start value
 */
GPT_TEXT_SECTION void Gpt_LL_Tpu_StartTimer(uint8 u8Channel, uint32 u32Value)
{
    uint32 u32CounterValue;
    uint32 u32CompareValue;
    uint32 u32CounterMaxValue;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_36();
    /* Get TCR1 counter value */
    u32CounterValue    = TPU_E_HWA_GetTCR1CounterValue(TPU_E);
    u32CounterMaxValue = GPT_TPU_E_TCR_MAX_VALUE_U32;

    if ((uint32)(u32CounterValue + u32Value) > u32CounterMaxValue)
    {
        u32CompareValue = (uint32)(u32Value - (u32CounterMaxValue - u32CounterValue + 1U));
    }
    else
    {
        u32CompareValue = (uint32)(u32CounterValue + u32Value);
    }
    // Clear flag status
    if (TPU_E_HWA_GetChMatchRecLatch1Status(TPU_E, u8Channel) == (boolean)TRUE)
    {
        /* Clear Match event flag */
        TPU_E_HWA_ClearMatchEvent(TPU_E, u8Channel);
    }
    /* Enable channel event triggered interrupt */
    TPU_E_HWA_EnableChEventInt(TPU_E, u8Channel);
    /* Enable service request */
    TPU_E_HWA_EnableSrvReq(TPU_E, u8Channel);
    /* Match for the value of ER1 */
    TPU_E_HWA_SetMatchER1(TPU_E, u8Channel);
    /*Set ER1*/
    TPU_E_HWA_SetER1MatchValue(TPU_E, u8Channel, u32CompareValue);
    Gpt_Tpu_u32TargetValue[u8Channel] = u32Value;
    /* Enable match enable flag */
    TPU_E_HWA_EnableMatch(TPU_E, u8Channel);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_36();
}

/**
 * @brief Stop TPU timer [SWDESG_GPT_119]
 *
 * @param u8Channel TPU channel
 */
GPT_TEXT_SECTION void Gpt_LL_Tpu_StopTimer(uint8 u8Channel)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_37();
    /* Disable Match enable flag */
    TPU_E_HWA_DisableMatch(TPU_E, u8Channel);
    /* Disable channel event triggered interrupt */
    TPU_E_HWA_DisableChEventInt(TPU_E, u8Channel);
    /* Clear interrupt status which trigger by channel event */
    TPU_E_HWA_ClearChEventISRFlg(TPU_E, u8Channel);
    /* Clear Match event flag */
    TPU_E_HWA_ClearMatchEvent(TPU_E, u8Channel);
    /* Disable service request */
    TPU_E_HWA_DisablervReq(TPU_E, u8Channel);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_37();
}

/**
 * @brief Get TPU elapsed value [SWDESG_GPT_120]
 *
 * @param u8Channel TPU channel
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue TPU target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Tpu_GetTimeElapsed(uint8    u8Channel,
                                                  boolean *pbReturnChannelRollover,
                                                  uint32  *pu32TargetValue)
{
    uint32 u32ReturnValue;
    uint32 u32CompareValue;
    uint32 u32CounterValue;
    uint32 u32CounterMaxValue;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_38();
    /* Read match value */
    u32CompareValue = TPU_E_HWA_GetER1MatchValue(TPU_E, u8Channel);

    /* Read TCR1 counter value */
    u32CounterValue = TPU_E_HWA_GetTCR1CounterValue(TPU_E);

    *pu32TargetValue   = Gpt_Tpu_u32TargetValue[u8Channel];
    u32CounterMaxValue = GPT_TPU_E_TCR_MAX_VALUE_U32;

    /* Calculate the elapsed time [SWS_Gpt_00361] */
    if (u32CounterValue > u32CompareValue)
    {
        /* Counter value passed the set-up Target value - might have roll-over */
        if (((u32CounterMaxValue - u32CounterValue) + u32CompareValue) <= *pu32TargetValue)
        {
            /* New compare value was read by register read - isr served in time - we have roll-over */
            u32ReturnValue = *pu32TargetValue - ((u32CounterMaxValue - u32CounterValue) +
                                                 u32CompareValue + GPT_TPU_OVERFLOW_PAD_U32);
        }
        else
        {
            /* There is an delay in serving ISR or updating u32CompareValue - report last timer time */
            u32ReturnValue = *pu32TargetValue;
        }
    }
    else if ((u32CounterValue < u32CompareValue) &&
             ((u32CompareValue - u32CounterValue) <= *pu32TargetValue))
    {
        /* Timer in between ISRs period */
        u32ReturnValue = *pu32TargetValue - (u32CompareValue - u32CounterValue);
    }
    else
    {
        u32ReturnValue = *pu32TargetValue;
    }

    /*Check interrupt status flag*/
    if (TPU_E_HWA_GetChMatchRecLatch1Status(TPU_E, u8Channel) == (boolean)TRUE)
    {
        /* Channel counter was roll-over */
        *pbReturnChannelRollover = (boolean)TRUE;
    }
    else
    {
        /* Channel counter was not rollover */
        *pbReturnChannelRollover = (boolean)FALSE;
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_38();
    return u32ReturnValue;
}
#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*defined GPT_TPU_USED*/

#ifdef __cplusplus
}
#endif

/** @} */
