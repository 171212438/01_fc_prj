/**
 *   @file    Adc_SarAdc_Irq.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - ADC Interrupt source file.
 *   @details  Autosar Adc Interrupt source file.
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
*   0.3.0       17/10/2023    QXW0030       N/A          Add partition check in ISR function
*   0.8.0       05/07/2024    QXW0030       N/A          Add support for Adc to use without Ptimer
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
*   1.1.0       16/01/2025    QXW0030       N/A          Add DMA support for sequence group mode
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_Hal.h"
#include "Adc_SarAdc.h"
#include "Adc_Ptimer.h"
#include "Mcal.h"
#include "SchM_Adc.h"

#if (STD_ON == ADC_DMA_SUPPORT)
#include "CDD_Dma.h"
#endif /* STD_ON == ADC_DMA_SUPPORT */

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
#define ADC_START_SEC_CONST_8
#include "Adc_MemMap.h"
/**
 * @brief          Number of channels per ADC HW unit
 */
ADC_DATA_SECTION static const uint8 s_aAdcNumChannels[ADC_MAX_HW_UNITS] = ADC_UNIT_NUM_CHANNELS;

#define ADC_STOP_SEC_CONST_8
#include "Adc_MemMap.h"

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

#ifdef ADC_UNIT_0_ISR_USED
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit0);
#endif

#ifdef ADC_UNIT_1_ISR_USED
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit1);
#endif

#ifdef ADC_UNIT_2_ISR_USED
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit2);
#endif

#ifdef ADC_UNIT_3_ISR_USED
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit3);
#endif

#ifdef ADC_UNIT_4_ISR_USED
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit4);
#endif

#ifdef ADC_UNIT_5_ISR_USED
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit5);
#endif

#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_UNIT_2_ISR_USED)) || (defined(ADC_UNIT_3_ISR_USED)) || \
     (defined(ADC_UNIT_4_ISR_USED)) || (defined(ADC_UNIT_5_ISR_USED)) || \
     (ADC_DMA_SUPPORT == STD_ON))
ADC_TEXT_SECTION LOCAL_INLINE void Adc_ISR_EndPartialConversion(const Adc_HwUnitType Unit,
                                                                const Adc_GroupType  Group,
                                                                const uint8          CoreId);
#endif /* (defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) ... */

#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_UNIT_2_ISR_USED)) || (defined(ADC_UNIT_3_ISR_USED)) || \
     (defined(ADC_UNIT_4_ISR_USED)) || (defined(ADC_UNIT_5_ISR_USED)))
ADC_TEXT_SECTION LOCAL_INLINE void Adc_ISR_EndGroupConversion(const Adc_HwUnitType Unit);
#endif /* (defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) ... */

#if (STD_ON == ADC_DMA_SUPPORT)
#ifdef ADC_UNIT_0
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit0(void);
#endif

#ifdef ADC_UNIT_1
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit1(void);
#endif

#ifdef ADC_UNIT_2
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit2(void);
#endif

#ifdef ADC_UNIT_3
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit3(void);
#endif

#ifdef ADC_UNIT_4
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit4(void);
#endif

#ifdef ADC_UNIT_5
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit5(void);
#endif

ADC_TEXT_SECTION LOCAL_INLINE void Adc_DMA_EndGroupConversion(const Adc_HwUnitType Unit);
#endif /* STD_ON == ADC_DMA_SUPPORT */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_UNIT_2_ISR_USED)) || (defined(ADC_UNIT_3_ISR_USED)) || \
     (defined(ADC_UNIT_4_ISR_USED)) || (defined(ADC_UNIT_5_ISR_USED)) || \
     (ADC_DMA_SUPPORT == STD_ON))
