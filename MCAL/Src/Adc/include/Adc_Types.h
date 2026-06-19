/**
 *   @file    Adc_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - driver API and development errors definition.
 *   @details This file contains the ADC Autosar driver API and development errors definition.
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
*   0.4.0       20/11/2023    QXW0030       N/A          Remove unused parameters
*   0.5.0       11/01/2024    QXW0030       N/A          Add feature to config period in continuous mode
*   0.8.0       05/07/2024    QXW0030       N/A          Add support for Adc to use without Ptimer
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
==================================================================================================*/

#ifndef ADC_TYPES_H
#define ADC_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/**
 * @file           Adc_Types.h
 */
#include "Adc_CfgDefines.h"
#include "Adc_SarAdc_Types.h"
#include "Std_Types.h"
#if (ADC_DMA_SUPPORT == STD_ON)
#include "CDD_Dma.h"
#endif /* ADC_DMA_SUPPORT == STD_ON */

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief          ADC Resolutions.
 */
#define ADC_BITS_RESOLUTION_8  (2U)
#define ADC_BITS_RESOLUTION_10 (1U)
#define ADC_BITS_RESOLUTION_12 (0U)

/**
 * @brief          ADC Prescaler types.
 */
#define ADC_CLOCK_DIVIDE_BY_1  (0U)
#define ADC_CLOCK_DIVIDE_BY_2  (1U)
#define ADC_CLOCK_DIVIDE_BY_4  (2U)
#define ADC_CLOCK_DIVIDE_BY_8  (3U)

#define TRGSEL_SRC_VSS         (0U)
#define TRGSEL_SRC_VDD         (1U)

/**
 * @brief          Invalid ADC Unit representation.
 */
#define ADC_UNIT_INVALID       (0xFFU)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief          ADC group already converted type.
 * @details        Used to differentiate if group is already converted or not.
 *
 */
typedef enum
{
    ADC_NOT_YET_CONVERTED = 0U, /**< @brief Group has not been converted */
    ADC_ALREADY_CONVERTED = 1U  /**< @brief Group has already been converted */
} Adc_GroupConversionStateType;

/**
 * @brief          Adc group access Mode.
 * @details        Used for value received by Tressos interface configuration.
 *
 * @implements     SWS_Adc_00528
 */
typedef enum
{
    ADC_ACCESS_MODE_SINGLE    = 0U, /**< @brief Single access mode */
    ADC_ACCESS_MODE_STREAMING = 1U  /**< @brief Streaming access mode */
} Adc_GroupAccessModeType;

/**
 * @brief          Adc Group conversion mode.
 * @details        Used for value received by Tressos interface configuration.
 *
 * @implements     SWS_Adc_00515
 */
typedef enum
{
    ADC_CONV_MODE_ONESHOT    = 0U, /**< @brief One shot conversion mode */
    ADC_CONV_MODE_CONTINUOUS = 1U  /**< @brief Continuous conversion mode */
} Adc_GroupConvModeType;

/**
 * @brief          Adc group replacement.
 * @details        Used for value received by Tressos interface configuration.
 *
 * @implements     SWS_Adc_00523
 */
typedef enum
{
    ADC_GROUP_REPL_ABORT_RESTART  = 0U, /**< @brief Abort and restart of group */
    ADC_GROUP_REPL_SUSPEND_RESUME = 1U  /**< @brief Suspend and resuming of group */
} Adc_GroupReplacementType;

/**
 * @brief          Adc group streaming buffer mode.
 * @details        Used for value received by Tressos interface configuration.
 *
 * @implements     SWS_Adc_00519
 */
typedef enum
{
    ADC_STREAM_BUFFER_LINEAR   = 0U, /**< @brief Linear streaming */
    ADC_STREAM_BUFFER_CIRCULAR = 1U  /**< @brief Circular streaming */
} Adc_StreamBufferModeType;

/**
 * @brief          Adc group data transfer type.
 * @details        Used for value received by Tressos interface configuration.
 *
 */
typedef enum
{
    ADC_TRANSFER_TYPE_INTERRUPT = 0U, /**< @brief Transfer by interrupt */
    ADC_TRANSFER_TYPE_DMA       = 1U, /**< @brief Transfer by DMA */
    ADC_TRANSFER_TYPE_POLLING   = 2U  /**< @brief Transfer by polling */
} Adc_TransferType;

/**
 * @brief          Indicates the ADC group status.
 * @details        ADC group enumeration type.
 *
 * @implements     SWS_Adc_00513
 */
