/**
*   @file    Icu_Ftu_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - FTU driver header file.
*   @details FTU driver defines which need to be exported to external application
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU
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
/* PRQA S 3630 EOF
   3630:The implementation of this struct/union type should be hidden.
   REASON: These structures are needed.
*/
#ifndef ICU_FTU_TYPE_H
#define ICU_FTU_TYPE_H
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
#define ICU_FTU_INPUT_FILTER_COUNT 4

/*===============================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
===============================================================================================*/
/** @brief Ftu clock source */
typedef enum
{
    ICU_FTU_NO_CLK        = 0U,
    ICU_FTU_BUS_CLK       = 1U,
    ICU_FTU_PCC_CLK       = 3U,
    ICU_FTU_EXTERNAL_CLK0 = 3U,
    ICU_FTU_EXTERNAL_CLK1 = 4U,
    ICU_FTU_EXTERNAL_CLK2 = 5U
} Icu_FtuClkSrcType;

/** @brief Ftu debug mode */
typedef enum
{
    ICU_FTU_DBG_COUNTER_STOP_CHN_WORKS =
        0U, /**< FTU counter stopped, channel works as function mode. */
    ICU_FTU_DBG_COUNTER_STOP_CHN_FORCE_SAFE = 1U, /**< FTU counter stopped, channel output force to
                                                     safe state. */
    ICU_FTU_DBG_COUNTER_STOP_CHN_FROZEN = 2U, /**< FTU counter stopped, channel output is frozen. */
    ICU_FTU_DBG_COUNTER_WORKS_CHN_WORKS = 3U  /**< FTU counter works as function mode, channel works
                                                 as function mode. */
} ICU_FTU_DebugModeType;

/** @brief Ftu counter prescaler */
typedef enum
{
    ICU_FTU_PRESCALER_DIV_1 = 0U,
    ICU_FTU_PRESCALER_DIV_2,
    ICU_FTU_PRESCALER_DIV_4,
    ICU_FTU_PRESCALER_DIV_8,
    ICU_FTU_PRESCALER_DIV_16,
    ICU_FTU_PRESCALER_DIV_32,
    ICU_FTU_PRESCALER_DIV_64,
    ICU_FTU_PRESCALER_DIV_128
} Icu_FtuPrescalerType;

/** @brief Ftu Instance */
typedef enum
{
    ICU_FTU_0 = 0,
    ICU_FTU_1,
    ICU_FTU_2,
    ICU_FTU_3,
    ICU_FTU_4,
    ICU_FTU_5,
    ICU_FTU_6,
    ICU_FTU_7,
    ICU_FTU_8,
    ICU_FTU_9,
    ICU_FTU_10,
    ICU_FTU_11,
} Icu_FtuInstanceType;

/** @brief Ftu filter prescaler */
typedef enum
{
    ICU_FTU_FLT_DIV_1 = 0U,
    ICU_FTU_FLT_DIV_2,
    ICU_FTU_FLT_DIV_3,
    ICU_FTU_FLT_DIV_4,
    ICU_FTU_FLT_DIV_5,
    ICU_FTU_FLT_DIV_6,
    ICU_FTU_FLT_DIV_7,
    ICU_FTU_FLT_DIV_8,
    ICU_FTU_FLT_DIV_9,
    ICU_FTU_FLT_DIV_10,
    ICU_FTU_FLT_DIV_11,
    ICU_FTU_FLT_DIV_12,
    ICU_FTU_FLT_DIV_13,
    ICU_FTU_FLT_DIV_14,
    ICU_FTU_FLT_DIV_15,
    ICU_FTU_FLT_DIV_16
} Icu_FtuFilterPrescalerType;

/** @brief Ftu input capture mode */
typedef enum
{
    ICU_FTU_INPUT_RISING_EDGE = 0U,
    ICU_FTU_INPUT_FALLING_EDGE,
    ICU_FTU_INPUT_BOTH_EDGE
} Icu_FtuInputCaptureType;

/** @brief Ftu input level */
typedef enum
{
    ICU_FTU_INPUT_LOW = 0,
    ICU_FTU_INPUT_HIGH,
} Icu_FtuInputLevelType;

/** @brief Ftu global time base enable/disable*/
typedef enum
{
    ICU_GTB_Dis = 0,
    ICU_GTB_En  = 1,
} Icu_GtbType;

/**
 * @brief FTU Icm Config Type
 *
 */
typedef enum
{
    ICU_FTU_ICM_PERIOD = 0U,
    ICU_FTU_ICM_TIME   = 1u,
} Icu_FtuIcmModeType;

/**
 * @brief FTU Module Config Type
 *
 */
typedef struct
{
    const Icu_FtuInstanceType        eFtuInstance;
    const Icu_FtuClkSrcType          eClkSrc;
    const Icu_FtuPrescalerType       ePrescaler;
    const Icu_FtuFilterPrescalerType efilterPrescaler;
    const uint8                      aInputFilter[ICU_FTU_INPUT_FILTER_COUNT];
    const uint32                     u32Period;
    const Icu_GtbType                eGtbEn;
    const ICU_FTU_DebugModeType      eDebugMode;
    const uint8                      u8InstancePartition;
} Icu_FtuModuleConfigType;

/** @brief Ftu Hw Config Type */
typedef struct
{
    const uint8 u8ModuleCount;
    const Icu_FtuModuleConfigType (*pFtuModuleConfig)[];
} Icu_Ftu_HwConfigType;

#ifdef __cplusplus
}
#endif
#endif /* ICU_FTU_TYPE_H */
/** @} */
