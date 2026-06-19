/**
 *   @file    Gpt_Tstmp.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Tstmp - API
 *   @details This file contains the Gpt Autosar APIs
 *
 *   @addtogroup GPT
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_Tstmp
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
*   0.5.0       30/1/2024     QXW0074       N/A          Gpt_Tstmp Initial version
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*   0.7.0       26/04/2024    QXW0076       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/
#ifndef GPT_TSTMP_H
#define GPT_TSTMP_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Gpt_Cfg.h"
#include "Gpt_Tstmp_Types.h"

#if defined(GPT_TSTMP_USED)
/*=================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define GPT_TSTMP0_DUMMY_CYCLES_1M   2400U  /* double 4 Source Clock Cycle =  2 * 4 * 300M/1M  */
#define GPT_TSTMP0_DUMMY_CYCLES_32K  75000U /* double 4 Source Clock Cycle =  2 * 4 * 300M/32K */
#define GPT_TSTMP0_DUMMY_CYCLES_250K 9600U  /* double 4 Source Clock Cycle =  2 * 4 * 300M/250K */

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

#if (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_OFF)
/**
 * @brief TSTMP initialization
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_Init(Gpt_ModuleType eModule, uint8 u8Channel);
#else
/**
 * @brief TSTMP initialization
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 * @param pTstmpConfig TSTMP configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_Init(Gpt_ModuleType                    eModule,
                                        uint8                             u8Channel,
                                        const Gpt_ConfigChannelTstmpType *pTstmpConfig);
#endif /* (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_OFF) */

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initiailization
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_DeInit(Gpt_ModuleType eModule, uint8 u8Channel);
#endif

/**
 * @brief TSTMP start timer
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 * @param u32Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value);

/**
 * @brief TSTMP stop timer
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel);

/**
 * @brief TSTMP get elapsed value
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue TSTMP target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Tstmp_GetTimeElapsed(Gpt_ModuleType eModule,
                                                    uint8          u8Channel,
                                                    boolean       *pbReturnChannelRollover,
                                                    uint32        *pu32TargetValue);

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief TSTMP start predef timer
 *
 * @param ePredefTimer The selected PredefTimer type
 * @param eModule TSTMP module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_StartPredefTimer(Gpt_PredefTimerType ePredefTimer,
                                                    Gpt_ModuleType      eModule);

/**
 * @brief TSTMP get predef timer value
 *
 * @param ePredefTimer The selected PredefTimer type
 * @param eModule TSTMP module
 * @param u32MaxCount max count for for current TSTMP channel
 * @return uint32 Predef timer value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Tstmp_GetPredefTimerValue(Gpt_PredefTimerType ePredefTimer,
                                                         Gpt_ModuleType      eModule,
                                                         uint32              u32MaxCount);

#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*GPT_TSTMP_USED == STD_ON*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_TSTMP_H*/

/** @} */
