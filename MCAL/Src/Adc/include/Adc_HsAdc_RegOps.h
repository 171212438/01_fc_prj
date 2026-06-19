/**
 *   @file    Adc_HsAdc_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - low level driver header file.
 *   @details ADC low level driver API.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : HSADC
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
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/
#ifndef ADC_HSADC_REGOPS_H
#define ADC_HSADC_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_CfgDefines.h"
#include "Adc_HsAdc_Reg.h"
#include "Adc_HsAdc_Types.h"
#include "Common_Cfg.h"
#include "Mcal.h"
#include "Scm_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

/**
 * @brief Check whether the data quantity in the FIFO is greater than watermark
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC FIFO is ready
 * @return FALSE the HSADC FIFO is unready
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetFIFOReadyFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal = (u32TmpVal & HSADC_INT_STATUS_FIFO_RDY_MASK) >> HSADC_INT_STATUS_FIFO_RDY_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the FIFO ready flag
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearFIFOReadyFlag(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_FIFO_RDY(1U);
}

/**
 * @brief Check whether the conversion result is in the comparing range
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the conversion result is in the comparing range
 * @return FALSE the conversion result is not in the comparing range
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetCmpFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_ACMP_MASK) >> HSADC_INT_STATUS_ACMP_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the compare flag
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearCmpFlag(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_ACMP(1U);
}

/**
 * @brief Check whether the HSADC FIFO is empty
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC FIFO is empty
 * @return FALSE the HSADC FIFO is not empty
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetFIFOEmptyFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_EMPTY_MASK) >> HSADC_INT_STATUS_EMPTY_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Check whether the HSADC FIFO is full
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC FIFO is full
 * @return FALSE the HSADC FIFO is not full
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetFIFOFullFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_FULL_MASK) >> HSADC_INT_STATUS_FULL_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get the overrrun status of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC is in overrun status
 * @return FALSE the HSADC is not overrun
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetOverrunFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_OVR_MASK) >> HSADC_INT_STATUS_OVR_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the overrun flag of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearOverrunFlag(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_OVR(1U);
}

/**
 * @brief Check whether the HSADC conversion sequence is finished
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC conversion sequence is finished
 * @return FALSE the HSADC conversion sequence is unfinished
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfSequenceFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_EOSEQ_MASK) >> HSADC_INT_STATUS_EOSEQ_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the HSADC conversion sequence complete flag
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearEndOfSequenceFlag(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_EOSEQ(1U);
}

/**
 * @brief Check whether the current HSADC conversion is finished
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the current HSADC conversion is finished
 * @return FALSE the current HSADC conversion is unfinished
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfConversionFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_EOC_MASK) >> HSADC_INT_STATUS_EOC_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the HSADC single conversion complete flag
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearEndOfConversionFlag(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_EOC(1U);
}

/**
 * @brief Check whether the sampling phase of the current HSADC conversion is finished
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the sampling phase of the HSADC conversion is finished
 * @return FALSE the sampling phase of the HSADC conversion is unfinished
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfSampleFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_EOSMP_MASK) >> HSADC_INT_STATUS_EOSMP_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the HSADC sampling complete flag
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearEndOfSampleFlag(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_EOSMP(1U);
}

/**
 * @brief Check whether the HSADC instance is ready to operate
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC instance is ready for a new conversion
 * @return FALSE the HSADC instance is unready
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetHSADCReadyFlag(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->INT_STATUS;
    u32TmpVal        = (u32TmpVal & HSADC_INT_STATUS_ADRDY_MASK) >> HSADC_INT_STATUS_ADRDY_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the ready flag of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearHSADCReadyFlag(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_ADRDY(1U);
}

/**
 * @brief Clear the all interrupt flags
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearAllIntFlags(HsAdc_Type *const pHsAdc)
{
    pHsAdc->INT_STATUS = HSADC_INT_STATUS_TRGERR_MASK | HSADC_INT_STATUS_FCR_F_MASK |
                         HSADC_INT_STATUS_FCR_R_MASK | HSADC_INT_STATUS_RPCNT_RDY_MASK |
                         HSADC_INT_STATUS_ACMP_MASK | HSADC_INT_STATUS_OVR_MASK |
                         HSADC_INT_STATUS_EOSEQ_MASK | HSADC_INT_STATUS_EOC_MASK |
                         HSADC_INT_STATUS_EOSMP_MASK | HSADC_INT_STATUS_ADRDY_MASK;
}

/**
 * @brief Get the FIFO Ready interrupt flag
 * If enabled, HSADC interrupt is generated when the FIFO water mark is greater than FWMARK
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE HSADC FIFO Ready interrupt is enabled
 * @return FALSE HSADC FIFO Ready interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetFIFOReadyIntEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->INT_ENABLE & HSADC_INT_ENABLE_FIFO_RDY_IE_MASK) >>
                       HSADC_INT_ENABLE_FIFO_RDY_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the FIFO Ready interrupt flag
 * If enabled, HSADC interrupt is generated when the FIFO water mark is greater than FWMARK
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the HSADC FIFO Ready interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFIFOReadyIntEnable(HsAdc_Type *const pHsAdc,
                                                                   boolean           bEnable)
{
    pHsAdc->INT_ENABLE = (pHsAdc->INT_ENABLE & ~HSADC_INT_ENABLE_FIFO_RDY_IE_MASK) |
                         HSADC_INT_ENABLE_FIFO_RDY_IE(bEnable);
}

/**
 * @brief Get the Compare interrupt flag
 * If enabled, HSADC interrupt is generated when the HSADC conversion result is not within the
 * compare threshold
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE HSADC Compare interrupt is enabled
 * @return FALSE HSADC Compare interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetCmpIntEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->INT_ENABLE & HSADC_INT_ENABLE_ACMP_IE_MASK) >>
                       HSADC_INT_ENABLE_ACMP_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Compare interrupt flag
 * If enabled, HSADC interrupt is generated when the HSADC conversion result is not within the
 * compare threshold
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the HSADC Compare interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetCmpIntEnable(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->INT_ENABLE = (pHsAdc->INT_ENABLE & ~HSADC_INT_ENABLE_ACMP_IE_MASK) |
                         HSADC_INT_ENABLE_ACMP_IE(bEnable);
}

/**
 * @brief Get the Overrun interrupt flag
 * If enabled, HSADC interrupt is generated when the HSADC instance is overrun
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE HSADC Overrun interrupt is enabled
 * @return FALSE HSADC Overrun interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetOverrunIntEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->INT_ENABLE & HSADC_INT_ENABLE_OVRIE_MASK) >>
                       HSADC_INT_ENABLE_OVRIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Overrun interrupt flag
 * If enabled, HSADC interrupt is generated when the HSADC instance is overrun
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the HSADC Overrun interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetOverrunIntEnable(HsAdc_Type *const pHsAdc,
                                                                 boolean           bEnable)
{
    pHsAdc->INT_ENABLE = (pHsAdc->INT_ENABLE & ~HSADC_INT_ENABLE_OVRIE_MASK) |
                         HSADC_INT_ENABLE_OVRIE(bEnable);
}

/**
 * @brief Get the End of Sequence interrupt enable flag
 * If enabled, HSADC interrupt is generated when the HSADC sequence conversion is completed
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE HSADC End of Sequence interrupt is enabled
 * @return FALSE HSADC End of Sequence interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfSequenceIntEnable(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->INT_ENABLE & HSADC_INT_ENABLE_EOSEQIE_MASK) >>
                       HSADC_INT_ENABLE_EOSEQIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the End of Sequence interrupt enable flag
 * If enabled, HSADC interrupt is generated when the HSADC sequence conversion is completed
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the HSADC End of Sequence interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetEndOfSequenceIntEnable(HsAdc_Type *const pHsAdc,
                                                                       boolean           bEnable)
{
    pHsAdc->INT_ENABLE = (pHsAdc->INT_ENABLE & ~HSADC_INT_ENABLE_EOSEQIE_MASK) |
                         HSADC_INT_ENABLE_EOSEQIE(bEnable);
}

/**
 * @brief Get the conversion complete interrupt enable flag
 * If enabled, HSADC interrupt is generated when each HSADC conversion is completed
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC End of Conversion interrupt is enabled
 * @return FALSE the HSADC End of Conversion interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfConversionIntEnable(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->INT_ENABLE & HSADC_INT_ENABLE_EOCIE_MASK) >>
                       HSADC_INT_ENABLE_EOCIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the conversion complete interrupt enable flag
 * If enabled, HSADC interrupt is generated when each HSADC conversion is completed
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the conversion complete interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetEndOfConversionIntEnable(HsAdc_Type *const pHsAdc,
                                                                         boolean           bEnable)
{
    pHsAdc->INT_ENABLE = (pHsAdc->INT_ENABLE & ~HSADC_INT_ENABLE_EOCIE_MASK) |
                         HSADC_INT_ENABLE_EOCIE(bEnable);
}

/**
 * @brief Get the sample complete interrupt enable flag
 * If enabled, HSADC interrupt is generated when each HSADC conversion finished the sampling phase
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the sample complete interrupt is enabled
 * @return FALSE the sample complete interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfSampleIntEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->INT_ENABLE & HSADC_INT_ENABLE_EOSMPIE_MASK) >>
                       HSADC_INT_ENABLE_EOSMPIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the sample complete interrupt enable flag
 * If enabled, HSADC interrupt is generated when each HSADC conversion finished the sampling phase
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the sample complete interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetEndOfSampleIntEnable(HsAdc_Type *const pHsAdc,
                                                                     boolean           bEnable)
{
    pHsAdc->INT_ENABLE = (pHsAdc->INT_ENABLE & ~HSADC_INT_ENABLE_EOSMPIE_MASK) |
                         HSADC_INT_ENABLE_EOSMPIE(bEnable);
}

/**
 * @brief Get the HSADC ready interrupt enable flag
 * If enabled, HSADC interrupt is generated when the HSADC module is ready for conversion
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC ready interrupt is enabled
 * @return FALSE the HSADC ready interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetHSADCReadyIntEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->INT_ENABLE & HSADC_INT_ENABLE_ADRDYIE_MASK) >>
                       HSADC_INT_ENABLE_ADRDYIE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the HSADC ready interrupt enable flag
 * If enabled, HSADC interrupt is generated when the HSADC module is ready for conversion
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable Whether to enable the HSADC ready interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetHSADCReadyIntEnable(HsAdc_Type *const pHsAdc,
                                                                    boolean           bEnable)
{
    pHsAdc->INT_ENABLE = (pHsAdc->INT_ENABLE & ~HSADC_INT_ENABLE_ADRDYIE_MASK) |
                         HSADC_INT_ENABLE_ADRDYIE(bEnable);
}

/**
 * @brief Get the interrupt enable config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint32 the interrupt enable config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 HSADC_HWA_GetIntEnable(const HsAdc_Type *const pHsAdc)
{
    return pHsAdc->INT_ENABLE;
}

/**
 * @brief Set the interrupt enable
 *
 * @param u32IntCfg the interrupt enable config
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetInterruptEnable(HsAdc_Type *const pHsAdc,
                                                                uint32            u32IntCfg)
{
    pHsAdc->INT_ENABLE = u32IntCfg;
}

#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
/**
 * @brief Select HSADC function clock
 * @note This function will also reset the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFClkSel(HsAdc_Type *const             pHsAdc,
                                                        const HsAdc_FunctionClockType Type)
{
    uint32 u32TmpVal = pHsAdc->CTRL & HSADC_CTRL_FCLK_SEL_MASK;
    pHsAdc->CTRL     = u32TmpVal | HSADC_CTRL_ADRST_MASK;
    pHsAdc->CTRL     = HSADC_CTRL_ADRST_MASK | HSADC_CTRL_FCLK_SEL(Type);
    pHsAdc->CTRL     = HSADC_CTRL_FCLK_SEL(Type);
}
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */

