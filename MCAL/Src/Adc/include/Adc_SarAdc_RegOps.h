/**
 *   @file    Adc_SarAdc_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - low level driver header file.
 *   @details ADC low level driver API.
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
*   0.3.0       17/10/2023    QXW0030       N/A          Optimization of Multicore instance
*   0.7.0       27/03/2024    QXW0030       N/A          Add support for FC7240
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
*   1.3.0       19/08/2025    QXW0030       N/A          Change the sw trigger method of hardware
*                                                        groups
*   1.4.0       12/09/2025    QXW0030       N/A          Add Ptimer trigger Hw group support
*   1.4.0       25/09/2025    QXW0030       N/A          Add support for FC7300F4MDDxxxT1C
==================================================================================================*/
#ifndef ADC_SARADC_REGOPS_H
#define ADC_SARADC_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_CfgDefines.h"
#include "Adc_SarAdc_Types.h"
#include "Adc_SarAdc_Reg.h"
#include "Common_Cfg.h"
#include "Mcal.h"
#include "Scm_Reg.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"
/**
 * @brief Check whether the conversion result is in the comparing range
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the conversion result is in the comparing range
 * @return FALSE the conversion result is not in the comparing range
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetCompareFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_ACMP_MASK) >> ADC_INT_STATUS_ACMP_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the compare flag
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearCompareFlag(Adc_Type *const pAdc)
{
    pAdc->INT_STATUS = ADC_INT_STATUS_ACMP(1U);
}

/**
 * @brief Get the overrrun status of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC is in overrun status
 * @return FALSE the ADC is not overrun
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetOverRun(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_OVR_MASK) >> ADC_INT_STATUS_OVR_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the overrun flag of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearOverRun(Adc_Type *const pAdc)
{
    pAdc->INT_STATUS = ADC_INT_STATUS_OVR(1U);
}

/**
 * @brief Check whether the ADC conversion sequence is finished
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC conversion sequence is finished
 * @return FALSE the ADC conversion sequence is unfinished
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEndOfSequence(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_EOSEQ_MASK) >> ADC_INT_STATUS_EOSEQ_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the ADC conversion sequence complete flag
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearEndOfSequence(Adc_Type *const pAdc)
{
    pAdc->INT_STATUS = ADC_INT_STATUS_EOSEQ(1U);
}

/**
 * @brief Check whether the current ADC conversion is finished
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the current ADC conversion is finished
 * @return FALSE the current ADC conversion is unfinished
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEndOfConversion(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_EOC_MASK) >> ADC_INT_STATUS_EOC_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the ADC single conversion complete flag
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearEndOfConversion(Adc_Type *const pAdc)
{
    pAdc->INT_STATUS = ADC_INT_STATUS_EOC(1U);
}

/**
 * @brief Check whether the sampling phase of the current ADC conversion is finished
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the sampling phase of the ADC conversion is finished
 * @return FALSE the sampling phase of the ADC conversion is unfinished
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEndOfSample(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_EOSMP_MASK) >> ADC_INT_STATUS_EOSMP_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the ADC sampling complete flag
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearEndOfSample(Adc_Type *const pAdc)
{
    pAdc->INT_STATUS = ADC_INT_STATUS_EOSMP(1U);
}

/**
 * @brief Check whether the data quantity in the FIFO is greater than watermark
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC FIFO is ready
 * @return FALSE the ADC FIFO is unready
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetFIFOReady(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_FIFO_RDY_MASK) >> ADC_INT_STATUS_FIFO_RDY_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Check whether the ADC FIFO is full
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC FIFO is full
 * @return FALSE the ADC FIFO is not full
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetFull(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_FULL_MASK) >> ADC_INT_STATUS_FULL_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Check whether the ADC FIFO is empty
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC FIFO is empty
 * @return FALSE the ADC FIFO is not empty
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEmpty(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_EMPTY_MASK) >> ADC_INT_STATUS_EMPTY_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Check whether the ADC instance is ready to operate
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC instance is ready for a new conversion
 * @return FALSE the ADC instance is unready
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetReady(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & ADC_INT_STATUS_ADRDY_MASK) >> ADC_INT_STATUS_ADRDY_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the ready flag of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearReady(Adc_Type *const pAdc)
{
    pAdc->INT_STATUS = ADC_INT_STATUS_ADRDY(1U);
}

/**
 * @brief Clear the all interrupt flags
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearAllIntFlags(Adc_Type *const pAdc)
{
    pAdc->INT_STATUS = ADC_INT_STATUS_ACMP_MASK | ADC_INT_STATUS_OVR_MASK |
                       ADC_INT_STATUS_EOSEQ_MASK | ADC_INT_STATUS_EOC_MASK |
                       ADC_INT_STATUS_EOSMP_MASK | ADC_INT_STATUS_ADRDY_MASK;
}

/**
 * @brief Get the FIFO Ready interrupt flag
 * If enabled, ADC interrupt is generated when the FIFO water mark is greater than FWMARK
 * @param pAdc the base address of the ADC instance
 * @return TRUE ADC FIFO Ready interrupt is enabled
 * @return FALSE ADC FIFO Ready interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetFIFOReadyInterruptFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->INT_ENABLE & ADC_INT_ENABLE_FIFO_RDY_IE_MASK) >>
                       ADC_INT_ENABLE_FIFO_RDY_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the FIFO Ready interrupt flag
 * If enabled, ADC interrupt is generated when the FIFO water mark is greater than FWMARK
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the ADC FIFO Ready interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetFIFOReadyInterruptFlag(Adc_Type *const pAdc,
                                                                     boolean         bEnable)
{
    pAdc->INT_ENABLE = (pAdc->INT_ENABLE & ~ADC_INT_ENABLE_FIFO_RDY_IE_MASK) |
                       ADC_INT_ENABLE_FIFO_RDY_IE(bEnable);
}

/**
 * @brief Get the Compare interrupt flag
 * If enabled, ADC interrupt is generated when the ADC conversion result is not within the compare
 * threshold
 * @param pAdc the base address of the ADC instance
 * @return TRUE ADC Compare interrupt is enabled
 * @return FALSE ADC Compare interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetCompareInterruptFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->INT_ENABLE & ADC_INT_ENABLE_ACMP_IE_MASK) >>
                       ADC_INT_ENABLE_ACMP_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Compare interrupt flag
 * If enabled, ADC interrupt is generated when the ADC conversion result is not within the compare
 * threshold
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the ADC Compare interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetCompareInterruptFlag(Adc_Type *const pAdc,
                                                                   boolean         bEnable)
{
    pAdc->INT_ENABLE = (pAdc->INT_ENABLE & ~ADC_INT_ENABLE_ACMP_IE_MASK) |
                       ADC_INT_ENABLE_ACMP_IE(bEnable);
}

/**
 * @brief Get the Overrun interrupt flag
 * If enabled, ADC interrupt is generated when the ADC instance is overrun
 * @param pAdc the base address of the ADC instance
 * @return TRUE ADC Overrun interrupt is enabled
 * @return FALSE ADC Overrun interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetOverrunInterruptFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->INT_ENABLE & ADC_INT_ENABLE_OVRIE_MASK) >> ADC_INT_ENABLE_OVRIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Overrun interrupt flag
 * If enabled, ADC interrupt is generated when the ADC instance is overrun
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the ADC Overrun interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetOverrunInterruptFlag(Adc_Type *const pAdc,
                                                                   boolean         bEnable)
{
    pAdc->INT_ENABLE = (pAdc->INT_ENABLE & ~ADC_INT_ENABLE_OVRIE_MASK) |
                       ADC_INT_ENABLE_OVRIE(bEnable);
}

/**
 * @brief Get the End of Sequence interrupt enable flag
 * If enabled, ADC interrupt is generated when the ADC sequence conversion is completed
 * @param pAdc the base address of the ADC instance
 * @return TRUE ADC End of Sequence interrupt is enabled
 * @return FALSE ADC End of Sequence interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEndOfSequenceInterruptFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->INT_ENABLE & ADC_INT_ENABLE_EOSEQIE_MASK) >>
                       ADC_INT_ENABLE_EOSEQIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the End of Sequence interrupt enable flag
 * If enabled, ADC interrupt is generated when the ADC sequence conversion is completed
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the ADC End of Sequence interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetEndOfSequenceInterruptFlag(Adc_Type *const pAdc,
                                                                         boolean         bEnable)
{
    pAdc->INT_ENABLE = (pAdc->INT_ENABLE & ~ADC_INT_ENABLE_EOSEQIE_MASK) |
                       ADC_INT_ENABLE_EOSEQIE(bEnable);
}

/**
 * @brief Get the conversion complete interrupt enable flag
 * If enabled, ADC interrupt is generated when each ADC conversion is completed
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC End of Conversion interrupt is enabled
 * @return FALSE the ADC End of Conversion interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEndOfConversionInterruptFlag(
    const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->INT_ENABLE & ADC_INT_ENABLE_EOCIE_MASK) >> ADC_INT_ENABLE_EOCIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the conversion complete interrupt enable flag
 * If enabled, ADC interrupt is generated when each ADC conversion is completed
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the conversion complete interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetEndOfConversionInterruptFlag(Adc_Type *const pAdc,
                                                                           boolean         bEnable)
{
    pAdc->INT_ENABLE = (pAdc->INT_ENABLE & ~ADC_INT_ENABLE_EOCIE_MASK) |
                       ADC_INT_ENABLE_EOCIE(bEnable);
}

/**
 * @brief Get the sample complete interrupt enable flag
 * If enabled, ADC interrupt is generated when each ADC conversion finished the sampling phase
 * @param pAdc the base address of the ADC instance
 * @return TRUE the sample complete interrupt is enabled
 * @return FALSE the sample complete interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEndOfSampleInterruptFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->INT_ENABLE & ADC_INT_ENABLE_EOSMPIE_MASK) >>
                       ADC_INT_ENABLE_EOSMPIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the sample complete interrupt enable flag
 * If enabled, ADC interrupt is generated when each ADC conversion finished the sampling phase
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the sample complete interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetEndOfSampleInterruptFlag(Adc_Type *const pAdc,
                                                                       boolean         bEnable)
{
    pAdc->INT_ENABLE = (pAdc->INT_ENABLE & ~ADC_INT_ENABLE_EOSMPIE_MASK) |
                       ADC_INT_ENABLE_EOSMPIE(bEnable);
}

/**
 * @brief Get the ADC ready interrupt enable flag
 * If enabled, ADC interrupt is generated when the ADC module is ready for conversion
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC ready interrupt is enabled
 * @return FALSE the ADC ready interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetADCReadyInterruptFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->INT_ENABLE & ADC_INT_ENABLE_ADRDYIE_MASK) >>
                       ADC_INT_ENABLE_ADRDYIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the ADC ready interrupt enable flag
 * If enabled, ADC interrupt is generated when the ADC module is ready for conversion
 * @param pAdc the base address of the ADC instance
 * @param bEnable Whether to enable the ADC ready interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetADCReadyInterruptFlag(Adc_Type *const pAdc,
                                                                    boolean         bEnable)
{
    pAdc->INT_ENABLE = (pAdc->INT_ENABLE & ~ADC_INT_ENABLE_ADRDYIE_MASK) |
                       ADC_INT_ENABLE_ADRDYIE(bEnable);
}

/**
 * @brief Get the interrupt enable config
 *
 * @param pAdc the base address of the ADC instance
 * @return uint32 the interrupt enable config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetInterruptEnable(const Adc_Type *const pAdc)
{
    return pAdc->INT_ENABLE;
}

/**
 * @brief Set the interrupt enable
 *
 * @param u32InterruptCfg the interrupt enable config
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetInterruptEnable(Adc_Type *const pAdc,
                                                              uint32          u32InterruptCfg)
{
    pAdc->INT_ENABLE = u32InterruptCfg;
}

/**
 * @brief Reset the ADC hardware
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_Reset(Adc_Type *const pAdc)
{
    pAdc->CONTROL = ADC_CONTROL_ADRST(1U);
    pAdc->CONTROL = 0U;
}

/**
 * @brief Get the enable status of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC instance is enabled
 * @return FALSE the ADC instance has not been enabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEnable(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CONTROL;
    u32TmpVal        = (u32TmpVal & ADC_CONTROL_ADEN_MASK) >> ADC_CONTROL_ADEN_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_Enable(Adc_Type *const pAdc)
{
    pAdc->CONTROL = ADC_CONTROL_ADEN(1U);
}

/**
 * @brief Get whether the ADC instance is in disable status
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC instance is in disable status
 * @return FALSE the ADC instance is not in disable status
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetDisable(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CONTROL;
    u32TmpVal        = (u32TmpVal & ADC_CONTROL_ADDIS_MASK) >> ADC_CONTROL_ADDIS_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Disable the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_Disable(Adc_Type *const pAdc)
{
    pAdc->CONTROL = ADC_CONTROL_ADDIS(1U);
}

/**
 * @brief Get the conversion start status of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the conversion of the ADC instance is started
 * @return FALSE the conversion of the ADC instance has not been started
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetStart(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CONTROL;
    u32TmpVal        = (u32TmpVal & ADC_CONTROL_ADSTART_MASK) >> ADC_CONTROL_ADSTART_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Start the ADC conversion
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_Start(Adc_Type *const pAdc)
{
    pAdc->CONTROL = ADC_CONTROL_ADSTART(1U);
}

/**
 * @brief Get whether ADC is in stopping status
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC instance is stopping
 * @return FALSE the ADC instance is not in stopping status
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetStop(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CONTROL;
    u32TmpVal        = (u32TmpVal & ADC_CONTROL_ADSTP_MASK) >> ADC_CONTROL_ADSTP_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Stop the ADC conversion
 *
 * @param pAdc the base address of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_Stop(Adc_Type *const pAdc)
{
    pAdc->CONTROL = ADC_CONTROL_ADSTP(1U);
}

#if (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT)
/**
 * @brief Get whether the ADC is in differential mode
 *
 * @note Differential mode is only available in FC4150F2M
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the ADC is in differential mode
 * @return FALSE the ADC is not in differential mode
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetDifferentialModeEnableFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CFG1;
    u32TmpVal        = (u32TmpVal & ADC_CFG1_DIFF_MASK) >> ADC_CFG1_DIFF_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable the ADC differential mode
 *
 * @note Differential mode is only available in FC4150F2M
 *
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the ADC differential mode
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetDifferentialModeEnableFlag(Adc_Type *const pAdc,
                                                                         boolean         bEnable)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_DIFF_MASK) | ADC_CFG1_DIFF(bEnable);
}
#endif /* STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT */

