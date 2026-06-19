/**
 *   @file    Icu_Cmp_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR ICU - module register and macro definitions.
 *   @details ICU module registers, and macro definitions used to manipulate the module registers.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Cmp
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
==================================================================================================*/
#ifndef CMP_REG_H
#define CMP_REG_H

#include "Std_Types.h"
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This type may not used by user */
typedef struct
{

    uint8 RESERVED_0[8];

    __IO uint32 CCR0; /* Comparator Control Register 0, offset: 0x8 */

    __IO uint32 CCR1; /* Comparator Control Register 1, offset: 0xC */

    __IO uint32 CCR2; /* Comparator Control Register 2, offset: 0x10 */

    uint8 RESERVED_1[4];

    __IO uint32 DCR; /* Comparator DAC Control Register, offset: 0x18 */

    __IO uint32 IER; /* Comparator Interrupt Enable Register, offset: 0x1C */

    __IO uint32 CSR; /* Comparator Status Register, offset: 0x20 */

} CMP_Type, *CMP_MemMapPtr;

/* PRQA S 1535 -- */

/** Number of instances of the CMP module. */

#define CMP_INSTANCE_COUNT       (3u)

/* CMP - Peripheral instance base addresses */

/** Peripheral CMP0 base address */

#define CMP0_BASE                (0x40040000u)

/** Peripheral CMP0 base pointer */

#define CMP0                     ((CMP_Type *)CMP0_BASE)

/** Peripheral CMP1 base address */

#define CMP1_BASE                (0x40041000u)

/** Peripheral CMP1 base pointer */

#define CMP1                     ((CMP_Type *)CMP1_BASE)

/** Peripheral CMP2 base address */

#define CMP2_BASE                (0x40042000u)

/** Peripheral CMP2 base pointer */

#define CMP2                     ((CMP_Type *)CMP2_BASE)

/** Array initializer of CMP peripheral base addresses */

#define CMP_BASE_ADDRS           { CMP0_BASE, CMP1_BASE, CMP2_BASE }

/** Array initializer of CMP peripheral base pointers */

#define CMP_BASE_PTRS            { CMP0, CMP1, CMP2 }

/* CCR0 Bit Fields */

#define CMP_CCR0_DACEN_SEL_MASK  0x4u

#define CMP_CCR0_DACEN_SEL_SHIFT 2u

#define CMP_CCR0_DACEN_SEL_WIDTH 1u

#define CMP_CCR0_DACEN_SEL(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR0_DACEN_SEL_SHIFT)) & CMP_CCR0_DACEN_SEL_MASK)

#define CMP_CCR0_STOP_EN_MASK  0x2u

#define CMP_CCR0_STOP_EN_SHIFT 1u

#define CMP_CCR0_STOP_EN_WIDTH 1u

#define CMP_CCR0_STOP_EN(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR0_STOP_EN_SHIFT)) & CMP_CCR0_STOP_EN_MASK)

#define CMP_CCR0_EN_MASK        0x1u

#define CMP_CCR0_EN_SHIFT       0u

#define CMP_CCR0_EN_WIDTH       1u

#define CMP_CCR0_EN(x)          (((uint32)(((uint32)(x)) << CMP_CCR0_EN_SHIFT)) & CMP_CCR0_EN_MASK)

/* CCR0 Reg Mask */

#define CMP_CCR0_MASK           0x00000007u

/* CCR1 Bit Fields */

#define CMP_CCR1_FILT_PER_MASK  0xFF000000u

#define CMP_CCR1_FILT_PER_SHIFT 24u

#define CMP_CCR1_FILT_PER_WIDTH 8u

#define CMP_CCR1_FILT_PER(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_FILT_PER_SHIFT)) & CMP_CCR1_FILT_PER_MASK)

#define CMP_CCR1_FILT_CNT_MASK  0x70000u

#define CMP_CCR1_FILT_CNT_SHIFT 16u

#define CMP_CCR1_FILT_CNT_WIDTH 3u

#define CMP_CCR1_FILT_CNT(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_FILT_CNT_SHIFT)) & CMP_CCR1_FILT_CNT_MASK)

#define CMP_CCR1_EVT_SEL_MASK  0xC00u

#define CMP_CCR1_EVT_SEL_SHIFT 10u

#define CMP_CCR1_EVT_SEL_WIDTH 2u

#define CMP_CCR1_EVT_SEL(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_EVT_SEL_SHIFT)) & CMP_CCR1_EVT_SEL_MASK)

#define CMP_CCR1_WIN_CLS_MASK  0x200u

#define CMP_CCR1_WIN_CLS_SHIFT 9u

#define CMP_CCR1_WIN_CLS_WIDTH 1u

#define CMP_CCR1_WIN_CLS(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_WIN_CLS_SHIFT)) & CMP_CCR1_WIN_CLS_MASK)