typedef enum
{
    ADC_IDLE             = 0U, /**< @brief Group is in IDLE state */
    ADC_BUSY             = 1U, /**< @brief Group is in BUSY state */
    ADC_COMPLETED        = 2U, /**< @brief Group is in COMPLETED state */
    ADC_STREAM_COMPLETED = 3U  /**< @brief Group is in STREAM_COMPLETED state */
} Adc_StatusType;

/**
 * @brief          ADC group notification.
 * @details        Indicates if notification is enabled for the group.
 *
 */
typedef enum
{
    ADC_NOTIFICATION_DISABLED = 0U, /**< @brief Notification is disabled */
    ADC_NOTIFICATION_ENABLED  = 1U  /**< @brief Notification is enabled */
} Adc_NotificationType;

/**
 * @brief          Adc clock source.
 * @details        Used for value received by Tressos interface configuration.
 *
 */
typedef enum
{
    ADC_PCCCLK = 0U, /**< @brief Function clock is from on-chip PCC */
    ADC_EXTCLK = 1U  /**< @brief Function clock is from PAD */
} Adc_ClockSourceType;

/**
 * @brief          Adc hardware trigger edge.
 * @details        Used for value received by Tressos interface configuration.
 *
 * @implements     SWS_Adc_00520
 */
typedef enum
{
    ADC_HW_TRIG_RISING_EDGE  = 0U, /**< @brief Rising edge */
    ADC_HW_TRIG_FALLING_EDGE = 1U, /**< @brief Falling edge */
    ADC_HW_TRIG_BOTH_EDGES   = 2U  /**< @brief Falling and rising edge */
} Adc_HwTriggerSignalType;

/**
 * @brief          Adc hardware trigger source.
 * @details        Used for value received by Tressos interface configuration.
 *
 * @implements     SWS_Adc_00514
 */
typedef enum
{
    ADC_TRIGG_SRC_SW = 0U /**< @brief Software triggered */
#if (ADC_HW_TRIGGER_API == STD_ON)
    ,
    ADC_TRIGG_SRC_HW = 1U /**< @brief Hardware triggered */
#endif
} Adc_TriggerSourceType;

#if (STD_ON == ADC_HW_TRIGGER_API)
/**
 * @brief          Adc Hardware trigger.
 * @details        Indicates if hardware trigger is enabled for group.
 *
 */
typedef enum
{
    ADC_HWTRIGGER_DISABLED = 0U, /**< @brief Hardware trigger is disabled */
    ADC_HWTRIGGER_ENABLED  = 1U  /**< @brief Hardware trigger is enabled */
} Adc_HwTriggeringType;
#endif /* STD_ON==ADC_HW_TRIGGER_API */

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
 * @brief          Range select values.
 * @details        Indicates which range select is used.
 *
 * @implements     SWS_Adc_00524
 */
