/**
 *   @file    Adc_Ptimer.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - Ptimer driver source file.
 *   @details This is the low level driver source file, mainly implemented for the Ptimer hardware IP.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : PTIMER
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
*   0.4.0       20/11/2023    QXW0030       N/A          Optimize critical section
*   0.7.0       29/03/2024    QXW0030       N/A          Add SEQERR recovery for SW trigger mode
*   1.0.0       27/08/2024    QXW0030       N/A          Add macro control for Ptimer
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
*   1.4.0       12/09/2025    QXW0030       N/A          Add Ptimer trigger Hw group support
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_Ptimer.h"
#include "Adc_Cfg.h"
#include "Mcal.h"
#include "SchM_Adc.h"

#include "Adc_Hal.h"
#include "Adc_SarAdc.h"
#include "Adc_Ptimer_Reg.h"
#include "Adc_Ptimer_RegOps.h"

#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONST_32
#include "Adc_MemMap.h"
ADC_DATA_SECTION static const uint32 PTIMER_CTRL_PTEN_MASK[] = { 0x0U,  0x1U,  0x3U,  0x7U, 0xFU,
                                                                 0x1FU, 0x3FU, 0x7FU, 0xFFU };
#define ADC_STOP_SEC_CONST_32
#include "Adc_MemMap.h"

#define ADC_START_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"
/* PRQA S 306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
 * object and an integer type.
 * Reason: The Ptimer base address is a register address and it is essential to convert into a
 * struct pointer to access its members */
ADC_DATA_SECTION static const uint32 s_aPtimerBase[ADC_PTIMER_NUM_MODULES] = PTIMER_BASE_ADDRS;
/* PRQA S 306 -- */
#define ADC_STOP_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"
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

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief          This function initializes Ptimer module
 * @details        This function initializes Ptimer clock configuration: prescaler, multiplication,
 * channel sequence error
 *
 * @param[in]      Unit                    the current HW Unit.
 * @param[in]      u32PtimerClockConfig    Clock configuration for Ptimer
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Ptimer_InitUnitHardware(const Adc_HwUnitType Unit,
                                                  const uint32         u32PtimerClockConfig)
{
    Ptimer_Type *const pPtimer = (Ptimer_Type *)s_aPtimerBase[Unit];
    /* Initialize Ptimer clock registers according to user configuration */
    PTIMER_HWA_SetStatusCtrl(pPtimer, u32PtimerClockConfig);
#if (ADC_PTIMER_CHANNEL01_BTB_FEATURE == STD_ON)
    PTIMER_HWA_SetChannel01BTBEnable(pPtimer, TRUE);
#endif /* ADC_PTIMER_CHANNEL01_BTB_FEATURE == STD_ON */
}

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief          This function deinitializes the Ptimer hardware.
 *
 * @param[in]      Unit                    the current HW Unit.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Ptimer_DeInitUnitHardware(const Adc_HwUnitType Unit)
{
    Ptimer_Type *const pPtimer = (Ptimer_Type *)s_aPtimerBase[Unit];
    uint8              u8ChnIdx;
    uint8              u8DelayIdx;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_32();
    /* Reset Ptimer Status Ctrl Register */
    PTIMER_HWA_SetStatusCtrl(pPtimer, 0U);
    /* Enable Ptimer */
    PTIMER_HWA_Enable(pPtimer);
    /* Reset Ptimer Max Cnt Register */
    PTIMER_HWA_SetMaxCount(pPtimer, 0xFFFFU);
    /* Reset Ptimer Int Dly Register */
    PTIMER_HWA_SetInterruptDelay(pPtimer, 0xFFFFU);

    /* De-initialize for each unit channel */
    for (u8ChnIdx = 0U; u8ChnIdx < ADC_PTIMER_CHANNELS_U8; u8ChnIdx++)
    {
        PTIMER_HWA_SetChannelCtrl(pPtimer, u8ChnIdx, 0U);
        PTIMER_HWA_ClearChannelCounterFlag(pPtimer, u8ChnIdx);
        PTIMER_HWA_ClearChannelSequenceErrorFlag(pPtimer, u8ChnIdx);
        for (u8DelayIdx = 0U; u8DelayIdx < ADC_PTIMER_NUM_DELAY_REGISTER; u8DelayIdx++)
        {
            PTIMER_HWA_SetChannelDelay(pPtimer, u8ChnIdx, u8DelayIdx, 0U);
        }
    }

    /* Disable Pulse out trigger. */
    PTIMER_HWA_DisablePulseOut(pPtimer);
    PTIMER_HWA_SetPulseOutDelay(pPtimer, 0U, 0U);

    /* Set Load OK bit to update de-initialize configuration */
    PTIMER_HWA_LoadValue(pPtimer);
    PTIMER_HWA_Disable(pPtimer);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_32();
}
#endif