/**
 * @brief Get the sequence length of the ADC conversion sequence
 *
 * @param pAdc the base address of the ADC instance
 * @return uint8 the sequence length of the ADC conversion sequence
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 ADC_HWA_GetSequenceLength(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CFG1;
    u32TmpVal        = (u32TmpVal & ADC_CFG1_SEQ_LEN_MASK) >> ADC_CFG1_SEQ_LEN_SHIFT;

    return (uint8)u32TmpVal;
}

/**
 * @brief Set the sequence length of the ADC conversion sequence
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SequenceLength the sequence length of the ADC conversion sequence
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetSequenceLength(Adc_Type *const pAdc,
                                                             uint8           u8SequenceLength)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_SEQ_LEN_MASK) | ADC_CFG1_SEQ_LEN(u8SequenceLength);
}

/**
 * @brief Get the ADC sequence mode
 *
 * @param pAdc the base address of the ADC instance
 * @return Adc_SeqModeType the sequence mode the the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_SeqModeType ADC_HWA_GetSequenceMode(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CFG1;
    u32TmpVal        = (u32TmpVal & ADC_CFG1_SEQ_MOD_MASK) >> ADC_CFG1_SEQ_MOD_SHIFT;

    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The relative register bits can be safely converted to the enumeration type */
    return (Adc_SeqModeType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the ADC sequence mode
 *
 * @param pAdc the base address of the ADC instance
 * @param eSequenceMode the sequence mode the the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetSequenceMode(Adc_Type *const pAdc,
                                                           Adc_SeqModeType eSequenceMode)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_SEQ_MOD_MASK) | ADC_CFG1_SEQ_MOD(eSequenceMode);
}