/**
 * @brief          This function handles the normal conversion ending.
 * @details        When a normal (not injected) conversion ends, and the end of
 *                 conversion ISR is called, this function takes care about the
 *                 driver and the module state transitions.
 *
 * @param[in]      Unit         The hardware Unit.
 * @param[in]      Group        The group id.
 * @param[in]      CoreId       The core ID of the caller.
 *
 * @return         void
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_ISR_EndPartialConversion(const Adc_HwUnitType Unit,
                                                                const Adc_GroupType  Group,
                                                                const uint8          CoreId)
{
    Adc_ValueGroupType               *pResult;
    Std_ReturnType                    eRet      = E_NOT_OK;
    Adc_HwUnitType                    HwIndex   = Adc_Cfg_Ptr[CoreId]->SarAdcIndex[Unit];
    const Adc_GroupConfigurationType *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);

    if ((pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_INTERRUPT) ||
        (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_POLLING))
    {
        /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 Performing pointer arithmetic.
         * Reason: The start address of the Result pointer is indicated by the start address of the
         * result buffer and the result index, and thus the pointer arithmetic is necessary */
        /* The Result pointer is made up of two parts:
         * 1. The base address of the result buffer
         * 2. The offset of the group stream sample
         */
        pResult = Adc_aGroupStatus[Group].pResultsBuffer + Adc_aGroupStatus[Group].ResultIndex;

        /* PRQA S 488 -- */
        /* Limit check is disabled or succeeded */
        eRet = Adc_SarAdc_GetSequenceResults(Unit, pGroupPtr, CoreId, pResult);
#if (ADC_HW_TRIGGER_API == STD_ON)
        if (pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_HW)
        {
            (void)Adc_SarAdc_CheckOverrun(Unit, pGroupPtr);
        }
#endif
    }
#if (ADC_DMA_SUPPORT == STD_ON)
    /* In this case: TransferType == ADC_TRANSFER_TYPE_DMA */
    else
    {
        eRet = E_OK;
    }
#endif /* ADC_DMA_SUPPORT == STD_ON */

    /* Limit check is disabled or succeeded */
    if (E_OK == eRet)
    {
        /* All of channels converted, Update state following AutoSar diagrams */
        Adc_Hal_UpdateStatusGetData(HwIndex, Group, CoreId);
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        /* Implement user notification function if available */
        if ((ADC_NOTIFICATION_ENABLED == Adc_aGroupStatus[Group].eNotification) &&
            (pGroupPtr->Notification != NULL_PTR))
        {
            /* Execute notification function */
            pGroupPtr->Notification();
        }
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */
    }
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    /* Limit check is failed */
    else
    {
        if (ADC_TRIGG_SRC_SW == pGroupPtr->eTriggerSource)
        {
            /* SWS_Adc_00448 */
            /* Group configured as continuous will be re-configured */
            if (
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
                (pGroupPtr->bUseContinuousPeriod == FALSE) &&
#endif
                (ADC_CONV_MODE_CONTINUOUS == pGroupPtr->eMode))
            {
                /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not
                 * be assigned to an object with a narrower essential type or of a different
                 * essential type category. Reason: When limit check is enabled, the number of
                 * samples in a group will not exceed the uint8 limit */
                Adc_SarAdc_RestartContinuousConversion(Unit, pGroupPtr, CoreId);
                /* PRQA S 4461 -- */
            }
            /* SWS_Adc_00449 */
            /* Group configured as one-shot mode and limit checking failed will be automatically
             * stopped */
            /* Group configured as periodically will be triggered automatically, no other action
             * needed */
        }
    }
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
}
#endif /* (defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) ... */

#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_UNIT_2_ISR_USED)) || (defined(ADC_UNIT_3_ISR_USED)) || \
     (defined(ADC_UNIT_4_ISR_USED)) || (defined(ADC_UNIT_5_ISR_USED)))
/**
 * @brief          This function handles the ISR for the conversion.
 * @details        The function handles the ISR for the given hardware Unit.
 *                 It's used on all ADC Hardware units.
 *
 * @param[in]      Unit        The hardware Unit.
 *
 * @return         void
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_ISR_EndGroupConversion(const Adc_HwUnitType Unit)
{
    boolean        bIsSpurious = (boolean)TRUE;
    uint8          CoreId      = Adc_GetCoreID();
    Adc_GroupType  CurrentGroup;
    Adc_HwUnitType HwIndex;
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    const Adc_HwUnitConfigurationType *pConfig;
    Adc_GroupType                      HwGroupIdx;
#endif

    if (NULL_PTR != Adc_Cfg_Ptr[CoreId])
    {
        HwIndex = Adc_Cfg_Ptr[CoreId]->SarAdcIndex[Unit];
        if (HwIndex != ADC_UNIT_INVALID)
        {
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
            pConfig = &(Adc_Cfg_Ptr[CoreId]->pAdcs[HwIndex]);
            if (pConfig->bUseHwGroup == TRUE)
            {
                for (HwGroupIdx = 0U; HwGroupIdx < pConfig->HwGroupCount; HwGroupIdx++)
                {
                    if (E_OK == Adc_SarAdc_CheckHwGroupStatus(Unit, HwGroupIdx))
                    {
                        Adc_ISR_EndPartialConversion(Unit, pConfig->pGroupId[HwGroupIdx], CoreId);
                    }
                }
            }
            else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
            {
#if (ADC_HW_TRIGGER_API == STD_ON)
                if (Adc_aUnitStatus[HwIndex].HwNormalQueueIndex > (Adc_QueueIndexType)0U)
                {
                    CurrentGroup = Adc_aUnitStatus[HwIndex].HwNormalQueue[0];
#if (ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON)
                    if (E_OK == Adc_SarAdc_CheckSequenceStatus(Unit, CurrentGroup, CoreId))
                    {
                        /* Interrupt is not spurious */
                        bIsSpurious = (boolean)FALSE;
                    }
