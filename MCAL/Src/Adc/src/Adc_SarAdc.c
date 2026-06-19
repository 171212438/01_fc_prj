/**
 *   @file    Adc_SarAdc.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - low level driver source file.
 *   @details This is the low level driver source file,mainly implemented for the ADC SAR hardware IP.
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
*   0.3.0       19/10/2023    QXW0030       N/A          Fix issues in DMA transfer
*   0.4.0       20/11/2023    QXW0030       N/A          Optimize critical section
*   0.5.0       10/01/2024    QXW0030       N/A          Fix issue in DMA transfer with Hw trigger
*   0.5.0       11/01/2024    QXW0030       N/A          Add feature to config period in continuous
*                                                        mode
*   0.6.0       04/02/2024    QXW0030       N/A          Fix compile issues when start group API not
*                                                        enabled
*   0.8.0       20/04/2024    QXW0030       N/A          Optimize interrupt effeciency
*   0.8.0       17/05/2024    QXW0030       N/A          Fix the issue HW triiger cannot re-enable
*                                                        after disabled
*   0.8.0       05/07/2024    QXW0030       N/A          Add support for Adc to use without Ptimer
*   0.8.0       16/07/2024    QXW0030       N/A          Add differential mode support
*   0.8.0       30/07/2024    QXW0030       N/A          Fix group average settings not take effect
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       27/08/2024    QXW0030       N/A          Add macro control for Ptimer
*   1.0.0       11/10/2024    QXW0030       N/A          Clear FIFO when overrun occurs
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
*   1.1.0       16/01/2025    QXW0030       N/A          Add DMA support for sequence group mode
*   1.2.0       14/04/2025    QXW0030       N/A          Disable Adc interrupt and DMA before reset
*   1.2.0       06/05/2025    QXW0030       N/A          Fix the issue that DMA result position is
*                                                        incorrect in stream mode
*   1.3.0       22/05/2025    QXW0030       N/A          Fix DMA config error in sequence group mode
*   1.3.0       27/05/2025    QXW0030       N/A          Fix continuous mode not work when hardware
*                                                        group mode and circular buffer are used
*   1.3.0       19/08/2025    QXW0030       N/A          Change the Sw trigger method of hardware
*                                                        groups
*   1.4.0       12/09/2025    QXW0030       N/A          Add Ptimer trigger Hw group support
*   1.4.1       27/10/2025    QXW0030       N/A          Use FIFO_RDY instead of EOC for single mode
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_CfgDefines.h"
#include "Adc_SarAdc.h"
#include "Adc_Ipw.h"
#include "Adc_Hal.h"
#include "Adc_Ptimer.h"
#include "Adc_SarAdc_Reg.h"
#include "Adc_SarAdc_RegOps.h"
#include "Adc_Types.h"
#include "Mcal.h"
#include "SchM_Adc.h"

#if (ADC_DMA_SUPPORT == STD_ON)
#include "CDD_Dma.h"
#endif
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
#include "CDD_TrgSel.h"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
 * @name  ADC default values
 * @brief ADC default configuration parameters
 *
 * @{
 */
#define ADC_DEFAULT_COMPARE_HIGH_THRESHOLD (0x000U)
#define ADC_DEFAULT_COMPARE_LOW_THRESHOLD  (0x200U)
#define ADC_DEFAULT_SC_CHANNEL             (0x3FU)
/** @}*/

/**
 * @brief DMA channel configuration backup for Ptimer sequence error recovery
 *
 */
typedef struct
{
    uint32 u32DmaSADDR;
    uint32 u32DmaDADDR;
    uint16 u16DmaOuterLoopCounter;
} Adc_DmaChanType;

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONST_32
#include "Adc_MemMap.h"
/* PRQA S 306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
 * object and an integer type.
 * Reason: The ADC base address is a register address and it is essential to convert into a struct
 * pointer to access its members */
/**
 * @brief          Base address of ADC hardware units
 */
ADC_DATA_SECTION static const uint32 s_aAdcBase[ADC_MAX_HW_UNITS] = ADC_BASE_ADDRS;
/* PRQA S 306 -- */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief          Adc hardware trigger events
 */
ADC_DATA_SECTION static const Adc_TrigModeType s_aAdcHwTriggerEdge[3] = { ADC_TRIGMODE_RISING_EDGE,
                                                                          ADC_TRIGMODE_FALLING_EDGE,
                                                                          ADC_TRIGMODE_BOTH_EDGE };
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#define ADC_STOP_SEC_CONST_32
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
#if (ADC_DMA_SUPPORT == STD_ON)
#define ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"
/**
 * @brief DMA channel config for ADC instance
 *
 */
ADC_DATA_SECTION static Adc_DmaChanType s_aAdcDmaChnConfig[ADC_MAX_HW_UNITS];
#define ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"
#endif /* ADC_DMA_SUPPORT == STD_ON */
#endif /* defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... */

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_SarAdc_ConfigurePrescaler(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg);
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_SarAdc_DisableUnit(const Adc_HwUnitType Unit);
#endif /* ADC_DEINIT_API == STD_ON */

ADC_TEXT_SECTION LOCAL_INLINE void Adc_SarAdc_SetConversionMode(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger);

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE boolean Adc_SarAdc_CheckConversionValuesInRange(
    const Adc_ChannelConfigurationType *pChannelCfg,
    Adc_ValueGroupType                  Value);
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_SarAdc_InitUnitGroups(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg,
    const uint8                        CoreId);

ADC_TEXT_SECTION LOCAL_INLINE void Adc_SarAdc_StartHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger,
    const uint8                       CoreId);

