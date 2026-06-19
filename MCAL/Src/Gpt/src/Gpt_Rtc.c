/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file    Gpt_Rtc.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Rtc - driver API and development errors implemention.
 *   @details This file contains the Gpt_Rtc Autosar driver API and development errors implemention.
 *
 *   @addtogroup Gpt_Rtc
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_RTC
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
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
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
#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"
#include "Gpt_Hw_Irq.h"
#include "Gpt_Rtc.h"
#include "Gpt_Rtc_RegOps.h"
#include "SchM_Gpt.h"

#if defined(GPT_RTC_USED)
/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/
#define GPT_RTC_RGM_SRS_ADDRS (uint32)(0x40046008U)
#define GPT_RTC_RGM_POR_FLAG  (uint32)(0x80U)
#define GPT_RTC_RGM_LVR_FLAG  (uint32)(0x2U)
/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define GPT_START_SEC_VAR_INIT_32
#include "Gpt_MemMap.h"
/**
 * @brief     Variable used to store the runtime target time value.
 */
GPT_DATA_SECTION static uint32 Gpt_RtcRunTime = 0U;

#define GPT_STOP_SEC_VAR_INIT_32
#include "Gpt_MemMap.h"

#define GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"

/**
 * @brief          Local array variable used to store the Tpu channel mode.
 */
GPT_DATA_SECTION static Gpt_ChannelModeType Gpt_Rtc_eChannelMode;

#define GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

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

#if defined(GPT_RTC_ISR_USED)
GPT_TEXT_SECTION ISR(RTC_ISR);
#endif /*GPT_RTC_ISR_USED*/
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/

/**
 * @brief RTC initialization [SWDESG_GPT_102]
 *
 * @param eChannelMode RTC channel mode
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_Init(Gpt_ChannelModeType eChannelMode)
{
#if (GPT_RTC_CLEAR_SECOND_POR_LVR == STD_OFF)
    /* Software Reset [SWS_Gpt_00329] */
    RTC_HWA_ClearAndStopRTCClock(RTC);
#else
    /*if the reset cause is not POR/LVR, then not clear the RTC Seconds Register */
    if ((*(uint32 *)GPT_RTC_RGM_SRS_ADDRS & (GPT_RTC_RGM_POR_FLAG | GPT_RTC_RGM_LVR_FLAG)) == 0U)
    {
        /* Disable Time Alarm Interrupt */
        RTC_HWA_DisableAlarmInterrupt(RTC);
        /* Disable Time Overflow Interrupt */
        RTC_HWA_DisableOverflowInvalidInterrupt(RTC);
        /* Set TAR, and TAF flag will be cleared */
        RTC_HWA_SetAlarmCounterValue(RTC, (uint32)0U);
    }
    else
    {
        /* Software Reset [SWS_Gpt_00329] */
        RTC_HWA_ClearAndStopRTCClock(RTC);
    }
#endif
    /* Save RTC run time value */
    Gpt_RtcRunTime = 0U;
    /* Save RTC channel mode */
    Gpt_Rtc_eChannelMode = eChannelMode;
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initializaion [SWDESG_GPT_098]
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_DeInit(void)
{
    /* Software Reset*/
    RTC_HWA_ClearAndStopRTCClock(RTC);

    /* Initialize RTC run time value */
    Gpt_RtcRunTime = 0U;
}
#endif /*GPT_DEINIT_API == STD_ON*/

/**
 * @brief RTC start timer [SWDESG_GPT_103]
 *
 * @param u32Value Start time value
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_StartTimer(uint32 u32Value)
{
    uint32 u32CounterValue;
    Gpt_RtcRunTime = u32Value;
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24();

    /* Disable Time Counter */
    RTC_HWA_DisableRtcCounter(RTC);

    /* Disable Time Alarm Interrupt */
    RTC_HWA_DisableAlarmInterrupt(RTC);

    /* Get Time Counter Value */
    u32CounterValue = RTC_HWA_ReadSecondValue(RTC);

    /* Calculate the Next Time Alarm Value, the TAF is set when TAR==SR and SR+1 */
    u32CounterValue += (uint32)(Gpt_RtcRunTime - 1U);

    /* Set TAR, and TAF flag will be cleared */
    RTC_HWA_SetAlarmCounterValue(RTC, u32CounterValue);

    /* Enable Timer Alarm Interrupt */
    RTC_HWA_EnableAlarmInterrupt(RTC);

    /* Enable Time Counter */
    RTC_HWA_EnableRtcCounter(RTC);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24();
}

