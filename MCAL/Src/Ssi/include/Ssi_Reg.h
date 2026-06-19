/**
 *   @file    Ssi_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ssi - Ssi driver register layer header file.
 *   @details SSI driver register layer header file.
 *
 *   @addtogroup SSI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SSI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2025-2027 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       2025/03/18    Flagchip054   N/A           SSI Initial Version
==================================================================================================*/

#ifndef SSI_REGS_H
#define SSI_REGS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "Std_Types.h"
#include "Common_Cfg.h"

/* ----------------------------------------------------------------------------
   -- SSI Peripheral Access Layer
   ---------------------------------------------------------------------------- */
#define SSI_SUBINS_COUNT 4
/*!
 * @addtogroup SSI_Peripheral_Access_Layer SSI Peripheral Access Layer
 * @{
 */

/** SSI - Size of Registers Arrays */

/** SSI - Register Layout Typedef */

typedef struct
{

    __IO uint32 GCR; /* Global Control Register, offset: 0x0 */
    __IO uint32 GSR; /* Global Status Register, offset: 0x4 */
    uint8       RESERVED_0[8];
    __IO uint32 GCWLR; /* Global Counter Windows Low Register, offset: 0x10 */
    __IO uint32 GCWHR; /* Global Counter Windows High Register, offset: 0x14 */
    uint8       RESERVED_1[8];
    __IO uint32 GPCR; /* Global Protocol Configuration Register, offset: 0x20 */
    uint8       RESERVED_2[220];

    struct
    {
        __IO uint32 ICR;   /* SSI Instance Control Register, offset: 0x100 */
        __IO uint32 IFR;   /* SSI Instance Filter Register, offset: 0x104 */
        __IO uint32 INTCR; /* Interrupt Configuration Register, offset: 0x108 */
        uint8       RESERVED_3[4];
        __I uint32  SPCR;  /* Sensor Protocol Counter Register, offset: 0x110 */
        __I uint32  HPCR;  /* High Pulse Counter Register, offset: 0x114 */
        __I uint32  AKPR;  /* AK Protocol Register, offset: 0x118 */
        __I uint32  PWMPR; /* PWM Protocol Register, offset: 0x11c */
        __IO uint32 ISR;   /* SSI Instance Status Register, offset: 0x120 */
        uint8       RESERVED_4[216];
        __IO uint32 TCR; /* Test Configuration Register, offset: 0x1fc */
    } SUB_INS[SSI_SUBINS_COUNT];
} SSI_Type, *SSI_MemMapPtr;

/** Number of instances of the MAM module. */
#define SSI_INSTANCE_COUNT     (1u)

/* FCUART - Peripheral instance base addresses */
/** Peripheral FCUART0 base address */
#define SSI0_BASE              (0x40443000u)
/** Peripheral FCUART0 base pointer */
#define SSI0                   ((SSI_Type *)SSI0_BASE)

/** Array initializer of FCUART peripheral base addresses */
#define SSI_BASE_ADDRS         { SSI0_BASE }
/** Array initializer of FCUART peripheral base pointers */
#define SSI_BASE_PTRS          { SSI0 }

/* ----------------------------------------------------------------------------
   -- SSI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SSI_Register_Masks SSI Register Masks
 * @{
 */

/* GCR Bit Fields */
#define SSI_GCR_FUNC_DIV_MASK  0x3F0000u
#define SSI_GCR_FUNC_DIV_SHIFT 16u
#define SSI_GCR_FUNC_DIV_WIDTH 6u
#define SSI_GCR_FUNC_DIV(x) \
    (((uint32)(((uint32)(x)) << SSI_GCR_FUNC_DIV_SHIFT)) & SSI_GCR_FUNC_DIV_MASK)
#define SSI_GCR_FUNC_EN_MASK  0x1u
#define SSI_GCR_FUNC_EN_SHIFT 0u
#define SSI_GCR_FUNC_EN_WIDTH 1u
#define SSI_GCR_FUNC_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_GCR_FUNC_EN_SHIFT)) & SSI_GCR_FUNC_EN_MASK)
/* GCR Reg Mask */
#define SSI_GCR_MASK           0x003F0001u