/**
 * @brief Get the trigger source the the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return Adc_TrigSrcType the trigger source of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_TrigSrcType ADC_HWA_GetTriggerSource(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CFG1;
    u32TmpVal        = (u32TmpVal & ADC_CFG1_TRIGSRC_MASK) >> ADC_CFG1_TRIGSRC_SHIFT;

    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The relative register bits can be safely converted to the enumeration type */
    return (Adc_TrigSrcType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the trigger source the the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param eTriggerSource the trigger source of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetTriggerSource(Adc_Type *const pAdc,
                                                            Adc_TrigSrcType eTriggerSource)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_TRIGSRC_MASK) | ADC_CFG1_TRIGSRC(eTriggerSource);
}

/**
 * @brief Get the trigger mode of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return Adc_TrigModeType the trigger mode if the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_TrigModeType ADC_HWA_GetTriggerMode(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->CFG1;
    u32TmpVal        = (u32TmpVal & ADC_CFG1_TRIGMODE_MASK) >> ADC_CFG1_TRIGMODE_SHIFT;

    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The relative register bits can be safely converted to the enumeration type */
    return (Adc_TrigModeType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the trigger mode of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param eTriggerMode the trigger mode if the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetTriggerMode(Adc_Type *const  pAdc,
                                                          Adc_TrigModeType eTriggerMode)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_TRIGMODE_MASK) | ADC_CFG1_TRIGMODE(eTriggerMode);
}

