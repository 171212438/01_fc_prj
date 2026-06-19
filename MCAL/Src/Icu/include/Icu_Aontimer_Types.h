/**
*   @file    Icu_Aontimer_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Aontimer driver header file.
*   @details Aontimer driver defines which need to be exported to external application
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Aontimer
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
==================================================================================================*/

#ifndef ICU_AONTIMER_TYPE_H
#define ICU_AONTIMER_TYPE_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
/*===============================================================================================
*                                       DEFINES AND MACROS
===============================================================================================*/

/*===============================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
===============================================================================================*/
/** @brief Aontimer Instance */
typedef enum
{
    ICU_AONTIMER = 0,
} Icu_AontimerInstanceType;

/** @brief Aontimer clock source */
typedef enum
{
    ICU_AONTIMER_SIRC_1MHZ = 0U, /**< AONTIMER SIRC 1MHZ clock */
    ICU_AONTIMER_RTC_CLK   = 2U, /**< AONTIMER RTC clock  */
    ICU_AONTIMER_PCC_CLK   = 3U  /**< AONTIMER internal clock, which comes from PCC */
} Icu_AontimerClkSrcType;

/** @brief Aontimer prescaler enable */
typedef enum
{
    ICU_AONTIMER_PRESCALER_BYPASS = 0,
    ICU_AONTIMER_PRESCALER_ENABLE,
} Icu_AontimerPrescalerEnableType;

/** @brief The polarity of pulse mode */
typedef enum
{
    AONTIMER_PulsePolarityType_HIGH = 0,
    AONTIMER_PulsePolarityType_LOW
} Icu_AontimerPulsePolarityType;

/** @brief The glitch filter of the input pin */
typedef enum
{
    ICU_AONTIMER_GLITCH_FILTER_2 = 1,
    ICU_AONTIMER_GLITCH_FILTER_4,
    ICU_AONTIMER_GLITCH_FILTER_8,
    ICU_AONTIMER_GLITCH_FILTER_16,
    ICU_AONTIMER_GLITCH_FILTER_32,
    ICU_AONTIMER_GLITCH_FILTER_64,
    ICU_AONTIMER_GLITCH_FILTER_128,
    ICU_AONTIMER_GLITCH_FILTER_256,
    ICU_AONTIMER_GLITCH_FILTER_512,
    ICU_AONTIMER_GLITCH_FILTER_1024,
    ICU_AONTIMER_GLITCH_FILTER_2048,
    ICU_AONTIMER_GLITCH_FILTER_4096,
    ICU_AONTIMER_GLITCH_FILTER_8192,
    ICU_AONTIMER_GLITCH_FILTER_16384,
    ICU_AONTIMER_GLITCH_FILTER_32768,
} Icu_AontimerGlitchFilterType;

/** @brief The clock source of the pulse mode */
typedef enum
{
    ICU_AONTIMER_CLK0_PIN = 0,
    ICU_AONTIMER_CLK1_PIN,
    ICU_AONTIMER_CLK2_PIN,
    ICU_AONTIMER_TRGSEL_OUTPUT,
} Icu_AontimerPulseClkSrcType;

/**
 * @brief Aontimer module config type
 *
 */
typedef struct
{
    const Icu_AontimerInstanceType        eAontimerInstance;
    const Icu_AontimerClkSrcType          eClkSrc;
    const Icu_AontimerPrescalerEnableType ePrescalerEnable;
    const Icu_AontimerGlitchFilterType    eGlitchFilter;
    const Icu_AontimerPulseClkSrcType     ePinSelect;
    const uint8                           u8InstancePartition;

} Icu_AontimerModuleConfigType;

/** @brief Aontimer hw config type */
typedef struct
{
    const uint8 u8ModuleCount;
    const Icu_AontimerModuleConfigType (*pAontimerModuleConfig)[];
} Icu_AontimerHwConfigType;

#ifdef __cplusplus
}
#endif
#endif /*ICU_AONTIMER_TYPE_H*/
/** @} */