/**
 * @brief Assert the HSADC hardware Reset bit
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_Reset(HsAdc_Type *const pHsAdc)
{
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
    uint32 u32TmpVal = pHsAdc->CTRL & HSADC_CTRL_FCLK_SEL_MASK;
    pHsAdc->CTRL     = u32TmpVal | HSADC_CTRL_ADRST_MASK;
    pHsAdc->CTRL     = u32TmpVal;
#else
    pHsAdc->CTRL = HSADC_CTRL_ADRST_MASK;
    pHsAdc->CTRL = 0U;
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
}

/**
 * @brief Get whether HSADC is in stopping status
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC instance is stopping
 * @return FALSE the HSADC instance is not in stopping status
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetStop(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CTRL;
    u32TmpVal        = (u32TmpVal & HSADC_CTRL_ADSTP_MASK) >> HSADC_CTRL_ADSTP_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Stop the HSADC conversion
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_Stop(HsAdc_Type *const pHsAdc)
{
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
    uint32 u32TmpVal = pHsAdc->CTRL & HSADC_CTRL_FCLK_SEL_MASK;
    pHsAdc->CTRL     = u32TmpVal | HSADC_CTRL_ADSTP(1U);
#else
    pHsAdc->CTRL = HSADC_CTRL_ADSTP(1U);
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
}

/**
 * @brief Get the conversion start status of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the conversion of the HSADC instance is started
 * @return FALSE the conversion of the HSADC instance has not been started
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetStart(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CTRL;
    u32TmpVal        = (u32TmpVal & HSADC_CTRL_ADSTART_MASK) >> HSADC_CTRL_ADSTART_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Start the HSADC conversion
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_Start(HsAdc_Type *const pHsAdc)
{
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
    uint32 u32TmpVal = pHsAdc->CTRL & HSADC_CTRL_FCLK_SEL_MASK;
    pHsAdc->CTRL     = (u32TmpVal | HSADC_CTRL_ADSTART(1U));
#else
    pHsAdc->CTRL = HSADC_CTRL_ADSTART(1U);
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
}

/**
 * @brief Get whether the HSADC instance is in disable status
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC instance is in disable status
 * @return FALSE the HSADC instance is not in disable status
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetDisable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CTRL;
    u32TmpVal        = (u32TmpVal & HSADC_CTRL_ADDIS_MASK) >> HSADC_CTRL_ADDIS_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Disable the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_Disable(HsAdc_Type *const pHsAdc)
{
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
    uint32 u32TmpVal = pHsAdc->CTRL & HSADC_CTRL_FCLK_SEL_MASK;
    pHsAdc->CTRL     = u32TmpVal | HSADC_CTRL_ADDIS(1U);
#else
    pHsAdc->CTRL = HSADC_CTRL_ADDIS(1U);
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
}

/**
 * @brief Get the enable status of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the HSADC instance is enabled
 * @return FALSE the HSADC instance has not been enabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CTRL;
    u32TmpVal        = (u32TmpVal & HSADC_CTRL_ADEN_MASK) >> HSADC_CTRL_ADEN_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_Enable(HsAdc_Type *const pHsAdc)
{
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
    uint32 u32TmpVal = pHsAdc->CTRL & HSADC_CTRL_FCLK_SEL_MASK;
    pHsAdc->CTRL     = u32TmpVal | HSADC_CTRL_ADEN(1U);
#else
    pHsAdc->CTRL = HSADC_CTRL_ADEN(1U);
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
}

/**
 * @brief Get the overrun mode
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HSADC_OVERRUN_MODE_PRESERVE the conversion data is preserved when HSADC is overrun
 * @return HSADC_OVERRUN_MODE_OVERWRITE the conversion data is overwritten when HSADC is overrun
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_OvrModeType HSADC_HWA_GetOverrunMode(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG1 & HSADC_CFG1_OVRMOD_MASK) >> HSADC_CFG1_OVRMOD_SHIFT;
    return (HsAdc_OvrModeType)u32TmpVal;
}

/**
 * @brief Set the overrun mode
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eOvrMode the overrun mode for the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetOverrunMode(HsAdc_Type *const pHsAdc,
                                                            HsAdc_OvrModeType eOvrMode)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_OVRMOD_MASK) | HSADC_CFG1_OVRMOD(eOvrMode);
}

/**
 * @brief Get the sequence group mode state
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return the sequence group mode state
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetSGEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG1 & HSADC_CFG1_SEQGP_EN_MASK) >> HSADC_CFG1_SEQ_LEN_SHIFT;
    return u32TmpVal ? TRUE : FALSE;
}

/**
 * @brief Set the sequence group mode state
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param the sequence group mode state
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSGEnable(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_SEQGP_EN_MASK) | HSADC_CFG1_SEQGP_EN(bEnable);
}

/**
 * @brief Get the sequence length of the HSADC conversion sequence
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint8 the sequence length of the HSADC conversion sequence
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetSequenceLength(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CFG1;
    u32TmpVal        = (u32TmpVal & HSADC_CFG1_SEQ_LEN_MASK) >> HSADC_CFG1_SEQ_LEN_SHIFT;

    return (uint8)u32TmpVal;
}

/**
 * @brief Set the sequence length of the HSADC conversion sequence
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SequenceLength the sequence length of the HSADC conversion sequence
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSequenceLength(HsAdc_Type *const pHsAdc,
                                                               uint8             u8SequenceLength)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_SEQ_LEN_MASK) | HSADC_CFG1_SEQ_LEN(u8SequenceLength);
}

/**
 * @brief Get the HSADC sequence mode
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HsAdc_SeqModeType the sequence mode the the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_SeqModeType HSADC_HWA_GetSequenceMode(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CFG1;
    u32TmpVal        = (u32TmpVal & HSADC_CFG1_SEQ_MOD_MASK) >> HSADC_CFG1_SEQ_MOD_SHIFT;

    return (HsAdc_SeqModeType)u32TmpVal;
}

/**
 * @brief Set the HSADC sequence mode
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eSequenceMode the sequence mode the the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSequenceMode(HsAdc_Type *const pHsAdc,
                                                             HsAdc_SeqModeType eSequenceMode)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_SEQ_MOD_MASK) | HSADC_CFG1_SEQ_MOD(eSequenceMode);
}

/**
 * @brief Get whether auto disable is enabled
 *
 * @note Auto disable mode is only available in FC7300F2M
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE  auto disable mode is enabled
 * @return FALSE auto disable mode is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetAutoDisableModeEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CFG1;
    u32TmpVal        = (u32TmpVal & HSADC_CFG1_AUTO_DIS_MASK) >> HSADC_CFG1_AUTO_DIS_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable auto disable mode
 *
 * @note Auto disable mode is only available in FC7300F2M
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable auto disable mode
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetAutoDisableModeEnable(HsAdc_Type *const pHsAdc,
                                                                      boolean           bEnable)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_AUTO_DIS_MASK) | HSADC_CFG1_AUTO_DIS(bEnable);
}

/**
 * @brief Get whether the wait conversion mode is enabled
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE the wait conversion mode is enabled
 * @return FALSE the wait conversion mode is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetWaitConversionModeEnable(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG1 & HSADC_CFG1_WAIT_MASK) >> HSADC_CFG1_WAIT_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the wait conversion mode
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the wait conversion mode
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetWaitConversionModeEnable(HsAdc_Type *const pHsAdc,
                                                                         boolean           bEnable)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_WAIT_MASK) | HSADC_CFG1_WAIT(bEnable);
}

/**
 * @brief Get the trigger source the the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HsAdc_TrigSrcType the trigger source of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_TrgSrcType HSADC_HWA_GetTriggerSource(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CFG1;
    u32TmpVal        = (u32TmpVal & HSADC_CFG1_TRIGSRC_MASK) >> HSADC_CFG1_TRIGSRC_SHIFT;

    return (HsAdc_TrgSrcType)u32TmpVal;
}

/**
 * @brief Set the trigger source the the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eTriggerSource the trigger source of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetTriggerSource(HsAdc_Type *const pHsAdc,
                                                              HsAdc_TrgSrcType  eTrgSource)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_TRIGSRC_MASK) | HSADC_CFG1_TRIGSRC(eTrgSource);
}

/**
 * @brief Get the trigger mode of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HsAdc_TrigModeType the trigger mode if the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_TrgModeType HSADC_HWA_GetTriggerMode(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CFG1;
    u32TmpVal        = (u32TmpVal & HSADC_CFG1_TRIGMODE_MASK) >> HSADC_CFG1_TRIGMODE_SHIFT;

    return (HsAdc_TrgModeType)u32TmpVal;
}

/**
 * @brief Set the trigger mode of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eTriggerMode the trigger mode if the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetTriggerMode(HsAdc_Type *const pHsAdc,
                                                            HsAdc_TrgModeType eTrgMode)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_TRIGMODE_MASK) | HSADC_CFG1_TRIGMODE(eTrgMode);
}

/**
 * @brief Get the data align mode
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HSADC_ALIGN_RIGHT the conversion data is aligned right
 * @return HSADC_ALIGN_LEFT the conversion is aligned left
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_AlignType HSADC_HWA_GetDataAlignment(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG1 & HSADC_CFG1_ALIGN_MASK) >> HSADC_CFG1_ALIGN_SHIFT;
    return (HsAdc_AlignType)u32TmpVal;
}

/**
 * @brief Set the data align mode
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eAlign the data align mode
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetDataAlignment(HsAdc_Type *const pHsAdc,
                                                              HsAdc_AlignType   eAlign)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_ALIGN_MASK) | HSADC_CFG1_ALIGN(eAlign);
}

/**
 * @brief Get SGDMA SEL for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return the SGDMA SEL for the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetSGDMASEL(const HsAdc_Type *const pHsAdc)
{
    return (pHsAdc->CFG1 & HSADC_CFG1_SGDMA_SEL_MASK) >> HSADC_CFG1_SGDMA_SEL_SHIFT;
}

/**
 * @brief Set the SGDMA SEL for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable the SGDMA SEL for the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSGDMASEL(HsAdc_Type *const pHsAdc, uint8 index)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_SGDMA_SEL_MASK) | HSADC_CFG1_SGDMA_SEL(index);
}

/**
 * @brief Get whether SGDMA for the HSADC instance is enabled
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE SGDMA is enabled for the HSADC instance
 * @return FALSE SGDMA is disabled for the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetSGDMAEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG1 & HSADC_CFG1_SGDMAEN_MASK) >> HSADC_CFG1_SGDMAEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable or disable the SGDMA for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the SGDMA for the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSGDMAEnable(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_SGDMAEN_MASK) | HSADC_CFG1_DMAEN(bEnable);
}

/**
 * @brief Get whether DMA for the HSADC instance is enabled
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE DMA is enabled for the HSADC instance
 * @return FALSE DMA is disabled for the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetDMAEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG1 & HSADC_CFG1_DMAEN_MASK) >> HSADC_CFG1_DMAEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable or disable the DMA for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the DMA for the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetDMAEnable(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->CFG1 = (pHsAdc->CFG1 & ~HSADC_CFG1_DMAEN_MASK) | HSADC_CFG1_DMAEN(bEnable);
}

/**
 * @brief Get the HSADC_CFG1 config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint32 the HSADC_CFG1 config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 HSADC_HWA_GetConfig1(const HsAdc_Type *const pHsAdc)
{
    return pHsAdc->CFG1;
}

/**
 * @brief Set the HSADC_CFG1 config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u32Config the HSADC_CFG1 config
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetConfig1(HsAdc_Type *const pHsAdc, uint32 u32Config)
{
    pHsAdc->CFG1 = u32Config;
}

/**
 * @brief Get the extend channel enable settings for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return boolean the HSADC extend channel enable setting
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetExtChEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_EXT_CH_EN_MASK) >> HSADC_CFG2_EXT_CH_EN_SHIFT;
    return u32TmpVal ? TRUE : FALSE;
}

/**
 * @brief Set the extend channel feature for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable the enable/disable flag
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetExtChEnable(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_EXT_CH_EN_MASK) | HSADC_CFG2_EXT_CH_EN(bEnable);
}

/**
 * @brief Get the FIFO water mark settings for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint8 the HSADC FIFO water mark setting
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetFIFOWaterMark(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_FWMARK_MASK) >> HSADC_CFG2_FWMARK_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the FIFO water mark for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8WaterMark the HSADC FIFO water mark setting
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFIFOWaterMark(HsAdc_Type *const pHsAdc,
                                                              uint8             u8WaterMark)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_FWMARK_MASK) | HSADC_CFG2_FWMARK(u8WaterMark);
}

ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetSmpSpare(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_SMP_SPARE_EN_MASK) >> HSADC_CFG2_SMP_SPARE_EN_SHIFT;
    return (uint8)u32TmpVal;
}

ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSmpSpare(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_SMP_SPARE_EN_MASK) | HSADC_CFG2_SMP_SPARE_EN(bEnable);
}

/**
 * @brief Get the priority of Trigger Latch
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetTriggerLatchUnitPriority(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_TRG_PRI_MASK) >> HSADC_CFG2_TRG_PRI_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the priority of Trigger Latch
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eTrgLatchUnitPri the priority of Trigger Latch Unit setting
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetTriggerLatchUnitPriority(
    HsAdc_Type *const     pHsAdc,
    HsAdc_TrgLatchUnitPri eTrgLatchUnitPri)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_TRG_CLR_MASK) | HSADC_CFG2_TRG_CLR(eTrgLatchUnitPri);
}

/**
 * @brief Clear Latch Trigger in Trigger Latch Unit
 *
 * @param pHsAdc the base address of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearLatchTrigger(HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->CFG2;
    pHsAdc->CFG2     = u32TmpVal | HSADC_CFG2_TRG_CLR(1);
}

/**
 * @brief Get whether hardware average is enabled
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE hardware average is enabled
 * @return FALSE hardware average is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetAverageEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_AVG_EN_MASK) >> HSADC_CFG2_AVG_EN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable or disable hardware average for the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable the HSADC hardware average
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetAverageEnable(HsAdc_Type *const pHsAdc,
                                                              boolean           bEnable)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_AVG_EN_MASK) | HSADC_CFG2_AVG_EN(bEnable);
}

/**
 * @brief Get the hardware average number
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HsAdc_AverageType the hardware average number
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_AverageLenType HSADC_HWA_GetAverageNumber(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_AVG_LEN_MASK) >> HSADC_CFG2_AVG_LEN_SHIFT;
    return (HsAdc_AverageLenType)u32TmpVal;
}

/**
 * @brief Set the hardware average number
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eAverageNumber the hardware average number to set
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetAverageNumber(HsAdc_Type *const    pHsAdc,
                                                              HsAdc_AverageLenType eAverageNumber)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_AVG_LEN_MASK) | HSADC_CFG2_AVG_LEN(eAverageNumber);
}
/**
 * @brief Whether clock gating is acknowledged
 *
 * @note This feature is only available in FC7300F2M
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE HSADC clock source is off after setting Clock Gating Enable Flag
 * @return FALSE HSADC clock source is on after clearing Clock Gating Enable Flag
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetClockGatingAck(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_CG_ACK_MASK) >> HSADC_CFG2_CG_ACK_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get whether clock gating is enabled
 *
 * @note This feature is only available in FC7300F2M
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE Clock gating is enabled, HSADC clock is off
 * @return FALSE Clock gating is disabled, HSADC clock is on
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetClockGatingEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_CG_MASK) >> HSADC_CFG2_CG_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable HSADC clock gating
 *
 * @note This feature is only available in FC7300F2M
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether to enable HSADC clock gating
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetClockGatingEnable(HsAdc_Type *const pHsAdc,
                                                                  boolean           bEnable)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_CG_MASK) | HSADC_CFG2_CG(bEnable);
}

/**
 * @brief Get the HSADC clock divider
 *
 * @note This feature is only available in FC7300F2M
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HsAdc_ClockDivideType the HSADC clock divider
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_ClockDivideType HSADC_HWA_GetClockDivider(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_DIV_MASK) >> HSADC_CFG2_DIV_SHIFT;
    return (HsAdc_ClockDivideType)u32TmpVal;
}

/**
 * @brief Set the HSADC clock divider
 *
 * @note Before configuring DIV, must set CG and wait for CG_ACK=1.
 *       After configuring DIV, must clear CG and wait for CG_ACK=0.
 * @note This feature is only available in FC7300F2M
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eDivider the HSADC clock divider to set
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetClockDivider(HsAdc_Type *const     pHsAdc,
                                                             HsAdc_ClockDivideType eDivider)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_DIV_MASK) | HSADC_CFG2_DIV(eDivider);
}

/**
 * @brief Get the HSADC start up count
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint8 the start count of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetStartupCnt(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CFG2 & HSADC_CFG2_STCNT_MASK) >> HSADC_CFG2_STCNT_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the HSADC start up count
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8StartupCnt the start count of the HSADC instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetStartupCnt(HsAdc_Type *const pHsAdc,
                                                           uint8             u8StartupCnt)
{
    pHsAdc->CFG2 = (pHsAdc->CFG2 & ~HSADC_CFG2_STCNT_MASK) | HSADC_CFG2_STCNT(u8StartupCnt);
}

/**
 * @brief Get the HSADC_CFG2 config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint32 the HSADC_CFG2 config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 HSADC_HWA_GetConfig2(const HsAdc_Type *const pHsAdc)
{
    return pHsAdc->CFG2;
}

/**
 * @brief Set the HSADC_CFG2 config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u32Config the HSADC_CFG2 config
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetConfig2(HsAdc_Type *const pHsAdc, uint32 u32Config)
{
    pHsAdc->CFG2 = u32Config;
}

/**
 * @brief Get the sample time of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8Selection the sample time index, range 0~3
 * @return uint8 the sample time of the selected index
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetSampleTime(HsAdc_Type *const pHsAdc,
                                                            uint8             u8Selection)
{
    uint32 ret;
    ret = (pHsAdc->SMPR & (HSADC_SMPR_SMP_OPT0_MASK << (8U * u8Selection))) >> (8U * u8Selection);
    return (uint8)ret;
}

/**
 * @brief Set the sample time of the HSADC instance
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8Selection the sample time index, range 0~3
 * @param u8SampleTime the sample time of the selected index
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSampleTime(HsAdc_Type *const pHsAdc,
                                                           uint8             u8Selection,
                                                           uint8             u8SampleTime)
{
    pHsAdc->SMPR = (pHsAdc->SMPR & ~(HSADC_SMPR_SMP_OPT0_MASK << (8U * u8Selection))) |
                   (HSADC_SMPR_SMP_OPT0(u8SampleTime) << (8U * u8Selection));
}

/**
 * @brief Set the HSADC_SMPR config
 *
 * @param pAdc the base address of the HSADC instance
 * @param u32Config the HSADC_SMPR config
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSampleTimeOpts(HsAdc_Type *const pHsAdc,
                                                               uint32            u32SampleTimes)
{
    pHsAdc->SMPR = u32SampleTimes;
}

/**
 * @brief Get whether hardware compare is enabled
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return TRUE hardware compare is enabled
 * @return FALSE hardware compare is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetCmpEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->CMP_CTRL & HSADC_CMP_CTRL_ACMPEN_MASK) >> HSADC_CMP_CTRL_ACMPEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set to enable or disable the hardware compare
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param bEnable whether the HSADC hardware compare is enabled
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetCmpEnable(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->CMP_CTRL = (pHsAdc->CMP_CTRL & ~HSADC_CMP_CTRL_ACMPEN_MASK) |
                       HSADC_CMP_CTRL_ACMPEN(bEnable);
}

/**
 * @brief Set the HSADC hardware compare channel
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param eType whether the hardware compare enabled on single channel or all channels
 * @param u8ChannalNum if hardware compare is enabled on single channel, this specifies the channel
 * number
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetCmpChannel(HsAdc_Type *const    pHsAdc,
                                                           HsAdc_CmpChannelType eType,
                                                           uint8                u8ChannalNum)
{
    pHsAdc->CMP_CTRL = (pHsAdc->CMP_CTRL & (~HSADC_CMP_CTRL_ACMPSGL_MASK) &
                        (~HSADC_CMP_CTRL_ACMPCH_MASK)) |
                       HSADC_CMP_CTRL_ACMPSGL(eType) | HSADC_CMP_CTRL_ACMPCH(u8ChannalNum);
}

/**
 * @brief Set the HSADC hardware compare threshold
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u16LowThres the lower threshold
 * @param u16HighThres the higher threshold
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetCmpThreshold(HsAdc_Type *const pHsAdc,
                                                             uint16            u16LowThres,
                                                             uint16            u16HighThres)
{
    pHsAdc->CMP_TR = HSADC_CMP_TR_LT(u16LowThres) | HSADC_CMP_TR_HT(u16HighThres);
}

/**
 * @brief Get the HSADC_CFG3 config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint32 the HSADC_CFG3 config
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 HSADC_HWA_GetConfig3(const HsAdc_Type *const pHsAdc)
{
    return pHsAdc->CFG3;
}

/**
 * @brief Set the HSADC_CFG3 config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u32Config the HSADC_CFG3 config
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetConfig3(HsAdc_Type *const pHsAdc, uint32 u32Config)
{
    pHsAdc->CFG3 = u32Config;
}

/**
 * @brief Get the end of sequence group flag
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param boolean the sequence group interrupt flag
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfSGFlag(const HsAdc_Type *const pHsAdc,
                                                               const uint8 u8SeqGroupIndex)
{
    uint32 u32TmpVal = (pHsAdc->SGCSR[u8SeqGroupIndex] & HSADC_SGCSR_EOSG_MASK) >>
                       HSADC_SGCSR_EOSG_SHIFT;
    return u32TmpVal ? TRUE : FALSE;
}

/**
 * @brief Clear the end of sequence group flag
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearEndOfSGFlag(HsAdc_Type *const pHsAdc,
                                                              const uint8       u8SeqGroupIndex)
{
    uint32 u32TmpVal               = pHsAdc->SGCSR[u8SeqGroupIndex];
    pHsAdc->SGCSR[u8SeqGroupIndex] = (u32TmpVal & ~HSADC_SGCSR_EOSG_MASK) | HSADC_SGCSR_EOSG(1U);
}

/**
 * @brief Set the sequence group end of sequence interrupt enable
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param bEnable the sequence group interrupt enable or disable
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetEndOfSGIntEnable(HsAdc_Type *const pHsAdc,
                                                                 const uint8       u8SeqGroupIndex,
                                                                 const boolean     bEnable)
{
    uint32 u32TmpVal               = pHsAdc->SGCSR[u8SeqGroupIndex];
    pHsAdc->SGCSR[u8SeqGroupIndex] = (u32TmpVal & ~HSADC_SGCSR_EOSGIE_MASK) |
                                     HSADC_SGCSR_EOSGIE(bEnable);
}

/**
 * @brief Set the sequence group end of sequence interrupt enable
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @return boolean the sequence group interrupt enable or disable
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetEndOfSGIntEnable(HsAdc_Type *const pHsAdc,
                                                                    const uint8 u8SeqGroupIndex)
{
    uint32 u32TmpVal = pHsAdc->SGCSR[u8SeqGroupIndex];
    u32TmpVal        = (u32TmpVal & HSADC_SGCSR_EOSGIE_MASK);
    return u32TmpVal ? TRUE : FALSE;
}

/**
 * @brief Get the sequence group start point
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetSGStartPoint(HsAdc_Type *const pHsAdc,
                                                              const uint8       u8SeqGroupIndex)
{
    return (uint8)((pHsAdc->SGCSR[u8SeqGroupIndex] & HSADC_SGCSR_SG_START_MASK) >>
                   HSADC_SGCSR_SG_START_SHIFT);
}

/**
 * @brief Get the sequence group end point
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetSGEndPoint(HsAdc_Type *const pHsAdc,
                                                            const uint8       u8SeqGroupIndex)
{
    return (uint8)((pHsAdc->SGCSR[u8SeqGroupIndex] & HSADC_SGCSR_SG_END_MASK) >>
                   HSADC_SGCSR_SG_END_SHIFT);
}

/**
 * @brief Set the sequence group start and end point
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param u8Start the sequence group start point
 * @param u8End the sequence group end point
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetSGStartEndPoint(HsAdc_Type *const pHsAdc,
                                                                const uint8       u8SeqGroupIndex,
                                                                const uint8       u8Start,
                                                                const uint8       u8End)
{
    uint32 u32TmpVal = pHsAdc->SGCSR[u8SeqGroupIndex];
    u32TmpVal        = (u32TmpVal & ~HSADC_SGCSR_SG_END_MASK) | HSADC_SGCSR_SG_END(u8End);
    u32TmpVal        = (u32TmpVal & ~HSADC_SGCSR_SG_START_MASK) | HSADC_SGCSR_SG_START(u8Start);
    pHsAdc->SGCSR[u8SeqGroupIndex] = u32TmpVal;
}

/**
 * @brief Set the HSADC Sequence Group configurations
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8SeqGroupIndex the index of the sequence group
 * @param u32Config the config value to set
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ConfigureSeqGroup(HsAdc_Type *const pHsAdc,
                                                               const uint8       u8SeqGroupIndex,
                                                               const uint32      u32Config)
{
    pHsAdc->SGCSR[u8SeqGroupIndex] = u32Config;
}

ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetOGCOffset(HsAdc_Type *const pHsAdc, uint16 val)
{
    pHsAdc->OGCR = (pHsAdc->OGCR & ~HSADC_OGCR_OFFSET_MASK) | HSADC_OGCR_OFFSET(val);
}

ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetOGCGain(HsAdc_Type *const pHsAdc, uint16 val)
{
    pHsAdc->OGCR = (pHsAdc->OGCR & ~HSADC_OGCR_GAIN_MASK) | HSADC_OGCR_GAIN(val);
}

ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetOGCEnable(HsAdc_Type *const pHsAdc, boolean bEnable)
{
    pHsAdc->OGCR = (pHsAdc->OGCR & ~HSADC_OGCR_OGC_EN_MASK) | HSADC_OGCR_OGC_EN(bEnable);
}

/**
 * @brief Set the HSADC_CCAL config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u32Cal the HSADC_CCAL config
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetCCal(HsAdc_Type *const pHsAdc, uint32 u32CCal)
{
    pHsAdc->CCAL = u32CCal;
}

/**
 * @brief Get the conversion result FIFO data of the HSADC instance
 *
 * @note only reslut data of HSADC single mode and continuous mode will be stored
 * in FIFO register.
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint32 the HSADC conversion result
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 HSADC_HWA_GetFIFOData(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = pHsAdc->FIFO_DATA;
    u32TmpVal = (u32TmpVal & HSADC_FIFO_DATA_FIFO_DATA_MASK) >> HSADC_FIFO_DATA_FIFO_DATA_SHIFT;
    return (uint32)u32TmpVal;
}

/**
 * @brief Get the sample time index of the HSADC channel
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @return uint8 the sample time index of the HSADC channel
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetChannelSampleTimeIndex(const HsAdc_Type *const pHsAdc,
                                                                        const uint8 u8ChnIdx)
{
    uint32 u32TmpVal = (pHsAdc->SC[u8ChnIdx] & HSADC_SC_SMPSEL_MASK) >> HSADC_SC_SMPSEL_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the sample time index of the HSADC channel
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @param u8SmpSel the sample time index of the HSADC channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetChannelSampleTimeIndex(HsAdc_Type *const pHsAdc,
                                                                       const uint8       u8ChnIdx,
                                                                       uint8             u8SmpSel)
{
    pHsAdc->SC[u8ChnIdx] = (pHsAdc->SC[u8ChnIdx] & ~HSADC_SC_SMPSEL_MASK) | HSADC_SC_SMPSEL(u8SmpSel);
}

/**
 * @brief Get the channel conversion complete status of the HSADC instance
 *
 * @note this function is used only in HSADC discontinuous mode to get the channel complete
 * status
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @return TRUE the HSADC conversion on the selected channel is completed
 * @return FALSE the HSADC conversion on the selected channel is not completed
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetChannelCoCoFlag(const HsAdc_Type *const pHsAdc,
                                                                   const uint8             u8ChnIdx)
{
    uint32 u32TmpVal = pHsAdc->SC[u8ChnIdx];
    u32TmpVal        = (u32TmpVal & HSADC_SC_COCO_MASK) >> HSADC_SC_COCO_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the channel conversion complete status of the HSADC instance
 *
 * @note this function is used only in HSADC sequence group mode to clear the channel complete
 * flag
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @return TRUE the HSADC conversion on the selected channel is completed
 * @return FALSE the HSADC conversion on the selected channel is not completed
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_ClearChannelCoCoFlag(HsAdc_Type *const pHsAdc,
                                                                  uint8             u8ChnIdx)
{
    uint32 u32TmpVal     = pHsAdc->SC[u8ChnIdx];
    u32TmpVal            = u32TmpVal | HSADC_SC_COCO_MASK;
    pHsAdc->SC[u8ChnIdx] = u32TmpVal;
}

/**
 * @brief Check whether interrupt is enabled on the selected HSADC channel
 *
 * @note this function is used only in HSADC sequence group mode to get the channel interrupt
 * settings
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @return TRUE interrupt is enabled on the selected channel
 * @return FALSE interrupt is disabled on the selected channel
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetChannelCoCoIntEnable(const HsAdc_Type *const pHsAdc,
                                                                        const uint8 u8ChnIdx)
{
    uint32 u32TmpVal = pHsAdc->SC[u8ChnIdx];
    u32TmpVal        = (u32TmpVal & HSADC_SC_AIEN_MASK) >> HSADC_SC_AIEN_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set to enable or disable interrupt on the selected HSADC channel
 *
 * @note this function is used only in HSADC sequence group mode to get the channel interrupt
 * settings
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @param bEnable whether to enable interrupt on the selected HSADC channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetChannelCoCoIntEnable(HsAdc_Type *const pHsAdc,
                                                                     const uint8       u8ChnIdx,
                                                                     boolean           bEnable)
{
    pHsAdc->SC[u8ChnIdx] = (pHsAdc->SC[u8ChnIdx] & ~HSADC_SC_AIEN_MASK) | HSADC_SC_AIEN(bEnable);
}

/**
 * @brief Get the input channel of the selected HSADC channel
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @return uint8 the hardware input channel
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetChannelInput(const HsAdc_Type *const pHsAdc,
                                                              const uint8             u8ChnIdx)
{
    uint32 u32TmpVal = (pHsAdc->SC[u8ChnIdx] & HSADC_SC_CHS_MASK) >> HSADC_SC_CHS_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the input channel to the selected HSADC channel
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @param u8InputChann the hardware input channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetChannelInput(HsAdc_Type *const pHsAdc,
                                                             const uint8       u8ChnIdx,
                                                             uint8             u8InputChann)
{
    pHsAdc->SC[u8ChnIdx] = (pHsAdc->SC[u8ChnIdx] & ~HSADC_SC_CHS_MASK) | HSADC_SC_CHS(u8InputChann);
}

/**
 * @brief Set the HSADC channel config
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the channel
 * @param u32ChnCfg the channel config
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetChannelConfig(HsAdc_Type *const pHsAdc,
                                                              const uint8       u8ChnIdx,
                                                              uint32            u32ChnCfg)
{
    pHsAdc->SC[u8ChnIdx] = u32ChnCfg;
}

/**
 * @brief Get the conversion result data of the HSADC instance
 *
 * @note only result data of HSADC discontinuous mode will be stored in RESULTn register.
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u8ChnIdx the index of the HSADC channel
 * @return uint32 the HSADC conversion result
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 HSADC_HWA_GetChannelData(const HsAdc_Type *const pHsAdc,
                                                              const uint8             u8ChnIdx)
{
    uint32 u32TmpVal = pHsAdc->RESULT[u8ChnIdx];
    u32TmpVal        = (u32TmpVal & HSADC_RESULT_RESULT_MASK) >> HSADC_RESULT_RESULT_SHIFT;

    return (uint32)u32TmpVal;
}

ADC_TEXT_SECTION LOCAL_INLINE uint16 HSADC_HWA_GetResultCal(HsAdc_Type *const pHsAdc)
{
    return (uint16)((pHsAdc->RESULT_CAL & HSADC_RESULT_CAL_DATA_MASK) >> HSADC_RESULT_CAL_DATA_SHIFT);
}

/**
 * @brief Get the fast compare enable
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return boolean whether the HSADC fast compare enable
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetFCEnable(const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->FCMP_CTRL & HSADC_FCMP_CTRL_FC_EN_MASK) >>
                       HSADC_FCMP_CTRL_FC_EN_SHIFT;
    return u32TmpVal ? TRUE : FALSE;
}

/**
 * @brief Set the fast compare reference of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param enable whether the HSADC fast compare enable
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCEnable(HsAdc_Type *const pHsAdc, boolean enable)
{
    pHsAdc->FCREF = (pHsAdc->FCREF & ~HSADC_FCMP_CTRL_FC_EN_MASK) | HSADC_FCMP_CTRL_FC_EN(enable);
}

/**
 * @brief Set the fast compare control register
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param value control register value
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCCtrl(HsAdc_Type *const pHsAdc, uint32 value)
{
    pHsAdc->FCMP_CTRL = value;
}

/**
 * @brief Get the fast compare reference of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return sint16 the HSADC fast compare reference
 */
