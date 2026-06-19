/**
 *   @file    Icu.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - ICU driver header file.
 *   @details ICU driver header file, containing the Autosar API specification and other variables
 *            and functions that are exported by the ICU driver.
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
#ifndef ICU_H
#define ICU_H
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Icu_Version.h"
#include "Icu_Cfg.h"
#include "Icu_Types.h"
#include "Common_Cfg.h"
#include "Icu_Hw_Types.h"
#include "StdRegMacros.h"
#if (ICU_WAKEUP_FUNCTIONALITY_API == STD_ON)
#include "EcuM.h"
#endif
/*==================================================================================================
*                                          CONSTANT-LIKE DEFINES
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

/* SWS_Icu_00382 */
/* Development Errors */
/**
 * @brief API is called with invalid pointer
 *
 */
#define ICU_E_PARAM_POINTER           ((uint8)0x0A)

/**
 * @brief API service used with an invalid channel identifier or channel was not
 *        configured for the functionality of the calling API.
 *
 */
#define ICU_E_PARAM_CHANNEL           ((uint8)0x0B)

/**
 * @brief API service used with an invalid or not feasible activation.
 *
 */
#define ICU_E_PARAM_ACTIVATION        ((uint8)0x0C)

/**
 * @brief Init function failed.
 *
 */
#define ICU_E_INIT_FAILED             ((uint8)0x0D)

/**
 * @brief API service used with an invalid buffer size.
 *
 */
#define ICU_E_PARAM_BUFFER_SIZE       ((uint8)0x0E)

/**
 * @brief API service Icu_SetMode used with an invalid mode.
 *
 */
#define ICU_E_PARAM_MODE              ((uint8)0x0F)

/**
 * @brief API service used without module initialization.
 *
 */
#define ICU_E_UNINIT                  ((uint8)0x14)

/**
 * @brief API service Icu_StopTimestamp called on a channel which was not
 *        started or already stopped
 *
 */
#define ICU_E_NOT_STARTED             ((uint8)0x15)

/**
 * @brief API service Icu_SetMode is called while a running operation.
 *
 */
#define ICU_E_BUSY_OPERATION          ((uint8)0x16)

/**
 * @brief API Icu_Init service is called and when the ICU driver and the Hardware
 *        are already initialized.
 *
 */
#define ICU_E_ALREADY_INITIALIZED     ((uint8)0x17)

/**
 * @brief API Icu_StartTimeStamp is called and the parameter NotifyInterval
 *        is invalid (e.g. NotifyInterval < 1)
 *
 */
#define ICU_E_PARAM_NOTIFY_INTERVAL   ((uint8)0x18)

/**
 * @brief API Icu_GetVersionInfo is called and the parameter versioninfo
 *        is is invalid ( e.g. NULL )
 *
 */
#define ICU_E_PARAM_VINFO             ((uint8)0x19)

/**
 * @brief API Check invalid partition
 *
 */
#define ICU_E_PARAM_PARTITION         ((uint8)0x20)

/**
 * @brief API Check invalid Group
 *
 */
#define ICU_E_PARAM_GROUP             ((uint8)0x21)

/**
 * @brief Icu dma running time error
 * */
#define ICU_E_PARAM_DMACHANNEL_BUSY   ((uint8)0x22)

/* API SERVICE IDs */
/**
 * @brief API service ID for Icu_Init function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00191
 */
#define ICU_INIT_ID                   ((uint8)0x00)
/**
 * @brief API service ID for Icu_DeInit function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00193
 * */
#define ICU_DEINIT_ID                 ((uint8)0x01)
/**
 * @brief API service ID for Icu_SetMode function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00194
 * */
#define ICU_SETMODE_ID                ((uint8)0x02)

/**
 * @brief API service ID for Icu_DisableWakeup function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00195
 * */
#define ICU_DISABLEWAKEUP_ID          ((uint8)0x03)

/**
 * @brief API service ID for Icu_EnableWakeup function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00196
 * */
#define ICU_ENABLEWAKEUP_ID           ((uint8)0x04)

/**
 * @brief API service ID for Icu_SetActivationCondition function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00197
 */
#define ICU_SETACTIVATIONCONDITION_ID ((uint8)0x05)

/**
 * @brief API service ID for Icu_DisableNotification function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00198
 * */
#define ICU_DISABLENOTIFICATION_ID    ((uint8)0x06)

