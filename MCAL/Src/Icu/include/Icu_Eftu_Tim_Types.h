
/**
*   @file    Icu_Eftu_Tim_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Icu Eftu Tim driver header file.
*   @details Eftu Tim driver defines which need to be exported to external application
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Eftu_Tim
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
*   1.0.0       19/11/2024    QXW0076       N/A          Eftu_Tim Initial Version
==================================================================================================*/

#ifndef ICU_EFTU_TIM_TYPE_H
#define ICU_EFTU_TIM_TYPE_H

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

/**
 * @brief Icu EFtu Instance
 *
 * This enumeration type defines the instances of the ICU EFtu module.
 * It is used to identify and work with different instances of the EFtu module within the ICU.
 */
typedef enum
{
    ICU_EFTU_0 = 0U,    // Defines the first instance of the EFtu module
    ICU_EFTU_1,         // Defines the second instance of the EFtu module
    ICU_EFTU_2          // Defines the third instance of the EFtu module
} ICU_EftuInstanceType;

/**
 * @brief Enumerated type for ICU EFTU Timer Channel Index.
 *
 * This enumeration defines the channel indices for the ICU EFTU Tim.
 */
typedef enum
{
    ICU_EFTU_TIM_CH_0 = 0U, /**< Index for channel 0 */
    ICU_EFTU_TIM_CH_1 = 1U, /**< Index for channel 1 */
    ICU_EFTU_TIM_CH_2 = 2U, /**< Index for channel 2 */
    ICU_EFTU_TIM_CH_3 = 3U, /**< Index for channel 3 */
    ICU_EFTU_TIM_CH_4 = 4U, /**< Index for channel 4 */
    ICU_EFTU_TIM_CH_5 = 5U, /**< Index for channel 5 */
    ICU_EFTU_TIM_CH_6 = 6U, /**< Index for channel 6 */
    ICU_EFTU_TIM_CH_7 = 7U, /**< Index for channel 7 */
} ICU_EftuTimChannelIndexType;

/**
 * @brief ICU Tim Channel Input Source Selection Type.
 */
typedef enum
{
    ICU_EFTU_TIM_INPUT_TIM_IN_X      = 0U, /**< Use TIM input channel X as the Channel source */
    ICU_EFTU_TIM_INPUT_TIM_IN_X_1    = 1U, /**< Use TIM input channel X+1 as the Channel source */
    ICU_EFTU_TIM_INPUT_TIM_IN_AUX_IN = 2U, /**< Use auxiliary input as the Channel source */
} ICU_EftuTimChnInputSelectType;

/**
 * @brief ICU Tim Channel Filter mode.
 */
typedef enum
{
    ICU_EFTU_TIM_FILTERMODE_IMMEDIATEEDGEPROPAGATION =
        0u, /**< \brief Immediate edge propagation mode */
    ICU_EFTU_TIM_FILTERMODE_INDIVIDUALDEGLITCHTIMEUPDOWN = 1u, /**< \brief Individual deglitch time
                                                                  mode (Up Down) */
    ICU_EFTU_TIM_FILTERMODE_INDIVIDUALDEGLITCHTIMEHOLD = 2u,   /**< \brief Individual deglitch time
                                                                  mode (Hold) */
    ICU_EFTU_TIM_FILTERMODE_RESETCOUNTR = 3u, /**< \brief Individual deglitch time mode (Reset)*/
} ICU_EftuTimFilterMode;

/**
 * @brief ICU Tim Channel actice edgge.
 */
typedef enum
{
    ICU_EFTU_TIM_ACTIVE_FALLINGEDGE = 0U,
    ICU_EFTU_TIM_ACTIVE_RISINGEDGE  = 1U,
    ICU_EFTU_TIM_ACTIVE_BOTHEDGE    = 2U, /*just for TIEM TIPM mode*/
} ICU_EftuTimActiveEdgeType;

/**
 * @brief Define the function clock source types for the ICU EFTU Tim channel.
 *
 */
typedef enum
{
    ICU_EFTU_TIM_CMU_CLK0 = 0U, /**< Clock source 0 */
    ICU_EFTU_TIM_CMU_CLK1 = 1U, /**< Clock source 1 */
    ICU_EFTU_TIM_CMU_CLK2 = 2U, /**< Clock source 2 */
    ICU_EFTU_TIM_CMU_CLK3 = 3U, /**< Clock source 3 */
    ICU_EFTU_TIM_CMU_CLK4 = 4U, /**< Clock source 4 */
    ICU_EFTU_TIM_CMU_CLK5 = 5U, /**< Clock source 5 */
    ICU_EFTU_TIM_CMU_CLK6 = 6U, /**< Clock source 6 */
    ICU_EFTU_TIM_CMU_CLK7 = 7U, /**< Clock source 7 */
} ICU_EftuTimClockSrcType;

/**
 * @brief Define the fliter clock source types for the ICU EFTU Tim channel.
 *
 */
