/**
 *   @file    Adc_Ptimer_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - ADC Ptimer header file.
 *   @details ADC Ptimer low level driver API.
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
*   0.3.0       17/10/2023    QXW0030       N/A          Optimization of Multicore instance
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.4.0       12/09/2025    QXW0030       N/A          Add Ptimer trigger Hw group support
==================================================================================================*/

#ifndef ADC_PTIMER_REGOPS_H
#define ADC_PTIMER_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Common_Cfg.h"
#include "Adc_CfgDefines.h"
#include "Adc_Ptimer_Types.h"
#include "Adc_Ptimer_Reg.h"
#include "Mcal.h"
#include "Scm_Reg.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"
/**
 * @brief Get the STATUS_CTRL register value
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE uint32 PTIMER_HWA_GetStatusCtrl(const Ptimer_Type *const pPtimer)
{
    return pPtimer->STATUS_CTRL;
}

/**
 * @brief Set the STATUS_CTRL register value
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u32CfgValue the register value to set
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetStatusCtrl(Ptimer_Type *const pPtimer,
                                                            uint32             u32CfgValue)
{
    pPtimer->STATUS_CTRL = u32CfgValue;
}

/**
 * @brief Get the load mode of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return Ptimer_LoadValueModeType the load mode of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE Ptimer_LoadValueModeType PTIMER_HWA_GetLoadMode(
    const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_LDMODE_MASK) >>
                       PTIMER_STATUS_CTRL_LDMODE_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The relative register bits can be safely converted to
       the enumeration type */
    return (Ptimer_LoadValueModeType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the load mode of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param eLoadMode the load mode of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetLoadMode(Ptimer_Type *const       pPtimer,
                                                          Ptimer_LoadValueModeType eLoadMode)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_LDMODE_MASK) |
                           PTIMER_STATUS_CTRL_LDMODE(eLoadMode);
}

/**
 * @brief Get whether sequence error interrupt is enabled
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return TRUE  sequence error interrupt is enabled
 * @return FALSE sequence error interrupt is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetSeqErrIntEnableFlag(
    const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_SERR_INTEN_MASK) >>
                       PTIMER_STATUS_CTRL_SERR_INTEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable sequence error interrupt
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bEnable whether to enable sequence error interrupt
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetSeqErrIntEnableFlag(Ptimer_Type *const pPtimer,
                                                                     boolean            bEnable)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_SERR_INTEN_MASK) |
                           PTIMER_STATUS_CTRL_SERR_INTEN(bEnable);
}

/**
 * @brief Generate software trigger signal for Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_GenerateSwTrigger(Ptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL |= PTIMER_STATUS_CTRL_SWTRG_MASK;
}

/**
 * @brief Get whether DMA is enabled for the Ptimer insstance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return TRUE DMA is enabled
 * @return FALSE DMA is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetDMAEnableFlag(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_DMAEN_MASK) >>
                       PTIMER_STATUS_CTRL_DMAEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable Ptimer DMA
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bEnable whether to enable DMA for the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetDMAEnableFlag(Ptimer_Type *const pPtimer,
                                                               boolean            bEnable)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_DMAEN_MASK) |
                           PTIMER_STATUS_CTRL_DMAEN(bEnable);
}

/**
 * @brief Get the predivider value of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return Ptimer_ClockPreDividerType the predivider of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE Ptimer_ClockPreDividerType PTIMER_HWA_GetDivPrescaler(
    const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_PRESCALER_MASK) >>
                       PTIMER_STATUS_CTRL_PRESCALER_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The relative register bits can be safely converted to
       the enumeration type */
    return (Ptimer_ClockPreDividerType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the predivider value of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param eDivPrescaler the predivider of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetDivPrescaler(Ptimer_Type *const pPtimer,
                                                              Ptimer_ClockPreDividerType eDivPrescaler)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_PRESCALER_MASK) |
                           PTIMER_STATUS_CTRL_PRESCALER(eDivPrescaler);
}

/**
 * @brief Get the trigger source of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return PTIMER_TRGSRC_TRGSEL the trigger source is from TrgSel
 * @return PTIMER_TRGSRC_SW the trigger source is from software
 */