/* GSR Bit Fields */
#define SSI_GSR_PROT_ERR_MASK  0xF0000000u
#define SSI_GSR_PROT_ERR_SHIFT 28u
#define SSI_GSR_PROT_ERR_WIDTH 4u
#define SSI_GSR_PROT_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_PROT_ERR_SHIFT)) & SSI_GSR_PROT_ERR_MASK)
#define SSI_GSR_PULSE_WIDTH_ERR_MASK  0xF000000u
#define SSI_GSR_PULSE_WIDTH_ERR_SHIFT 24u
#define SSI_GSR_PULSE_WIDTH_ERR_WIDTH 4u
#define SSI_GSR_PULSE_WIDTH_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_PULSE_WIDTH_ERR_SHIFT)) & SSI_GSR_PULSE_WIDTH_ERR_MASK)
#define SSI_GSR_INTERVAL_ERR_MASK  0xF00000u
#define SSI_GSR_INTERVAL_ERR_SHIFT 20u
#define SSI_GSR_INTERVAL_ERR_WIDTH 4u
#define SSI_GSR_INTERVAL_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_INTERVAL_ERR_SHIFT)) & SSI_GSR_INTERVAL_ERR_MASK)
#define SSI_GSR_DECODE_ERR_MASK  0xF0000u
#define SSI_GSR_DECODE_ERR_SHIFT 16u
#define SSI_GSR_DECODE_ERR_WIDTH 4u
#define SSI_GSR_DECODE_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_DECODE_ERR_SHIFT)) & SSI_GSR_DECODE_ERR_MASK)
#define SSI_GSR_SPC_RANGE_ERR_MASK  0xF000u
#define SSI_GSR_SPC_RANGE_ERR_SHIFT 12u
#define SSI_GSR_SPC_RANGE_ERR_WIDTH 4u
#define SSI_GSR_SPC_RANGE_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_SPC_RANGE_ERR_SHIFT)) & SSI_GSR_SPC_RANGE_ERR_MASK)
#define SSI_GSR_SPC_TIMEOUT_MASK  0xF00u
#define SSI_GSR_SPC_TIMEOUT_SHIFT 8u
#define SSI_GSR_SPC_TIMEOUT_WIDTH 4u
#define SSI_GSR_SPC_TIMEOUT(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_SPC_TIMEOUT_SHIFT)) & SSI_GSR_SPC_TIMEOUT_MASK)
#define SSI_GSR_WHL_STOP_MASK  0xF0u
#define SSI_GSR_WHL_STOP_SHIFT 4u
#define SSI_GSR_WHL_STOP_WIDTH 4u
#define SSI_GSR_WHL_STOP(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_WHL_STOP_SHIFT)) & SSI_GSR_WHL_STOP_MASK)
#define SSI_GSR_SPC_VLD_MASK  0xFu
#define SSI_GSR_SPC_VLD_SHIFT 0u
#define SSI_GSR_SPC_VLD_WIDTH 4u
#define SSI_GSR_SPC_VLD(x) \
    (((uint32)(((uint32)(x)) << SSI_GSR_SPC_VLD_SHIFT)) & SSI_GSR_SPC_VLD_MASK)
/* GSR Reg Mask */
#define SSI_GSR_MASK          0xFFFFFFFFu

/* GCWLR Bit Fields */
#define SSI_GCWLR_WIN_L_MASK  0xFFFFFFu
#define SSI_GCWLR_WIN_L_SHIFT 0u
#define SSI_GCWLR_WIN_L_WIDTH 24u
#define SSI_GCWLR_WIN_L(x) \
    (((uint32)(((uint32)(x)) << SSI_GCWLR_WIN_L_SHIFT)) & SSI_GCWLR_WIN_L_MASK)
