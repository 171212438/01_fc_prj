
/**
 *   @file    Icu_Ism_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - ISM driver source file.
 *   @details ISM source file, containing the variables and functions that are exported by the
 *            ISM driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ISM
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
*   0.6.0       15/04/2023    QXW0076      N/A          Initial Version
==================================================================================================*/

#ifndef ICU_ISM_TYPE_H
#define ICU_ISM_TYPE_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/**
 *
 * @brief Ism instance
 */
typedef enum
{
    ICU_ISM = 0,
} Icu_IsmInstanceType;

/**
 *
 * @brief Ism fpc channel filter mode
 */
typedef enum
{
    ICM_ISM_FPC_DETECT_NO_FILTER =
        0U, /*No filter mode. Copy input to SOUT directly, which is LAM input.*/
    ICM_ISM_FPC_DETECT_IMMI_FILTER    = 1U, /*Immediate filter mode.*/
    ICM_ISM_FPC_DETECT_DELAY_MODE     = 2U, /*Delay mode.*/
    ICM_ISM_FPC_DETECT_PRESCALER_MODE = 3U  /*Prescaler mode.*/
} ICM_ISM_FPC_EdgeDetectModeType;

/**
 *
 * @brief Ism fpc channel filter delay mode
 */
typedef enum
{
    ICM_ISM_FPC_DELAY_FIXED0       = 0U, /*Fixed delay mode.*/
    ICM_ISM_FPC_DELAY_FIXED1       = 1U, /*Fixed delay mode.*/
    ICM_ISM_FPC_DELAY_SMART_DELAY0 = 2U, /*Smart delay mode. The counter is decremented when a
                                            glitch happens.*/
    ICM_ISM_FPC_DELAY_SMART_DELAY1 = 3U /*Smart delay mode. The counter is reset when a glitch happens.*/
} ICM_ISM_FPC_EdgeDelayModeType;

/**
 *
 * @brief Ism event window mode
 */
typedef enum
{
    ICU_ISM_LAM_NTR_CLEAR_NTR_GATE = 0U,  /*Neither edge used to clear the event window counter.
                                             Neither edge used to gate event generation.*/
    ICU_ISM_LAM_POS_CLEAR_NTR_GATE = 1U,  /*Positive edge used to clear the event window counter.
                                             Neither edge used to gate event generation.*/
    ICU_ISM_LAM_NEG_CLEAR_NTR_GATE = 2U,  /*Negative edge used to clear the event window counter.
                                             Neither edge used to gate event generation.*/
    ICU_ISM_LAM_ETR_CLEAR_NTR_GATE = 3U,  /*Either edge used to clear the event window counter.
                                             Neither edge used to gate event generation.*/
    ICU_ISM_LAM_NTR_CLEAR_POS_GATE = 4U,  /*Neither edge used to clear the event window counter.
                                             Positive edge used to gate event generation.*/
    ICU_ISM_LAM_POS_CLEAR_POS_GATE = 5U,  /*Positive edge used to clear the event window counter.
                                             Positive edge used to gate event generation.*/
    ICU_ISM_LAM_NEG_CLEAR_POS_GATE = 6U,  /*Negative edge used to clear the event window counter.
                                             Positive edge used to gate event generation.*/
    ICU_ISM_LAM_ETR_CLEAR_POS_GATE = 7U,  /*Either edge used to clear the event window counter.
                                             Positive edge used to gate event generation.*/
    ICU_ISM_LAM_NTR_CLEAR_NEG_GATE = 8U,  /*Neither edge used to clear the event window counter.
                                             Negative edge used to gate event generation.*/
    ICU_ISM_LAM_POS_CLEAR_NEG_GATE = 9U,  /*Positive edge used to clear the event window counter.
                                             Negative edge used to gate event generation.*/
    ICU_ISM_LAM_NEG_CLEAR_NEG_GATE = 10U, /*Negative edge used to clear the event window counter.
                                             Negative edge used to gate event generation.*/
    ICU_ISM_LAM_ETR_CLEAR_NEG_GATE = 11U, /*Either edge used to clear the event window counter.
                                             Negative edge used to gate event generation.*/
    ICU_ISM_LAM_NTR_CLEAR_ETR_GATE = 12U, /*Neither edge used to clear the event window counter.
                                             Either edge used to gate event generation.*/
    ICU_ISM_LAM_POS_CLEAR_ETR_GATE = 13U, /*Positive edge used to clear the event window counter.
                                             Either edge used to gate event generation.*/
    ICU_ISM_LAM_NEG_CLEAR_ETR_GATE = 14U, /*Negative edge used to clear the event window counter.
                                             Either edge used to gate event generation.*/
    ICU_ISM_LAM_ETR_CLEAR_ETR_GATE = 15U  /*Either edge used to clear the event window counter.
                                             Either edge used to gate event generation.*/
} ICU_ISM_LAM_EventWindowEdgeType;

/**
 * @brief Ism channel mode
 */
typedef enum
{
    ICU_ISM_CH_FILTER_DISABLE           = 0U,
    ICU_ISM_CH_FILTER_IMMEDIATE         = 1U,
    ICU_ISM_CH_FILTER_DELAY_FIXED       = 2U,
    ICU_ISM_CH_FILTER_DELAY_DECREMENTED = 4U,
    ICU_ISM_CH_FILTER_DELAY_RESET       = 4U
} Icu_IsmChannelFilterType;

/**
 *
 * @brief Ism Channel Config Type
 */
typedef struct
{
    const uint8                    u8LamChannel;
    const uint8                    u8FpcChannel;
    const uint16                   u16FpcThreshold;
    const Icu_IsmChannelFilterType eRisingEdgeFilter;
    const Icu_IsmChannelFilterType eFallingEdgeFilter;
    const uint8                    u8ChannelPartition;

} Icu_IsmChannelConfigType;

/**
 *
 * @brief Ism Mode Config Type
 */
typedef struct
{
    const Icu_IsmInstanceType eIsmInstance;
    const uint8               u8ChannelCount;
    const Icu_IsmChannelConfigType (*pIsmChannelsConfig)[];
    const uint8 u8InstancePartition;
} Icu_IsmModuleConfigType;

/**
 *
 * @brief Ism Hw Config Type
 */
typedef struct
{
    const uint8 u8ModuleCount;
    const Icu_IsmModuleConfigType (*pIsmModuleConfig)[];
} Icu_IsmHwConfigType;
#ifdef __cplusplus
}
#endif
#endif /*ICU_ISM_TYPE_H*/
/** @} */
