/**
 *   @file    Adc_HsAdc_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - hardware specific type definition
 *   @details This file contains the ADC Autosar hardware specific type definition
 *
 *   @addtogroup ADC
 *   @{
 */
/* clang-format off */
/*==================================================================================================
*   PERIPHERAL           : HSADC
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
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/

#ifndef ADC_HSADC_TYPES_H
#define ADC_HSADC_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/**
 * @file           Adc_SarAdc_Types.h
 */
#include "Std_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/**
 * @brief Select the HSADC result alignment
 *
 */
typedef enum
{
    HSADC_ALIGN_RIGHT = 0U, /*!< HSADC result is aligned in right */
    HSADC_ALIGN_LEFT  = 1U  /*!< HSADC result is aligned in left */
} HsAdc_AlignType;

/**
 * @brief Select the HSADC trigger mode
 *
 * @note This option is only valid in HSADC single sequence mode and HSADC continuous mode.
 * In HSADC discontinuous mode, the HSADC trigger mode is fixed as HSADC_TRIGMODE_RISING_EDGE
 *
 */
typedef enum
{
    HSADC_TRGMODE_SW                = 0U, /*!< HSADC is triggered by software */
    HSADC_TRGMODE_RISING_EDGE       = 1U, /*!< HSADC is triggered by hardware trigger on rising edge */
    HSADC_TRGMODE_FALLING_EDGE      = 2U, /*!< HSADC is triggered by hardware trigger on falling edge */
    HSADC_TRGMODE_BOTH_EDGE         = 3U, /*!< HSADC is triggered by hardware trigger on both edges */
    HSADC_TRGMODE_HIGH_VOLTAGE      = 4U, /*!< HSADC is triggered when hardware trigger is high voltage */
    HSADC_TRGMODE_LOW_VOLTAGE       = 5U,  /*!< HSADC is triggered when hardware trigger is low voltage */
    HSADC_TRGMODE_INTERNAL_PERIODIC = 6U /*!< HSADC is triggered by internal generated periodic trigger */
} HsAdc_TrgModeType;

/**
 * @brief Select the HSADC sequence mode
 *
 */
typedef enum
{
    HSADC_SEQMODE_SINGLE        = 0U, /*!< HSADC single sequence mode */
    HSADC_SEQMODE_CONTINUOUS    = 1U, /*!< HSADC continuous mode */
    HSADC_SEQMODE_DISCONTINUOUS = 2U  /*!< HSADC discontinuous mode */
} HsAdc_SeqModeType;

typedef enum
{
    HSADC_FAST_CMP_REFMODE_SW   = 0U,
    HSADC_FAST_CMP_REFMODE_RAMP = 1U,
    HSADC_FAST_CMP_REFMODE_ALT  = 2U
} HsAdc_FastCmpRefMode;

typedef enum
{
    HSADC_FAST_CMP_RAMPDIR_UP   = 0U,
    HSADC_FAST_CMP_RAMPDIR_DOWN = 1U
} HsAdc_FastCmpRampDir;

typedef enum
{
    HSADC_FAST_CMP_RAMPTRGMODE_SW_AUTO  = 0U,
    HSADC_FAST_CMP_RAMPTRGMODE_SW_EXT   = 1U,
    HSADC_FAST_CMP_RAMPTRGMODE_EXT_AUTO = 2U
} HsAdc_FastCmpRampTrgMode;

typedef enum
{
    HSADC_FAST_CMP_RAMPTRGPOL_RISING_OR_HIGH = 0U,
    HSADC_FAST_CMP_RAMPTRGPOL_FALLING_OR_LOW = 1U,
} HsAdc_FastCmpRampTrgPolarity;

typedef enum
{
    HSADC_FAST_CMP_BFA_A1B0 = 0U,
    HSADC_FAST_CMP_BFA_A0B1 = 1U,
} HsAdc_FCmpBFLAction;

/**
 * @brief Select the HSADC overrun management mode
 *
 * To select whether the old data are preserved or overwritten by the new data when HSADC
 * is overrun (The FIFO is full when new convertion result comes)
 *
 */
typedef enum
{
    HSADC_OVERRUN_MODE_PRESERVE  = 0U, /*!< old data are preserved when HSADC is overrun */
    HSADC_OVERRUN_MODE_OVERWRITE = 1U  /*!< old data are overwritten when HSADC is overrun */
} HsAdc_OvrModeType;

/**
 * @brief Select the priority of Trigger Latch Unit
 *
 */
typedef enum
{
    TRG_LATCH_UNIT_PRI_ROUND_ROBIN = 0U, /*!< select the round robin scheduling priority */
    TRG_LATCH_UNIT_PRI_FIX         = 1U  /*!< select the fixed priority(0 > 1 > 2 > 3) */
} HsAdc_TrgLatchUnitPri;

/**
 * @brief Select the HSADC hardware average samples
 *
 */
typedef enum
{
    HSADC_AVERAGE_LEN_4  = 0U, /*!< result average by 4 samples */
    HSADC_AVERAGE_LEN_8  = 1U, /*!< result average by 8 samples */
    HSADC_AVERAGE_LEN_16 = 2U, /*!< result average by 16 samples */
    HSADC_AVERAGE_LEN_32 = 3U  /*!< result average by 32 samples */
} HsAdc_AverageLenType;

/**
 * @brief Set the HSADC clock divider
 *
 */
typedef enum
{
    HSADC_CLOCK_DIV_1 = 0U,
    HSADC_CLOCK_DIV_2 = 1U,
    HSADC_CLOCK_DIV_4 = 2U,
    HSADC_CLOCK_DIV_8 = 3U
} HsAdc_ClockDivideType;

/**
 * @brief The trigger source of the HSADC instance
 *
 * @note In HSADC sequence group mode, the trigger source is from trig latch unit.
 * In HSADC single and continuous mode, if hardware trigger is enabled, the trigger
 * source is from TRGSEL
 *
 */
typedef enum
{
    HSADC_TRGSRC_TRGSEL          = 2U, /*!< Trigger source from TRGSEL */
    HSADC_TRGSRC_TRIG_LATCH_UNIT = 3U  /*!< Trigger source from LATCH UNIT */
} HsAdc_TrgSrcType;

/**
 * @brief Select the channel compare mode
 *
 * Select whether the channel compare is enabled on all channels or on the single
 * selected channel
 *
 */
typedef enum
{
    HSADC_CMP_CHANNEL_ALL    = 0U, /*!< Compare enabled in all channels */
    HSADC_CMP_CHANNEL_SINGLE = 1U  /*!< Compare enabled in the specified channel */
} HsAdc_CmpChannelType;

typedef enum
{
    FUNCTION_CLOCK_FROM_PCC = 0U,
    FUNCTION_CLOCK_FROM_PAD = 1U
} HsAdc_FunctionClockType;

/**
 * @brief The HSADC Sequence Group Index
 *
 */
typedef enum
{
    HSADC_SEQ_GROUP_0 = 0U,
    HSADC_SEQ_GROUP_1 = 1U,
} HsAdc_SeqGroupIndex;

#ifdef __cplusplus
}
#endif

#endif /* ADC_HSADC_TYPES_H */
/* clang-format on */
/** @} */