typedef enum
{
    ADC_RANGE_UNDER_LOW     = 0U, /**< @brief Range below low limit - low limit value included */
    ADC_RANGE_BETWEEN       = 1U, /**< @brief Range between low limit and high limit - high limit
                                       value included */
    ADC_RANGE_OVER_HIGH     = 2U, /**< @brief Range above high limit */

    ADC_RANGE_ALWAYS        = 3U, /**< @brief Complete range - independent from channel limit settings */
    ADC_RANGE_NOT_UNDER_LOW = 4U, /**< @brief Range above low limit */
    ADC_RANGE_NOT_BETWEEN   = 5U, /**< @brief Range above high limit or below low limit - low limit
                                       value included */
    ADC_RANGE_NOT_OVER_HIGH = 6U  /**< @brief Range below high limit - high limit value included */
} Adc_ChannelRangeSelectType;
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
typedef enum
{
    ADC_TEMPERATURE_NORMAL   = 0U, /**< @brief The temperature is below 125 C */
    ADC_TEMPERATURE_OVER_125 = 1U, /**< @brief The temperature is over 125 C */
    ADC_TEMPERATURE_OVER_150 = 2U  /**< @brief The temperature is over 150 C */
} AdcTemperatureStatusType;
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef void (*Adc_NotifyType)(void);  /**< @brief Notification function pointer definition */
typedef uint16 Adc_ChannelIndexType;   /**< @brief Number of channels */
typedef uint8  Adc_InstanceType;       /**< @brief The type of the ADC instance. */
typedef uint8  Adc_HwUnitType;         /**< @brief Numeric ID of an ADC Hw Unit */
typedef uint16 Adc_VoltageSourceType;  /**< @brief reference voltage source */
typedef uint16 Adc_QueueIndexType;     /**< @brief Index for the queue of groups */
/** @implements     SWS_Adc_00506 */
typedef uint8  Adc_ChannelType;        /**< @brief Numeric ID of an ADC channel */
/** @implements     SWS_Adc_00507 */
typedef uint16 Adc_GroupType;          /**< @brief Numeric ID of an ADC channel group. No uC dependent */
/** @implements     SWS_Adc_00512 */
typedef uint8  Adc_ResolutionType;     /**< @brief channel resolution in number of bits */
/** @implements     SWS_Adc_00516 */
typedef uint8  Adc_GroupPriorityType;  /**< @brief ADC Channel group priority */
/** @implements     SWS_Adc_00517 */
typedef Adc_ChannelType Adc_GroupDefType; /**< @brief definition of channels in a group */
/** @implements     SWS_Adc_00508 */
#if (ADC_RESULT_TYPE == ADC_RESULT_U8)
typedef uint8  Adc_ValueGroupType;     /**< @brief type for ADC result of one channel */
#elif (ADC_RESULT_TYPE == ADC_RESULT_U32)
typedef uint32 Adc_ValueGroupType;     /**< @brief type for ADC result of one channel */
#else
typedef uint16 Adc_ValueGroupType;     /**< @brief type for ADC result of one channel */
#endif
/** @implements     SWS_Adc_00509 */
typedef uint8  Adc_PrescaleType;       /**< @brief clock prescaler factor */
/** @implements     SWS_Adc_00510 */
typedef uint16 Adc_ConversionTimeType; /**< @brief conversion time */
/** @implements     SWS_Adc_00511 */
typedef uint8  Adc_SamplingTimeType;   /**< @brief sampling time */
typedef uint8  Adc_SampleTimeOptType;  /**< @brief Sample time options */
/** @implements     SWS_Adc_00518 */
typedef uint16 Adc_StreamNumSampleType; /**< @brief Number of samples of a streaming conversion buffer */
/** @implements     SWS_Adc_00521 */
typedef uint16 Adc_HwTriggerTimerType; /**< @brief Type for the reload value of the ADC embedded timer */

/**
 * @brief          Structure for group status.
 * @details        This structure contains the group status information.
 *
 */
typedef struct
{
    volatile Adc_StatusType                eConversion;       /**< @brief Group status */
    volatile Adc_GroupConversionStateType  eAlreadyConverted; /**< @brief Group was previously
                                                                   converted or not */
    Adc_ValueGroupType                    *pResultsBuffer;    /**< @brief pointer to user result buffer */
#if (ADC_HW_TRIGGER_API == STD_ON)
    Adc_HwTriggeringType                   eHwTriggering;     /**< @brief hw trigger enabled/disabled */
#endif
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    Adc_NotificationType                   eNotification;     /**< @brief notification enabled/disabled */
#endif
    volatile Adc_StreamNumSampleType       ResultIndex;       /**< @brief index into streaming buffer that
                                                                   is currently being filled */
} Adc_GroupStatusType;

/**
 * @brief          Structure for hardware unit status.
 * @details        This structure contains the HW unit status information.
 *
 */
typedef struct
{
    volatile Adc_QueueIndexType SwNormalQueueIndex;                 /**< @brief Filled slots in the queue */
    volatile Adc_GroupType      SwNormalQueue[ADC_QUEUE_MAX_DEPTH]; /**< @brief Queued groups indexes,
                                                                         always executing Queue[0] */
#if (ADC_HW_TRIGGER_API == STD_ON)
    volatile Adc_GroupType      HwNormalQueue[ADC_HW_QUEUE];        /**< @brief The depth of the hardware
                                                                         normal queue */
    volatile Adc_QueueIndexType HwNormalQueueIndex;                 /**< @brief Filled slots in the Hw
                                                                         normal queue */
#endif /* ADC_HW_TRIGGER_API == STD_ON */
} Adc_UnitStatusType;

/**
 * @brief          Structure for channel configuration.
 *
 */
typedef struct
{
    const Adc_ChannelType            ChId;            /**< @brief Channel Id */
    const Adc_ResolutionType         Res;             /**< @brief Resolution of the ADC channel */
    const Adc_SampleTimeOptType      SampleTimeOpt;   /**< @brief Sample time option of the ADC channel */
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
    const boolean                    bDiffChannel;    /**< @brief Whether the channel is a differential
                                                           channel */
#endif
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
    const boolean                    bAdcChannelLimitcheck; /**< @brief Enables or disables the usage of
                                                                 limit checking for the ADC channel. */
    const Adc_ChannelRangeSelectType eChannelRange;    /**< @brief Conversion range selection */
    const Adc_ValueGroupType         ChannelHighLimit; /**< @brief High limit channel conversion value */
    const Adc_ValueGroupType         ChannelLowLimit;  /**< @brief Low limit channel conversion value */
#endif
} Adc_ChannelConfigurationType;