/**
 * @brief API service ID for Icu_EnableNotification function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00199
 * */
#define ICU_ENABLENOTIFICATION_ID     ((uint8)0x07)

/**
 * @brief API service ID for Icu_GetInputState function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00200
 * */
#define ICU_GETINPUTSTATE_ID          ((uint8)0x08)

/**
 * @brief API service ID for Icu_StartTimestamp function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00201
 * */
#define ICU_STARTTIMESTAMP_ID         ((uint8)0x09)

/**
 * @brief API service ID for Icu_StopTimestamp function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00202
 * */
#define ICU_STOPTIMESTAMP_ID          ((uint8)0x0A)

/**
 * @brief API service ID for Icu_GetTimestampIndex function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00203
 * */
#define ICU_GETTIMESTAMPINDEX_ID      ((uint8)0x0B)

/**
 * @brief API service ID for Icu_EnableEdgeCount function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00205
 * */
#define ICU_ENABLEEDGECOUNT_ID        ((uint8)0x0D)

/**
 * @brief API service ID for Icu_DisableEdgeCount function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00206
 * */
#define ICU_DISABLEEDGECOUNT_ID       ((uint8)0x0E)

/**
 * @brief API service ID for Icu_GetTimeElapsed function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00210
 * */
#define ICU_GETTIMEELAPSED_ID         ((uint8)0x10)

/**
 * @brief API service ID for Icu_GetEdgeNumbers function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00207
 * */
#define ICU_GETEDGENUMBERS_ID         ((uint8)0x0F)

/**
 * @brief API service ID for Icu_ResetEdgeCount function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00204
 * */
#define ICU_RESETEDGECOUNT_ID         ((uint8)0x0C)

/**
 * @brief API service ID for Icu_GetDutyCycleValues function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00211
 * */
#define ICU_GETDUTYCYCLEVALUES_ID     ((uint8)0x11)

/**
 * @brief API service ID for Icu_GetVersionInfo function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00212
 * */
#define ICU_GETVERSIONINFO_ID         ((uint8)0x12)

/**
 * @brief API service ID for Icu_StartSignalMeasurement function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00208
 * */
#define ICU_STARTSIGNALMEASUREMENT_ID ((uint8)0x13)

/**
 * @brief API service ID for Icu_StopSignalMeasurement function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00209
 * */
#define ICU_STOPSIGNALMEASUREMENT_ID  ((uint8)0x14)

/**
 * @brief API service ID for Icu_CheckWakeup function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00358
 */
#define ICU_CHECKWAKEUP_ID            ((uint8)0x15)

/**
 * @brief API service ID for Icu_EnableEdgeDetection function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00364
 */
#define ICU_ENABLEEDGEDETECTION_ID    ((uint8)0x16)

/**
 * @brief API service ID for Icu_DisableEdgeDetection function
 * @details Parameters used when raising an error/exception
 *
 * @implements SWS_Icu_00377
 */
#define ICU_DISABLEEDGEDETECTION_ID   ((uint8)0x17)

/**
 * @brief API service ID for Icu_StartGlobalTime function
 * @details Parameters used when raising an error/exception
 * */
#define ICU_STARTGLOBALTIME_ID        ((uint8)0x18)

/**
 * @brief API service ID for Icu_StopGlobalTime function
 * @details Parameters used when raising an error/exception
 * */
#define ICU_STOPGLOBALTIME_ID         ((uint8)0x19)

#if (ICU_GET_INPUT_LEVEL_API == STD_ON)
/**
 * @brief   API service ID for Icu_GetInputLevel function
 * @details Parameters used when raising an error/exception
 *
 * @implements FUNC_Icu_0020
 *  */
#define ICU_GET_INPUT_LEVEL_ID ((uint8)0x80U)

#endif /* ICU_GET_INPUT_LEVEL_API */

/**
 * @brief Instance ID of this ICU driver.
 *
 */
#define ICU_INSTANCE_ID                       ((uint8)0U)

/**
 * @brief Definition of bit mask to isolate the time stamp buffer type bitfield.
 *
 */
#define ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK ((uint32)BIT0)
/**
 * @brief Definition of bit mask to isolate the measurement type bitfield.
 *
 */
#define ICU_PARAM_MEASUREMENT_PROPERTY_MASK   ((uint32)(BIT1 | BIT2 | BIT3))
/**
 * @brief Definition of bit shift to isolate the measurement type bitfield.
 *
 */
