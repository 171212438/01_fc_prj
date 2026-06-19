/**
 *   @file    Gpt_FCPit.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_FCPit - API
 *   @details This file contains the Gpt_FCPit Autosar APIs
 *
 *   @addtogroup Gpt_FCPit
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : GPT_FCPIT
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

#ifndef GPT_FCPIT_H
#define GPT_FCPIT_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Cfg.h"
#if defined(GPT_FCPIT_USED)
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
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This type may not used by user */
/** @brief Fcpit channel number */
typedef enum
{
    GPT_FCPIT_CHANNEL_0 = 0U,
    GPT_FCPIT_CHANNEL_1,
    GPT_FCPIT_CHANNEL_2,
    GPT_FCPIT_CHANNEL_3
} Gpt_FcpitChannelType;
/* PRQA S 1535 -- */

/**
 * @brief Initialize FCPIT timer
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param bDbgMode FCPIT debug mode flag
 * @param pFcpitConfig FCPIT initialization configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Fcpit_Init(Gpt_ModuleType                          eModule,
                                        uint8                                   u8Channel,
                                        boolean                                 bDbgMode,
                                        const Gpt_ConfigChannelFcpitType *const pFcpitConfig);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initializatoin
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_DeInit(Gpt_ModuleType eModule, uint8 u8Channel);
#endif

/**
 * @brief Start FCPIT timer
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param u32Value FCPIT start value
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value);

/**
 * @brief Stop FCPIT timer
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel);

/**
 * @brief Get FCPIT elapsed value
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue FCPIT target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_FCPit_GetTimeElapsed(Gpt_ModuleType eModule,
                                                    uint8          u8Channel,
                                                    boolean       *pbReturnChannelRollover,
                                                    uint32        *pu32TargetValue);

/**
 * @brief Enable FCPIT interrupt
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_EnableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel);

/**
 * @brief Disable FCPIT interrupt
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPIT_DisableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel);

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Start predef timer
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param bDbgModeEnable Enable/Disable debug mode flag
 * @param u32MaxValue FCPIT max value
 */
GPT_TEXT_SECTION void Gpt_LL_FCPIT_StartPredefTimer(Gpt_ModuleType eModule,
                                                    uint8          u8Channel,
                                                    boolean        bDbgModeEnable,
                                                    uint32         u32MaxValue);

/**
 * @brief Get predef timer value
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param u32MaxValue FCPIT max value
 * @return
 */
GPT_TEXT_SECTION uint32 Gpt_LL_FCPIT_GetPredefTimerValue(Gpt_ModuleType eModule,
                                                         uint8          u8Channel,
                                                         uint32         u32MaxValue);

/**
 * @brief Stop predef timer
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPIT_StopPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel);
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*GPT_FCPIT_USED == STD_ON*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_FCPIT_H*/

/** @} */
