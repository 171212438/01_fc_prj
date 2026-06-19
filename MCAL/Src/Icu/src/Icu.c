/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file    Icu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - ICU Driver source file.
 *   @details ICU driver source file, containing the Autosar API specification and other variables
 *            and functions that are exported by the ICU driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU PORT Aontimer Cmp
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
*   0.1.0       22/05/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/09/2023    QXW0076       N/A          Add MultiCore feature
*   0.4.0       14/11/2023    QXW0076       N/A          Eliminate timestamp potential hazards
*   0.5.0       25/01/2024    QXW0076       N/A          add time stamp dma function
*   0.6.0       18/03/2024    QXW0076       N/A          verify timestamp dma feature && support for
7240.
*   0.7.0        28/03/2024      QXW0070        N/A             Use unions to record channel status
to save space
*   0.7.0        12/04/2024      QXW0070        N/A             Signal measurement supports dual
edge capture
*                                                        and hardware direct measurement
==================================================================================================*/

/* PRQA S 2071,5087 EOF
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3218 EOF
   File scope static, '%1s', is only accessed in one function.
   REASON: This is a normal usage.
*/
/* PRQA S 1503 EOF
   PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
   REASON: The function is not used in this project but it must be applied for user
*/

/* PRQA S 0750 EOF #Misra-C:2012 Rule-19.2 The union keyword should not be used
 *  0750:The union keyword should not be used.
 *  REASON:Union type is needed for Space-saving.
 */
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu.h"
#include "Icu_Hw.h"
#include "Icu_Version.h"
#include "SchM_Icu.h"
#if (ICU_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
/* SWS_Icu_00131 */
#if (ICU_TIMESTAMP_DMA == STD_ON)
#include "CDD_Dma.h"
#endif

/*==================================================================================================
*                                       VERSION CHECKS
==================================================================================================*/
#ifndef ICU_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (ICU_AR_RELEASE_MAJOR_VERSION != ICU_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef ICU_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (ICU_SW_MAJOR_VERSION != ICU_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef ICU_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (ICU_SW_MINOR_VERSION != ICU_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef ICU_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (ICU_SW_PATCH_VERSION != ICU_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (ICU_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != ICU_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"
#ifdef ICU_PRECOMPILE_SUPPORT
extern const Icu_ConfigType Icu_Config;
#endif
#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/**
 * @brief Definition of the measurement sequence type
 *
 */
typedef enum
{
    ICU_SIGNAL_MSMT_SEQ_NOT_STARTED = 0u,
    ICU_SIGNAL_MSMT_SEQ_STARTED     = 1u,

    ICU_SIGNAL_MSMT_SEQ_WAIT_PERIOD_START = 1u,
    ICU_SIGNAL_MSMT_SEQ_PERIOD_STARTED    = 2u,
    ICU_SIGNAL_MSMT_SEQ_ACTIVE_STARTED    = 3u,
} Icu_SignalMsmtSeqType;

/**
 * @brief Definition of the channel status type type
 *
 */
typedef union
{
    Icu_EdgeNumberType tEdgeCount; /*< @brief Edge count */
    struct
    {
        Icu_IndexType  tBufferIndex; /*< @brief Time stamp index */
        Icu_ValueType *pBuffer; /*< @brief Pointer to the buffer where the timestamp values shall be
                                   placed. */
        Icu_IndexType tBufferSize;   /*< @brief Size of the external buffer */
        Icu_IndexType tBufferNotify; /*< @brief Notification interval (number of events) */
        Icu_IndexType tNotifyCount;  /*< @brief Number of notify counts */
    } tTimeStamp;

    struct
    {
        Icu_ValueType         tSigMsmtStart;         /*< @brief Signal measurement start time */
        Icu_ValueType         tSigMsmtActive;        /*< @brief Signal measurement active time */
        Icu_InputLevelType    tSigMsmtActivLevel;    /*< @brief Signal measurement active level */
        Icu_ValueType         tActivePulseWidth;     /*< @brief Pulse width of active time */
        Icu_ValueType         tPeriod;               /*< @brief Period */
        Icu_SignalMsmtSeqType eSignalMeasurementSeq; /*< @brief Signal measurement sequence */
        Icu_ValueType         tChannelOverflowCount; /*< @brief Maximum count of channel */
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        uint32 u32ChannelOFCount;   /*< @brief Overflow count of channel */
        uint32 u32ChannelOFExCount; /*< @brief Extend(only for ICU_DUTY_CYCLE) count of channels */
        uint32 u32ActiveOverflowCount; /*< @brief Active overflow count of channels */
        uint32 u32PeriodOverflowCount; /*< @brief Period overflow count of channels */
#endif
    } tMeasurement;

    struct
    {
        uint32        u32MeasFinishCount;   /*< @brief Number of measurements completed */
        Icu_ValueType u32FirstEdgeCurrent;  /*< @brief The time of this first edge */
        Icu_ValueType u32SecondEdgeCurrent; /*< @brief The time of this second edge */
        Icu_ValueType u32FirstEdgePre;      /*< @brief The time of the previous first edge */
        Icu_ValueType u32SecondEdgePre;     /*< @brief The time of the previous second edge */
    } tDualCaptureMeas;
} Icu_ChannelWorkStateType;

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define ICU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Icu_MemMap.h"
/**
 * @brief          Global variable used for indicating the current Icu driver mode.
 */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
ICU_DATA_SECTION static Icu_ModeType Icu_Mode[MAX_CORE_NUM] = { ICU_MODE_NORMAL };
/* PRQA S 0686-- */
#else
ICU_DATA_SECTION static Icu_ModeType Icu_Mode = ICU_MODE_NORMAL;
#endif
/**
 * @brief          Global variable (pointer) used for storing the ICU driver configuration data.
 */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
ICU_DATA_SECTION const Icu_ConfigType *Icu_pConfig[MAX_CORE_NUM] = { NULL_PTR };
/* PRQA S 0686-- */
#else
ICU_DATA_SECTION const Icu_ConfigType *Icu_pConfig = NULL_PTR;
#endif

#define ICU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Icu_MemMap.h"

#define ICU_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Icu_MemMap.h"
/**
 * @brief Array for saving channel state
 *
 */
ICU_DATA_SECTION static Icu_ChannelStateType Icu_aChannelState[ICU_MAX_CHANNEL];

/**
 * @brief Array for saving the active edge of the external buffer (number of entries)
 */
ICU_DATA_SECTION static Icu_ActivationType Icu_aChannelActivEdge[ICU_MAX_CHANNEL];
/**
 * @brief Array for saving channel work state
 */
ICU_DATA_SECTION static Icu_ChannelWorkStateType Icu_aChannelWorkState[ICU_MAX_CHANNEL];

#if (ICU_TIMESTAMP_API == STD_ON) && (ICU_TIMESTAMP_DMA == STD_ON) && \
    (ICU_TIMESTAMP_DMACHANNEL_COUNT > 0)

ICU_DATA_SECTION static Icu_TimestampDmaStateType
    Icu_aTimestampDmachannelState[ICU_TIMESTAMP_DMACHANNEL_COUNT];

#endif /* (ICU_TIMESTAMP_API == STD_ON)&&(ICU_TIMESTAMP_DMA == STD_ON)*/
#define ICU_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Icu_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
LOCAL_INLINE void Icu_SetBitChState(Icu_ChannelType tChannel, Icu_ChannelStateType tMask);
LOCAL_INLINE void Icu_ClearBitChState(Icu_ChannelType tChannel, Icu_ChannelStateType tMask);
LOCAL_INLINE Icu_ChannelStateType Icu_GetBitChState(Icu_ChannelType      tChannel,
                                                    Icu_ChannelStateType tMask);
#if (ICU_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE boolean Icu_IsInitialized(uint8 u8ServiceID);
LOCAL_INLINE boolean Icu_IsNotInitialized(uint8 u8ServiceID);
LOCAL_INLINE boolean Icu_ValidateParamPtr(uint8 u8ServiceID, const void *pParam);
LOCAL_INLINE boolean Icu_ValidateNotification(uint8 u8Service, Icu_ChannelType Channel);
#if ((ICU_WAKEUP_FUNCTIONALITY_API == STD_ON) || (ICU_ENABLE_WAKEUP_API == STD_ON) || \
     (ICU_DISABLE_WAKEUP_API == STD_ON))
LOCAL_INLINE boolean Icu_ValidateWakeup(uint8 u8Service, Icu_ChannelType Channel);
#endif
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
LOCAL_INLINE boolean Icu_ValidateMeasurement(uint8 u8Service, Icu_ChannelType Channel);
#endif
#if (ICU_TIMESTAMP_API == STD_ON)
LOCAL_INLINE boolean Icu_ValidateTimestamp(uint8 u8Service, Icu_ChannelType Channel);
#endif
#if (ICU_EDGE_COUNT_API == STD_ON)
LOCAL_INLINE boolean Icu_ValidateEdgeCount(uint8 u8Service, Icu_ChannelType Channel);
#endif
#if (ICU_EDGE_DETECT_API == STD_ON)
LOCAL_INLINE boolean Icu_ValidateEdgeDetect(uint8 u8Service, Icu_ChannelType Channel);
#endif
#endif
LOCAL_INLINE void Icu_CallNotification(Icu_ChannelType tChannel);
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementPeriod(Icu_ChannelType tChannel,
                                                            uint32          u32Value);
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementDutyCycle(Icu_ChannelType    tChannel,
                                                               Icu_ActivationType eActivationEdge,
                                                               Icu_InputLevelType eInputLevel,
                                                               uint32             u32Value);
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementLevel(Icu_ChannelType    tChannel,
                                                           Icu_InputLevelType eActivLevel,
                                                           Icu_InputLevelType eInputLevel,
                                                           uint32             u32Value);
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementProcess(Icu_ChannelType    tChannel,
                                                             Icu_InputLevelType eInputLevel,
                                                             uint32             u32Value);
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
LOCAL_INLINE Icu_ValueType Icu_GetSignalDuration(Icu_ValueType tCurrent,
                                                 Icu_ValueType tStart,
                                                 Icu_ValueType u32MaxValue,
                                                 uint32       *pOverflowCount);
#else
LOCAL_INLINE Icu_ValueType Icu_GetSignalDuration(Icu_ValueType tCurrent,
                                                 Icu_ValueType tStart,
                                                 Icu_ValueType u32MaxValue);
#endif
#endif
#if (ICU_TIMESTAMP_API == STD_ON)
ICU_TEXT_SECTION static void Icu_TimeStampProcess(Icu_ChannelType tChannel, uint32 u32Timestamp);
#endif
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
ICU_TEXT_SECTION static void Icu_ReportWakeup(Icu_ChannelType Channel);
#endif

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief Set the Icu_aChannelState bit field specified by mask parameter in an atomic way.
 *
 * @param tChannel - The index of ICU channel for current configuration structure
 * @param tMask    - bit field mask
 */
LOCAL_INLINE void Icu_SetBitChState(Icu_ChannelType tChannel, Icu_ChannelStateType tMask)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_00();
    {
        Icu_aChannelState[tChannel] |= ((Icu_ChannelStateType)tMask);
    }
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_00();
}

/**
 * @brief Clear the Icu_aChannelState bit field specified by mask parameter in an atomic way.
 *
 * @param tChannel - The index of ICU channel for current configuration structure
 * @param tMask    - bit field mask
 */
LOCAL_INLINE void Icu_ClearBitChState(Icu_ChannelType tChannel, Icu_ChannelStateType tMask)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_01();
    {
        Icu_aChannelState[tChannel] &= ((Icu_ChannelStateType)(~tMask));
    }
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_01();
}

/**
 * @brief Return the Icu_aChannelState bit field specified by mask parameter in an atomic way.
 *
 * @param tChannel - The index of ICU channel for current configuration structure
 * @param tMask    - bit field mask
 * @return         bit field specified by mask parameter
 * @retval         ICU_CHANNEL_STATE_WKUP Wake up feature is currently enabled
 * @retval         ICU_CHANNEL_STATE_IDLE The current channel status is idle
 * @retval         ICU_CHANNEL_STATE_NOTIFICATION Notification is enabled
 * @retval         ICU_CHANNEL_STATE_RUNNING The current channel state is Running
 */
LOCAL_INLINE Icu_ChannelStateType Icu_GetBitChState(Icu_ChannelType      tChannel,
                                                    Icu_ChannelStateType tMask)
{
    Icu_ChannelStateType tRet;
    tRet = Icu_aChannelState[tChannel] & tMask;
    return tRet;
}

#if (ICU_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief Get the Icu initialized state
 *
 * @param u8ServiceID -The service id of the caller function.
 * @return            -Icu initialized state
 * @retval            -TRUE  Icu has already initialized
 * @retval            -FALSE Icu is not initialized
 */
LOCAL_INLINE boolean Icu_IsInitialized(uint8 u8ServiceID)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              u8ServiceID,
                              (uint8)ICU_E_UNINIT);
    }
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}

/**
 * @brief Get the Icu initialized state
 *
 * @param u8ServiceID -The service id of the caller function
 * @return            Icu initialized state
 * @retval            TRUE  Icu is not initialized
 * @retval            FALSE Icu has already initialized
 */
LOCAL_INLINE boolean Icu_IsNotInitialized(uint8 u8ServiceID)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR != Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR != Icu_pConfig)
#endif
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              u8ServiceID,
                              (uint8)ICU_E_ALREADY_INITIALIZED);
    }
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}

