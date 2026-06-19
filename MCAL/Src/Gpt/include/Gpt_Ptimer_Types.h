/**
*   @file    Gpt_Ptimer_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Ptimer - hardware specific type definition
*   @details This file contains the Gpt Autosar hardware specific type definition
*
*   @addtogroup Gpt_Ptimer
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
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifndef GPT_PTIMER_TYPES_H
#define GPT_PTIMER_TYPES_H

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
* @brief PTIMER Channels defines
*/
#define PTIMER_CH_0     ((uint8)0)

/**
* @brief PTIMER 0
*/
#define GPT_PTIMER_0    ((uint8)0)
/**
* @brief PTIMER 1
*/
#define GPT_PTIMER_1    ((uint8)1)
/**
* @brief PTIMER 2
*/
#define GPT_PTIMER_2    ((uint8)2)
/**
* @brief PTIMER 3
*/
#define GPT_PTIMER_3    ((uint8)3)
/*==================================================================================================
*                                            ENUMS
==================================================================================================*/
/**
 * @brief Ptimer clock prescaler divider factor
 *
 * The Ptimer clock source is from core clock and the divider is a multiplication of
 * Gpt_PtimerPrescalerType and Gpt_PtimerMultiplicationType, and thus:
 * Freq = Core_Freq / (Gpt_PtimerPrescalerType * Gpt_PtimerMultiplicationType)
 *
 */
typedef enum
{
    GPT_PTIMER_PRE_DIVIDE_BY_1   = 0U, /*!< The clock pre-divide factor is 1 */
    GPT_PTIMER_PRE_DIVIDE_BY_2   = 1U, /*!< The clock pre-divide factor is 2 */
    GPT_PTIMER_PRE_DIVIDE_BY_4   = 2U, /*!< The clock pre-divide factor is 4 */
    GPT_PTIMER_PRE_DIVIDE_BY_8   = 3U, /*!< The clock pre-divide factor is 8 */
    GPT_PTIMER_PRE_DIVIDE_BY_16  = 4U, /*!< The clock pre-divide factor is 16 */
    GPT_PTIMER_PRE_DIVIDE_BY_32  = 5U, /*!< The clock pre-divide factor is 32 */
    GPT_PTIMER_PRE_DIVIDE_BY_64  = 6U, /*!< The clock pre-divide factor is 64 */
    GPT_PTIMER_PRE_DIVIDE_BY_128 = 7U  /*!< The clock pre-divide factor is 128 */
} Gpt_PtimerPrescalerType;

/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct
*  REASON: Identifiers declared is different */
/**
 * @brief Ptimer clock divider multiplication factor
 *
 * The Ptimer clock source is from core clock and the divider is a multiplication of
 * Gpt_PtimerPrescalerType and Gpt_PtimerMultiplicationType, and thus:
 * Freq = Core_Freq / (Gpt_PtimerPrescalerType * Gpt_PtimerMultiplicationType)
 *
 */
typedef enum
{
    GPT_PTIMER_PRE_DIVIDER_MULT_BY_1  = 0U, /*!< The clock multiplication factor for clock divider is 1 */
    GPT_PTIMER_PRE_DIVIDER_MULT_BY_10 = 1U, /*!< The clock multiplication factor for clock divider is 10 */
    GPT_PTIMER_PRE_DIVIDER_MULT_BY_20 = 2U, /*!< The clock multiplication factor for clock divider is 20 */
    GPT_PTIMER_PRE_DIVIDER_MULT_BY_40 = 3U  /*!< The clock multiplication factor for clock divider is 40 */
} Gpt_PtimerMultiplicationType;
/* PRQA S 0779 -- */

/**
 * @brief Select the Ptimer trigger source
 *
 */
typedef enum
{
    GPT_PTIMER_TRGSRC_TRGSEL = 0x00U, /**< Ptimer trigger source from TrgSel */
    GPT_PTIMER_TRGSRC_SW     = 0x0FU  /**< Ptimer trigger source from software trigger */
} Gpt_PtimerTrgSrcType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief PTIMER specific configuration
 */
typedef struct
{
    Gpt_PtimerPrescalerType ePtimerPrescaler;
    Gpt_PtimerMultiplicationType ePtimerMultiplication;
} Gpt_ConfigChannelPtimerType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_PTIMER_TYPES_H*/
/**  @}*/
