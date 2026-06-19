/**
 *   @file    Gpt_Hw.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt - Gpt SAR IP header file.
 *   @details Gpt hardware driver API.
 *
 *   @addtogroup GPT
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : GPT
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
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
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

#ifndef GPT_HW_H
#define GPT_HW_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Ptimer.h"
#include "Gpt_Rtc.h"
#include "Gpt_Ftu.h"
#include "Gpt_Tpu.h"
#include "Gpt_Fcpit.h"
#include "Gpt_Aontimer.h"
#include "Gpt_Tstmp.h"
#include "Gpt_EftuTom.h"
#include "Cpm_Reg.h"
/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Gpt channel hardware runtime information. This is the type of the data structure used by
 * the Autosar layer to receive runtime information specific to hardware IP
 *
 */
typedef struct
{
    boolean       bChannelRollover; /**<@brief GPT channel rollover information*/
    Gpt_ValueType tTargetTime;      /**<@brief GPT channel target value*/
} Gpt_HwChannelInfoType;
/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"
/**
 * @brief Initialize channel
 *
 * @param pChannelConfig Channel configuration pointer
 * @param pHw2ChannelMap Hardware to logic channel map pointer
 */
GPT_TEXT_SECTION void Gpt_HL_Init(const Gpt_ConfigChannelType *pChannelConfig,
                                  const Gpt_ChannelType       *pHw2ChannelMap);

/**
 * @brief Get timer elapsed
 *
 * @param pChannelConfig Channel configuration pointer
 * @param pChannelInfo Channel information pointer
 * @return Gpt_ValueType Elapsed value
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_HL_GetTimeElapsed(const Gpt_ConfigChannelType *pChannelConfig,
                                                     Gpt_HwChannelInfoType       *pChannelInfo);

/**
 * @brief Start timer
 *
 * @param pChannelConfig Channel configuration pointer
 * @param u32Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_HL_StartTimer(const Gpt_ConfigChannelType *pChannelConfig,
                                        Gpt_ValueType                u32Value);

/**
 * @brief Stop timer
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_StopTimer(const Gpt_ConfigChannelType *pChannelConfig);

/**
 * @brief Enable interrupt
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_EnableInterrupt(const Gpt_ConfigChannelType *pChannelConfig);

/**
 * @brief Disable interrupt
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_DisableInterrupt(const Gpt_ConfigChannelType *pChannelConfig);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initialization
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_DeInit(const Gpt_ConfigChannelType *pChannelConfig);
#endif

#if (GPT_FTU_GTB_SUPPORT == STD_ON)
/*
 * @brief Config the FTU GTB Function
 *
 * @param u32Group  -- FTU GTB Group
 * @param benable -- enable/disable Ftu Gtb function.
 * */
GPT_TEXT_SECTION void Gpt_HW_ConfigGTB(const uint32 u32Group, boolean benable);
#endif

#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
/**
 * @brief Change next timeout value
 *
 * @param pChannelConfig Channel configuration pointer
 * @param u32Value Next timeout value
 * @return Std_ReturnType Function return type
 */
GPT_TEXT_SECTION Std_ReturnType Gpt_HL_ChangeNextTimeoutValue(
    const Gpt_ConfigChannelType *pChannelConfig,
    Gpt_ValueType                u32Value);
#endif

#if (GPT_GET_RTC_COUNTER_VALUE_API == STD_ON)
/**
 * @brief Get the RTC current Seconds register value
 *
 * @return Gpt_ValueType RTC counter value
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_HL_GetRtcCounterValue(void);
#endif

#if (GPT_RESET_RTC_COUNTER_API == STD_ON)
/**
 * @brief Reset the RTC Seconds register value
 *
 */
GPT_TEXT_SECTION void Gpt_HL_ResetRtcCounter(void);
#endif

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Start predef timer
 *
 * @param pConfigPtr Predef configuration pointer
 * @param u8CoreId the processor identification number
 */
GPT_TEXT_SECTION void Gpt_HL_StartPredefTimer(const Gpt_ConfigType *pConfigPtr, uint8 u8CoreId);

/**
 * @brief Get predef timer value
 *
 * @param ePredefTimer The selected PredefTimer type
 * @param pChannelConfig Predef timer configuration pointer
 * @param u32TimeValuePtr Timer value pointer
 * @return Std_ReturnType API status return type
 */
GPT_TEXT_SECTION Std_ReturnType Gpt_HL_GetPredefTimerValue(
    Gpt_PredefTimerType                ePredefTimer,
    const Gpt_ConfigPredefChannelType *pChannelConfig,
    uint32                            *u32TimeValuePtr);

/**
 * @brief Stop predef timer
 *
 * @param pConfigPtr GPT configuration pointer
 * @param u8CoreId the processor identification number
 */
GPT_TEXT_SECTION void Gpt_HL_StopPredefTimer(const Gpt_ConfigType *pConfigPtr, uint8 u8CoreId);
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*GPT_HW_H*/

/** @} */