ADC_TEXT_SECTION LOCAL_INLINE void Adc_SarAdc_StopHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr);
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
/**
 * @brief      This function configures the prescaler for the ADC instance
 *
 * @param[in]  Unit            The hardware Unit.
 * @param[in]  pUnitCfg        The pointer to the hardware configuration.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            If the prescaler has configured as expected.
 * @retval     E_NOT_OK        The prescaler was failed to configure because of timeout.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_SarAdc_ConfigurePrescaler(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg)
{
    Std_ReturnType  eRet       = E_NOT_OK;
    Adc_Type *const pAdc       = (Adc_Type *)s_aAdcBase[Unit];
    uint32          u32Timeout = ADC_TIMEOUT_COUNTER;
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16();
    ADC_HWA_SetClockGatingEnableFlag(pAdc, TRUE);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_16();
    while ((ADC_HWA_GetClockGatingAck(pAdc) != (boolean)TRUE) && (u32Timeout != 0U))
    {
        u32Timeout--;
    }
    if ((uint32)0UL == u32Timeout)
    {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
        {
            /* Report production error and return from function. */
            (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id, DEM_EVENT_STATUS_FAILED);
        }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
        eRet = E_NOT_OK;
    }
    else
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_17();
        ADC_HWA_SetClockDivider(pAdc, pUnitCfg->PreDiv);
        ADC_HWA_SetClockGatingEnableFlag(pAdc, FALSE);
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_17();
        u32Timeout = ADC_TIMEOUT_COUNTER;
        while ((ADC_HWA_GetClockGatingAck(pAdc) == (boolean)TRUE) && (u32Timeout != 0U))
        {
            u32Timeout--;
        }
        if ((uint32)0UL == u32Timeout)
        {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
            {
                /* Report production error and return from function. */
                (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id,
                                         DEM_EVENT_STATUS_FAILED);
            }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
            eRet = E_NOT_OK;
        }
        else
        {
            eRet = E_OK;
        }
    }
    return eRet;
}
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief      This function disables the current adc unit.
 * @details    This function disables the current adc unit and checks if the hardware has
 *             responded to the command.
 *
 * @param[in]  Unit            The hardware Unit.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            If the adc module has disabled as expected.
 * @retval     E_NOT_OK        In case of timeout while waiting for adc unit to be disabled.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_SarAdc_DisableUnit(const Adc_HwUnitType Unit)
{
    Std_ReturnType  eRet       = E_OK;
    Adc_Type *const pAdc       = (Adc_Type *)s_aAdcBase[Unit];
    uint32          u32Timeout = ADC_TIMEOUT_COUNTER;

    /* If the conversion is ongoing, disable the conversion first */
    if (ADC_HWA_GetStart(pAdc) == (boolean)TRUE)
    {
        /* Stop conversion in Control register */
        ADC_HWA_Stop(pAdc);
    }

    /* Wait the conversion to be stopped */
    if (Adc_SarAdc_WaitConversionStopped(Unit) == E_OK)
    {
        if (ADC_HWA_GetEnable(pAdc) == (boolean)TRUE)
        {
            SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18();
            /* Disable unit in Control register */
            ADC_HWA_Disable(pAdc);
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_18();
            /* Wait until conversion is aborted */
            /* Because some channels in chain are not converted yet */
            while ((ADC_HWA_GetEnable(pAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
            {
                /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be
                 * modified. Reason: The timeout value is intended to be modified in a function */
                u32Timeout--;
                /* PRQA S 1338 -- */
            }

            if ((uint32)0UL == u32Timeout)
            {
                eRet = E_NOT_OK;
            }
        }
    }
    else
    {
        eRet = E_NOT_OK;
    }

    return eRet;
}
#endif /* ADC_DEINIT_API == STD_ON */

/**
 * @brief      Set the conversion mode of the Adc instance
 * @details    This function configures the sequence mode, trigger source and trigger mode of
 *             the Adc instance.
 *
 * @param[in]  Unit          The hardware Unit.
 * @param[in]  pGroupPtr     The pointer to the group configuration.
 * @param[in]  eTrigger      The conversion trigger source.
 *
 * @return     void
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_SarAdc_SetConversionMode(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger)
{
    Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    if (pGroupPtr->bUsePtimer == FALSE)
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
    {
        /* Set Sequence Mode for SARADC*/
        if (pGroupPtr->bAdcGroupBackToBack == (boolean)TRUE)
        {
            ADC_HWA_SetSequenceMode(pAdc, ADC_SEQMODE_SINGLE);
        }
        else
        {
            ADC_HWA_SetSequenceMode(pAdc, ADC_SEQMODE_DISCONTINUOUS_0);
        }

        /* Set Trigger Mode for SARADC*/
        if ((eTrigger == ADC_TRIGG_SRC_SW)
#if (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT)
            && (pGroupPtr->bUseContinuousPeriod == (boolean)FALSE)
#endif /* STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
        )
        {
            ADC_HWA_SetTriggerMode(pAdc, ADC_TRIGMODE_SW);
        }
#if (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT)
        else if (pGroupPtr->bUseContinuousPeriod == (boolean)TRUE)
        {
            ADC_HWA_SetTriggerMode(pAdc, ADC_TRIGMODE_INTERNAL_PERIODIC);
        }
#endif /* STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
#if (ADC_HW_TRIGGER_API == STD_ON)
        else if (eTrigger == ADC_TRIGG_SRC_HW)
        {
            ADC_HWA_SetTriggerMode(pAdc, s_aAdcHwTriggerEdge[pGroupPtr->eTriggerEdge]);
        }
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        else
        {
            /* Noting for Misra */
        }
    }
}

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
/**
 * @brief      This function configures the adc hardware groups.
 *
 * @param[in]  Unit            The hardware Unit.
 * @param[in]  pUnitCfg        The pointer to the hardware configuration.
 * @param[in]  CoreId          The core ID of the caller.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            Configuring hareware group successfully.
 * @retval     E_NOT_OK        Configuring hareware group fail.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_SarAdc_InitUnitGroups(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg,
    const uint8                        CoreId)
{
    Std_ReturnType                      DemTest        = E_OK;
    Adc_Type *const                     pAdc           = (Adc_Type *)s_aAdcBase[Unit];
    const Adc_ChannelConfigurationType *pUnitChannel   = pUnitCfg->pChannels;
    uint8                               CurrentChannel = 0U;
    Adc_GroupType                       GroupIdx;
    Adc_GroupType                       Group;
    uint32                              u32ChnCfg;
    const Adc_GroupConfigurationType   *pGroupPtr;
    const Adc_GroupDefType             *pChannelAssignment;
    const Adc_ChannelConfigurationType *pChannel;
    uint8                               u8NumChannel;
    uint8                               u8GroupChannel;
    Adc_ChannelType                     ChannelIdx;

    for (GroupIdx = 0U; GroupIdx < pUnitCfg->HwGroupCount; GroupIdx++)
    {
        Group              = pUnitCfg->pGroupId[GroupIdx];
        pGroupPtr          = &Adc_Cfg_Ptr[CoreId]->pGroups[Group];
        pChannelAssignment = pGroupPtr->pAssignment;
        u8GroupChannel     = (uint8)pGroupPtr->AssignedChannelCount;

        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant.
         * The value of the result is always that of the left-hand operand.
         * Reason: The or operation of ADC_SGCSR_SG_START(CurrentChannel) is to
         * indication the offset is 0. */
        ADC_HWA_ConfigureSeqGroup(pAdc,
                                  GroupIdx,
                                  ADC_SGCSR_SG_START(CurrentChannel) |
                                      ADC_SGCSR_SG_END((uint32)(CurrentChannel + u8GroupChannel) - 1U) |
                                      ADC_SGCSR_EOSG(1U));
        /* PRQA S 2985 -- */

        for (u8NumChannel = 0U; u8NumChannel < u8GroupChannel; u8NumChannel++)
        {
            ChannelIdx = pChannelAssignment[u8NumChannel];
            pChannel   = &pUnitChannel[ChannelIdx];
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
             * Reason: The or operation of ADC_SC_AIEN(FALSE) is to indication the disable of interrupt */
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
            u32ChnCfg = ADC_SC_DIFF(pChannel->bDiffChannel) | ADC_SC_SMPSEL(pChannel->SampleTimeOpt) |
                        ADC_SC_AIEN(FALSE) | ADC_SC_CHS(pChannel->ChId);
#else
            u32ChnCfg = ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(FALSE) |
                        ADC_SC_CHS(pChannel->ChId);
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
            /* PRQA S 2985 -- */
            ADC_HWA_SetChannelConfig(pAdc, CurrentChannel, u32ChnCfg);
            CurrentChannel++;
        }
    }
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_19();
#if (ADC_MULTICORE_SUPPORT == STD_ON)
    if (E_OK == Adc_GetSpinLock())
    {
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (pUnitCfg->bUsePtimer == TRUE)
        {
#if (STD_ON == ADC_CFG3_SUPPORT)
            /* Configuration for COCO Signal to Ptimer as pulse */
            ADC_HWA_SetConfig3(pAdc, ADC_CFG3_COCO_PLS_EN(1U));
#endif
            ADC_HWA_SetPretriggerSelect(pAdc, ADC_PRETRIGGER_SEL_PTIMER);
            ADC_HWA_SetTriggerSelect(pAdc, ADC_TRIGGER_SEL_PTIMER);
            /* Initialize the PRESCALER and MULT settings of the associated Ptimer unit */
            Adc_Ptimer_InitUnitHardware(Unit, pUnitCfg->u32AdcPtimerClockSettings);
        }
        else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
        {
            ADC_HWA_SetPretriggerSelect(pAdc, ADC_PRETRIGGER_SEL_TRGSEL);
            ADC_HWA_SetTriggerSelect(pAdc, ADC_TRIGGER_SEL_TRGSEL);
        }
#if (ADC_MULTICORE_SUPPORT == STD_ON)
        Adc_ReleaseSpinLock();
    }
    else
    {
        DemTest = E_NOT_OK;
    }
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_19();
    return DemTest;
}

/**
 * @brief          Starts the hardware group conversion.
 * @details        This function starts the hardware group conversion for the specified ADC unit and
 *                 group.
 *
 * @param[in]      Unit         The hardware Unit.
 * @param[in]      pGroupPtr    The pointer to the group configuration.
 *
 * @return         void
 *
 * @pre            The ADC driver must be initialized.
 * @post           The hardware group conversion is stopped.
 *
 * @implements     Adc_SarAdc_StartHwGroupConversion_Activity
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_SarAdc_StartHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger,
    const uint8                       CoreId)
{
    Adc_Type *const pAdc      = (Adc_Type *)s_aAdcBase[Unit];
    uint8           HwGroupId = pGroupPtr->HwGroupId;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_20();
    ADC_HWA_ClearEndOfSeqGroupInterruptFlag(pAdc, HwGroupId);
    if (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_INTERRUPT)
    {
        ADC_HWA_SetEndOfSeqGroupInterruptEnable(pAdc, HwGroupId, TRUE);
    }
#if ((ADC_DMA_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
    else if (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_DMA)
    {
        ADC_HWA_SetEndOfSeqGroupInterruptEnable(pAdc, HwGroupId, FALSE);
        /* If DMA is enabled for the group, configure DMA for the group */
        Adc_SarAdc_ConfigureDmaChannel(Unit, pGroupPtr, CoreId);
    }
#endif /* ADC_DMA_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
    else
    {
        ADC_HWA_SetEndOfSeqGroupInterruptEnable(pAdc, HwGroupId, FALSE);
    }

    if (ADC_TRIGG_SRC_SW == eTrigger)
    {
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (pGroupPtr->bUsePtimer == TRUE)
        {
            Adc_Ptimer_StartHwGroupConversion(Unit, HwGroupId);
        }
        else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
        {
#if (ADC_MULTICORE_SUPPORT == STD_ON)
            if (E_OK == Adc_GetSpinLock())
            {
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
                ADC_HWA_GenerateSwTrigger(pAdc, pGroupPtr->u8SwTrigChn);
#if (ADC_MULTICORE_SUPPORT == STD_ON)
                Adc_ReleaseSpinLock();
            }
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
        }
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_20();

#if ((ADC_DMA_SUPPORT != STD_ON) || (ADC_HWGROUP_DMA_SUPPORT != STD_ON))
    (void)CoreId;
#endif /* ADC_DMA_SUPPORT != STD_ON || ADC_HWGROUP_DMA_SUPPORT != STD_ON */
}