/**
 * @brief Validate the point to parameter
 *
 * @param u8ServiceID -The service id of the caller function
 * @param pParam      -Point to the parameter
 * @return            The validity of paramter point
 * @retval            TRUE  The point is valid
 * @retval            FALSE The point is invalid
 */
LOCAL_INLINE boolean Icu_ValidateParamPtr(uint8 u8ServiceID, const void *pParam)
{
    boolean bValid = (boolean)FALSE;
    if (NULL_PTR == pParam)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8ServiceID,
                              (uint8)ICU_E_PARAM_POINTER);
    }
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}

#if ((ICU_DEV_ERROR_DETECT == STD_ON) &&                                               \
     ((ICU_WAKEUP_FUNCTIONALITY_API == STD_ON) || (ICU_ENABLE_WAKEUP_API == STD_ON) || \
      (ICU_DISABLE_WAKEUP_API == STD_ON)))
/**
 * @brief This function validates a wakeup channel
 *
 * @param u8Service -The service id of the caller function
 * @param Channel   -Numeric identifier of the ICU channel
 * @return          The validity of the function call
 * @retval          TRUE  The channel is valid
 * @retval          FALSE The channel is invalid
 */
LOCAL_INLINE boolean Icu_ValidateWakeup(uint8 u8Service, Icu_ChannelType Channel)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_UNINIT);
    }
    /* if Channel is not within the allowed range set in the configuration*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
    /* The function Icu_DisableWakeup shall be pre compile time
     * configurable by the configuration parameter IcuDisableWakeupApi.*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (0u == (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].u32WakeupSource)
#else
    else if (0u == (*Icu_pConfig->pChannelsConfig)[Channel].u32WakeupSource)
#endif
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}
#endif

/* SWS_Icu_00142 */
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief This function validates a signal measurement channel
 *
 * @param u8Service -The service id of the caller function
 * @param Channel   -Numeric identifier of the ICU channel
 * @return          The validity of the function call
 * @retval          TRUE    The signal measurement channel is valid
 * @retval          FALSE   The signal measurement channel is invalid
 */
LOCAL_INLINE boolean Icu_ValidateMeasurement(uint8 u8Service, Icu_ChannelType Channel)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022,SWDESG_ICU_061,SWDESG_ICU_064,SWDESG_ICU_067,SWDESG_ICU_070 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_UNINIT);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        /* SWDESG_ICU_062,SWDESG_ICU_065,SWDESG_ICU_068,SWDESG_ICU_071 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (ICU_MODE_SIGNAL_MEASUREMENT != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode)
#else
    else if (ICU_MODE_SIGNAL_MEASUREMENT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode)
#endif
    {
        /* SWS_Icu_00141,SWS_Icu_00144,SWDESG_ICU_062,SWDESG_ICU_065,SWDESG_ICU_068,SWDESG_ICU_071 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}
#endif

/**
 * @brief This function validates a channel with notification
 *
 * @param u8Service -The service id of the caller function
 * @param Channel   -Numeric identifier of the ICU channel
 * @return          The validity of the function call
 * @retval          TRUE    The channel with notification is valid
 * @retval          FALSE   The channel with notification is invalid
 */
LOCAL_INLINE boolean Icu_ValidateNotification(uint8 u8Service, Icu_ChannelType Channel)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_UNINIT);
    }
    /* Icu_DisableNotification shall check the parameter Channel and shall raise the error
       ICU_E_PARAM_CHANNEL if Channel is invalid
    */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if ((ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode) &&
             (ICU_MODE_TIMESTAMP != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode))
#else
    else if ((ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode) &&
             (ICU_MODE_TIMESTAMP != (*Icu_pConfig->pChannelsConfig)[Channel].eMode))
#endif
    {
        /* SWDESG_ICU_022,SWDESG_ICU_025 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}
#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief This function validates a timestamp channel
 *
 * @param u8Service -The service id of the caller function
 * @param Channel   -Numeric identifier of the ICU channel
 * @return          The validity of the function call
 * @retval          TRUE    The timestamp channel is valid
 * @retval          FALSE   The timestamp channel is invalid
 */
LOCAL_INLINE boolean Icu_ValidateTimestamp(uint8 u8Service, Icu_ChannelType Channel)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022,SWDESG_ICU_030,SWDESG_ICU_036,SWDESG_ICU_040 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_UNINIT);
    }
/*  Icu_StopTimestamp shall check the parameter Channel and shall raise default
    error ICU_E_PARAM_CHANNEL if Channel is invalid*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        /* SWDESG_ICU_031,SWDESG_ICU_037,SWDESG_ICU_041 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
/* channel not configured for mode ICU_MODE_TIMESTAMP*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (ICU_MODE_TIMESTAMP != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode)
#else
    else if (ICU_MODE_TIMESTAMP != (*Icu_pConfig->pChannelsConfig)[Channel].eMode)
#endif
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}
#endif

#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief This function validates a edge counter channel
 *
 * @param u8Service -The service id of the caller function
 * @param Channel   -Numeric identifier of the ICU channel
 * @return          The validity of the function call
 * @retval          TRUE    The edge counter channel is valid
 * @retval          FALSE   The edge counter channel is invalid
 */
LOCAL_INLINE boolean Icu_ValidateEdgeCount(uint8 u8Service, Icu_ChannelType Channel)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022,SWDESG_ICU_046,SWDESG_ICU_058 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_UNINIT);
    }
/*invalid identifier*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        /* SWDESG_ICU_044,SWDESG_ICU_047,SWDESG_ICU_056,SWDESG_ICU_059 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
/* channel not configured for mode ICU_MODE_EDGE_COUNTER*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (ICU_MODE_EDGE_COUNTER != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode)
#else
    else if (ICU_MODE_EDGE_COUNTER != (*Icu_pConfig->pChannelsConfig)[Channel].eMode)
#endif
    {
        /* SWDESG_ICU_044,SWDESG_ICU_047,SWDESG_ICU_056,SWDESG_ICU_059 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}
#endif

#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief This function validates a edge detect channel
 *
 * @param u8Service -The service id of the caller function
 * @param Channel   -Numeric identifier of the ICU channel
 * @return          The validity of the function call
 * @retval          TRUE    The edge detect channel is valid
 * @retval          FALSE   The edge detect channel is invalid
 */
LOCAL_INLINE boolean Icu_ValidateEdgeDetect(uint8 u8Service, Icu_ChannelType Channel)
{
    boolean bValid = (boolean)FALSE;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022,SWDESG_ICU_049,SWDESG_ICU_052 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_UNINIT);
    }
/*invalid identifier*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        /* SWDESG_ICU_050,SWDESG_ICU_056*/
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
/* channel not configured for mode ICU_MODE_SIGNAL_EDGE_DETECT */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode)
#else
    else if (ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode)