#else
                    bIsSpurious = (boolean)FALSE;
#endif /* ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON */
                }
                else
#endif
                    if (Adc_aUnitStatus[HwIndex].SwNormalQueueIndex > (Adc_QueueIndexType)0U)
                {
                    CurrentGroup = Adc_aUnitStatus[HwIndex].SwNormalQueue[0];
#if (ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON)
                    if (E_OK == Adc_SarAdc_CheckSequenceStatus(Unit, CurrentGroup, CoreId))
                    {
                        /* Interrupt is not spurious */
                        bIsSpurious = (boolean)FALSE;
                    }
#else
                    bIsSpurious = (boolean)FALSE;
#endif /* ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON */
                }
                else
                {
                    /* do nothing for misra */
                }

                if ((boolean)FALSE == bIsSpurious)
                {
                    /* PRQA S 2962 ++ #Misra-C:2012 Rule-9.1 The value of an object with automatic
                       storage duration shall not be read before it has been set. Reason: The
                       parameter CurrentGroup is guranteed by the bIsSpurious and it must be
                       initialized when bIsSpurious is FALSE */
                    Adc_ISR_EndPartialConversion(Unit, CurrentGroup, CoreId);
                    /* PRQA S 2962 -- */
                }
                else
                {
                    /* Spurious interrupt, read out all data to clear interrupt flag */
                    Adc_SarAdc_DropConvResults(Unit, s_aAdcNumChannels[Unit]);
                }
            }
        }
    }
}
#endif /* (defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) ... */

#if (STD_ON == ADC_DMA_SUPPORT)
/**
 * @brief          This function handles the normal conversion ending when using DMA.
 *
 * @param[in]      Unit         The hardware Unit.
 *
 * @return         void
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_DMA_EndGroupConversion(const Adc_HwUnitType Unit)
{
    Adc_GroupType  CurrentGroup;
    Adc_HwUnitType HwIndex;
    boolean        bIsSpurious = (boolean)TRUE;
    uint8          CoreId      = Adc_GetCoreID();
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
    const Adc_HwUnitConfigurationType *pConfig;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */

    if (NULL_PTR != Adc_Cfg_Ptr[CoreId])
    {
        HwIndex = Adc_Cfg_Ptr[CoreId]->SarAdcIndex[Unit];
        if (HwIndex != ADC_UNIT_INVALID)
        {
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
            pConfig = &(Adc_Cfg_Ptr[CoreId]->pAdcs[HwIndex]);
            if ((pConfig->bUseHwGroup == TRUE) && (pConfig->bUseDma == TRUE))
            {
                CurrentGroup = pConfig->DmaGroup;

                /* Interrupt is not spurious */
                bIsSpurious = (boolean)FALSE;
            }
            else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
#if (ADC_HW_TRIGGER_API == STD_ON)
                if (Adc_aUnitStatus[HwIndex].HwNormalQueueIndex > (Adc_QueueIndexType)0U)
            {
                CurrentGroup = Adc_aUnitStatus[HwIndex].HwNormalQueue[0];

                /* Interrupt is not spurious */
                bIsSpurious = (boolean)FALSE;
            }
            else
#endif
                if (Adc_aUnitStatus[HwIndex].SwNormalQueueIndex > (Adc_QueueIndexType)0U)
            {
                CurrentGroup = Adc_aUnitStatus[HwIndex].SwNormalQueue[0];

                /* Interrupt is not spurious */
                bIsSpurious = (boolean)FALSE;
            }
            else
            {
                /* do nothing for misra */
            }

            if ((boolean)FALSE == bIsSpurious)
            {
                /* PRQA S 2962 ++ #Misra-C:2012 Rule-9.1 The value of an object with automatic
                   storage duration shall not be read before it has been set. Reason: The
                   parameter CurrentGroup is guranteed by the bIsSpurious and it must be
                   initialized when bIsSpurious is FALSE */
                Adc_ISR_EndPartialConversion(Unit, CurrentGroup, CoreId);
                /* PRQA S 2962 -- */
            }
        }
    }
}
#endif /* STD_ON == ADC_DMA_SUPPORT */

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#if (STD_ON == ADC_DMA_SUPPORT)
/*==================================================================================================
                                     DMA Callback Functions
==================================================================================================*/
#ifdef ADC_UNIT_0
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit0(void)
{
    Adc_DMA_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_0);
}
#endif