/**
 * @brief Get the overrun management mode
 *
 * @param pAdc the base address of the ADC instance
 * @return ADC_OVERRUN_MODE_PRESERVE the conversion data is preserved when ADC is overrun
 * @return ADC_OVERRUN_MODE_OVERWRITE the conversion data is overwritten when ADC is overrun
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_OvrModeType ADC_HWA_GetOverrunManagementMode(
    const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG1 & ADC_CFG1_OVRMOD_MASK) >> ADC_CFG1_OVRMOD_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The relative register bits can be safely converted to the enumeration type */
    return (Adc_OvrModeType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the overrun management mode
 *
 * @param pAdc the base address of the ADC instance
 * @param eOvrMode the overrun management for the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetOverrunManagementMode(Adc_Type *const pAdc,
                                                                    Adc_OvrModeType eOvrMode)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_OVRMOD_MASK) | ADC_CFG1_OVRMOD(eOvrMode);
}

#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
/**
 * @brief Get the sequence group mode state
 *
 * @param pAdc the base address of the ADC instance
 * @return the sequence group mode state
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetSeqGroupEnable(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG1 & ADC_CFG1_SEQGP_EN_MASK) >> ADC_CFG1_SEQ_LEN_SHIFT;
    return u32TmpVal ? TRUE : FALSE;
}

/**
 * @brief Set the sequence group mode state
 *
 * @param pAdc the base address of the ADC instance
 * @param bEnable the sequence group mode state
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetSeqGroupEnable(Adc_Type *const pAdc, boolean bEnable)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_SEQGP_EN_MASK) | ADC_CFG1_SEQGP_EN(bEnable);
}
#endif /* STD_ON == ADC_SEQUENCE_GROUP_SUPPORT */

/**
 * @brief Get whether the wait conversion mode is enabled
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE the wait conversion mode is enabled
 * @return FALSE the wait conversion mode is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetWaitConversionModeFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG1 & ADC_CFG1_WAIT_MASK) >> ADC_CFG1_WAIT_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the wait conversion mode
 *
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the wait conversion mode
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetWaitConversionModeFlag(Adc_Type *const pAdc,
                                                                     boolean         bEnable)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_WAIT_MASK) | ADC_CFG1_WAIT(bEnable);
}

/**
 * @brief Get the data align mode
 *
 * @param pAdc the base address of the ADC instance
 * @return ADC_ALIGN_RIGHT the conversion data is aligned right
 * @return ADC_ALIGN_LEFT the conversion is aligned left
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_AlignType ADC_HWA_GetDataAlignment(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG1 & ADC_CFG1_ALIGN_MASK) >> ADC_CFG1_ALIGN_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The relative register bits can be safely converted to the enumeration type */
    return (Adc_AlignType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the data align mode
 *
 * @param pAdc the base address of the ADC instance
 * @param eAlign the data align mode
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetDataAlignment(Adc_Type *const pAdc, Adc_AlignType eAlign)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_ALIGN_MASK) | ADC_CFG1_ALIGN(eAlign);
}