#endif
    {
        /* SWDESG_ICU_050 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)u8Service,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}
#endif
#endif

/**
 * @brief This function calls the notification
 *
 * @param tChannel -Numeric identifier of the ICU channel
 * @return void
 *
 * @implements  SWS_Icu_00348,SWS_Icu_00349
 */
LOCAL_INLINE void Icu_CallNotification(Icu_ChannelType tChannel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if ((ICU_CHANNEL_STATE_NOTIFICATION ==
         Icu_GetBitChState(tChannel, ICU_CHANNEL_STATE_NOTIFICATION)) &&
        (NULL_PTR != (*(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel].pChannelNotification))
    {
        (*(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel].pChannelNotification();
    }
#else
    if ((ICU_CHANNEL_STATE_NOTIFICATION ==
         Icu_GetBitChState(tChannel, ICU_CHANNEL_STATE_NOTIFICATION)) &&
        (NULL_PTR != (*(Icu_pConfig->pChannelsConfig))[tChannel].pChannelNotification))
    {
        /* SWS_Icu_00021,SWS_Icu_00134,SWS_Icu_00318 */
        (*(Icu_pConfig->pChannelsConfig))[tChannel].pChannelNotification();
    }
#endif
}

#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief This function calls the notification
 *
 * @param tCurrent          -current time
 * @param tStart            -start time
 * @param u32MaxValue       -maximum value
 * @param pOverflowCount    -buffer of overflow count
 * @return time duration
 */
LOCAL_INLINE Icu_ValueType Icu_GetSignalDuration(Icu_ValueType tCurrent,
                                                 Icu_ValueType tStart,
                                                 Icu_ValueType u32MaxValue,
                                                 uint32       *pOverflowCount)
#else
/**
 * @brief This function calls the notification
 *
 * @param tCurrent      -current time
 * @param tStart        -start time
 * @param u32MaxValue   -maximum value
 * @return time duration
 */
LOCAL_INLINE Icu_ValueType Icu_GetSignalDuration(Icu_ValueType tCurrent,
                                                 Icu_ValueType tStart,
                                                 Icu_ValueType u32MaxValue)
#endif
{
    Icu_ValueType tDuration;

    if (tCurrent > tStart)
    {
        tDuration = tCurrent - tStart;
    }
    else
    {
        /*overflow*/
        tDuration = u32MaxValue - tStart + tCurrent;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        if (0u != *pOverflowCount)
        {
            *pOverflowCount -= 1u;
        }
        else
        {
            /* Miss overflow*/
        }
#endif
    }
    return tDuration;
}

/**
 * @brief Signal measurement process for ICU_LOW_TIME and ICU_HIGH_TIME
 *
 * @param tChannel      -Numeric identifier of the ICU channel
 * @param eActivLevel   -Activation Level of the ICU channel
 * @param eInputLevel   -Input level of the ICU channel
 * @param u32Value      -Tick count of the ICU channel
 * @retval          TRUE    Measurement has completed
 * @retval          FALSE   Measurement has not completed
 */
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementLevel(Icu_ChannelType    tChannel,
                                                           Icu_InputLevelType eActivLevel,
                                                           Icu_InputLevelType eInputLevel,
                                                           uint32             u32Value)
{
    boolean bCompleted = (boolean)FALSE;
    if ((eActivLevel == eInputLevel) &&
        (ICU_SIGNAL_MSMT_SEQ_NOT_STARTED ==
         Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq))
    {
        /* Start Active Time */
        Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart = u32Value;
        Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq =
            ICU_SIGNAL_MSMT_SEQ_STARTED;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount = 0;
#endif
    }
    else if ((eActivLevel != eInputLevel) &&
             (ICU_SIGNAL_MSMT_SEQ_NOT_STARTED !=
              Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq))
    {
/* End Active Time */
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        Icu_aChannelWorkState[tChannel].tMeasurement.u32ActiveOverflowCount =
            Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount;
        Icu_aChannelWorkState[tChannel].tMeasurement.tActivePulseWidth = Icu_GetSignalDuration(
            u32Value,
            Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart,
            Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount,
            &Icu_aChannelWorkState[tChannel].tMeasurement.u32ActiveOverflowCount);
#else
        Icu_aChannelWorkState[tChannel].tMeasurement.tActivePulseWidth = Icu_GetSignalDuration(
            u32Value,
            Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart,
            Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount);
#endif
        Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq =
            ICU_SIGNAL_MSMT_SEQ_NOT_STARTED;
        bCompleted = (boolean)TRUE;
    }
    else
    {
        /* do nothing */
    }
    return bCompleted;
}

/**
 * @brief Signal measurement process for ICU_PERIOD_TIME
 *
 * @param tChannel          -Numeric identifier of the ICU channel
 * @param u32Value          -Tick count of the ICU channel
 * @retval          TRUE    Measurement has completed
 * @retval          FALSE   Measurement has not completed
 */
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementPeriod(Icu_ChannelType tChannel, uint32 u32Value)
{
    boolean bCompleted = (boolean)FALSE;

    if (ICU_SIGNAL_MSMT_SEQ_NOT_STARTED ==
        Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq)
    {
        /*Start period*/
        Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart = u32Value;
        Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq =
            ICU_SIGNAL_MSMT_SEQ_STARTED;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount = 0;
#endif
    }
    else
    {
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        Icu_aChannelWorkState[tChannel].tMeasurement.u32PeriodOverflowCount =
            Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount;
        Icu_aChannelWorkState[tChannel].tMeasurement.tPeriod = Icu_GetSignalDuration(
            u32Value,
            Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart,
            Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount,
            &Icu_aChannelWorkState[tChannel].tMeasurement.u32PeriodOverflowCount);
#else
        Icu_aChannelWorkState[tChannel].tMeasurement.tPeriod = Icu_GetSignalDuration(
            u32Value,
            Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart,
            Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount);
#endif
        bCompleted = (boolean)TRUE;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount = 0;
#endif
        Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart = u32Value;
    }

    return bCompleted;
}

/**
 * @brief Signal measurement process for ICU_DUTY_CYCLE
 *
 * @param tChannel          -Numeric identifier of the ICU channel
 * @param eActivationEdge   -eActivationEdge edge of the ICU channel
 * @param eInputLevel       -Input level of the ICU channel
 * @param u32Value          -Tick count of the ICU channel
 * @retval          TRUE    Measurement has completed
 * @retval          FALSE   Measurement has not completed
 */
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementDutyCycle(Icu_ChannelType    tChannel,
                                                               Icu_ActivationType eActivationEdge,
                                                               Icu_InputLevelType eInputLevel,
                                                               uint32             u32Value)
{
    boolean            bCompleted = (boolean)FALSE;
    Icu_InputLevelType eActivLevel;
    if (ICU_FALLING_EDGE == eActivationEdge)
    {
        eActivLevel = ICU_INPUT_LOW;
    }
    else
    {
        eActivLevel = ICU_INPUT_HIGH;
    }

    if (eActivLevel == eInputLevel) /*Active Edge*/
    {
        if (ICU_SIGNAL_MSMT_SEQ_NOT_STARTED ==
            Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq) /*not start*/
        {
            Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq =
                ICU_SIGNAL_MSMT_SEQ_WAIT_PERIOD_START;
        }
        else if (ICU_SIGNAL_MSMT_SEQ_PERIOD_STARTED ==
                 Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq) /*second edge*/
        {
            Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtActive = u32Value;
            Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq =
                ICU_SIGNAL_MSMT_SEQ_ACTIVE_STARTED;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFExCount = 0u;
#endif
        }
        else
        {
            /* do nothing */
        }
    }
    else /*start Edge*/
    {
        if (ICU_SIGNAL_MSMT_SEQ_WAIT_PERIOD_START >=
            Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq) /* first edge*/
        {
            Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart = u32Value;
            Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq =
                ICU_SIGNAL_MSMT_SEQ_PERIOD_STARTED;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount = 0u;
#endif
        }
        else if (ICU_SIGNAL_MSMT_SEQ_ACTIVE_STARTED ==
                 Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq) /*end/first edge*/
        {
/*End period*/
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            Icu_aChannelWorkState[tChannel].tMeasurement.u32PeriodOverflowCount =
                Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount;
            Icu_aChannelWorkState[tChannel].tMeasurement.tPeriod = Icu_GetSignalDuration(
                u32Value,
                Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart,
                Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount,
                &Icu_aChannelWorkState[tChannel].tMeasurement.u32PeriodOverflowCount);
#else
            Icu_aChannelWorkState[tChannel].tMeasurement.tPeriod = Icu_GetSignalDuration(
                u32Value,
                Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart,
                Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount);
#endif
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            Icu_aChannelWorkState[tChannel].tMeasurement.u32ActiveOverflowCount =
                Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFExCount;
            Icu_aChannelWorkState[tChannel].tMeasurement.tActivePulseWidth = Icu_GetSignalDuration(
                u32Value,
                Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtActive,
                Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount,
                &Icu_aChannelWorkState[tChannel].tMeasurement.u32ActiveOverflowCount);
#else
            Icu_aChannelWorkState[tChannel].tMeasurement.tActivePulseWidth = Icu_GetSignalDuration(
                u32Value,
                Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtActive,
                Icu_aChannelWorkState[tChannel].tMeasurement.tChannelOverflowCount);
#endif
            Icu_aChannelWorkState[tChannel].tMeasurement.tSigMsmtStart = u32Value;
            Icu_aChannelWorkState[tChannel].tMeasurement.eSignalMeasurementSeq =
                ICU_SIGNAL_MSMT_SEQ_PERIOD_STARTED;
            bCompleted = (boolean)TRUE;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount   = 0u;
            Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFExCount = 0u;
#endif
        }
        else
        {
            /* do nothing */
        }
    }
    return bCompleted;
}

/**
 * @brief Signal measurement Isr process
 *
 * @param tChannel      -Numeric identifier of the ICU channel
 * @param eInputLevel   -Input level of the ICU channel
 * @param u32Value      -Tick count of the ICU channel
 * @retval          TRUE    Measurement has completed
 * @retval          FALSE   Measurement has not completed
 */
ICU_TEXT_SECTION static boolean Icu_SignalMeasurementProcess(Icu_ChannelType    tChannel,
                                                             Icu_InputLevelType eInputLevel,
                                                             uint32             u32Value)
{
    boolean bCompleted;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent
       function call.
       REASON: Macros have higher execution efficiency
    */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tChannel];
#endif
    uint32 u32MesurementMode = ICU_PARAM_MEASUREMENT_GET_PROPERTY(pChConfig->u32Param);
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_07();
    {
        if ((uint32)ICU_LOW_TIME == u32MesurementMode)
        {
            bCompleted = Icu_SignalMeasurementLevel(tChannel, ICU_INPUT_LOW, eInputLevel, u32Value);
        }
        else if ((uint32)ICU_HIGH_TIME == u32MesurementMode)
        {
            bCompleted = Icu_SignalMeasurementLevel(tChannel, ICU_INPUT_HIGH, eInputLevel, u32Value);
        }
        else if ((uint32)ICU_PERIOD_TIME == u32MesurementMode)
        {
            bCompleted = Icu_SignalMeasurementPeriod(tChannel, u32Value);
        }
        else /*ICU_DUTY_CYCLE*/
        {
            bCompleted = Icu_SignalMeasurementDutyCycle(tChannel,
                                                        Icu_aChannelActivEdge[tChannel],
                                                        eInputLevel,
                                                        u32Value);
        }
    }
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_07();
    return bCompleted;
}
#endif

/* SWS_Icu_00218 */
#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief Timestamp isr process
 *
 * @param tChannel      -Numeric identifier of the ICU channel
 * @param u32Timestamp  -Timestamp value
 */
ICU_TEXT_SECTION static void Icu_TimeStampProcess(Icu_ChannelType tChannel, uint32 u32Timestamp)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent
       function call.
       REASON: Macros have higher execution efficiency
    */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tChannel];
#endif
    uint8 u8Notifyflag = 0U;
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_04();
    {
        Icu_aChannelWorkState[tChannel]
            .tTimeStamp.pBuffer[Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferIndex] = u32Timestamp;
        Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferIndex++;
        /* If circular buffer, loop; if linear buffer, terminate. */
        if (Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferIndex >=
            Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferSize)
        {
            if ((uint32)ICU_CIRCULAR_BUFFER ==
                (pChConfig->u32Param & ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK))
            {
                /* SWS_Icu_00064 */
                Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferIndex = 0U;
            }
            else
            {
                /* SWS_Icu_00065 */
                Icu_HW_StopTimeStamp(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
                Icu_ClearBitChState(tChannel, ICU_CHANNEL_STATE_RUNNING);
            }
        }
        /* SWS_Icu_00319 */
        if (0U != Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify)
        {
            Icu_aChannelWorkState[tChannel].tTimeStamp.tNotifyCount++;
            /* SWS_Icu_00320 */
            if (Icu_aChannelWorkState[tChannel].tTimeStamp.tNotifyCount >=
                Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify)
            {
                Icu_aChannelWorkState[tChannel].tTimeStamp.tNotifyCount = 0U;
                u8Notifyflag                                            = 1U;
            }
        }
    }
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_04();
    if (u8Notifyflag == 1U)
    {
        /* SWS_Icu_00215,SWS_Icu_00216 */
        /* Call User Notification Function and/or Wakeup Function */
        Icu_CallNotification(tChannel);
    }
}
#endif

#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
/**
 * @brief This function reports the wakeup events
 *
 * @param Channel -Numeric identifier of the ICU channel
 */
ICU_TEXT_SECTION static void Icu_ReportWakeup(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
            This usage of a function-like macro looks like it could be replaced by an equivalent
            function call.
            REASON: Macros have higher execution efficiency
         */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];

#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    if ((ICU_MODE_SLEEP == Icu_Mode[u8CoreID]) &&
        (ICU_CHANNEL_STATE_WKUP == Icu_GetBitChState(Channel, ICU_CHANNEL_STATE_WKUP)))
#else
    if ((ICU_MODE_SLEEP == Icu_Mode) &&
        (ICU_CHANNEL_STATE_WKUP == Icu_GetBitChState(Channel, ICU_CHANNEL_STATE_WKUP)))
#endif
    {
        Icu_SetBitChState(Channel, ICU_CHANNEL_IS_WAKEUP_SOURCE);
        /* SWS_Icu_00228 */
        EcuM_CheckWakeup((EcuM_WakeupSourceType)pChConfig->u32WakeupSource);
    }
}
#endif
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize the ICU driver
 *
 * @param ConfigPtr -Pointer to a selected configuration structure
 *
 * @implements
 * SWS_Icu_00051,SWS_Icu_00052,SWS_Icu_00053,SWS_Icu_00128,SWS_Icu_00129,SWS_Icu_00297,SWS_Icu_00298，SWDESG_ICU_001
 *
 */