/**
 * @brief RTC stop timer [SWDESG_GPT_104]
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_StopTimer(void)
{
    uint32 u32TimeAlarmValue;
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25();

    /* Disable Time Alarm Interrupt */
    RTC_HWA_DisableAlarmInterrupt(RTC);

    /* Disable time counter*/
    RTC_HWA_DisableRtcCounter(RTC);

    /* Get current Timer Alarm Value */
    u32TimeAlarmValue = RTC_HWA_ReadTargetAlarmValue(RTC);

    /* Set TAR, and TAF flag will be cleared */
    RTC_HWA_SetAlarmCounterValue(RTC, u32TimeAlarmValue);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25();
}

/**
 * @brief Get timer elapsed value [SWDESG_GPT_101]
 *
 * @param pReturnChannelRollover RTC channel roll-over flag
 * @param pTargetValue Timer target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Rtc_GetTimeElapsed(boolean *pReturnChannelRollover,
                                                  uint32  *pTargetValue)
{
    uint32 u32ReturnValue = 0U;
    uint32 u32CounterValue;
    uint32 u32TimeAlarmValue;
    uint32 u32SecondValue;
    uint32 u32Timeout = 65535U;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_40();
    /* Get Target Time */
    *pTargetValue = Gpt_RtcRunTime;

    /* Get Time counter register */
    do
    {
        u32CounterValue = RTC_HWA_ReadSecondValue(RTC);
        u32SecondValue  = RTC_HWA_ReadSecondValue(RTC);
        u32Timeout      = u32Timeout - 1U;
    }
    while ((u32CounterValue != u32SecondValue) && (u32Timeout > 0U));

    /* Get Time Alarm Register. */
    u32TimeAlarmValue = RTC_HWA_ReadTargetAlarmValue(RTC) + 1U;

    /* Calculate the elapsed time [SWS_Gpt_00361] */
    /* One-shot timer and the time elasped */
    if (u32CounterValue >= u32TimeAlarmValue)
    {
        u32ReturnValue = Gpt_RtcRunTime;
    }
    else
    {
        u32ReturnValue = Gpt_RtcRunTime - (u32TimeAlarmValue - u32CounterValue);
    }

    if ((uint32)0x0UL != RTC_HWA_ReadAlarmFlag(RTC))
    {
        /* Channel counter was rollover */
        *pReturnChannelRollover = (boolean)TRUE;
    }
    else
    {
        /* Channel counter was not rollover */
        *pReturnChannelRollover = (boolean)FALSE;
    }

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_40();
    return u32ReturnValue;
}

#if (GPT_GET_RTC_COUNTER_VALUE_API == STD_ON)
/**
 * @brief Get RTC seconds register value
 *
 * @return uint32 Seconds register value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Rtc_GetSecondsValue(void)
{
    uint32 u32CounterValue;
    uint32 u32SecondValue;
    uint32 u32Timeout = 65535U;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_41();

    /* Get Time counter register */
    do
    {
        u32CounterValue = RTC_HWA_ReadSecondValue(RTC);
        u32SecondValue  = RTC_HWA_ReadSecondValue(RTC);
        u32Timeout      = u32Timeout - 1U;
    }
    while ((u32CounterValue != u32SecondValue) && (u32Timeout > 0U));

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_41();
    return u32CounterValue;
}
#endif

#if (GPT_RESET_RTC_COUNTER_API == STD_ON)
/**
 * @brief Reset RTC seconds register value
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_ResetSeconds(void)
{
    /* Software Reset [SWS_Gpt_00329] */
    RTC_HWA_ClearAndStopRTCClock(RTC);
}
#endif