/**
 * @brief          Structure for Adc hardware unit configuration.
 *
 */
typedef struct
{
    const Adc_HwUnitType      AdcLogicalUnitId;     /**< @brief Adc logical unit id */
    const Adc_InstanceType    eUnitType;            /**< @brief Adc instance type */
    const Adc_HwUnitType      AdcHardwareUnitId;    /**< @brief Adc hardware unit id */
    const boolean             bUsePtimer;           /**< @brief Use Ptimer for the Adc Unit */
    const uint32              u32AdcCfg1Register;   /**< @brief Main configuration of CFG1 registers */
    const uint32              u32AdcCfg2Register;   /**< @brief Main configuration of CFG2 registers */
    const uint32              u32AdcSmprRegister;   /**< @brief Main configuration of Sample Time registers */
    const uint32              u32AdcIntEnRegister;  /**< @brief Main configuration of INT_ENABLE registers */
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
    const Adc_ClockSourceType eClockSource;         /**< @brief Clock source for the ADC unit */
#endif
#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
    const Adc_PrescaleType    PreDiv;               /**< @brief Optional ADC module specific clock prescale factor */
#endif
    const Adc_ResolutionType  Res;                  /**< @brief Resolution of the ADC hardware */
    const Adc_ChannelConfigurationType *pChannels;  /**< @brief Pointer to configured channels of the ADC unit */
#if (ADC_DMA_SUPPORT == STD_ON)
    const boolean             bUseDma;              /**< @brief Whether the Adc unit has a valid DMA channel */
    const Dma_InstanceType    eDmaInstance;         /**< @brief DMA instance associated with the Adc unit */
    const uint8               u8DmaChannel;         /**< @brief DMA channel associated with the Adc unit */
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
    const Adc_GroupType       DmaGroup;             /**< @brief The group which enables Dma when use HwGroup */
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
#endif /* ADC_DMA_SUPPORT == STD_ON */
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    const boolean             bUseHwGroup;          /**< @brief Whether the ADC unit uses hardware group */
    const Adc_GroupType       HwGroupCount;         /**< @brief Hardware groups defined in the ADC unit */
    const Adc_GroupType      *pGroupId;             /**< @brief Groups defined in the ADC unit */
#endif
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    const uint32              u32AdcPtimerClockSettings; /**< @brief Settings for PRESCALER and MULT fields of
                                                              PTIMER_STATUS_CTRL register */
#endif
#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
    const Adc_NotifyType      pPtimerNofitication;  /**< @brief Pointer to Ptimer notification function */
#endif
} Adc_HwUnitConfigurationType;

/**
 * @brief          Structure for group configuration.
 *
 */
