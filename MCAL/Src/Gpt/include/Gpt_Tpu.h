/**
 *   @file    Gpt_Tpu.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Tpu - API
 *   @details This file contains the Gpt_Tpu Autosar APIs
 *
 *   @addtogroup Gpt_Tpu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : GPT_TPU
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

#ifndef GPT_TPU_H
#define GPT_TPU_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Cfg.h"
#include "Scm_RegOps.h"
#if defined(GPT_TPU_USED)
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

/**
 * @brief Initialize TPU timer
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
                                      Gpt_ChannelModeType                   eChannelMode);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief TPU timer De-initializatoin
 *
 * @param u8Channel TPU channel
 */
GPT_TEXT_SECTION void Gpt_LL_Tpu_DeInit(uint8 u8Channel);
#endif

/**
 * @brief Start TPU timer
 *
 * @param u8Channel TPU channel
 * @param u32Value TPU start value
 */
GPT_TEXT_SECTION void Gpt_LL_Tpu_StartTimer(uint8 u8Channel, uint32 u32Value);

/**
 * @brief Stop TPU timer
 *
 * @param u8Channel TPU channel
 */
GPT_TEXT_SECTION void Gpt_LL_Tpu_StopTimer(uint8 u8Channel);

/**
 * @brief Get TPU elapsed value
 *
 * @param u8Channel TPU channel
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue TPU target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Tpu_GetTimeElapsed(uint8    u8Channel,
                                                  boolean *pbReturnChannelRollover,
                                                  uint32  *pu32TargetValue);
#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*GPT_TPU_USED == STD_ON*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_TPU_H*/

/** @} */
