/**
 *   @file    Adc_SarAdc_Types.h
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
*   PERIPHERAL           : ADC
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
*   0.8.0       05/07/2024    QXW0030       N/A          Add support for Adc to use without Ptimer
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
==================================================================================================*/

#ifndef ADC_SARADC_TYPES_H
#define ADC_SARADC_TYPES_H

#ifdef __cplusplus
extern "C" {
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
 * @brief Select the ADC result alignment
 *
 */
typedef enum
{
    ADC_RESULT_ALIGN_RIGHT = 0U,   /*!< ADC result is aligned in right */
    ADC_RESULT_ALIGN_LEFT  = 1U    /*!< ADC result is aligned in left */
} Adc_AlignType;

/**
 * @brief Select the ADC trigger mode
 *
 * @note This option is only valid in ADC single sequence mode and ADC continuous mode.
 * In ADC discontinuous mode, the ADC trigger mode is fixed as ADC_TRIGMODE_RISING_EDGE
 *
 */
typedef enum
{
    ADC_TRIGMODE_SW                = 0U,  /*!< ADC is triggered by software */
    ADC_TRIGMODE_RISING_EDGE       = 1U,  /*!< ADC is triggered by hardware trigger on rising edge */
    ADC_TRIGMODE_FALLING_EDGE      = 2U,  /*!< ADC is triggered by hardware trigger on falling edge */
    ADC_TRIGMODE_BOTH_EDGE         = 3U,  /*!< ADC is triggered by hardware trigger on both edges */
    ADC_TRIGMODE_HIGH_VOLTAGE      = 4U,  /*!< ADC is triggered when hardware trigger is high voltage */
    ADC_TRIGMODE_LOW_VOLTAGE       = 5U,  /*!< ADC is triggered when hardware trigger is low voltage */
    ADC_TRIGMODE_INTERNAL_PERIODIC = 6U   /*!< ADC is triggered by internal periodic trigger */
} Adc_TrigModeType;

/**
 * @brief Select the ADC sequence mode
 *
 */
typedef enum
{
    ADC_SEQMODE_SINGLE          = 0U,   /*!< ADC single sequence mode */
    ADC_SEQMODE_CONTINUOUS      = 1U,   /*!< ADC continuous mode */
    ADC_SEQMODE_DISCONTINUOUS_0 = 2U,   /*!< ADC discontinuous 0 mode */
    ADC_SEQMODE_DISCONTINUOUS_1 = 3U    /*!< ADC discontinuous 1 mode */
} Adc_SeqModeType;

/**
 * @brief Select the ADC overrun management mode
 *
 * To select whether the old data are preserved or overwritten by the new data when ADC
 * is overrun (The FIFO is full when new convertion result comes)
 *
 */
typedef enum
{
    ADC_OVERRUN_MODE_PRESERVE  = 0U, /*!< old data are preserved when ADC is overrun */
    ADC_OVERRUN_MODE_OVERWRITE = 1U  /*!< old data are overwritten when ADC is overrun */
} Adc_OvrModeType;

/**
 * @brief Select the ADC voltage reference source
 *
 */
typedef enum
{
    ADC_REF_INTERNAL = 0U,   /*!< select the internal voltage reference */
    ADC_REF_EXTERNAL = 1U    /*!< select the external voltage reference */
} Adc_RefType;

/**
 * @brief Select the ADC hardware average samples
 *
 */
typedef enum
{
    ADC_AVERAGE_4  = 0U,  /*!< result average by 4 samples */
    ADC_AVERAGE_8  = 1U,  /*!< result average by 8 samples */
    ADC_AVERAGE_16 = 2U,  /*!< result average by 16 samples */
    ADC_AVERAGE_32 = 3U   /*!< result average by 32 samples */
} Adc_AverageType;

/**
 * @brief The trigger source of the ADC instance
 *
 * @note In ADC discontinuous 1 mode, the trigger source is from Ptimer
 * In ADC single and continuous mode, if hardware trigger is enabled, the trigger
 * source is from TrgSel
 *
 */
typedef enum
{
    ADC_TRIGSRC_PTIMER     = 0U,     /*!< Trigger source from Ptimer */
    ADC_TRIGSRC_TRGSEL     = 2U,     /*!< Trigger source from TrgSel */
    ADC_TRIGSRC_LATCH_UNIT = 3U      /*!< Trigger source from Trigger Latch Unit */
} Adc_TrigSrcType;

/**
 * @brief The priority type of the ADC instance
 *
 * @details This priority type is only used in Adc Sequence Group Mode. When the priority
 * is round robin, the priority of all groups are decided on round robin scheduling. When
 * the priority is fixed, the priority is decided on fix priority (0 > 1 > 2 > 3).
 *
 */
typedef enum
{
    ADC_SEQ_PRIORITY_ROUND_ROBIN = 0U,
    ADC_SEQ_PRIORITY_FIXED       = 1U,
} Adc_SeqPriorityType;

/**
 * @brief Select the ADC pretrigger source for discontinuous mode
 *
 * @note This option is only valid when ADC sequence mode is discontinuous. In ADC single
 * and continuous modes, the pretrigger is not needed
 *
 */
typedef enum
{
    ADC_PRETRIGGER_SEL_PTIMER     = 0x00U,   /*!< PTIMER pretrigger selected. */
    ADC_PRETRIGGER_SEL_TRGSEL     = 0x01U,   /*!< TRGSEL pretrigger selected. */
    ADC_PRETRIGGER_SEL_SW         = 0x02U    /*!< Software pretrigger selected. */
} Adc_PreTriggerSelType;

/**
 * @brief Select the ADC trigger source for discontinuous or sequence group mode
 *
 * @note This option is only valid when ADC sequence mode is discontinuous. In ADC single
 * and continuous modes, if the trigger mode is not software, then the hardware trigger
 * source is always from TRGSEL
 *
 */
typedef enum
{
    ADC_TRIGGER_SEL_PTIMER        = 0x00U,   /*!< PTIMER trigger selected. */
    ADC_TRIGGER_SEL_TRGSEL        = 0x01U    /*!< TRGSEL trigger selected. */
} Adc_TriggerSelType;

/**
 * @brief Select the software pretrigger source
 *
 * @note This option is only valid when software pretrigger is selected in ADC
 * discontinuous mode. Otherwise, this option is invalid and should not be configured
 *
 */
typedef enum
{
    ADC_SW_PRETRIGGER_DISABLED = 0x00U,   /*!< SW pretrigger disabled. */
    ADC_SW_PRETRIGGER_0        = 0x04U,   /*!< SW pretrigger 0. */
    ADC_SW_PRETRIGGER_1        = 0x05U,   /*!< SW pretrigger 1. */
    ADC_SW_PRETRIGGER_2        = 0x06U,   /*!< SW pretrigger 2. */
    ADC_SW_PRETRIGGER_3        = 0x07U    /*!< SW pretrigger 3. */
} Adc_SwPreTriggerType;

/**
 * @brief Select the channel compare mode
 *
 * Select whether the channel compare is enabled on all channels or on the single
 * selected channel
 *
 */
typedef enum
{
    ADC_CMP_CHANNEL_ALL    = 0U,  /*!< Compare enabled in all channels */
    ADC_CMP_CHANNEL_SINGLE = 1U   /*!< Compare enabled in the specified channel */
} Adc_CmpChannelType;

#ifdef __cplusplus
}
#endif

#endif /* ADC_SARADC_TYPES_H */
/* clang-format on */
/** @} */
