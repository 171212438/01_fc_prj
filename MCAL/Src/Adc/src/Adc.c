/**
*   @file    Adc.c
*   @version 1.5.1

*   @brief   AUTOSAR Adc - driver API and development errors implemention.
*   @details This file contains the ADC Autosar driver API and development errors implemention.
*
*   @addtogroup ADC
*   @{
*/
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
*   0.3.0       17/10/2023    QXW0030       N/A          Fix Det check problem
*   0.4.0       20/11/2023    QXW0030       N/A          Fix critical section problem
*   0.6.0       13/03/2024    QXW0030       N/A          Add compatible with AutoSAR 4.2.2
*   0.7.0       27/03/2024    QXW0030       N/A          Add support for FC7240
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc.h"
#include "Adc_Hal.h"
#include "Adc_Version.h"
#if ((ADC_DEV_ERROR_DETECT == STD_ON) || (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif
#include "SchM_Adc.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Adc configuration header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION != ADC_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_AR_RELEASE_MINOR_VERSION != ADC_CFG_AR_RELEASE_MINOR_VERSION) || \
     (ADC_AR_RELEASE_REVISION_VERSION != ADC_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Adc.h and Adc_Cfg.h are different"
#endif

/* Check if current file and Adc configuration header file are of the same software version */
#if ((ADC_SW_MAJOR_VERSION != ADC_CFG_SW_MAJOR_VERSION) || \
     (ADC_SW_MINOR_VERSION != ADC_CFG_SW_MINOR_VERSION) || \
     (ADC_SW_PATCH_VERSION != ADC_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of Adc.h and Adc_Cfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

/* PRQA S 686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized.
 * Reason: An initializer of the form { 0 } may be used to explicitly initialise all elements of
 * an array object or subobject. The { NULL_PTR } qualifies to { 0 }. */
/**
 * @brief          Global Configuration Pointer.
 * @details        Data structure containing the set of configuration parameters required for
 *                 initializing the ADC Driver and ADC HW Unit(s).
 *
 */
ADC_DATA_SECTION const Adc_ConfigType *Adc_Cfg_Ptr[ADC_MAX_PARTITIONS] = { NULL_PTR };
/* PRQA S 686 -- */

#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

#define ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

/**
 * @brief          Group status array structure
 * @details        Array to hold all the group status information.
 */
ADC_DATA_SECTION Adc_GroupStatusType Adc_aGroupStatus[ADC_MAX_GROUPS];

/**
 * @brief          Unit status structure
 * @details        Structure for the unit status.
 */
ADC_DATA_SECTION Adc_UnitStatusType Adc_aUnitStatus[ADC_USED_HW_UNITS];

#define ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

ADC_TEXT_SECTION LOCAL_INLINE void Adc_InitGroupsStatus(uint8 CoreId);

ADC_TEXT_SECTION LOCAL_INLINE void Adc_InitUnitStatus(uint8 CoreId);

ADC_TEXT_SECTION LOCAL_INLINE void Adc_UpdateStatusAfterGetStream(Adc_GroupType Group, uint8 CoreId);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief          Initializes the group status structures.
 * @details        Initializes the group status structures with the default values.
 *
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 * @pre            Driver must be initialized.
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_InitGroupsStatus(uint8 CoreId)
{
    Adc_GroupType GroupIdx = 0U;
    Adc_GroupType GroupId  = 0U;

    /* Initialize Group Status structures to beginning values */
    for (GroupIdx = 0U; GroupIdx < Adc_Cfg_Ptr[CoreId]->GroupCount; GroupIdx++)
    {
        GroupId = Adc_Cfg_Ptr[CoreId]->pGroupPtr[GroupIdx]->AdcGroupId;

        Adc_aGroupStatus[GroupId].eConversion = ADC_IDLE;
        /* this group was not converted yet */
        Adc_aGroupStatus[GroupId].eAlreadyConverted = ADC_NOT_YET_CONVERTED;
        Adc_aGroupStatus[GroupId].pResultsBuffer    = NULL_PTR;
        Adc_aGroupStatus[GroupId].ResultIndex       = 0U;

#if (ADC_HW_TRIGGER_API == STD_ON)
        Adc_aGroupStatus[GroupId].eHwTriggering = ADC_HWTRIGGER_DISABLED;
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        Adc_aGroupStatus[GroupId].eNotification = ADC_NOTIFICATION_DISABLED;
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */
    }
}

/**
 * @brief          Initializes the Unit status structures.
 * @details        Initializes the Unit status structures with the default values.
 *
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 * @pre            Driver must be initialized.
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_InitUnitStatus(uint8 CoreId)
{
    Adc_HwUnitType     UnitIdx  = 0U;
    Adc_HwUnitType     UnitId   = 0U;
    Adc_QueueIndexType QueueIdx = 0U;

    for (UnitIdx = 0U; UnitIdx < Adc_Cfg_Ptr[CoreId]->SarAdcCount; UnitIdx++)
    {
        UnitId = Adc_Cfg_Ptr[CoreId]->pSarAdcs[UnitIdx]->AdcLogicalUnitId;
        /* Filled slots in the queue */
        Adc_aUnitStatus[UnitId].SwNormalQueueIndex = 0U;
        /* Mark all the queue slots as "empty" */
        for (QueueIdx = 0U; QueueIdx < ADC_QUEUE_MAX_DEPTH; QueueIdx++)
        {
            Adc_aUnitStatus[UnitId].SwNormalQueue[QueueIdx] = 0U;
        }

#if (ADC_HW_TRIGGER_API == STD_ON)
        Adc_aUnitStatus[UnitId].HwNormalQueue[0] = 0U;
        /* Filled slots in the Hw queue */
        Adc_aUnitStatus[UnitId].HwNormalQueueIndex = 0U;
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
    }
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    for (UnitIdx = 0U; UnitIdx < Adc_Cfg_Ptr[CoreId]->HsAdcCount; UnitIdx++)
    {
        UnitId = Adc_Cfg_Ptr[CoreId]->pHsAdcs[UnitIdx]->AdcLogicalUnitId;
        /* Filled slots in the queue */
        Adc_aUnitStatus[UnitId].SwNormalQueueIndex = 0U;
        /* Mark all the queue slots as "empty" */
        for (QueueIdx = 0U; QueueIdx < ADC_QUEUE_MAX_DEPTH; QueueIdx++)
        {
            Adc_aUnitStatus[UnitId].SwNormalQueue[QueueIdx] = 0U;
        }

#if (ADC_HW_TRIGGER_API == STD_ON)
        Adc_aUnitStatus[UnitId].HwNormalQueue[0] = 0U;
        /* Filled slots in the Hw queue */
        Adc_aUnitStatus[UnitId].HwNormalQueueIndex = 0U;
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
    }
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */
}

