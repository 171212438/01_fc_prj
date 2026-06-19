/**
 *   @file    Adc_Hal.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - hardware abstraction layer driver source file.
 *   @details This is the hardware abstraction layer driver source file for ADC.
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
*   0.3.0       17/10/2023    QXW0030       N/A          Fix issues in group preemption
*   0.4.0       20/11/2023    QXW0030       N/A          Optimize critical section
*   0.5.0       07/12/2023    QXW0030       N/A          Fix state machine transition issue in
                                                         polling mode
*   0.5.0       11/01/2024    QXW0030       N/A          Add feature to config period in continuous mode
*   0.5.0       11/01/2024    QXW0030       N/A          Fix continuous with linear buffer not stop issue
*   0.6.0       02/02/2024    QXW0030       N/A          Fix the problem that sometimes disable hw
*                                                        trigger will failed
*   0.7.0       11/04/2024    QXW0030       N/A          Fix continuous mode not working
*   0.8.0       05/07/2024    QXW0030       N/A          Add support for Adc to use without Ptimer
*   0.8.0       16/07/2024    QXW0030       N/A          Add differential mode support
*   0.8.0       18/07/2024    QXW0030       N/A          Add TMU support
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       11/10/2024    QXW0030       N/A          Clear FIFO when overrun occurs
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       16/01/2025    QXW0030       N/A          Add DMA support for sequence group mode
*   1.2.0       06/05/2025    QXW0030       N/A          Fix the issue that DMA result position is
*                                                        incorrect in stream mode
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_Hal.h"
#include "Adc_Ipw.h"
#include "Adc_Ptimer.h"
#include "Adc_SarAdc_Reg.h"
#include "Adc_Types.h"
#include "Mcal.h"
#include "SchM_Adc.h"
#if (ADC_DMA_SUPPORT == STD_ON)
#include "CDD_Dma.h"
#endif

#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

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

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"
#if (ADC_ENABLE_QUEUING == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_RemoveFromQueue(const Adc_HwUnitType     Unit,
                                                           const Adc_QueueIndexType CurQueueIndex);
#endif /* ADC_ENABLE_QUEUING == STD_ON */

#if (ADC_READ_GROUP_API == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_Hal_ReadResultBuffer(const Adc_GroupType Group,
                                                                      const uint8         CoreId,
                                                                      Adc_ValueGroupType *pDataPtr);
#endif /* ADC_READ_GROUP_API == STD_ON */

ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_UpdateSwQueue(const Adc_HwUnitType Unit,
                                                         const Adc_GroupType  Group,
                                                         const uint8          CoreId);

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_UpdateHwQueue(const Adc_HwUnitType Unit,
                                                         const Adc_GroupType  Group,
                                                         const uint8          CoreId);
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#if (ADC_READ_GROUP_API == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_UpdateStatusReadGroup(const Adc_GroupType Group,
                                                                 const uint8         CoreId);
#endif /* ADC_READ_GROUP_API == STD_ON */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#if (ADC_ENABLE_QUEUING == STD_ON)
/**
 * @brief          This function performs the dequeue operation on the internal ADC queue.
 * @details        This function performs the dequeue operation on the internal ADC queue.
 *
 * @param[in]      Unit            The ADC unit logic id.
 * @param[in]      CurQueueIndex   The current queue index.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_RemoveFromQueue(const Adc_HwUnitType     Unit,
                                                           const Adc_QueueIndexType CurQueueIndex)
{
    Adc_QueueIndexType CurrentIndex = 0U;
#if (ADC_QUEUE_MAX_DEPTH > 1U)
    Adc_QueueIndexType PositionIndex = 0U;
#endif /* ADC_QUEUE_MAX_DEPTH > 1U */

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_08();
    CurrentIndex = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
    if (CurrentIndex <= (Adc_QueueIndexType)1U)
    {
        /* Zero or one element present in the queue */
        Adc_aUnitStatus[Unit].SwNormalQueueIndex = 0U;
    }
#if (ADC_QUEUE_MAX_DEPTH > 1U)
    else if (CurrentIndex <= ADC_QUEUE_MAX_DEPTH)
    {
        /* More than one element in the queue */
        /* Move all elements after the one to remove (from CurQueueIndex position) one place to the left */
        for (PositionIndex = (Adc_QueueIndexType)(CurQueueIndex + 1U); PositionIndex < CurrentIndex;
             PositionIndex++)
        {
            Adc_aUnitStatus[Unit].SwNormalQueue[PositionIndex - 1U] =
                (Adc_GroupType)Adc_aUnitStatus[Unit].SwNormalQueue[PositionIndex];
        }

        Adc_aUnitStatus[Unit].SwNormalQueueIndex =
            (Adc_QueueIndexType)(Adc_aUnitStatus[Unit].SwNormalQueueIndex - 1U);
    }
#endif /* ADC_QUEUE_MAX_DEPTH > 1U */
    else
    {
        /* This will never be reached. */
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_08();
}
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */

