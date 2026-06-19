/**
 *   @file    Gpt_Tpu_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt -  Gpt header file.
 *   @details GPT low level driver API.
 *
 *   @addtogroup GPT_Tpu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : GPT_TPU
*   PLATFORM             : Flagchip FC7300
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
*   0.7.0       26/04/2024    QXW0074       N/A          Gpt_Tpu Initial version
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/

#ifndef GPT_TPU_REGOPS_H
#define GPT_TPU_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C"
{
#endif
/**=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Tpu_E_Reg.h"
#include "Tpu_H_Reg.h"
#include "Gpt_Tpu.h"
#include "Gpt_Tpu_Types.h"

#if defined(GPT_TPU_USED)
/*=================================================================================================
*                                          CONSTANTS
==================================================================================================*/
extern TPU_E_Type *const TPU_E_PTRS[];
/*=================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*=================================================================================================
*                                             ENUMS
==================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief Counter run/stop in Stop mode
 *
 * @param pTPUE TPU instance
 * @param u8Halt halt state
 */
LOCAL_INLINE void TPU_E_HWA_SetCounterHalt(TPU_E_Type *const pTPUE, uint8 u8Halt)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_HALT_TB_MASK) | TPU_E_GCR_CR_HALT_TB(u8Halt);
}

/**
 * @brief Set channel digital filter control
 *
 * @param pTPUE TPU instance
 * @param u32Ctrl digital filter
 */
LOCAL_INLINE void TPU_E_HWA_SetFilterCtrl(TPU_E_Type *const pTPUE, uint32 u32Ctrl)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_CDFC_MASK) | TPU_E_GCR_CR_CDFC(u32Ctrl);
}

/**
 * @brief Set filter clock source
 *
 * @param pTPUE TPU instance
 * @param u8ClkSrc filter clock source
 */
LOCAL_INLINE void TPU_E_HWA_SetFilterClkSrc(TPU_E_Type *const pTPUE, uint8 u8ClkSrc)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_FCSS_MASK) | TPU_E_GCR_CR_FCSS(u8ClkSrc);
}

/**
 * @brief Set filter prescaler clock control
 *
 * @param pTPUE TPU instance
 * @param u8Prescaler filter prescaler clock
 */
LOCAL_INLINE void TPU_E_HWA_SetFilterPrescaler(TPU_E_Type *const pTPUE, uint8 u8Prescaler)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_FPSCK_MASK) | TPU_E_GCR_CR_FPSCK(u8Prescaler);
}

/**
 * @brief Set TCR1 prescaler.
 *
 * @param pTPUE TPU instance
 * @param u32Prescaler TCR1 prescaler
 */
LOCAL_INLINE void TPU_E_HWA_SetTCR1Prescaler(TPU_E_Type *const pTPUE, uint32 u32Prescaler)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCR1P_MASK) | TPU_E_TBR_CR_TCR1P(u32Prescaler);
}

/**
 * @brief Set TCR1 clock control.
 *
 * @param pTPUE TPU instance
 * @param eTpuClkSrc TCR1 clock source
 */
LOCAL_INLINE void TPU_E_HWA_SetTCR1ClkControl(TPU_E_Type *const      pTPUE,
                                              Gpt_TpuClockSourceType eTpuClkSrc)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCR1CTL_MASK) | TPU_E_TBR_CR_TCR1CTL(eTpuClkSrc);
}

/**
 * @brief Set TCRCLK signal Filter Control.
 *
 * @param pTPUE TPU instance
 * @param u32Mode TCRCLK signal Filter mode
 */
LOCAL_INLINE void TPU_E_HWA_SetTCRCLKFilter(TPU_E_Type *const pTPUE, uint32 u32Mode)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCRCF_MASK) | TPU_E_TBR_CR_TCRCF(u32Mode);
}

/**
 * @brief Get TCR1 counter value
 *
 * @param pTPUE TPU instance
 * @return uint32 TCR1 counter value
 */
LOCAL_INLINE uint32 TPU_E_HWA_GetTCR1CounterValue(TPU_E_Type *const pTPUE)
{
    return (uint32)pTPUE->TBR_T1R;
}

/**
 * @brief Enable channel event triggered interrupt.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_EnableChEventInt(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].CR |= TPU_E_CHn_CR_CIE_MASK;
}

/**
 * @brief Disable channel event triggered interrupt.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_DisableChEventInt(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].CR &= ~TPU_E_CHn_CR_CIE_MASK;
}

/**
 * @brief Set channel Filter Bypass
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * @param u32Filter Filter bypass or not
 */
LOCAL_INLINE void TPU_E_HWA_SetChFilter(TPU_E_Type *const pTPUE, uint8 u8Channel, uint32 u32Filter)
{
    pTPUE->CH[u8Channel].CR = (pTPUE->CH[u8Channel].CR & ~TPU_E_CHn_CR_CFB_MASK) |
                              TPU_E_CHn_CR_CFB(u32Filter);
}

/**
 * @brief Check TPU channel event interrupt flag and interrupt enable.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * return boolean If channel event interrupt flag exist and event interrupt enable ,return TRUE,
 * else return FALSE
 */
