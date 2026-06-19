/**
 *   @file    Gpt_Rtc.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Rtc - API
 *   @details This file contains the Gpt_Rtc Autosar APIs
 *
 *   @addtogroup Gpt_Rtc
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_Rtc
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
*   0.7.0       26/04/2024    QXW0076       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/

#ifndef GPT_RTC_H
#define GPT_RTC_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Gpt_Cfg.h"

#if defined(GPT_RTC_USED)
/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/*=================================================================================================
*                                            ENUMS
=================================================================================================*/

/*=================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

/**
 * @brief RTC initialization
 *
 * @param eChannelMode RTC channel mode
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_Init(Gpt_ChannelModeType eChannelMode);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initializaion
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_DeInit(void);
#endif

/**
 * @brief RTC start timer
 *
 * @param u32Value Start time value
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_StartTimer(uint32 u32Value);

/**
 * @brief RTC stop timer
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_StopTimer(void);

/**
 * @brief Get timer elapsed value
 *
 * @param pReturnChannelRollover RTC channel roll-over flag
 * @param pTargetValue Timer target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Rtc_GetTimeElapsed(boolean *pReturnChannelRollover,
                                                  uint32  *pTargetValue);

#if (GPT_GET_RTC_COUNTER_VALUE_API == STD_ON)
/**
 * @brief Get RTC seconds register value
 *
 * @return uint32 Seconds register value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Rtc_GetSecondsValue(void);
#endif

#if (GPT_RESET_RTC_COUNTER_API == STD_ON)
/**
 * @brief Reset RTC seconds register value
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Rtc_ResetSeconds(void);
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*GPT_RTC_USED == STD_ON*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_RTC_H*/

/** @} */