typedef struct
{
    const Adc_GroupType            AdcGroupId;   /**< @brief Adc group id */
    const Adc_HwUnitType           UnitId;       /**< @brief Hardware unit logical Id */
    const uint8                    CoreId;       /**< @brief CoreId of the configuration */
    const Adc_GroupAccessModeType  eAccessMode;  /**< @brief Access mode (Single/Streaming) */
    const Adc_GroupConvModeType    eMode;        /**< @brief Conversion mode (OneShot/Continuous) */
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
    const Adc_GroupPriorityType    Priority;     /**< @brief Priority of group */
#endif
    const Adc_GroupReplacementType eReplecementMode; /**< @brief Replacement mode */
    const Adc_TriggerSourceType    eTriggerSource;   /**< @brief Hw/Sw trigger */
#if (STD_ON == ADC_HW_TRIGGER_API)
    const Adc_HwTriggerSignalType  eTriggerEdge;  /**< @brief Hardware trigger edge */
#endif
    const Adc_TransferType         eTransferType; /**< @brief Result data transfer method */
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
    const Adc_NotifyType           Notification;  /**< @brief Pointer to notification function */
#endif
    const Adc_StreamBufferModeType eBufferMode;   /**< @brief Buffer Mode */
    const Adc_StreamNumSampleType  NumSamples;    /**< @brief Number of samples */
    const Adc_GroupDefType        *pAssignment;   /**< @brief Assigned channels to group */
    const uint16                  *pDelay;        /**< @brief Assigned channel delays to group */
    const Adc_ChannelIndexType     AssignedChannelCount; /**< @brief Number of channels */
    const boolean                  bAdcGroupBackToBack;  /**< @brief Enables or Disables the ADC Back to
                                                               Back configuration for Group Channels */
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
    const boolean                  bDiffGroup;    /**< @brief Whether the group is a group for
                                                       differential channels */
#endif
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
    const boolean                  bHwGroup;      /**< @brief Whether the group is a hardware group */
    const uint8                    HwGroupId;     /**< @brief The hardware index of the group in the
                                                       Adc Unit */
    const Adc_ChannelIndexType     ChannelStartIdx; /**< @brief the start channel index of the group */
    const uint8                    u8SwTrigChn;  /**< @brief the software trigger channel of the group if
                                                      triggered by software */
#endif
#if (STD_OFF == ADC_SET_ADC_HARDWARE_AVERAGE_ONCE)
    const boolean                  bEnableHwAvg;  /**< @brief Wether to enable hardware average */
    const Adc_AverageType          u32AvgSelect;  /**< @brief Hardware average numbers */
#endif
#if (STD_ON == ADC_ENABLE_PTIMER_SUPPORT)
    const boolean                  bUsePtimer;    /**< @brief Whether to use Ptimer for this Adc group */
#if (STD_ON == ADC_CFG3_SUPPORT)
    const Adc_ChannelIndexType     CoCoSel;       /**< @brief Select the CoCo signal to TrgSel */
#endif
    const boolean                  bAdcGroupChannelDelays; /**< @brief Enables or Disables the ADC pre-trigger
                                                                 delay configuration for each Group Channel */
    const uint16                   u16PtimerDelay;       /**< @brief The delay for next Ptimer */
#endif
#if ((STD_ON == ADC_ENABLE_PTIMER_SUPPORT) || (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT))
    const boolean                  bUseContinuousPeriod; /**< @brief Whether to use the Ptimer period for
                                                              continuous mode */
    const uint16                   u16ContinuousPeriod;  /**< @brief The Ptimer period for continuous mode */
#endif
} Adc_GroupConfigurationType;

/**
 * @brief          Structure for Tmu hardware unit configuration.
 *
 */
typedef struct
{
    const Adc_HwUnitType TmuHardwareUnitId;    /**< @brief Tmu hardware unit id */
    const uint32         u32VoltSensorCtrl;    /**< @brief Voltage based tempsensor configurations */
#if (ADC_TMU_SUPPORT_TF == STD_ON)
    const boolean        bEnableFlagSensor;    /**< @brief Whether to use flag based tempsensor */
    const uint32         u32FlagSensorCtrl;    /**< @brief Flag based tempsensor configurations */
    const Adc_NotifyType Over125Notification;  /**< @brief Temperature over 125 C notification */
    const Adc_NotifyType Over150Notification;  /**< @brief Temperature over 150 C notification */
#endif /* ADC_TMU_SUPPORT_TF == STD_ON */
} Adc_TmuUnitConfigurationType;

/**
 * @brief          Structure for Configuration data.
 * @details        Data structure containing the set of configuration parameters required
 *                 for initializing the ADC Driver and ADC HW Unit(s).
 * @api
 * @implements     Adc_ConfigType_struct
 */
typedef struct
{
    const Adc_HwUnitConfigurationType         *pAdcs;        /**< @brief Hw unit configurations */
    const Adc_GroupConfigurationType          *pGroups;      /**< @brief Adc group configurations */
    const Adc_GroupConfigurationType   *const *pGroupPtr;    /**< @brief Pointer to group configurations */
    const Adc_GroupType                        GroupCount;   /**< @brief Total number of groups */
    const Adc_HwUnitConfigurationType  *const *pSarAdcs;     /**< @brief Pointer to SAR ADC configurations */
    const Adc_HwUnitType                      *SarAdcIndex;  /**< @brief SAR ADC unit index to logical unit map */
    const Adc_HwUnitType                       SarAdcCount;  /**< @brief Total number of used SAR ADC units */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    const Adc_HwUnitConfigurationType  *const *pHsAdcs;      /**< @brief Pointer to HSADC configurations */
    const Adc_HwUnitType                      *HsAdcIndex;   /**< @brief HSADC unit index to logical unit map */
    const Adc_HwUnitType                       HsAdcCount;   /**< @brief Total number of used HSADC units */
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */
#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
    const Adc_TmuUnitConfigurationType        *pTmu;         /**< @brief Tmu Hw unit configurations */
    const uint8                                TmuUnitCount; /**< @brief Total number of used Tmu hardware units */
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */
    const uint8                                CoreId;       /**< @brief CoreId of the configuration */
} Adc_ConfigType;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* ADC_TYPES_H */

/* clang-format on */
/** @} */