LOCAL_INLINE boolean TPU_E_HWA_ReadEventInterruptFlagAndEnable(const TPU_E_Type *const pTPUE,
                                                               uint8                   u8Channel)
{
    return (boolean)(((pTPUE->CH[u8Channel].CR & TPU_E_CHn_CR_CIE_MASK) == TPU_E_CHn_CR_CIE_MASK) &&
                     ((pTPUE->CH[u8Channel].SR & TPU_E_CHn_SR_CIS_MASK) == TPU_E_CHn_SR_CIS_MASK));
}

/**
 * @brief Get match recognition latch 1 status.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * @return boolean  channel match recognition latch flag
 */
LOCAL_INLINE boolean TPU_E_HWA_GetChMatchRecLatch1Status(const TPU_E_Type *const pTPUE,
                                                         uint8                   u8Channel)
{
    uint32 u32TmpVal;

    u32TmpVal = (pTPUE->CH[u8Channel].EFR & TPU_E_CHn_EFR_MRL1_MASK) >> TPU_E_CHn_EFR_MRL1_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear interrupt status which trigger by channel event
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_ClearChEventISRFlg(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].SCR = TPU_E_CHn_SCR_CISC_MASK;
}

/**
 * @brief Set comparator selection for time base selection Part 1.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * @param eSelect time base selection
 */
LOCAL_INLINE void TPU_E_HWA_SetChTBS1(TPU_E_Type *const           pTPUE,
                                      uint8                       u8Channel,
                                      Gpt_TpuTimeBaseSelctionType eSelect)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_TBS1_MASK) |
                               TPU_E_CHn_CR2_TBS1(eSelect);
}

/**
 * @brief Set comparator selection for time base selection Part 2.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * @param eSelect time base selection
 */
LOCAL_INLINE void TPU_E_HWA_SetChTBS2(TPU_E_Type *const           pTPUE,
                                      uint8                       u8Channel,
                                      Gpt_TpuTimeBaseSelctionType eSelect)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_TBS2_MASK) |
                               TPU_E_CHn_CR2_TBS2(eSelect);
}

/**
 * @brief Enable service request.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_EnableSrvReq(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].MR = (pTPUE->CH[u8Channel].MR & ~TPU_E_CHn_MR_SRI_MASK) |
                              TPU_E_CHn_MR_SRIE_MASK;
}

/**
 * @brief Disable service request.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_DisablervReq(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].MR = (pTPUE->CH[u8Channel].MR | TPU_E_CHn_MR_SRI_MASK) |
                              TPU_E_CHn_MR_SRIE_MASK;
}

/**
 * @brief Set Predefined Channel Mode.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * @param eMode predefined channel mode
 */
LOCAL_INLINE void TPU_E_HWA_SetPDCM(TPU_E_Type *const     pTPUE,
                                    uint8                 u8Channel,
                                    Gpt_TpuPDCMEncodeType eMode)
{
    pTPUE->CH[u8Channel].MR = (pTPUE->CH[u8Channel].MR & ~TPU_E_CHn_MR_PDCM_MASK) |
                              TPU_E_CHn_MR_PDCM(eMode) | TPU_E_CHn_MR_PDME_MASK;
}

/**
 * @brief Enable Match enable flag
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_EnableMatch(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ER1 = (pTPUE->CH[u8Channel].ER1 & ~TPU_E_CHn_ER1_MEF_MASK) |
                               TPU_E_CHn_ER1_MEF_MASK;
}

/**
 * @brief Disable Match enable flag
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_DisableMatch(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ER1 &= ~TPU_E_CHn_ER1_MEF_MASK;
}

/**
 * @brief Match for the value of ER1
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_SetMatchER1(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ER1 = (pTPUE->CH[u8Channel].ER1 & ~TPU_E_CHn_ER1_ERS_MASK) |
                               TPU_E_CHn_ER1_ERS_MASK;
}

/**
 * @brief Set ER1 Match value
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * @param u32value match value
 */
LOCAL_INLINE void TPU_E_HWA_SetER1MatchValue(TPU_E_Type *const pTPUE, uint8 u8Channel, uint32 u32value)
{
    pTPUE->CH[u8Channel].ER1 = (pTPUE->CH[u8Channel].ER1 & ~TPU_E_CHn_ER1_ER1_MASK) |
                               TPU_E_CHn_ER1_ER1(u32value) | TPU_E_CHn_ER1_ERW_MASK;
}

/**
 * @brief Get ER1 Match value
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 * @return uint32 ER1 match value
 */
LOCAL_INLINE uint32 TPU_E_HWA_GetER1MatchValue(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    uint32 u32TmpVal;
    u32TmpVal = (pTPUE->CH[u8Channel].ER1 & TPU_E_CHn_ER1_ER1_MASK) >> TPU_E_CHn_ER1_ER1_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Clear Match event.
 *
 * @param pTPUE TPU instance
 * @param u8Channel TPU channel number
 */
LOCAL_INLINE void TPU_E_HWA_ClearMatchEvent(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ECR = TPU_E_CHn_ECR_MRL1_CLR_MASK | TPU_E_CHn_ECR_MRL2_CLR_MASK;
}

#ifdef __cplusplus
}
#endif

#endif /*GPT_TPU_USED == STD_ON*/

#endif /* #ifndef GPT_TPU_REGOPS_H */
/** @} */