typedef enum
{
    ICU_EFTU_TIM_FLT_CMUCLK0 = 0U, /**< Use CMUCLK0 clock source for filtering */
    ICU_EFTU_TIM_FLT_CMUCLK1 = 1U, /**< Use CMUCLK1 clock source for filtering */
    ICU_EFTU_TIM_FLT_CMUCLK6 = 2U, /**< Use CMUCLK6 clock source for filtering */
    ICU_EFTU_TIM_FLT_CMUCLK7 = 3U  /**< Use CMUCLK7 clock source for filtering */
} ICU_EftuTimFltSrcType;

/**
 * @brief ICU Tim Channel Input Level
 */
typedef enum
{
    ICU_EFTU_TIM_INPUT_LEVEL_LOW = 0,
    ICU_EFTU_TIM_INPUT_LEVEL_HIGH,
} Icu_EftuTimInputLevelType;

/**
 * @brief Tim Channel Mode
 */
typedef enum
{
    ICU_EFTU_TIM_MODE_PWMMEASUREMENT   = 0U, /**< \brief TPWM */
    ICU_EFTU_TIM_MODE_PULSEINTEGRATION = 1U, /**< \brief TPIM */
    ICU_EFTU_TIM_MODE_INPUTEVENT       = 2U, /**< \brief TIEM */
    ICU_EFTU_TIM_MODE_PRESCALER        = 3U, /**< \brief TIPM */
    ICU_EFTU_TIM_MODE_BITCOMPRESSION   = 4U, /**< \brief TBCM */
    ICU_EFTU_TIM_MODE_PERIODICSAMPLING = 5U, /**< \brief TGPS */
    ICU_EFTU_TIM_MODE_SERIALSHIFT      = 6U  /**< \brief TSSM */
} ICU_EftuTimChannelModeType;

/**
 * @brief GPR select mux
 */
typedef enum
{
    ICU_EFTU_TIM_GPTSEL_TBUTS0      = 0U,
    ICU_EFTU_TIM_GPTSEL_TBUTS1      = 1U,
    ICU_EFTU_TIM_GPTSEL_TBUTS2      = 2U,
    ICU_EFTU_TIM_GPTSEL_CNTS_OR_CNT = 3U, /*For GPR0 CNTS;For GPR1 CNT*/
    ICU_EFTU_GPTSEL_CH_ECNT         = 4U,
    ICU_EFTU_GPTSEL_TIM_INP_VAL     = 5U,
} ICU_EftuTimGprSrcType;

/**
 * @brief CNTS select mux
 */
typedef enum
{
    ICU_EFTU_TIM_CNTS_CNT    = 0U, /**< CNTS input source is CNT*/
    ICU_EFTU_TIM_CNTS_TBUTS0 = 1u  /**< CNTS input source is TBU_TS0*/
} ICU_EftuTimCntsSrcType;

typedef enum
{
    ICU_EFTU_TIM_LUT_DISABLE     = 0u,
    ICU_EFTU_TIM_LUT_EXT_CAPTURE = 1u,
    ICU_EFTU_TIM_LUT_FOUT_PREV   = 2u,
    ICU_EFTU_TIM_LUT_TSSM_OUT    = 3u,
} ICU_EFTU_TIM_LutType;

/**
 * @brief ICU Tim Channel Configuration
 */
typedef struct
{
    const ICU_EftuTimChannelIndexType eChannelIndex; /**< Tim channel index*/
    const boolean                     bEnFilter;    /**< Enable or disable the filter for signal  */
    const ICU_EftuTimFltSrcType       eFltClockSrc; /**< Filter clock source selection */
    const ICU_EftuTimFilterMode       eRisingEdgeMode;         /**< Rising edge filter mode */
    const ICU_EftuTimFilterMode       eFallingEdgeMode;        /**< Falling edge filter mode */
    const uint8                       u8RisingEdgeFilterTime;  /**< Rising edge filter time */
    const uint8                       u8FallingEdgeFilterTime; /**< Falling edge filter time */
    const ICU_EftuTimClockSrcType eTimChannelClockSrc;    /**< Tim channel clock source selection */
    const ICU_EftuTimGprSrcType   eTimChannelRefTimeBase; /**< Tim channel reference time base, used
                                                             for calculations and synchronization */
    const ICU_EftuTimChnInputSelectType eInputSrc;        /**< Tim channel input source selection */
} Icu_EftuTimChannelConfigType;

/**
 *
 * @brief Eftu Tim Mode Config Type
 */
typedef struct
{
    const ICU_EftuInstanceType eEftuInstance;  /**< Eftu instance */
    const uint8                u8ChannelCount; /**< Number of channels in the module */
    const Icu_EftuTimChannelConfigType (
        *pEftuTimChannelConfig)[]; /**< Pointer to the array of channel configurations */
    const uint8 u8InstancePartition;
} Icu_EftuTimModuleConfigType;

/**
 * @brief ICU Tim Hardware Configuration
 */
typedef struct
{
    const uint8 u8ModuleCount; /**< Number of modules in the ICU Tim */
    const Icu_EftuTimModuleConfigType (
        *pEftuTimModuleConfig)[]; /**< Pointer to the array of module configurations */
} Icu_EftuTimHwConfigType;

#ifdef __cplusplus
}
#endif
#endif /* ICU_EFTU_TIM_TYPE_H */
/** @} */