ADC_TEXT_SECTION LOCAL_INLINE sint16 HSADC_HWA_GetFCRef(const HsAdc_Type *const pHsAdc)
{
    return (pHsAdc->FCREF & HSADC_FCREF_FCREF_MASK) >> HSADC_FCREF_FCREF_SHIFT;
}

/**
 * @brief Set the fast compare reference of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param ref the index of the HSADC channel
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRef(HsAdc_Type *const pHsAdc, uint16 ref)
{
    pHsAdc->FCREF = (pHsAdc->FCREF & ~HSADC_FCREF_FCREF_MASK) | HSADC_FCREF_FCREF(ref);
}

/**
 * @brief Get the fast compare ramp reference A of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return sint16 the HSADC fast compare ramp reference A
 */
ADC_TEXT_SECTION LOCAL_INLINE sint16 HSADC_HWA_GetFCRampRefA(const HsAdc_Type *const pHsAdc)
{
    return (pHsAdc->FCRAMP0 & HSADC_FCRAMP0_FCREF_A_MASK) >> HSADC_FCRAMP0_FCREF_A_SHIFT;
}

/**
 * @brief Set the fast compare ramp reference A of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param ref the HSADC fast compare ramp reference A
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRampRefA(HsAdc_Type *const pHsAdc, uint16 ref)
{
    pHsAdc->FCRAMP0 = (pHsAdc->FCRAMP0 & ~HSADC_FCRAMP0_FCREF_A_MASK) | HSADC_FCRAMP0_FCREF_A(ref);
}

/**
 * @brief Get the fast compare ramp step of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint8 the HSADC fast compare ramp step
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 HSADC_HWA_GetFCRampStep(const HsAdc_Type *const pHsAdc)
{
    return (pHsAdc->FCRAMP0 & HSADC_FCRAMP0_RPSTEP_MASK) >> HSADC_FCRAMP0_RPSTEP_SHIFT;
}

/**
 * @brief Set the fast compare ramp step
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param step the HSADC fast compare ramp step
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRampStep(HsAdc_Type *const pHsAdc, uint16 step)
{
    pHsAdc->FCRAMP0 = (pHsAdc->FCRAMP0 & ~HSADC_FCRAMP0_RPSTEP_MASK) | HSADC_FCRAMP0_RPSTEP(step);
}

/**
 * @brief Set the fast compare ramp0 register
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param value the HSADC fast compare ramp0 register value
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRamp0(HsAdc_Type *const pHsAdc, uint32 value)
{
    pHsAdc->FCRAMP0 = value;
}

/**
 * @brief Get the fast compare ramp reference B of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return sint16 the HSADC fast compare ramp reference B
 */