/* GCWLR Reg Mask */
#define SSI_GCWLR_MASK        0x00FFFFFFu

/* GCWHR Bit Fields */
#define SSI_GCWHR_WIN_H_MASK  0xFFFFFFu
#define SSI_GCWHR_WIN_H_SHIFT 0u
#define SSI_GCWHR_WIN_H_WIDTH 24u
#define SSI_GCWHR_WIN_H(x) \
    (((uint32)(((uint32)(x)) << SSI_GCWHR_WIN_H_SHIFT)) & SSI_GCWHR_WIN_H_MASK)
/* GCWHR Reg Mask */
#define SSI_GCWHR_MASK         0x00FFFFFFu

/* GPCR Bit Fields */
#define SSI_GPCR_AK_IETH_MASK  0x8000u
#define SSI_GPCR_AK_IETH_SHIFT 15u
#define SSI_GPCR_AK_IETH_WIDTH 1u
#define SSI_GPCR_AK_IETH(x) \
    (((uint32)(((uint32)(x)) << SSI_GPCR_AK_IETH_SHIFT)) & SSI_GPCR_AK_IETH_MASK)
#define SSI_GPCR_AK_PETH_MASK  0x4000u
#define SSI_GPCR_AK_PETH_SHIFT 14u
#define SSI_GPCR_AK_PETH_WIDTH 1u
#define SSI_GPCR_AK_PETH(x) \
    (((uint32)(((uint32)(x)) << SSI_GPCR_AK_PETH_SHIFT)) & SSI_GPCR_AK_PETH_MASK)
#define SSI_GPCR_PWM_PETH_MASK  0x2000u
#define SSI_GPCR_PWM_PETH_SHIFT 13u
#define SSI_GPCR_PWM_PETH_WIDTH 1u
#define SSI_GPCR_PWM_PETH(x) \
    (((uint32)(((uint32)(x)) << SSI_GPCR_PWM_PETH_SHIFT)) & SSI_GPCR_PWM_PETH_MASK)
#define SSI_GPCR_REF_WIDTH_MASK  0xFFu
#define SSI_GPCR_REF_WIDTH_SHIFT 0u
#define SSI_GPCR_REF_WIDTH_WIDTH 8u
#define SSI_GPCR_REF_WIDTH(x) \
    (((uint32)(((uint32)(x)) << SSI_GPCR_REF_WIDTH_SHIFT)) & SSI_GPCR_REF_WIDTH_MASK)
/* GPCR Reg Mask */
#define SSI_GPCR_MASK          0x0000E0FFu

/* ICR Bit Fields */
#define SSI_ICR_GPWM_TOC_MASK  0xFF0000u
#define SSI_ICR_GPWM_TOC_SHIFT 16u
#define SSI_ICR_GPWM_TOC_WIDTH 8u
#define SSI_ICR_GPWM_TOC(x) \
    (((uint32)(((uint32)(x)) << SSI_ICR_GPWM_TOC_SHIFT)) & SSI_ICR_GPWM_TOC_MASK)
#define SSI_ICR_GPWM_INV_MASK  0x1000u
#define SSI_ICR_GPWM_INV_SHIFT 12u
#define SSI_ICR_GPWM_INV_WIDTH 1u
#define SSI_ICR_GPWM_INV(x) \
    (((uint32)(((uint32)(x)) << SSI_ICR_GPWM_INV_SHIFT)) & SSI_ICR_GPWM_INV_MASK)
#define SSI_ICR_RES_SEL_MASK  0x200u
#define SSI_ICR_RES_SEL_SHIFT 9u
#define SSI_ICR_RES_SEL_WIDTH 1u
#define SSI_ICR_RES_SEL(x) \
    (((uint32)(((uint32)(x)) << SSI_ICR_RES_SEL_SHIFT)) & SSI_ICR_RES_SEL_MASK)