/**
 * @brief Get the ADC resolution of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return Adc_ResolutionType the resolution of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_ResolutionType ADC_HWA_GetDataResolution(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG1 & ADC_CFG1_RES_MASK) >> ADC_CFG1_RES_SHIFT;
    return (Adc_ResolutionType)u32TmpVal;
}

/**
 * @brief Set the resolution of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param eResolution the resolution of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetDataResolution(Adc_Type *const    pAdc,
                                                             Adc_ResolutionType eResolution)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_RES_MASK) | ADC_CFG1_RES(eResolution);
}

/**
 * @brief Get whether DMA for the ADC instance is enabled
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE DMA is enabled for the ADC instance
 * @return FALSE DMA is disabled for the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetDMAEnableFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG1 & ADC_CFG1_DMAEN_MASK) >> ADC_CFG1_DMAEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable or disable the DMA for the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the DMA for the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetDMAEnableFlag(Adc_Type *const pAdc, boolean bEnable)
{
    pAdc->CFG1 = (pAdc->CFG1 & ~ADC_CFG1_DMAEN_MASK) | ADC_CFG1_DMAEN(bEnable);
}

/**
 * @brief Get the ADC_CFG1 config
 *
 * @param pAdc the base address of the ADC instance
 * @return uint32 the ADC_CFG1 config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetConfig1(const Adc_Type *const pAdc)
{
    return pAdc->CFG1;
}

/**
 * @brief Set the ADC_CFG1 config
 *
 * @param pAdc the base address of the ADC instance
 * @param u32Config the ADC_CFG1 config
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetConfig1(Adc_Type *const pAdc, uint32 u32Config)
{
    pAdc->CFG1 = u32Config;
}

/**
 * @brief Get the FIFO water mark settings for the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return uint8 the ADC FIFO water mark setting
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 ADC_HWA_GetFIFOWaterMark(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_FWMARK_MASK) >> ADC_CFG2_FWMARK_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the FIFO water mark for the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param u8WaterMark the ADC FIFO water mark setting
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetFIFOWaterMark(Adc_Type *const pAdc, uint8 u8WaterMark)
{
    pAdc->CFG2 = (pAdc->CFG2 & ~ADC_CFG2_FWMARK_MASK) | ADC_CFG2_FWMARK(u8WaterMark);
}

/**
 * @brief Get whether hardware average is enabled
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE hardware average is enabled
 * @return FALSE hardware average is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetAverageEnableFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_AVG_EN_MASK) >> ADC_CFG2_AVG_EN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable or disable hardware average for the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable the ADC hardware average
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetAverageEnableFlag(Adc_Type *const pAdc, boolean bEnable)
{
    pAdc->CFG2 = (pAdc->CFG2 & ~ADC_CFG2_AVG_EN_MASK) | ADC_CFG2_AVG_EN(bEnable);
}

/**
 * @brief Get the hardware average number
 *
 * @param pAdc the base address of the ADC instance
 * @return Adc_AverageType the hardware average number
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_AverageType ADC_HWA_GetAverageNumber(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_AVG_LEN_MASK) >> ADC_CFG2_AVG_LEN_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The relative register bits can be safely converted to the enumeration type */
    return (Adc_AverageType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the hardware average number
 *
 * @param pAdc the base address of the ADC instance
 * @param eAverageNumber the hardware average number to set
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetAverageNumber(Adc_Type *const pAdc,
                                                            Adc_AverageType eAverageNumber)
{
    pAdc->CFG2 = (pAdc->CFG2 & ~ADC_CFG2_AVG_LEN_MASK) | ADC_CFG2_AVG_LEN(eAverageNumber);
}

/**
 * @brief Get the voltage reference of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @return ADC_REF_INTERNAL the ADC instance uses internal voltage reference
 * @return ADC_REF_EXTERNAL the ADC instance uses external voltage reference
 */
ADC_TEXT_SECTION LOCAL_INLINE Adc_RefType ADC_HWA_GetVoltageReference(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_REF_EXT_MASK) >> ADC_CFG2_REF_EXT_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The relative register bits can be safely converted to the enumeration type */
    return (Adc_RefType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the voltage reference of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param eRefSel the voltage reference of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetVoltageReference(Adc_Type *const pAdc,
                                                               Adc_RefType     eRefSel)
{
    pAdc->CFG2 = (pAdc->CFG2 & ~ADC_CFG2_REF_EXT_MASK) | ADC_CFG2_REF_EXT(eRefSel);
}

#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
/**
 * @brief Whether clock gating is acknowledged
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE ADC clock source is off after setting Clock Gating Enable Flag
 * @return FALSE ADC clock source is on after clearing Clock Gating Enable Flag
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetClockGatingAck(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_CG_ACK_MASK) >> ADC_CFG2_CG_ACK_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get whether clock gating is enabled
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE Clock gating is enabled, ADC clock is off
 * @return FALSE Clock gating is disabled, ADC clock is on
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetClockGatingEnableFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_CG_MASK) >> ADC_CFG2_CG_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable ADC clock gating
 *
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether to enable ADC clock gating
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetClockGatingEnableFlag(Adc_Type *const pAdc,
                                                                    boolean         bEnable)
{
    pAdc->CFG2 = (pAdc->CFG2 & ~ADC_CFG2_CG_MASK) | ADC_CFG2_CG(bEnable);
}

/**
 * @brief Get the ADC clock divider
 *
 * @param pAdc the base address of the ADC instance
 * @return uint8 the ADC clock divider
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 ADC_HWA_GetClockDivider(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_DIV_MASK) >> ADC_CFG2_DIV_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the ADC clock divider
 *
 * @note Before configuring DIV, must set CG and wait for CG_ACK=1.
 *       After configuring DIV, must clear CG and wait for CG_ACK=0.
 *
 * @param pAdc the base address of the ADC instance
 * @param u8Divider the ADC clock divider to set
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetClockDivider(Adc_Type *const pAdc, uint8 u8Divider)
{
    pAdc->CFG2 = (pAdc->CFG2 & ~ADC_CFG2_DIV_MASK) | ADC_CFG2_DIV(u8Divider);
}
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */

/**
 * @brief Get the ADC start up count
 *
 * @param pAdc the base address of the ADC instance
 * @return uint8 the start count of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 ADC_HWA_GetStartupCnt(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CFG2 & ADC_CFG2_STCNT_MASK) >> ADC_CFG2_STCNT_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the ADC start up count
 *
 * @param pAdc the base address of the ADC instance
 * @param u8StartupCnt the start count of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetStartupCnt(Adc_Type *const pAdc, uint8 u8StartupCnt)
{
    pAdc->CFG2 = (pAdc->CFG2 & ~ADC_CFG2_STCNT_MASK) | ADC_CFG2_STCNT(u8StartupCnt);
}

/**
 * @brief Get the ADC_CFG2 config
 *
 * @param pAdc the base address of the ADC instance
 * @return uint32 the ADC_CFG2 config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetConfig2(const Adc_Type *const pAdc)
{
    return pAdc->CFG2;
}

/**
 * @brief Set the ADC_CFG2 config
 *
 * @param pAdc the base address of the ADC instance
 * @param u32Config the ADC_CFG2 config
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetConfig2(Adc_Type *const pAdc, uint32 u32Config)
{
    pAdc->CFG2 = u32Config;
}

/**
 * @brief Set the ADC_SMPR config
 *
 * @param pAdc the base address of the ADC instance
 * @param u32Config the ADC_SMPR config
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetSampleTimeOpts(Adc_Type *const pAdc,
                                                             uint32          u32SampleTimes)
{
    pAdc->SMPR = u32SampleTimes;
}

/**
 * @brief Get the sample time of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param u8Selection the sample time index, range 0~3
 * @return uint8 the sample time of the selected index
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 ADC_HWA_GetSampleTime(const Adc_Type *const pAdc,
                                                          uint8                 u8Selection)
{
    uint32 ret;
    /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one operand of
     * an operator in which the usual arithmetic conversions are performed then the other operand
     * shall not have wider essential type.
     * Reason: It is safety to multiply the u8Selection here */
    ret = (pAdc->SMPR & (ADC_SMPR_SMP_OPT0_MASK << (8U * u8Selection))) >> (8U * u8Selection);
    /* PRQA S 1891 -- */
    return (uint8)ret;
}

/**
 * @brief Set the sample time of the ADC instance
 *
 * @param pAdc the base address of the ADC instance
 * @param u8Selection the sample time index, range 0~3
 * @param u8SampleTime the sample time of the selected index
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetSampleTime(Adc_Type *const pAdc,
                                                         uint8           u8Selection,
                                                         uint8           u8SampleTime)
{
    /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one operand of
     * an operator in which the usual arithmetic conversions are performed then the other operand
     * shall not have wider essential type.
     * Reason: It is safety to multiply the u8Selection here */
    pAdc->SMPR = (pAdc->SMPR & ~(ADC_SMPR_SMP_OPT0_MASK << (8U * u8Selection))) |
                 (ADC_SMPR_SMP_OPT0(u8SampleTime) << (8U * u8Selection));
    /* PRQA S 1891 -- */
}