/**
 * @brief          Stops the hardware group conversion.
 * @details        This function stops the hardware group conversion for the specified ADC unit and
 *                 group.
 *
 * @param[in]      Unit         The hardware Unit.
 * @param[in]      pGroupPtr    The pointer to the group configuration.
 *
 * @return         void
 *
 * @pre            The ADC driver must be initialized.
 * @post           The hardware group conversion is stopped.
 *
 * @implements     Adc_SarAdc_StopHwGroupConversion_Activity
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_SarAdc_StopHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr)
{
    Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21();
    ADC_HWA_SetEndOfSeqGroupInterruptEnable(pAdc, pGroupPtr->HwGroupId, FALSE);
    ADC_HWA_ClearEndOfSeqGroupInterruptFlag(pAdc, pGroupPtr->HwGroupId);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_21();
}
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
 * @brief          Checks if conversion values are in the configured range.
 * @details        Return true if conversion values are in the configured range, otherwise false.
 *
 * @param[in]      pChannelCfg The pointer to the channel configuration.
 * @param[in]      Value       The adc conversion value.
 *
 * @return         boolean     Conversion value in range flag.
 * @retval         TRUE        if conversion values are in the configured range.
 * @retval         FALSE       if conversion values are not in the configured range.
 *
 * @pre            Driver must be initialized.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean Adc_SarAdc_CheckConversionValuesInRange(
    const Adc_ChannelConfigurationType *pChannelCfg,
    Adc_ValueGroupType                  Value)
{
    boolean                    bValInRange = (boolean)FALSE;
    Adc_ChannelRangeSelectType eChRange;
    Adc_ValueGroupType         LowLimit;
    Adc_ValueGroupType         HighLimit;
#if (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT)
    Adc_ChannelType Shift = 0U;
#endif /* ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT */

    eChRange  = pChannelCfg->eChannelRange;
    LowLimit  = pChannelCfg->ChannelLowLimit;
    HighLimit = pChannelCfg->ChannelHighLimit;

#if (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT)
    if ((pChannelCfg->Res) > (Adc_ResolutionType)8U)
    {
        Shift = (16U - (pChannelCfg->Res));
    }
    /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified.
     * Reason: The left aligned value is modified to be right aligned for comparison. */
    Value = Value >> Shift;
    /* PRQA S 1338 -- */