#define SSI_ICR_CMP_EN_MASK    0x100u
#define SSI_ICR_CMP_EN_SHIFT   8u
#define SSI_ICR_CMP_EN_WIDTH   1u
#define SSI_ICR_CMP_EN(x)      (((uint32)(((uint32)(x)) << SSI_ICR_CMP_EN_SHIFT)) & SSI_ICR_CMP_EN_MASK)
#define SSI_ICR_PROT_SEL_MASK  0xC0u
#define SSI_ICR_PROT_SEL_SHIFT 6u
#define SSI_ICR_PROT_SEL_WIDTH 2u
#define SSI_ICR_PROT_SEL(x) \
    (((uint32)(((uint32)(x)) << SSI_ICR_PROT_SEL_SHIFT)) & SSI_ICR_PROT_SEL_MASK)
#define SSI_ICR_CHL_SEL_MASK  0x30u
#define SSI_ICR_CHL_SEL_SHIFT 4u
#define SSI_ICR_CHL_SEL_WIDTH 2u
#define SSI_ICR_CHL_SEL(x) \
    (((uint32)(((uint32)(x)) << SSI_ICR_CHL_SEL_SHIFT)) & SSI_ICR_CHL_SEL_MASK)
#define SSI_ICR_RANG_CHK_EN_MASK  0x4u
#define SSI_ICR_RANG_CHK_EN_SHIFT 2u
#define SSI_ICR_RANG_CHK_EN_WIDTH 1u
#define SSI_ICR_RANG_CHK_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_ICR_RANG_CHK_EN_SHIFT)) & SSI_ICR_RANG_CHK_EN_MASK)
#define SSI_ICR_CHL_SW_MASK     0x2u
#define SSI_ICR_CHL_SW_SHIFT    1u
#define SSI_ICR_CHL_SW_WIDTH    1u
#define SSI_ICR_CHL_SW(x)       (((uint32)(((uint32)(x)) << SSI_ICR_CHL_SW_SHIFT)) & SSI_ICR_CHL_SW_MASK)
#define SSI_ICR_SSI_EN_MASK     0x1u
#define SSI_ICR_SSI_EN_SHIFT    0u
#define SSI_ICR_SSI_EN_WIDTH    1u
#define SSI_ICR_SSI_EN(x)       (((uint32)(((uint32)(x)) << SSI_ICR_SSI_EN_SHIFT)) & SSI_ICR_SSI_EN_MASK)
/* ICR0 Reg Mask */
#define SSI_ICR_MASK            0x00FF13F7u

/* IFR Bit Fields */
#define SSI_IFR_FLT_WIDTH_MASK  0xF0000u
#define SSI_IFR_FLT_WIDTH_SHIFT 16u
#define SSI_IFR_FLT_WIDTH_WIDTH 4u
#define SSI_IFR_FLT_WIDTH(x) \
    (((uint32)(((uint32)(x)) << SSI_IFR_FLT_WIDTH_SHIFT)) & SSI_IFR_FLT_WIDTH_MASK)
#define SSI_IFR_FLT_EN_MASK                 0x1u
#define SSI_IFR_FLT_EN_SHIFT                0u
#define SSI_IFR_FLT_EN_WIDTH                1u
#define SSI_IFR_FLT_EN(x)                   (((uint32)(((uint32)(x)) << SSI_IFR_FLT_EN_SHIFT)) & SSI_IFR_FLT_EN_MASK)
/* IFR0 Reg Mask */
#define SSI_IFR_MASK                        0x000F0001u

/* INTCR Bit Fields */
#define SSI_INTCR_PROTOCOL_ERR_INT_EN_MASK  0x80u
#define SSI_INTCR_PROTOCOL_ERR_INT_EN_SHIFT 7u
#define SSI_INTCR_PROTOCOL_ERR_INT_EN_WIDTH 1u
#define SSI_INTCR_PROTOCOL_ERR_INT_EN(x)                                \
    (((uint32)(((uint32)(x)) << SSI_INTCR_PROTOCOL_ERR_INT_EN_SHIFT)) & \
     SSI_INTCR_PROTOCOL_ERR_INT_EN_MASK)