/**
 * @brief Set the ADC hardware compare channel
 *
 * @param pAdc the base address of the ADC instance
 * @param eChannelType whether the hardware compare enabled on single channel or all channels
 * @param u8ChannalNum if hardware compare is enabled on single channel, this specifies the channel
 * number
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetHwCompareChannel(Adc_Type *const    pAdc,
                                                               Adc_CmpChannelType eChannelType,
                                                               uint8              u8ChannalNum)
{
    pAdc->CMP_CTRL = (pAdc->CMP_CTRL & (~ADC_CMP_CTRL_ACMPSGL_MASK) & (~ADC_CMP_CTRL_ACMPCH_MASK)) |
                     ADC_CMP_CTRL_ACMPSGL(eChannelType) | ADC_CMP_CTRL_ACMPCH(u8ChannalNum);
}

/**
 * @brief Get whether hardware compare is enabled
 *
 * @param pAdc the base address of the ADC instance
 * @return TRUE hardware compare is enabled
 * @return FALSE hardware compare is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetHwCompareEnableFlag(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = (pAdc->CMP_CTRL & ADC_CMP_CTRL_ACMPEN_MASK) >> ADC_CMP_CTRL_ACMPEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set to enable or disable the hardware compare
 *
 * @param pAdc the base address of the ADC instance
 * @param bEnable whether the ADC hardware compare is enabled
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetHwCompareEnableFlag(Adc_Type *const pAdc,
                                                                  boolean         bEnable)
{
    pAdc->CMP_CTRL = (pAdc->CMP_CTRL & ~ADC_CMP_CTRL_ACMPEN_MASK) | ADC_CMP_CTRL_ACMPEN(bEnable);
}

/**
 * @brief Set the ADC hardware compare threshold
 *
 * @param pAdc the base address of the ADC instance
 * @param u16LowThres the lower threshold
 * @param u16HighThres the higher threshold
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetHwCompareThreshold(Adc_Type *const pAdc,
                                                                 uint16          u16LowThres,
                                                                 uint16          u16HighThres)
{
    pAdc->CMP_TR = ADC_CMP_TR_LT(u16LowThres) | ADC_CMP_TR_HT(u16HighThres);
}

#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
/**
 * @brief Set the ADC Sequence Group configurations
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param u32Config the config value to set
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ConfigureSeqGroup(Adc_Type *const pAdc,
                                                             const uint8     u8SeqGroupIndex,
                                                             const uint32    u32Config)
{
    pAdc->SGCSR[u8SeqGroupIndex] = u32Config;
}

/**
 * @brief Get the end of sequence group flag
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param boolean the sequence group interrupt flag
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetEndOfSeqGroupInterruptFlag(
    const Adc_Type *const pAdc,
    const uint8           u8SeqGroupIndex)
{
    uint32 u32TmpVal = (pAdc->SGCSR[u8SeqGroupIndex] & ADC_SGCSR_EOSG_MASK) >> ADC_SGCSR_EOSG_SHIFT;
    return u32TmpVal ? TRUE : FALSE;
}

/**
 * @brief Clear the end of sequence group flag
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_ClearEndOfSeqGroupInterruptFlag(Adc_Type *const pAdc,
                                                                           const uint8 u8SeqGroupIndex)
{
    uint32 u32TmpVal             = pAdc->SGCSR[u8SeqGroupIndex];
    pAdc->SGCSR[u8SeqGroupIndex] = (u32TmpVal & ~ADC_SGCSR_EOSG_MASK) | ADC_SGCSR_EOSG(1U);
}

/**
 * @brief Set the sequence group end of sequence interrupt enable
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param bEnable the sequence group interrupt enable or disable
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetEndOfSeqGroupInterruptEnable(Adc_Type *const pAdc,
                                                                           const uint8 u8SeqGroupIndex,
                                                                           const boolean bEnable)
{
    uint32 u32TmpVal             = pAdc->SGCSR[u8SeqGroupIndex];
    pAdc->SGCSR[u8SeqGroupIndex] = (u32TmpVal & ~ADC_SGCSR_EOSGIE_MASK) | ADC_SGCSR_EOSGIE(bEnable);
}

/**
 * @brief Get the sequence group start point
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetSeqGroupStartPoint(const Adc_Type *const pAdc,
                                                                   const uint8 u8SeqGroupIndex)
{
    return (pAdc->SGCSR[u8SeqGroupIndex] & ~ADC_SGCSR_SG_START_MASK) >> ADC_SGCSR_SG_START_SHIFT;
}

/**
 * @brief Get the sequence group end point
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetSeqGroupEndPoint(const Adc_Type *const pAdc,
                                                                 const uint8 u8SeqGroupIndex)
{
    return (pAdc->SGCSR[u8SeqGroupIndex] & ~ADC_SGCSR_SG_END_MASK) >> ADC_SGCSR_SG_END_SHIFT;
}

/**
 * @brief Set the sequence group start point & end point
 *
 * @param pAdc the base address of the ADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param u8Start the sequence group start point
 * @param u8End the sequence group end point
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetSeqGroupStartEndPoint(Adc_Type *const pAdc,
                                                                    const uint8     u8SeqGroupIndex,
                                                                    const uint8     u8Start,
                                                                    const uint8     u8End)
{
    uint32 u32TmpVal = pAdc->SGCSR[u8SeqGroupIndex];
    u32TmpVal        = (u32TmpVal & ~ADC_SGCSR_SG_END_MASK) | ADC_SGCSR_SG_END(u8End);
    u32TmpVal        = (u32TmpVal & ~ADC_SGCSR_SG_START_MASK) | ADC_SGCSR_SG_START(u8Start);
    pAdc->SGCSR[u8SeqGroupIndex] = u32TmpVal;
}
#endif /* STD_ON == ADC_SEQUENCE_GROUP_SUPPORT */