ADC_TEXT_SECTION LOCAL_INLINE Ptimer_TrgSrcType PTIMER_HWA_GetTriggerSource(
    const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_TRGSEL_MASK) >>
                       PTIMER_STATUS_CTRL_TRGSEL_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The relative register bits can be safely converted to
       the enumeration type */
    return (Ptimer_TrgSrcType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the trigger source of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param eTriggerSource the trigger source of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetTriggerSource(Ptimer_Type *const pPtimer,
                                                               Ptimer_TrgSrcType  eTriggerSource)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_TRGSEL_MASK) |
                           PTIMER_STATUS_CTRL_TRGSEL(eTriggerSource);
}

/**
 * @brief Get whether the Ptimer instance is enabled
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return TRUE the Ptimer instance is enabled
 * @return FALSE the Ptimer instance is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetEnableFlag(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_ENABLE_MASK) >>
                       PTIMER_STATUS_CTRL_ENABLE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_Enable(Ptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL |= PTIMER_STATUS_CTRL_ENABLE_MASK;
}

/**
 * @brief Disable the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_Disable(Ptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL &= ~PTIMER_STATUS_CTRL_ENABLE_MASK;
}

/**
 * @brief Get the delay interrupt flag of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return TRUE the delay interrupt flag of the Ptimer instance is generated
 * @return FALSE the delay interrupt flag of the Ptimer instance is not generated
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetInterruptFlag(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_INTFLAG_MASK) >>
                       PTIMER_STATUS_CTRL_INTFLAG_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the delay interrupt flag of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_ClearInterruptFlag(Ptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL &= ~PTIMER_STATUS_CTRL_INTFLAG_MASK;
}

/**
 * @brief Get whether delay interrupt is enabled for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetInterruptEnableFlag(
    const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_INTEN_MASK) >>
                       PTIMER_STATUS_CTRL_INTEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable delay interrupt for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bEnable whether to enable delay interrupt for the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetInterruptEnableFlag(Ptimer_Type *const pPtimer,
                                                                     boolean            bEnable)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_INTEN_MASK) |
                           PTIMER_STATUS_CTRL_INTEN(bEnable);
}

/**
 * @brief Get the multiply factor of the predivider of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return Ptimer_ClockPreDivMultiplyFactorType the multiply factor of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE Ptimer_ClockPreDivMultiplyFactorType PTIMER_HWA_GetDivMultiply(
    const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_MULT_MASK) >>
                       PTIMER_STATUS_CTRL_MULT_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The relative register bits can be safely converted to
       the enumeration type */
    return (Ptimer_ClockPreDivMultiplyFactorType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the multiply factor of the predivider of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param eMultFactor the multiply factor of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetDivMultiply(
    Ptimer_Type *const                   pPtimer,
    Ptimer_ClockPreDivMultiplyFactorType eMultFactor)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_MULT_MASK) |
                           PTIMER_STATUS_CTRL_MULT(eMultFactor);
}