#endif /* (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT) */

    switch (eChRange)
    {
        /* Complete range - independent from channel limit settings. */
        case ADC_RANGE_ALWAYS:
        {
            bValInRange = (boolean)TRUE;
            break;
        }
        /* Range between low limit and high limit - high limit value included. */
        case ADC_RANGE_BETWEEN:
        {
            if ((Value > LowLimit) && (Value <= HighLimit))
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range above high limit or below low limit - low limit value included. */
        case ADC_RANGE_NOT_BETWEEN:
        {
            if ((Value > HighLimit) || (Value <= LowLimit))
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range below high limit -high limit value included. */
        case ADC_RANGE_NOT_OVER_HIGH:
        {
            if (Value <= HighLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range above low limit. */
        case ADC_RANGE_NOT_UNDER_LOW:
        {
            if (Value > LowLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range above high limit. */
        case ADC_RANGE_OVER_HIGH:
        {
            if (Value > HighLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range below low limit - low limit value included. */
        case ADC_RANGE_UNDER_LOW:
        {
            if (Value <= LowLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Unexpected value */
        default:
        {
            /* This case shall never be entered */
            break;
        }
    }
    return (boolean)bValInRange;
}
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief          Initializes the ADC hardware.
 * @details        Initializes the ADC hardware as per configuration.
 *
 * @param[in]      Unit            The hardware Unit.
 * @param[in]      pUnitCfg        The pointer to the hardware configuration.
 * @param[in]      CoreId          The core ID of the caller.
 *
 * @return         Std_ReturnType  E_OK or E_NOT_OK.
 * @retval         E_OK            Configuring adc hareware successfully.
 * @retval         E_NOT_OK        Configuring adc hareware fail.
 *
 * @pre            Driver must be initialized.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_InitUnitHardware(const Adc_HwUnitType Unit,
                                                            const Adc_HwUnitConfigurationType *pUnitCfg,
                                                            const uint8 CoreId)
{
    Adc_Type *const pAdc       = (Adc_Type *)s_aAdcBase[Unit];
    uint32          u32Timeout = ADC_TIMEOUT_COUNTER;
    Std_ReturnType  DemTest    = E_OK;

    /* The ADC Unit should be in disabled state when calling initialization function, in case when
     * it is enabled (e.g, the ADC is enabled in bootloader and the user forget to de-initialize it
     * before enter the app), we shall disable it first before initializing the registers. */
    if (Adc_SarAdc_DisableUnit(Unit) == E_OK)
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_22();
        /* Disable ADC interrupts and DMA requests */
        ADC_HWA_SetInterruptEnable(pAdc, 0U);
        ADC_HWA_SetConfig1(pAdc, 0U);

        /* Reset ADC hardware unit */
        ADC_HWA_Reset(pAdc);

        /* Initialize ADC registers as the configuration */

        /* Configuration for conversion mode, trigger mode and sequence mode */
        ADC_HWA_SetConfig1(pAdc, pUnitCfg->u32AdcCfg1Register);

        /* Configuration for hardware average, voltage reference and start up counter */
        ADC_HWA_SetConfig2(pAdc, pUnitCfg->u32AdcCfg2Register);

#if (STD_ON == ADC_CFG3_SUPPORT)
        /* Configuration for EOSG Sel, COCO Sel to default */
        ADC_HWA_SetConfig3(pAdc, 0U);
#endif
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_22();

#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
        /* Configuration for the clock prescaler */
        if (ADC_HWA_GetClockDivider(pAdc) != pUnitCfg->PreDiv)
        {
            DemTest = Adc_SarAdc_ConfigurePrescaler(Unit, pUnitCfg);
        }
        if (DemTest == E_OK)
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */
        {

            SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23();
            /* Sample time duration configuration */
            ADC_HWA_SetSampleTimeOpts(pAdc, pUnitCfg->u32AdcSmprRegister);

            /* Disable hardware compare feature */
            ADC_HWA_SetHwCompareEnableFlag(pAdc, FALSE);
            ADC_HWA_SetHwCompareChannel(pAdc, ADC_CMP_CHANNEL_ALL, 0U);

            /* Reset compare value registers */
            ADC_HWA_SetHwCompareThreshold(pAdc,
                                          ADC_DEFAULT_COMPARE_LOW_THRESHOLD,
                                          ADC_DEFAULT_COMPARE_HIGH_THRESHOLD);

            /* Enable ADC hardware */
            ADC_HWA_Enable(pAdc);
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_23();

            while ((ADC_HWA_GetReady(pAdc) != (boolean)TRUE) && (u32Timeout != (uint32)0U))
            {
                u32Timeout--;
            }

            if ((uint32)0UL == u32Timeout)
            {
                DemTest = E_NOT_OK;
            }
            else
            {
                /* Clear the ready flag */
                ADC_HWA_ClearReady(pAdc);
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
                if (pUnitCfg->bUseHwGroup == TRUE)
                {
                    DemTest = Adc_SarAdc_InitUnitGroups(Unit, pUnitCfg, CoreId);
                    /* Start the Hardware Unit and wait for trigger */
                    ADC_HWA_Start(pAdc);
                }
                else
#else
                (void)CoreId;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
                    if (pUnitCfg->bUsePtimer == TRUE)
                {
                    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24();
#if (ADC_MULTICORE_SUPPORT == STD_ON)
                    if (E_OK == Adc_GetSpinLock())
                    {
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
                        ADC_HWA_SetPretriggerSelect(pAdc, ADC_PRETRIGGER_SEL_PTIMER);
                        ADC_HWA_SetTriggerSelect(pAdc, ADC_TRIGGER_SEL_PTIMER);
                        /* Initialize the PRESCALER and MULT settings of the associated Ptimer unit */
                        Adc_Ptimer_InitUnitHardware(Unit, pUnitCfg->u32AdcPtimerClockSettings);
                        DemTest = E_OK;
#if (ADC_MULTICORE_SUPPORT == STD_ON)
                        Adc_ReleaseSpinLock();
                    }
                    else
                    {
                        DemTest = E_NOT_OK;
                    }
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
                    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24();
                }
                else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
                {
                    DemTest = E_OK;
                    /* Nothing for Misra */
                }
            }
        }
    }
    else
    {
        DemTest = E_NOT_OK;
    }
    return DemTest;
}

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief          This function deinitializes the ADC hardware.
 *
 * @param[in]      Unit      The hardware Unit.
 * @param[in]      pUnitCfg  The pointer to the hardware configuration.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_DeInitUnitHardware(const Adc_HwUnitType               Unit,
                                                    const Adc_HwUnitConfigurationType *pUnitCfg,
                                                    const uint8                        CoreId)
{
    Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    Adc_GroupType GroupIdx;
    Adc_GroupType Group;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_DMA_SUPPORT == STD_ON)
    if (pUnitCfg->bUseDma == TRUE)
    {
        Dma_DisableHwRequest(pUnitCfg->eDmaInstance, pUnitCfg->u8DmaChannel);
    }
#endif /* ADC_DMA_SUPPORT == STD_ON */

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pUnitCfg->bUseHwGroup == TRUE)
    {
        /* Stop all hardware groups */
        for (GroupIdx = 0U; GroupIdx < (uint8)pUnitCfg->HwGroupCount; GroupIdx++)
        {
            Group = pUnitCfg->pGroupId[GroupIdx];
            Adc_SarAdc_StopHwGroupConversion(Unit, &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]));
        }
    }
#else
    (void)CoreId;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    if (pUnitCfg->bUsePtimer == TRUE)
    {
        /* Stop Ptimer hardware trigger unit */
        Adc_Ptimer_StopConversion(Unit);
    }
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */

    /* Disable the ADC hardware unit */
    if (Adc_SarAdc_DisableUnit(Unit) == E_OK)
    {
        /* Enter critical section */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_25();
        /* Disable ADC interrupts and DMA requests */
        ADC_HWA_SetInterruptEnable(pAdc, 0U);
        ADC_HWA_SetConfig1(pAdc, 0U);

        /* Reset ADC hardware unit, it will reset all registers in the ADC module */
        ADC_HWA_Reset(pAdc);
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_25();
    }
    else
    {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
        {
            /* Report production error and return from function. */
            (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id, DEM_EVENT_STATUS_FAILED);
        }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
    }

#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    if (pUnitCfg->bUsePtimer == TRUE)
    {
        /* De-initialize Ptimer hardware trigger unit */
        Adc_Ptimer_DeInitUnitHardware(Unit);
    }
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
}
#endif /* ADC_DEINIT_API == STD_ON */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON))
/* PRQA S 2889 ++ #Misra-C:2012 Rule-15.5 A function should have a single point of exit at the end.
   Reason: The return statement before the function end is used to bypass the function quickly. */
/**
 * @brief          This function starts the conversion on the specified hardware Unit.
 * @details        This function starts the conversion on the specified hardware Unit.
 *                 This function should be called with the ADC Unit on standby (no ADC interruptions
 *                 allowed because its code is not protected by critical regions) - no conversions
 *                 must be running.
 *
 * @param[in]      Unit        The hardware Unit.
 * @param[in]      pGroupPtr   The pointer to the group configuration.
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_StartGroupConversion(const Adc_HwUnitType              Unit,
                                                      const Adc_GroupConfigurationType *pGroupPtr,
                                                      const uint8                       CoreId)
{
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_SarAdc_StartHwGroupConversion(Unit, pGroupPtr, ADC_TRIGG_SRC_SW, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    {
        /* Update group configuration to registers and start conversion */
        Adc_SarAdc_ConfigurePartialConversion(Unit, pGroupPtr, CoreId, ADC_TRIGG_SRC_SW);
    }
}
/* PRQA S 2889 -- */
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief          This function performs starting a hardware trigger conversion.
 * @details        This function performs starting a hardware trigger conversion.
 *
 * @param[in]      Unit        The hardware Unit.
 * @param[in]      pGroupPtr   The pointer to the group configuration.
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_EnableHardwareTrigger(const Adc_HwUnitType              Unit,
                                                       const Adc_GroupConfigurationType *pGroupPtr,
                                                       const uint8                       CoreId)
{
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_SarAdc_StartHwGroupConversion(Unit, pGroupPtr, ADC_TRIGG_SRC_HW, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    {
        /* Setting for ADC hardware triggered conversion */
        Adc_SarAdc_ConfigurePartialConversion(Unit, pGroupPtr, CoreId, ADC_TRIGG_SRC_HW);
    }
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

/**
 * @brief          Configure channels of a group
 * @details        This function configure channels of a group
 *                 if number of channels in group excess maximum channels allowed for a conversion,
 *                 a part of channels of group (= max allowed channels) will be configured in start
 *                 conversion in the first time. the remaining channels of group will be seperated
 *                 into other parts which are configured and converted in group interrupt.
 *
 * @param[in]      Unit          The hardware Unit.
 * @param[in]      pGroupPtr     The pointer to the group configuration.
 * @param[in]      CoreId        The core ID of the caller.
 * @param[in]      eTrigger      Conversion trigger source.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_ConfigurePartialConversion(const Adc_HwUnitType Unit,
                                                            const Adc_GroupConfigurationType *pGroupPtr,
                                                            const uint8                 CoreId,
                                                            const Adc_TriggerSourceType eTrigger)
{
    Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
    Adc_ChannelType ChannelIdx;
    uint8           u8SCRegister;
    uint8           u8NumChannel = (uint8)pGroupPtr->AssignedChannelCount;
    uint32          u32Timeout   = ADC_TIMEOUT_COUNTER;
    uint32 u32ChnCfg = ADC_SC_SMPSEL(0U) | ADC_SC_AIEN(FALSE) | ADC_SC_CHS(ADC_DEFAULT_SC_CHANNEL);
    const Adc_GroupDefType             *pChannelAssignment = pGroupPtr->pAssignment;
    const Adc_ChannelConfigurationType *pUnitChannel =
        Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId].pChannels;
    const Adc_ChannelConfigurationType *pChannel = NULL_PTR;

    /* Stop Adc instance for register configuration */
    if (ADC_HWA_GetStart(pAdc) == (boolean)TRUE)
    {
        /* Stop conversion in Control register */
        ADC_HWA_Stop(pAdc);
        /* Wait until ADC module is stopped, it shall not report Dem events in interrupts */
        while ((ADC_HWA_GetStop(pAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
        {
            u32Timeout--;
        }
    }

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_26();

    /* Disable all interrupts. */
    ADC_HWA_SetInterruptEnable(pAdc, 0U);
    /* Clear all interrupt flags. */
    ADC_HWA_ClearAllIntFlags(pAdc);

#if (ADC_SET_ADC_HARDWARE_AVERAGE_ONCE == STD_OFF)
    /* Select average samples */
    ADC_HWA_SetAverageEnableFlag(pAdc, pGroupPtr->bEnableHwAvg);
    ADC_HWA_SetAverageNumber(pAdc, pGroupPtr->u32AvgSelect);
#endif /* ADC_SET_ADC_HARDWARE_AVERAGE_ONCE == STD_OFF */

    /* Set the conversion mode */
    Adc_SarAdc_SetConversionMode(Unit, pGroupPtr, eTrigger);

#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
    ADC_HWA_SetDifferentialModeEnableFlag(pAdc, pGroupPtr->bDiffGroup);
#endif

    /* Configure channels from current to (last channel - 1) */
    for (u8SCRegister = 0U; u8SCRegister < (u8NumChannel - 1U); u8SCRegister++)
    {
        /* Logical channel ID */
        ChannelIdx = pChannelAssignment[u8SCRegister];
        pChannel   = &pUnitChannel[ChannelIdx];

        /* Disable interrupt all channels not the last channel */
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
         * Reason: The or operation of ADC_SC_AIEN(FALSE) is to indication the disable of interrupt */
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
        u32ChnCfg = ADC_SC_DIFF(pChannel->bDiffChannel) | ADC_SC_SMPSEL(pChannel->SampleTimeOpt) |
                    ADC_SC_AIEN(FALSE) | ADC_SC_CHS(pChannel->ChId);
#else
        u32ChnCfg = ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(FALSE) |
                    ADC_SC_CHS(pChannel->ChId);
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
        /* PRQA S 2985 -- */
        ADC_HWA_SetChannelConfig(pAdc, u8SCRegister, u32ChnCfg);
    }

    /* Configure last channel */
    {
        /* Get channel ID */
        ChannelIdx = pChannelAssignment[u8SCRegister];
        pChannel   = &pUnitChannel[ChannelIdx];
        /* In case of group is configured with interrupt, the complete int bit of the last channel
         * must be enabled */
        if (ADC_TRANSFER_TYPE_POLLING == pGroupPtr->eTransferType)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
             * Reason: The or operation of ADC_SC_AIEN(FALSE) is to indication the disable of interrupt */
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
            u32ChnCfg = ADC_SC_DIFF(pChannel->bDiffChannel) | ADC_SC_SMPSEL(pChannel->SampleTimeOpt) |
                        ADC_SC_AIEN(FALSE) | ADC_SC_CHS(pChannel->ChId);
#else
            u32ChnCfg = ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(FALSE) |
                        ADC_SC_CHS(pChannel->ChId);
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
            /* PRQA S 2985 -- */
        }
        else if (ADC_TRANSFER_TYPE_INTERRUPT == pGroupPtr->eTransferType)
        {
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
            if (pGroupPtr->bUsePtimer == TRUE)
            {
                /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
                 * Reason: The or operation of ADC_SC_AIEN(TRUE) is to indication the enable of
                 * interrupt */
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
                u32ChnCfg = ADC_SC_DIFF(pChannel->bDiffChannel) |
                            ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(TRUE) |
                            ADC_SC_CHS(pChannel->ChId);
#else
                u32ChnCfg = ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(TRUE) |
                            ADC_SC_CHS(pChannel->ChId);
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
                /* PRQA S 2985 -- */
            }
            else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
            {
                /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
                 * Reason: The or operation of ADC_SC_AIEN(FALSE) is to indication the disable of
                 * interrupt */
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
                u32ChnCfg = ADC_SC_DIFF(pChannel->bDiffChannel) |
                            ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(FALSE) |
                            ADC_SC_CHS(pChannel->ChId);
#else
                u32ChnCfg = ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(FALSE) |
                            ADC_SC_CHS(pChannel->ChId);
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
                /* PRQA S 2985 -- */
                ADC_HWA_SetFIFOWaterMark(pAdc, u8NumChannel - 1U);
                ADC_HWA_SetFIFOReadyInterruptFlag(pAdc, TRUE);
            }
        }
#if (ADC_DMA_SUPPORT == STD_ON)
        else if (ADC_TRANSFER_TYPE_DMA == pGroupPtr->eTransferType)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
               Reason: The or operation of ADC_SC_AIEN(FALSE) is to indication the disable of interrupt */
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
            u32ChnCfg = ADC_SC_DIFF(pChannel->bDiffChannel) | ADC_SC_SMPSEL(pChannel->SampleTimeOpt) |
                        ADC_SC_AIEN(FALSE) | ADC_SC_CHS(pChannel->ChId);
#else
            u32ChnCfg = ADC_SC_SMPSEL(pChannel->SampleTimeOpt) | ADC_SC_AIEN(FALSE) |
                        ADC_SC_CHS(pChannel->ChId);
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_ON == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
            /* PRQA S 2985 -- */
            /* Enable DMA request */
            ADC_HWA_SetFIFOWaterMark(pAdc, 0U);
            ADC_HWA_SetDMAEnableFlag(pAdc, TRUE);
        }
#endif
        else
        {
            /* Nothing for Misra */
        }
        /* Update register */
        ADC_HWA_SetChannelConfig(pAdc, u8SCRegister, u32ChnCfg);

#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (pGroupPtr->bUsePtimer == TRUE)
        {
#if (STD_ON == ADC_CFG3_SUPPORT)
            /* Configure the CoCo signal output for TrgSel */
            ADC_HWA_SetConfig3(pAdc, ADC_CFG3_EOSG_OSEL(1U) | ADC_CFG3_COCO_OSEL(pGroupPtr->CoCoSel));
#endif /* STD_ON == ADC_CFG3_SUPPORT */
        }
        else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
        {
#if (STD_ON == ADC_CFG3_SUPPORT)
#if (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT)
            if (pGroupPtr->bUseContinuousPeriod == TRUE)
            {
                ADC_HWA_SetConfig3(pAdc, ADC_CFG3_PTRGIV(pGroupPtr->u16ContinuousPeriod));
            }
            else
#endif /* STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
            {
                ADC_HWA_SetConfig3(pAdc, 0U);
            }
#endif /* STD_ON == ADC_CFG3_SUPPORT */
            /* Set the group sequence length. */
            ADC_HWA_SetSequenceLength(pAdc, (uint8)(u8NumChannel - 1U));
        }
    }

#if (ADC_DMA_SUPPORT == STD_ON)
    if (ADC_TRANSFER_TYPE_DMA == pGroupPtr->eTransferType)
    {
        /* Config the associated Dma channel */
        Adc_SarAdc_ConfigureDmaChannel(Unit, pGroupPtr, CoreId);
    }
#endif

    /* Start the ADC conversion and wait for trigger */
    ADC_HWA_Start(pAdc);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_26();

#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    if (pGroupPtr->bUsePtimer == TRUE)
    {
        /* Start software trigger through Ptimer or enable Ptimer hardware trigger */
        Adc_Ptimer_ConfigurePartialConversion(Unit, pGroupPtr, eTrigger);
    }
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
}

#if (ADC_DMA_SUPPORT == STD_ON)
/**
 * @brief          This function configures the associated DMA channel for the ADC instance
 *
 * @param[in]      Unit           The hardware Unit.
 * @param[in]      pGroupPtr      The pointer to the group configuration.
 * @param[in]      CoreId         The core ID of the caller.
 * @param[in]      u8NumChannel   The used Adc channels
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_ConfigureDmaChannel(const Adc_HwUnitType              Unit,
                                                     const Adc_GroupConfigurationType *pGroupPtr,
                                                     const uint8                       CoreId)
{
    const Adc_Type *const              pAdc     = (Adc_Type *)s_aAdcBase[Unit];
    const Adc_HwUnitConfigurationType *pUnitCfg = &(Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId]);
    const Adc_GroupType                GroupId  = pGroupPtr->AdcGroupId;
    Dma_InstanceType                   DmaInstance  = pUnitCfg->eDmaInstance;
    uint8                              DmaChannel   = pUnitCfg->u8DmaChannel;
    uint8                              u8NumChannel = (uint8)pGroupPtr->AssignedChannelCount;
    Dma_ChannelType                    DmaChnConfig;

    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27();

    /* PRQA S 306, 303, 3678, 488 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed
     *                                between a pointer to object and an integer type.
     *                               #Misra-C:2012 Rule-18.4 Performing pointer arithmetic.
     *                               #Misra-C:2012 Rule-8.13 A pointer should point to a const-
     *                                qualified type whenever possible.
     * Reason: The pointer of the buffer should be converted to the source and destination address
     * for DMA. The start address of the Result pointer is indicated by the start address of the
     * result buffer and the result index, and thus the pointer arithmetic is necessary. */
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
    if (pGroupPtr->bHwGroup == TRUE)
    {
        /* In sequence group mode, ADC conversion results are in ADC_RESULTn registers */
        DmaChnConfig.u32DmaSADDR = (uint32) & (pAdc->RESULT[pGroupPtr->ChannelStartIdx]);
        /* The source address will increment by data size (4 bytes) */
        DmaChnConfig.s16SrcDataOffset = 4;
        /* The increment of destination will be the 4 times of samples */
        DmaChnConfig.s16DestDataOffset = (sint16)(4 * pGroupPtr->NumSamples);
        /* The Dma engine will transfer all elements with one trigger signal */
        DmaChnConfig.u32DmaNBYTES = (uint32)(4U * u8NumChannel);
        /* The total channels (elements) to be transfered */
        DmaChnConfig.u16DmaOuterLoopCounter = 1U;
        /* One inner loop will transfer all Adc converted data */
        DmaChnConfig.s32DmaILOFF = 0U;
        /* Do not enable inner loop offset for source address */
        DmaChnConfig.bDmaSILOE = (boolean)FALSE;
        /* Enable inner loop offset for destination address to apply the destination address increment */
        DmaChnConfig.bDmaDILOE = (boolean)FALSE;
        /* In hardware trigger or continuous mode with channel number less than SC channels and
         * access mode is ADC_ACCESS_MODE_SINGLE, the DMA does not need to be reconfigured */
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            (
#if (ADC_HW_TRIGGER_API == STD_ON)
                (pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_HW) ||
#endif /* ADC_HW_TRIGGER_API == STD_ON */
                (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS)))
        {
            /* The Dma do not need to be reconfigured */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)FALSE;
            /* Reset the source address to initial address after finished */
            DmaChnConfig.s32DmaSLAST = -(4 * (sint32)u8NumChannel);
            /* The detinatination address will be reset to the initial address */
            DmaChnConfig.s32DmaDLAST = -(4 * (sint32)pGroupPtr->NumSamples * (sint32)u8NumChannel);
        }
        else
        {
            /* The Dma needs to be reconfigured after conversion completed */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)TRUE;
            /* Since the DMA will be re-configured, no need to reset source address */
            DmaChnConfig.s32DmaSLAST = 0;
            /* The detinatination address will be re-configured */
            DmaChnConfig.s32DmaDLAST = 0;
        }
    }
    else
#endif /* (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON) */
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (pGroupPtr->bUsePtimer == TRUE)
    {
        /* In discontinuous mode 1, ADC conversion results are in ADC_RESULTn registers */
        DmaChnConfig.u32DmaSADDR = (uint32) & (pAdc->RESULT[0U]);
        /* The source address will increment by data size (4 bytes) */
        DmaChnConfig.s16SrcDataOffset = 4;
        /* The increment of destination will be set by inner loop offset */
        DmaChnConfig.s16DestDataOffset = 0;
        /* The Dma engine will only transfer one element with one trigger signal */
        DmaChnConfig.u32DmaNBYTES = 4U;
        /* The total channels (elements) to be transfered */
        DmaChnConfig.u16DmaOuterLoopCounter = u8NumChannel;
        /* The increment of destination address is made up of data size and stream number samples */
        DmaChnConfig.s32DmaILOFF = 4 * (sint32)pGroupPtr->NumSamples;
        /* Do not enable inner loop offset for source address */
        DmaChnConfig.bDmaSILOE = (boolean)FALSE;
        /* Enable inner loop offset for destination address to apply the destination address increment */
        DmaChnConfig.bDmaDILOE = (boolean)TRUE;
        /* In hardware trigger or continuous mode with channel number less than SC channels and
         * access mode is ADC_ACCESS_MODE_SINGLE, the DMA does not need to be reconfigured */
#if (ADC_HW_TRIGGER_API == STD_ON)
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            ((pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_HW) ||
             (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS)))
#else
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS))
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        {
            /* The Dma do not need to be reconfigured */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)FALSE;
            /* Reset the source address to initial address after finished */
            DmaChnConfig.s32DmaSLAST = -(4 * (sint32)u8NumChannel);
            /* The detinatination address will be reset to the initial address */
            DmaChnConfig.s32DmaDLAST = -(4 * (sint32)pGroupPtr->NumSamples *
                                         (sint32)(u8NumChannel - 1));
        }
        else
        {
            /* The Dma needs to be reconfigured after conversion completed */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)TRUE;
            /* Since the DMA will be re-configured, no need to reset source address */
            DmaChnConfig.s32DmaSLAST = 0;
            /* The detinatination address will be re-configured */
            DmaChnConfig.s32DmaDLAST = 0;
        }
    }
    else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
    {
        /* In other modes, ADC conversion results are in ADC_FIFO register */
        DmaChnConfig.u32DmaSADDR = (uint32) & (pAdc->FIFO_DATA);
        /* The source address will not increment */
        DmaChnConfig.s16SrcDataOffset = 0;
        /* The increment of destination will be set by inner loop offset */
        DmaChnConfig.s16DestDataOffset = 0;
        /* The Dma engine will only transfer one element with one trigger signal */
        DmaChnConfig.u32DmaNBYTES = 4U;
        /* The total channels (elements) to be transfered */
        DmaChnConfig.u16DmaOuterLoopCounter = u8NumChannel;
        /* The increment of destination address is made up of data size and stream number samples */
        DmaChnConfig.s32DmaILOFF = 4 * (sint32)pGroupPtr->NumSamples;
        /* Do not enable inner loop offset for source address */
        DmaChnConfig.bDmaSILOE = (boolean)FALSE;
        /* Enable inner loop offset for destination address to apply the destination address increment */
        DmaChnConfig.bDmaDILOE = (boolean)TRUE;
        /* In hardware trigger or continuous mode with channel number less than SC channels and
         * access mode is ADC_ACCESS_MODE_SINGLE, the DMA does not need to be reconfigured */
#if (ADC_HW_TRIGGER_API == STD_ON)
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            ((pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_HW) ||
             (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS)))
