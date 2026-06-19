/**
 *   @file    Adc_Ptimer_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - hardware specific type definition
 *   @details This file contains the Ptimer Autosar hardware specific type definition
 *
 *   @addtogroup ADC
 *   @{
 */
/* clang-format off */
/*==================================================================================================
*   PERIPHERAL           : PTIMER
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       10/07/2023    QXW0030       N/A          ADC Initial Version
*   0.2.0       07/10/2023    QXW0030       N/A          Add Adc Multicore Support
*   0.3.0       17/10/2023    QXW0030       N/A          Optimization of Multicore instance
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
==================================================================================================*/

#ifndef ADC_PTIMER_TYPES_H
#define ADC_PTIMER_TYPES_H

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Ptimer value load mode
 *
 * Some Ptimer registers are buffered and will only take effect after called
 * PTIMER_LoadValue() function, and this option selects when the buffered configurations
 * will tack effect after PTIMER_LoadValue() is called.
 *
 */
typedef enum
{
    PTIMER_LOAD_VAL_IMMEDIATELY                              = 0U,
    /*!<  Loaded immediately after load operation. */
    PTIMER_LOAD_VAL_AT_MODULO_COUNTER                        = 1U,
    /*!< Loaded when counter hits the max count after load operation. */
    PTIMER_LOAD_VAL_AT_NEXT_TRIGGER                          = 2U,
    /*!< Loaded when detecting an input trigger after load operation. */
    PTIMER_LOAD_VAL_AT_EITHER_MODULO_COUNTER_OR_NEXT_TRIGGER = 3U
    /*!< Loaded when counter hits the max count or detecting an input trigger after load operation. */
} Ptimer_LoadValueModeType;

/**
 * @brief Ptimer clock pre-divider factor
 *
 * The Ptimer clock source is from core clock and the divider is a multiplication of
 * Ptimer_ClockPreDividerType and Ptimer_ClockPreDivMultiplyFactorType, and thus:
 * Freq = Core_Freq / (Ptimer_ClockPreDividerType * Ptimer_ClockPreDivMultiplyFactorType)
 *
 */
typedef enum
{
    PTIMER_PRE_DIVIDE_BY_1   = 0U, /*!< The clock pre-divide factor is 1 */
    PTIMER_PRE_DIVIDE_BY_2   = 1U, /*!< The clock pre-divide factor is 2 */
    PTIMER_PRE_DIVIDE_BY_4   = 2U, /*!< The clock pre-divide factor is 4 */
    PTIMER_PRE_DIVIDE_BY_8   = 3U, /*!< The clock pre-divide factor is 8 */
    PTIMER_PRE_DIVIDE_BY_16  = 4U, /*!< The clock pre-divide factor is 16 */
    PTIMER_PRE_DIVIDE_BY_32  = 5U, /*!< The clock pre-divide factor is 32 */
    PTIMER_PRE_DIVIDE_BY_64  = 6U, /*!< The clock pre-divide factor is 64 */
    PTIMER_PRE_DIVIDE_BY_128 = 7U  /*!< The clock pre-divide factor is 128 */
} Ptimer_ClockPreDividerType;

/**
 * @brief Ptimer clock divider multiplication factor
 *
 * The Ptimer clock source is from core clock and the divider is a multiplication of
 * Ptimer_ClockPreDividerType and Ptimer_ClockPreDivMultiplyFactorType, and thus:
 * Freq = Core_Freq / (Ptimer_ClockPreDividerType * Ptimer_ClockPreDivMultiplyFactorType)
 *
 */
typedef enum
{
    PTIMER_PRE_DIVIDER_MULT_BY_1  = 0U, /*!< The clock multiplication factor for clock divider is 1 */
    PTIMER_PRE_DIVIDER_MULT_BY_10 = 1U, /*!< The clock multiplication factor for clock divider is 10 */
    PTIMER_PRE_DIVIDER_MULT_BY_20 = 2U, /*!< The clock multiplication factor for clock divider is 20 */
    PTIMER_PRE_DIVIDER_MULT_BY_40 = 3U  /*!< The clock multiplication factor for clock divider is 40 */
} Ptimer_ClockPreDivMultiplyFactorType;

/**
 * @brief Select the Ptimer trigger source
 *
 */
typedef enum
{
    PTIMER_TRGSRC_TRGSEL = 0x00U, /*!< Ptimer trigger source from TrgSel */
    PTIMER_TRGSRC_SW     = 0x0FU  /*!< Ptimer trigger source from software trigger */
} Ptimer_TrgSrcType;

#endif /* ADC_PTIMER_TYPES_H */
/* clang-format on */
/** @} */