/**
 * @brief          This function updates the status variables after the getstreamlastpointer operation.
 * @details        This function updates the status variables after the getstreamlastpointer operation.
 *
 * @param[in]      Group       The group of which conversion will be started.
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_UpdateStatusAfterGetStream(Adc_GroupType Group, uint8 CoreId)
{
    /* The following code has been added to respect the State Diagram of Streaming Access Mode */
    if (ADC_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        Adc_aGroupStatus[Group].ResultIndex = 0U;
        Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
    }

    if (ADC_STREAM_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        /* Compliance with State Diagram */
        if (ADC_TRIGG_SRC_SW == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTriggerSource)
        {
            if ((ADC_CONV_MODE_ONESHOT == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eMode) ||
                ((ADC_ACCESS_MODE_STREAMING == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eAccessMode) &&
                 (ADC_STREAM_BUFFER_LINEAR == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eBufferMode)))
            {
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            else
            {
                /* Continuous*/
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#if (STD_ON == ADC_HW_TRIGGER_API)
        else
        {
            /* Hw Trigger*/
            if ((ADC_ACCESS_MODE_STREAMING == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eAccessMode) &&
                (ADC_STREAM_BUFFER_LINEAR == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eBufferMode))
            {
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            else /* One-shot mode or circular streaming*/
            {
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#endif /* (STD_ON == ADC_HW_TRIGGER_API) */
    }
}

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief          Initializes the ADC hardware unit and the driver.
 * @details        This function will initialize both the ADC HW unit and the driver structures.
 *
 * @param[in]      pConfigPtr   Pointer to configuration set in Variant PB
 *                             (Variant PC requires a NULL_PTR).
 * @return         void
 *
 * @api
 *
 * @post           Initializes the driver.
 *
 *
 * @note           The function Autosar Service ID[hex]: 0x00.
 * @note           Synchronous.
 * @note           Non Re-entrant function.
 * @implements     SWS_Adc_00365
 */
ADC_TEXT_SECTION void Adc_Init(const Adc_ConfigType *ConfigPtr)
{
    uint8 CoreId = Adc_GetCoreID();
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00107 */
    if (NULL_PTR != Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_INIT_ID,
                              (uint8)ADC_E_ALREADY_INITIALIZED);
    }
#ifdef ADC_PRECOMPILE_SUPPORT
    /* SWS_Adc_00344 */
    else if (NULL_PTR != ConfigPtr)
#else
    /* SWS_Adc_00343 */
    else if (NULL_PTR == ConfigPtr)
#endif /* ADC_PRECOMPILE_SUPPORT */
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_INIT_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
#ifdef ADC_PRECOMPILE_SUPPORT
    else if (NULL_PTR == Adc_ConfigPreCompile[CoreId])
#else
    else if (CoreId != ConfigPtr->CoreId)
#endif /* ADC_PRECOMPILE_SUPPORT */
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_INIT_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
#ifdef ADC_PRECOMPILE_SUPPORT
        Adc_Cfg_Ptr[CoreId] = Adc_ConfigPreCompile[CoreId];
        (void)ConfigPtr;
#else
        Adc_Cfg_Ptr[CoreId] = ConfigPtr;
#endif /* ADC_PRECOMPILE_SUPPORT */
        /* Initialize the unit status for all units */
        Adc_InitUnitStatus(CoreId);
        /* Initialize the group status for all groups */
        Adc_InitGroupsStatus(CoreId);
        /* Call the low level function to initialize driver */
        Adc_Hal_Init(Adc_Cfg_Ptr[CoreId]);
    }
}

/**
 * @brief          Initializes the group specific ADC result buffer pointer as
 *                 configured to point to the pDataBufferPtr address which is
 *                 passed as parameter.
 * @details        Initializes ADC driver with the group specific result buffer
 *                 start address where the conversion results will be stored.
 *                 The application has to ensure that the application buffer,
 *                 where pDataBufferPtr points to, can hold all the conversion
 *                 results of the specified group. The initialization with
 *                 Adc_SetupResultBuffer is required after reset, before a group
 *                 conversion can be started.
 *
 * @param[in]      Group           Numeric ID of requested ADC channel group.
 * @param[in]      DataBufferPtr   Pointer to result data buffer
 *
 * @return         Std_ReturnType  Standard return type.
 * @retval         E_OK:           Result buffer pointer initialized correctly.
 * @retval         E_NOT_OK:       Operation failed or development error
 *                                 occurred.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x0C.
 * @note           Synchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00419
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SetupResultBuffer(Adc_GroupType       Group,
                                                      Adc_ValueGroupType *DataBufferPtr)
{
    Std_ReturnType TempReturn = E_NOT_OK;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint8 CoreId = Adc_GetCoreID();
    /* SWS_Adc_00434 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID, (uint8)0U, ADC_SETUPRESULTBUFFER_ID, ADC_E_UNINIT);
    }
    /* SWS_Adc_00457 */
    else if (NULL_PTR == DataBufferPtr)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              ADC_SETUPRESULTBUFFER_ID,
                              ADC_E_PARAM_POINTER);
    }
    /* SWS_Adc_00423 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              ADC_SETUPRESULTBUFFER_ID,
                              ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_SETUPRESULTBUFFER_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* SWS_Adc_00433 */
        if (ADC_IDLE != Adc_aGroupStatus[Group].eConversion)
        {
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         ADC_SETUPRESULTBUFFER_ID,
                                         ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            Adc_aGroupStatus[Group].pResultsBuffer = DataBufferPtr;

            TempReturn = E_OK;
        }
    }
    return TempReturn;
}

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief          Returns all ADC HW Units to a state comparable to their
 *                 power on reset state.
 * @details        Returns all ADC HW Units to a state comparable to their
 *                 power on reset state, and de-initialize the ADC MCAL driver.
 *
 * @return         void
 *
 * @api
 *
 * @note          The function Autosar Service ID[hex]: 0x01.
 * @note          Synchronous.
 * @note          Non Re-entrant function.
 * @implements    SWS_Adc_00366
 */