#else
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS))
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        {
            /* The Dma do not need to be reconfigured */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)FALSE;
            /* Since the source increment is 0, there is no need to adjust the saddr */
            DmaChnConfig.s32DmaSLAST = 0;
            /* The detinatination address will be reset to the initial address */
            DmaChnConfig.s32DmaDLAST = -(4 * (sint32)pGroupPtr->NumSamples *
                                         (sint32)(u8NumChannel - 1));
        }
        else
        {
            /* The Dma needs to be reconfigured after conversion completed */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)TRUE;
            /* Since the DMA will be re-configured, no need to reset source address */
            DmaChnConfig.s32DmaSLAST = 0;
            /* The detinatination address will be re-configured */
            DmaChnConfig.s32DmaDLAST = 0;
        }
    }
    /* The address of the result buffer */
    DmaChnConfig.u32DmaDADDR = (uint32)(Adc_aGroupStatus[GroupId].pResultsBuffer +
                                        Adc_aGroupStatus[GroupId].ResultIndex);
    /* PRQA S 306, 303, 3678, 488 -- */
    /* Do not use circular buffer for source buffer */
    DmaChnConfig.bDmaSrcCircularBufferEn = (boolean)FALSE;
    /* The circular buffer size */
    DmaChnConfig.u32DmaSrcCircBufferSize = 0U;
    /* Do not use circular buffer for destination buffer */
    DmaChnConfig.bDmaDestCircularBufferEn = (boolean)FALSE;
    /* The circular buffer size */
    DmaChnConfig.u32DmaDestCircBufferSize = 0U;
    /* The ADC_RESULTn registers can only be accessed by 4 byte aligned read */
    DmaChnConfig.eDmaSSIZE = DMA_TRAN_SIZE_4B;
    /* Since the source buffer is 4 byte size, the destination buffer has to be 4 byte size */
    DmaChnConfig.eDmaDSIZE = DMA_TRAN_SIZE_4B;