/**
 * @brief          This function configure Ptimer hardware for each conversion
 * @details        This function configure Ptimer hardware for each conversion
 *
 * @param[in]      Unit                    the current HW Unit.
 * @param[in]      pGroupPtr               pointer to group configuration
 * @param[in]      eTrigger                hardware or software trigger
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Ptimer_ConfigurePartialConversion(const Adc_HwUnitType Unit,
                                                            const Adc_GroupConfigurationType *pGroupPtr,
                                                            const Adc_TriggerSourceType eTrigger)
{
    Ptimer_Type *const pPtimer = (Ptimer_Type *)s_aPtimerBase[Unit];
    uint8              u8PtimerIndex;
    uint8              u8PreTriggerCtr;
    uint8              u8PtimerChannelUsed;
    uint16             u16DelayUsed;
    uint32             u32ChEnable;
    uint32             u32ChConfig;
    uint8              u8LeftChannel;
    uint8              u8ChUsed;
    uint16             u16PtimerMaxCnt = 0U;
    uint16             u16PtimerDelay  = 0U;
    const uint16      *pGroupDelay     = NULL_PTR;

    u8LeftChannel = (uint8)pGroupPtr->AssignedChannelCount;

    /* Calculate number of Ptimer channels depending on the ADC channels used */
    /* Note that 1 Ptimer channel triggers to 8 ADC channels */
    u8PtimerChannelUsed = (uint8)ADC_PTIMER_CHANNELS_USED(u8LeftChannel);

    u16DelayUsed = 0U;
    /* Follow user configuration */
    pGroupDelay = pGroupPtr->pDelay;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_33();
    /* Select the input trigger source for Ptimer */
    if (eTrigger == ADC_TRIGG_SRC_SW)
    {
        PTIMER_HWA_SetTriggerSource(pPtimer, PTIMER_TRGSRC_SW);
    }
#if (ADC_HW_TRIGGER_API == STD_ON)
    else if (eTrigger == ADC_TRIGG_SRC_HW)
    {
        PTIMER_HWA_SetTriggerSource(pPtimer, PTIMER_TRGSRC_TRGSEL);
    }
