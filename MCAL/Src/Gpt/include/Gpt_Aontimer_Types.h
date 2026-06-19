/**
*   @file    Gpt_Aontimer_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Aontimer - hardware specific type definition
*   @details This file contains the Gpt Autosar hardware specific type definition
*
*   @addtogroup Gpt_Aontimer
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_AONTIMER
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
*   0.1.0       17/12/2021    QXW0032       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifndef GPT_AONTIMER_TYPES_H
#define GPT_AONTIMER_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

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
* @brief AONTIMER Channels defines
*/
#define AONTIMER_CH_0                  ((uint8)0)

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/
/**
 * @brief
 */
typedef enum
{
    GPT_AONTIMER_PRESCALER_2 = 0U,
    GPT_AONTIMER_PRESCALER_4,
    GPT_AONTIMER_PRESCALER_8,
    GPT_AONTIMER_PRESCALER_16,
    GPT_AONTIMER_PRESCALER_32,
    GPT_AONTIMER_PRESCALER_64,
    GPT_AONTIMER_PRESCALER_128,
    GPT_AONTIMER_PRESCALER_256,
    GPT_AONTIMER_PRESCALER_512,
    GPT_AONTIMER_PRESCALER_1024,
    GPT_AONTIMER_PRESCALER_2048,
    GPT_AONTIMER_PRESCALER_4096,
    GPT_AONTIMER_PRESCALER_8192,
    GPT_AONTIMER_PRESCALER_16384,
    GPT_AONTIMER_PRESCALER_32768,
    GPT_AONTIMER_PRESCALER_65536,
    GPT_AONTIMER_PRESCALER_BYPASS
} Gpt_AontimerPrescalerType;

/** @brief Aontimer clock source, please refer to Reference Manual chapter8.Aontimer for details. */
typedef enum
{
    GPT_AONTIMER_SIRC_1MHZ = 0U,  /**< AONTIMER SIRC 1mhz clock */
    GPT_AONTIMER_RTC_CLK = 2U,    /**< AONTIMER RTC clock  */
    GPT_AONTIMER_IRC_CLK = 3U     /**< AONTIMER internal clock, which comes from PCC */
} Gpt_AontimerClkSrcType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief
 */
typedef struct
{
    Gpt_AontimerPrescalerType eAontimerPrescaler;
    Gpt_AontimerClkSrcType eAontimerClkSrc;
} Gpt_ConfigChannelAontimerType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_AONTIMER_TYPES_H*/
/**  @}*/