#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
    /* Store the DMA channel configuration for Ptimer sequence error recovery */
    s_aAdcDmaChnConfig[Unit].u32DmaSADDR            = DmaChnConfig.u32DmaSADDR;
    s_aAdcDmaChnConfig[Unit].u32DmaDADDR            = DmaChnConfig.u32DmaDADDR;
    s_aAdcDmaChnConfig[Unit].u16DmaOuterLoopCounter = DmaChnConfig.u16DmaOuterLoopCounter;
#endif /* defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... */

    /* Exit critical section */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_27();
    if (E_OK == Dma_ConfigChannel(DmaInstance, DmaChannel, &DmaChnConfig))
    {
        Dma_EnableHwRequest(DmaInstance, DmaChannel);
    }
}
#endif /* ADC_DMA_SUPPORT == STD_ON */

/**
 * @brief          This function stops the current conversion of a group.
 * @details        This function stops the current conversion of a group.
 *
 * @note           This function should be executed in critical sections.
 *
 * @param[in]      Unit      The hardware Unit.
 * @param[in]      pGroupPtr The pointer to the group configuration.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_StopGroupConversion(const Adc_HwUnitType              Unit,
                                                     const Adc_GroupConfigurationType *pGroupPtr,
                                                     const uint8                       CoreId)
{
    Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
#if (ADC_DMA_SUPPORT == STD_ON)
    const Adc_HwUnitConfigurationType *pUnitCfg = &(Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId]);

    if (ADC_TRANSFER_TYPE_DMA == pGroupPtr->eTransferType)
    {
        /* Disable DMA channel request when stop conversion */
        Dma_DisableHwRequest(pUnitCfg->eDmaInstance, pUnitCfg->u8DmaChannel);
    }
#endif /* ADC_DMA_SUPPORT == STD_ON */

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_SarAdc_StopHwGroupConversion(Unit, pGroupPtr);
    }
    else
#endif
    {
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (pGroupPtr->bUsePtimer == TRUE)
        {
            /* Stop Ptimer hardware trigger unit */
            Adc_Ptimer_StopConversion(Unit);
            if (ADC_HWA_GetStart(pAdc) == (boolean)TRUE)
            {
                /* Stop conversion in Control register */
                ADC_HWA_Stop(pAdc);
                /* Clear all of COCO flags by reading ADC_RESULTn registers */
                Adc_SarAdc_DropConvResults(Unit, (uint8)pGroupPtr->AssignedChannelCount);
            }
        }
        else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
        {
            if (ADC_HWA_GetStart(pAdc) == (boolean)TRUE)
            {
                /* Stop conversion in Control register */
                ADC_HWA_Stop(pAdc);
                /* Empty FIFO by reading ADC_FIFO_DATA register */
                Adc_SarAdc_DropConvResults(Unit, 0U);
            }
        }
        ADC_HWA_SetInterruptEnable(pAdc, 0U);
    }

#if (ADC_DMA_SUPPORT != STD_ON)
    (void)CoreId;
#endif /* ADC_DMA_SUPPORT != STD_ON */
}