/**
 * @brief Get whether continuous mode is enabled for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return TRUE continuous mode is enabled for the Ptimer instance
 * @return FALSE continuous mode is disabled for the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetContinuoiusModeFlag(
    const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_CONT_MASK) >>
                       PTIMER_STATUS_CTRL_CONT_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable continuous mode for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bEnable whether to enable continuous mode for the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetContinuoiusModeFlag(Ptimer_Type *const pPtimer,
                                                                     boolean            bEnable)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_CONT_MASK) |
                           PTIMER_STATUS_CTRL_CONT(bEnable);
}

/**
 * @brief Get the config value loading status
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return TRUE the config values are in loading status
 * @return FALSE the config values are loaded
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetValueLoadStatus(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & PTIMER_STATUS_CTRL_LDOK_MASK) >>
                       PTIMER_STATUS_CTRL_LDOK_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Load the buffered values into register
 *
 * @note Some Ptimer registers are buffered and will only take effect after called
 * this function
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_LoadValue(Ptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL |= PTIMER_STATUS_CTRL_LDOK_MASK;
}

/**
 * @brief Get the Ptimer max counter period
 * When the Ptimer counter reaches the period, it will return to zero
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return uint16 the Ptimer max count
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 PTIMER_HWA_GetMaxCount(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->MAX_CNT & PTIMER_MAX_CNT_MAX_CNT_MASK) >>
                       PTIMER_MAX_CNT_MAX_CNT_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set the Ptimer max counter period
 * When the Ptimer counter reaches the period, it will return to zero
 *
 * @note the period parameter is buffered and will take effect only after called PTIMER_LoadValue()
 * function.
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u16MaxCnt the Ptimer max count
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetMaxCount(Ptimer_Type *const pPtimer, uint16 u16MaxCnt)
{
    pPtimer->MAX_CNT = PTIMER_MAX_CNT_MAX_CNT(u16MaxCnt);
}

/**
 * @brief Get the Ptimer current count value
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return uint16 the Ptimer current count value
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 PTIMER_HWA_GetCounterValue(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->CNT & PTIMER_CNT_CNT_MASK) >> PTIMER_CNT_CNT_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Get the ptimer interrupt period
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return uint16 the Ptimer interrupt period
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 PTIMER_HWA_GetInterruptDelay(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->INT_DLY & PTIMER_INT_DLY_INT_DLY_MASK) >>
                       PTIMER_INT_DLY_INT_DLY_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set the ptimer interrupt period
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u16InterruptDelay the Ptimer interrupt period
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetInterruptDelay(Ptimer_Type *const pPtimer,
                                                                uint16 u16InterruptDelay)
{
    pPtimer->INT_DLY = PTIMER_INT_DLY_INT_DLY(u16InterruptDelay);
}

/**
 * @brief Set the CTRL register of the Ptimer channel
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u8PtimerChannelIdx the index of the Ptimer channel
 * @param u32Ctrl the CTRL register value
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetChannelCtrl(Ptimer_Type *const pPtimer,
                                                             uint8              u8PtimerChannelIdx,
                                                             uint32             u32Ctrl)
{
    pPtimer->CH[u8PtimerChannelIdx].CTRL = u32Ctrl;
}

/**
 * @brief Clear the counter flag of the Ptimer channel
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u8PtimerChannelIdx the index of the Ptimer channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_ClearChannelCounterFlag(Ptimer_Type *const pPtimer,
                                                                      uint8 u8PtimerChannelIdx)
{
    pPtimer->CH[u8PtimerChannelIdx].STATUS &= ~PTIMER_STATUS_CH_CHN_FLAG_MASK;
}

/**
 * @brief Get the sequence error flag of the Ptimer channel
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u8PtimerChannelIdx the index of the Ptimer channel
 *
 * @return uint8 the sequence error flag of the Ptimer channel
 */