#if (STD_ON == ADC_CFG3_SUPPORT)
/**
 * @brief Set the COCO Output Channel
 *
 * @param pAdc the base address of the ADC instance
 * @param u8Sel the seleted COCO channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetCOCOSel(Adc_Type *const pAdc, uint8 u8Sel)
{
    uint32 u32TmpVal = pAdc->CFG3;
    pAdc->CFG3       = (u32TmpVal & ~ADC_CFG3_COCO_OSEL_MASK) | ADC_CFG3_COCO_OSEL(u8Sel);
}

/**
 * @brief Get the ADC_CFG3 config
 *
 * @param pAdc the base address of the ADC instance
 * @return uint32 the ADC_CFG1 config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetConfig3(const Adc_Type *const pAdc)
{
    return pAdc->CFG3;
}

/**
 * @brief Set the ADC_CFG3 config
 *
 * @param pAdc the base address of the ADC instance
 * @param u32Config the ADC_CFG3 config
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetConfig3(Adc_Type *const pAdc, uint32 u32Config)
{
    pAdc->CFG3 = u32Config;
}
#endif /* STD_ON == ADC_CFG3_SUPPORT */

/**
 * @brief Get the conversion result FIFO data of the ADC instance
 *
 * @note only reslut data of ADC single mode and continuous mode will be stored
 * in FIFO register.
 *
 * @param pAdc the base address of the ADC instance
 * @return uint32 the ADC conversion result
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetFIFOData(const Adc_Type *const pAdc)
{
    uint32 u32TmpVal = pAdc->FIFO_DATA;
    u32TmpVal        = (u32TmpVal & ADC_FIFO_DATA_FIFO_DATA_MASK) >> ADC_FIFO_DATA_FIFO_DATA_SHIFT;
    return (uint32)u32TmpVal;
}

/**
 * @brief Set the ADC channel config
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @param u32ChnCfg the channel config
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetChannelConfig(Adc_Type *const pAdc,
                                                            const uint8     u8ChnIdx,
                                                            uint32          u32ChnCfg)
{
    pAdc->SC[u8ChnIdx] = u32ChnCfg;
}

/**
 * @brief Get the sample time index of the ADC channel
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @return uint8 the sample time index of the ADC channel
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 ADC_HWA_GetChannelSampleTimeIndex(const Adc_Type *const pAdc,
                                                                      const uint8 u8ChnIdx)
{
    uint32 u32TmpVal = (pAdc->SC[u8ChnIdx] & ADC_SC_SMPSEL_MASK) >> ADC_SC_SMPSEL_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the sample time index of the ADC channel
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @param u8SmpSel the sample time index of the ADC channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetChannelSampleTimeIndex(Adc_Type *const pAdc,
                                                                     const uint8     u8ChnIdx,
                                                                     uint8           u8SmpSel)
{
    pAdc->SC[u8ChnIdx] = (pAdc->SC[u8ChnIdx] & ~ADC_SC_SMPSEL_MASK) | ADC_SC_SMPSEL(u8SmpSel);
}

/**
 * @brief Get the channel conversion complete status of the ADC instance
 *
 * @note this function is used only in ADC discontinuous mode to get the channel complete
 * status
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @return TRUE the ADC conversion on the selected channel is completed
 * @return FALSE the ADC conversion on the selected channel is not completed
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetChannelConvertComplete(const Adc_Type *const pAdc,
                                                                        const uint8 u8ChnIdx)
{
    uint32 u32TmpVal = pAdc->SC[u8ChnIdx];
    u32TmpVal        = (u32TmpVal & ADC_SC_COCO_MASK) >> ADC_SC_COCO_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Check whether interrupt is enabled on the selected ADC channel
 *
 * @note this function is used only in ADC discontinuous mode to get the channel interrupt
 * settings
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @return TRUE interrupt is enabled on the selected channel
 * @return FALSE interrupt is disabled on the selected channel
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean ADC_HWA_GetChannelInterruptEnable(const Adc_Type *const pAdc,
                                                                        const uint8 u8ChnIdx)
{
    uint32 u32TmpVal = pAdc->SC[u8ChnIdx];
    u32TmpVal        = (u32TmpVal & ADC_SC_AIEN_MASK) >> ADC_SC_AIEN_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set to enable or disable interrupt on the selected ADC channel
 *
 * @note this function is used only in ADC discontinuous mode to get the channel interrupt
 * settings
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @param bEnable whether to enable interrupt on the selected ADC channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetChannelInterruptEnable(Adc_Type *const pAdc,
                                                                     const uint8     u8ChnIdx,
                                                                     boolean         bEnable)
{
    pAdc->SC[u8ChnIdx] = (pAdc->SC[u8ChnIdx] & ~ADC_SC_AIEN_MASK) | ADC_SC_AIEN(bEnable);
}

/**
 * @brief Get the input channel of the selected ADC channel
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @return uint8 the hardware input channel
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 ADC_HWA_GetChannelInput(const Adc_Type *const pAdc,
                                                            const uint8           u8ChnIdx)
{
    uint32 u32TmpVal = (pAdc->SC[u8ChnIdx] & ADC_SC_CHS_MASK) >> ADC_SC_CHS_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the input channel to the selected ADC channel
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the channel
 * @param u8InputChann the hardware input channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetChannelInput(Adc_Type *const pAdc,
                                                           const uint8     u8ChnIdx,
                                                           uint8           u8InputChann)
{
    pAdc->SC[u8ChnIdx] = (pAdc->SC[u8ChnIdx] & ~ADC_SC_CHS_MASK) | ADC_SC_CHS(u8InputChann);
}

/**
 * @brief Get the conversion result data of the ADC instance
 *
 * @note only result data of ADC discontinuous mode will be stored in RESULTn register.
 *
 * @param pAdc the base address of the ADC instance
 * @param u8ChnIdx the index of the ADC channel
 * @return uint32 the ADC conversion result
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 ADC_HWA_GetChannelData(const Adc_Type *const pAdc,
                                                            const uint8           u8ChnIdx)
{
    uint32 u32TmpVal = pAdc->RESULT[u8ChnIdx];
    u32TmpVal        = (u32TmpVal & ADC_RESULT_RESULT_MASK) >> ADC_RESULT_RESULT_SHIFT;

    return (uint32)u32TmpVal;
}

/**
 * @brief Set the pretrigger source of the ADC instance
 *
 * @note The pretrigger is used in ADC discontinuous 1 mode and sequence group mode
 *
 * @param pAdc the base address of the ADC instance
 * @param ePretriggerSel the pretrigger source of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetPretriggerSelect(Adc_Type *const       pAdc,
                                                               Adc_PreTriggerSelType ePretriggerSel)
{
#if (ADC_MAX_HW_UNITS > 5U)
    if ((uint32)pAdc == ADC5_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING1 = (SCM->ADC_ROUTING1 & ~SCM_ADC_ROUTING1_ADC5_PRETRGSEL_MASK) |
                            SCM_ADC_ROUTING1_ADC5_PRETRGSEL(ePretriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 5U */