/**
 * @brief      This function waits the current conversion to stop.
 * @details    This function waits the current conversion to stop.
 *
 * @note       This function should be executed after Adc_SarAdc_StopGroupConversion called.
 *
 * @param[in]  Unit            The hardware Unit.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            If the conversion has stopped as expected.
 * @retval     E_NOT_OK        In case of timeout while waiting for stopping ongoing conversion.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_WaitConversionStopped(const Adc_HwUnitType Unit)
{
    Adc_Type *const pAdc       = (Adc_Type *)s_aAdcBase[Unit];
    uint32          u32Timeout = ADC_TIMEOUT_COUNTER;
    /* Variable for checking timeout status */
    Std_ReturnType eRet = E_OK;

    if (ADC_HWA_GetStart(pAdc) == (boolean)TRUE)
    {
        /* Wait until ADC module is stopped */
        while ((ADC_HWA_GetStop(pAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
        {
            u32Timeout--;
        }

        if ((uint32)0UL == u32Timeout)
        {
            eRet = E_NOT_OK;
        }
    }

    return eRet;
}

/**
 * @brief          Drop the unused data of the ADC Unit
 *
 * @param[in]      Unit          The hardware Unit.
 * @param[in]      u8NumReg      The number of registers to clear flag.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_DropConvResults(const Adc_HwUnitType Unit, const uint8 u8NumReg)
{
    Adc_Type *const pAdc       = (Adc_Type *)s_aAdcBase[Unit];
    uint32          u32Timeout = ADC_NUM_SC_REGISTER;
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    uint8 u8RegIdx;
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */

    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28();
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    if (ADC_HWA_GetSequenceMode(pAdc) == ADC_SEQMODE_DISCONTINUOUS_1)
    {
        /* Clear all of COCO flag by reading ADC_RESULTn registers */
        for (u8RegIdx = 0U; u8RegIdx < u8NumReg; u8RegIdx++)
        {
            /* PRQA S 3200 ++ #Misra-C:2012 Rule-17.1 The value returned by a function having
             * non-void return type shall be used. Reason: The result data register is read for
             * clearing the COCO flags, the data is ignored. */
            (void)ADC_HWA_GetChannelData(pAdc, u8RegIdx);
            /* PRQA S 3200 -- */
        }
    }
    else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
    {
        /* The FIFO should by empty by reading at most NUM_SC_REGISTER times */
        while ((ADC_HWA_GetEmpty(pAdc) != TRUE) && (u32Timeout != 0))
        {
            (void)ADC_HWA_GetFIFOData(pAdc);
            u32Timeout--;
        }
        ADC_HWA_ClearEndOfSequence(pAdc);
    }
    /* Exit critical section */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_28();
}

/**
 * @brief          This function restart conversion
 * @details        This function restart conversion in case of streaming access mode is enabled
 *
 * @param[in]      Unit        The hardware Unit.
 * @param[in]      pGroupPtr   The pointer to the group configuration.
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_RestartContinuousConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const uint8                       CoreId)
{
    Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_SarAdc_StartHwGroupConversion(Unit, pGroupPtr, ADC_TRIGG_SRC_SW, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (pGroupPtr->bUsePtimer == TRUE)
    {
        /* In case of the number of channels in group less than the ADC_SCn register used then
         * update group status and start Ptimer */
        /* No need to re-configure channels if they are not changed */
#if (ADC_DMA_SUPPORT == STD_ON)
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_STREAMING) &&
            (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_DMA))
        {
            Adc_SarAdc_ConfigureDmaChannel(Unit, pGroupPtr, CoreId);
        }
#endif /* ADC_DMA_SUPPORT == STD_ON */
        if (pGroupPtr->bUseContinuousPeriod == FALSE)
        {
            /* Trigger Ptimer by software */
            Adc_Ptimer_StartSoftwareConversion(Unit);
        }
    }
    else
#endif
    {
        /* No need to re-configure channels if they are not changed */
#if (ADC_DMA_SUPPORT == STD_ON)
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_STREAMING) &&
            (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_DMA))
        {
            Adc_SarAdc_ConfigureDmaChannel(Unit, pGroupPtr, CoreId);
        }
#endif /* ADC_DMA_SUPPORT == STD_ON */
#if (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT)
        if (pGroupPtr->bUseContinuousPeriod == FALSE)
#endif /* STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
        {
            ADC_HWA_Start(pAdc);
        }
    }
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_OFF) && (ADC_DMA_SUPPORT == STD_OFF))
    (void)CoreId;
#endif
}

#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_UNIT_2_ISR_USED)) || (defined(ADC_UNIT_3_ISR_USED)) || \
     (defined(ADC_UNIT_4_ISR_USED)) || (defined(ADC_UNIT_5_ISR_USED)))
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
/**
 * @brief       This function check hardware group status
 *
 * @param[in]   Unit            The hardware Unit.
 * @param[in]   HwGroupId       The hardware group id.
 *
 * @return      Std_ReturnType  E_OK or E_NOT_OK.
 * @retval      E_OK            The flag of hardware group is 1.
 * @retval      E_NOT_OK        The flag of hardware group is 0.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckHwGroupStatus(const Adc_HwUnitType Unit,
                                                              const uint8          HwGroupId)
{
    const Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
    Std_ReturnType        eRet = E_NOT_OK;
    if (ADC_HWA_GetEndOfSeqGroupInterruptFlag(pAdc, HwGroupId) == TRUE)
    {
        eRet = E_OK;
    }
    return eRet;
}
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON)
/**
 * @brief      This function checks whether the conversion sequence is completed
 * @details    This function checks whether the conversion sequence is completed
 *
 * @param[in]  Unit      The hardware unit.
 * @param[in]  Group     The group id.
 * @param[in]  CoreId    The core id.
 *
 * @return     boolean   TRUE or FALSE
 * @retval     TRUE      the conversion is completed
 * @retval     FALSE     the conversion is not completed
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckSequenceStatus(const Adc_HwUnitType Unit,
                                                               const Adc_GroupType  Group,
                                                               const uint8          CoreId)
{
    const Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
    uint8                 u8ScIndex;
    Std_ReturnType        eRet = E_NOT_OK;
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    uint8                             u8ScUsed;
    const Adc_GroupConfigurationType *pGroupPtr = &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]);
#endif

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29();
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    if (ADC_HWA_GetSequenceMode(pAdc) == ADC_SEQMODE_DISCONTINUOUS_1)
    {
        u8ScUsed = (uint8)pGroupPtr->AssignedChannelCount;
        /* Check if conversion complete interrupt of the last channel to indicate end of chain complete */
        for (u8ScIndex = 0U; u8ScIndex < u8ScUsed; u8ScIndex++)
        {
            /* Check COCO bit in ADC_SCn for all channels and interrupt enable bit for last channel */
            if (ADC_HWA_GetChannelConvertComplete(pAdc, u8ScIndex) == (boolean)FALSE)
            {
                break;
            }
            else if (ADC_HWA_GetChannelInterruptEnable(pAdc, u8ScIndex) == (boolean)TRUE)
            {
                /* Interrupt enable bit and COCO enable bit in ADC_SCn, finding the last channel */
                eRet = E_OK;
            }
            else
            {
                /* Nothing for misra */
            }
        }
    }
    else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
    {
        if (ADC_HWA_GetFIFOReady(pAdc) == (boolean)TRUE)
        {
            eRet = E_OK;
        }
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29();
    (void)Group;
    return eRet;
}
#endif /* ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON */
#endif /* (defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) ... */

/**
 * @brief      This function checks whether the conversion sequence is completed without interrupt
 * @details    This function checks whether the conversion sequence is completed without interrupt
 *
 * @param[in]  Unit             The hardware unit.
 * @param[in]  pGroupPtr        The pointer to the group configuration.
 *
 * @return     Std_ReturnType   E_OK or E_NOT_OK.
 * @retval     E_OK             The flag of hardware group is 1.
 * @retval     E_NOT_OK         The flag of hardware group is 0.
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckSequenceStatusWoInterrupt(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr)
{
    const Adc_Type *const pAdc = (Adc_Type *)s_aAdcBase[Unit];
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    uint8 u8ScIndex;
    uint8 u8ScUsed;
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
    Std_ReturnType eRet = E_OK;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_30();
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        if (ADC_HWA_GetEndOfSeqGroupInterruptFlag(pAdc, pGroupPtr->HwGroupId) == (boolean)FALSE)
        {
            eRet = E_NOT_OK;
        }
    }
    else
#else
    (void)pGroupPtr;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (ADC_HWA_GetSequenceMode(pAdc) == ADC_SEQMODE_DISCONTINUOUS_1)
    {
        u8ScUsed = (uint8)pGroupPtr->AssignedChannelCount;
        for (u8ScIndex = 0U; u8ScIndex < u8ScUsed; u8ScIndex++)
        {
            if (ADC_HWA_GetChannelConvertComplete(pAdc, u8ScIndex) == (boolean)FALSE)
            {
                eRet = E_NOT_OK;
                break;
            }
        }
    }
    else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
    {
        if (ADC_HWA_GetFIFOReady(pAdc) == (boolean)FALSE)
        {
            eRet = E_NOT_OK;
        }
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_30();
    return eRet;
}

/**
 * @brief       This function gets the results of the conversion sequence
 * @details     This function gets the results of the conversion sequence
 *
 * @param[in]   Unit             The hardware Unit.
 * @param[in]   pGroupPtr        The pointer to the group configuration.
 * @param[in]   CoreId           The core ID of the caller.
 * @param[out]  pDataPtr         The pointer to the buffer which will be filled by the conversion
 * results.
 *
 * @return      Std_ReturnType   E_OK or E_NOT_OK.
 * @retval      E_OK             If the result buffer is filled with conversion result
 * @retval      E_NOT_OK         If the result buffer is failed to be filled with conversion result
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_GetSequenceResults(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const uint8                       CoreId,
    Adc_ValueGroupType               *pDataPtr)
{
    Adc_Type *const         pAdc         = (Adc_Type *)s_aAdcBase[Unit];
    Std_ReturnType          eRet         = E_OK;
    Adc_StreamNumSampleType GroupSamples = pGroupPtr->NumSamples;
    Adc_ChannelIndexType    SequenceChannelCnt;
    Adc_ChannelIndexType    ChannelIndex;
    uint32                  u32AdcDataValue;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    const Adc_ChannelConfigurationType *pChannel;
    Adc_ChannelType                     HwChannel;
    Adc_GroupType                       GroupId = pGroupPtr->AdcGroupId;
    boolean                             bFlag   = (boolean)FALSE;
#endif
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_31();
    ChannelIndex = 0U;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    HwChannel = pGroupPtr->pAssignment[ChannelIndex];
    pChannel  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId].pChannels[HwChannel]);
    /* SWS_Adc_00451 */
    if ((boolean)TRUE == pChannel->bAdcChannelLimitcheck)
    {
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        if (pGroupPtr->bUsePtimer == TRUE)
        {
            /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be
             * assigned to an object with a narrower essential type or of a different essential
             * type category.
             * Reason: The ChannelIndex is gurateened by the SequenceChannelCnt to not exceed
             * the number of channels of the ADC hardware channel and thus will not exceed the
             * narrower type */
            u32AdcDataValue = ADC_HWA_GetChannelData(pAdc, (uint8)ChannelIndex);
            /* PRQA S 4461 -- */
        }
        else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
            if (pGroupPtr->bHwGroup == TRUE)
        {
            /* PRQA S 4461, 2985 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be
             * assigned to an object with a narrower essential type or of a different essential
             * type category.
             * Reason: The ChannelIndex is gurateened by the SequenceChannelCnt to not exceed the
             * number of channels of the ADC hardware channel and thus will not exceed the narrower
             * type */
            u32AdcDataValue =
                ADC_HWA_GetChannelData(pAdc, (uint8)(pGroupPtr->ChannelStartIdx + ChannelIndex));
            /* PRQA S 4461, 2985 -- */
            ADC_HWA_ClearEndOfSeqGroupInterruptFlag(pAdc, pGroupPtr->HwGroupId);
        }
        else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON*/
        {
            u32AdcDataValue = ADC_HWA_GetFIFOData(pAdc);
        }

        bFlag = (boolean)Adc_SarAdc_CheckConversionValuesInRange(pChannel, (uint16)u32AdcDataValue);
        /* Limit check succeeded */
        if ((boolean)TRUE == bFlag)
        {
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
             * not be applied to an expression of pointer type.
             * Reason: The result buffer is a pointer provided by the user and thus the
             * pointer arithmetic cannot be avoided to access its data */
            *(pDataPtr + (ChannelIndex * GroupSamples)) = (uint16)(u32AdcDataValue);
            /* PRQA S 488 -- */
        }
        /* Limit check failed */
        else
        {
            Adc_aGroupStatus[GroupId].eAlreadyConverted = ADC_ALREADY_CONVERTED;

            eRet = E_NOT_OK;
        }
    }
    else