#if (ADC_READ_GROUP_API == STD_ON)
/**
 * @brief          This function reads the converted data for the requested group.
 * @details        Reads the converted data for the requested group.
 *
 * @param[in]      Group           The group id.
 * @param[in]      CoreId          The core ID of the caller.
 * @param[in]      pDataPtr        Pointer to a buffer which will be filled by the
 *                                 conversion results.
 * @return         Std_ReturnType  E_OK or E_NOT_OK.
 * @retval         E_OK            In case of successfull read of the converted data.
 * @retval         E_NOT_OK        In case of an ongoing conversion.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_Hal_ReadResultBuffer(const Adc_GroupType Group,
                                                                      const uint8         CoreId,
                                                                      Adc_ValueGroupType *pDataPtr)
{
    Std_ReturnType       ReadGroupRet = E_OK;
    Adc_ChannelIndexType Index;
    /* Pointer to AdcGroup */
    const Adc_GroupConfigurationType *pGroupPtr     = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    Adc_ChannelIndexType              ChannelCount  = pGroupPtr->AssignedChannelCount;
    const Adc_ValueGroupType         *pResultPtr    = NULL_PTR;
    uint32                            u32DestOffset = 0UL;
    Adc_StreamNumSampleType           ResultIndex   = (Adc_StreamNumSampleType)0;

    if (ADC_BUSY == Adc_aGroupStatus[Group].eConversion)
    {
        ReadGroupRet = E_NOT_OK;
    }
    else
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_09();
        /* Get index of last completed sample */
        if ((Adc_StreamNumSampleType)0 == Adc_aGroupStatus[Group].ResultIndex)
        {
            /* If the buffer pointer goes back to the head, then return the last index */
            ResultIndex = (Adc_StreamNumSampleType)(pGroupPtr->NumSamples - 1U);
        }
        else
        {
            ResultIndex = (Adc_StreamNumSampleType)(Adc_aGroupStatus[Group].ResultIndex - 1U);
        }

        /* PRQA S 488 ++ #Misra-C:2012: Rule-18.4 Performing pointer arithmetic.
         * Reason: The start address of the last completed sample is indicated by the start address
         * of the result buffer and the result index, and thus the pointer arithmetic is necessary */
        pResultPtr = (Adc_ValueGroupType *)(Adc_aGroupStatus[Group].pResultsBuffer + ResultIndex);
        /* PRQA S 488 -- */
        u32DestOffset = pGroupPtr->NumSamples;

        /* Copy results of last conversion from streaming buffer to internal buffer */
        for (Index = 0U; Index < ChannelCount; Index++)
        {
            pDataPtr[Index] = (*pResultPtr);
            /* PRQA S 488 ++ #Misra-C:2012: Rule-18.4 Performing pointer arithmetic.
             * Reason: The result buffer is a pointer provided by users and the pointer arithmetic
             * is essential to get the buffer data */
            pResultPtr += u32DestOffset;
            /* PRQA S 488 -- */
        }
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_09();

        ReadGroupRet = E_OK;
    }

    return (ReadGroupRet);
}
#endif /* (ADC_READ_GROUP_API == STD_ON) */

