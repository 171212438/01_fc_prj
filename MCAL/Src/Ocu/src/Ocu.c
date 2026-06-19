/**
 *   @file    Ocu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - Ocu Driver source file.
 *   @details Ocu driver source file, containing the Autosar API specification and other variables
 *            and functions that are exported by the Ocu driver.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU, TPU, EFTU
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add
                                                         Tpu support(only available on FC7240)
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
/* PRQA S 1503 EOF
   PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
   REASON: The function is not used in this project but it must be applied for user
*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Ocu.h"
#include "Ocu_Irq.h"
#include "Ocu_Version.h"
#include "Mcal.h"
#include "SchM_Ocu.h"
#if ((OCU_DEV_ERROR_DETECT == STD_ON) || (OCU_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if ((OCU_AR_RELEASE_MAJOR_VERSION != OCU_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (OCU_AR_RELEASE_MINOR_VERSION != OCU_CFG_AR_RELEASE_MINOR_VERSION) || \
     (OCU_AR_RELEASE_REVISION_VERSION != OCU_CFG_AR_RELEASE_REVISION_VERSION))
#error "Autosar release major version is not matched. "
#endif

#ifndef OCU_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (OCU_SW_MAJOR_VERSION != OCU_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef OCU_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (OCU_SW_MINOR_VERSION != OCU_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef OCU_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (OCU_SW_PATCH_VERSION != OCU_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (OCU_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != OCU_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/**
 * @brief This enumerated type allows the selection of channel status type.
 *
 */
typedef enum
{
    OCU_STATUS_UNINITIALIZED = 0U, /**< @brief OCU channel status - uninitialized */
    OCU_STATUS_INITIALIZED   = 1U, /**< @brief OCU channel status - initialized */
    OCU_STATUS_STOPPED       = 2U, /**< @brief OCU channel status - stopped */
    OCU_STATUS_RUNNING       = 3U  /**< @brief OCU channel status - expired */
} Ocu_ChannelStatusType;

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define OCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"

/* PRQA S 686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized.
 * Reason: An initializer of the form { 0 } may be used to explicitly initialise all elements of
 * an array object or subobject. The { NULL_PTR } qualifies to { 0 }. */
/**
 * @brief    Local pointer used for storing the OCU driver configuration data.
 */
OCU_DATA_SECTION const Ocu_ConfigType *Ocu_ConfigPtr[OCU_MAX_PARTITIONS] = { NULL_PTR };
/* PRQA S 686 -- */

#define OCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"

#define OCU_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"
/**
 * @brief    Array for storing the state of OCU channel.
 */
OCU_DATA_SECTION static Ocu_ChannelStatusType Ocu_aChannelState[OCU_MAX_CHANNELS];

#define OCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
#define OCU_START_SEC_VAR_NO_INIT_BOOLEAN
#include "Ocu_MemMap.h"
/**
 * @brief    Array used to store the Notification information for all channels.
 */
OCU_DATA_SECTION static boolean Ocu_bNotificationEnabled[OCU_MAX_CHANNELS];

#define OCU_STOP_SEC_VAR_NO_INIT_BOOLEAN
#include "Ocu_MemMap.h"
#endif

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
#define OCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"

#if (OCU_PRECOMPILE_SUPPORT == STD_ON)
OCU_DATA_SECTION extern const Ocu_ConfigType Ocu_Config;
#endif

#define OCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"
/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

#if (OCU_DEV_ERROR_DETECT == STD_ON)
OCU_TEXT_SECTION LOCAL_INLINE void Ocu_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId);
#endif

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
OCU_TEXT_SECTION LOCAL_INLINE void Ocu_SetBitState(Ocu_ChannelType tChannel);
OCU_TEXT_SECTION LOCAL_INLINE void Ocu_ClearBitState(Ocu_ChannelType tChannel);
#endif
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#if (OCU_DEV_ERROR_DETECT == STD_ON)
OCU_TEXT_SECTION LOCAL_INLINE void Ocu_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    (void)Det_ReportError((uint16)OCU_MODULE_ID, (uint8)OCU_INDEX, (uint8)u8ServiceId, (uint8)u8ErrorId);
}
#endif

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief Set the Ocu_bNotificationEnabled in an atomic way.
 *
 * @param tChannel -The index of OCU channel for current configuration structure
 *
 */
