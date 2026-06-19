/**
 *   @file    Icu_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - Icu driver header file.
 *   @details Icu driver defines which need to be exported to external application
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU PORT Aontimer
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
*   0.4.0       14/11/2023   QXW0076       N/A          Eliminate timestamp potential hazards
*   0.5.0       25/01/2024   QXW0076       N/A         add time stamp dma function
*   0.6.0       18/3/2024    QXW0076       N/A         verify timestamp dma feature && support for 7240.
==================================================================================================*/
/* PRQA S 3630 EOF
   3630:The implementation of this struct/union type should be hidden.
   REASON: These structures are needed.
*/
#ifndef ICU_TYPES_H
#define ICU_TYPES_H
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Std_Types.h"

/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This type may not used by user */
/**
 * @brief Allow enabling / disabling of all interrupts which are not required for the ECU
 *        wakeup.
 *
 * @implements SWS_Icu_00258,SWS_Icu_00277
 */
typedef enum
{
    ICU_MODE_NORMAL = 0, /*< @brief Normal operation, all used interrupts are enabled according
                          *         to the notification requests. */

    ICU_MODE_SLEEP /*< @brief Reduced power operation. In sleep mode only those
                    *         notifications are available which are configured
                    *         as wakeup capable. */

} Icu_ModeType;

/**
 * @brief Numeric identifier of an ICU channel
 *
 * @implements SWS_Icu_00278
 */
typedef uint32 Icu_ChannelType;

/**
 * @brief Input state of an ICU channel
 *
 * @implements SWS_Icu_00279
 */
typedef enum
{
    ICU_ACTIVE = 0, /*< @brief An activation edge has been detected */
    ICU_IDLE,       /*< @brief No activation edge has been detected since the last call of
                     *         Icu_GetInputState() or Icu_Init(). */
} Icu_InputStateType;

/**
 * @brief Input level of an ICU channel
 *
 * @implements FUNC_Icu_0019
 */
typedef enum
{
    ICU_INPUT_LOW = 0, /*< @brief The input level of the channel is low */
    ICU_INPUT_HIGH,    /*< @brief The input level of the channel is high */
} Icu_InputLevelType;

/**
 * @brief Definition of the type of activation of an ICU channel.
 *
 * @implements SWS_Icu_00289
 */
typedef enum
{
    ICU_RISING_EDGE = 0, /*< @brief An appropriate action shall be executed when a rising edge
                          *         occurs on the ICU input signal. */
    ICU_FALLING_EDGE,    /*< @brief An appropriate action shall be executed when a falling edge
                          *         occurs on the ICU input signal. */
    ICU_BOTH_EDGES       /*< @brief An appropriate action shall be executed when either a rising
                                    or falling edge occur on the ICU input signal. */
} Icu_ActivationType;

/**
 * @brief Width of the buffer for timestamp ticks and measured elapsed timeticks.
 *
 * @implements SWS_Icu_00290
 */
typedef uint32 Icu_ValueType;

/**
 * @brief Type which shall contain the values, needed for calculating duty cycles.
 *
 * @implements SWS_Icu_00291
 */
typedef struct
{
    Icu_ValueType ActiveTime; /*< @brief This shall be the coherent active-time
                               *         measured on a channel */
    Icu_ValueType PeriodTime; /*< @brief This shall be the coherent period-time
                               *         measured on a channel */
} Icu_DutyCycleType;

/**
 * @brief Type, to abstract the return value of the service Icu_GetTimestampIndex().
 *
 * @implements SWS_Icu_00292
 */
typedef uint32 Icu_IndexType;

/**
 * @brief Type, to abstract the return value of the service Icu_GetEdgeNumbers().
 *
 * @implements SWS_Icu_00293
 */
typedef uint16 Icu_EdgeNumberType;

/**
 * @brief Definition of the measurement mode type
 *
 * @implements SWS_Icu_00294
 */