ADC_TEXT_SECTION void Adc_DeInit(void)
{
    Adc_GroupType GroupIdx;
    Adc_GroupType Group;
    boolean       GroupOnConversion = (boolean)FALSE;
    uint8         CoreId            = Adc_GetCoreID();
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00154 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DEINIT_ID,
                              (uint8)ADC_E_UNINIT);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_00();
        for (GroupIdx = 0U; GroupIdx < Adc_Cfg_Ptr[CoreId]->GroupCount; GroupIdx++)
        {
            Group = Adc_Cfg_Ptr[CoreId]->pGroupPtr[GroupIdx]->AdcGroupId;
            if ((ADC_IDLE != Adc_aGroupStatus[Group].eConversion) &&
                (ADC_STREAM_COMPLETED != Adc_aGroupStatus[Group].eConversion))
            {
                GroupOnConversion = (boolean)TRUE;
                break;
            }
        }
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_00();
        /* SWS_Adc_00112 */
        if (GroupOnConversion == (boolean)TRUE)
        {
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_DEINIT_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            Adc_Hal_DeInit(CoreId);
            /* Undefined the global pointer to the configuration */
            Adc_Cfg_Ptr[CoreId] = NULL_PTR;
        }
    }
}
#endif /* (ADC_DEINIT_API == STD_ON) */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/**
 * @brief          Starts the conversion of all channels of
 *                 the requested ADC Channel group.
 * @details        This function will start the SW conversion of all channels
 *                 of the requested ADC channel group.
 *
 * @param[in]      Group       Numeric ID of requested ADC channel group.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x02.
 * @note           Asynchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00367
 */