#endif /* ADC_HW_TRIGGER_API == STD_ON */
    else
    {
        /* This shall never be reached */
    }

    /* If the continuous group is configured periodically then Ptimer will be configured
     * as continuous mode */
    if ((ADC_CONV_MODE_CONTINUOUS == pGroupPtr->eMode) && (TRUE == pGroupPtr->bUseContinuousPeriod))
    {
        /* Ptimer operation in Continuous mode */
        PTIMER_HWA_SetContinuoiusModeFlag(pPtimer, TRUE);
    }
    else
    {
        /* Ptimer operation in One-Shot mode */
        PTIMER_HWA_SetContinuoiusModeFlag(pPtimer, FALSE);
    }

    PTIMER_HWA_Enable(pPtimer);

    /* Configure Ptimer channels */
    for (u8PtimerIndex = 0U; u8PtimerIndex < u8PtimerChannelUsed; u8PtimerIndex++)
    {
        /* Get channels used depending on number of pre-triggers per Ptimer channel */
        u8ChUsed = ADC_NUM_CHANNELS_USED(u8LeftChannel);

        /* Get mask for enable used channels to PTIMER_CTRL_CHn register */
        u32ChEnable = (uint32)PTIMER_CTRL_PTEN_MASK[u8ChUsed];

        /* Configuration data for all field in PTIMER_CTRL_CHn register */
        u32ChConfig = u32ChEnable;

        /* If Back to Back mode is disabled, enable and configure delays for all channels */
        if ((boolean)FALSE == pGroupPtr->bAdcGroupBackToBack)
        {
            u32ChConfig |= (u32ChEnable << 8U);
            for (u8PreTriggerCtr = 0U; u8PreTriggerCtr < u8ChUsed; u8PreTriggerCtr++)
            {
                u16PtimerDelay = pGroupDelay[u16DelayUsed + u8PreTriggerCtr];
                PTIMER_HWA_SetChannelDelay(pPtimer, u8PtimerIndex, u8PreTriggerCtr, u16PtimerDelay);
            }
        }
        else
        {
#if (ADC_PTIMER_CHANNEL01_BTB_FEATURE == STD_ON)
            if (u8PtimerIndex == 1U)
            {
                /* Use back to back mode for all pre-triggers in channel 1 when channel 0 and 1 are
                 * in back to back mode */
                u32ChConfig |= (u32ChEnable << 16U);
            }
            else
#endif /* ADC_PTIMER_CHANNEL01_BTB_FEATURE == STD_ON */
            {
                /* Only the first channel in the group should use the channel delay value, others
                 * will use the Ptimer channel delay gap */
                if ((boolean)TRUE == pGroupPtr->bAdcGroupChannelDelays)
                {
                    u16PtimerDelay = (uint16)(pGroupDelay[0] +
                                              ((pGroupPtr->u16PtimerDelay) * u8PtimerIndex));
                }
                else
                {
                    u16PtimerDelay = (uint16)((pGroupPtr->u16PtimerDelay) * u8PtimerIndex);
                }
                PTIMER_HWA_SetChannelDelay(pPtimer, u8PtimerIndex, 0U, u16PtimerDelay);

                /* First pre-trigger need to be configured as delay, others will be in back to back
                 * mode */
                u32ChConfig |= (1UL << 8U);
                /* Use back to back mode for all channels but using delay in pre-trigger 0 */
                u32ChConfig |= ((u32ChEnable - 1U) << 16U);
            }
        }
        /* Update configuration to PTIMER_CTRL_CHn register for pre-trigger */
        PTIMER_HWA_SetChannelCtrl(pPtimer, u8PtimerIndex, u32ChConfig);

        /* Update status channel for configuring Ptimer channel in next loop */
        u8LeftChannel = (uint8)(u8LeftChannel - u8ChUsed);
        u16DelayUsed  = (uint8)(u16DelayUsed + u8ChUsed);
    }
    /* Disable others Ptimer channels to avoid errors when Ptimer trigger the disabled channels */
    for (; u8PtimerIndex < ADC_PTIMER_CHANNELS_U8; u8PtimerIndex++)
    {
        PTIMER_HWA_SetChannelCtrl(pPtimer, u8PtimerIndex, 0U);
    }

    /* If the continuous group is configured without interrupts then Ptimer will be configured as
     * continuous mode */
    if ((ADC_CONV_MODE_CONTINUOUS == pGroupPtr->eMode) && (TRUE == pGroupPtr->bUseContinuousPeriod))
    {
        u16PtimerMaxCnt = pGroupPtr->u16ContinuousPeriod;
    }
    else
    {
        /* The Ptimer period equals to value of last pre-trigger delay */
        u16PtimerMaxCnt = u16PtimerDelay;
    }
    /* Configure the period of counter */
    PTIMER_HWA_SetMaxCount(pPtimer, u16PtimerMaxCnt);

    /* Load the configuration */
    PTIMER_HWA_LoadValue(pPtimer);

    /* Start software trigger */
    /* If trigger is not software trigger, hardware trigger or external trigger will be used */
    if (ADC_TRIGG_SRC_SW == eTrigger)
    {
        PTIMER_HWA_GenerateSwTrigger(pPtimer);
    }

    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_33();
}

/**
 * @brief          This function start software conversion via Ptimer
 * @details        This function is used when no need to reconfigure Ptimer channels
 *
 * @param[in]      Unit                    the current HW Unit.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Ptimer_StartSoftwareConversion(const Adc_HwUnitType Unit)
{
    Ptimer_Type *const pPtimer = (Ptimer_Type *)s_aPtimerBase[Unit];
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_34();
    PTIMER_HWA_GenerateSwTrigger(pPtimer);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_34();
}

/**
 * @brief          This function stops Ptimer hardware unit
 * @details        This function disables Ptimer module and make control registers to reset value
 *
 * @param[in]      Unit                    the current HW Unit.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Ptimer_StopConversion(const Adc_HwUnitType Unit)
{
    Ptimer_Type *const pPtimer = (Ptimer_Type *)s_aPtimerBase[Unit];
    uint8              u8Chn   = 0U;
    PTIMER_HWA_Disable(pPtimer);
    PTIMER_HWA_SetContinuoiusModeFlag(pPtimer, FALSE);

    for (u8Chn = 0U; u8Chn < ADC_PTIMER_CHANNELS_U8; u8Chn++)
    {
        PTIMER_HWA_SetChannelCtrl(pPtimer, u8Chn, 0U);
        PTIMER_HWA_ClearChannelFlags(pPtimer, u8Chn);
    }
}

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
/**
 * @brief          This function start hardware group conversion via Ptimer
 * @details        This function is used to trigger the Hw Group with Ptimer channels
 *
 * @param[in]      Unit                    the current HW Unit.
 * @param[in]      u8Channel               the Ptimer channel used by the group.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Ptimer_StartHwGroupConversion(const Adc_HwUnitType Unit, uint8 u8Channel)
{
    Ptimer_Type *const pPtimer = (Ptimer_Type *)s_aPtimerBase[Unit];
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_35();
    PTIMER_HWA_Disable(pPtimer);
    PTIMER_HWA_SetTriggerSource(pPtimer, PTIMER_TRGSRC_SW);
    PTIMER_HWA_Enable(pPtimer);
    PTIMER_HWA_SetChannelCtrl(pPtimer, 0U, (uint32)(1U << u8Channel));
    PTIMER_HWA_GenerateSwTrigger(pPtimer);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_35();
}
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
/**
 * @brief          This function handles Ptimer channel sequence error
 *
 * @param[in]      Unit                    the current HW Unit.
 *
 * @return         void
 */