#define SSI_INTCR_PULSE_WIDTH_ERR_EN_MASK  0x40u
#define SSI_INTCR_PULSE_WIDTH_ERR_EN_SHIFT 6u
#define SSI_INTCR_PULSE_WIDTH_ERR_EN_WIDTH 1u
#define SSI_INTCR_PULSE_WIDTH_ERR_EN(x)                                \
    (((uint32)(((uint32)(x)) << SSI_INTCR_PULSE_WIDTH_ERR_EN_SHIFT)) & \
     SSI_INTCR_PULSE_WIDTH_ERR_EN_MASK)
#define SSI_INTCR_INTERVAL_ERR_EN_MASK  0x20u
#define SSI_INTCR_INTERVAL_ERR_EN_SHIFT 5u
#define SSI_INTCR_INTERVAL_ERR_EN_WIDTH 1u
#define SSI_INTCR_INTERVAL_ERR_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_INTCR_INTERVAL_ERR_EN_SHIFT)) & SSI_INTCR_INTERVAL_ERR_EN_MASK)
#define SSI_INTCR_DECODE_ERR_EN_MASK  0x10u
#define SSI_INTCR_DECODE_ERR_EN_SHIFT 4u
#define SSI_INTCR_DECODE_ERR_EN_WIDTH 1u
#define SSI_INTCR_DECODE_ERR_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_INTCR_DECODE_ERR_EN_SHIFT)) & SSI_INTCR_DECODE_ERR_EN_MASK)
#define SSI_INTCR_RANGE_ERR_EN_MASK  0x8u
#define SSI_INTCR_RANGE_ERR_EN_SHIFT 3u
#define SSI_INTCR_RANGE_ERR_EN_WIDTH 1u
#define SSI_INTCR_RANGE_ERR_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_INTCR_RANGE_ERR_EN_SHIFT)) & SSI_INTCR_RANGE_ERR_EN_MASK)
#define SSI_INTCR_TIMEOUT_INT_EN_MASK  0x4u
#define SSI_INTCR_TIMEOUT_INT_EN_SHIFT 2u
#define SSI_INTCR_TIMEOUT_INT_EN_WIDTH 1u
#define SSI_INTCR_TIMEOUT_INT_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_INTCR_TIMEOUT_INT_EN_SHIFT)) & SSI_INTCR_TIMEOUT_INT_EN_MASK)
#define SSI_INTCR_STOP_INT_EN_MASK  0x2u
#define SSI_INTCR_STOP_INT_EN_SHIFT 1u
#define SSI_INTCR_STOP_INT_EN_WIDTH 1u
#define SSI_INTCR_STOP_INT_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_INTCR_STOP_INT_EN_SHIFT)) & SSI_INTCR_STOP_INT_EN_MASK)
#define SSI_INTCR_VLD_INT_EN_MASK  0x1u
#define SSI_INTCR_VLD_INT_EN_SHIFT 0u
#define SSI_INTCR_VLD_INT_EN_WIDTH 1u
#define SSI_INTCR_VLD_INT_EN(x) \
    (((uint32)(((uint32)(x)) << SSI_INTCR_VLD_INT_EN_SHIFT)) & SSI_INTCR_VLD_INT_EN_MASK)
/* INTCR0 Reg Mask */
#define SSI_INTCR_MASK        0x000000FFu

/* SPCR Bit Fields */
#define SSI_SPCR_CNT_MASK     0xFFFFFFu
#define SSI_SPCR_CNT_SHIFT    0u
#define SSI_SPCR_CNT_WIDTH    24u
#define SSI_SPCR_CNT(x)       (((uint32)(((uint32)(x)) << SSI_SPCR_CNT_SHIFT)) & SSI_SPCR_CNT_MASK)
/* SPCR0 Reg Mask */
#define SSI_SPCR_MASK         0x00FFFFFFu

