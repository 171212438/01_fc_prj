/**
 *   @file    Ocu_Tpu_E_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - hardware specific type definition
 *   @details This file contains the Ocu Autosar hardware specific type definition
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TPU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add
                                                         Tpu support(only available on FC7240)
==================================================================================================*/

#ifndef OCU_TPU_E_REGOPS_H
#define OCU_TPU_E_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ocu_Tpu_Types.h"
#include "Tpu_E_Reg.h"
#if (OCU_HAVE_TPU == STD_ON)
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
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/**
 * @brief Set TCRCLK signal Filter Control.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetTCRClkFilter(TPU_E_Type *const pTPUE, uint32 u32Mode)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCRCF_MASK) | TPU_E_TBR_CR_TCRCF(u32Mode);
}

/**
 * @brief Set channel digital filter control
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetFilterCtrl(TPU_E_Type *const pTPUE, uint32 u32Ctrl)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_CDFC_MASK) | TPU_E_GCR_CR_CDFC(u32Ctrl);
}

/**
 * @brief Set filter clock source
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetFilterClkSrc(TPU_E_Type *const pTPUE, uint8 eClkSrc)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_FCSS_MASK) | TPU_E_GCR_CR_FCSS(eClkSrc);
}

/**
 * @brief Get filter prescaler clock control
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetFilterPrescaler(TPU_E_Type *const pTPUE, uint8 ePrescaler)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_FPSCK_MASK) | TPU_E_GCR_CR_FPSCK(ePrescaler);
}

/**
 * @brief Set TCR1 clock control.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetTCR1ClkControl(TPU_E_Type *const pTPUE, Ocu_TpuClkSrcType eMode)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCR1CTL_MASK) | TPU_E_TBR_CR_TCR1CTL(eMode);
}

/**
 * @brief Get TCR1 prescaler.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetTCR1Prescaler(TPU_E_Type *const pTPUE, uint32 u32Prescaler)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCR1P_MASK) | TPU_E_TBR_CR_TCR1P(u32Prescaler);
}

/**
 * @brief Enable halt in Stop mode
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetHalt(TPU_E_Type *const pTPUE, uint32 u32Halt)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_HALT_MASK) | TPU_E_GCR_CR_HALT(u32Halt);
}

/**
 * @brief Get the maximum value of TCR1 counter in TCR1 updown mode.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetTCR1MaxCnt(TPU_E_Type *const pTPUE, uint32 u32MaxCnt)
{
    pTPUE->TBR_T1MR = (pTPUE->TBR_T1MR & ~TPU_E_TBR_T1MR_MAX_MASK) | TPU_E_TBR_T1MR_MAX(u32MaxCnt);
}

/**
 * @brief Get TCR1 IRQ enable flag.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_EnableTCR1OVFIRQ(TPU_E_Type *const pTPUE, boolean bEn)
{
    pTPUE->TBR_T1MR = (pTPUE->TBR_T1MR & ~TPU_E_TBR_T1MR_IRQ_EN_MASK) | TPU_E_TBR_T1MR_IRQ_EN(bEn);
}

/**
 * @brief Clear TCR1 overflow flag.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_ClearTCR1Overflow(TPU_E_Type *const pTPUE)
{
    pTPUE->TBR_T1MR = (pTPUE->TBR_T1MR | TPU_E_TBR_T1MR_OVF_MASK);
}

/**
 * @brief Set User Defined Channel Mode.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_EnableMatch(TPU_E_Type *const pTPUE, uint8 u8Channel, boolean bEn)
{
    pTPUE->CH[u8Channel].ER1 = (pTPUE->CH[u8Channel].ER1 & ~TPU_E_CHn_ER1_MEF_MASK) |
                               TPU_E_CHn_ER1_MEF(bEn);
}

/**
 * @brief Enable channel event triggered interrupt.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_EnableChEventInt(TPU_E_Type *const pTPUE, uint8 u8Channel, boolean bEn)
{
    pTPUE->CH[u8Channel].CR = (pTPUE->CH[u8Channel].CR & ~TPU_E_CHn_CR_CIE_MASK) |
                              TPU_E_CHn_CR_CIE(bEn);
}

/**
 * @brief Clear Match1 Configuration Enable.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_ClearMatch1CFGFlg(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ECR = TPU_E_CHn_ECR_MRE1_CLR_MASK;
}

/**
 * @brief Clear Match1 event Enable.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_ClearMatch1Event(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ECR = TPU_E_CHn_ECR_MRL1_CLR_MASK;
}

/**
 * @brief Clear transition detect1 Enable.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_ClearTransDetect1Event(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ECR = TPU_E_CHn_ECR_TDL1_CLR_MASK;
}

/**
 * @brief Clear Match2 Configuration Enable.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_ClearMatch2CFGFlg(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ECR = TPU_E_CHn_ECR_MRE2_CLR_MASK;
}

/**
 * @brief Clear transition detect2 Enable.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_ClearTransDetect2Event(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ECR = TPU_E_CHn_ECR_TDL2_CLR_MASK;
}

/**
 * @brief Set channel Filter Bypass
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_OpenChFilter(TPU_E_Type *const pTPUE, uint8 u8Channel, boolean bEn)
{
    pTPUE->CH[u8Channel].CR = (pTPUE->CH[u8Channel].CR & ~TPU_E_CHn_CR_CFB_MASK) |
                              TPU_E_CHn_CR_CFB(bEn);
}

/**
 * @brief Set Predefined Channel Mode.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetPDCM(TPU_E_Type *const       pTPUE,
                                        uint8                   u8Channel,
                                        OCU_TPUE_PDCMEncodeType eMode)
{
    pTPUE->CH[u8Channel].MR = (pTPUE->CH[u8Channel].MR & ~TPU_E_CHn_MR_PDCM_MASK) |
                              TPU_E_CHn_MR_PDCM(eMode) | TPU_E_CHn_MR_PDME_MASK;
}

/**
 * @brief Clear output user control.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetOutputSelHigh(TPU_E_Type *const pTPUE, uint8 u8Channel, boolean bEn)
{
    uint32 u32TmpVal;

    pTPUE->CH[u8Channel].OCR = TPU_E_CHn_OCR_OUT_HIS(bEn);

    u32TmpVal = (pTPUE->CH[u8Channel].CR & TPU_E_CHn_CR_CFB_MASK) >> TPU_E_CHn_CR_CFB_SHIFT;
    pTPUE->CH[u8Channel].CR = (pTPUE->CH[u8Channel].CR & ~TPU_E_CHn_CR_CFB_MASK) |
                              TPU_E_CHn_CR_CFB(1U);

    pTPUE->CH[u8Channel].OCR = TPU_E_CHn_OCR_OUT_HIS(bEn);

    pTPUE->CH[u8Channel].CR = u32TmpVal;
}

/**
 * @brief Set Input Pin Action Control of Part 1 .
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetIPAC1(TPU_E_Type *const pTPUE, uint8 u8Channel, uint8 eType)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_IPAC1_MASK) |
                               TPU_E_CHn_CR2_IPAC1(eType);
}

/**
 * @brief Set Input Pin Action Control of Part 2.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetIPAC2(TPU_E_Type *const pTPUE, uint8 u8Channel, uint8 eType)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_IPAC2_MASK) |
                               TPU_E_CHn_CR2_IPAC2(eType);
}

/**
 * @brief Set comparator selection for time base selection.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetChTBS1(TPU_E_Type *const             pTPUE,
                                          uint8                         u8Channel,
                                          OCU_TPUE_TimeBaseSelctionType eType)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_TBS1_MASK) |
                               TPU_E_CHn_CR2_TBS1(eType);
}

/**
 * @brief Set comparator selection for time base selection.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetChTBS2(TPU_E_Type *const             pTPUE,
                                          uint8                         u8Channel,
                                          OCU_TPUE_TimeBaseSelctionType eType)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_TBS2_MASK) |
                               TPU_E_CHn_CR2_TBS2(eType);
}

/**
 * @brief Get Output Buffer Enable.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_EnableChOutputBuf(TPU_E_Type *const pTPUE,
                                                  uint8             u8Channel,
                                                  boolean           bEnable)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_OBE_MASK) |
                               TPU_E_CHn_CR2_OBE(bEnable);
}

/**
 * @brief Enable channel function is disabled or normal in Stop mode
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_TrigReset(TPU_E_Type *const pTPUE)
{
    pTPUE->GCR_SRR = 0xFC005AFEU;
}

/**
 * @brief Set ER1 value for match.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetMatchER1(TPU_E_Type *const pTPUE, uint8 u8Channel, uint32 u32ER1)
{
    uint32 u32Temp;
    u32Temp = (pTPUE->CH[u8Channel].ER1 & ~TPU_E_CHn_ER1_ERS_MASK) | TPU_E_CHn_ER1_ERS(1U);
    pTPUE->CH[u8Channel].ER1 = (u32Temp & ~TPU_E_CHn_ER1_ER1_MASK) | TPU_E_CHn_ER1_ER1(u32ER1) |
                               TPU_E_CHn_ER1_ERW_MASK;
}

/**
 * @brief Match Configuration Enable.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_EnableMatchConfiguration(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].ER1 = (pTPUE->CH[u8Channel].ER1 & ~TPU_E_CHn_ER1_ERW_MASK) |
                               TPU_E_CHn_ER1_ERW_MASK;
}

/**
 * @brief Set service request inhibit latch.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_EnableSrvReq(TPU_E_Type *const pTPUE, uint8 u8Channel, boolean bEn)
{
    if (bEn == TRUE)
    {
        pTPUE->CH[u8Channel].MR = (pTPUE->CH[u8Channel].MR & ~TPU_E_CHn_MR_SRI_MASK) |
                                  TPU_E_CHn_MR_SRIE_MASK;
    }
    else
    {
        pTPUE->CH[u8Channel].MR = (pTPUE->CH[u8Channel].MR | TPU_E_CHn_MR_SRI_MASK) |
                                  TPU_E_CHn_MR_SRIE_MASK;
    }
}

/**
 * @brief Get TCR1 cnt value.
 *
 */