ADC_TEXT_SECTION void Adc_Ptimer_ChannelSeqErr(const Adc_HwUnitType Unit)
{
    Ptimer_Type *const pPtimer = (Ptimer_Type *)s_aPtimerBase[Unit];
    uint8              CoreId  = Adc_GetCoreID();
    Adc_HwUnitType     HwIndex;
    uint8              u8PTIMERChannelCount;
    boolean            bErrorFlag = (boolean)FALSE;
    Adc_GroupType      Group;

    if (NULL_PTR != Adc_Cfg_Ptr[CoreId])
    {
        HwIndex = Adc_Cfg_Ptr[CoreId]->SarAdcIndex[Unit];

        if (HwIndex != ADC_UNIT_INVALID)
        {
            /* Check if any of Ptimer channels have sequence error */
            for (u8PTIMERChannelCount = 0U; u8PTIMERChannelCount < ADC_PTIMER_CHANNELS_U8;
                 u8PTIMERChannelCount++)
            {
                if (PTIMER_HWA_GetChannelSequenceErrorFlag(pPtimer, u8PTIMERChannelCount) != 0U)
                {
                    bErrorFlag = (boolean)TRUE;

                    /* Disable Ptimer counter */
                    PTIMER_HWA_Disable(pPtimer);
                    /* Clear error flags of the Ptimer channel */
                    PTIMER_HWA_ClearChannelSequenceErrorFlag(pPtimer, u8PTIMERChannelCount);

                    break;
                }
            }

            if ((boolean)TRUE == bErrorFlag)
            {
#if (ADC_HW_TRIGGER_API == STD_ON)
                if (Adc_aUnitStatus[HwIndex].HwNormalQueueIndex > 0U)
                {
                    Group = Adc_aUnitStatus[HwIndex].HwNormalQueue[0U];
                }
                else
#endif /* ADC_HW_TRIGGER_API == STD_ON */
                {
                    Group = Adc_aUnitStatus[HwIndex].SwNormalQueue[0U];
                }
                /* Clear conversion complete flags for all configured channels */
                Adc_SarAdc_DropConvResults(
                    Unit,
                    (uint8)Adc_Cfg_Ptr[CoreId]->pGroups[Group].AssignedChannelCount);
#if (ADC_DMA_SUPPORT == STD_ON)
                if (ADC_TRANSFER_TYPE_DMA == Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTransferType)
                {
                    Adc_SarAdc_ReConfigureDma(Unit, &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]), CoreId);
                }
#endif /* ADC_DMA_SUPPORT == STD_ON */
                /* Re-enable Ptimer counter */
                PTIMER_HWA_Enable(pPtimer);
                /* For SW trigger, re-generate the trigger signal */
                if (Adc_Cfg_Ptr[CoreId]->pGroups[Group].eTriggerSource == ADC_TRIGG_SRC_SW)
                {
                    PTIMER_HWA_GenerateSwTrigger(pPtimer);
                }
                if (NULL_PTR != Adc_Cfg_Ptr[CoreId]->pAdcs[HwIndex].pPtimerNofitication)
                {
                    Adc_Cfg_Ptr[CoreId]->pAdcs[HwIndex].pPtimerNofitication();
                }
            }
        }
    }
}
#endif /* defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */

#ifdef __cplusplus
}
#endif

/** @} */