ADC_TEXT_SECTION LOCAL_INLINE sint16 HSADC_HWA_GetFCRampRefB(const HsAdc_Type *const pHsAdc)
{
    return (pHsAdc->FCRAMP1 & HSADC_FCRAMP1_FCREF_B_MASK) >> HSADC_FCRAMP1_FCREF_B_SHIFT;
}

/**
 * @brief Set the fast compare ramp reference B of the HSADC instance
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param ref the HSADC fast compare ramp reference B
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRampRefB(HsAdc_Type *const pHsAdc, uint16 ref)
{
    pHsAdc->FCRAMP1 = (pHsAdc->FCRAMP1 & ~HSADC_FCRAMP1_FCREF_B_MASK) | HSADC_FCRAMP1_FCREF_B(ref);
}

/**
 * @brief Get the fast compare ramp dir
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return HSADC_FCmpRampDir the HSADC fast compare ramp dir
 */
ADC_TEXT_SECTION LOCAL_INLINE HsAdc_FastCmpRampDir HSADC_HWA_GetFCRampDir(
    const HsAdc_Type *const pHsAdc)
{
    uint32 u32TmpVal = (pHsAdc->FCRAMP1 & HSADC_FCRAMP1_RPDIR_MASK) >> HSADC_FCRAMP1_RPDIR_SHIFT;
    return u32TmpVal ? HSADC_FAST_CMP_RAMPDIR_DOWN : HSADC_FAST_CMP_RAMPDIR_UP;
}