/* PRQA S 0791 ++
   [U] Macro identifier does not differ from other macro identifier(s) (e.g. '%1s') within the
   specified number of significant characters. REASON: For better classification, the macro
   identifier will be similar
 */
#define ICU_PARAM_MEASUREMENT_PROPERTY_SHIFT  (1U)
/* PRQA S 0791 -- */
/**
 * @brief Definition of get measurement property.
 *
 */
/* PRQA S 3472 ++
   All toplevel uses of this function-like macro look like they could be replaced by equivalent
   function calls. REASON: Macros have higher execution efficiency
 */
#define ICU_PARAM_MEASUREMENT_GET_PROPERTY(v)                                    \
    ((uint32)(((uint32)(((uint32)(v)) & ICU_PARAM_MEASUREMENT_PROPERTY_MASK)) >> \
              ICU_PARAM_MEASUREMENT_PROPERTY_SHIFT))
/* PRQA S 3472 -- */
#define ICU_PARAM_MEASUREMENT_MODE_MASK  ((uint32)(BIT4 | BIT5))
#define ICU_PARAM_MEASUREMENT_MODE_SHFIT (4U)
#define ICU_PARAM_MEASUREMENT_GET_MODE(v)                                    \
    ((uint32)(((uint32)(((uint32)(v)) & ICU_PARAM_MEASUREMENT_MODE_MASK)) >> \
              ICU_PARAM_MEASUREMENT_MODE_SHFIT))
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief Icu channel config type
 *
 * @implements  SWS_Icu_00039,SWS_Icu_00284,SWS_Icu_00285,SWS_Icu_00286
 */
typedef struct
{
    Icu_MeasurementModeType eMode;           /*Measurement mode type of channel*/
    Icu_HwType              eHwType;         /*Hardware module type of channel*/
    uint32                  u32ChannelOfHw;  /*Sub channel of module of channel*/
    Icu_ActivationType      eActivationEdge; /*Activation type of channel (SWS_Icu_00044)*/
    Icu_NotifyType pChannelNotification; /*Notification of channel (SWS_Icu_00018,SWS_Icu_00283) */
    uint32         u32Param;             /*paramaters of channel(timestamp buffer type or signal
                                             measurement property) */
#if (ICU_TIMESTAMP_DMA == STD_ON)        /* FUNC_Icu_0034 */
    boolean bChannelDmaEn;               /*Enable the dma mode of the channel */
    uint8   u8DmachannelRef;             /*Ref to the dma channel index */
#endif                                   /*(ICU_TIMESTAMP_DMA == STD_ON) */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
    uint32 u32WakeupSource; /*EcuM wakeup source Id.(SWS_Icu_00287,SWS_Icu_00288)*/
#endif                      /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
    Icu_NotifyType pOverflowNotification; /*Notification of channel overflow */
#endif                                    /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) */
} Icu_ChannelConfigType;

/**
 * @brief This type contains initialization data of Icu driver.
 *
 * @implements SWS_Icu_00280,SWS_Icu_00281
 */
typedef struct
{
    const Icu_ChannelType tChannelCount;              /*The number of configured channels*/
    const Icu_ChannelConfigType (*pChannelsConfig)[]; /*Pointer to the Icu channel configuration array*/
    const Icu_HwConfigType tHwConfig; /*Combined HW specific configuration structure*/
    const Icu_ChannelType (
        *pIcuHwMap)[ICU_HW_CHANNEL_COUNT];       /*Index table to translate HW channels to logical
                                                   used to process interrupts for notifications*/
    const uint8 *pIcuChannelPartitionMappingPtr; /*Multicore channel partition map table*/
#if (ICU_GTB_SUPPORT == STD_ON)
    const uint32 *pIcuGtbGroupPtr; /*Icu Gtb Group */
#endif                             /*(ICU_GTB_SUPPORT == STD_ON)*/
#if (ICU_TIMESTAMP_DMA == STD_ON)
    const Icu_TimestampDmaInfoType (*tIcuDmaChannelInfo)[]; /*Index table to Dma channel*/
#endif                                                      /*(ICU_TIMESTAMP_DMA == STD_ON)*/
} Icu_ConfigType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"
#ifndef ICU_PRECOMPILE_SUPPORT
extern const Icu_ConfigType Icu_Config;
#endif
#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
/**
 * @brief Initialize the ICU driver
 *
 * @param ConfigPtr -Pointer to a selected configuration structure
 */