#endif
    {
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
        if (pGroupPtr->bHwGroup == TRUE)
        {
            SequenceChannelCnt = pGroupPtr->AssignedChannelCount;
            while (ChannelIndex < SequenceChannelCnt)
            {
                /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not
                 * be assigned to an object with a narrower essential type or of a different
                 * essential type category.
                 * Reason: The ChannelIndex is gurateened by the SequenceChannelCnt to not
                 * exceed the number of channels of the ADC hardware channel and thus will not
                 * exceed the narrower type */
                u32AdcDataValue =
                    ADC_HWA_GetChannelData(pAdc, (uint8)(pGroupPtr->ChannelStartIdx + ChannelIndex));
                /* PRQA S 4461 -- */

                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
                 * not be applied to an expression of pointer type.
                 * Reason: The result buffer is a pointer provided by the user and thus the
                 * pointer arithmetic cannot be avoided to access its data */
                *(pDataPtr + (ChannelIndex * GroupSamples)) = (uint16)(u32AdcDataValue);
                /* PRQA S 488 -- */
                ChannelIndex++;
            }
            ADC_HWA_ClearEndOfSeqGroupInterruptFlag(pAdc, pGroupPtr->HwGroupId);
            /* Disable the End of Sequence Group interrupt if the trigger source is software  to
             * prevent unintended interrupts */
            if (pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_SW)
            {
                ADC_HWA_SetEndOfSeqGroupInterruptEnable(pAdc, pGroupPtr->HwGroupId, FALSE);
            }
        }
        else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON*/
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
            if (pGroupPtr->bUsePtimer == TRUE)
        {
            SequenceChannelCnt = pGroupPtr->AssignedChannelCount;
            while (ChannelIndex < SequenceChannelCnt)
            {
                /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not
                 * be assigned to an object with a narrower essential type or of a different
                 * essential type category.
                 * Reason: The ChannelIndex is gurateened by the SequenceChannelCnt to not
                 * exceed the number of channels of the ADC hardware channel and thus will not
                 * exceed the narrower type */
                u32AdcDataValue = ADC_HWA_GetChannelData(pAdc, (uint8)ChannelIndex);
                /* PRQA S 4461 -- */

                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
                 * not be applied to an expression of pointer type.
                 * Reason: The result buffer is a pointer provided by the user and thus the
                 * pointer arithmetic cannot be avoided to access its data */
                *(pDataPtr + (ChannelIndex * GroupSamples)) = (uint16)(u32AdcDataValue);
                /* PRQA S 488 -- */
                ChannelIndex++;
            }
        }
        else
#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */
        {
            SequenceChannelCnt = pGroupPtr->AssignedChannelCount;
            while (ChannelIndex < SequenceChannelCnt)
            {
                u32AdcDataValue = ADC_HWA_GetFIFOData(pAdc);

                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
                 * not be applied to an expression of pointer type.
                 * Reason: The result buffer is a pointer provided by the user and thus the
                 * pointer arithmetic cannot be avoided to access its data */
                *(pDataPtr + (ChannelIndex * GroupSamples)) = (uint16)(u32AdcDataValue);
                /* PRQA S 488 -- */
                ChannelIndex++;
            }
        }
    }
    /* Handle unused parameter */
    (void)CoreId;
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_31();
    return eRet;
}

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief      This function checks whether Adc is in overrun state
 * @details    This function checks whether Adc is in overrun state, if so, restart the conversion
 *             and drop the results to prevent data inconsistency
 *
 * @param[in]  Unit             The hardware Unit.
 * @param[in]  pGroupPtr        The pointer to the group configuration.
 *
 * @return     Std_ReturnType   E_OK or E_NOT_OK.
 * @retval     E_OK             No overrun is occured
 * @retval     E_NOT_OK         Overrun is occured
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckOverrun(const Adc_HwUnitType              Unit,
                                                        const Adc_GroupConfigurationType *pGroupPtr)
{
    Adc_Type *const pAdc       = (Adc_Type *)s_aAdcBase[Unit];
    uint32          u32Timeout = ADC_TIMEOUT_COUNTER;
    Std_ReturnType  eRet       = E_OK;
    /* Only in Single mode would occur overrun */
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
    if (pGroupPtr->bUsePtimer == FALSE)
#endif
    {
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
        if (pGroupPtr->bHwGroup == FALSE)
#endif
        {
            if (ADC_HWA_GetOverRun(pAdc) == TRUE)
            {
                /* Stop conversion in Control register */
                ADC_HWA_Stop(pAdc);
                /* Wait until ADC module is stopped */
                while ((ADC_HWA_GetStop(pAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
                {
                    u32Timeout--;
                }
                ADC_HWA_ClearOverRun(pAdc);
                Adc_SarAdc_DropConvResults(Unit, 0U);
                ADC_HWA_Start(pAdc);
                eRet = E_NOT_OK;
            }
        }
    }
    return eRet;
}
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
#if (ADC_DMA_SUPPORT == STD_ON)
/**
 * @brief      This function reconfigures Dma when Ptimer sequence error occured
 *
 * @param[in]  Unit       The hardware Unit.
 * @param[in]  pGroupPtr  The pointer to the group configuration.
 * @param[in]  CoreId     The core ID of the caller.
 *
 * @return     void
 *
 */
ADC_TEXT_SECTION void Adc_SarAdc_ReConfigureDma(const Adc_HwUnitType              Unit,
                                                const Adc_GroupConfigurationType *pGroupPtr,
                                                const uint8                       CoreId)
{
    uint32                             u32Timeout = ADC_DMA_TRANSFER_TIMEOUT;
    const Adc_HwUnitConfigurationType *pUnitCfg = &(Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId]);
    Dma_InstanceType                   DmaInstance = pUnitCfg->eDmaInstance;
    uint8                              DmaChannel  = pUnitCfg->u8DmaChannel;

    /* Wait for the current transfer to complete */
    while (((boolean)TRUE == Dma_CheckIfTransferActive(DmaInstance, DmaChannel)) && (u32Timeout != 0U))
    {
        u32Timeout--;
    }
    if (u32Timeout != 0U)
    {
        /* Restore the Dma transfer parameters to the last configured values */
        Dma_SetCfgDaddr(DmaInstance, DmaChannel, s_aAdcDmaChnConfig[Unit].u32DmaDADDR);
        Dma_SetCfgSaddr(DmaInstance, DmaChannel, s_aAdcDmaChnConfig[Unit].u32DmaSADDR);
        Dma_UpdateOuterLoopCounter(DmaInstance,
                                   DmaChannel,
                                   s_aAdcDmaChnConfig[Unit].u16DmaOuterLoopCounter);
    }
}
#endif /* ADC_DMA_SUPPORT == STD_ON */
#endif /* defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