/**
 * @brief          This function updates software queue
 * @details        This function updates software queue elements after a conversion
 *                 and start conversion if requests are still available in queue
 *
 * @param[in]      Unit         The ADC unit logic id.
 * @param[in]      Group        The group id.
 * @param[in]      CoreId       The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_UpdateSwQueue(const Adc_HwUnitType Unit,
                                                         const Adc_GroupType  Group,
                                                         const uint8          CoreId)
{
    const Adc_GroupConfigurationType  *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    const Adc_HwUnitConfigurationType *pUnitPtr  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[Unit]);
    Adc_InstanceType                   HwType    = pUnitPtr->eUnitType;
    Adc_HwUnitType                     HwUnit    = pUnitPtr->AdcHardwareUnitId;
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_GroupType NextGroup;
#endif /* ADC_ENABLE_QUEUING == STD_ON */

    if (ADC_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        /* Need to restart conversion until buffer is full */
        Adc_Ipw_RestartContinuousConversion(HwType, HwUnit, pGroupPtr, CoreId);
    }
    else if (ADC_STREAM_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        /* (ADC_CONV_MODE_ONESHOT) ||
         * (ADC_ACCESS_MODE_STREAMING && ADC_STREAM_BUFFER_LINEAR) */
        if ((ADC_CONV_MODE_ONESHOT == pGroupPtr->eMode) ||
            ((ADC_STREAM_BUFFER_LINEAR == pGroupPtr->eBufferMode) &&
             (ADC_ACCESS_MODE_STREAMING == pGroupPtr->eAccessMode)))
        {
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
            /* The group queue should be updated only when HwGroup not enabled. */
            if (FALSE == pGroupPtr->bHwGroup)
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
            {
                /* (ADC_ACCESS_MODE_STREAMING && ADC_STREAM_BUFFER_LINEAR) */
#if ((STD_ON == ADC_ENABLE_PTIMER_SUPPORT) || (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT))
                /* When it's configured to be triggered periodically, it needs to be stopped
                 * manually. Otherwise, it will be stopped automatically. */
                if (TRUE == pGroupPtr->bUseContinuousPeriod)
                {
                    Adc_Ipw_StopGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
                    (void)Adc_Ipw_WaitConversionStopped(HwType, HwUnit);
                }
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT || STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
#if (ADC_ENABLE_QUEUING == STD_ON)
                /* Remove current request element in queue */
                Adc_Hal_RemoveFromQueue(Unit, (uint8)0U);
                if (Adc_aUnitStatus[Unit].SwNormalQueueIndex > (Adc_QueueIndexType)0U)
                {
                    /* Load the first group in the queue */
                    NextGroup = Adc_aUnitStatus[Unit].SwNormalQueue[0];
                    /* Load the group configuration */
                    pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[NextGroup]);
                    /* Start conversion if request elements are still available in queue */
                    Adc_Ipw_StartGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
                }
#else  /* ADC_ENABLE_QUEUING == STD_OFF */
                /* No element will be present in the queue */
                Adc_aUnitStatus[Unit].SwNormalQueueIndex = (Adc_QueueIndexType)0U;
#endif /* ADC_ENABLE_QUEUING == STD_ON */
            }
        }
        /* (ADC_CONV_MODE_CONTINUOUS) &&
         * ((ADC_ACCESS_MODE_STREAMING && ADC_STREAM_BUFFER_CIRCULAR) ||
         *  (ADC_ACCESS_MODE_SINGLE)) */
        else
        {
            Adc_Ipw_RestartContinuousConversion(HwType, HwUnit, pGroupPtr, CoreId);
        }
    }
    else
    {
        /* This shall never be reached */
    }
}

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief          This function updates hardware queue
 * @details        This function updates hardware queue elements after a conversion
 *                 and start conversion if requests are still available in queue
 *
 * @param[in]      Unit         The ADC unit logic id.
 * @param[in]      Group        The group id.
 * @param[in]      CoreId       The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_UpdateHwQueue(const Adc_HwUnitType Unit,
                                                         const Adc_GroupType  Group,
                                                         const uint8          CoreId)
{
    const Adc_GroupConfigurationType  *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    const Adc_HwUnitConfigurationType *pUnitPtr  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[Unit]);
    Adc_InstanceType                   HwType    = pUnitPtr->eUnitType;
    Adc_HwUnitType                     HwUnit    = pUnitPtr->AdcHardwareUnitId;

    /* Disable Hardware Trigger when linear stream completed */
    if ((Adc_aGroupStatus[Group].eConversion == ADC_STREAM_COMPLETED) &&
        (pGroupPtr->eAccessMode == ADC_ACCESS_MODE_STREAMING) &&
        (pGroupPtr->eBufferMode == ADC_STREAM_BUFFER_LINEAR))
    {
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
        if (pGroupPtr->bHwGroup == TRUE)
        {
            Adc_aGroupStatus[Group].eHwTriggering = ADC_HWTRIGGER_DISABLED;
            Adc_Ipw_StopGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
        }
        else
#endif
            if (Adc_aUnitStatus[Unit].HwNormalQueueIndex > 0U)
        {
            Adc_aGroupStatus[Group].eHwTriggering = ADC_HWTRIGGER_DISABLED;

            /* Disable the Hw Trigger manually. */
            Adc_Ipw_StopGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
            (void)Adc_Ipw_WaitConversionStopped(HwType, HwUnit);
            Adc_aUnitStatus[Unit].HwNormalQueueIndex =
                (Adc_QueueIndexType)(Adc_aUnitStatus[Unit].HwNormalQueueIndex - 1U);
        }
        else
        {
            /* This shall never be reached. */
        }
    }
#if (ADC_DMA_SUPPORT == STD_ON)
    /* When the access mode is stream and the stream is not completed, the DMA needs to be
     * reconfigured */
    else if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_STREAMING) &&
             (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_DMA))
    {
        Adc_Ipw_ConfigureDmaChannel(HwType, HwUnit, pGroupPtr, CoreId);
    }