/* HPCR Bit Fields */
#define SSI_HPCR_HPULSE_MASK  0x3FFFFu
#define SSI_HPCR_HPULSE_SHIFT 0u
#define SSI_HPCR_HPULSE_WIDTH 18u
#define SSI_HPCR_HPULSE(x) \
    (((uint32)(((uint32)(x)) << SSI_HPCR_HPULSE_SHIFT)) & SSI_HPCR_HPULSE_MASK)
/* HPCR0 Reg Mask */
#define SSI_HPCR_MASK            0x0003FFFFu

/* AKPR Bit Fields */
#define SSI_AKPR_MCODE_CNT_MASK  0xF000u
#define SSI_AKPR_MCODE_CNT_SHIFT 12u
#define SSI_AKPR_MCODE_CNT_WIDTH 4u
#define SSI_AKPR_MCODE_CNT(x) \
    (((uint32)(((uint32)(x)) << SSI_AKPR_MCODE_CNT_SHIFT)) & SSI_AKPR_MCODE_CNT_MASK)
#define SSI_AKPR_MCODE_MASK   0x1FFu
#define SSI_AKPR_MCODE_SHIFT  0u
#define SSI_AKPR_MCODE_WIDTH  9u
#define SSI_AKPR_MCODE(x)     (((uint32)(((uint32)(x)) << SSI_AKPR_MCODE_SHIFT)) & SSI_AKPR_MCODE_MASK)
/* AKPR0 Reg Mask */
#define SSI_AKPR_MASK         0x0000F1FFu

/* PWMPR Bit Fields */
#define SSI_PWMPR_PCODE_MASK  0x3Fu
#define SSI_PWMPR_PCODE_SHIFT 0u
#define SSI_PWMPR_PCODE_WIDTH 6u
#define SSI_PWMPR_PCODE(x) \
    (((uint32)(((uint32)(x)) << SSI_PWMPR_PCODE_SHIFT)) & SSI_PWMPR_PCODE_MASK)
/* PWMPR0 Reg Mask */
#define SSI_PWMPR_MASK         0x0000003Fu

/* ISR Bit Fields */
#define SSI_ISR_PROT_ERR_MASK  0x800u
#define SSI_ISR_PROT_ERR_SHIFT 11u
#define SSI_ISR_PROT_ERR_WIDTH 1u
#define SSI_ISR_PROT_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_PROT_ERR_SHIFT)) & SSI_ISR_PROT_ERR_MASK)
#define SSI_ISR_PULSE_WIDTH_ERR_MASK  0x400u
#define SSI_ISR_PULSE_WIDTH_ERR_SHIFT 10u
#define SSI_ISR_PULSE_WIDTH_ERR_WIDTH 1u
#define SSI_ISR_PULSE_WIDTH_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_PULSE_WIDTH_ERR_SHIFT)) & SSI_ISR_PULSE_WIDTH_ERR_MASK)
#define SSI_ISR_INTERVAL_ERR_MASK  0x200u
#define SSI_ISR_INTERVAL_ERR_SHIFT 9u
#define SSI_ISR_INTERVAL_ERR_WIDTH 1u
#define SSI_ISR_INTERVAL_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_INTERVAL_ERR_SHIFT)) & SSI_ISR_INTERVAL_ERR_MASK)
#define SSI_ISR_DECODE_ERR_MASK  0x100u
#define SSI_ISR_DECODE_ERR_SHIFT 8u
#define SSI_ISR_DECODE_ERR_WIDTH 1u
#define SSI_ISR_DECODE_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_DECODE_ERR_SHIFT)) & SSI_ISR_DECODE_ERR_MASK)
#define SSI_ISR_SPC_RANGE_ERR_MASK  0x20u
#define SSI_ISR_SPC_RANGE_ERR_SHIFT 5u
#define SSI_ISR_SPC_RANGE_ERR_WIDTH 1u
#define SSI_ISR_SPC_RANGE_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_SPC_RANGE_ERR_SHIFT)) & SSI_ISR_SPC_RANGE_ERR_MASK)
#define SSI_ISR_SPC_TIMEOUT_ERR_MASK  0x10u
#define SSI_ISR_SPC_TIMEOUT_ERR_SHIFT 4u
#define SSI_ISR_SPC_TIMEOUT_ERR_WIDTH 1u
#define SSI_ISR_SPC_TIMEOUT_ERR(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_SPC_TIMEOUT_ERR_SHIFT)) & SSI_ISR_SPC_TIMEOUT_ERR_MASK)
#define SSI_ISR_CMP_IOK_MASK  0x4u
#define SSI_ISR_CMP_IOK_SHIFT 2u
#define SSI_ISR_CMP_IOK_WIDTH 1u
#define SSI_ISR_CMP_IOK(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_CMP_IOK_SHIFT)) & SSI_ISR_CMP_IOK_MASK)
#define SSI_ISR_WHL_STOP_MASK  0x2u
#define SSI_ISR_WHL_STOP_SHIFT 1u
#define SSI_ISR_WHL_STOP_WIDTH 1u
#define SSI_ISR_WHL_STOP(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_WHL_STOP_SHIFT)) & SSI_ISR_WHL_STOP_MASK)
#define SSI_ISR_SPC_VLD_MASK  0x1u
#define SSI_ISR_SPC_VLD_SHIFT 0u
#define SSI_ISR_SPC_VLD_WIDTH 1u
#define SSI_ISR_SPC_VLD(x) \
    (((uint32)(((uint32)(x)) << SSI_ISR_SPC_VLD_SHIFT)) & SSI_ISR_SPC_VLD_MASK)