ADC_TEXT_SECTION LOCAL_INLINE uint8 PTIMER_HWA_GetChannelSequenceErrorFlag(
    const Ptimer_Type *const pPtimer,
    uint8                    u8PtimerChannelIdx)
{
    uint32 u32TmpVal = (pPtimer->CH[u8PtimerChannelIdx].STATUS & PTIMER_STATUS_CH_SERR_FLAG_MASK) >>
                       PTIMER_STATUS_CH_SERR_FLAG_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Clear the sequence error flag of the Ptimer channel
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u8PtimerChannelIdx the index of the Ptimer channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_ClearChannelSequenceErrorFlag(Ptimer_Type *const pPtimer,
                                                                            uint8 u8PtimerChannelIdx)
{
    pPtimer->CH[u8PtimerChannelIdx].STATUS &= ~PTIMER_STATUS_CH_SERR_FLAG_MASK;
}

/**
 * @brief Clear all the flags of the Ptimer channel
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u8PtimerChannelIdx the index of the Ptimer channel
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_ClearChannelFlags(Ptimer_Type *const pPtimer,
                                                                uint8 u8PtimerChannelIdx)
{
    pPtimer->CH[u8PtimerChannelIdx].STATUS = 0U;
}

/**
 * @brief Get the channel delay value
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u8ChnIdx the Ptimer channel index
 * @param u8DlyIdx the Ptimer delay index
 * @return uint16 the channel delay value
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 PTIMER_HWA_GetChannelDelay(const Ptimer_Type *const pPtimer,
                                                                uint8                    u8ChnIdx,
                                                                uint8                    u8DlyIdx)
{
    uint32 u32TmpVal = (pPtimer->CH[u8ChnIdx].DLY[u8DlyIdx] & PTIMER_DLY_CH_CHNDLY_MASK) >>
                       PTIMER_DLY_CH_CHNDLY_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set the channel delay value
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u8ChnIdx the Ptimer channel index
 * @param u8DlyIdx the Ptimer delay index
 * @param u16Delay the channel delay value
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetChannelDelay(Ptimer_Type *const pPtimer,
                                                              uint8              u8ChnIdx,
                                                              uint8              u8DlyIdx,
                                                              uint16             u16Delay)
{
    pPtimer->CH[u8ChnIdx].DLY[u8DlyIdx] = PTIMER_DLY_CH_CHNDLY(u16Delay);
}

/**
 * @brief Get whether pulse-out is enabled
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return TRUE pulse-out is enabled
 * @return FALSE pulse-out is disabled
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean PTIMER_HWA_GetPulseOutEnableFlag(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->POEN & PTIMER_POEN_POEN_MASK) >> PTIMER_POEN_POEN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable pulse-out for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_EnablePulseOut(Ptimer_Type *const pPtimer)
{
    pPtimer->POEN |= PTIMER_POEN_POEN_MASK;
}

/**
 * @brief Disable pulse-out for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_DisablePulseOut(Ptimer_Type *const pPtimer)
{
    pPtimer->POEN &= ~PTIMER_POEN_POEN_MASK;
}

/**
 * @brief Get the delay high value for the pulse-out function
 * When the Ptimer counter reach the delay high value, the pulse output goes high
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 PTIMER_HWA_GetPulseOutDelayHigh(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->PODLY & PTIMER_PODLY_DLY1_MASK) >> PTIMER_PODLY_DLY1_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Get the delay low value for the pulse-out function
 * When the Ptimer counter reach the delay low value, the pulse output goes low
 *
 * @param pPtimer the base address of the Ptimer instance
 */
ADC_TEXT_SECTION LOCAL_INLINE uint16 PTIMER_HWA_GetPulseOutDelayLow(const Ptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->PODLY & PTIMER_PODLY_DLY2_MASK) >> PTIMER_PODLY_DLY2_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set the pulse out delay value
 * When the Ptimer counter reach the delay high value, the pulse output goes high
 * When the Ptimer counter reach the delay low value, the pulse output goes low
 * The delay high value can be either greater or less than the delay low value
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u16DelayHigh the delay high value
 * @param u16DelayLow the delay low value
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetPulseOutDelay(Ptimer_Type *const pPtimer,
                                                               uint16             u16DelayHigh,
                                                               uint16             u16DelayLow)
{
    pPtimer->PODLY = PTIMER_PODLY_DLY1(u16DelayHigh) | PTIMER_PODLY_DLY2(u16DelayLow);
}

#if (ADC_PTIMER_CHANNEL01_BTB_FEATURE == STD_ON)
/**
 * @brief Set whether to enable Ptimer channel 0 and channel 1 in back to back mode
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bEnable Whether to enable Ptimer channel 0 and channel 1 in back to back mode
 */
ADC_TEXT_SECTION LOCAL_INLINE void PTIMER_HWA_SetChannel01BTBEnable(Ptimer_Type *const pPtimer,
                                                                    boolean            bEnable)
{
#if (ADC_PTIMER_NUM_MODULES > 3U)
    if ((uint32)pPtimer == PTIMER3_BASE)
    {
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_PTIMER23LOOP_2_MASK) |
                           SCM_ADC_ROUTING_PTIMER23LOOP_2(bEnable);
    }
    else
#endif /* ADC_PTIMER_NUM_MODULES > 3U */
#if (ADC_PTIMER_NUM_MODULES > 2U)
        if ((uint32)pPtimer == PTIMER2_BASE)
    {
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_PTIMER23LOOP_1_MASK) |
                           SCM_ADC_ROUTING_PTIMER23LOOP_1(bEnable);
    }
    else
#endif /* ADC_PTIMER_NUM_MODULES > 2U */
#if (ADC_PTIMER_NUM_MODULES > 1U)
        if ((uint32)pPtimer == PTIMER1_BASE)
    {
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_PTIMER01LOOP_2_MASK) |
                           SCM_ADC_ROUTING_PTIMER01LOOP_2(bEnable);
    }
    else
#endif /* ADC_PTIMER_NUM_MODULES > 1U */
#if (ADC_PTIMER_NUM_MODULES > 0U)
        if ((uint32)pPtimer == PTIMER0_BASE)
    {
        SCM->ADC_ROUTING = (SCM->ADC_ROUTING & ~SCM_ADC_ROUTING_PTIMER01LOOP_1_MASK) |
                           SCM_ADC_ROUTING_PTIMER01LOOP_1(bEnable);
    }
    else
#endif /* ADC_PTIMER_NUM_MODULES > 0U */
    {
        /* Nothing for Misra */
    }
}
#endif /* ADC_PTIMER_CHANNEL01_BTB_FEATURE == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_PTIMER_REGOPS_H */

/** @} */