ADC_TEXT_SECTION void Adc_StartGroupConversion(Adc_GroupType Group)
{
    /* ADC Hardware unit on which the requested group will run */
    Adc_HwUnitType UnitId = (Adc_HwUnitType)0;
    uint8          CoreId = Adc_GetCoreID();
#if (ADC_ENABLE_QUEUING == STD_ON) || (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
    boolean bImplicity = (boolean)FALSE;
#endif /* (ADC_ENABLE_QUEUING == STD_ON) || (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) */
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
    Adc_QueueIndexType Index         = 0U;
    boolean            bGroupInQueue = (boolean)FALSE;
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00294 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STARTGROUPCONVERSION_ID,
                              (uint8)ADC_E_UNINIT);
    }
    /* SWS_Adc_00125 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STARTGROUPCONVERSION_ID,
                              (uint8)ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STARTGROUPCONVERSION_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    /* SWS_Adc_00133 */
    else if (ADC_TRIGG_SRC_SW != Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTriggerSource)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STARTGROUPCONVERSION_ID,
                              (uint8)ADC_E_WRONG_TRIGG_SRC);
    }
    /* SWS_Adc_00424 */
    else if (NULL_PTR == Adc_aGroupStatus[Group].pResultsBuffer)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STARTGROUPCONVERSION_ID,
                              (uint8)ADC_E_BUFFER_UNINIT);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* Get the unit to which the group belongs to */
        UnitId = Adc_Cfg_Ptr[CoreId]->pGroups[Group].UnitId;
#if (ADC_ENABLE_QUEUING == STD_ON)
        /* SWS_Adc_00426 */
        /* Software triggered groups can be configured in the following modes:
           (*) one-shot, single-access mode
           (*) continuous, linear streaming access mode
               continuous, circular streaming access mode
           The modes with a (*) can be implicitily stopped. */
        if ((ADC_CONV_MODE_ONESHOT == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eMode) ||
            ((ADC_ACCESS_MODE_STREAMING == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eAccessMode) &&
             (ADC_STREAM_BUFFER_LINEAR == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eBufferMode)))
        {
            /* The current group can be implicitly stopped */
            bImplicity = (boolean)TRUE;
        }
        else
        {
            /* The current group cannot be implicitly stopped */
            bImplicity = (boolean)FALSE;
        }
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
        /* enter critical section to protect against ISR updating the global */
        /* variables used in tests - consistency                             */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE)
#if (ADC_ENABLE_QUEUING == STD_OFF)
        /* SWS_Adc_00346, SWS_Adc_00426 */
        /* It is equivalent to the queue depth is 1 when ADC queueing is disabled */
        if (((Adc_QueueIndexType)0U != Adc_aUnitStatus[UnitId].SwNormalQueueIndex)
#if (ADC_HW_TRIGGER_API == STD_ON)
            || ((Adc_QueueIndexType)0U != Adc_aUnitStatus[UnitId].HwNormalQueueIndex)
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        )
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_STARTGROUPCONVERSION_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
#else /* (ADC_ENABLE_QUEUING == STD_ON) */
        /* SWS_Adc_00351 */
        if (((boolean)FALSE == bImplicity) && (ADC_IDLE != Adc_aGroupStatus[Group].eConversion))
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_STARTGROUPCONVERSION_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        /* SWS_Adc_00428 */
        else if (((boolean)TRUE == bImplicity) && (ADC_IDLE != Adc_aGroupStatus[Group].eConversion) &&
                 (ADC_STREAM_COMPLETED != Adc_aGroupStatus[Group].eConversion))
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_STARTGROUPCONVERSION_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
#endif /* ADC_ENABLE_QUEUING == STD_OFF */
#else  /* (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) */
        /* SWS_Adc_00335 */
        for (Index = (uint8)0U; Index < Adc_aUnitStatus[UnitId].SwNormalQueueIndex; Index++)
        {
            if (Group == Adc_aUnitStatus[UnitId].SwNormalQueue[Index])
            {
                bGroupInQueue = (boolean)TRUE;
                break;
            }
        }

        /* SWS_Adc_00348 */
        /* When the group is in the queue, it means:
           (*) The conversion of the same group is currently ongoing. In this case, the group is the
               first element of the queue
               or
           (*) A conversion request for the same group is already stored one time in the queue */
        if (((boolean)TRUE == bGroupInQueue) && ((boolean)FALSE == bImplicity))
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_STARTGROUPCONVERSION_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        /* SWS_Adc_00427 */
        else if (((ADC_IDLE != Adc_aGroupStatus[Group].eConversion) &&
                  (ADC_STREAM_COMPLETED != Adc_aGroupStatus[Group].eConversion)) &&
                 ((boolean)TRUE == bImplicity))
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_STARTGROUPCONVERSION_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
#endif /* ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE */
        else if ((Adc_aUnitStatus[UnitId].SwNormalQueueIndex >= (ADC_QUEUE_MAX_DEPTH))
#if (ADC_HW_TRIGGER_API == STD_ON)
                 || ((Adc_QueueIndexType)0U != Adc_aUnitStatus[UnitId].HwNormalQueueIndex)
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        )
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* Error: queue is full */
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_STARTGROUPCONVERSION_ID,
                                         (uint8)ADC_E_QUEUE_FULL);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            /* everything ok, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
            Adc_Hal_StartConversion(UnitId, Group, CoreId);
        }
    }
}

/**
 * @brief          Stops the conversion of all channels of the requested ADC
 *                 Channel group.
 * @details        This function will stop the SW conversion of all channels
 *                 of the requested ADC channel group.
 *
 * @param[in]      Group       Numeric ID of requested ADC channel group.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x03.
 * @note           Synchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00368
 */