#if defined(GPT_RTC_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(RTC_ISR)
{
    uint8  u8RtcNextDiff;
    uint32 u32RtcIntFlag;
    uint32 u32TimeAlarm;
    uint32 u32CounterValue;
    uint32 u32NextTimeAlarm;
    uint32 u32NextTimeAlarm_Diff;
    uint32 u32SecondValue;
    uint32 u32LoopTimeout = 65535U;
    uint32 u32Timeout     = 65535U;
    /* Get Time Interrupt Flag Bits */
    u32RtcIntFlag = RTC_HWA_ReadIntFlag(RTC);
    /* Time Alarm Interrupt Occured */
    if ((u32RtcIntFlag & RTC_STR_TAF_MASK) != 0U)
    {
        SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_28();
        if (Gpt_Rtc_eChannelMode == GPT_CH_MODE_ONESHOT)
        {
            /* Get current Timer Alarm Value */
            u32TimeAlarm = RTC_HWA_ReadTargetAlarmValue(RTC);

            /* Set TAR, and TAF flag will be cleared */
            RTC_HWA_SetAlarmCounterValue(RTC, u32TimeAlarm);
        }
        else
        {
            do
            {
                /* Get Time Alarm Value */
                u32TimeAlarm = RTC_HWA_ReadTargetAlarmValue(RTC);

                /* Get Time counter register */
                do
                {
                    u32CounterValue = RTC_HWA_ReadSecondValue(RTC);
                    u32SecondValue  = RTC_HWA_ReadSecondValue(RTC);
                    u32Timeout      = u32Timeout - 1U;
                }
                while ((u32CounterValue != u32SecondValue) && (u32Timeout > 0U));

                if (Gpt_RtcRunTime == 1U)
                {
                    u8RtcNextDiff = 0;
                }
                else
                {
                    u8RtcNextDiff = 1;
                }
                /* Calculate next Time Alarm */
                u32NextTimeAlarm =
                    ((((u32CounterValue - u32TimeAlarm) / Gpt_RtcRunTime) + u8RtcNextDiff) *
                     Gpt_RtcRunTime) +
                    u32TimeAlarm;
                /* Set New Time Alarm, when write value to TAR register, TAF flag will be cleared
                 * [SWS_Gpt_00327] */
                RTC_HWA_SetAlarmCounterValue(RTC, u32NextTimeAlarm);

                u32Timeout = 65535U;
                /* Get Time counter register */
                do
                {
                    u32CounterValue = RTC_HWA_ReadSecondValue(RTC);
                    u32SecondValue  = RTC_HWA_ReadSecondValue(RTC);
                    u32Timeout      = u32Timeout - 1U;
                }
                while ((u32CounterValue != u32SecondValue) && (u32Timeout > 0U));
                /*  For Rtc channel, before the interrupt happend, the u32CounterValue will be equal
                 * with the u32NextTimeAlarm if the interrupt period is 1 tick. because the STR[TAF]
                 * is set whenever the AR[TAR] equals the SR[TSR] and the SR[TSR] increments.*/
                if (u32CounterValue <= u32NextTimeAlarm)
                {
                    u32NextTimeAlarm_Diff = u32NextTimeAlarm - u32CounterValue;
                }
                else
                {
                    u32NextTimeAlarm_Diff = (uint32)0xFFFFFFFFuL - u32CounterValue + u32NextTimeAlarm;
                }
                u32LoopTimeout = u32LoopTimeout - 1U;
            }
            while ((u32NextTimeAlarm_Diff > Gpt_RtcRunTime) && (u32LoopTimeout > 0U));
        }
        SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_28();
        /* Call GPT callback function */
        Gpt_Hw_ProcessCommonInterrupt((uint8)0, (uint8)GPT_RTC_MODULE);
    }
    else
    {
        /* Disable overflow interrupt */
        RTC_HWA_DisableOverflowInvalidInterrupt(RTC);
    }

    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
/* PRQA S 3006,1006 -- */
#endif /* GPT_RTC_ISR_USED */

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*defined GPT_RTC_USED*/

#ifdef __cplusplus
}
#endif

/** @} */