typedef enum
{
    ICU_MODE_SIGNAL_EDGE_DETECT = 0, /*< @brief Mode for detecting edges */
    ICU_MODE_SIGNAL_MEASUREMENT,     /*< @brief Mode for measuring different times between
                                      *         various configurable edges */
    ICU_MODE_TIMESTAMP,              /*< @brief Mode for capturing timer values on
                                      *         configurable edges */
    ICU_MODE_EDGE_COUNTER,           /*< @brief Mode for counting edges on configurable
                                      *         edges */
} Icu_MeasurementModeType;

/**
 * @brief Definition of the measurement property type
 *
 * @implements SWS_Icu_00295
 */
typedef enum
{
    ICU_LOW_TIME = 0, /*< @brief The channel is configured for reading the elapsed Signal Low
                       *         Time */
    ICU_HIGH_TIME,    /*< @brief The channel is configured for reading the elapsed Signal
                       *         High Time */
    ICU_PERIOD_TIME,  /*< @brief The channel is configured for reading the elapsed Signal
                       *         Period Time */
    ICU_DUTY_CYCLE    /*< @brief The channel is configured to read values which are needed
                       *         for calculating the duty cycle (coherent Active and Period
                       *         Time). */
} Icu_SignalMeasurementPropertyType;

/**
 * @brief Definition of the measurement way
 */
typedef enum
{
    ICU_MEASUREMENT_SINGLE_CAPTURE = 0, /*<@brief The signal measurement way is sigle capture>*/
    ICU_MEASUREMENT_DUAL_CAPTURE,       /*<@brief The signal measurement way is dual capture>*/
    ICU_MEASUREMENT_HW_DIRECT           /*<@brief The signal measurement way is hardware read>*/
} Icu_SignalMeasurementModeType;

/**
 * @brief Definition of the timestamp measurement property type
 *
 * @implements SWS_Icu_00296
 */
typedef enum
{
    ICU_LINEAR_BUFFER = 0, /*< @brief The buffer will just be filled once */
    ICU_CIRCULAR_BUFFER,   /*< @brief After reaching the end of the buffer, the driver restarts at
                            *         the beginning of the buffer */
} Icu_TimestampBufferType;

/**
 * @brief Definition of the timestamp dma channel state type
 */
typedef enum
{
    ICU_DMA_CHANNEL_STATE_IDLE   = 0u, /*< @brief The dma channel state is idle */
    ICU_DMA_CHANNEL_STATE_ACTIVE = 1u, /*< @brief The dma channel state is active */
} Icu_TimestampDmaChannelState;

/**
 * @brief Definition of the Dma instance
 */
typedef enum
{
    ICU_DMA_INSTANCE_0 = 0u, /*< @brief The dma instance 0 */
    ICU_DMA_INSTANCE_1 = 1u, /*< @brief The dma instance 1 */
} Icu_TimestampDmaInstance;

/**
 *  @brief Record the dma channel information
 */
typedef struct
{
    Icu_TimestampDmaInstance eDmaInstance;   /*< @brief The dma instance */
    uint8                    u8DmaHwChannel; /*< @brief The dma hardware channel */
} Icu_TimestampDmaInfoType;

/**
 *  @brief Record the dma channel state
 */
typedef struct
{
    Icu_TimestampDmaChannelState eDmaChannelState; /*<@brief The Dma channel state*/
    Icu_ChannelType u16IcuChannel; /*<@brief The Icu channel which occupy the Dma channel*/
} Icu_TimestampDmaStateType;

/**
 * @brief Icu notify function type
 *
 */
typedef void (*Icu_NotifyType)(void);

/* PRQA S 1535 -- */

/**
 *   @brief Icu Channel symbolic names
 *   @details Get All Symbolic Names from configuration tool
 *
 *   @{
 */
#define ICU_NOICUCHANNEL ((Icu_ChannelType)0xFFFF)
/** @} */

#ifdef __cplusplus
}
#endif
#endif
/** @} */
