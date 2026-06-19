/**
 *   @file    Gpt_EftuTom.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_EftuTom - API
 *   @details This file contains the Gpt_Tpu Autosar APIs
 *
 *   @addtogroup Gpt_EftuTom
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : GPT_EFTUTOM
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
*   0.8.0       28/11/2024    QXW0074       N/A          Gpt_EftuTom Initial version
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/

#ifndef GPT_EFTUTOM_H
#define GPT_EFTUTOM_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Cfg.h"
#include "Scm_RegOps.h"
#if defined(GPT_EFTU_USED)
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
 * @brief Initialize EFTU TOM timer
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 * @param pEftuTomConfig EFTU TOM initialization configuration pointer
 * @param eGtbEn EFTU TOM Gtb mode
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_Init(Gpt_ModuleType                            eModule,
                                          uint8                                     u8Channel,
                                          const Gpt_ConfigChannelEftuTomType *const pEftuTomConfig,
                                          Gpt_GtbType                               eGtbEn);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief EFTU TOM timer De-initializatoin
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_DeInit(Gpt_ModuleType eModule, uint8 u8Channel);
#endif

/**
 * @brief Start EFTU TOM timer
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 * @param u32Value EFTU TOM channel start value
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_StartTimer(Gpt_ModuleType eModule,
                                                uint8          u8Channel,
                                                uint32         u32Value);

/**
 * @brief Stop EFTU TOM timer
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel);

/**
 * @brief Get EFTU TOM channel elapsed value
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue TPU target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_EftuTom_GetTimeElapsed(Gpt_ModuleType eModule,
                                                      uint8          u8Channel,
                                                      boolean       *pbReturnChannelRollover,
                                                      uint32        *pu32TargetValue);

/**
 * @brief Enable interrupt of the specified EFTU TOM channel
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_EnableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel);

/**
 * @brief Disable interrupt of the specified EFTU TOM channel
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_DisableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel);

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*GPT_TPU_USED == STD_ON*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_TPU_H*/

/** @} */