#endif /* ADC_DMA_SUPPORT == STD_ON */
    else
    {
        /* Nothing for Misra */
    }
}
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#if (ADC_READ_GROUP_API == STD_ON)
/**
 * @brief          This function updates group status after read group data
 * @details        This function updates group status after read group data
 *
 * @param[in]      Group        The group id.
 * @param[in]      CoreId       The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_Hal_UpdateStatusReadGroup(const Adc_GroupType Group,
                                                                 const uint8         CoreId)
{
    const Adc_GroupConfigurationType *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_10();
    /* SWS_Adc_00331 */
    if (ADC_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        Adc_aGroupStatus[Group].ResultIndex = 0U;
        Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
    }
    else if (ADC_STREAM_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        if (ADC_TRIGG_SRC_SW == pGroupPtr->eTriggerSource)
        {
            /* SWS_Adc_00330 */
            if ((ADC_CONV_MODE_ONESHOT == pGroupPtr->eMode) ||
                ((ADC_ACCESS_MODE_STREAMING == pGroupPtr->eAccessMode) &&
                 (ADC_STREAM_BUFFER_LINEAR == pGroupPtr->eBufferMode)))
            {
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            /* SWS_Adc_00329 */
            else
            {
                /* Continuous */
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#if (ADC_HW_TRIGGER_API == STD_ON)
        else
        {
            /* SWS_Adc_00330 */
            if ((ADC_ACCESS_MODE_STREAMING == pGroupPtr->eAccessMode) &&
                (ADC_STREAM_BUFFER_LINEAR == pGroupPtr->eBufferMode))
            {
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            /* SWS_Adc_00329 */
            else
            {
                /* Simple One-shot mode, in other words in single access mode*/
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
    }
    else
    {
        /* Nothing for misra */
    }
    /* Exit critical section */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_10();
}
#endif /* (ADC_READ_GROUP_API == STD_ON) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief          This function initializes the ADC hardware module, and the ADC driver.
 * @details        This function initializes the ADC hardware module, and the ADC driver.
 *
 * @param[in]      pCfgPtr      Configuration data pointer.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Hal_Init(const Adc_ConfigType *pCfgPtr)
{
    /* Hardware Unit index */
    uint8          HwUnitIdx = 0U;
    Std_ReturnType AdcStatus = E_OK;
#if ((ADC_ENABLE_TMU_SUPPORT == STD_ON) && (ADC_TMU_SUPPORT_START_CNT == STD_ON))
    Std_ReturnType TmuStatus = E_OK;
#endif
    /* ADC hardware unit config pointer */
    const Adc_HwUnitConfigurationType *const *pSarAdcPtr = pCfgPtr->pSarAdcs;

#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    const Adc_HwUnitConfigurationType *const *pHsAdcPtr = pCfgPtr->pHsAdcs;
    /* Since calibration will consume much time in hardware, init the HSADC first to save time. */
    for (HwUnitIdx = 0U; HwUnitIdx < (uint8)pCfgPtr->HsAdcCount; HwUnitIdx++)
    {
        AdcStatus = Adc_Ipw_InitUnitHardware(ADC_INSTANCE_TYPE_HSADC,
                                             pHsAdcPtr[HwUnitIdx]->AdcHardwareUnitId,
                                             pHsAdcPtr[HwUnitIdx],
                                             pCfgPtr->CoreId);
        if (AdcStatus != E_OK)
        {
            break;
        }
    }
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
    /* Initialize for each TMU hardware unit */
    for (HwUnitIdx = 0U; HwUnitIdx < (uint8)pCfgPtr->TmuUnitCount; HwUnitIdx++)
    {
        Adc_Tmu_InitUnitHardware(pCfgPtr->pTmu[HwUnitIdx].TmuHardwareUnitId,
                                 &(pCfgPtr->pTmu[HwUnitIdx]));
    }
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */

#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    if (AdcStatus == E_OK)
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */
    {
        /* Initialize for each ADC hardware unit (eg: ADC0, ADC1...) */
        for (HwUnitIdx = 0U; HwUnitIdx < (uint8)pCfgPtr->SarAdcCount; HwUnitIdx++)
        {
            AdcStatus = Adc_Ipw_InitUnitHardware(ADC_INSTANCE_TYPE_SARADC,
                                                 pSarAdcPtr[HwUnitIdx]->AdcHardwareUnitId,
                                                 pSarAdcPtr[HwUnitIdx],
                                                 pCfgPtr->CoreId);
            if (AdcStatus != E_OK)
            {
                break;
            }
        }
    }
#if ((ADC_ENABLE_TMU_SUPPORT == STD_ON) && (ADC_TMU_SUPPORT_START_CNT == STD_ON))
    /* Wait TMU hardware units to be ready */
    for (HwUnitIdx = 0U; HwUnitIdx < (uint8)pCfgPtr->TmuUnitCount; HwUnitIdx++)
    {
        TmuStatus = Adc_Tmu_WaitReady(pCfgPtr->pTmu[HwUnitIdx].TmuHardwareUnitId,
                                      &(pCfgPtr->pTmu[HwUnitIdx]));
        if (TmuStatus != E_OK)
        {
            break;
        }
    }
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON && ADC_TMU_SUPPORT_START_CNT == STD_ON */
#if ((ADC_ENABLE_HSADC_SUPPORT == STD_ON) && (HSADC_INIT_CALIBRATION == STD_ON))
    if (AdcStatus == E_OK)
    {
        AdcStatus =
            Adc_Ipw_WaitCalibrationDone(pHsAdcPtr, (uint8)pCfgPtr->HsAdcCount, pCfgPtr->CoreId);
    }
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON && HSADC_INIT_CALIBRATION == STD_ON */
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
    {
        if (
#if ((ADC_ENABLE_TMU_SUPPORT == STD_ON) && (ADC_TMU_SUPPORT_START_CNT == STD_ON))
            (TmuStatus == E_OK) &&
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON && ADC_TMU_SUPPORT_START_CNT == STD_ON */
            (AdcStatus == E_OK))
        {
            /* Report production error and return from function. */
            (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id, DEM_EVENT_STATUS_PASSED);
        }
        else
        {
            /* Report production error and return from function. */
            (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id, DEM_EVENT_STATUS_FAILED);
        }
    }
#endif
}

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief          This function deinitializes the ADC driver, and the ADC hardware.
 * @details        This function deinitializes the ADC driver, and ensures that the ADC hardware
 *                 will be in the power on after reset state.
 *
 * @param[in]      CoreId       The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Hal_DeInit(const uint8 CoreId)
{
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    Adc_GroupType GroupIdx = 0U;
    Adc_GroupType Group    = 0U;
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */
    /* Hardware Unit index */
    uint8 HwUnitIdx = 0U;

    /* ADC hardware unit config pointer */
    const Adc_HwUnitConfigurationType *const *pSarAdcPtr = Adc_Cfg_Ptr[CoreId]->pSarAdcs;
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    const Adc_HwUnitConfigurationType *const *pHsAdcPtr = Adc_Cfg_Ptr[CoreId]->pHsAdcs;
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */

    /* De-initialize each ADC hardware unit */
    for (HwUnitIdx = 0U; HwUnitIdx < (uint8)Adc_Cfg_Ptr[CoreId]->SarAdcCount; HwUnitIdx++)
    {
        Adc_Ipw_DeInitUnitHardware(ADC_INSTANCE_TYPE_SARADC,
                                   pSarAdcPtr[HwUnitIdx]->AdcHardwareUnitId,
                                   pSarAdcPtr[HwUnitIdx],
                                   CoreId);
    }
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    /* De-initialize each HSADC hardware unit */
    for (HwUnitIdx = 0U; HwUnitIdx < (uint8)Adc_Cfg_Ptr[CoreId]->HsAdcCount; HwUnitIdx++)
    {
        Adc_Ipw_DeInitUnitHardware(ADC_INSTANCE_TYPE_HSADC,
                                   pHsAdcPtr[HwUnitIdx]->AdcHardwareUnitId,
                                   pHsAdcPtr[HwUnitIdx],
                                   CoreId);
    }
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */

    /* Disable notification of all available groups */
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    for (GroupIdx = (Adc_GroupType)0U; GroupIdx < Adc_Cfg_Ptr[CoreId]->GroupCount; GroupIdx++)
    {
        Group = Adc_Cfg_Ptr[CoreId]->pGroupPtr[GroupIdx]->AdcGroupId;
        Adc_aGroupStatus[Group].eNotification  = ADC_NOTIFICATION_DISABLED;
        Adc_aGroupStatus[Group].pResultsBuffer = NULL_PTR;
    }
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
    /* De-initialize for each TMU hardware unit */
    for (HwUnitIdx = 0U; HwUnitIdx < (uint8)Adc_Cfg_Ptr[CoreId]->TmuUnitCount; HwUnitIdx++)
    {
        Adc_Tmu_DeInitUnitHardware(Adc_Cfg_Ptr[CoreId]->pTmu[HwUnitIdx].TmuHardwareUnitId);
    }
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */
}
#endif /* #if (ADC_DEINIT_API == STD_ON) */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/**
 * @brief          This function update queue before start a group conversion.
 * @details        This function update queue before start a group conversion.
 *
 * @param[in]      Group     The group id.
 * @param[in]      Unit      The ADC unit logic id.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Hal_StartConversion(const Adc_HwUnitType Unit,
                                              const Adc_GroupType  Group,
                                              const uint8          CoreId)
{
    /* Position of the new Group in the Queue */
    Adc_QueueIndexType                 TargetPos  = 0U;
    Adc_QueueIndexType                 CurrentPos = 0U;
    const Adc_GroupConfigurationType  *pGroupPtr  = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    const Adc_HwUnitConfigurationType *pUnitPtr   = &(Adc_Cfg_Ptr[CoreId]->pAdcs[Unit]);
    Adc_InstanceType                   HwType     = pUnitPtr->eUnitType;
    Adc_HwUnitType                     HwUnit     = pUnitPtr->AdcHardwareUnitId;
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
    Adc_GroupType         PreGroup = 0U;
    Adc_GroupPriorityType gPri     = pGroupPtr->Priority;
    Std_ReturnType        DemTest  = E_OK;
#if (ADC_QUEUE_MAX_DEPTH != 1U)
    /* Temporary index in the Queue */
    Adc_QueueIndexType QueueTemp = 0U;
#endif /* ADC_QUEUE_MAX_DEPTH != 1U */
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11();
    /* Mark the Group as BUSY when the Group goes to the Queue or gets started */
    Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
    Adc_aGroupStatus[Group].ResultIndex = 0U;

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (TRUE == pGroupPtr->bHwGroup)
    {
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11();
        Adc_Ipw_StartGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    {
        CurrentPos = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /* Find the right place in Queue (SWS_Adc_00332, SWS_Adc_00417) */
        while (CurrentPos > TargetPos)
        {
            PreGroup = Adc_aUnitStatus[Unit].SwNormalQueue[TargetPos];
            if (gPri > Adc_Cfg_Ptr[CoreId]->pGroups[PreGroup].Priority)
            {
                break;
            }
            TargetPos++;
        }
        if ((0U == TargetPos) && (0U != CurrentPos))
        {
            /* Highest priority group detected */
            Adc_Ipw_StopGroupConversion(HwType,
                                        HwUnit,
                                        &(Adc_Cfg_Ptr[CoreId]->pGroups[PreGroup]),
                                        CoreId);
        }

#if (ADC_QUEUE_MAX_DEPTH != 1U)
        /* Make space for the new Group */
        /* Since the queue depth has been verified in Adc_StartGroupConversion, we do not need to
         * check it here */
        if (CurrentPos > TargetPos)
        {
            for (QueueTemp = CurrentPos; QueueTemp > TargetPos; QueueTemp--)
            {
                /* Move elements to the right */
                Adc_aUnitStatus[Unit].SwNormalQueue[QueueTemp] =
                    (Adc_GroupType)Adc_aUnitStatus[Unit].SwNormalQueue[QueueTemp - 1U];
            }
        }
#endif /* ADC_QUEUE_MAX_DEPTH != 1U */
#else  /* ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE */
        /* The parameters check in Adc_StartGroupConversion has guaranteed the CurrentPos will not
         * exceed the queue depth */
        TargetPos = CurrentPos;
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
        if (TargetPos < ADC_QUEUE_MAX_DEPTH)
        {
            /* Place the Group in the Queue */
            Adc_aUnitStatus[Unit].SwNormalQueue[TargetPos] = Group;
            /* Increase the Queue Index */
            Adc_aUnitStatus[Unit].SwNormalQueueIndex =
                (Adc_QueueIndexType)(Adc_aUnitStatus[Unit].SwNormalQueueIndex + 1U);
        }
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11();

        /* If the target group is the first element of the queue, start the conversion */
        if (0U == TargetPos)
        {
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
            if (0U != CurrentPos)
            {
                DemTest = Adc_Ipw_WaitConversionStopped(HwType, HwUnit);
            }
            if (DemTest == E_OK)
            {
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
                /* Start the Sw-triggered Adc group conversion */
                Adc_Ipw_StartGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
            }
            else
            {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
                {
                    /* Report production error and return from function. */
                    (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id,
                                             DEM_EVENT_STATUS_FAILED);
                }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
            }
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
        }
    }
}

/**
 * @brief          This function update queue before stop a group conversion.
 * @details        This function update queue before stop a group conversion.
 *
 * @param[in]      Unit      The ADC unit logic id.
 * @param[in]      Group     The group id.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Hal_StopConversion(const Adc_HwUnitType Unit,
                                             const Adc_GroupType  Group,
                                             const uint8          CoreId)
{
    const Adc_GroupConfigurationType  *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    const Adc_HwUnitConfigurationType *pUnitPtr  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[Unit]);
    Adc_InstanceType                   HwType    = pUnitPtr->eUnitType;
    Adc_HwUnitType                     HwUnit    = pUnitPtr->AdcHardwareUnitId;
    Std_ReturnType                     DemTest   = E_OK;
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType SwNormalQueueIndex = 0U;
    Adc_QueueIndexType RemovedPos         = 0U;
    Adc_GroupType      NextGroup;
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
    Adc_StatusType eConversion;

    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_12();
    eConversion = Adc_aGroupStatus[Group].eConversion;

    /* Reset number of samples completed */
    Adc_aGroupStatus[Group].ResultIndex = 0U;
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    /* Disable group notification (SWS_Adc_00155) */
    Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_DISABLED;
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */
    if (((ADC_CONV_MODE_ONESHOT == pGroupPtr->eMode) ||
         ((ADC_ACCESS_MODE_STREAMING == pGroupPtr->eAccessMode) &&
          (ADC_STREAM_BUFFER_LINEAR == pGroupPtr->eBufferMode))) &&
        (ADC_STREAM_COMPLETED == eConversion))
    {
        /* Group is stopped, change its status to IDLE */
        /* The group whose conversion status is ADC_STREAM_COMPLETED has been removed from queue
           when its status changed to ADC_STREAM_COMPLETED, and thus no other actions need here. */
        Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12();
    }
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    else if (TRUE == pGroupPtr->bHwGroup)
    {
        /* group is stopped, change its status to IDLE  */
        Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
        /* SWS_Adc_00384 */
        Adc_aGroupStatus[Group].eAlreadyConverted = ADC_NOT_YET_CONVERTED;
        Adc_Ipw_StopGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12();
    }
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    else
    {
#if (ADC_ENABLE_QUEUING == STD_ON)
        /* Find the Group in the Queue */
        RemovedPos = Adc_aUnitStatus[Unit].SwNormalQueueIndex;

        for (SwNormalQueueIndex = 0U; SwNormalQueueIndex < Adc_aUnitStatus[Unit].SwNormalQueueIndex;
             SwNormalQueueIndex++)
        {
            if (Group == Adc_aUnitStatus[Unit].SwNormalQueue[SwNormalQueueIndex])
            {
                /* The group is found in the Queue */
                /* Store the position of the group to be removed */
                RemovedPos = SwNormalQueueIndex;

                /* In this case the group might be under conversion */
                if ((Adc_QueueIndexType)0U == RemovedPos)
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
                {
                    /* stop the conversion of all channels belonging to this group */
                    Adc_Ipw_StopGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
                }
#if (ADC_ENABLE_QUEUING == STD_ON)
                /* Remove group from Queue */
                Adc_Hal_RemoveFromQueue(Unit, RemovedPos);
                /* Group found, exit loop */
                break;
            }
        }
#else
        /* No element will be present in the queue */
        Adc_aUnitStatus[Unit].SwNormalQueueIndex = 0U;
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */

        /* group is stopped, change its status to IDLE  */
        Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
        /* SWS_Adc_00384 */
        Adc_aGroupStatus[Group].eAlreadyConverted = ADC_NOT_YET_CONVERTED;
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12();

#if (ADC_ENABLE_QUEUING == STD_ON)
        /* Stop the conversion if it's ongoing */
        if ((Adc_QueueIndexType)0U == RemovedPos)
        {
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
            DemTest = Adc_Ipw_WaitConversionStopped(HwType, HwUnit);
#if (ADC_ENABLE_QUEUING == STD_ON)
            /* Start the next group in the Queue (if any) */
            if ((DemTest == E_OK) &&
                (Adc_aUnitStatus[Unit].SwNormalQueueIndex > (Adc_QueueIndexType)0U))
            {
                /* Load the first group in the queue */
                NextGroup = Adc_aUnitStatus[Unit].SwNormalQueue[0];
                /* Load the group configuration */
                pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[NextGroup]);
                /* Structures and pointers will be initialized when the next Group starts */
                Adc_Ipw_StartGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
            }
        }
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
        if (DemTest == E_NOT_OK)
        {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
            {
                /* Report production error and return from function. */
                (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id,
                                         DEM_EVENT_STATUS_FAILED);
            }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
        }
    }
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief          This function update the group status before enable the hardware trigger
 * @details        This function update the group status before enable the hardware trigger
 *
 * @param[in]      Unit     The ADC unit logic id.
 * @param[in]      Group    The group id.
 * @param[in]      CoreId   The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Hal_EnableHardwareTrigger(const Adc_HwUnitType Unit,
                                                    const Adc_GroupType  Group,
                                                    const uint8          CoreId)
{
    const Adc_GroupConfigurationType  *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    const Adc_HwUnitConfigurationType *pUnitPtr  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[Unit]);
    Adc_InstanceType                   HwType    = pUnitPtr->eUnitType;
    Adc_HwUnitType                     HwUnit    = pUnitPtr->AdcHardwareUnitId;
    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13();

    /* Mark the Group as BUSY when the Group goes to the Queue or gets started */
    Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
    /* if HW trigger is enabled for a group, its HW trigger status becomes ENABLED */
    Adc_aGroupStatus[Group].eHwTriggering = ADC_HWTRIGGER_ENABLED;
    /* Put the conversion results from Results Buffer Base Address */
    Adc_aGroupStatus[Group].ResultIndex = 0U;
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (TRUE == pGroupPtr->bHwGroup)
    {
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13();
        Adc_Ipw_EnableHardwareTrigger(HwType, HwUnit, pGroupPtr, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    {
        Adc_aUnitStatus[Unit].HwNormalQueue[Adc_aUnitStatus[Unit].HwNormalQueueIndex] = Group;
        Adc_aUnitStatus[Unit].HwNormalQueueIndex =
            (Adc_QueueIndexType)(Adc_aUnitStatus[Unit].HwNormalQueueIndex + 1U);
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13();
        Adc_Ipw_EnableHardwareTrigger(HwType, HwUnit, pGroupPtr, CoreId);
    }
}

/**
 * @brief          This function update the group status before disable the hardware trigger
 * @details        This function update the group status before disable the hardware trigger
 *
 * @param[in]      Unit      The ADC unit logic id.
 * @param[in]      Group     The group id.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Hal_DisableHardwareTrigger(const Adc_HwUnitType Unit,
                                                     const Adc_GroupType  Group,
                                                     const uint8          CoreId)
{
    const Adc_GroupConfigurationType  *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    const Adc_HwUnitConfigurationType *pUnitPtr  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[Unit]);
    Adc_InstanceType                   HwType    = pUnitPtr->eUnitType;
    Adc_HwUnitType                     HwUnit    = pUnitPtr->AdcHardwareUnitId;
    Std_ReturnType                     DemTest   = E_OK;
    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14();
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    /* If HW trigger is disabled for a group, its HW trigger status becomes DISABLED */
    Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_DISABLED;
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */

    /* Mark the Group status as IDLE */
    Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
    /* SWS_Adc_00384 */
    Adc_aGroupStatus[Group].eAlreadyConverted = ADC_NOT_YET_CONVERTED;
    /* Hardware trigger is disabled */
    Adc_aGroupStatus[Group].eHwTriggering = ADC_HWTRIGGER_DISABLED;

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (TRUE == pGroupPtr->bHwGroup)
    {
        Adc_Ipw_StopGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14();
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    {
        if (Adc_aUnitStatus[Unit].HwNormalQueueIndex > 0U)
        {
            Adc_Ipw_StopGroupConversion(HwType, HwUnit, pGroupPtr, CoreId);
            Adc_aUnitStatus[Unit].HwNormalQueueIndex =
                (Adc_QueueIndexType)(Adc_aUnitStatus[Unit].HwNormalQueueIndex - 1U);
        }
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14();

        DemTest = Adc_Ipw_WaitConversionStopped(HwType, HwUnit);
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        /* Dem error was checked and failed, so it must be reported failed */
        if ((E_OK != DemTest) && ((uint32)STD_ON == Adc_E_TimeoutCfg.state))
        {
            /* Report production error failed.  */
            (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id, DEM_EVENT_STATUS_FAILED);
        }
#else
        (void)DemTest;
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
    }
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

/**
 * @brief          This function updates group status after get conversion data
 * @details        This function updates group status after get conversion data
 *
 * @param[in]      Unit         The ADC unit logic id.
 * @param[in]      Group        The group id.
 * @param[in]      CoreId       The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Hal_UpdateStatusGetData(const Adc_HwUnitType Unit,
                                                  const Adc_GroupType  Group,
                                                  const uint8          CoreId)
{
    const Adc_GroupConfigurationType *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    /* At least once the group was converted */
    /* It's already check for validation */
    Adc_aGroupStatus[Group].eAlreadyConverted = ADC_ALREADY_CONVERTED;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15();
    /* Change when configuration is ADC streaming access mode */
    if (ADC_BUSY == Adc_aGroupStatus[Group].eConversion)
    {
        Adc_aGroupStatus[Group].eConversion = ADC_COMPLETED;
    }

    /* Update the stream pointer index */
    Adc_aGroupStatus[Group].ResultIndex =
        (Adc_StreamNumSampleType)(Adc_aGroupStatus[Group].ResultIndex + 1U);
    /* If buffer is full of samples */
    if (Adc_aGroupStatus[Group].ResultIndex >= pGroupPtr->NumSamples)
    {
        /* Change to stream complete according to AutoSar diagram */
        Adc_aGroupStatus[Group].eConversion = ADC_STREAM_COMPLETED;
        /* Reset result index to 0 for a new conversion */
        Adc_aGroupStatus[Group].ResultIndex = 0U;
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15();

    if (pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_SW)
    {
        Adc_Hal_UpdateSwQueue(Unit, Group, CoreId);
    }
#if (ADC_HW_TRIGGER_API == STD_ON)
    else
    {
        Adc_Hal_UpdateHwQueue(Unit, Group, CoreId);
    }
#endif /* ADC_HW_TRIGGER_API == STD_ON */
}

/**
 * @brief          This function updates the group status when interrupt not enabled
 * @details        When interrupt is not enabled, calling of Adc_GetGroupStatus will trigger a group
 *                 status update, this function is responsible for updating the group status.
 *
 * @param[in]      Group     The group id.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 */
ADC_TEXT_SECTION void Adc_Hal_UpdateGroupStatusWithoutInterrupt(const Adc_GroupType Group,
                                                                const uint8         CoreId)
{
    Std_ReturnType                     GroupRet  = E_NOT_OK;
    const Adc_GroupConfigurationType  *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
    Adc_HwUnitType                     Unit      = pGroupPtr->UnitId;
    const Adc_HwUnitConfigurationType *pUnitPtr  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[Unit]);
    Adc_InstanceType                   HwType    = pUnitPtr->eUnitType;
    Adc_HwUnitType                     HwUnit    = pUnitPtr->AdcHardwareUnitId;
    /* When running without interrupt, only the current running group status will be updated */
    if (
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
        (pGroupPtr->bHwGroup == TRUE) ||
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
#if (STD_ON == ADC_HW_TRIGGER_API)
        (Group == Adc_aUnitStatus[Unit].HwNormalQueue[0]) ||
#endif /* STD_ON == ADC_HW_TRIGGER_API */
        (Group == Adc_aUnitStatus[Unit].SwNormalQueue[0]))
    {
        /* This function will only update group status when it is busy */
        if (ADC_BUSY == Adc_aGroupStatus[Group].eConversion)
        {
            if (E_OK == Adc_Ipw_CheckSequenceStatusWoInterrupt(HwType, HwUnit, pGroupPtr))
            {
                GroupRet = Adc_Ipw_GetSequenceResults(HwType,
                                                      HwUnit,
                                                      pGroupPtr,
                                                      CoreId,
                                                      Adc_aGroupStatus[Group].pResultsBuffer);
            }
            if (E_OK == GroupRet)
            {
                /* Update the group status according to AutoSAR diagram */
                Adc_Hal_UpdateStatusGetData(Unit, Group, CoreId);
            }
        }
    }
}

#if (ADC_READ_GROUP_API == STD_ON)
/**
 * @brief          This function reads the group conversion data and updates the group status
 * @details        This function reads the group conversion data and updates the group status
 *
 * @param[in]      Group      The group id.
 * @param[in]      CoreId     The core ID of the caller.
 * @param[out]     pDataPtr   Pointer to a buffer which will be filled by the
 *                            conversion results.
 *
 * @return         Std_ReturnType  E_OK or E_NOT_OK.
 * @retval         E_OK            In case of successfull read of the converted data.
 * @retval         E_NOT_OK        In case of an ongoing conversion.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_Hal_ReadGroup(const Adc_GroupType Group,
                                                  const uint8         CoreId,
                                                  Adc_ValueGroupType *pDataPtr)
{
    /* Return Value */
    Std_ReturnType GroupRet = Adc_Hal_ReadResultBuffer(Group, CoreId, pDataPtr);
    if (E_OK == GroupRet)
    {
        Adc_Hal_UpdateStatusReadGroup(Group, CoreId);
    }
    return (GroupRet);
}
#endif /* (ADC_READ_GROUP_API == STD_ON) */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