ICU_TEXT_SECTION void Icu_Init(const Icu_ConfigType *ConfigPtr)
{

#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
    Icu_ChannelType tIdx;
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00054,SWS_Icu_00220，SWDESG_ICU_002 */
    boolean bValid = Icu_IsNotInitialized(ICU_INIT_ID);
    if ((boolean)TRUE == bValid)
    {
        /* SWS_Icu_00138，SWDESG_ICU_003 */
#ifndef ICU_PRECOMPILE_SUPPORT
        bValid = Icu_ValidateParamPtr(ICU_INIT_ID, ConfigPtr);
        if ((boolean)TRUE == bValid)
#endif
        {
#endif
            /* SWS_Icu_00006 */
#ifdef ICU_PRECOMPILE_SUPPORT
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            Icu_pConfig[u8CoreID] = &Icu_Config;
#else
            Icu_pConfig = &Icu_Config;
#endif
            (void)ConfigPtr;
#else
    /* PRQA S 2919 ++
       Possible: Storing the address of an object in a pointer that has greater lifetime.
       REASON: The caller must guarantee the lifetime of the pointer
    */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent
       function call.
       REASON: Macros have higher execution efficiency
    */
    Icu_pConfig[u8CoreID] = ConfigPtr;

#else
    Icu_pConfig = ConfigPtr;
#endif
    /* PRQA S 2919 -- */
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            Icu_HW_ModulesInit(&Icu_pConfig[u8CoreID]->tHwConfig);
#else
    Icu_HW_ModulesInit(&Icu_pConfig->tHwConfig);
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            for (tIdx = 0; tIdx < Icu_pConfig[u8CoreID]->tChannelCount; tIdx++)
#else
    for (tIdx = 0; tIdx < Icu_pConfig->tChannelCount; tIdx++)
#endif
            {
                /* SWS_Icu_00384 */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                /* SWDESG_ICU_220 */
                if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[tIdx] == u8CoreID)
                {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                    const Icu_ChannelConfigType *pChConfig = &(
                        *(Icu_pConfig[u8CoreID]->pChannelsConfig))[tIdx];
#else
        const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tIdx];
#endif
                    Icu_aChannelActivEdge[tIdx] = pChConfig->eActivationEdge;
                    Icu_HW_ChannelInit(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
                    /* SWS_Icu_00040,SWS_Icu_00061,SWS_Icu_00121 */
                    Icu_aChannelState[tIdx] = ICU_CHANNEL_STATE_OFF;
                    if (pChConfig->eMode == ICU_MODE_EDGE_COUNTER)
                    {
                        Icu_aChannelWorkState[tIdx].tEdgeCount = 0;
                    }
                    else if (pChConfig->eMode == ICU_MODE_TIMESTAMP)
                    {
                        Icu_aChannelWorkState[tIdx].tTimeStamp.pBuffer      = NULL_PTR;
                        Icu_aChannelWorkState[tIdx].tTimeStamp.tBufferIndex = 0;
                    }
                    else if (pChConfig->eMode == ICU_MODE_SIGNAL_MEASUREMENT)
                    {
                        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should
                           not be cast to an inappropriate essential type. reason: The program will
                           guarantee the legality of these type conversions */
                        Icu_SignalMeasurementModeType eMeasurementMode =
                            (Icu_SignalMeasurementModeType)(ICU_PARAM_MEASUREMENT_GET_MODE(
                                pChConfig->u32Param));
                        /* PRQA S 4342 --*/
                        if (ICU_MEASUREMENT_SINGLE_CAPTURE == eMeasurementMode)
                        {
                            Icu_aChannelWorkState[tIdx].tMeasurement.eSignalMeasurementSeq =
                                ICU_SIGNAL_MSMT_SEQ_NOT_STARTED;
                            Icu_aChannelWorkState[tIdx].tMeasurement.tActivePulseWidth = 0;
                            Icu_aChannelWorkState[tIdx].tMeasurement.tPeriod           = 0;
                        }
                    }
                    else
                    {
                        /* for MISRA*/
                    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                }
#endif
            }
#if (ICU_TIMESTAMP_DMA == STD_ON) && (ICU_TIMESTAMP_DMACHANNEL_COUNT > 0)
            for (tIdx = 0; tIdx < ICU_TIMESTAMP_DMACHANNEL_COUNT; tIdx++)
            {
                Icu_aTimestampDmachannelState[tIdx].eDmaChannelState = ICU_DMA_CHANNEL_STATE_IDLE;
            };
#endif
            /* SWS_Icu_00060 */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            Icu_Mode[u8CoreID] = ICU_MODE_NORMAL;
#else
    Icu_Mode = ICU_MODE_NORMAL;
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

/* SWS_Icu_00092,SWS_Icu_00301 */
#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize the ICU module.
 *
 * @implements SWS_Icu_00036,SWS_Icu_00299,SWS_Icu_00300，SWDESG_ICU_004
 */
ICU_TEXT_SECTION void Icu_DeInit(void)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00221,SWS_Icu_000385,SWDESG_ICU_005 */
    boolean bValid = Icu_IsInitialized(ICU_DEINIT_ID);
    if ((boolean)TRUE == bValid)
    {
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
        Icu_ChannelType tIdx;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        for (tIdx = 0; tIdx < Icu_pConfig[u8CoreID]->tChannelCount; tIdx++)
#else
    for (tIdx = 0; tIdx < Icu_pConfig->tChannelCount; tIdx++)
#endif
        {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* SWDESG_ICU_240 */
            if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[tIdx] == u8CoreID)
            {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                const Icu_ChannelConfigType *pChConfig = &(
                    *(Icu_pConfig[u8CoreID]->pChannelsConfig))[tIdx];
#else
        const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tIdx];
#endif
                /* SWS_Icu_00037,SWS_Icu_00152 */
                Icu_HW_ChannelDeInit(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }

#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWS_Icu_00091 */
        Icu_HW_ModulesDeInit(&Icu_pConfig[u8CoreID]->tHwConfig);
        Icu_pConfig[u8CoreID] = NULL_PTR;
        Icu_Mode[u8CoreID]    = ICU_MODE_NORMAL;
#else
    Icu_HW_ModulesDeInit(&Icu_pConfig->tHwConfig);
    Icu_pConfig = NULL_PTR;
    Icu_Mode    = ICU_MODE_NORMAL;
#endif
#if (ICU_TIMESTAMP_DMA == STD_ON) && (ICU_TIMESTAMP_DMACHANNEL_COUNT > 0)
        for (tIdx = 0; tIdx < ICU_TIMESTAMP_DMACHANNEL_COUNT; tIdx++)
        {
            Icu_aTimestampDmachannelState[tIdx].eDmaChannelState = ICU_DMA_CHANNEL_STATE_IDLE;
        };
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
    else
    {
        /* for MISRA*/
    }
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
}
#endif /* ICU_DE_INIT_API */

/* SWS_Icu_00095,SWS_Icu_00303 */
#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief set the ICU mode.
 *
 * @param Mode -ICU Mode ICU_MODE_NORMAL: Normal operation, all used interrupts are
 *                                        enabled according to the notification requests
 *                       ICU_MODE_SLEEP: Reduced power mode. In sleep mode only those
 *                                       notifications are available which are configured
 *                                       as wakeup capable.
 * @implements SWS_Icu_00008,SWS_Icu_00302,SWDESG_ICU_006
 */
ICU_TEXT_SECTION void Icu_SetMode(Icu_ModeType Mode)
{
    Icu_ChannelType tIdx;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif

#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00386 */
    boolean bValid = Icu_IsInitialized(ICU_SETMODE_ID);
    if ((boolean)TRUE == bValid)
    {
        if ((ICU_MODE_NORMAL != Mode) && (ICU_MODE_SLEEP != Mode))
        {
            /* SWS_Icu_00125,SWDESG_ICU_007 */
            (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                  (uint8)ICU_INSTANCE_ID,
                                  (uint8)ICU_SETMODE_ID,
                                  (uint8)ICU_E_PARAM_MODE);
        }
        else
        {
            /*Check that there is no channel that is running and is not wake-up capable*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            for (tIdx = 0; tIdx < Icu_pConfig[u8CoreID]->tChannelCount; tIdx++)
#else
            for (tIdx = 0; tIdx < Icu_pConfig->tChannelCount; tIdx++)
#endif
            {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                /* SWDESG_ICU_241 */
                if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[tIdx] == u8CoreID)
                {
#endif
                    if ((ICU_CHANNEL_STATE_RUNNING ==
                         Icu_GetBitChState(tIdx, ICU_CHANNEL_STATE_RUNNING | ICU_CHANNEL_STATE_WKUP)))
                    {
                        /* SWS_Icu_00133 */
                        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                              (uint8)ICU_INSTANCE_ID,
                                              (uint8)ICU_SETMODE_ID,
                                              (uint8)ICU_E_BUSY_OPERATION);
                        bValid = (boolean)FALSE;
                    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                }
#endif
            }
            if ((boolean)TRUE == bValid)
            {
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                if (Mode != Icu_Mode[u8CoreID])
#else
    if (Mode != Icu_Mode)
#endif
                {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                    for (tIdx = 0; tIdx < Icu_pConfig[u8CoreID]->tChannelCount; tIdx++)
#else
        for (tIdx = 0; tIdx < Icu_pConfig->tChannelCount; tIdx++)
#endif
                    {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[tIdx] == u8CoreID)
                        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                            const Icu_ChannelConfigType *pChConfig = &(
                                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[tIdx];
#else
            const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tIdx];
#endif
                            /* SWS_Icu_00261 */
                            if ((ICU_MODE_SLEEP == Mode) &&
                                (ICU_CHANNEL_STATE_WKUP !=
                                 Icu_GetBitChState(tIdx, ICU_CHANNEL_STATE_WKUP)))
                            {
                                /* SWS_Icu_00012,SWS_Icu_00260 */
                                Icu_HW_SetSleepMode(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
                            }
                            else if ((ICU_MODE_NORMAL == Mode) &&
                                     (ICU_CHANNEL_STATE_RUNNING ==
                                      Icu_GetBitChState(tIdx, ICU_CHANNEL_STATE_RUNNING)))
                            {
                                /* SWS_Icu_00259 */
                                if (pChConfig->eMode == ICU_MODE_SIGNAL_MEASUREMENT)
                                {
                                    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an
                                       expression should not be cast to an inappropriate essential
                                       type. reason: The program will guarantee the legality of
                                       these type conversions */
                                    Icu_SignalMeasurementModeType eMeasurementMode =
                                        (Icu_SignalMeasurementModeType)ICU_PARAM_MEASUREMENT_GET_MODE(
                                            pChConfig->u32Param);
                                    Icu_SignalMeasurementPropertyType eMesurementProperty =
                                        (Icu_SignalMeasurementPropertyType)
                                            ICU_PARAM_MEASUREMENT_GET_PROPERTY(pChConfig->u32Param);
                                    /* PRQA S 4342 --*/
                                    Icu_HW_SetNormalModeExt(pChConfig->eHwType,
                                                            pChConfig->u32ChannelOfHw,
                                                            eMesurementProperty,
                                                            Icu_aChannelActivEdge[tIdx],
                                                            eMeasurementMode);
                                }
                                else
                                {
                                    /* SWS_Icu_00011 */
                                    Icu_HW_SetNormalMode(pChConfig->eHwType,
                                                         pChConfig->u32ChannelOfHw,
                                                         Icu_aChannelActivEdge[tIdx]);
                                }
                            }
                            else
                            {
                                /* do nothing*/
                            }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                        }
#endif
                    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)

                    Icu_Mode[u8CoreID] = Mode;

#else
        Icu_Mode = Mode;
#endif
                }
#if (ICU_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
}
#endif

/* SWS_Icu_00096,SWS_Icu_00304,SWS_Icu_00306 */
#if (ICU_DISABLE_WAKEUP_API == STD_ON)
/**
 * @brief Disable the wakeup capability of a single ICU channel
 *
 * @param Channel -Numeric identifier of the ICU channel
 *
 * @implements SWS_Icu_00013,SWS_Icu_00050,SWS_Icu_00305
 */
ICU_TEXT_SECTION void Icu_DisableWakeup(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif

#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00024,SWS_Icu_00059,SWS_Icu_00387,SWDESG_ICU_010 */
    boolean bValid = Icu_ValidateWakeup(ICU_DISABLEWAKEUP_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* PRQA S 3469 ++
           This usage of a function-like macro looks like it could be replaced by an equivalent
           function call.
           REASON: Macros have higher execution efficiency
        */
        /* SWDESG_ICU_221 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
            Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_WKUP);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
}
#endif /* ICU_DISABLE_WAKEUP_API */

/* SWS_Icu_00097,SWS_Icu_00308 */
#if (ICU_ENABLE_WAKEUP_API == STD_ON)
/**
 * @brief  (re-)enable the wakeup capability of the given ICU channel
 *
 * @param Channel -Numeric identifier of the ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00307
 */
ICU_TEXT_SECTION void Icu_EnableWakeup(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00155,SWS_Icu_00156,SWS_Icu_00388,SWDESG_ICU_013,SWDESG_ICU_014 */
    boolean bValid = Icu_ValidateWakeup(ICU_ENABLEWAKEUP_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_222 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
            /* SWS_Icu_00014 */
            Icu_SetBitChState(Channel, ICU_CHANNEL_STATE_WKUP);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* ICU_ENABLE_WAKEUP_API */

/* SWS_Icu_00360,SWS_Icu_00361,SWS_Icu_00362 */
#if ((ICU_WAKEUP_FUNCTIONALITY_API == STD_ON) && (ICU_REPORT_WAKEUP_SOURCE == STD_ON) && \
     (ICU_ENABLE_WAKEUP_API == STD_ON))
/**
 * @brief Checks if a wakeup capable ICU channel is the source for a wakeup event and
 *        calls the ECU state manager service EcuM_SetWakeupEvent in case of a valid
 *        ICU channel wakeup event.
 *
 * @param WakeupSource Informatin on wakeup source to be checked.
 *
 * @implements SWS_Icu_00050,SWS_Icu_00213
 */
ICU_TEXT_SECTION void Icu_CheckWakeup(EcuM_WakeupSourceType WakeupSource)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00363 */
    boolean bValid = Icu_IsInitialized(ICU_CHECKWAKEUP_ID);
    if ((boolean)TRUE == bValid)
    {
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
        Icu_ChannelType      tIdx;
        Icu_ChannelStateType tMask = ICU_CHANNEL_IS_WAKEUP_SOURCE | ICU_CHANNEL_STATE_WKUP;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        for (tIdx = 0; tIdx < Icu_pConfig[u8CoreID]->tChannelCount; tIdx++)
#else
    for (tIdx = 0; tIdx < Icu_pConfig->tChannelCount; tIdx++)
#endif
        {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* SWDESG_ICU_223 */
            if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[tIdx] == u8CoreID)
            {
#endif
                Icu_ChannelStateType tState = Icu_GetBitChState(tIdx, tMask);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                if ((WakeupSource == (*Icu_pConfig[u8CoreID]->pChannelsConfig)[tIdx].u32WakeupSource) &&
                    (tMask == tState))
#else
        if ((WakeupSource == (*Icu_pConfig->pChannelsConfig)[tIdx].u32WakeupSource) &&
            (tMask == tState))
#endif
                { /* SWS_Icu_00055,SWS_Icu_00056,SWS_Icu_00057，SWS_Icu_00359 */
                    EcuM_SetWakeupEvent(WakeupSource);
                    Icu_ClearBitChState(tIdx, ICU_CHANNEL_IS_WAKEUP_SOURCE);
                    break;
                }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
}
#endif /* ICU_WAKEUP_FUNCTIONALITY_API && ICU_REPORT_WAKEUP_SOURCE  &&  ICU_ENABLE_WAKEUP_API */

/**
 * @brief set the activation-edge for the given channel
 *
 * @param Channel Numeric identifier of the ICU channel
 * @param Activation Type of activation (if supported by hardware)
 *                   - ICU_RISING_EDGE
 *                   - ICU_FALLING_EDGE
 *                   - ICU_BOTH_EDGES
 *
 * @implements SWS_Icu_00050,SWS_Icu_00309,SWDESG_ICU_020
 */
ICU_TEXT_SECTION void Icu_SetActivationCondition(Icu_ChannelType    Channel,
                                                 Icu_ActivationType Activation)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWDESG_ICU_017 */
    boolean bValid = Icu_IsInitialized(ICU_SETACTIVATIONCONDITION_ID);

    if ((boolean)TRUE == bValid)
    {
        /* SWS_Icu_00161 */
        if ((ICU_RISING_EDGE != Activation) && (ICU_FALLING_EDGE != Activation) &&
            (ICU_BOTH_EDGES != Activation))
        {
            /* Icu_SetActivationCondition shall check the parameter Activation. The
            function Icu_SetActivationCondition shall raise the error
            ICU_E_PARAM_ACTIVATION if Activation is invalid but only for the requested ICU
            channel
            */
            /* SWS_Icu_00043,SWDESG_ICU_018 */
            (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                  (uint8)ICU_INSTANCE_ID,
                                  (uint8)ICU_SETACTIVATIONCONDITION_ID,
                                  (uint8)ICU_E_PARAM_ACTIVATION);
        }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
        else if (Channel >= Icu_pConfig->tChannelCount)
#endif
        {
            /* SWS_Icu_00159 */
            (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                  (uint8)ICU_INSTANCE_ID,
                                  (uint8)ICU_SETACTIVATIONCONDITION_ID,
                                  (uint8)ICU_E_PARAM_CHANNEL);
        }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        else if ((ICU_MODE_SIGNAL_EDGE_DETECT !=
                  (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode) &&
                 (ICU_MODE_TIMESTAMP != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode) &&
                 (ICU_MODE_EDGE_COUNTER != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode))
#else
        else if ((ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode) &&
                 (ICU_MODE_TIMESTAMP != (*Icu_pConfig->pChannelsConfig)[Channel].eMode) &&
                 (ICU_MODE_EDGE_COUNTER != (*Icu_pConfig->pChannelsConfig)[Channel].eMode))
#endif
        {
            /* SWS_Icu_00090,SWDESG_ICU_019 */
            (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                  (uint8)ICU_INSTANCE_ID,
                                  (uint8)ICU_SETACTIVATIONCONDITION_ID,
                                  (uint8)ICU_E_PARAM_CHANNEL);
        }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
        {
            (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                  (uint8)ICU_INSTANCE_ID,
                                  (uint8)ICU_SETACTIVATIONCONDITION_ID,
                                  (uint8)ICU_E_PARAM_PARTITION);
        }
#endif
        else
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* SWDESG_ICU_224 */
            if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
            {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                const Icu_ChannelConfigType *pChConfig = &(
                    *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];

#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
                /* SWS_Icu_00139 */
                Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_ACTIVE);
                SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_03();
                Icu_aChannelActivEdge[Channel] = Activation;
                SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_03();
                /* SWS_Icu_00063 */
                Icu_HW_SetActivationCondition(pChConfig->eHwType,
                                              pChConfig->u32ChannelOfHw,
                                              Icu_aChannelActivEdge[Channel]);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

/**
 * @brief Disable the notification of a channel
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00009,SWS_Icu_00050,SWS_Icu_00310,SWDESG_ICU_023
 */
ICU_TEXT_SECTION void Icu_DisableNotification(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00160,SWS_Icu_00389,SWDESG_ICU_021 */
    boolean bValid = Icu_ValidateNotification(ICU_DISABLENOTIFICATION_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_225 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
            /* SWS_Icu_00042,SWS_Icu_00217 */
            Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_NOTIFICATION);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

/**
 * @brief Enable the notification on the given channel.
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00010,SWS_Icu_00050,SWS_Icu_00311,SWDESG_ICU_026
 */
ICU_TEXT_SECTION void Icu_EnableNotification(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00390,SWDESG_ICU_024 */
    boolean bValid = Icu_ValidateNotification(ICU_ENABLENOTIFICATION_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_226 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
            Icu_SetBitChState(Channel, ICU_CHANNEL_STATE_NOTIFICATION);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

/* SWS_Icu_00122,SWS_Icu_00315 */
#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief Returns the status of the ICU input
 *
 * @param Channel ICU channel
 * @return Icu_InputStateType ICU_ACTIVE: An activation edge has been detected
 *                            ICU_IDLE: No activation edge has been detected since the
 *                            last call of Icu_GetInputState() or Icu_Init().
 *
 * @implements SWS_Icu_00050,SWS_Icu_00312,SWDESG_ICU_029
 */
ICU_TEXT_SECTION Icu_InputStateType Icu_GetInputState(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
    /* SWS_Icu_00049,SWS_Icu_00313 */
    Icu_InputStateType tRet = ICU_IDLE;
#if (ICU_DEV_ERROR_DETECT == STD_ON)
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022,SWS_Icu_00391,SWDESG_ICU_027 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)ICU_GETINPUTSTATE_ID,
                              (uint8)ICU_E_UNINIT);
    }
/* Icu_GetInputState shall check the parameter Channel and shall raise the error
   ICU_E_PARAM_CHANNEL if Channel is invalid */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)ICU_GETINPUTSTATE_ID,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
    /* invalid identifier or channel not configured for modes ICU_MODE_SIGNAL_EDGE_DETECT or
    ICU_MODE_SIGNAL_MEASUREMENT*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (
        (ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode) &&
        (ICU_MODE_SIGNAL_MEASUREMENT != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode))
#else
    else if ((ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode) &&
             (ICU_MODE_SIGNAL_MEASUREMENT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode))
#endif
    {
        /* SWS_Icu_00030,SWS_Icu_00162,SWDESG_ICU_028 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)ICU_GETINPUTSTATE_ID,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)ICU_GETINPUTSTATE_ID,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_227 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif

            if (ICU_CHANNEL_STATE_ACTIVE == Icu_GetBitChState(Channel, ICU_CHANNEL_STATE_ACTIVE))
            {
                tRet = ICU_ACTIVE;
                /* SWS_Icu_00032,SWS_Icu_00314 */
                Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_ACTIVE);
            }
            else if (ICU_MODE_SIGNAL_EDGE_DETECT == pChConfig->eMode)
            {
                tRet = Icu_HW_GetInputState(pChConfig->eHwType,
                                            pChConfig->u32ChannelOfHw,
                                            Icu_aChannelActivEdge[Channel]);
            }
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
               to an inappropriate essential type. reason: The program will guarantee the legality
               of these type conversions */
            else if (
                (ICU_MODE_SIGNAL_MEASUREMENT == pChConfig->eMode) &&
                (ICU_MEASUREMENT_HW_DIRECT ==
                 (Icu_SignalMeasurementModeType)(ICU_PARAM_MEASUREMENT_GET_MODE(pChConfig->u32Param))))
            /* PRQA S 4342 --*/
            {
                tRet = Icu_HW_GetInputHwState(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
            }
            else
            {
                /*do nothing*/
            }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return tRet;
}
#endif /* ICU_GET_INPUT_STATE_API */

/* SWS_Icu_00098,SWS_Icu_00321 */
#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief start the capturing of timer values on the edges
 *
 * @param Channel           ICU channel
 * @param BufferPtr         Pointer to the buffer-array where the timestamp values shall be
 *                          placed
 * @param BufferSize        Size of the external buffer (number of entries)
 * @param NotifyInterval    Notification interval (number of events)
 *
 * @implements SWS_Icu_00050,SWS_Icu_00316,SWS_Icu_00378,SWDESG_ICU_035
 */
ICU_TEXT_SECTION void Icu_StartTimestamp(Icu_ChannelType Channel,
                                         Icu_ValueType  *BufferPtr,
                                         uint16          BufferSize,
                                         uint16          NotifyInterval)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00066,SWS_Icu_00163,SWS_Icu_00392, */
    boolean bValid = Icu_ValidateTimestamp(ICU_STARTTIMESTAMP_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
        /* SWDESG_ICU_032 */
        bValid = Icu_ValidateParamPtr(ICU_STARTTIMESTAMP_ID, BufferPtr);
        if ((boolean)TRUE == bValid)
        {
            /*  The function Icu_StartTimestamp shall raise the error
                ICU_E_PARAM_BUFFER_SIZE if BufferSize is invalid.*/
            if ((uint16)0U == BufferSize)
            {
                /* SWS_Icu_00108,SWDESG_ICU_033 */
                (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                      (uint8)ICU_INSTANCE_ID,
                                      (uint8)ICU_STARTTIMESTAMP_ID,
                                      (uint8)ICU_E_PARAM_BUFFER_SIZE);
            }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            else if ((NULL_PTR !=
                      (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].pChannelNotification) &&
                     (NotifyInterval == (uint16)0U))
#else
            else if ((NULL_PTR != (*Icu_pConfig->pChannelsConfig)[Channel].pChannelNotification) &&
                     (NotifyInterval == (uint16)0U))
#endif
            {
                /* SWS_Icu_00354,SWDESG_ICU_034 */
                (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                      (uint8)ICU_INSTANCE_ID,
                                      (uint8)ICU_STARTTIMESTAMP_ID,
                                      (uint8)ICU_E_PARAM_NOTIFY_INTERVAL);
            }
            else
            {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                /* SWDESG_ICU_228 */
                if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
                {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                    const Icu_ChannelConfigType *pChConfig = &(
                        *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
                    /* Time stamp is running */
                    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_02();
                    {
                        Icu_SetBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
                        Icu_aChannelWorkState[Channel].tTimeStamp.pBuffer       = BufferPtr;
                        Icu_aChannelWorkState[Channel].tTimeStamp.tBufferSize   = BufferSize;
                        Icu_aChannelWorkState[Channel].tTimeStamp.tBufferNotify = NotifyInterval;
                        Icu_aChannelWorkState[Channel].tTimeStamp.tBufferIndex  = 0;
                        Icu_aChannelWorkState[Channel].tTimeStamp.tNotifyCount  = 0;
                    }
                    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_02();
#if (ICU_TIMESTAMP_DMA == STD_ON) && (ICU_TIMESTAMP_DMACHANNEL_COUNT > 0)
                    if (pChConfig->bChannelDmaEn == TRUE)
                    {
                        if (ICU_DMA_CHANNEL_STATE_ACTIVE ==
                            Icu_aTimestampDmachannelState[pChConfig->u8DmachannelRef].eDmaChannelState)
                        {
#if (ICU_DEV_ERROR_DETECT == STD_ON)
                            /* SWS_Icu_91001,FUNC_Icu_0035 */
                            Det_ReportRuntimeError((uint16)ICU_MODULE_ID,
                                                   (uint8)ICU_INSTANCE_ID,
                                                   (uint8)ICU_STARTTIMESTAMP_ID,
                                                   (uint8)ICU_E_PARAM_DMACHANNEL_BUSY);
#endif
                        }
                        else
                        {

                            Icu_aTimestampDmachannelState[(pChConfig->u8DmachannelRef)].eDmaChannelState =
                                ICU_DMA_CHANNEL_STATE_ACTIVE;
                            Icu_aTimestampDmachannelState[(pChConfig->u8DmachannelRef)].u16IcuChannel =
                                Channel;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                            uint8 u8Dmachannel = (*(
                                Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                                                     .u8DmaHwChannel;
                            uint8 u8DmaInstance = (*(
                                Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                                                      .eDmaInstance;
#else
                            uint8 u8Dmachannel =
                                (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                                    .u8DmaHwChannel;
                            uint8 u8DmaInstance =
                                (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                                    .eDmaInstance;
#endif
                            uint32 u32SrcAddr = Icu_HW_GetSrcAddr((Icu_HwType)pChConfig->eHwType,
                                                                  (uint8)pChConfig->u32ChannelOfHw);
                            Dma_ChannelType Icu_TimestampAttr;
                            Icu_TimestampAttr.s32DmaSLAST = (sint32)0U;
                            Icu_TimestampAttr.s32DmaDLAST = (sint32)0U;
                            Icu_TimestampAttr.bDmaSrcCircularBufferEn =
                                (boolean)FALSE; /* no source address modulo */
                            Icu_TimestampAttr.bDmaDestCircularBufferEn =
                                (boolean)FALSE; /* no dest address modulo   */
                            Icu_TimestampAttr.bDmaAutoStopEnable = (boolean)TRUE;
                            Icu_TimestampAttr.bDmaSILOE =
                                (boolean)FALSE; /* Source Inner Loop Offset Enable */
                            Icu_TimestampAttr.bDmaDILOE = (boolean)FALSE;
                            Icu_TimestampAttr.s32DmaILOFF =
                                (uint32)0U; /* a sign-extended offset applied to the source or
                                               destination address to form the next-state value
                                               after the inner loop completes */

                            Icu_TimestampAttr.eDmaSSIZE = DMA_TRAN_SIZE_4B;
                            Icu_TimestampAttr.eDmaDSIZE = DMA_TRAN_SIZE_4B;

                            Icu_TimestampAttr.u32DmaSADDR = u32SrcAddr;
                            Icu_TimestampAttr.u32DmaDADDR = (uint32)BufferPtr;

                            Icu_TimestampAttr.u32DmaNBYTES = 4U;

                            Icu_TimestampAttr.s16SrcDataOffset  = 0;
                            Icu_TimestampAttr.s16DestDataOffset = 4;
                            if ((NotifyInterval >= BufferSize) || (NotifyInterval == (uint16)0U))
                            {
                                Icu_TimestampAttr.u16DmaOuterLoopCounter = BufferSize;
                            }
                            else
                            {
                                Icu_TimestampAttr.u16DmaOuterLoopCounter = NotifyInterval;
                            }

                            (void)Dma_ConfigChannel((Dma_InstanceType)u8DmaInstance,
                                                    u8Dmachannel,
                                                    &Icu_TimestampAttr);
                            /*Enable Dma request*/
                            Dma_EnableHwRequest((Dma_InstanceType)u8DmaInstance, u8Dmachannel);
                            /* SWS_Icu_00317 */
                            Icu_HW_StartTimestamp(pChConfig->eHwType,
                                                  pChConfig->u32ChannelOfHw,
#if (ICU_TIMESTAMP_DMA == STD_ON)
                                                  pChConfig->bChannelDmaEn,
#endif /*ICU_TIMESTAMP_DMA*/
                                                  Icu_aChannelActivEdge[Channel]);
                        }
                    }
                    else
#endif /*ICU_TIMESTAMP_DMA*/
                    {
                        /* SWS_Icu_00317 */
                        Icu_HW_StartTimestamp(pChConfig->eHwType,
                                              pChConfig->u32ChannelOfHw,
#if (ICU_TIMESTAMP_DMA == STD_ON)
                                              pChConfig->bChannelDmaEn,
#endif /*ICU_TIMESTAMP_DMA*/
                                              Icu_aChannelActivEdge[Channel]);
                    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
#endif
}
#endif /* ICU_TIMESTAMP_API == STD_ON*/

/* SWS_Icu_00099,SWS_Icu_00323 */
#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief Stop the timestamp measurement of the given channel
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00322,SWDESG_ICU_039
 */
ICU_TEXT_SECTION void Icu_StopTimestamp(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00164,SWS_Icu_00165,SWS_Icu_00393, */
    boolean bValid = Icu_ValidateTimestamp(ICU_STOPTIMESTAMP_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
        if (ICU_CHANNEL_STATE_RUNNING != Icu_GetBitChState(Channel, ICU_CHANNEL_STATE_RUNNING))
        {
            /* SWS_Icu_00166,SWS_Icu_91001,SWS_Icu_91004,SWDESG_ICU_038 */
            (void)Det_ReportRuntimeError((uint16)ICU_MODULE_ID,
                                         (uint8)ICU_INSTANCE_ID,
                                         (uint8)ICU_STOPTIMESTAMP_ID,
                                         (uint8)ICU_E_NOT_STARTED);
        }
        else
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* SWDESG_ICU_229 */
            if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
            {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                const Icu_ChannelConfigType *pChConfig = &(
                    *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
#if (ICU_TIMESTAMP_DMA == STD_ON) && (ICU_TIMESTAMP_DMACHANNEL_COUNT > 0)

#if (ICU_MULTICORE_SUPPORT == STD_ON)
                uint8 u8Dmachannel =
                    (*(Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                        .u8DmaHwChannel;
                uint8 u8DmaInstance =
                    (*(Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                        .eDmaInstance;
#else
                uint8 u8Dmachannel =
                    (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].u8DmaHwChannel;
                uint8 u8DmaInstance =
                    (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].eDmaInstance;
#endif
                Dma_DisableHwRequest((Dma_InstanceType)u8DmaInstance, u8Dmachannel);

                Icu_aTimestampDmachannelState[(pChConfig->u8DmachannelRef)].eDmaChannelState =
                    ICU_DMA_CHANNEL_STATE_IDLE;
#endif
                /* SWS_Icu_00067 */
                Icu_HW_StopTimeStamp(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
                Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}
#endif /* ICU_TIMESTAMP_API == STD_ON*/

/* SWS_Icu_00100,SWS_Icu_00325 */
#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief Read the timestamp index of the given channel
 *
 * @param Channel  -ICU channel
 * @return         Timestamp index of the given channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00324,SWDESG_ICU_042
 */
ICU_TEXT_SECTION Icu_IndexType Icu_GetTimestampIndex(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
    /* SWS_Icu_00107,SWS_Icu_00169.SWS_Icu_00170,SWS_Icu_00394 */
    Icu_IndexType tStampIndex = 0u;
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    boolean bValid = Icu_ValidateTimestamp(ICU_GETTIMESTAMPINDEX_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_242 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
            /* SWS_Icu_00135 */
            if (NULL_PTR != Icu_aChannelWorkState[Channel].tTimeStamp.pBuffer)
            {
#if (ICU_TIMESTAMP_DMA == STD_ON)
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                const Icu_ChannelConfigType *pChConfig = &(
                    *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
                const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
                if (TRUE == pChConfig->bChannelDmaEn)
                {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                    uint8 u8Dmachannel =
                        (*(Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                            .u8DmaHwChannel;
                    uint8 u8DmaInstance =
                        (*(Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)]
                            .eDmaInstance;
#else
                    uint8 u8Dmachannel =
                        (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].u8DmaHwChannel;
                    uint8 u8DmaInstance =
                        (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].eDmaInstance;
#endif

                    uint16 offestIndex =
                        Dma_GetBeginOuterLoopCounter((Dma_InstanceType)u8DmaInstance, u8Dmachannel);
                    offestIndex = offestIndex -
                                  Dma_GetCurrentOuterLoopCounter((Dma_InstanceType)u8DmaInstance,
                                                                 u8Dmachannel);
                    tStampIndex = Icu_aChannelWorkState[Channel].tTimeStamp.tBufferIndex +
                                  (Icu_IndexType)offestIndex;
                }
                else
                {
#endif
                    /* SWS_Icu_00071 */
                    tStampIndex = Icu_aChannelWorkState[Channel].tTimeStamp.tBufferIndex;
#if (ICU_TIMESTAMP_DMA == STD_ON)
                }
#endif
            }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return tStampIndex;
}
#endif /* ICU_TIMESTAMP_API == STD_ON*/

/* SWS_Icu_00101 */
#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Reset the value of the counted edges to zero
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00326,SWS_Icu_00330,SWS_Icu_00332,SWDESG_ICU_045
 */
ICU_TEXT_SECTION void Icu_ResetEdgeCount(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00171,SWS_Icu_00395,SWDESG_ICU_043 */
    boolean bValid = Icu_ValidateEdgeCount(ICU_RESETEDGECOUNT_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_230 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            /* SWS_Icu_00072 */
            SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_09();
            Icu_aChannelWorkState[Channel].tEdgeCount = 0;
            SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_09();
            Icu_HW_ResetEdgeNumbers(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* ICU_EDGE_COUNT_API == STD_ON */

/* SWS_Icu_00102,SWS_Icu_00329 */
#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Enable the counting of edges of the given channel.
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00078,SWS_Icu_00328,SWDESG_ICU_048
 */
ICU_TEXT_SECTION void Icu_EnableEdgeCount(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00074,SWS_Icu_00172,SWS_Icu_00396 */
    boolean bValid = Icu_ValidateEdgeCount(ICU_ENABLEEDGECOUNT_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_231 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            Icu_SetBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
            SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_10();
            Icu_aChannelWorkState[Channel].tEdgeCount = 0;
            SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_10();
            /* SWS_Icu_00073 */
            Icu_HW_EnableEdgeCount(pChConfig->eHwType,
                                   pChConfig->u32ChannelOfHw,
                                   Icu_aChannelActivEdge[Channel]);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* ICU_EDGE_COUNT_API */

/* SWS_Icu_00103,SWS_Icu_00331 */
#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Disable the counting of edges of the given channel
 *
 * @param Channel -ICU channel
 *
 *  @implements SWS_Icu_00050,SWS_Icu_00330,SWDESG_ICU_057
 */
ICU_TEXT_SECTION void Icu_DisableEdgeCount(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00173,SWS_Icu_00399 */
    boolean bValid = Icu_ValidateEdgeCount(ICU_DISABLEEDGECOUNT_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_233 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            /*Save Hardware Count when Disable Edge Count*/
            Icu_EdgeNumberType tEdgeNum = 0;
            boolean            bHwSupport =
                Icu_HW_GetEdgeNumbers(pChConfig->eHwType, pChConfig->u32ChannelOfHw, &tEdgeNum);
            if ((boolean)TRUE == bHwSupport)
            {
                Icu_aChannelWorkState[Channel].tEdgeCount = tEdgeNum;
            }
            /* SWS_Icu_00079 */
            Icu_HW_DisableEdgeCount(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
            Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* ICU_EDGE_COUNT_API */

/* SWS_Icu_00104,SWS_Icu_00333 */
#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Read the number of counted edges
 *
 * @param Channel  -ICU channel
 * @return         number of counted edges
 *
 * @implements SWS_Icu_00050,SWDESG_ICU_060
 */
ICU_TEXT_SECTION Icu_EdgeNumberType Icu_GetEdgeNumbers(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
    /* SWS_Icu_00175 */
    Icu_EdgeNumberType tEdgeNum = 0;
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00174,SWS_Icu_00400 */
    boolean bValid = Icu_ValidateEdgeCount(ICU_GETEDGENUMBERS_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_234 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            boolean bHwSupport =
                Icu_HW_GetEdgeNumbers(pChConfig->eHwType, pChConfig->u32ChannelOfHw, &tEdgeNum);
            if ((boolean)TRUE == bHwSupport)
            {
                Icu_aChannelWorkState[Channel].tEdgeCount = tEdgeNum;
            }
            else
            {
                /* SWS_Icu_00080 */
                tEdgeNum = Icu_aChannelWorkState[Channel].tEdgeCount;
            }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif

#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif /*ICU_DEV_ERROR_DETECT == STD_ON*/
    return tEdgeNum;
}
#endif

/* SWS_Icu_00369,SWS_Icu_00370,SWS_Icu_00374,SWS_Icu_00375 */
#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief enable / re-enable the detection of edges of the given channel
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00368,SWDESG_ICU_051
 */
ICU_TEXT_SECTION void Icu_EnableEdgeDetection(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00367,SWS_Icu_00371,SWS_Icu_00397 */
    boolean bValid = Icu_ValidateEdgeDetect(ICU_ENABLEEDGEDETECTION_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            Icu_SetBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
            /* SWS_Icu_00365,SWS_Icu_00366 */
            Icu_HW_EnableEdgeDetection(pChConfig->eHwType,
                                       pChConfig->u32ChannelOfHw,
                                       Icu_aChannelActivEdge[Channel]);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

/**
 * @brief Disable the detection of edges of the given channel
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00373
 */
ICU_TEXT_SECTION void Icu_DisableEdgeDetection(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00376,SWS_Icu_00398 */
    boolean bValid = Icu_ValidateEdgeDetect(ICU_DISABLEEDGEDETECTION_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_232 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            /* SWS_Icu_00372 */
            Icu_HW_DisableEdgeDetection(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
            Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

#endif /* ICU_EDGE_DETECT_API */

/* SWS_Icu_00335 */
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Start the measurement of signals
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00334,
 */
ICU_TEXT_SECTION void Icu_StartSignalMeasurement(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00176,SWS_Icu_00401 */
    boolean bValid = Icu_ValidateMeasurement(ICU_STARTSIGNALMEASUREMENT_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_235*/
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
               to an inappropriate essential type. reason: The program will guarantee the legality
               of these type conversions */
            Icu_SignalMeasurementModeType eMeasurementMode =
                (Icu_SignalMeasurementModeType)ICU_PARAM_MEASUREMENT_GET_MODE(pChConfig->u32Param);
            Icu_SignalMeasurementPropertyType eMesurementProperty =
                (Icu_SignalMeasurementPropertyType)ICU_PARAM_MEASUREMENT_GET_PROPERTY(
                    pChConfig->u32Param);
            /* PRQA S 4342 --*/
            Icu_SetBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
            Icu_aChannelActivEdge[Channel] = pChConfig->eActivationEdge;
            SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_08();
            if (((eMesurementProperty == ICU_PERIOD_TIME) || (eMesurementProperty == ICU_DUTY_CYCLE)) &&
                (pChConfig->eActivationEdge == ICU_BOTH_EDGES))
            {
                Icu_InputLevelType eCurrentLevel = ICU_INPUT_LOW;
                /* PRQA S 3200 ++ #Misra-C:2012 Rule-17.1 The value returned by a function having
                 * non-void return type shall be used. Reason: The result data is used in some case */
                Icu_HW_GetInputLevel(pChConfig->eHwType, pChConfig->u32ChannelOfHw, &eCurrentLevel);
                /* PRQA S 3200 -- */
                if (eCurrentLevel == ICU_INPUT_LOW)
                {
                    Icu_aChannelActivEdge[Channel] = ICU_RISING_EDGE;
                }
                else
                {
                    Icu_aChannelActivEdge[Channel] = ICU_FALLING_EDGE;
                }
            }
            if (eMeasurementMode == ICU_MEASUREMENT_SINGLE_CAPTURE)
            {
                Icu_aChannelWorkState[Channel].tMeasurement.tActivePulseWidth = 0U;
                Icu_aChannelWorkState[Channel].tMeasurement.tPeriod           = 0U;
                Icu_aChannelWorkState[Channel].tMeasurement.eSignalMeasurementSeq =
                    ICU_SIGNAL_MSMT_SEQ_NOT_STARTED;
                Icu_aChannelWorkState[Channel].tMeasurement.tSigMsmtActive = 0U;
                Icu_aChannelWorkState[Channel].tMeasurement.tSigMsmtStart  = 0U;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
                Icu_aChannelWorkState[Channel].tMeasurement.u32ChannelOFCount      = 0U;
                Icu_aChannelWorkState[Channel].tMeasurement.u32ChannelOFExCount    = 0U;
                Icu_aChannelWorkState[Channel].tMeasurement.u32ActiveOverflowCount = 0U;
                Icu_aChannelWorkState[Channel].tMeasurement.u32PeriodOverflowCount = 0U;
#endif
                Icu_aChannelWorkState[Channel].tMeasurement.tChannelOverflowCount =
                    Icu_HW_GetOverflowValue(pChConfig->eHwType);
            }
            else if (eMeasurementMode == ICU_MEASUREMENT_DUAL_CAPTURE)
            {
                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32MeasFinishCount = 0;
            }
            else /*ICU_MEASUREMENT_HW_DIRECT*/
            {
                /*Do nothing*/
            }

            SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_08();
            /* SWS_Icu_00088,SWS_Icu_00140,SWDESG_ICU_063 */
            Icu_HW_StartSignalMeasurement(pChConfig->eHwType,
                                          pChConfig->u32ChannelOfHw,
                                          eMesurementProperty,
                                          Icu_aChannelActivEdge[Channel],
                                          eMeasurementMode);
            /* SWS_Icu_00146 */
            Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_ACTIVE);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /*ICU_SIGNAL_MEASUREMENT_API == STD_ON*/

/* SWS_Icu_00145,SWS_Icu_00336,SWS_Icu_00337 */
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Stop the measurement of signals of the given channel
 *
 * @param Channel -ICU channel
 *
 * @implements SWS_Icu_00050,SWS_Icu_00143,SWDESG_ICU_066
 */
ICU_TEXT_SECTION void Icu_StopSignalMeasurement(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00177,SWS_Icu_00402 */
    boolean bValid = Icu_ValidateMeasurement(ICU_STOPSIGNALMEASUREMENT_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_236 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            Icu_HW_StopSignalMeasurement(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
            Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_RUNNING);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif

/* SWS_Icu_00105,SWS_Icu_00341 */
#if (ICU_GET_TIME_ELAPSED_API == STD_ON)
/**
 * @brief read the elapsed Signal Low ,High or Period Time for the given channel
 *
 * @param Channel ICU channel
 * @return Icu_ValueType
 *
 * @implements SWS_Icu_00050,SWS_Icu_00338,SWDESG_ICU_069
 */
ICU_TEXT_SECTION Icu_ValueType Icu_GetTimeElapsed(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
    Icu_ValueType tTimeElapsed = 0u;
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00136,SWS_Icu_00178,SWS_Icu_00403 */
    boolean bValid = Icu_ValidateMeasurement(ICU_GETTIMEELAPSED_ID, Channel);
    /* SWS_Icu_00179 */
    if ((boolean)TRUE == bValid)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_237 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
            {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                const Icu_ChannelConfigType *pChConfig = &(
                    *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
        const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
                uint32 u32MeasurementPeroperty = ICU_PARAM_MEASUREMENT_GET_PROPERTY(
                    pChConfig->u32Param);
                /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be
                   cast to an inappropriate essential type. reason: The program will guarantee the
                   legality of these type conversions */
                Icu_SignalMeasurementModeType eMeasurementMode = (Icu_SignalMeasurementModeType)
                    ICU_PARAM_MEASUREMENT_GET_MODE(pChConfig->u32Param);
                /* PRQA S 4342 --*/
                /* SWS_Icu_00081,SWS_Icu_00082,SWS_Icu_00083 */
                if (eMeasurementMode == ICU_MEASUREMENT_SINGLE_CAPTURE)
                {
                    if ((uint32)ICU_PERIOD_TIME == u32MeasurementPeroperty)
                    {
                        /* SWS_Icu_00340 */
                        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_05();
                        tTimeElapsed = Icu_aChannelWorkState[Channel].tMeasurement.tPeriod;
                        Icu_aChannelWorkState[Channel].tMeasurement.tPeriod = (Icu_ValueType)0U;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
                        tTimeElapsed +=
                            Icu_aChannelWorkState[Channel].tMeasurement.u32PeriodOverflowCount *
                            Icu_aChannelWorkState[Channel].tMeasurement.tChannelOverflowCount;
                        Icu_aChannelWorkState[Channel].tMeasurement.u32PeriodOverflowCount =
                            (Icu_ValueType)0U;
#endif
                        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_05();
                    }
                    else
                    {
                        /* SWS_Icu_00340 */
                        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_05();
                        tTimeElapsed = Icu_aChannelWorkState[Channel].tMeasurement.tActivePulseWidth;
                        Icu_aChannelWorkState[Channel].tMeasurement.tActivePulseWidth =
                            (Icu_ValueType)0U;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
                        tTimeElapsed +=
                            Icu_aChannelWorkState[Channel].tMeasurement.u32ActiveOverflowCount *
                            Icu_aChannelWorkState[Channel].tMeasurement.tChannelOverflowCount;
                        Icu_aChannelWorkState[Channel].tMeasurement.u32ActiveOverflowCount =
                            (Icu_ValueType)0U;
#endif
                        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_05();
                    }
                }
                else if (eMeasurementMode == ICU_MEASUREMENT_HW_DIRECT)
                {

                    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_05();
                    if ((uint32)ICU_PERIOD_TIME == u32MeasurementPeroperty)
                    {
                        tTimeElapsed = Icu_HW_GetHwMeasurementPeriodValue(pChConfig->eHwType,
                                                                          pChConfig->u32ChannelOfHw);
                        (void)Icu_HW_GetHwMeasurementTimeValue(pChConfig->eHwType,
                                                               pChConfig->u32ChannelOfHw);
                    }
                    else /*Time Elapsed*/
                    {
                        tTimeElapsed = Icu_HW_GetHwMeasurementTimeValue(pChConfig->eHwType,
                                                                        pChConfig->u32ChannelOfHw);
                    }
                    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_05();
                }
                else if (eMeasurementMode == ICU_MEASUREMENT_DUAL_CAPTURE)
                {
                    /* SWS_Icu_00340 */
                    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_05();
                    if (Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32MeasFinishCount > 0U)
                    {
                        Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32MeasFinishCount = 0U;
                        if (Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32FirstEdgeCurrent >=
                            Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent)
                        {
                            tTimeElapsed = Icu_HW_GetOverflowValue(pChConfig->eHwType);
                            tTimeElapsed =
                                tTimeElapsed -
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32FirstEdgeCurrent +
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent;
                        }
                        else
                        {
                            tTimeElapsed =
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent -
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32FirstEdgeCurrent;
                        }
                    }
                    else
                    {
                        /* SWS_Icu_00339 */
                        tTimeElapsed = 0U;
                    }
                    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_05();
                }
                else
                {
                    /* for MISRA */
                }
                Icu_ClearBitChState(Channel, ICU_CHANNEL_STATE_ACTIVE);
            }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return tTimeElapsed;
}
#endif /* ICU_GET_TIME_ELAPSED_API */

/* SWS_Icu_00106,SWS_Icu_00345 */
#if (ICU_GET_DUTY_CYCLE_VALUES_API == STD_ON)
/**
 * @brief Read the coherent active time and period time for the given ICU
 *        Channel
 * @param Channel ICU channel
 * @param DutyCycleValues Pointer to a buffer where the results (high time and period time)
 *                        shall be placed.
 *
 * @implements  SWS_Icu_00050,SWS_Icu_00084,SWS_Icu_00342,SWDESG_ICU_077
 */
ICU_TEXT_SECTION void Icu_GetDutyCycleValues(Icu_ChannelType    Channel,
                                             Icu_DutyCycleType *DutyCycleValues)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Icu_00180,SWS_Icu_00404 */
    boolean bValid = Icu_ValidateMeasurement(ICU_GETDUTYCYCLEVALUES_ID, Channel);
    if ((boolean)TRUE == bValid)
    {
        /* SWS_Icu_00187,SWDESG_ICU_072 */
        bValid = Icu_ValidateParamPtr(ICU_GETDUTYCYCLEVALUES_ID, DutyCycleValues);
        if ((boolean)TRUE == bValid)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* SWDESG_ICU_238 */
            if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
            {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
                const Icu_ChannelConfigType *pChConfig = &(
                    *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
                /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be
                   cast to an inappropriate essential type. reason: The program will guarantee the
                   legality of these type conversions */
                Icu_SignalMeasurementModeType eMeasurementMode = (Icu_SignalMeasurementModeType)
                    ICU_PARAM_MEASUREMENT_GET_MODE(pChConfig->u32Param);
                /* PRQA S 4342 --*/
                if (eMeasurementMode == ICU_MEASUREMENT_SINGLE_CAPTURE)
                {
                    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_06();
                    if ((Icu_ValueType)0U != Icu_aChannelWorkState[Channel].tMeasurement.tPeriod)
                    {
                        DutyCycleValues->ActiveTime =
                            (Icu_ValueType)Icu_aChannelWorkState[Channel].tMeasurement.tActivePulseWidth;
                        DutyCycleValues->PeriodTime =
                            (Icu_ValueType)Icu_aChannelWorkState[Channel].tMeasurement.tPeriod;
                        /* SWS_Icu_00344 */
                        Icu_aChannelWorkState[Channel].tMeasurement.tActivePulseWidth =
                            (Icu_ValueType)0U;
                        Icu_aChannelWorkState[Channel].tMeasurement.tPeriod = (Icu_ValueType)0U;
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
                        DutyCycleValues->ActiveTime +=
                            Icu_aChannelWorkState[Channel].tMeasurement.u32ActiveOverflowCount *
                            Icu_aChannelWorkState[Channel].tMeasurement.tChannelOverflowCount;
                        DutyCycleValues->PeriodTime +=
                            Icu_aChannelWorkState[Channel].tMeasurement.u32PeriodOverflowCount *
                            Icu_aChannelWorkState[Channel].tMeasurement.tChannelOverflowCount;
                        Icu_aChannelWorkState[Channel].tMeasurement.u32PeriodOverflowCount =
                            (Icu_ValueType)0U;
                        Icu_aChannelWorkState[Channel].tMeasurement.u32ActiveOverflowCount =
                            (Icu_ValueType)0U;
#endif
                    }
                    else
                    {
                        /* SWS_Icu_00343 */
                        DutyCycleValues->ActiveTime = (Icu_ValueType)0U;
                        DutyCycleValues->PeriodTime = (Icu_ValueType)0U;
                    }
                    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_06();
                }
                else if (eMeasurementMode == ICU_MEASUREMENT_DUAL_CAPTURE)
                {
                    Icu_ValueType u32OverflowCount = Icu_HW_GetOverflowValue(pChConfig->eHwType);
                    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_06();
                    if (Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32MeasFinishCount > 1u)
                    {
                        Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32MeasFinishCount = 0;

                        if (Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgePre >=
                            Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent)
                        {
                            DutyCycleValues->PeriodTime =
                                u32OverflowCount -
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgePre +
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent;
                        }
                        else
                        {
                            DutyCycleValues->PeriodTime =
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent -
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgePre;
                        }

                        if (Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32FirstEdgeCurrent >=
                            Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent)
                        {
                            DutyCycleValues->ActiveTime =
                                u32OverflowCount -
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32FirstEdgeCurrent +
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent;
                        }
                        else
                        {
                            DutyCycleValues->ActiveTime =
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32SecondEdgeCurrent -
                                Icu_aChannelWorkState[Channel].tDualCaptureMeas.u32FirstEdgeCurrent;
                        }
                    }
                    else
                    {
                        DutyCycleValues->ActiveTime = (Icu_ValueType)0U;
                        DutyCycleValues->PeriodTime = (Icu_ValueType)0U;
                    }
                    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_06();
                }
                else if (eMeasurementMode == ICU_MEASUREMENT_HW_DIRECT)
                {
                    DutyCycleValues->PeriodTime = Icu_HW_GetHwMeasurementPeriodValue(
                        pChConfig->eHwType,
                        pChConfig->u32ChannelOfHw);
                    DutyCycleValues->ActiveTime = Icu_HW_GetHwMeasurementTimeValue(
                        pChConfig->eHwType,
                        pChConfig->u32ChannelOfHw);
                }

                else
                {
                    /* SWS_Icu_00137 */
                    DutyCycleValues->ActiveTime = (Icu_ValueType)0U;
                    DutyCycleValues->PeriodTime = (Icu_ValueType)0U;
                }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}
#endif /* ICU_GET_DUTY_CYCLE_VALUES_API */

/* FUNC_Icu_0023,FUNC_Icu_0024 */
#if (ICU_GET_INPUT_LEVEL_API == STD_ON)
/**
 * @brief Read the current input level of channel
 *
 * @param Channel ICU channel
 * @return        Input level of channel
 *
 * @implements SWS_Icu_00050,FUNC_Icu_0021,FUNC_Icu_0022,SWDESG_ICU_075
 */
ICU_TEXT_SECTION Icu_InputLevelType Icu_GetInputLevel(Icu_ChannelType Channel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
    /* FUNC_Icu_0026 */
    Icu_InputLevelType eLevel = ICU_INPUT_LOW;
#if (ICU_DEV_ERROR_DETECT == STD_ON)
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022,SWDESG_ICU_073 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              ICU_GET_INPUT_LEVEL_ID,
                              (uint8)ICU_E_UNINIT);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Channel >= Icu_pConfig[u8CoreID]->tChannelCount)
#else
    else if (Channel >= Icu_pConfig->tChannelCount)
#endif
    {
        /* SWDESG_ICU_074 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              ICU_GET_INPUT_LEVEL_ID,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (
        (ICU_MODE_SIGNAL_MEASUREMENT != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode) &&
        (ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig[u8CoreID]->pChannelsConfig)[Channel].eMode))
#else
    else if ((ICU_MODE_SIGNAL_MEASUREMENT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode) &&
             (ICU_MODE_SIGNAL_EDGE_DETECT != (*Icu_pConfig->pChannelsConfig)[Channel].eMode))
#endif
    {
        /* FUNC_Icu_0025,SWDESG_ICU_074 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              ICU_GET_INPUT_LEVEL_ID,
                              (uint8)ICU_E_PARAM_CHANNEL);
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] != u8CoreID)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)ICU_GET_INPUT_LEVEL_ID,
                              (uint8)ICU_E_PARAM_PARTITION);
    }
#endif
    else
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        /* SWDESG_ICU_239 */
        if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[Channel] == u8CoreID)
        {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            const Icu_ChannelConfigType *pChConfig = &(
                *(Icu_pConfig[u8CoreID]->pChannelsConfig))[Channel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[Channel];
#endif
            boolean bSupport =
                Icu_HW_GetInputLevel(pChConfig->eHwType, pChConfig->u32ChannelOfHw, &eLevel);
            if ((boolean)FALSE == bSupport)
            {
#if (ICU_DEV_ERROR_DETECT == STD_ON)
                (void)Det_ReportError((uint16)ICU_MODULE_ID,
                                      (uint8)ICU_INSTANCE_ID,
                                      ICU_GET_INPUT_LEVEL_ID,
                                      (uint8)ICU_E_PARAM_CHANNEL);
#endif
                eLevel = ICU_INPUT_LOW;
            }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif

#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return eLevel;
}
#endif /*ICU_GET_INPUT_LEVEL_API == STD_ON*/

#if (ICU_GET_VERSION_INFO_API == STD_ON)
/**
 * @brief Return the version information of this module
 *
 * @param versioninfo -Pointer to where to store the version information of this module
 */
ICU_TEXT_SECTION void Icu_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == versioninfo)
    {
        /* SWS_Icu_00356,SWDESG_ICU_076 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              (uint8)ICU_GETVERSIONINFO_ID,
                              (uint8)ICU_E_PARAM_VINFO);
    }
    else
    {
#endif
        (versioninfo)->vendorID         = (uint16)ICU_VENDOR_ID;
        (versioninfo)->moduleID         = (uint16)ICU_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)ICU_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)ICU_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)ICU_SW_PATCH_VERSION;
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* ICU_GET_VERSION_INFO_API == STD_ON */
#if (ICU_GTB_SUPPORT == STD_ON)

/**
 * @brief Enable the Ftu Gtb function
 *
 * @param u32Group     -- Ftu Gtb Group
 *
 * @implements SWDESG_ICU_078
 * */
ICU_TEXT_SECTION void Icu_StartGlobalTime(const uint32 u32Group)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    if (NULL_PTR == Icu_pConfig[u8CoreID])
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              ICU_STARTGLOBALTIME_ID,
                              (uint8)ICU_E_UNINIT);
    }
    else if (u32Group >= ICU_GTB_GROUPMAXNB)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              ICU_STARTGLOBALTIME_ID,
                              (uint8)ICU_E_PARAM_GROUP);
    }
    else
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        Icu_HW_StartGTB(Icu_pConfig[u8CoreID]->pIcuGtbGroupPtr[u32Group]);
#else
    Icu_HW_StartGTB(Icu_pConfig->pIcuGtbGroupPtr[u32Group]);
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

/**
 * @brief Dis the Ftu Gtb function
 *
 * @param u32Group     -- Ftu Gtb Group
 *
 * @implements SWDESG_ICU_079
 * */
ICU_TEXT_SECTION void Icu_StopGlobalTime(const uint32 u32Group)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent
       function call.
       REASON: Macros have higher execution efficiency
    */
    if (NULL_PTR == Icu_pConfig[u8CoreID])
    /* PRQA S 3469 -- */
#else
    if (NULL_PTR == Icu_pConfig)
#endif
    {
        /* SWS_Icu_00022 */
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              ICU_STOPGLOBALTIME_ID,
                              (uint8)ICU_E_UNINIT);
    }
    else if (u32Group >= ICU_GTB_GROUPMAXNB)
    {
        (void)Det_ReportError((uint16)ICU_MODULE_ID,
                              (uint8)ICU_INSTANCE_ID,
                              ICU_STOPGLOBALTIME_ID,
                              (uint8)ICU_E_PARAM_GROUP);
    }
    else
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        Icu_HW_StopGTB(Icu_pConfig[u8CoreID]->pIcuGtbGroupPtr[u32Group]);
#else
    Icu_HW_StopGTB(Icu_pConfig->pIcuGtbGroupPtr[u32Group]);
#endif
#if (ICU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif

#if (ICU_TIMESTAMP_DMA == STD_ON) && (ICU_TIMESTAMP_DMACHANNEL_COUNT > 0)
/**
 * @brief This function save the time stamp for the channel used dma.
 * @param  tChannel    -Time stamp Dma channel Index
 *
 * @implements  SWDESG_ICU_102
 */
ICU_TEXT_SECTION void Icu_TimeStampDmaCallback(uint8 tDmaindex)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
    Icu_ChannelType tChannel = Icu_aTimestampDmachannelState[tDmaindex].u16IcuChannel;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel];
    uint8                        u8DmaChannel =
        (*(Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].u8DmaHwChannel;
    uint8 u8DmaInstance =
        (*(Icu_pConfig[u8CoreID]->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].eDmaInstance;
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tChannel];
    uint8                        u8DmaChannel =
        (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].u8DmaHwChannel;
    uint8 u8DmaInstance =
        (*(Icu_pConfig->tIcuDmaChannelInfo))[(pChConfig->u8DmachannelRef)].eDmaInstance;
#endif

    uint8  u8Notifyflag     = 0U;
    uint16 u16RemainBuffNum = 0U;
    uint16 u16lastValue = Dma_GetBeginOuterLoopCounter((Dma_InstanceType)u8DmaInstance, u8DmaChannel);
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_14();
    Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferIndex += u16lastValue;
    u16RemainBuffNum = Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferSize -
                       Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferIndex;
    if (0U != Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify)
    {
        Icu_aChannelWorkState[tChannel].tTimeStamp.tNotifyCount += u16lastValue;
        if (Icu_aChannelWorkState[tChannel].tTimeStamp.tNotifyCount >=
            Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify)
        {
            Icu_aChannelWorkState[tChannel].tTimeStamp.tNotifyCount = 0U;
            u8Notifyflag                                            = 1U;
        }
    }
    if (0U == u16RemainBuffNum)
    {
        if ((uint32)ICU_CIRCULAR_BUFFER ==
            (pChConfig->u32Param & ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK))
        {
            Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferIndex = 0U;
            Dma_SetCfgDaddr((Dma_InstanceType)u8DmaInstance,
                            u8DmaChannel,
                            (uint32)Icu_aChannelWorkState[tChannel].tTimeStamp.pBuffer);

            uint16 u16lastNotifyCount =
                (uint16)(Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify -
                         Icu_aChannelWorkState[tChannel].tTimeStamp.tNotifyCount);
            if ((0U != Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify) &&
                (Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferSize > u16lastNotifyCount))
            {
                Dma_UpdateOuterLoopCounter((Dma_InstanceType)u8DmaInstance,
                                           u8DmaChannel,
                                           u16lastNotifyCount);
            }
            /*Enable dma request*/
            Dma_EnableHwRequest((Dma_InstanceType)u8DmaInstance, u8DmaChannel);
        }
        else
        {
            /*Disable dma request*/
            Dma_DisableHwRequest((Dma_InstanceType)u8DmaInstance, pChConfig->u8DmachannelRef);
            Icu_HW_StopTimeStamp(pChConfig->eHwType, pChConfig->u32ChannelOfHw);
            Icu_ClearBitChState(tChannel, ICU_CHANNEL_STATE_RUNNING);
        }
    }
    else
    {
        if (u16RemainBuffNum < Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify)
        {
            Dma_UpdateOuterLoopCounter((Dma_InstanceType)u8DmaInstance,
                                       u8DmaChannel,
                                       (uint16)u16RemainBuffNum);
        }
        else
        {
            Dma_UpdateOuterLoopCounter(
                (Dma_InstanceType)u8DmaInstance,
                u8DmaChannel,
                (uint16)(Icu_aChannelWorkState[tChannel].tTimeStamp.tBufferNotify));
        }
        /*Enable dma request*/
        Dma_EnableHwRequest((Dma_InstanceType)u8DmaInstance, u8DmaChannel);
    }

    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_14();

    if (u8Notifyflag == 1U)
    {
        /* Call User Notification Function and/or Wakeup Function */
        Icu_CallNotification(tChannel);
    }
}
#endif /*ICU_TIMESTAMP_DMA*/

/**
 * @brief The callback of Icu channel interrupt
 *
 * @param tHwChannel    -Hardware channel index
 * @param u32Value      -Tick count of the hardware
 * @param eInputLevel   -Input level
 *
 * @implements SWDESG_ICU_100
 */
ICU_TEXT_SECTION void Icu_ChannelInterruptCallback(Icu_HwChannelType  tHwChannel,
                                                   uint32             u32Value,
                                                   Icu_InputLevelType eInputLevel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    Icu_ChannelType tChannel = (*(Icu_pConfig[u8CoreID]->pIcuHwMap))[tHwChannel];
#else
    Icu_ChannelType tChannel = (*(Icu_pConfig->pIcuHwMap))[tHwChannel];
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[tChannel] == u8CoreID)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        const Icu_ChannelConfigType *pChConfig = &(
            *(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tChannel];
#endif
        /* SWS_Icu_00229,SWS_Icu_00244 */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
        Icu_ReportWakeup(tChannel);
#endif
        switch (pChConfig->eMode)
        {
#if (ICU_EDGE_DETECT_API == STD_ON)
            case ICU_MODE_SIGNAL_EDGE_DETECT:
                Icu_SetBitChState(tChannel, ICU_CHANNEL_STATE_ACTIVE);
                /* SWS_Icu_00214 */
                Icu_CallNotification(tChannel);
                break;
#endif
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
            case ICU_MODE_SIGNAL_MEASUREMENT:
            {
                boolean bCompleted = Icu_SignalMeasurementProcess(tChannel, eInputLevel, u32Value);
                if ((boolean)TRUE == bCompleted)
                {
                    Icu_SetBitChState(tChannel, ICU_CHANNEL_STATE_ACTIVE);
                }
                break;
            }
#endif
#if (ICU_TIMESTAMP_API == STD_ON)
            case ICU_MODE_TIMESTAMP:
            {
#if (ICU_TIMESTAMP_DMA == STD_ON)
                if (pChConfig->bChannelDmaEn == FALSE)
                {
#endif
                    Icu_TimeStampProcess(tChannel, u32Value);
#if (ICU_TIMESTAMP_DMA == STD_ON)
                }
#endif
                break;
            }
#endif
            default: /*case ICU_MODE_EDGE_COUNTER*/
#if (ICU_EDGE_COUNT_API == STD_ON)
                SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_12();
                Icu_aChannelWorkState[tChannel].tEdgeCount++;
                SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_12();
#endif
                break;
        }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    }
#endif
}

/**
 * @brief The callback of dual capture ICU channels interrupt
 *
 * @param tHwChannel    -Hardware channel index
 * @param u32FirstEdge  -Tick count of first edge
 * @param u32SecondEdge -Tick count of second edge
 *
 * @implements SWDESG_ICU_247
 */
ICU_TEXT_SECTION void Icu_MeasChannelInterruptCallback(Icu_HwChannelType tHwChannel,
                                                       uint32            u32FirstEdge,
                                                       uint32            u32SecondEdge)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    Icu_ChannelType tChannel = (*(Icu_pConfig[u8CoreID]->pIcuHwMap))[tHwChannel];
#else
    Icu_ChannelType tChannel = (*(Icu_pConfig->pIcuHwMap))[tHwChannel];
#endif
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
    Icu_ReportWakeup(tChannel);
#endif
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_15();
    Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32FirstEdgePre =
        Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32FirstEdgeCurrent;
    Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32SecondEdgePre =
        Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32SecondEdgeCurrent;
    Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32FirstEdgeCurrent  = u32FirstEdge;
    Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32SecondEdgeCurrent = u32SecondEdge;
    /* Duty Cycle must obtain two capture times */
    if (Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32MeasFinishCount < 2U)
    {
        Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32MeasFinishCount++;

#if (ICU_MULTICORE_SUPPORT == STD_ON)
        const Icu_ChannelConfigType *pChConfig = &(
            *(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel];
#else
        const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tChannel];
#endif
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
           an inappropriate essential type. reason: The program will guarantee the legality of these
           type conversions */
        Icu_SignalMeasurementPropertyType eMesurementProperty = (Icu_SignalMeasurementPropertyType)
            ICU_PARAM_MEASUREMENT_GET_PROPERTY(pChConfig->u32Param);
        /* PRQA S 4342 --*/
        if (eMesurementProperty == ICU_DUTY_CYCLE)
        {
            if (Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32MeasFinishCount == 2U)
            {
                Icu_SetBitChState(tChannel, ICU_CHANNEL_STATE_ACTIVE);
            }
        }
        else if (Icu_aChannelWorkState[tChannel].tDualCaptureMeas.u32MeasFinishCount == 1U)
        {
            Icu_SetBitChState(tChannel, ICU_CHANNEL_STATE_ACTIVE);
        }
        else
        {
            /*Do nothing*/
        }
    }

    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_15();
}

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief The callback of Icu channel overflow
 *
 * @param tHwChannel    -Hardware channel index
 *
 * @implements SWDESG_ICU_101
 */
ICU_TEXT_SECTION void Icu_OverflowCallback(Icu_HwChannelType tHwChannel)
{
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    /* PRQA S 3469 ++
     This usage of a function-like macro looks like it could be replaced by
     an equivalent function call.
     REASON: Macros have higher execution efficiency
  */
    uint8 u8CoreID = Icu_GetCoreID();
    /* PRQA S 3469 -- */
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    Icu_ChannelType tChannel = (*(Icu_pConfig[u8CoreID]->pIcuHwMap))[tHwChannel];
#else
    Icu_ChannelType tChannel = (*(Icu_pConfig->pIcuHwMap))[tHwChannel];
#endif

#if (ICU_MULTICORE_SUPPORT == STD_ON)
    if (Icu_pConfig[u8CoreID]->pIcuChannelPartitionMappingPtr[tChannel] == u8CoreID)
    {
#endif
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        const Icu_ChannelConfigType *pChConfig = &(
            *(Icu_pConfig[u8CoreID]->pChannelsConfig))[tChannel];
#else
    const Icu_ChannelConfigType *pChConfig = &(*(Icu_pConfig->pChannelsConfig))[tChannel];
#endif
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
        Icu_ReportWakeup(tChannel);
#endif
        /* Check channel is running*/
        if (ICU_CHANNEL_STATE_RUNNING == Icu_GetBitChState(tChannel, ICU_CHANNEL_STATE_RUNNING))
        {
            switch (pChConfig->eMode)
            {
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
                case ICU_MODE_SIGNAL_MEASUREMENT:
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
                    if (NULL_PTR != pChConfig->pOverflowNotification)
                    {
                        pChConfig->pOverflowNotification();
                    }
#endif
#if (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
                    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_13();
                    /* increase overflow count*/
                    Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFCount++;
                    Icu_aChannelWorkState[tChannel].tMeasurement.u32ChannelOFExCount++;
                    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_13();
#endif
                    break;
#endif
#if (ICU_TIMESTAMP_API == STD_ON)
                case ICU_MODE_TIMESTAMP:
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
                    if (NULL_PTR != pChConfig->pOverflowNotification)
                    {
                        pChConfig->pOverflowNotification();
                    }
#endif
                    break;
#endif
                default:
                    /*For MISRA*/
                    break;
            }
        }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    }
#endif
}
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