#define CMP_CCR1_WIN_INV_MASK  0x100u

#define CMP_CCR1_WIN_INV_SHIFT 8u

#define CMP_CCR1_WIN_INV_WIDTH 1u

#define CMP_CCR1_WIN_INV(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_WIN_INV_SHIFT)) & CMP_CCR1_WIN_INV_MASK)

#define CMP_CCR1_CMPOUT_WIN_OW_MASK  0x80u

#define CMP_CCR1_CMPOUT_WIN_OW_SHIFT 7u

#define CMP_CCR1_CMPOUT_WIN_OW_WIDTH 1u

#define CMP_CCR1_CMPOUT_WIN_OW(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_CMPOUT_WIN_OW_SHIFT)) & CMP_CCR1_CMPOUT_WIN_OW_MASK)

#define CMP_CCR1_CMPOUT_WIN_OWEN_MASK  0x40u

#define CMP_CCR1_CMPOUT_WIN_OWEN_SHIFT 6u

#define CMP_CCR1_CMPOUT_WIN_OWEN_WIDTH 1u

#define CMP_CCR1_CMPOUT_WIN_OWEN(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_CMPOUT_WIN_OWEN_SHIFT)) & CMP_CCR1_CMPOUT_WIN_OWEN_MASK)

#define CMP_CCR1_CMPOUT_PEN_MASK  0x20u

#define CMP_CCR1_CMPOUT_PEN_SHIFT 5u

#define CMP_CCR1_CMPOUT_PEN_WIDTH 1u

#define CMP_CCR1_CMPOUT_PEN(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_CMPOUT_PEN_SHIFT)) & CMP_CCR1_CMPOUT_PEN_MASK)

#define CMP_CCR1_CMPOUT_SEL_MASK  0x10u

#define CMP_CCR1_CMPOUT_SEL_SHIFT 4u

#define CMP_CCR1_CMPOUT_SEL_WIDTH 1u

#define CMP_CCR1_CMPOUT_SEL(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_CMPOUT_SEL_SHIFT)) & CMP_CCR1_CMPOUT_SEL_MASK)

#define CMP_CCR1_CMPOUT_INV_MASK  0x8u

#define CMP_CCR1_CMPOUT_INV_SHIFT 3u

#define CMP_CCR1_CMPOUT_INV_WIDTH 1u

#define CMP_CCR1_CMPOUT_INV(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_CMPOUT_INV_SHIFT)) & CMP_CCR1_CMPOUT_INV_MASK)

#define CMP_CCR1_DMA_EN_MASK  0x4u

#define CMP_CCR1_DMA_EN_SHIFT 2u

#define CMP_CCR1_DMA_EN_WIDTH 1u

#define CMP_CCR1_DMA_EN(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_DMA_EN_SHIFT)) & CMP_CCR1_DMA_EN_MASK)

#define CMP_CCR1_SAMPLE_EN_MASK  0x2u

#define CMP_CCR1_SAMPLE_EN_SHIFT 1u

#define CMP_CCR1_SAMPLE_EN_WIDTH 1u

#define CMP_CCR1_SAMPLE_EN(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_SAMPLE_EN_SHIFT)) & CMP_CCR1_SAMPLE_EN_MASK)

#define CMP_CCR1_WIN_EN_MASK  0x1u

#define CMP_CCR1_WIN_EN_SHIFT 0u

#define CMP_CCR1_WIN_EN_WIDTH 1u

#define CMP_CCR1_WIN_EN(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR1_WIN_EN_SHIFT)) & CMP_CCR1_WIN_EN_MASK)

/* CCR1 Reg Mask */

#define CMP_CCR1_MASK         0xFF070FFFu

/* CCR2 Bit Fields */

#define CMP_CCR2_INMSEL_MASK  0x30000000u

#define CMP_CCR2_INMSEL_SHIFT 28u

#define CMP_CCR2_INMSEL_WIDTH 2u

#define CMP_CCR2_INMSEL(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR2_INMSEL_SHIFT)) & CMP_CCR2_INMSEL_MASK)

#define CMP_CCR2_INPSEL_MASK  0x3000000u

#define CMP_CCR2_INPSEL_SHIFT 24u

#define CMP_CCR2_INPSEL_WIDTH 2u

#define CMP_CCR2_INPSEL(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR2_INPSEL_SHIFT)) & CMP_CCR2_INPSEL_MASK)

#define CMP_CCR2_MSEL_MASK     0x700000u

#define CMP_CCR2_MSEL_SHIFT    20u

#define CMP_CCR2_MSEL_WIDTH    3u

#define CMP_CCR2_MSEL(x)       (((uint32)(((uint32)(x)) << CMP_CCR2_MSEL_SHIFT)) & CMP_CCR2_MSEL_MASK)

#define CMP_CCR2_PSEL_MASK     0x70000u