ADC_TEXT_SECTION void Adc_StopGroupConversion(Adc_GroupType Group)
{
    /* ADC Hardware unit on which the requested group will run */
    Adc_HwUnitType UnitId = (Adc_HwUnitType)0;
    uint8          CoreId = Adc_GetCoreID();

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00295 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STOPGROUPCONVERSION_ID,
                              (uint8)ADC_E_UNINIT);
    }
    /* SWS_Adc_00126 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STOPGROUPCONVERSION_ID,
                              (uint8)ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STOPGROUPCONVERSION_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    /* SWS_Adc_00164 */
    else if (ADC_TRIGG_SRC_SW != (Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTriggerSource))
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_STOPGROUPCONVERSION_ID,
                              (uint8)ADC_E_WRONG_TRIGG_SRC);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* enter critical section */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_02();
        /* SWS_Adc_00241 */
        if (ADC_IDLE == Adc_aGroupStatus[Group].eConversion)
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_02();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_STOPGROUPCONVERSION_ID,
                                         (uint8)ADC_E_IDLE);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            /* everything ok, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_02();
            /* Get the unit to which the group belongs to */
            UnitId = Adc_Cfg_Ptr[CoreId]->pGroups[Group].UnitId;
            Adc_Hal_StopConversion(UnitId, Group, CoreId);
        }
    }
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if (ADC_READ_GROUP_API == STD_ON)
/**
 * @brief          Reads the group conversion results.
 * @details        Reads the group conversion results of the last completed
 *                 conversion round of the requested group and stores the
 *                 channel values starting at the pDataBufferPtr address.
 *                 The group channel values are stored in ascending channel
 *                 number order (in contrast to the storage layout of the
 *                 result buffer if streaming access is configured).
 *
 * @param[in]      Group          Numeric ID of requested ADC Channel group.
 * @param[in]      pDataBufferPtr  ADC results of all channels of the selected group
 *                                are stored in the data buffer addressed with the pointer.
 * @return         Std_ReturnType Standard return type.
 * @retval         E_OK:          results are available and written to the
 *                                data buffer.
 * @retval         E_NOT_OK:      no results are available or development
 *                                error occured.
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x04.
 * @note           Synchronous.
 * @note           Reentrant function.
 * @implements     SWS_Adc_00369
 */
ADC_TEXT_SECTION Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr)
{
    /* Return Value */
    Std_ReturnType GroupRet = E_NOT_OK;
    uint8          CoreId   = Adc_GetCoreID();

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00296 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_VALUEREADGROUP_ID,
                              (uint8)ADC_E_UNINIT);
    }
    /* SWS_Adc_00152 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_VALUEREADGROUP_ID,
                              (uint8)ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_VALUEREADGROUP_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* enter critical section */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_03();
        /* SWS_Adc_00388 */
        if ((ADC_IDLE == Adc_aGroupStatus[Group].eConversion) &&
            (ADC_NOT_YET_CONVERTED == Adc_aGroupStatus[Group].eAlreadyConverted))
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_03();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_VALUEREADGROUP_ID,
                                         (uint8)ADC_E_IDLE);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            /* everything ok, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_03();
            GroupRet = Adc_Hal_ReadGroup(Group, CoreId, DataBufferPtr);
        }
    }
    return (GroupRet);
}
#endif /* (ADC_READ_GROUP_API == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief          Enables the hardware trigger for the requested ADC Channel group.
 * @details        This function will enable the HW trigger source for the requested
 *                 ADC channel group. This function does set the CTU register for all
 *                 platform that have the CTU Hw Unit.
 *
 * @param[in]      Group       Numeric ID of requested ADC channel group.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x05.
 * @note           Synchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00370
 */
