/**
 *   @file    Gpt_Ptimer_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Ptimer - Gpt header file.
 *   @details GPT low level driver API.
 *
 *   @addtogroup Gpt_Ptimer
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_Ptimer
*   PLATFORM             : Flagchip FC7300
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
*   0.8.0       29/08/2024    QXW0074       N/A          Gpt_Ptimer Initial version
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_PTIMER_REGOPS_H
#define GPT_PTIMER_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Ptimer_Reg.h"
#include "Gpt_Ptimer_Types.h"
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (GPT_CFG_PTIMER_DEBUG_MODE_SUPPORT == STD_ON)
/**
 * @brief Set Debug mode disable or not.
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bDbgMode debug mode flag
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetDebugMode(Gptptimer_Type *const pPtimer, boolean bDbgMode)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_DBG_DISEN_MASK) |
                            PTIMER_STATUS_CTRL_DBG_DISEN(bDbgMode);
}
#endif
/**
 * @brief Disable sequence error interrupt
 *
 * @param pPtimer the base address of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_DisableSeqErrInterrupt(Gptptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL &= ~PTIMER_STATUS_CTRL_SERR_INTEN_MASK;
}

/**
 * @brief Generate software trigger signal for Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_GenerateSwTrigger(Gptptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL |= PTIMER_STATUS_CTRL_SWTRG_MASK;
}

/**
 * @brief Set the predivider value of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param ePrescaler the predivider of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetDivPrescaler(Gptptimer_Type *const pPtimer,Gpt_PtimerPrescalerType ePrescaler)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_PRESCALER_MASK) |
                           PTIMER_STATUS_CTRL_PRESCALER(ePrescaler);
}

/**
 * @brief Set the trigger source of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param eTriggerSource the trigger source of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetTriggerSource(Gptptimer_Type *const pPtimer,Gpt_PtimerTrgSrcType eTriggerSource)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_TRGSEL_MASK) |
                           PTIMER_STATUS_CTRL_TRGSEL(eTriggerSource);
}

/**
 * @brief Enable the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_Enable(Gptptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL |= PTIMER_STATUS_CTRL_ENABLE_MASK;
}

/**
 * @brief Disable the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_Disable(Gptptimer_Type *const pPtimer)
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
LOCAL_INLINE boolean GPT_PTIMER_HWA_GetInterruptFlag(const Gptptimer_Type *const pPtimer)
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
LOCAL_INLINE void GPT_PTIMER_HWA_ClearInterruptFlag(Gptptimer_Type *const pPtimer)
{
    pPtimer->STATUS_CTRL &= ~PTIMER_STATUS_CTRL_INTFLAG_MASK;
}

/**
 * @brief Get whether delay interrupt is enabled and the interrupt flag is set for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 */
LOCAL_INLINE boolean GPT_PTIMER_HWA_GetInterruptEnableBitAndFlag(const Gptptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->STATUS_CTRL & (PTIMER_STATUS_CTRL_INTEN_MASK | PTIMER_STATUS_CTRL_INTFLAG_MASK));
    return (boolean)((u32TmpVal == (PTIMER_STATUS_CTRL_INTEN_MASK | PTIMER_STATUS_CTRL_INTFLAG_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Check Ptimer interrupt enable state
 *
 * @param pPtimer the base address of the Ptimer instance
 */
LOCAL_INLINE uint32 GPT_PTIMER_HWA_CheckIntEnableState(const Gptptimer_Type *const pPtimer)
{
    return (uint32)((pPtimer->STATUS_CTRL & (PTIMER_STATUS_CTRL_INTEN_MASK)) >> PTIMER_STATUS_CTRL_INTEN_SHIFT);
}

/**
 * @brief Set whether to enable delay interrupt for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bEnable whether to enable delay interrupt for the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetInterruptEnableFlag(Gptptimer_Type *const pPtimer,boolean bEnable)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_INTEN_MASK) |
                           PTIMER_STATUS_CTRL_INTEN(bEnable);
}

/**
 * @brief Set the multiply factor of the predivider of the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param eMultFactor the multiply factor of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetDivMultiply(
    Gptptimer_Type *const                   pPtimer,
    Gpt_PtimerMultiplicationType eMultFactor)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_MULT_MASK) |
                           PTIMER_STATUS_CTRL_MULT(eMultFactor);
}

/**
 * @brief Set whether to enable continuous mode for the Ptimer instance
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param bEnable whether to enable continuous mode for the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetContinuoiusModeFlag(Gptptimer_Type *const pPtimer,boolean bEnable)
{
    pPtimer->STATUS_CTRL = (pPtimer->STATUS_CTRL & ~PTIMER_STATUS_CTRL_CONT_MASK) |
                           PTIMER_STATUS_CTRL_CONT(bEnable);
}

/**
 * @brief Load the buffered values into register
 *
 * @note Some Ptimer registers are buffered and will only take effect after called
 * this function
 *
 * @param pPtimer the base address of the Ptimer instance
 */
LOCAL_INLINE void GPT_PTIMER_HWA_LoadValue(Gptptimer_Type *const pPtimer)
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
LOCAL_INLINE uint16 GPT_PTIMER_HWA_GetMaxCount(const Gptptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->MAX_CNT & PTIMER_MAX_CNT_MAX_CNT_MASK) >>
                       PTIMER_MAX_CNT_MAX_CNT_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set the Ptimer max counter period
 * When the Ptimer counter reaches the period, it will return to zero
 *
 * @note the period parameter is buffered and will take effect only after called GPT_PTIMER_LoadValue()
 * function.
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u16MaxCnt the Ptimer max count
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetMaxCount(Gptptimer_Type *const pPtimer, uint16 u16MaxCnt)
{
    pPtimer->MAX_CNT = PTIMER_MAX_CNT_MAX_CNT(u16MaxCnt);
}

/**
 * @brief Get the Ptimer current count value
 *
 * @param pPtimer the base address of the Ptimer instance
 * @return uint16 the Ptimer current count value
 */
LOCAL_INLINE uint16 GPT_PTIMER_HWA_GetCounterValue(const Gptptimer_Type *const pPtimer)
{
    uint32 u32TmpVal = (pPtimer->CNT & PTIMER_CNT_CNT_MASK) >> PTIMER_CNT_CNT_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set the ptimer interrupt period
 *
 * @param pPtimer the base address of the Ptimer instance
 * @param u16InterruptDelay the Ptimer interrupt period
 */
LOCAL_INLINE void GPT_PTIMER_HWA_SetInterruptDelay(Gptptimer_Type *const pPtimer,uint16 u16InterruptDelay)
{
    pPtimer->INT_DLY = PTIMER_INT_DLY_INT_DLY(u16InterruptDelay);
}

#ifdef __cplusplus
}
#endif

#endif /* GPT_PTIMER_REGOPS_H */

/** @} */
