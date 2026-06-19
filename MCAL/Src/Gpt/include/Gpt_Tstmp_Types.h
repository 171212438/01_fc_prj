/**
*   @file    Gpt_Tstmp_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Tstmp - hardware specific type definition
*   @details This file contains the Gpt Autosar hardware specific type definition
*
*   @addtogroup Gpt_Tstmp
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
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifndef GPT_TSTMP_TYPES_H
#define GPT_TSTMP_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Common_Cfg.h"
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Highest possible value for TSTMP MOD channels
*/
#define GPT_TSTMP_32BIT_CNT_MAX_VALUE_U64    ((uint64)0xFFFFFFFFuL)

/**
* @brief TSTMP Channels defines
*/
#define TSTMP_CH_0                  ((uint8)0)
#define TSTMP_CH_1                  ((uint8)1)
#define TSTMP_CH_2                  ((uint8)2)
#define TSTMP_CH_3                  ((uint8)3)

/**
* @brief TSTMP 0
*/
#define GPT_TSTMP_0    ((uint8)0)
/**
* @brief TSTMP 1
*/
#define GPT_TSTMP_1    ((uint8)1)
/**
* @brief TSTMP 2
*/
#define GPT_TSTMP_2    ((uint8)2)
/**
* @brief TSTMP 3
*/
#define GPT_TSTMP_3    ((uint8)3)
/**
* @brief TSTMP 4
*/
#define GPT_TSTMP_4    ((uint8)4)
/*==================================================================================================
*                                            ENUMS
==================================================================================================*/
/** @brief TSTMP0 Modulate Timer Counter Clock Source */
typedef enum
{
    SIRC_1M        = 0U,
    SIRC_32K       = 1U,
    SOSC_32K       = 2U,
    FOSC_DIVL      = 3U,
    AON_CLK        = 4U
} Gpt_TstmpModClkType;

/** @brief TSTMP0 function clock prescaler */
typedef enum
{
    GPT_TSTMP_DIV_1 = 0U,
    GPT_TSTMP_DIV_2,
    GPT_TSTMP_DIV_3,
    GPT_TSTMP_DIV_4,
    GPT_TSTMP_DIV_5,
    GPT_TSTMP_DIV_6,
    GPT_TSTMP_DIV_7,
    GPT_TSTMP_DIV_8
} Gpt_TstmpFunClkPrescalerType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief
 */
typedef struct
{
    Gpt_TstmpModClkType eTstmpModClkSrc;
    Gpt_TstmpFunClkPrescalerType eTstmpFunClkPrescaler;
} Gpt_ConfigChannelTstmpType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_TSTMP_TYPES_H*/
/**  @}*/