LOCAL_INLINE uint32 OCU_TPU_E_HWA_GetTCR1CntVal(const TPU_E_Type *const pTPUE)
{
    return pTPUE->TBR_T1R;
}

/**
 * @brief Get match recognition latch 1 enable status.
 *
 */
LOCAL_INLINE boolean OCU_TPU_E_HWA_GetChMatchRecLatch1Status(const TPU_E_Type *const pTPUE,
                                                             uint8                   u8Channel)
{
    uint32 u32TmpVal;

    u32TmpVal = (pTPUE->CH[u8Channel].EFR & TPU_E_CHn_EFR_MRL1_MASK) >> TPU_E_CHn_EFR_MRL1_SHIFT;
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type.
     * Reason: The conversion from _bool to unsigned char is safety */
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
    /* PRQA S 4304 -- */
}

/**
 * @brief Clear channel interrupt by event.
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_ClearChEventISRFlg(TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    pTPUE->CH[u8Channel].SCR = TPU_E_CHn_SCR_CISC_MASK;
}

/**
 * @brief Get ER1 value.
 *
 */
LOCAL_INLINE uint32 OCU_TPU_E_HWA_GetER1Val(const TPU_E_Type *const pTPUE, uint8 u8Channel)
{
    uint32 u32TmpVal;

    u32TmpVal = (pTPUE->CH[u8Channel].ER1 & TPU_E_CHn_ER1_ER1_MASK) >> TPU_E_CHn_ER1_ER1_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Set Input Pin Action Control of Part 2 .
 *
 */
LOCAL_INLINE void OCU_TPU_E_HWA_SetOPAC1(TPU_E_Type *const pTPUE,
                                         uint8             u8Channel,
                                         OCU_TPUE_OPACType eType)
{
    pTPUE->CH[u8Channel].CR2 = (pTPUE->CH[u8Channel].CR2 & ~TPU_E_CHn_CR2_OPAC1_MASK) |
                               TPU_E_CHn_CR2_OPAC1(eType);
}

/**
 * @brief Get channel event trigger interrupt status.
 *
 */
LOCAL_INLINE boolean OCU_TPU_E_HWA_GetChEventInterruptFlagAndEnable(const TPU_E_Type *const pTPUE,
                                                                    uint8 u8Channel)
{
    return (boolean)(((pTPUE->CH[u8Channel].CR & TPU_E_CHn_CR_CIE_MASK) == TPU_E_CHn_CR_CIE_MASK) &&
                     ((pTPUE->CH[u8Channel].SR & TPU_E_CHn_SR_CIS_MASK) == TPU_E_CHn_SR_CIS_MASK));
}

#endif

#ifdef __cplusplus
}
#endif

#endif /* OCU_TPU_E_REGOPS_H */
/** @} */