ADC_TEXT_SECTION void Adc_EnableHardwareTrigger(Adc_GroupType Group)
{
    /* ADC Hardware unit on which the requested group will run */
    Adc_HwUnitType UnitId = 0U;
    uint8          CoreId = Adc_GetCoreID();

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00297 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_UNINIT);
    }
    /* SWS_Adc_00128 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    /* SWS_Adc_00425 */
    else if (NULL_PTR == Adc_aGroupStatus[Group].pResultsBuffer)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_BUFFER_UNINIT);
    }
    /* SWS_Adc_00281 */
    else if (ADC_CONV_MODE_ONESHOT != (Adc_Cfg_Ptr[CoreId]->pGroups[Group].eMode))
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_WRONG_CONV_MODE);
    }
    /* SWS_Adc_00136 */
    else if (ADC_TRIGG_SRC_SW == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTriggerSource)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_WRONG_TRIGG_SRC);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* Get the unit to which the group belongs to */
        UnitId = Adc_Cfg_Ptr[CoreId]->pGroups[Group].UnitId;
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_04();
#if (ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE)
        /* SWS_Adc_00349 */
        if (ADC_HWTRIGGER_ENABLED == Adc_aGroupStatus[Group].eHwTriggering)
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        /* SWS_Adc_00321 */
        else if (((Adc_QueueIndexType)0U != Adc_aUnitStatus[UnitId].HwNormalQueueIndex)
#if (ADC_ENABLE_QUEUING == STD_OFF)
                 || ((Adc_QueueIndexType)0U != Adc_aUnitStatus[UnitId].SwNormalQueueIndex)
#endif /* ADC_ENABLE_QUEUING == STD_OFF */
        )
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
#else /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
        /* SWS_Adc_00349 */
        if ((ADC_HWTRIGGER_ENABLED == Adc_aGroupStatus[Group].eHwTriggering) &&
            ((Adc_QueueIndexType)0U != Adc_aUnitStatus[UnitId].HwNormalQueueIndex))
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        /* SWS_Adc_00353 */
        else if ((Adc_aUnitStatus[UnitId].HwNormalQueueIndex >= (Adc_QueueIndexType)ADC_HW_QUEUE) ||
                 ((Adc_QueueIndexType)0U != Adc_aUnitStatus[UnitId].SwNormalQueueIndex))
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_ENABLEHARDWARETRIGGER_ID,
                                         (uint8)ADC_E_BUSY);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
#endif /* ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE */
        {
            /* Exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04();
            Adc_Hal_EnableHardwareTrigger(UnitId, Group, CoreId);
        }
    }
}

/**
 * @brief          Disables the hardware trigger for the requested ADC Channel group.
 * @details        This function will disable the HW trigger source for the requested
 *                 ADC channel group.
 *
 * @param[in]      Group       Numeric ID of requested ADC channel group.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x06.
 * @note           Synchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00371
 */
ADC_TEXT_SECTION void Adc_DisableHardwareTrigger(Adc_GroupType Group)
{
    /* ADC Hardware unit on which the requested group will run */
    Adc_HwUnitType UnitId = (Adc_HwUnitType)0;
    uint8          CoreId = Adc_GetCoreID();

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00298 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_UNINIT);
    }
    /* SWS_Adc_00129 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    /* SWS_Adc_00282 */
    else if ((Adc_Cfg_Ptr[CoreId]->pGroups[Group].eMode) != ADC_CONV_MODE_ONESHOT)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_WRONG_CONV_MODE);
    }
    /* SWS_Adc_00137 */
    else if (Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTriggerSource == ADC_TRIGG_SRC_SW)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEHARDWARETRIGGER_ID,
                              (uint8)ADC_E_WRONG_TRIGG_SRC);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* Enter critical section */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_05();
        /* SWS_Adc_00304 */
        if (ADC_HWTRIGGER_DISABLED == Adc_aGroupStatus[Group].eHwTriggering)
        {
            /* Exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_05();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_DISABLEHARDWARETRIGGER_ID,
                                         (uint8)ADC_E_IDLE);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            /* Exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_05();
            /* Get the unit to which the group belongs to */
            UnitId = Adc_Cfg_Ptr[CoreId]->pGroups[Group].UnitId;
            Adc_Hal_DisableHardwareTrigger(UnitId, Group, CoreId);
        }
    }
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
/**
 * @brief          Enables the notification mechanism for the requested ADC
 *                 channel group.
 * @details        This function will enable the notification mechanism only for
 *                 the requested ADC channel group.
 *
 * @param[in]      Group       Numeric ID of requested ADC channel group.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x07.
 * @note           Synchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00372
 */
ADC_TEXT_SECTION void Adc_EnableGroupNotification(Adc_GroupType Group)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint8 CoreId = Adc_GetCoreID();

    /* SWS_Adc_00299 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_UNINIT);
    }
    /* SWS_Adc_00130 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    /* SWS_Adc_00165 */
    else if (NULL_PTR == Adc_Cfg_Ptr[CoreId]->pGroups[Group].Notification)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_ENABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_NOTIF_CAPABILITY);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_ENABLED;
    }
}