#define CMP_CCR2_PSEL_SHIFT    16u

#define CMP_CCR2_PSEL_WIDTH    3u

#define CMP_CCR2_PSEL(x)       (((uint32)(((uint32)(x)) << CMP_CCR2_PSEL_SHIFT)) & CMP_CCR2_PSEL_MASK)

#define CMP_CCR2_HYSTCTR_MASK  0x30u

#define CMP_CCR2_HYSTCTR_SHIFT 4u

#define CMP_CCR2_HYSTCTR_WIDTH 2u

#define CMP_CCR2_HYSTCTR(x) \
    (((uint32)(((uint32)(x)) << CMP_CCR2_HYSTCTR_SHIFT)) & CMP_CCR2_HYSTCTR_MASK)

#define CMP_CCR2_HPMD_MASK     0x1u

#define CMP_CCR2_HPMD_SHIFT    0u

#define CMP_CCR2_HPMD_WIDTH    1u

#define CMP_CCR2_HPMD(x)       (((uint32)(((uint32)(x)) << CMP_CCR2_HPMD_SHIFT)) & CMP_CCR2_HPMD_MASK)

/* CCR2 Reg Mask */

#define CMP_CCR2_MASK          0x33770031u

/* DCR Bit Fields */

#define CMP_DCR_DAC_DATA_MASK  0xFF0000u

#define CMP_DCR_DAC_DATA_SHIFT 16u

#define CMP_DCR_DAC_DATA_WIDTH 8u

#define CMP_DCR_DAC_DATA(x) \
    (((uint32)(((uint32)(x)) << CMP_DCR_DAC_DATA_SHIFT)) & CMP_DCR_DAC_DATA_MASK)

#define CMP_DCR_VRSEL_MASK          0x100u

#define CMP_DCR_VRSEL_SHIFT         8u

#define CMP_DCR_VRSEL_WIDTH         1u

#define CMP_DCR_VRSEL(x)            (((uint32)(((uint32)(x)) << CMP_DCR_VRSEL_SHIFT)) & CMP_DCR_VRSEL_MASK)

#define CMP_DCR_DAC_EN_MASK         0x1u

#define CMP_DCR_DAC_EN_SHIFT        0u

#define CMP_DCR_DAC_EN_WIDTH        1u

#define CMP_DCR_DAC_EN(x)           (((uint32)(((uint32)(x)) << CMP_DCR_DAC_EN_SHIFT)) & CMP_DCR_DAC_EN_MASK)

/* DCR Reg Mask */

#define CMP_DCR_MASK                0x00FF0101u

/* IER Bit Fields */

#define CMP_IER_CFF_IE_MASK         0x2u

#define CMP_IER_CFF_IE_SHIFT        1u

#define CMP_IER_CFF_IE_WIDTH        1u

#define CMP_IER_CFF_IE(x)           (((uint32)(((uint32)(x)) << CMP_IER_CFF_IE_SHIFT)) & CMP_IER_CFF_IE_MASK)

#define CMP_IER_CFR_IE_MASK         0x1u

#define CMP_IER_CFR_IE_SHIFT        0u

#define CMP_IER_CFR_IE_WIDTH        1u

#define CMP_IER_CFR_IE(x)           (((uint32)(((uint32)(x)) << CMP_IER_CFR_IE_SHIFT)) & CMP_IER_CFR_IE_MASK)

/* IER Reg Mask */

#define CMP_IER_MASK                0x00000003u

/* CSR Bit Fields */

#define CMP_CSR_CMPOUT_FILTER_MASK  0x100u

#define CMP_CSR_CMPOUT_FILTER_SHIFT 8u

#define CMP_CSR_CMPOUT_FILTER_WIDTH 1u

#define CMP_CSR_CMPOUT_FILTER(x) \
    (((uint32)(((uint32)(x)) << CMP_CSR_CMPOUT_FILTER_SHIFT)) & CMP_CSR_CMPOUT_FILTER_MASK)

#define CMP_CSR_CFF_MASK  0x2u

#define CMP_CSR_CFF_SHIFT 1u

#define CMP_CSR_CFF_WIDTH 1u

#define CMP_CSR_CFF(x)    (((uint32)(((uint32)(x)) << CMP_CSR_CFF_SHIFT)) & CMP_CSR_CFF_MASK)

#define CMP_CSR_CFR_MASK  0x1u

#define CMP_CSR_CFR_SHIFT 0u

#define CMP_CSR_CFR_WIDTH 1u

#define CMP_CSR_CFR(x)    (((uint32)(((uint32)(x)) << CMP_CSR_CFR_SHIFT)) & CMP_CSR_CFR_MASK)

/* CSR Reg Mask */

#define CMP_CSR_MASK      0x00000103u

#endif /* CMP_REG_H */
/** @} */