ICU_TEXT_SECTION void Icu_Init(const Icu_ConfigType *ConfigPtr);
#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize the ICU module.
 *
 */
ICU_TEXT_SECTION void Icu_DeInit(void);
#endif

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief set the ICU mode.
 *
 * @param Mode -ICU Mode ICU_MODE_NORMAL: Normal operation, all used interrupts are
 *                                        enabled according to the notification requests
 *                       ICU_MODE_SLEEP: Reduced power mode. In sleep mode only those
 *                                       notifications are available which are configured
 *                                       as wakeup capable.
 */
ICU_TEXT_SECTION void Icu_SetMode(Icu_ModeType Mode);
#endif

#if (ICU_DISABLE_WAKEUP_API == STD_ON)
/**
 * @brief Disable the wakeup capability of a single ICU channel
 *
 * @param Channel -Numeric identifier of the ICU channel
 */
ICU_TEXT_SECTION void Icu_DisableWakeup(Icu_ChannelType Channel);
#endif
#if (ICU_ENABLE_WAKEUP_API == STD_ON)
/**
 * @brief  (re-)enable the wakeup capability of the given ICU channel
 *
 * @param Channel -Numeric identifier of the ICU channel
 */
ICU_TEXT_SECTION void Icu_EnableWakeup(Icu_ChannelType Channel);
#endif
#if ((ICU_WAKEUP_FUNCTIONALITY_API == STD_ON) && (ICU_REPORT_WAKEUP_SOURCE == STD_ON) && \
     (ICU_ENABLE_WAKEUP_API == STD_ON))
/**
 * @brief Checks if a wakeup capable ICU channel is the source for a wakeup event and
 *        calls the ECU state manager service EcuM_SetWakeupEvent in case of a valid
 *        ICU channel wakeup event.
 *
 * @param WakeupSource Informatin on wakeup source to be checked.
 */
ICU_TEXT_SECTION void Icu_CheckWakeup(EcuM_WakeupSourceType WakeupSource);
#endif
/**
 * @brief Enable the notification on the given channel.
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_EnableNotification(Icu_ChannelType Channel);
/**
 * @brief Disable the notification of a channel
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_DisableNotification(Icu_ChannelType Channel);
#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief enable / re-enable the detection of edges of the given channel
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_EnableEdgeDetection(Icu_ChannelType Channel);
/**
 * @brief Disable the detection of edges of the given channel
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_DisableEdgeDetection(Icu_ChannelType Channel);
#endif
#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief Returns the status of the ICU input
 *
 * @param Channel ICU channel
 * @return Icu_InputStateType ICU_ACTIVE: An activation edge has been detected
 *                            ICU_IDLE: No activation edge has been detected since the
 *                            last call of Icu_GetInputState() or Icu_Init().
 */
ICU_TEXT_SECTION Icu_InputStateType Icu_GetInputState(Icu_ChannelType Channel);
#endif
/**
 * @brief set the activation-edge for the given channel
 *
 * @param Channel Numeric identifier of the ICU channel
 * @param Activation Type of activation (if supported by hardware)
 *                   - ICU_RISING_EDGE
 *                   - ICU_FALLING_EDGE
 *                   - ICU_BOTH_EDGES
 */
ICU_TEXT_SECTION void Icu_SetActivationCondition(Icu_ChannelType    Channel,
                                                 Icu_ActivationType Activation);
#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Reset the value of the counted edges to zero
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_ResetEdgeCount(Icu_ChannelType Channel);
/**
 * @brief Enable the counting of edges of the given channel.
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_EnableEdgeCount(Icu_ChannelType Channel);
/**
 * @brief Disable the counting of edges of the given channel
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_DisableEdgeCount(Icu_ChannelType Channel);
/**
 * @brief Read the number of counted edges
 *
 * @param Channel  -ICU channel
 * @return         number of counted edges
 */
ICU_TEXT_SECTION Icu_EdgeNumberType Icu_GetEdgeNumbers(Icu_ChannelType Channel);
#endif /* ICU_EDGE_COUNT_API */
#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief start the capturing of timer values on the edges
 *
 * @param Channel           ICU channel
 * @param BufferPtr         Pointer to the buffer-array where the timestamp values shall be
 *                          placed
 * @param BufferSize        Size of the external buffer (number of entries)
 * @param NotifyInterval    Notification interval (number of events)
 */