/**
 * @brief          Disables the notification mechanism for the requested ADC
 *                 channel group.
 * @details        This function will disable the notification mechanism only for
 *                 the requested ADC channel group.
 *
 * @param[in]      Group       Numeric ID of requested ADC channel group.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x08.
 * @note           Synchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00373
 */
ADC_TEXT_SECTION void Adc_DisableGroupNotification(Adc_GroupType Group)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint8 CoreId = Adc_GetCoreID();

    /* SWS_Adc_00300 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_UNINIT);
    }
    /* SWS_Adc_00131 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_PARAM_GROUP);
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    /* SWS_Adc_00166 */
    else if (NULL_PTR == Adc_Cfg_Ptr[CoreId]->pGroups[Group].Notification)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_DISABLEGROUPNOTIFICATION_ID,
                              (uint8)ADC_E_NOTIF_CAPABILITY);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_DISABLED;
    }
}
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */

/**
 * @brief          Returns the conversion status of the requested ADC Channel group.
 * @details        This function will return the conversion status of the requested
 *                 ADC channel group.
 *
 * @param[in]      Group             Numeric ID of requested ADC channel group.
 * @return         Adc_StatusType    Conversion status for the requested group.
 * @retval         ADC_IDLE          in case of errors.
 * @retval         conversion status in case of no errors.
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x09.
 * @note           Synchronous.
 * @note           Re-entrant function.
 * @implements     SWS_Adc_00374
 */
ADC_TEXT_SECTION Adc_StatusType Adc_GetGroupStatus(Adc_GroupType Group)
{
    Adc_StatusType eRet   = ADC_IDLE;
    uint8          CoreId = Adc_GetCoreID();

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00301 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_GETGROUPSTATUS_ID,
                              (uint8)ADC_E_UNINIT);
        eRet = ADC_IDLE;
    }
    /* SWS_Adc_00225 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_GETGROUPSTATUS_ID,
                              (uint8)ADC_E_PARAM_GROUP);
        eRet = ADC_IDLE;
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_GETGROUPSTATUS_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* To comply with the state diagram of Software triggered One-Shot conversion without
         * notification */
        if (ADC_TRANSFER_TYPE_POLLING == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTransferType)
        {
            Adc_Hal_UpdateGroupStatusWithoutInterrupt(Group, CoreId);
        }
        /* enter critical section to protect Adc_aGroupStatus read */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_06();
        eRet = Adc_aGroupStatus[Group].eConversion;
        /* exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_06();
    }

    return (eRet);
}

/**
 * @brief          Returns the number of valid samples per channel.
 * @details        Returns the number of valid samples per channel, stored in
 *                 the result buffer. Reads a pointer, pointing to a position
 *                 in the group result buffer. With the pointer position, the
 *                 results of all group channels of the last completed conversion
 *                 round can be accessed. With the pointer and the return value,
 *                 all valid group conversion results can be accessed (the user
 *                 has to take the layout of the result buffer into account).
 *
 * @param[in]      Group              Numeric ID of requested ADC channel group.
 * @param[out]     PtrToSamplePtr     Pointer to result buffer pointer.
 *
 * @return         Adc_StreamNumSampleType Number of valid samples per channel.
 * @retval         0                 in case of errors.
 * @retval         >0                Number of valid samples per channel.
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x0B.
 * @note           Synchronous.
 * @note           Reentrant function.
 * @implements     SWS_Adc_00375
 */
