/**
 *   @file    Gpt_Ptimer.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Ptimer - API
 *   @details This file contains the Gpt Autosar APIs
 *
 *   @addtogroup GPT
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_Ptimer
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
*   0.8.0       29/08/2024    QXW0074       N/A          Gpt_Ptimer Initial version
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/
#ifndef GPT_PTIMER_H
#define GPT_PTIMER_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Gpt_Cfg.h"
#include "Gpt_Ptimer_Types.h"

#if defined(GPT_PTIMER_USED)
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
 * @brief PTIMER initialization
 *
 * @param eModule PTIMER module
 * @param bDbgModeEnable Enable/Disable debug mode flag
 * @param pPtimerConf PTIMER initialization configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_Init(Gpt_ModuleType                           eModule,
                                         boolean                                  bDbgModeEnable,
                                         const Gpt_ConfigChannelPtimerType *const pPtimerConf);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief PTIMER De-initiailization
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_DeInit(Gpt_ModuleType eModule);
#endif

/**
 * @brief PTIMER start timer
 *
 * @param eModule PTIMER module
 * @param u32Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_StartTimer(Gpt_ModuleType eModule, uint32 u32Value);

/**
 * @brief PTIMER stop timer
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_StopTimer(Gpt_ModuleType eModule);

/**
 * @brief PTIMER get elapsed value
 *
 * @param eModule PTIMER module
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue PTIMER target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Ptimer_GetTimeElapsed(Gpt_ModuleType eModule,
                                                     boolean       *pbReturnChannelRollover,
                                                     uint32        *pu32TargetValue);

/**
 * @brief Enable PTIMER interrupt
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_EnableInterrupt(Gpt_ModuleType eModule);

/**
 * @brief Disable PTIMER interrupt
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_DisableInterrupt(Gpt_ModuleType eModule);

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*GPT_PTIMER_USED == STD_ON*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_PTIMER_H*/

/** @} */