/* ISR0 Reg Mask */
#define SSI_ISR_MASK                0x00000F37u

/* TCR Bit Fields */
#define SSI_TCR_BIST_LOCK_KEY_MASK  0xFFFF0000u
#define SSI_TCR_BIST_LOCK_KEY_SHIFT 16u
#define SSI_TCR_BIST_LOCK_KEY_WIDTH 16u
#define SSI_TCR_BIST_LOCK_KEY(x) \
    (((uint32)(((uint32)(x)) << SSI_TCR_BIST_LOCK_KEY_SHIFT)) & SSI_TCR_BIST_LOCK_KEY_MASK)
#define SSI_TCR_CMP_BISTEN_MASK  0x4u
#define SSI_TCR_CMP_BISTEN_SHIFT 2u
#define SSI_TCR_CMP_BISTEN_WIDTH 1u
#define SSI_TCR_CMP_BISTEN(x) \
    (((uint32)(((uint32)(x)) << SSI_TCR_CMP_BISTEN_SHIFT)) & SSI_TCR_CMP_BISTEN_MASK)
#define SSI_TCR_DUALCMP_OUT28_MASK  0x2u
#define SSI_TCR_DUALCMP_OUT28_SHIFT 1u
#define SSI_TCR_DUALCMP_OUT28_WIDTH 1u
#define SSI_TCR_DUALCMP_OUT28(x) \
    (((uint32)(((uint32)(x)) << SSI_TCR_DUALCMP_OUT28_SHIFT)) & SSI_TCR_DUALCMP_OUT28_MASK)
#define SSI_TCR_DUALCMP_OUT14_MASK  0x1u
#define SSI_TCR_DUALCMP_OUT14_SHIFT 0u
#define SSI_TCR_DUALCMP_OUT14_WIDTH 1u
#define SSI_TCR_DUALCMP_OUT14(x) \
    (((uint32)(((uint32)(x)) << SSI_TCR_DUALCMP_OUT14_SHIFT)) & SSI_TCR_DUALCMP_OUT14_MASK)
/* TCR0 Reg Mask */
#define SSI_TCR_MASK 0xFFFF0007u

/*!
 * @}
 */ /* end of group SSI_Register_Masks */

/*!
 * @}
 */ /* end of group SSI_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif

#endif