/**
 * @brief Set the fast compare ramp dir
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param dir the HSADC fast compare ramp dir
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRampDir(HsAdc_Type *const    pHsAdc,
                                                          HsAdc_FastCmpRampDir dir)
{
    pHsAdc->FCRAMP1 = (pHsAdc->FCRAMP1 & ~HSADC_FCRAMP1_RPDIR_MASK) | HSADC_FCRAMP1_RPDIR(dir);
}

/**
 * @brief Set the fast compare ramp1 register
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param value the HSADC fast compare ramp1 register value
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRamp1(HsAdc_Type *const pHsAdc, uint32 value)
{
    pHsAdc->FCRAMP1 = value;
}

/**
 * @brief Get the fast compare reference upper delta
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint16 the HSADC fast compare ref upper delta
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 HSADC_HWA_GetFCRefDeltaP(const HsAdc_Type *const pHsAdc)
{
    return (pHsAdc->FCHYST & HSADC_FCHYST_DELTAP_MASK) >> HSADC_FCHYST_DELTAP_SHIFT;
}

/**
 * @brief Set the fast compare reference upper delta
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param delta the HSADC fast compare ref upper delta
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRefDeltaP(HsAdc_Type *const pHsAdc, uint16 delta)
{
    pHsAdc->FCHYST = (pHsAdc->FCHYST & ~HSADC_FCHYST_DELTAP_MASK) | HSADC_FCHYST_DELTAP(delta);
}

/**
 * @brief Get the fast compare reference lower delta
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return uint16 the HSADC fast compare ref lower delta
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 HSADC_HWA_GetFCRefDeltaN(const HsAdc_Type *const pHsAdc)
{
    return (pHsAdc->FCHYST & HSADC_FCHYST_DELTAN_MASK) >> HSADC_FCHYST_DELTAN_SHIFT;
}

/**
 * @brief Set the fast compare reference lower delta
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param delta the HSADC fast compare ref lower delta
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCRefDeltaN(HsAdc_Type *const pHsAdc, uint16 delta)
{
    pHsAdc->FCHYST = (pHsAdc->FCHYST & ~HSADC_FCHYST_DELTAN_MASK) | HSADC_FCHYST_DELTAN(delta);
}

/**
 * @brief Set the fast compare reference hysteresis
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @param u32Hyst the HSADC fast compare reference hysteresis
 * @return none
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_SetFCHysteresis(HsAdc_Type *const pHsAdc, uint32 u32Hyst)
{
    pHsAdc->FCHYST = u32Hyst;
}

/**
 * @brief Get the fast compare result
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return boolean fast compare result
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetFCResult(HsAdc_Type *const pHsAdc)
{
    return (boolean)((pHsAdc->FCBFR & HSADC_FCBFR_FCR_MASK) >> HSADC_FCBFR_FCR_SHIFT);
}

/**
 * @brief Get the fast compare boundary flag
 *
 * @note
 *
 * @param pHsAdc the base address of the HSADC instance
 * @return boolean fast compare boundary flag
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean HSADC_HWA_GetFCBoundaryFlag(HsAdc_Type *const pHsAdc)
{
    return (boolean)((pHsAdc->FCBFR & HSADC_FCBFR_BFL_MASK) >> HSADC_FCBFR_BFL_SHIFT);
}

/**
 * @brief Generate software trigger for HSADC hardware channel
 *
 * This function generates a software trigger for the specified HSADC channel by
 * setting the SW_TRIG bit in the SCM_SOCMISC register. This is used to initiate
 * HSADC conversion processes.
 *
 * @note This function shall be called in critical sections / spinlocks
 *
 * @param pHsAdc Pointer to the ADC module configuration structure
 * @param u8Channel The software channel to use
 *
 * @return void
 */
ADC_TEXT_SECTION LOCAL_INLINE void HSADC_HWA_GenerateSwTrigger(HsAdc_Type *const pHsAdc,
                                                               uint8             u8Channel)
{
    /* Clear the existing software trigger bits and set the trigger for the specified channel */
    SCM->SOCMISC = (SCM->SOCMISC & ~SCM_SOCMISC_SW_TRIG_MASK) | SCM_SOCMISC_SW_TRIG(1U << u8Channel);
    SCM->SOCMISC = (SCM->SOCMISC & ~SCM_SOCMISC_SW_TRIG_MASK);
    (void)pHsAdc;
}

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_HSADC_REGOPS_H */

/** @}*/