#if (ADC_MAX_HW_UNITS > 4U)
        if ((uint32)pAdc == ADC4_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING1 = (SCM->ADC_ROUTING1 & ~SCM_ADC_ROUTING1_ADC4_PRETRGSEL_MASK) |
                            SCM_ADC_ROUTING1_ADC4_PRETRGSEL(ePretriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 4U */
#if (ADC_MAX_HW_UNITS > 3U)
        if ((uint32)pAdc == ADC3_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC3_PRETRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC3_PRETRGSEL(ePretriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 3U */
#if (ADC_MAX_HW_UNITS > 2U)
        if ((uint32)pAdc == ADC2_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC2_PRETRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC2_PRETRGSEL(ePretriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 2U */
#if (ADC_MAX_HW_UNITS > 1U)
        if ((uint32)pAdc == ADC1_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC1_PRETRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC1_PRETRGSEL(ePretriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 1U */
#if (ADC_MAX_HW_UNITS > 0U)
        if ((uint32)pAdc == ADC0_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC0_PRETRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC0_PRETRGSEL(ePretriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 0U */
    {
        /* Nothing for Misra */
    }
}

/**
 * @brief Set the trigger source of the ADC instance
 *
 * @note this trigger source setting is only used in ADC discontinuous 1 mode
 *
 * @param pAdc the base address of the ADC instance
 * @param eTriggerSel the trigger source of the ADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_SetTriggerSelect(Adc_Type *const    pAdc,
                                                            Adc_TriggerSelType eTriggerSel)
{
#if (ADC_MAX_HW_UNITS > 5U)
    if ((uint32)pAdc == ADC5_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING1 = (SCM->ADC_ROUTING1 & ~SCM_ADC_ROUTING1_ADC5_TRGSEL_MASK) |
                            SCM_ADC_ROUTING1_ADC5_TRGSEL(eTriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 5U */
#if (ADC_MAX_HW_UNITS > 4U)
        if ((uint32)pAdc == ADC4_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING1 = (SCM->ADC_ROUTING1 & ~SCM_ADC_ROUTING1_ADC4_TRGSEL_MASK) |
                            SCM_ADC_ROUTING1_ADC4_TRGSEL(eTriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 4U */
#if (ADC_MAX_HW_UNITS > 3U)
        if ((uint32)pAdc == ADC3_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC3_TRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC3_TRGSEL(eTriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 3U */
#if (ADC_MAX_HW_UNITS > 2U)
        if ((uint32)pAdc == ADC2_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC2_TRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC2_TRGSEL(eTriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 2U */
#if (ADC_MAX_HW_UNITS > 1U)
        if ((uint32)pAdc == ADC1_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC1_TRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC1_TRGSEL(eTriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 1U */
#if (ADC_MAX_HW_UNITS > 0U)
        if ((uint32)pAdc == ADC0_BASE)
    {
#if (STD_ON == ADC_SEQUENCE_GROUP_SUPPORT)
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_ADC0_TRGSEL_MASK) |
                           SCM_ADC_ROUTING_ADC0_TRGSEL(eTriggerSel);
#endif
    }
    else
#endif /* ADC_MAX_HW_UNITS > 0U */
    {
        /* Nothing for Misra */
    }
}

/**
 * @brief Generate software trigger for ADC hardware channel
 *
 * This function generates a software trigger for the specified ADC channel by
 * setting the SW_TRIG bit in the SCM_SOCMISC register. This is used to initiate
 * ADC conversion processes.
 *
 * @note This function shall be called in critical sections / spinlocks
 *
 * @param pAdc Pointer to the ADC module configuration structure
 * @param u8Channel The software channel to use
 *
 * @return void
 */
ADC_TEXT_SECTION LOCAL_INLINE void ADC_HWA_GenerateSwTrigger(Adc_Type *const pAdc, uint8 u8Channel)
{
    /* Clear the existing software trigger bits and set the trigger for the specified channel */
    SCM->SOCMISC = (SCM->SOCMISC & ~SCM_SOCMISC_SW_TRIG_MASK) | SCM_SOCMISC_SW_TRIG(1U << u8Channel);
    SCM->SOCMISC = (SCM->SOCMISC & ~SCM_SOCMISC_SW_TRIG_MASK);
    (void)pAdc;
}

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_SARADC_REGOPS_H */

/** @} */