OCU_TEXT_SECTION LOCAL_INLINE void Ocu_SetBitState(Ocu_ChannelType tChannel)
{
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_00();
    {
        Ocu_bNotificationEnabled[tChannel] = (boolean)TRUE;
    }
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_00();
}

/**
 * @brief Clear the Ocu_bNotificationDisabled in an atomic way.
 *
 * @param tChannel -The index of OCU channel for current configuration structure
 *
 */
OCU_TEXT_SECTION LOCAL_INLINE void Ocu_ClearBitState(Ocu_ChannelType tChannel)
{
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_01();
    {
        Ocu_bNotificationEnabled[tChannel] = (boolean)FALSE;
    }
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_01();
}
#endif

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize the OCU driver
 *
 * @param ConfigPtr -Pointer to a selected configuration structure
 */
OCU_TEXT_SECTION void Ocu_Init(const Ocu_ConfigType *ConfigPtr)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();
    uint8 u8Idx;

#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR != Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_INIT_ID, (uint8)OCU_E_ALREADY_INITIALIZED);
    }
#if (OCU_PRECOMPILE_SUPPORT == STD_OFF)
    else if (NULL_PTR == ConfigPtr)
#elif (OCU_PRECOMPILE_SUPPORT == STD_ON)
    else if (NULL_PTR != ConfigPtr)
#endif
    {
        Ocu_ReportDetError((uint8)OCU_INIT_ID, (uint8)OCU_E_INIT_FAILED);
    }
    else
    {
#endif /* OCU_DEV_ERROR_DETECT */

#if (OCU_PRECOMPILE_SUPPORT == STD_ON)
        Ocu_ConfigPtr[u8CoreId] = &Ocu_Config;
        (void)ConfigPtr;
#elif (OCU_PRECOMPILE_SUPPORT == STD_OFF)
    Ocu_ConfigPtr[u8CoreId] = ConfigPtr;
#endif
        /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
        Reason:  When OCU_MAX_CHANNELS is greater than 1, it will be executed multiple times*/
        for (u8Idx = 0U; u8Idx < OCU_MAX_CHANNELS; u8Idx++)
        /* PRQA S 2877 -- */
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Idx] == u8CoreId)
            {
#endif
                /* set channel state */
                Ocu_aChannelState[u8Idx] = OCU_STATUS_INITIALIZED;
#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
                /* Disable Notifications */
                Ocu_ClearBitState(u8Idx);
#endif
                /*Initialize hardware timer channel.*/
                Ocu_Hw_Init(Ocu_ConfigPtr[u8CoreId], u8Idx);
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OCU_DEV_ERROR_DETECT */
}

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize the OCU module.
 *
 */
OCU_TEXT_SECTION void Ocu_DeInit(void)
{
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType IsValid = E_OK;
#endif
    uint8 u8Idx;
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_DEINIT_ID, (uint8)OCU_E_UNINIT);
    }
    else
    {
        /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
        Reason:  When OCU_MAX_CHANNELS is greater than 1, it will be executed multiple times*/
        for (u8Idx = 0U; u8Idx < OCU_MAX_CHANNELS; u8Idx++)
        /* PRQA S 2877 -- */
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Idx] == u8CoreId)
            {
#endif
                if (Ocu_aChannelState[u8Idx] == OCU_STATUS_RUNNING)
                {
                    Ocu_ReportDetError((uint8)OCU_DEINIT_ID, (uint8)OCU_E_PARAM_INVALID_STATE);
                    IsValid = E_NOT_OK;
                }
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
        if (IsValid == E_OK)
#endif
        {
            /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
            Reason:  When OCU_MAX_CHANNELS is greater than 1, it will be executed multiple times*/
            for (u8Idx = 0U; u8Idx < OCU_MAX_CHANNELS; u8Idx++)
            /* PRQA S 2877 -- */
            {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
                if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Idx] == u8CoreId)
                {
#endif
                    Ocu_aChannelState[u8Idx] = OCU_STATUS_UNINITIALIZED;

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
                    /* Disable Notifications */
                    Ocu_ClearBitState(u8Idx);
#endif
                    /*De-Initialize hardware timer channel.*/
                    Ocu_Hw_DeInit(Ocu_ConfigPtr[u8CoreId], u8Idx);
#if (OCU_MULTICORE_SUPPORT == STD_ON)
                }
#endif
            }
            Ocu_ConfigPtr[u8CoreId] = NULL_PTR;
        }
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif

/**
 * @brief Start an OCU channel.
 *
 * @param ChannelNumber   -input OCU channel number
 * @return Std_ReturnType -whether the channel is started or not
 */
OCU_TEXT_SECTION Std_ReturnType Ocu_StartChannel(Ocu_ChannelType ChannelNumber)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();

    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_STARTCHANNEL_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_STARTCHANNEL_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else
    {
#endif
#if (OCU_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        if (Ocu_aChannelState[ChannelNumber] == OCU_STATUS_RUNNING)
        {
            (void)Det_ReportRuntimeError((uint16)OCU_MODULE_ID,
                                         (uint8)OCU_INDEX,
                                         (uint8)OCU_STARTCHANNEL_ID,
                                         (uint8)OCU_E_BUSY);
        }
        else
#endif
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
            {
#endif
                /* Set channel status to RUNNING */
                Ocu_aChannelState[ChannelNumber] = OCU_STATUS_RUNNING;

                Ocu_Hw_StartChannel(Ocu_ConfigPtr[u8CoreId], ChannelNumber);
                RetVal = (Std_ReturnType)E_OK;
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return RetVal;
}

/**
 * @brief Stop an OCU channel.
 *
 * @param ChannelNumber -input OCU channel number
 */
OCU_TEXT_SECTION void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();

#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_STOPCHANNEL_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_STOPCHANNEL_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else
    {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
        {
#endif
            if (Ocu_aChannelState[ChannelNumber] == OCU_STATUS_RUNNING)
            {
                /* Set channel status to STOP */
                Ocu_aChannelState[ChannelNumber] = OCU_STATUS_STOPPED;
                /* call hardware code */
                Ocu_Hw_StopChannel(Ocu_ConfigPtr[u8CoreId], ChannelNumber);
            }
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Set OCU channel pin state.
 *
 * @param ChannelNumber -input OCU channel number
 * @param PinState      -input OCU channel Pin state
 */
OCU_TEXT_SECTION void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();

#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_SETPINSTATE_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_SETPINSTATE_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else if ((boolean)TRUE !=
             (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[ChannelNumber].bOcuOutputPinUsed)
    {
        Ocu_ReportDetError((uint8)OCU_SETPINSTATE_ID, (uint8)OCU_E_PARAM_NO_PIN);
    }
    else if ((Ocu_aChannelState[ChannelNumber] == OCU_STATUS_RUNNING) ||
             ((PinState != OCU_LOW) && (PinState != OCU_HIGH)))
    {
        Ocu_ReportDetError((uint8)OCU_SETPINSTATE_ID, (uint8)OCU_E_PARAM_INVALID_STATE);
    }
    else
    {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
        {
#endif
            Ocu_Hw_SetPinState(Ocu_ConfigPtr[u8CoreId], ChannelNumber, PinState);
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* OCU_SET_OUTPUT_TO_IDLE_API */

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief Set OCU channel pin action.
 *
 * @param ChannelNumber -input OCU channel number
 * @param PinAction     -input OCU channel Pin action
 */
OCU_TEXT_SECTION void Ocu_SetPinAction(Ocu_ChannelType ChannelNumber, Ocu_PinActionType PinAction)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();

#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_SETPINACTION_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_SETPINACTION_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else if ((boolean)TRUE !=
             (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[ChannelNumber].bOcuOutputPinUsed)
    {
        Ocu_ReportDetError((uint8)OCU_SETPINACTION_ID, (uint8)OCU_E_PARAM_NO_PIN);
    }
    else if ((PinAction != OCU_SET_LOW) && (PinAction != OCU_SET_HIGH) &&
             (PinAction != OCU_TOGGLE) && (PinAction != OCU_DISABLE))
    {
        Ocu_ReportDetError((uint8)OCU_SETPINACTION_ID, (uint8)OCU_E_PARAM_INVALID_ACTION);
    }
    else
    {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
        {
#endif
            /* Call the Hw function to set pin action */
            Ocu_Hw_SetPinAction(Ocu_ConfigPtr[u8CoreId], ChannelNumber, PinAction);

#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* OCU_SET_OUTPUT_TO_IDLE_API */

#if (OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief Read the current value of the counter.
 *
 * @param ChannelNumber  -input OCU channel number
 * @return Ocu_ValueType -counter value
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_GetCounter(Ocu_ChannelType ChannelNumber)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();

    Ocu_ValueType retVal = (Ocu_ValueType)0U;
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_GETCOUNTER_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_GETCOUNTER_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else
    {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
        {
#endif
            retVal = Ocu_Hw_GetCounter(Ocu_ConfigPtr[u8CoreId], ChannelNumber);

#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return (Ocu_ValueType)retVal;
}
#endif /* OCU_GET_OUTPUT_STATE_API */

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief Set the value of the channel threshold using an absolute input data.
 *
 * @param  ChannelNumber  -input OCU channel number
 * @param  ReferenceValue -a base value to determine whether to call the notification before the
 * function exits
 * @param  AbsoluteValue  -the value of CnV register
 * @return Ocu_ReturnType -whether a comparison match occurred during the current reference interval
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_SetAbsoluteThreshold(Ocu_ChannelType ChannelNumber,
                                                         Ocu_ValueType   ReferenceValue,
                                                         Ocu_ValueType   AbsoluteValue)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();

    Ocu_ReturnType StatusValue = OCU_CM_OUT_REF_INTERVAL;
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_SETABSOLUTETHRESHOLD_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_SETABSOLUTETHRESHOLD_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else
    {
        Ocu_ValueType MaxCounterValue =
            (Ocu_ValueType)Ocu_Hw_GetMaxCountValue(Ocu_ConfigPtr[u8CoreId], ChannelNumber);
        if ((ReferenceValue > MaxCounterValue) || (AbsoluteValue > MaxCounterValue))
        {
            Ocu_ReportDetError((uint8)OCU_SETABSOLUTETHRESHOLD_ID, (uint8)OCU_E_PARAM_INVALID_VALUE);
        }
        else
        {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
            {
#endif
                StatusValue = Ocu_Hw_SetAbsoluteThreshold(Ocu_ConfigPtr[u8CoreId],
                                                          ChannelNumber,
                                                          ReferenceValue,
                                                          AbsoluteValue);
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
    return StatusValue;
}
#endif /* OCU_SET_ABSOLUTE_THRESHOLD_API */

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief  Set the value of the channel threshold relative to the current value of the counter.
 *
 * @param  ChannelNumber  -input OCU channel number
 * @param  RelativeValue  -value use for computing the new threshold.
 * @return Ocu_ReturnType -whether a comparison match occurred during the current reference interval
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_SetRelativeThreshold(Ocu_ChannelType ChannelNumber,
                                                         Ocu_ValueType   RelativeValue)
{
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();

    Ocu_ReturnType StatusValue = OCU_CM_OUT_REF_INTERVAL;
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_SETRELATIVETHRESHOLD_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_SETRELATIVETHRESHOLD_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else
    {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
        {
#endif

            StatusValue =
                Ocu_Hw_SetRelativeThreshold(Ocu_ConfigPtr[u8CoreId], ChannelNumber, RelativeValue);

#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return StatusValue;
}
#endif /* OCU_SET_ABSOLUTE_THRESHOLD_API */

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief Disable OCU channel notification.
 *
 * @param ChannelNumber -input OCU channel number
 */
OCU_TEXT_SECTION void Ocu_DisableNotification(Ocu_ChannelType ChannelNumber)
{
#if ((OCU_DEV_ERROR_DETECT == STD_ON) || (OCU_MULTICORE_SUPPORT == STD_ON))
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();
#endif

#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_DISABLENOTIFICATION_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_DISABLENOTIFICATION_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else if (NULL_PTR ==
             (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[ChannelNumber].pfOcuChannelNotification)
    {
        Ocu_ReportDetError((uint8)OCU_DISABLENOTIFICATION_ID, (uint8)OCU_E_NO_VALID_NOTIF);
    }
    else
    {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
        {
#endif
            Ocu_ClearBitState(ChannelNumber);
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief Enable notification.
 *
 * @param ChannelNumber -input OCU channel number
 */
OCU_TEXT_SECTION void Ocu_EnableNotification(Ocu_ChannelType ChannelNumber)
{
#if ((OCU_DEV_ERROR_DETECT == STD_ON) || (OCU_MULTICORE_SUPPORT == STD_ON))
    /* Get core ID of current processor */
    uint8 u8CoreId = (uint8)Ocu_GetCoreID();
#endif

#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Ocu_ConfigPtr[u8CoreId])
    {
        Ocu_ReportDetError((uint8)OCU_ENABLENOTIFICATION_ID, (uint8)OCU_E_UNINIT);
    }
    else if (ChannelNumber >= Ocu_ConfigPtr[u8CoreId]->nNumChannels)
    {
        Ocu_ReportDetError((uint8)OCU_ENABLENOTIFICATION_ID, (uint8)OCU_E_PARAM_INVALID_CHANNEL);
    }
    else if (NULL_PTR ==
             (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[ChannelNumber].pfOcuChannelNotification)
    {
        Ocu_ReportDetError((uint8)OCU_ENABLENOTIFICATION_ID, (uint8)OCU_E_NO_VALID_NOTIF);
    }
    else
    {
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)

        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[ChannelNumber] == u8CoreId)
        {
#endif
            Ocu_SetBitState(ChannelNumber);
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* OCU_NOTIFICATION_SUPPORTED */

#if (OCU_VERSION_INFO_API == STD_ON)
/**
 * @brief Get software version information.
 *
 * @param versioninfo -OCU module version information value pointer
 */
OCU_TEXT_SECTION void Ocu_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == versioninfo)
    {
        Ocu_ReportDetError((uint8)OCU_GETVERSIONINFO_ID, (uint8)OCU_E_PARAM_POINTER);
    }
    else
    {
#endif /* OCU_DEV_ERROR_DETECT */

        (versioninfo)->vendorID = (uint16)OCU_VENDOR_ID;
        (versioninfo)->moduleID = (uint16)OCU_MODULE_ID;

        (versioninfo)->sw_major_version = (uint8)OCU_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)OCU_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)OCU_SW_PATCH_VERSION;
#if (OCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* OCU_VERSION_INFO_API */

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief Forward channel notification calls.
 *
 * @param u8HwChannel -OCU hardware channel number
 */
OCU_TEXT_SECTION void Ocu_ProcessCommonInterrupt(uint8 u8HwChannel)
{
    /* Get core ID of current processor */
    uint8          u8CoreId = (uint8)Ocu_GetCoreID();
    uint8          u8LogicChannel;
    Ocu_NotifyType pfNotify;

    if (NULL_PTR != Ocu_ConfigPtr[u8CoreId])
    {
        u8LogicChannel = (uint8)((*Ocu_ConfigPtr[u8CoreId]->HwToLogicChannelMap)[u8HwChannel]);
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8LogicChannel] == u8CoreId)
        {
#endif
            pfNotify =
                (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8LogicChannel].pfOcuChannelNotification;

            if ((NULL_PTR != pfNotify) && ((boolean)TRUE == Ocu_bNotificationEnabled[u8LogicChannel]))
            {
                pfNotify();
            }
#if (OCU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
    }
}
#endif /* (OCU_NOTIFICATION_SUPPORTED == STD_ON) */

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