ADC_TEXT_SECTION Adc_StreamNumSampleType Adc_GetStreamLastPointer(Adc_GroupType Group,
                                                                  Adc_ValueGroupType **PtrToSamplePtr)
{
    uint8 CoreId = Adc_GetCoreID();
    /* Number of samples to return */
    Adc_StreamNumSampleType NumberOfResults = 0U;
    Adc_StreamNumSampleType ResultIndex     = 0U;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00302 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_GETSTREAMLASTPOINTER_ID,
                              (uint8)ADC_E_UNINIT);
        *PtrToSamplePtr = NULL_PTR;
    }
    /* SWS_Adc_00218 */
    else if (Group >= ADC_MAX_GROUPS)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_GETSTREAMLASTPOINTER_ID,
                              (uint8)ADC_E_PARAM_GROUP);
        *PtrToSamplePtr = NULL_PTR;
    }
    else if (CoreId != Adc_Cfg_Ptr[CoreId]->pGroups[Group].CoreId)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_GETSTREAMLASTPOINTER_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
        *PtrToSamplePtr = NULL_PTR;
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* enter critical section to protect Adc_aGroupStatus read */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_07();
        /* SWS_Adc_00215 */
        if (ADC_IDLE == Adc_aGroupStatus[Group].eConversion)
        {
            /* error occured, exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_07();
#if (ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)ADC_GETSTREAMLASTPOINTER_ID,
                                         (uint8)ADC_E_IDLE);
#endif /* ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
            *PtrToSamplePtr = (Adc_ValueGroupType *)NULL_PTR;
        }
        /* SWS_Adc_00216 */
        else if (ADC_BUSY == Adc_aGroupStatus[Group].eConversion)
        {
            *PtrToSamplePtr = (Adc_ValueGroupType *)NULL_PTR;
            /* exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_07();
        }
        else
        {
            if ((Adc_StreamNumSampleType)0U == Adc_aGroupStatus[Group].ResultIndex)
            {
                ResultIndex =
                    (Adc_StreamNumSampleType)(Adc_Cfg_Ptr[CoreId]->pGroups[Group].NumSamples - 1U);
                NumberOfResults = Adc_Cfg_Ptr[CoreId]->pGroups[Group].NumSamples;
            }
            else
            {
                ResultIndex = (Adc_StreamNumSampleType)(Adc_aGroupStatus[Group].ResultIndex - 1U);
                NumberOfResults = Adc_aGroupStatus[Group].ResultIndex;
            }
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type.
             * Reason: The stream pointer is calculate by the start address of the result and the
             * result index, and thus the pointer arithmetic is required */
            *PtrToSamplePtr = (Adc_ValueGroupType *)(Adc_aGroupStatus[Group].pResultsBuffer +
                                                     ResultIndex);
            /* PRQA S 488 -- */
            /* update status to compilance with state diagram */
            Adc_UpdateStatusAfterGetStream(Group, CoreId);
            /* exit critical section */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_07();
        }
    }

    return (NumberOfResults);
}

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
#if (ADC_CALC_TEMPERATURE_API == STD_ON)
/**
 * @brief          This function calculates the temperature measured by TMU.
 *
 * @param[in]      Voltage   The TMU output voltage measured by ADC.
 *
 * @return         The temperature of the MCU
 *
 * @note           Synchronous.
 * @note           Reentrant function.
 *
 */
ADC_TEXT_SECTION float32 Adc_CalcTemperature(float32 Voltage)
{
    float32 Temperature;
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint8 CoreId = Adc_GetCoreID();
    /* SWS_Adc_00302 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_CALCTEMPERATURE_ID,
                              (uint8)ADC_E_UNINIT);
        Temperature = 0.0f;
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        Temperature = Adc_Hal_CalcTemperature(Voltage);
    }
    return Temperature;
}
#endif /* ADC_CALC_TEMPERATURE_API == STD_ON */

#if (ADC_GET_TEMPERATURE_STATUS_API == STD_ON)
/**
 * @brief          This function gets the temperature status of flag based TMU.
 *
 * @return         The temperature status of the MCU
 *
 * @note           Synchronous.
 * @note           Reentrant function.
 *
 */
ADC_TEXT_SECTION AdcTemperatureStatusType Adc_GetTemperatureStatus(void)
{
    AdcTemperatureStatusType eRet = ADC_TEMPERATURE_NORMAL;
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint8 CoreId = Adc_GetCoreID();
    /* SWS_Adc_00302 */
    if (NULL_PTR == Adc_Cfg_Ptr[CoreId])
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_CALCTEMPERATURE_ID,
                              (uint8)ADC_E_UNINIT);
    }
    else if (NULL_PTR == Adc_Cfg_Ptr[CoreId]->pTmu)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_CALCTEMPERATURE_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    else if (FALSE == Adc_Cfg_Ptr[CoreId]->pTmu[0U].bEnableFlagSensor)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_CALCTEMPERATURE_ID,
                              (uint8)ADC_E_PARAM_CONFIG);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        eRet = Adc_Hal_GetTemperatureStatus();
    }
    return eRet;
}
#endif /* ADC_GET_TEMPERATURE_STATUS_API == STD_ON */
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */

#if (ADC_VERSION_INFO_API == STD_ON)
/**
 * @brief          Returns the version information of this module.
 * @details        Returns the version information of this module.
 *
 * @param[out]     versioninfo    Pointer to where to store the version
 *                                 information of this module.
 * @return         void
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x0A.
 * @note           Synchronous.
 * @note           Reentrant function.
 * @implements     SWS_Adc_00376
 */
ADC_TEXT_SECTION void Adc_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00458 */
    if (NULL_PTR == versioninfo)
    {
        (void)Det_ReportError((uint16)ADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)ADC_GETVERSIONINFO_ID,
                              (uint8)ADC_E_PARAM_POINTER);
    }
    else
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    {
        (versioninfo)->vendorID         = (uint16)ADC_VENDOR_ID;
        (versioninfo)->moduleID         = (uint16)ADC_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)ADC_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)ADC_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)ADC_SW_PATCH_VERSION;
    }
}
#endif /* (ADC_VERSION_INFO_API == STD_ON) */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
