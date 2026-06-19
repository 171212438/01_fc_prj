/**
 *   @file    Gpt_Ftu.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Ftu - API
 *   @details This file contains the Gpt_Ftu Autosar APIs
 *
 *   @addtogroup Gpt_Ftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_FTu
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
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/

#ifndef GPT_FTU_H
#define GPT_FTU_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Cfg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if defined(GPT_FTU_0_ISR_USED) || defined(GPT_FTU_1_ISR_USED) || defined(GPT_FTU_2_ISR_USED) || \
    defined(GPT_FTU_3_ISR_USED) || defined(GPT_FTU_4_ISR_USED) || defined(GPT_FTU_5_ISR_USED) || \
    defined(GPT_FTU_6_ISR_USED) || defined(GPT_FTU_7_ISR_USED) || defined(GPT_FTU_8_ISR_USED) || \
    defined(GPT_FTU_9_ISR_USED) || defined(GPT_FTU_10_ISR_USED) || defined(GPT_FTU_11_ISR_USED)
#define GPT_FTU_ISR_USED
#endif

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
 * @brief FTU initialization
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
                                      Gpt_ChannelModeType             eChannelMode);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initialization
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_DeInit(Gpt_ModuleType eModule, uint8 u8Channel);
#endif

/**
 * @brief Start FTU timer
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 * @param u32Value FTU start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value);

/**
 * @brief Stop FTU timer
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel);

/**
 * @brief Get FTU elapsed value
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
                                                  uint32        *pTargetValue);

#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
/**
 * @brief FTU change next timeout value
 *
 * @param eModule FTU module
 * @param u8Channel FTU channel for current module
 * @param u32Value The value of next timeout
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_ChangeNextTimeoutValue(Gpt_ModuleType eModule,
                                                        uint8          u8Channel,
                                                        uint32         u32Value);
#endif

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Start predef timer
 *
 * @param eModule FTU module
 * @param bDbgModeEnable Enable/Disable debug mode flag
 * @param eClkSrc FTU clock source
 * @param ePrescale FTU prescaler
 */
GPT_TEXT_SECTION void Gpt_LL_Ftu_StartPredefTimer(Gpt_ModuleType          eModule,
                                                  boolean                 bDbgModeEnable,
                                                  Gpt_FtuModuleClkSrcType eClkSrc,
                                                  Gpt_FtuPrescalerType    ePrescale);

/**
 * @brief Get predef timer value
 *
 * @param eModule FTU module
 * @return uint32 Predef timer value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Ftu_GetPredefTimerValue(Gpt_ModuleType eModule);
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*GPT_FTU_H*/

/** @} */