#ifdef ADC_UNIT_1
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit1(void)
{
    Adc_DMA_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_1);
}
#endif

#ifdef ADC_UNIT_2
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit2(void)
{
    Adc_DMA_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_2);
}
#endif

#ifdef ADC_UNIT_3
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit3(void)
{
    Adc_DMA_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_3);
}
#endif

#ifdef ADC_UNIT_4
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit4(void)
{
    Adc_DMA_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_4);
}
#endif

#ifdef ADC_UNIT_5
ADC_TEXT_SECTION void Adc_DMA_EndGroupConvUnit5(void)
{
    Adc_DMA_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_5);
}
#endif

#endif /* STD_ON == ADC_DMA_SUPPORT */

#ifdef ADC_UNIT_0_ISR_USED
/*==================================================================================================
                                          ADC HW UNIT 0
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the ADC Hardware Unit 0.
 * @details        The function handles the ISR for the ADC Hardware Unit 0.
 *
 * @return         void
 *
 * @isr
 */
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit0)
{
    Adc_ISR_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_0);

    EXIT_INTERRUPT();
}
#endif /* ADC_UNIT_0_ISR_USED */

#ifdef ADC_UNIT_1_ISR_USED
/*==================================================================================================
                                          ADC HW UNIT 1
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the ADC Hardware Unit 1
 * @details        The function handles the ISR for the ADC Hardware Unit 1.
 *
 * @return         void
 *
 * @isr
 */
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit1)
{
    Adc_ISR_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_1);

    EXIT_INTERRUPT();
}
#endif /* ADC_UNIT_1_ISR_USED */

#ifdef ADC_UNIT_2_ISR_USED
/*==================================================================================================
                                          ADC HW UNIT 2
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the ADC Hardware Unit 2.
 * @details        The function handles the ISR for the ADC Hardware Unit 2.
 *
 * @return         void
 *
 * @isr
 */
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit2)
{
    Adc_ISR_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_2);

    EXIT_INTERRUPT();
}
#endif /* ADC_UNIT_2_ISR_USED */

#ifdef ADC_UNIT_3_ISR_USED
/*==================================================================================================
                                          ADC HW UNIT 3
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the ADC Hardware Unit 3
 * @details        The function handles the ISR for the ADC Hardware Unit 3.
 *
 * @return         void
 *
 * @isr
 */
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit3)
{
    Adc_ISR_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_3);

    EXIT_INTERRUPT();
}
#endif /* ADC_UNIT_3_ISR_USED */

#ifdef ADC_UNIT_4_ISR_USED
/*==================================================================================================
                                          ADC HW UNIT 4
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the ADC Hardware Unit 4
 * @details        The function handles the ISR for the ADC Hardware Unit 4.
 *
 * @return         void
 *
 * @isr
 */
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit4)
{
    Adc_ISR_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_4);

    EXIT_INTERRUPT();
}
#endif /* ADC_UNIT_4_ISR_USED */

#ifdef ADC_UNIT_5_ISR_USED
/*==================================================================================================
                                          ADC HW UNIT 5
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the ADC Hardware Unit 5
 * @details        The function handles the ISR for the ADC Hardware Unit 5.
 *
 * @return         void
 *
 * @isr
 */
ADC_TEXT_SECTION ISR(Adc_ISR_EndGroupConvUnit5)
{
    Adc_ISR_EndGroupConversion((Adc_HwUnitType)ADC_UNIT_5);

    EXIT_INTERRUPT();
}
#endif /* ADC_UNIT_5_ISR_USED */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