ICU_TEXT_SECTION void Icu_StartTimestamp(Icu_ChannelType Channel,
                                         Icu_ValueType  *BufferPtr,
                                         uint16          BufferSize,
                                         uint16          NotifyInterval);
/**
 * @brief Stop the timestamp measurement of the given channel
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_StopTimestamp(Icu_ChannelType Channel);
/**
 * @brief Read the timestamp index of the given channel
 *
 * @param Channel  -ICU channel
 * @return         Timestamp index of the given channel
 */
ICU_TEXT_SECTION Icu_IndexType Icu_GetTimestampIndex(Icu_ChannelType Channel);
#endif
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Start the measurement of signals
 *
 * @param Channel -ICU channel
 */
ICU_TEXT_SECTION void Icu_StartSignalMeasurement(Icu_ChannelType Channel);
/**
 * @brief Stop the measurement of signals of the given channel
 *
 * @param Channel -ICU channel
 */
void Icu_StopSignalMeasurement(Icu_ChannelType Channel);
#endif
#if (ICU_GET_TIME_ELAPSED_API == STD_ON)
/**
 * @brief read the elapsed Signal Low, High or Period Time for the given channel
 *
 * @param Channel ICU channel
 * @return Icu_ValueType
 */
ICU_TEXT_SECTION Icu_ValueType Icu_GetTimeElapsed(Icu_ChannelType Channel);
#endif
#if (ICU_GET_DUTY_CYCLE_VALUES_API == STD_ON)
/**
 * @brief reads the coherent active time and period time for the given ICU
 *        Channel
 * @param Channel ICU channel
 * @param DutyCycleValues Pointer to a buffer where the results (high time and period time)
 *                        shall be placed.
 */
ICU_TEXT_SECTION void Icu_GetDutyCycleValues(Icu_ChannelType    Channel,
                                             Icu_DutyCycleType *DutyCycleValues);
#endif
#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Read the current input level of channel
 *
 * @param Channel ICU channel
 * @return        Input level of channel
 */
ICU_TEXT_SECTION Icu_InputLevelType Icu_GetInputLevel(Icu_ChannelType Channel);
#endif
#if (ICU_GET_VERSION_INFO_API == STD_ON)
/**
 * @brief Return the version information of this module
 *
 * @param versioninfo -Pointer to where to store the version information of this module
 */
ICU_TEXT_SECTION void Icu_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif
#if (ICU_GTB_SUPPORT == STD_ON)
/**
 * @brief Enable the Ftu Gtb function
 *
 * @param u32Group     -- Ftu Gtb  Group
 * */
ICU_TEXT_SECTION void Icu_StartGlobalTime(const uint32 u32Group);

/**
 * @brief Disable the Ftu Gtb function
 *
 * @param u32Group     -- Ftu Gtb  Group
 * */
ICU_TEXT_SECTION void Icu_StopGlobalTime(const uint32 u32Group);

#endif

/**
 * @brief The callback of dual capture ICU channels interrupt
 *
 * @param tHwChannel    -Hardware channel index
 * @param u32FirstEdge  -Tick count of first edge
 * @param u32SecondEdge -Tick count of second edge
 */
ICU_TEXT_SECTION void Icu_MeasChannelInterruptCallback(Icu_HwChannelType tHwChannel,
                                                       uint32            u32FirstEdge,
                                                       uint32            u32SecondEdge);

/**
 * @brief The callback of Icu channel interrupt
 *
 * @param tHwChannel    -Hardware channel index
 * @param u32Value      -Tick count of the hardware
 * @param eInputLevel   -Input level
 */
ICU_TEXT_SECTION void Icu_ChannelInterruptCallback(Icu_HwChannelType  tHwChannel,
                                                   uint32             u32Value,
                                                   Icu_InputLevelType eInputLevel);

#if (ICU_TIMESTAMP_DMA == STD_ON) && (ICU_TIMESTAMP_DMACHANNEL_COUNT > 0)
/*
 **@brief This function save the time stamp for the channel used dma.
 **@param  tChannel    -Time stamp Dma channel Index
 */
ICU_TEXT_SECTION void Icu_TimeStampDmaCallback(uint8 tDmaindex);
#endif

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief The callback of Icu channel overflow
 *
 * @param tHwChannel    -Hardware channel index
 */
ICU_TEXT_SECTION void Icu_OverflowCallback(Icu_HwChannelType tHwChannel);
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif /*ICU_H*/

/** @} */
