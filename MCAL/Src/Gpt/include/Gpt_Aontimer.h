/**
 *   @file    Gpt_Aontimer.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt - API
 *   @details This file contains the Gpt Autosar APIs
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
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/
#ifndef GPT_AONTIMER_H
#define GPT_AONTIMER_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Gpt_Cfg.h"
#include "Gpt_Aontimer_Types.h"

#if defined(GPT_AONTIMER_USED)
/*=================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*=================================================================================================
*                                             ENUMS
==================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

/**
 * @brief AONTIMER initialization
 *
 * @param pAontiemrConf AONTIMER initialization configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_Init(const Gpt_ConfigChannelAontimerType *const pAontiemrConf,
                                           boolean bDbgModeEnable);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initiailization
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_DeInit(void);
#endif

/**
 * @brief AONTIMER start timer
 *
 * @param u16Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StartTimer(uint16 u16Value);

/**
 * @brief AONTIMER stop timer
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StopTimer(void);

/**
 * @brief AONTIMER get elapsed value
 *
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue AONTIMER target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Aontimer_GetTimeElapsed(boolean *pbReturnChannelRollover,
                                                       uint32  *pu32TargetValue);

/**
 * @brief AONTIMER enable interrupt
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_EnableInterrupt(void);

/**
 * @brief AONTIMER diable interrupt
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_DisableInterrupt(void);

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief AONTIMER start predef timer
 *
 * @param eClkSrc AONTIMER clock source
 * @param ePrescaler AONTIMER timer prescaler
 * @param bDbgModeEnable AONTIMER Debug mode
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StartPredefTimer(const Gpt_AontimerClkSrcType    eClkSrc,
                                                       const Gpt_AontimerPrescalerType ePrescaler,
                                                       boolean bDbgModeEnable);

/**
 * @brief AONTIMER get predef timer value
 *
 * @return uint32 Predef timer value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Aontimer_GetPredefTimerValue(void);

/**
 * @brief Stop predef timer
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StopPredefTimer(void);
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*GPT_AONTIMER_USED == STD_ON*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_AONTIMER_H*/

/** @} */
