/**
 *   @file    CDD_Sdadc_Regs.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Msc - Isolation level header file for MSC driver.
 *   @details Header file for function definition on isolation level betwen high and low level driver.
 *
 *   @addtogroup MSC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SDADC
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
*   0.8.0       09/11/2024    QXW0084       N/A          SDADC Initial Version
==================================================================================================*/
#ifndef CDD_SDADC_REGS_H
#define CDD_SDADC_REGS_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "Compiler.h"
#include "Platform_Types.h"
#include "Common_Cfg.h"

/* ----------------------------------------------------------------------------
-- SDADC Peripheral Access Layer
---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDADC_Peripheral_Access_Layer SDADC Peripheral Access Layer
 * @{
 */

/** SDADC - Size of Registers Arrays */

/** SDADC - Register Layout Typedef */
#define SDADC_BACSR_COUNT   1
#define SDADC_CRTCSR_COUNT  3
#define SDADC_CSDR_COUNT    3
#define SDADC_CICFR_COUNT   3
#define SDADC_CISR_COUNT    3
#define SDADC_CIVAL_COUNT   3
#define SDADC_CMACSR_COUNT  3
#define SDADC_COFCAL_COUNT  3
#define SDADC_CGNCAL_COUNT  3
#define SDADC_CGNR_COUNT    3
#define SDADC_CTSCNT_COUNT  3
#define SDADC_CTSINFO_COUNT 3

typedef struct
{

    uint8       RESERVED_0[8];
    __IO uint32 CTRL;     /* Global Control Register, offset: 0x8 */
    __IO uint32 NIER;     /* Normal Interrupt Enable Register, offset: 0xC */
    __IO uint32 ABNIER0;  /* Abnormal Interrupt Enable Register 0, offset: 0x10 */
    __IO uint32 ABNIER1;  /* Abnormal Interrupt Enable Register 1, offset: 0x14 */
    __IO uint32 NISR;     /* Normal Interrupt Status Register, offset: 0x18 */
    __IO uint32 ABNISR0;  /* Abnormal Interrupt Status Register 0, offset: 0x1C */
    __IO uint32 ABNISR1;  /* Abnormal Interrupt Status Register 1, offset: 0x20 */
    __I uint32  MSR;      /* Main Status Register, offset: 0x24 */
    __IO uint32 CCR0;     /* Channel Control Register, offset: 0x28 */
    __IO uint32 CDR0;     /* Channel Data Rate Register, offset: 0x2c */
    __IO uint32 CFR0;     /* Channel Configuration Register, offset: 0x30 */
    __IO uint32 CPR0;     /* Channel Protection Register, offset: 0x34 */
    __IO uint32 CBR0;     /* Channel Bias Register, offset: 0x38 */
    __IO uint32 CLLMT0;   /* Channel Low Limit Register, offset: 0x3c */
    __IO uint32 CHLMT0;   /* Channel High Limit Register, offset: 0x40 */
    __I uint32  CRDATA0;  /* Channel Result Data Register, offset: 0x44 */
    __I uint32  CMPDATA0; /* Channel Multi Purpose Data Register, offset: 0x48 */
    __IO uint32 CCR1;     /* Channel Control Register, offset: 0x4c */
    __IO uint32 CDR1;     /* Channel Data Rate Register, offset: 0x50 */
    __IO uint32 CFR1;     /* Channel Configuration Register, offset: 0x54 */
    __IO uint32 CPR1;     /* Channel Protection Register, offset: 0x58 */
    __IO uint32 CBR1;     /* Channel Bias Register, offset: 0x5c */
    __IO uint32 CLLMT1;   /* Channel Low Limit Register, offset: 0x60 */
    __IO uint32 CHLMT1;   /* Channel High Limit Register, offset: 0x64 */
    __I uint32  CRDATA1;  /* Channel Result Data Register, offset: 0x68 */
    __I uint32  CMPDATA1; /* Channel Multi Purpose Data Register, offset: 0x6c */
    __IO uint32 CCR2;     /* Channel Control Register, offset: 0x70 */
    __IO uint32 CDR2;     /* Channel Data Rate Register, offset: 0x74 */
    __IO uint32 CFR2;     /* Channel Configuration Register, offset: 0x78 */
    __IO uint32 CPR2;     /* Channel Protection Register, offset: 0x7c */
    __IO uint32 CBR2;     /* Channel Bias Register, offset: 0x80 */
    __IO uint32 CLLMT2;   /* Channel Low Limit Register, offset: 0x84 */
    __IO uint32 CHLMT2;   /* Channel High Limit Register, offset: 0x88 */
    __I uint32  CRDATA2;  /* Channel Result Data Register, offset: 0x8c */
    __I uint32  CMPDATA2; /* Channel Multi Purpose Data Register, offset: 0x90 */
    uint8       RESERVED_1[364];
    __IO uint32 PWM_GEN;                  /* PWM Generator Register, offset: 0x200 */
    __IO uint32 EXTIS;                    /* Extend Interrupt Status Register, offset: 0x204 */
    __IO uint32 EXTIE;                    /* Extend Interrupt Enable Register, offset: 0x208 */
    __IO uint32 EXTCTRL;                  /* Extend Control Register, offset: 0x20C */
    __IO uint32 BACSR[SDADC_BACSR_COUNT]; /* Bias Analog Configuration Status Register, offset: 0x210 */
    uint8       RESERVED_2[60];
    __IO uint32 CRTCSR[SDADC_CRTCSR_COUNT]; /* Channel Rectification Configuration Status Register,
                                               offset: 0x250 */
    uint8       RESERVED_3[24];
    __IO uint32 CSDR[SDADC_CSDR_COUNT]; /* Channel Sign Delay Register, offset: 0x274 */
    uint8       RESERVED_4[24];
    __IO uint32 CICFR[SDADC_CICFR_COUNT]; /* Channel Integration Configuration Register, offset: 0x298 */
    uint8       RESERVED_5[24];
    __I uint32  CISR[SDADC_CISR_COUNT]; /* Channel Integration Status Register, offset: 0x2bc */
    uint8       RESERVED_6[24];
    __I uint32  CIVAL[SDADC_CIVAL_COUNT]; /* Channel Integration Value Register, offset: 0x2e0 */
    uint8       RESERVED_7[24];
    __IO uint32 CMACSR[SDADC_CMACSR_COUNT]; /* Channel Internal Modulator Analog Configuration
                                               Status Register, offset: 0x304 */
    uint8       RESERVED_8[24];
    __I uint32  COFCAL[SDADC_COFCAL_COUNT]; /* Channel Offset Calibration Register, offset: 0x328 */
    uint8       RESERVED_9[24];
    __I uint32  CGNCAL[SDADC_CGNCAL_COUNT]; /* Channel Gain Calibration Register, offset: 0x34c */
    uint8       RESERVED_10[24];
    __IO uint32 CGNR[SDADC_CGNR_COUNT]; /* Channel Gain Register, offset: 0x370 */
    uint8       RESERVED_11[24];
    __IO uint32 CTSCNT[SDADC_CTSCNT_COUNT]; /* Channel Timestamp Counter Register, offset: 0x394 */
    uint8       RESERVED_12[24];
    __I uint32 CTSINFO[SDADC_CTSINFO_COUNT]; /* Channel Timestamp Information Register, offset: 0x3b8 */

} SDADC_Type, *SDADC_MemMapPtr;

#if (DEVICE_SERIES == FC7300F4MDDxxxxT1C)

/** Number of instances of the SDADC module. */
#define SDADC_HW_INSTANCE_COUNT   (1u)

/* SDADC - Peripheral instance base addresses */
/** Peripheral SDADC0 base address */
#define SDADC0_BASE               (0x4042b000u)
/** Peripheral SDADC0 base pointer */
#define SDADC0                    ((SDADC_Type *)SDADC0_BASE)

/** Array initializer of SDADC peripheral base addresses */
#define SDADC_BASE_ADDRS          { SDADC0_BASE }
/** Array initializer of SDADC peripheral base pointers */
#define SDADC_BASE_PTRS           { SDADC0 }

#define SCM_TSTMP_LOCK_ADDR       (0x40072154u)
#define SCM_TSTMP_LOCK            *(uint32 *)SCM_TSTMP_LOCK_ADDR

#define SCM_SDADC0_TSTMP_RES_ADDR (0x40072178u)

/** Array initializer of SDADC peripheral base addresses */
#define SDADC_TSTMP_RES_ADDRS     { SCM_SDADC0_TSTMP_RES_ADDR }

#else
/** Number of instances of the SDADC module. */
#define SDADC_HW_INSTANCE_COUNT   (2u)

/* SDADC - Peripheral instance base addresses */
/** Peripheral SDADC0 base address */
#define SDADC0_BASE               (0x4082f000u)
/** Peripheral SDADC0 base pointer */
#define SDADC0                    ((SDADC_Type *)SDADC0_BASE)
/** Peripheral SDADC1 base address */
#define SDADC1_BASE               (0x40830000u)
/** Peripheral SDADC1 base pointer */
#define SDADC1                    ((SDADC_Type *)SDADC1_BASE)
/** Array initializer of SDADC peripheral base addresses */
#define SDADC_BASE_ADDRS          { SDADC0_BASE, SDADC1_BASE }
/** Array initializer of SDADC peripheral base pointers */
#define SDADC_BASE_PTRS           { SDADC0, SDADC1 }

#define SCM_TSTMP_LOCK_ADDR       (0x40072154u)
#define SCM_TSTMP_LOCK            *(uint32 *)SCM_TSTMP_LOCK_ADDR

#define SCM_SDADC0_TSTMP_RES_ADDR (0x40072178u)
#define SCM_SDADC1_TSTMP_RES_ADDR (0x40072188u)

/** Array initializer of SDADC peripheral base addresses */
#define SDADC_TSTMP_RES_ADDRS     { SCM_SDADC0_TSTMP_RES_ADDR, SCM_SDADC1_TSTMP_RES_ADDR }

#endif
/* ----------------------------------------------------------------------------
   -- SDADC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDADC_Register_Masks SDADC Register Masks
 * @{
 */

/* CTRL Bit Fields */
#define SDADC_CTRL_CLKO2_DIS_MASK  0x20000000u
#define SDADC_CTRL_CLKO2_DIS_SHIFT 29u
#define SDADC_CTRL_CLKO2_DIS_WIDTH 1u
#define SDADC_CTRL_CLKO2_DIS(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_CLKO2_DIS_SHIFT)) & SDADC_CTRL_CLKO2_DIS_MASK)
#define SDADC_CTRL_CLKO1_DIS_MASK  0x10000000u
#define SDADC_CTRL_CLKO1_DIS_SHIFT 28u
#define SDADC_CTRL_CLKO1_DIS_WIDTH 1u
#define SDADC_CTRL_CLKO1_DIS(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_CLKO1_DIS_SHIFT)) & SDADC_CTRL_CLKO1_DIS_MASK)
#define SDADC_CTRL_CLKO0_DIS_MASK  0x8000000u
#define SDADC_CTRL_CLKO0_DIS_SHIFT 27u
#define SDADC_CTRL_CLKO0_DIS_WIDTH 1u
#define SDADC_CTRL_CLKO0_DIS(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_CLKO0_DIS_SHIFT)) & SDADC_CTRL_CLKO0_DIS_MASK)
#define SDADC_CTRL_PRESCALE_MASK  0x6000000u
#define SDADC_CTRL_PRESCALE_SHIFT 25u
#define SDADC_CTRL_PRESCALE_WIDTH 2u
#define SDADC_CTRL_PRESCALE(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_PRESCALE_SHIFT)) & SDADC_CTRL_PRESCALE_MASK)
#define SDADC_CTRL_MCLK_DIV_MASK  0xFF0000u
#define SDADC_CTRL_MCLK_DIV_SHIFT 16u
#define SDADC_CTRL_MCLK_DIV_WIDTH 8u
#define SDADC_CTRL_MCLK_DIV(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_MCLK_DIV_SHIFT)) & SDADC_CTRL_MCLK_DIV_MASK)
#define SDADC_CTRL_MEN_MASK     0x8000u
#define SDADC_CTRL_MEN_SHIFT    15u
#define SDADC_CTRL_MEN_WIDTH    1u
#define SDADC_CTRL_MEN(x)       (((uint32)(((uint32)(x)) << SDADC_CTRL_MEN_SHIFT)) & SDADC_CTRL_MEN_MASK)
#define SDADC_CTRL_MENSEL_MASK  0x4000u
#define SDADC_CTRL_MENSEL_SHIFT 14u
#define SDADC_CTRL_MENSEL_WIDTH 1u
#define SDADC_CTRL_MENSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_MENSEL_SHIFT)) & SDADC_CTRL_MENSEL_MASK)
#define SDADC_CTRL_RESET_MASK  0x2000u
#define SDADC_CTRL_RESET_SHIFT 13u
#define SDADC_CTRL_RESET_WIDTH 1u
#define SDADC_CTRL_RESET(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_RESET_SHIFT)) & SDADC_CTRL_RESET_MASK)
#define SDADC_CTRL_DBGM_MASK  0x1000u
#define SDADC_CTRL_DBGM_SHIFT 12u
#define SDADC_CTRL_DBGM_WIDTH 1u
#define SDADC_CTRL_DBGM(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_DBGM_SHIFT)) & SDADC_CTRL_DBGM_MASK)
#define SDADC_CTRL_DBGE_MASK  0x800u
#define SDADC_CTRL_DBGE_SHIFT 11u
#define SDADC_CTRL_DBGE_WIDTH 1u
#define SDADC_CTRL_DBGE(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_DBGE_SHIFT)) & SDADC_CTRL_DBGE_MASK)
#define SDADC_CTRL_LPMN_MASK  0x400u
#define SDADC_CTRL_LPMN_SHIFT 10u
#define SDADC_CTRL_LPMN_WIDTH 1u
#define SDADC_CTRL_LPMN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_LPMN_SHIFT)) & SDADC_CTRL_LPMN_MASK)
#define SDADC_CTRL_STRIG2_MASK  0x4u
#define SDADC_CTRL_STRIG2_SHIFT 2u
#define SDADC_CTRL_STRIG2_WIDTH 1u
#define SDADC_CTRL_STRIG2(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_STRIG2_SHIFT)) & SDADC_CTRL_STRIG2_MASK)
#define SDADC_CTRL_STRIG1_MASK  0x2u
#define SDADC_CTRL_STRIG1_SHIFT 1u
#define SDADC_CTRL_STRIG1_WIDTH 1u
#define SDADC_CTRL_STRIG1(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_STRIG1_SHIFT)) & SDADC_CTRL_STRIG1_MASK)
#define SDADC_CTRL_STRIG0_MASK  0x1u
#define SDADC_CTRL_STRIG0_SHIFT 0u
#define SDADC_CTRL_STRIG0_WIDTH 1u
#define SDADC_CTRL_STRIG0(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_STRIG0_SHIFT)) & SDADC_CTRL_STRIG0_MASK)
#define SDADC_CTRL_STRIG_MASK  0x1u
#define SDADC_CTRL_STRIG_SHIFT 0u
#define SDADC_CTRL_STRIG_WIDTH 1u
#define SDADC_CTRL_STRIG(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTRL_STRIG_SHIFT)) & SDADC_CTRL_STRIG_MASK)
/* CTRL Reg Mask */
#define SDADC_CTRL_MASK         0x3EFFF807u

/* NIER Bit Fields */
#define SDADC_NIER_ZCDIE2_MASK  0x40000u
#define SDADC_NIER_ZCDIE2_SHIFT 18u
#define SDADC_NIER_ZCDIE2_WIDTH 1u
#define SDADC_NIER_ZCDIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_ZCDIE2_SHIFT)) & SDADC_NIER_ZCDIE2_MASK)
#define SDADC_NIER_ZCDIE1_MASK  0x20000u
#define SDADC_NIER_ZCDIE1_SHIFT 17u
#define SDADC_NIER_ZCDIE1_WIDTH 1u
#define SDADC_NIER_ZCDIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_ZCDIE1_SHIFT)) & SDADC_NIER_ZCDIE1_MASK)
#define SDADC_NIER_ZCDIE0_MASK  0x10000u
#define SDADC_NIER_ZCDIE0_SHIFT 16u
#define SDADC_NIER_ZCDIE0_WIDTH 1u
#define SDADC_NIER_ZCDIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_ZCDIE0_SHIFT)) & SDADC_NIER_ZCDIE0_MASK)
#define SDADC_NIER_FRDYIE2_MASK  0x400u
#define SDADC_NIER_FRDYIE2_SHIFT 10u
#define SDADC_NIER_FRDYIE2_WIDTH 1u
#define SDADC_NIER_FRDYIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_FRDYIE2_SHIFT)) & SDADC_NIER_FRDYIE2_MASK)
#define SDADC_NIER_FRDYIE1_MASK  0x200u
#define SDADC_NIER_FRDYIE1_SHIFT 9u
#define SDADC_NIER_FRDYIE1_WIDTH 1u
#define SDADC_NIER_FRDYIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_FRDYIE1_SHIFT)) & SDADC_NIER_FRDYIE1_MASK)
#define SDADC_NIER_FRDYIE0_MASK  0x100u
#define SDADC_NIER_FRDYIE0_SHIFT 8u
#define SDADC_NIER_FRDYIE0_WIDTH 1u
#define SDADC_NIER_FRDYIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_FRDYIE0_SHIFT)) & SDADC_NIER_FRDYIE0_MASK)
#define SDADC_NIER_COCIE2_MASK  0x4u
#define SDADC_NIER_COCIE2_SHIFT 2u
#define SDADC_NIER_COCIE2_WIDTH 1u
#define SDADC_NIER_COCIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_COCIE2_SHIFT)) & SDADC_NIER_COCIE2_MASK)
#define SDADC_NIER_COCIE1_MASK  0x2u
#define SDADC_NIER_COCIE1_SHIFT 1u
#define SDADC_NIER_COCIE1_WIDTH 1u
#define SDADC_NIER_COCIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_COCIE1_SHIFT)) & SDADC_NIER_COCIE1_MASK)
#define SDADC_NIER_COCIE0_MASK  0x1u
#define SDADC_NIER_COCIE0_SHIFT 0u
#define SDADC_NIER_COCIE0_WIDTH 1u
#define SDADC_NIER_COCIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_COCIE0_SHIFT)) & SDADC_NIER_COCIE0_MASK)
#define SDADC_NIER_FRDYIE_MASK  0x700u
#define SDADC_NIER_FRDYIE_SHIFT 8u
#define SDADC_NIER_FRDYIE_WIDTH 3u
#define SDADC_NIER_FRDYIE(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_FRDYIE_SHIFT)) & SDADC_NIER_FRDYIE_MASK)
#define SDADC_NIER_COCIE_MASK  0x7u
#define SDADC_NIER_COCIE_SHIFT 0u
#define SDADC_NIER_COCIE_WIDTH 3u
#define SDADC_NIER_COCIE(x) \
    (((uint32)(((uint32)(x)) << SDADC_NIER_COCIE_SHIFT)) & SDADC_NIER_COCIE_MASK)

/* NIER Reg Mask */
#define SDADC_NIER_MASK             0x00070707u
#define SDADC_NIER_CH0_MASK         0x00010101u

/* ABNIER0 Bit Fields */
#define SDADC_ABNIER0_HLMTIE2_MASK  0x4000000u
#define SDADC_ABNIER0_HLMTIE2_SHIFT 26u
#define SDADC_ABNIER0_HLMTIE2_WIDTH 1u
#define SDADC_ABNIER0_HLMTIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_HLMTIE2_SHIFT)) & SDADC_ABNIER0_HLMTIE2_MASK)
#define SDADC_ABNIER0_HLMTIE1_MASK  0x2000000u
#define SDADC_ABNIER0_HLMTIE1_SHIFT 25u
#define SDADC_ABNIER0_HLMTIE1_WIDTH 1u
#define SDADC_ABNIER0_HLMTIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_HLMTIE1_SHIFT)) & SDADC_ABNIER0_HLMTIE1_MASK)
#define SDADC_ABNIER0_HLMTIE0_MASK  0x1000000u
#define SDADC_ABNIER0_HLMTIE0_SHIFT 24u
#define SDADC_ABNIER0_HLMTIE0_WIDTH 1u
#define SDADC_ABNIER0_HLMTIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_HLMTIE0_SHIFT)) & SDADC_ABNIER0_HLMTIE0_MASK)
#define SDADC_ABNIER0_LLMTIE2_MASK  0x40000u
#define SDADC_ABNIER0_LLMTIE2_SHIFT 18u
#define SDADC_ABNIER0_LLMTIE2_WIDTH 1u
#define SDADC_ABNIER0_LLMTIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_LLMTIE2_SHIFT)) & SDADC_ABNIER0_LLMTIE2_MASK)
#define SDADC_ABNIER0_LLMTIE1_MASK  0x20000u
#define SDADC_ABNIER0_LLMTIE1_SHIFT 17u
#define SDADC_ABNIER0_LLMTIE1_WIDTH 1u
#define SDADC_ABNIER0_LLMTIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_LLMTIE1_SHIFT)) & SDADC_ABNIER0_LLMTIE1_MASK)
#define SDADC_ABNIER0_LLMTIE0_MASK  0x10000u
#define SDADC_ABNIER0_LLMTIE0_SHIFT 16u
#define SDADC_ABNIER0_LLMTIE0_WIDTH 1u
#define SDADC_ABNIER0_LLMTIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_LLMTIE0_SHIFT)) & SDADC_ABNIER0_LLMTIE0_MASK)
#define SDADC_ABNIER0_WLMTIE2_MASK  0x400u
#define SDADC_ABNIER0_WLMTIE2_SHIFT 10u
#define SDADC_ABNIER0_WLMTIE2_WIDTH 1u
#define SDADC_ABNIER0_WLMTIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_WLMTIE2_SHIFT)) & SDADC_ABNIER0_WLMTIE2_MASK)
#define SDADC_ABNIER0_WLMTIE1_MASK  0x200u
#define SDADC_ABNIER0_WLMTIE1_SHIFT 9u
#define SDADC_ABNIER0_WLMTIE1_WIDTH 1u
#define SDADC_ABNIER0_WLMTIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_WLMTIE1_SHIFT)) & SDADC_ABNIER0_WLMTIE1_MASK)
#define SDADC_ABNIER0_WLMTIE0_MASK  0x100u
#define SDADC_ABNIER0_WLMTIE0_SHIFT 8u
#define SDADC_ABNIER0_WLMTIE0_WIDTH 1u
#define SDADC_ABNIER0_WLMTIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_WLMTIE0_SHIFT)) & SDADC_ABNIER0_WLMTIE0_MASK)
#define SDADC_ABNIER0_SCDIE2_MASK  0x4u
#define SDADC_ABNIER0_SCDIE2_SHIFT 2u
#define SDADC_ABNIER0_SCDIE2_WIDTH 1u
#define SDADC_ABNIER0_SCDIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_SCDIE2_SHIFT)) & SDADC_ABNIER0_SCDIE2_MASK)
#define SDADC_ABNIER0_SCDIE1_MASK  0x2u
#define SDADC_ABNIER0_SCDIE1_SHIFT 1u
#define SDADC_ABNIER0_SCDIE1_WIDTH 1u
#define SDADC_ABNIER0_SCDIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_SCDIE1_SHIFT)) & SDADC_ABNIER0_SCDIE1_MASK)
#define SDADC_ABNIER0_SCDIE0_MASK  0x1u
#define SDADC_ABNIER0_SCDIE0_SHIFT 0u
#define SDADC_ABNIER0_SCDIE0_WIDTH 1u
#define SDADC_ABNIER0_SCDIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER0_SCDIE0_SHIFT)) & SDADC_ABNIER0_SCDIE0_MASK)
/* ABNIER0 Reg Mask */
#define SDADC_ABNIER0_MASK         0x07070707u
#define SDADC_ABNIER0_CH0_MASK     0x01010101u

/* ABNIER1 Bit Fields */
#define SDADC_ABNIER1_SATIE2_MASK  0x4000000u
#define SDADC_ABNIER1_SATIE2_SHIFT 26u
#define SDADC_ABNIER1_SATIE2_WIDTH 1u
#define SDADC_ABNIER1_SATIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_SATIE2_SHIFT)) & SDADC_ABNIER1_SATIE2_MASK)
#define SDADC_ABNIER1_SATIE1_MASK  0x2000000u
#define SDADC_ABNIER1_SATIE1_SHIFT 25u
#define SDADC_ABNIER1_SATIE1_WIDTH 1u
#define SDADC_ABNIER1_SATIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_SATIE1_SHIFT)) & SDADC_ABNIER1_SATIE1_MASK)
#define SDADC_ABNIER1_SATIE0_MASK  0x1000000u
#define SDADC_ABNIER1_SATIE0_SHIFT 24u
#define SDADC_ABNIER1_SATIE0_WIDTH 1u
#define SDADC_ABNIER1_SATIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_SATIE0_SHIFT)) & SDADC_ABNIER1_SATIE0_MASK)
#define SDADC_ABNIER1_CADIE2_MASK  0x40000u
#define SDADC_ABNIER1_CADIE2_SHIFT 18u
#define SDADC_ABNIER1_CADIE2_WIDTH 1u
#define SDADC_ABNIER1_CADIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_CADIE2_SHIFT)) & SDADC_ABNIER1_CADIE2_MASK)
#define SDADC_ABNIER1_CADIE1_MASK  0x20000u
#define SDADC_ABNIER1_CADIE1_SHIFT 17u
#define SDADC_ABNIER1_CADIE1_WIDTH 1u
#define SDADC_ABNIER1_CADIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_CADIE1_SHIFT)) & SDADC_ABNIER1_CADIE1_MASK)
#define SDADC_ABNIER1_CADIE0_MASK  0x10000u
#define SDADC_ABNIER1_CADIE0_SHIFT 16u
#define SDADC_ABNIER1_CADIE0_WIDTH 1u
#define SDADC_ABNIER1_CADIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_CADIE0_SHIFT)) & SDADC_ABNIER1_CADIE0_MASK)
#define SDADC_ABNIER1_FOVFIE2_MASK  0x400u
#define SDADC_ABNIER1_FOVFIE2_SHIFT 10u
#define SDADC_ABNIER1_FOVFIE2_WIDTH 1u
#define SDADC_ABNIER1_FOVFIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FOVFIE2_SHIFT)) & SDADC_ABNIER1_FOVFIE2_MASK)
#define SDADC_ABNIER1_FOVFIE1_MASK  0x200u
#define SDADC_ABNIER1_FOVFIE1_SHIFT 9u
#define SDADC_ABNIER1_FOVFIE1_WIDTH 1u
#define SDADC_ABNIER1_FOVFIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FOVFIE1_SHIFT)) & SDADC_ABNIER1_FOVFIE1_MASK)
#define SDADC_ABNIER1_FOVFIE0_MASK  0x100u
#define SDADC_ABNIER1_FOVFIE0_SHIFT 8u
#define SDADC_ABNIER1_FOVFIE0_WIDTH 1u
#define SDADC_ABNIER1_FOVFIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FOVFIE0_SHIFT)) & SDADC_ABNIER1_FOVFIE0_MASK)
#define SDADC_ABNIER1_FUNFIE2_MASK  0x4u
#define SDADC_ABNIER1_FUNFIE2_SHIFT 2u
#define SDADC_ABNIER1_FUNFIE2_WIDTH 1u
#define SDADC_ABNIER1_FUNFIE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FUNFIE2_SHIFT)) & SDADC_ABNIER1_FUNFIE2_MASK)
#define SDADC_ABNIER1_FUNFIE1_MASK  0x2u
#define SDADC_ABNIER1_FUNFIE1_SHIFT 1u
#define SDADC_ABNIER1_FUNFIE1_WIDTH 1u
#define SDADC_ABNIER1_FUNFIE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FUNFIE1_SHIFT)) & SDADC_ABNIER1_FUNFIE1_MASK)
#define SDADC_ABNIER1_FUNFIE0_MASK  0x1u
#define SDADC_ABNIER1_FUNFIE0_SHIFT 0u
#define SDADC_ABNIER1_FUNFIE0_WIDTH 1u
#define SDADC_ABNIER1_FUNFIE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FUNFIE0_SHIFT)) & SDADC_ABNIER1_FUNFIE0_MASK)
#define SDADC_ABNIER1_FOVFIE_MASK  0x700u
#define SDADC_ABNIER1_FOVFIE_SHIFT 8u
#define SDADC_ABNIER1_FOVFIE_WIDTH 3u
#define SDADC_ABNIER1_FOVFIE(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FOVFIE0_SHIFT)) & SDADC_ABNIER1_FOVFIE_MASK)
#define SDADC_ABNIER1_FUNFIE_MASK  0x7u
#define SDADC_ABNIER1_FUNFIE_SHIFT 0u
#define SDADC_ABNIER1_FUNFIE_WIDTH 3u
#define SDADC_ABNIER1_FUNFIE(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNIER1_FUNFIE_SHIFT)) & SDADC_ABNIER1_FUNFIE_MASK)
/* ABNIER1 Reg Mask */
#define SDADC_ABNIER1_MASK     0x07070707u
#define SDADC_ABNIER1_CH0_MASK 0x01010101u

/* NISR Bit Fields */
#define SDADC_NISR_ZCD2_MASK   0x40000u
#define SDADC_NISR_ZCD2_SHIFT  18u
#define SDADC_NISR_ZCD2_WIDTH  1u
#define SDADC_NISR_ZCD2(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_ZCD2_SHIFT)) & SDADC_NISR_ZCD2_MASK)
#define SDADC_NISR_ZCD1_MASK  0x20000u
#define SDADC_NISR_ZCD1_SHIFT 17u
#define SDADC_NISR_ZCD1_WIDTH 1u
#define SDADC_NISR_ZCD1(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_ZCD1_SHIFT)) & SDADC_NISR_ZCD1_MASK)
#define SDADC_NISR_ZCD0_MASK  0x10000u
#define SDADC_NISR_ZCD0_SHIFT 16u
#define SDADC_NISR_ZCD0_WIDTH 1u
#define SDADC_NISR_ZCD0(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_ZCD0_SHIFT)) & SDADC_NISR_ZCD0_MASK)
#define SDADC_NISR_FRDY2_MASK  0x400u
#define SDADC_NISR_FRDY2_SHIFT 10u
#define SDADC_NISR_FRDY2_WIDTH 1u
#define SDADC_NISR_FRDY2(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_FRDY2_SHIFT)) & SDADC_NISR_FRDY2_MASK)
#define SDADC_NISR_FRDY1_MASK  0x200u
#define SDADC_NISR_FRDY1_SHIFT 9u
#define SDADC_NISR_FRDY1_WIDTH 1u
#define SDADC_NISR_FRDY1(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_FRDY1_SHIFT)) & SDADC_NISR_FRDY1_MASK)
#define SDADC_NISR_FRDY0_MASK  0x100u
#define SDADC_NISR_FRDY0_SHIFT 8u
#define SDADC_NISR_FRDY0_WIDTH 1u
#define SDADC_NISR_FRDY0(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_FRDY0_SHIFT)) & SDADC_NISR_FRDY0_MASK)
#define SDADC_NISR_COC2_MASK  0x4u
#define SDADC_NISR_COC2_SHIFT 2u
#define SDADC_NISR_COC2_WIDTH 1u
#define SDADC_NISR_COC2(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_COC2_SHIFT)) & SDADC_NISR_COC2_MASK)
#define SDADC_NISR_COC1_MASK  0x2u
#define SDADC_NISR_COC1_SHIFT 1u
#define SDADC_NISR_COC1_WIDTH 1u
#define SDADC_NISR_COC1(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_COC1_SHIFT)) & SDADC_NISR_COC1_MASK)
#define SDADC_NISR_COC0_MASK  0x1u
#define SDADC_NISR_COC0_SHIFT 0u
#define SDADC_NISR_COC0_WIDTH 1u
#define SDADC_NISR_COC0(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_COC0_SHIFT)) & SDADC_NISR_COC0_MASK)
#define SDADC_NISR_FRDY_MASK  0x700u
#define SDADC_NISR_FRDY_SHIFT 8u
#define SDADC_NISR_FRDY_WIDTH 3u
#define SDADC_NISR_FRDY(x) \
    (((uint32)(((uint32)(x)) << SDADC_NISR_FRDY_SHIFT)) & SDADC_NISR_FRDY_MASK)
#define SDADC_NISR_COC_MASK       0x7u
#define SDADC_NISR_COC_SHIFT      0u
#define SDADC_NISR_COC_WIDTH      3u
#define SDADC_NISR_COC(x)         (((uint32)(((uint32)(x)) << SDADC_NISR_COC_SHIFT)) & SDADC_NISR_COC_MASK)
/* NISR Reg Mask */
#define SDADC_NISR_MASK           0x00070707u
#define SDADC_NISR_CH0_MASK       0x00010101u

/* ABNISR0 Bit Fields */
#define SDADC_ABNISR0_HLMT2_MASK  0x4000000u
#define SDADC_ABNISR0_HLMT2_SHIFT 26u
#define SDADC_ABNISR0_HLMT2_WIDTH 1u
#define SDADC_ABNISR0_HLMT2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_HLMT2_SHIFT)) & SDADC_ABNISR0_HLMT2_MASK)
#define SDADC_ABNISR0_HLMT1_MASK  0x2000000u
#define SDADC_ABNISR0_HLMT1_SHIFT 25u
#define SDADC_ABNISR0_HLMT1_WIDTH 1u
#define SDADC_ABNISR0_HLMT1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_HLMT1_SHIFT)) & SDADC_ABNISR0_HLMT1_MASK)
#define SDADC_ABNISR0_HLMT0_MASK  0x1000000u
#define SDADC_ABNISR0_HLMT0_SHIFT 24u
#define SDADC_ABNISR0_HLMT0_WIDTH 1u
#define SDADC_ABNISR0_HLMT0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_HLMT0_SHIFT)) & SDADC_ABNISR0_HLMT0_MASK)
#define SDADC_ABNISR0_LLMT2_MASK  0x40000u
#define SDADC_ABNISR0_LLMT2_SHIFT 18u
#define SDADC_ABNISR0_LLMT2_WIDTH 1u
#define SDADC_ABNISR0_LLMT2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_LLMT2_SHIFT)) & SDADC_ABNISR0_LLMT2_MASK)
#define SDADC_ABNISR0_LLMT1_MASK  0x20000u
#define SDADC_ABNISR0_LLMT1_SHIFT 17u
#define SDADC_ABNISR0_LLMT1_WIDTH 1u
#define SDADC_ABNISR0_LLMT1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_LLMT1_SHIFT)) & SDADC_ABNISR0_LLMT1_MASK)
#define SDADC_ABNISR0_LLMT0_MASK  0x10000u
#define SDADC_ABNISR0_LLMT0_SHIFT 16u
#define SDADC_ABNISR0_LLMT0_WIDTH 1u
#define SDADC_ABNISR0_LLMT0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_LLMT0_SHIFT)) & SDADC_ABNISR0_LLMT0_MASK)
#define SDADC_ABNISR0_WLMT2_MASK  0x400u
#define SDADC_ABNISR0_WLMT2_SHIFT 10u
#define SDADC_ABNISR0_WLMT2_WIDTH 1u
#define SDADC_ABNISR0_WLMT2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_WLMT2_SHIFT)) & SDADC_ABNISR0_WLMT2_MASK)
#define SDADC_ABNISR0_WLMT1_MASK  0x200u
#define SDADC_ABNISR0_WLMT1_SHIFT 9u
#define SDADC_ABNISR0_WLMT1_WIDTH 1u
#define SDADC_ABNISR0_WLMT1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_WLMT1_SHIFT)) & SDADC_ABNISR0_WLMT1_MASK)
#define SDADC_ABNISR0_WLMT0_MASK  0x100u
#define SDADC_ABNISR0_WLMT0_SHIFT 8u
#define SDADC_ABNISR0_WLMT0_WIDTH 1u
#define SDADC_ABNISR0_WLMT0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_WLMT0_SHIFT)) & SDADC_ABNISR0_WLMT0_MASK)
#define SDADC_ABNISR0_SCD2_MASK  0x4u
#define SDADC_ABNISR0_SCD2_SHIFT 2u
#define SDADC_ABNISR0_SCD2_WIDTH 1u
#define SDADC_ABNISR0_SCD2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_SCD2_SHIFT)) & SDADC_ABNISR0_SCD2_MASK)
#define SDADC_ABNISR0_SCD1_MASK  0x2u
#define SDADC_ABNISR0_SCD1_SHIFT 1u
#define SDADC_ABNISR0_SCD1_WIDTH 1u
#define SDADC_ABNISR0_SCD1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_SCD1_SHIFT)) & SDADC_ABNISR0_SCD1_MASK)
#define SDADC_ABNISR0_SCD0_MASK  0x1u
#define SDADC_ABNISR0_SCD0_SHIFT 0u
#define SDADC_ABNISR0_SCD0_WIDTH 1u
#define SDADC_ABNISR0_SCD0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR0_SCD0_SHIFT)) & SDADC_ABNISR0_SCD0_MASK)
/* ABNISR0 Reg Mask */
#define SDADC_ABNISR0_MASK       0x07070707u
#define SDADC_ABNISR0_CH0_MASK   0x01010101u

/* ABNISR1 Bit Fields */
#define SDADC_ABNISR1_SAT2_MASK  0x4000000u
#define SDADC_ABNISR1_SAT2_SHIFT 26u
#define SDADC_ABNISR1_SAT2_WIDTH 1u
#define SDADC_ABNISR1_SAT2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_SAT2_SHIFT)) & SDADC_ABNISR1_SAT2_MASK)
#define SDADC_ABNISR1_SAT1_MASK  0x2000000u
#define SDADC_ABNISR1_SAT1_SHIFT 25u
#define SDADC_ABNISR1_SAT1_WIDTH 1u
#define SDADC_ABNISR1_SAT1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_SAT1_SHIFT)) & SDADC_ABNISR1_SAT1_MASK)
#define SDADC_ABNISR1_SAT0_MASK  0x1000000u
#define SDADC_ABNISR1_SAT0_SHIFT 24u
#define SDADC_ABNISR1_SAT0_WIDTH 1u
#define SDADC_ABNISR1_SAT0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_SAT0_SHIFT)) & SDADC_ABNISR1_SAT0_MASK)
#define SDADC_ABNISR1_CAD2_MASK  0x40000u
#define SDADC_ABNISR1_CAD2_SHIFT 18u
#define SDADC_ABNISR1_CAD2_WIDTH 1u
#define SDADC_ABNISR1_CAD2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_CAD2_SHIFT)) & SDADC_ABNISR1_CAD2_MASK)
#define SDADC_ABNISR1_CAD1_MASK  0x20000u
#define SDADC_ABNISR1_CAD1_SHIFT 17u
#define SDADC_ABNISR1_CAD1_WIDTH 1u
#define SDADC_ABNISR1_CAD1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_CAD1_SHIFT)) & SDADC_ABNISR1_CAD1_MASK)
#define SDADC_ABNISR1_CAD0_MASK  0x10000u
#define SDADC_ABNISR1_CAD0_SHIFT 16u
#define SDADC_ABNISR1_CAD0_WIDTH 1u
#define SDADC_ABNISR1_CAD0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_CAD0_SHIFT)) & SDADC_ABNISR1_CAD0_MASK)
#define SDADC_ABNISR1_FOVF2_MASK  0x400u
#define SDADC_ABNISR1_FOVF2_SHIFT 10u
#define SDADC_ABNISR1_FOVF2_WIDTH 1u
#define SDADC_ABNISR1_FOVF2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FOVF2_SHIFT)) & SDADC_ABNISR1_FOVF2_MASK)
#define SDADC_ABNISR1_FOVF1_MASK  0x200u
#define SDADC_ABNISR1_FOVF1_SHIFT 9u
#define SDADC_ABNISR1_FOVF1_WIDTH 1u
#define SDADC_ABNISR1_FOVF1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FOVF1_SHIFT)) & SDADC_ABNISR1_FOVF1_MASK)
#define SDADC_ABNISR1_FOVF0_MASK  0x100u
#define SDADC_ABNISR1_FOVF0_SHIFT 8u
#define SDADC_ABNISR1_FOVF0_WIDTH 1u
#define SDADC_ABNISR1_FOVF0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FOVF0_SHIFT)) & SDADC_ABNISR1_FOVF0_MASK)
#define SDADC_ABNISR1_FUNF2_MASK  0x4u
#define SDADC_ABNISR1_FUNF2_SHIFT 2u
#define SDADC_ABNISR1_FUNF2_WIDTH 1u
#define SDADC_ABNISR1_FUNF2(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FUNF2_SHIFT)) & SDADC_ABNISR1_FUNF2_MASK)
#define SDADC_ABNISR1_FUNF1_MASK  0x2u
#define SDADC_ABNISR1_FUNF1_SHIFT 1u
#define SDADC_ABNISR1_FUNF1_WIDTH 1u
#define SDADC_ABNISR1_FUNF1(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FUNF1_SHIFT)) & SDADC_ABNISR1_FUNF1_MASK)
#define SDADC_ABNISR1_FUNF0_MASK  0x1u
#define SDADC_ABNISR1_FUNF0_SHIFT 0u
#define SDADC_ABNISR1_FUNF0_WIDTH 1u
#define SDADC_ABNISR1_FUNF0(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FUNF0_SHIFT)) & SDADC_ABNISR1_FUNF0_MASK)
#define SDADC_ABNISR1_FUNF_MASK  0x7u
#define SDADC_ABNISR1_FUNF_SHIFT 0u
#define SDADC_ABNISR1_FUNF_WIDTH 3u
#define SDADC_ABNISR1_FUNF(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FUNF_SHIFT)) & SDADC_ABNISR1_FUNF_MASK)
#define SDADC_ABNISR1_FOVF_MASK  0x700u
#define SDADC_ABNISR1_FOVF_SHIFT 8u
#define SDADC_ABNISR1_FOVF_WIDTH 1u
#define SDADC_ABNISR1_FOVF(x) \
    (((uint32)(((uint32)(x)) << SDADC_ABNISR1_FOVF_SHIFT)) & SDADC_ABNISR1_FOVF_MASK)
/* ABNISR1 Reg Mask */
#define SDADC_ABNISR1_MASK        0x07070707u
#define SDADC_ABNISR1_CH0_MASK    0x01010101u

/* MSR Bit Fields */
#define SDADC_MSR_CLKO2_RDY_MASK  0x4000000u
#define SDADC_MSR_CLKO2_RDY_SHIFT 26u
#define SDADC_MSR_CLKO2_RDY_WIDTH 1u
#define SDADC_MSR_CLKO2_RDY(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_CLKO2_RDY_SHIFT)) & SDADC_MSR_CLKO2_RDY_MASK)
#define SDADC_MSR_CLKO1_RDY_MASK  0x2000000u
#define SDADC_MSR_CLKO1_RDY_SHIFT 25u
#define SDADC_MSR_CLKO1_RDY_WIDTH 1u
#define SDADC_MSR_CLKO1_RDY(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_CLKO1_RDY_SHIFT)) & SDADC_MSR_CLKO1_RDY_MASK)
#define SDADC_MSR_CLKO0_RDY_MASK  0x1000000u
#define SDADC_MSR_CLKO0_RDY_SHIFT 24u
#define SDADC_MSR_CLKO0_RDY_WIDTH 1u
#define SDADC_MSR_CLKO0_RDY(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_CLKO0_RDY_SHIFT)) & SDADC_MSR_CLKO0_RDY_MASK)
#define SDADC_MSR_FIFO_EMPTY_MASK  0x70000u
#define SDADC_MSR_FIFO_EMPTY_SHIFT 16u
#define SDADC_MSR_FIFO_EMPTY_WIDTH 3u
#define SDADC_MSR_FIFO_EMPTY(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_FIFO_EMPTY_SHIFT)) & SDADC_MSR_FIFO_EMPTY_MASK)
#define SDADC_MSR_CHRDY_MASK  0x700u
#define SDADC_MSR_CHRDY_SHIFT 8u
#define SDADC_MSR_CHRDY_WIDTH 3u
#define SDADC_MSR_CHRDY(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_CHRDY_SHIFT)) & SDADC_MSR_CHRDY_MASK)
#define SDADC_MSR_CHON2_MASK  0x4u
#define SDADC_MSR_CHON2_SHIFT 2u
#define SDADC_MSR_CHON2_WIDTH 1u
#define SDADC_MSR_CHON2(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_CHON2_SHIFT)) & SDADC_MSR_CHON2_MASK)
#define SDADC_MSR_CHON1_MASK  0x2u
#define SDADC_MSR_CHON1_SHIFT 1u
#define SDADC_MSR_CHON1_WIDTH 1u
#define SDADC_MSR_CHON1(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_CHON1_SHIFT)) & SDADC_MSR_CHON1_MASK)
#define SDADC_MSR_CHON0_MASK  0x1u
#define SDADC_MSR_CHON0_SHIFT 0u
#define SDADC_MSR_CHON0_WIDTH 1u
#define SDADC_MSR_CHON0(x) \
    (((uint32)(((uint32)(x)) << SDADC_MSR_CHON0_SHIFT)) & SDADC_MSR_CHON0_MASK)
#define SDADC_MSR_CHON_MASK     0x7u
#define SDADC_MSR_CHON_SHIFT    0u
#define SDADC_MSR_CHON_WIDTH    3u
#define SDADC_MSR_CHON(x)       (((uint32)(((uint32)(x)) << SDADC_MSR_CHON_SHIFT)) & SDADC_MSR_CHON_MASK)
/* MSR Reg Mask */
#define SDADC_MSR_MASK          0x07070707u

/* CCR Bit Fields */
#define SDADC_CCR_LMT_SEL_MASK  0x20000000u
#define SDADC_CCR_LMT_SEL_SHIFT 29u
#define SDADC_CCR_LMT_SEL_WIDTH 1u
#define SDADC_CCR_LMT_SEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_LMT_SEL_SHIFT)) & SDADC_CCR_LMT_SEL_MASK)
#define SDADC_CCR_ZCD_SEL_MASK  0x10000000u
#define SDADC_CCR_ZCD_SEL_SHIFT 28u
#define SDADC_CCR_ZCD_SEL_WIDTH 1u
#define SDADC_CCR_ZCD_SEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_ZCD_SEL_SHIFT)) & SDADC_CCR_ZCD_SEL_MASK)
#define SDADC_CCR_DBG_SEL_MASK  0x3C00000u
#define SDADC_CCR_DBG_SEL_SHIFT 22u
#define SDADC_CCR_DBG_SEL_WIDTH 4u
#define SDADC_CCR_DBG_SEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_DBG_SEL_SHIFT)) & SDADC_CCR_DBG_SEL_MASK)
#define SDADC_CCR_INTG_EN_MASK  0x10000u
#define SDADC_CCR_INTG_EN_SHIFT 16u
#define SDADC_CCR_INTG_EN_WIDTH 1u
#define SDADC_CCR_INTG_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_INTG_EN_SHIFT)) & SDADC_CCR_INTG_EN_MASK)
#define SDADC_CCR_RECT_EN_MASK  0x8000u
#define SDADC_CCR_RECT_EN_SHIFT 15u
#define SDADC_CCR_RECT_EN_WIDTH 1u
#define SDADC_CCR_RECT_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_RECT_EN_SHIFT)) & SDADC_CCR_RECT_EN_MASK)
#define SDADC_CCR_FIFO_EN_MASK  0x4000u
#define SDADC_CCR_FIFO_EN_SHIFT 14u
#define SDADC_CCR_FIFO_EN_WIDTH 1u
#define SDADC_CCR_FIFO_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_FIFO_EN_SHIFT)) & SDADC_CCR_FIFO_EN_MASK)
#define SDADC_CCR_LMT_EN_MASK  0x2000u
#define SDADC_CCR_LMT_EN_SHIFT 13u
#define SDADC_CCR_LMT_EN_WIDTH 1u
#define SDADC_CCR_LMT_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_LMT_EN_SHIFT)) & SDADC_CCR_LMT_EN_MASK)
#define SDADC_CCR_ZCD_EN_MASK  0x1000u
#define SDADC_CCR_ZCD_EN_SHIFT 12u
#define SDADC_CCR_ZCD_EN_WIDTH 1u
#define SDADC_CCR_ZCD_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_ZCD_EN_SHIFT)) & SDADC_CCR_ZCD_EN_MASK)
#define SDADC_CCR_CAD_EN_MASK  0x200u
#define SDADC_CCR_CAD_EN_SHIFT 9u
#define SDADC_CCR_CAD_EN_WIDTH 1u
#define SDADC_CCR_CAD_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_CAD_EN_SHIFT)) & SDADC_CCR_CAD_EN_MASK)
#define SDADC_CCR_SCD_EN_MASK  0x100u
#define SDADC_CCR_SCD_EN_SHIFT 8u
#define SDADC_CCR_SCD_EN_WIDTH 1u
#define SDADC_CCR_SCD_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_SCD_EN_SHIFT)) & SDADC_CCR_SCD_EN_MASK)
#define SDADC_CCR_DMA_EN_MASK  0x8u
#define SDADC_CCR_DMA_EN_SHIFT 3u
#define SDADC_CCR_DMA_EN_WIDTH 1u
#define SDADC_CCR_DMA_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_DMA_EN_SHIFT)) & SDADC_CCR_DMA_EN_MASK)
#define SDADC_CCR_AF_EN_MASK  0x4u
#define SDADC_CCR_AF_EN_SHIFT 2u
#define SDADC_CCR_AF_EN_WIDTH 1u
#define SDADC_CCR_AF_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_AF_EN_SHIFT)) & SDADC_CCR_AF_EN_MASK)
#define SDADC_CCR_MF_EN_MASK  0x2u
#define SDADC_CCR_MF_EN_SHIFT 1u
#define SDADC_CCR_MF_EN_WIDTH 1u
#define SDADC_CCR_MF_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_MF_EN_SHIFT)) & SDADC_CCR_MF_EN_MASK)
#define SDADC_CCR_CH_EN_MASK  0x1u
#define SDADC_CCR_CH_EN_SHIFT 0u
#define SDADC_CCR_CH_EN_WIDTH 1u
#define SDADC_CCR_CH_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CCR_CH_EN_SHIFT)) & SDADC_CCR_CH_EN_MASK)
/* CCR0 Reg Mask */
#define SDADC_CCR_MASK        0x33C1F30Fu

/* CDR Bit Fields */
#define SDADC_CDR_AFCM_MASK   0x40000000u
#define SDADC_CDR_AFCM_SHIFT  30u
#define SDADC_CDR_AFCM_WIDTH  1u
#define SDADC_CDR_AFCM(x)     (((uint32)(((uint32)(x)) << SDADC_CDR_AFCM_SHIFT)) & SDADC_CDR_AFCM_MASK)
#define SDADC_CDR_AFORD_MASK  0x18000000u
#define SDADC_CDR_AFORD_SHIFT 27u
#define SDADC_CDR_AFORD_WIDTH 2u
#define SDADC_CDR_AFORD(x) \
    (((uint32)(((uint32)(x)) << SDADC_CDR_AFORD_SHIFT)) & SDADC_CDR_AFORD_MASK)
#define SDADC_CDR_AFOSR_MASK  0x1FF0000u
#define SDADC_CDR_AFOSR_SHIFT 16u
#define SDADC_CDR_AFOSR_WIDTH 9u
#define SDADC_CDR_AFOSR(x) \
    (((uint32)(((uint32)(x)) << SDADC_CDR_AFOSR_SHIFT)) & SDADC_CDR_AFOSR_MASK)
#define SDADC_CDR_MFCM_MASK   0xC000u
#define SDADC_CDR_MFCM_SHIFT  14u
#define SDADC_CDR_MFCM_WIDTH  2u
#define SDADC_CDR_MFCM(x)     (((uint32)(((uint32)(x)) << SDADC_CDR_MFCM_SHIFT)) & SDADC_CDR_MFCM_MASK)
#define SDADC_CDR_MFORD_MASK  0x3800u
#define SDADC_CDR_MFORD_SHIFT 11u
#define SDADC_CDR_MFORD_WIDTH 3u
#define SDADC_CDR_MFORD(x) \
    (((uint32)(((uint32)(x)) << SDADC_CDR_MFORD_SHIFT)) & SDADC_CDR_MFORD_MASK)
#define SDADC_CDR_MFOSR_MASK  0x1FFu
#define SDADC_CDR_MFOSR_SHIFT 0u
#define SDADC_CDR_MFOSR_WIDTH 9u
#define SDADC_CDR_MFOSR(x) \
    (((uint32)(((uint32)(x)) << SDADC_CDR_MFOSR_SHIFT)) & SDADC_CDR_MFOSR_MASK)
/* CDR0 Reg Mask */
#define SDADC_CDR_MASK             0x59FFF9FFu

/* CFR Bit Fields */
#define SDADC_CFR_SYNC_TRGEN_MASK  0x20000000u
#define SDADC_CFR_SYNC_TRGEN_SHIFT 29u
#define SDADC_CFR_SYNC_TRGEN_WIDTH 1u
#define SDADC_CFR_SYNC_TRGEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_SYNC_TRGEN_SHIFT)) & SDADC_CFR_SYNC_TRGEN_MASK)
#define SDADC_CFR_TRGLVL_MASK  0x10000000u
#define SDADC_CFR_TRGLVL_SHIFT 28u
#define SDADC_CFR_TRGLVL_WIDTH 1u
#define SDADC_CFR_TRGLVL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_TRGLVL_SHIFT)) & SDADC_CFR_TRGLVL_MASK)
#define SDADC_CFR_SYNC_TRGSEL_MASK  0xE000000u
#define SDADC_CFR_SYNC_TRGSEL_SHIFT 25u
#define SDADC_CFR_SYNC_TRGSEL_WIDTH 3u
#define SDADC_CFR_SYNC_TRGSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_SYNC_TRGSEL_SHIFT)) & SDADC_CFR_SYNC_TRGSEL_MASK)
#define SDADC_CFR_TRGSEL_MASK  0x1000000u
#define SDADC_CFR_TRGSEL_SHIFT 24u
#define SDADC_CFR_TRGSEL_WIDTH 1u
#define SDADC_CFR_TRGSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_TRGSEL_SHIFT)) & SDADC_CFR_TRGSEL_MASK)
#define SDADC_CFR_CLKEDG_MASK  0xC00000u
#define SDADC_CFR_CLKEDG_SHIFT 22u
#define SDADC_CFR_CLKEDG_WIDTH 2u
#define SDADC_CFR_CLKEDG(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_CLKEDG_SHIFT)) & SDADC_CFR_CLKEDG_MASK)
#define SDADC_CFR_CLKSEL_MASK  0x300000u
#define SDADC_CFR_CLKSEL_SHIFT 20u
#define SDADC_CFR_CLKSEL_WIDTH 2u
#define SDADC_CFR_CLKSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_CLKSEL_SHIFT)) & SDADC_CFR_CLKSEL_MASK)
#define SDADC_CFR_IBFMT_MASK  0x30000u
#define SDADC_CFR_IBFMT_SHIFT 16u
#define SDADC_CFR_IBFMT_WIDTH 2u
#define SDADC_CFR_IBFMT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_IBFMT_SHIFT)) & SDADC_CFR_IBFMT_MASK)
#define SDADC_CFR_FWMK_MASK    0x1C00u
#define SDADC_CFR_FWMK_SHIFT   10u
#define SDADC_CFR_FWMK_WIDTH   3u
#define SDADC_CFR_FWMK(x)      (((uint32)(((uint32)(x)) << SDADC_CFR_FWMK_SHIFT)) & SDADC_CFR_FWMK_MASK)
#define SDADC_CFR_CUTOFF_MASK  0x380u
#define SDADC_CFR_CUTOFF_SHIFT 7u
#define SDADC_CFR_CUTOFF_WIDTH 3u
#define SDADC_CFR_CUTOFF(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_CUTOFF_SHIFT)) & SDADC_CFR_CUTOFF_MASK)
#define SDADC_CFR_RDFMT_MASK  0x40u
#define SDADC_CFR_RDFMT_SHIFT 6u
#define SDADC_CFR_RDFMT_WIDTH 1u
#define SDADC_CFR_RDFMT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_RDFMT_SHIFT)) & SDADC_CFR_RDFMT_MASK)
#define SDADC_CFR_MFSHIFT_MASK  0x1Fu
#define SDADC_CFR_MFSHIFT_SHIFT 0u
#define SDADC_CFR_MFSHIFT_WIDTH 5u
#define SDADC_CFR_MFSHIFT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CFR_MFSHIFT_SHIFT)) & SDADC_CFR_MFSHIFT_MASK)
/* CFR0 Reg Mask */
#define SDADC_CFR_MASK            0x3FF31FDFu

/* CPR Bit Fields */
#define SDADC_CPR_HLMT_BKEN_MASK  0x80000000u
#define SDADC_CPR_HLMT_BKEN_SHIFT 31u
#define SDADC_CPR_HLMT_BKEN_WIDTH 1u
#define SDADC_CPR_HLMT_BKEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_HLMT_BKEN_SHIFT)) & SDADC_CPR_HLMT_BKEN_MASK)
#define SDADC_CPR_WLMT_BKEN_MASK  0x40000000u
#define SDADC_CPR_WLMT_BKEN_SHIFT 30u
#define SDADC_CPR_WLMT_BKEN_WIDTH 1u
#define SDADC_CPR_WLMT_BKEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_WLMT_BKEN_SHIFT)) & SDADC_CPR_WLMT_BKEN_MASK)
#define SDADC_CPR_LLMT_BKEN_MASK  0x20000000u
#define SDADC_CPR_LLMT_BKEN_SHIFT 29u
#define SDADC_CPR_LLMT_BKEN_WIDTH 1u
#define SDADC_CPR_LLMT_BKEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_LLMT_BKEN_SHIFT)) & SDADC_CPR_LLMT_BKEN_MASK)
#define SDADC_CPR_SCD_BKEN_MASK  0x8000000u
#define SDADC_CPR_SCD_BKEN_SHIFT 27u
#define SDADC_CPR_SCD_BKEN_WIDTH 1u
#define SDADC_CPR_SCD_BKEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_SCD_BKEN_SHIFT)) & SDADC_CPR_SCD_BKEN_MASK)
#define SDADC_CPR_CAD_BKEN_MASK  0x4000000u
#define SDADC_CPR_CAD_BKEN_SHIFT 26u
#define SDADC_CPR_CAD_BKEN_WIDTH 1u
#define SDADC_CPR_CAD_BKEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_CAD_BKEN_SHIFT)) & SDADC_CPR_CAD_BKEN_MASK)
#define SDADC_CPR_LMTF_PROTEN_MASK  0x2000000u
#define SDADC_CPR_LMTF_PROTEN_SHIFT 25u
#define SDADC_CPR_LMTF_PROTEN_WIDTH 1u
#define SDADC_CPR_LMTF_PROTEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_LMTF_PROTEN_SHIFT)) & SDADC_CPR_LMTF_PROTEN_MASK)
#define SDADC_CPR_LMTR_PROTEN_MASK  0x1000000u
#define SDADC_CPR_LMTR_PROTEN_SHIFT 24u
#define SDADC_CPR_LMTR_PROTEN_WIDTH 1u
#define SDADC_CPR_LMTR_PROTEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_LMTR_PROTEN_SHIFT)) & SDADC_CPR_LMTR_PROTEN_MASK)
#define SDADC_CPR_HYSTR_PROTEN_MASK  0x800000u
#define SDADC_CPR_HYSTR_PROTEN_SHIFT 23u
#define SDADC_CPR_HYSTR_PROTEN_WIDTH 1u
#define SDADC_CPR_HYSTR_PROTEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_HYSTR_PROTEN_SHIFT)) & SDADC_CPR_HYSTR_PROTEN_MASK)
#define SDADC_CPR_SCD_PROTEN_MASK  0x400000u
#define SDADC_CPR_SCD_PROTEN_SHIFT 22u
#define SDADC_CPR_SCD_PROTEN_WIDTH 1u
#define SDADC_CPR_SCD_PROTEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_SCD_PROTEN_SHIFT)) & SDADC_CPR_SCD_PROTEN_MASK)
#define SDADC_CPR_CAD_PROTEN_MASK  0x200000u
#define SDADC_CPR_CAD_PROTEN_SHIFT 21u
#define SDADC_CPR_CAD_PROTEN_WIDTH 1u
#define SDADC_CPR_CAD_PROTEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_CAD_PROTEN_SHIFT)) & SDADC_CPR_CAD_PROTEN_MASK)
#define SDADC_CPR_LMTAVT_MASK  0x100000u
#define SDADC_CPR_LMTAVT_SHIFT 20u
#define SDADC_CPR_LMTAVT_WIDTH 1u
#define SDADC_CPR_LMTAVT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_LMTAVT_SHIFT)) & SDADC_CPR_LMTAVT_MASK)
#define SDADC_CPR_CADLMT_MASK  0xF0000u
#define SDADC_CPR_CADLMT_SHIFT 16u
#define SDADC_CPR_CADLMT_WIDTH 4u
#define SDADC_CPR_CADLMT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_CADLMT_SHIFT)) & SDADC_CPR_CADLMT_MASK)
#define SDADC_CPR_LMTOPT_MASK  0xC000u
#define SDADC_CPR_LMTOPT_SHIFT 14u
#define SDADC_CPR_LMTOPT_WIDTH 2u
#define SDADC_CPR_LMTOPT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_LMTOPT_SHIFT)) & SDADC_CPR_LMTOPT_MASK)
#define SDADC_CPR_SCDOPT_MASK  0x3000u
#define SDADC_CPR_SCDOPT_SHIFT 12u
#define SDADC_CPR_SCDOPT_WIDTH 2u
#define SDADC_CPR_SCDOPT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_SCDOPT_SHIFT)) & SDADC_CPR_SCDOPT_MASK)
#define SDADC_CPR_SCDCM_MASK  0x800u
#define SDADC_CPR_SCDCM_SHIFT 11u
#define SDADC_CPR_SCDCM_WIDTH 1u
#define SDADC_CPR_SCDCM(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_SCDCM_SHIFT)) & SDADC_CPR_SCDCM_MASK)
#define SDADC_CPR_SCDLMT_MASK  0xFFu
#define SDADC_CPR_SCDLMT_SHIFT 0u
#define SDADC_CPR_SCDLMT_WIDTH 8u
#define SDADC_CPR_SCDLMT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CPR_SCDLMT_SHIFT)) & SDADC_CPR_SCDLMT_MASK)
/* CPR0 Reg Mask */
#define SDADC_CPR_MASK          0xEFFFF8FFu

/* CBR Bit Fields */
#define SDADC_CBR_BIAS_MASK     0xFFFFFF00u
#define SDADC_CBR_BIAS_SHIFT    8u
#define SDADC_CBR_BIAS_WIDTH    24u
#define SDADC_CBR_BIAS(x)       (((uint32)(((uint32)(x)) << SDADC_CBR_BIAS_SHIFT)) & SDADC_CBR_BIAS_MASK)
/* CBR0 Reg Mask */
#define SDADC_CBR_MASK          0xFFFFFF00u

/* CLLMT Bit Fields */
#define SDADC_CLLMT_LOLMT_MASK  0xFFFFFF00u
#define SDADC_CLLMT_LOLMT_SHIFT 8u
#define SDADC_CLLMT_LOLMT_WIDTH 24u
#define SDADC_CLLMT_LOLMT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CLLMT_LOLMT_SHIFT)) & SDADC_CLLMT_LOLMT_MASK)
/* CLLMT0 Reg Mask */
#define SDADC_CLLMT_MASK        0xFFFFFF00u

/* CHLMT Bit Fields */
#define SDADC_CHLMT_HILMT_MASK  0xFFFFFF00u
#define SDADC_CHLMT_HILMT_SHIFT 8u
#define SDADC_CHLMT_HILMT_WIDTH 24u
#define SDADC_CHLMT_HILMT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CHLMT_HILMT_SHIFT)) & SDADC_CHLMT_HILMT_MASK)
/* CHLMT0 Reg Mask */
#define SDADC_CHLMT_MASK         0xFFFFFF00u

/* CRDATA Bit Fields */
#define SDADC_CRDATA_RDATA_MASK  0xFFFFFFFFu
#define SDADC_CRDATA_RDATA_SHIFT 0u
#define SDADC_CRDATA_RDATA_WIDTH 32u
#define SDADC_CRDATA_RDATA(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRDATA_RDATA_SHIFT)) & SDADC_CRDATA_RDATA_MASK)
/* CRDATA0 Reg Mask */
#define SDADC_CRDATA_MASK          0xFFFFFFFFu

/* CMPDATA Bit Fields */
#define SDADC_CMPDATA_MPDATA_MASK  0xFFFFFFFFu
#define SDADC_CMPDATA_MPDATA_SHIFT 0u
#define SDADC_CMPDATA_MPDATA_WIDTH 32u
#define SDADC_CMPDATA_MPDATA(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMPDATA_MPDATA_SHIFT)) & SDADC_CMPDATA_MPDATA_MASK)
/* CMPDATA0 Reg Mask */
#define SDADC_CMPDATA_MASK       0xFFFFFFFFu

/* PWM_GEN Bit Fields */
#define SDADC_PWM_GEN_SIGN_MASK  0x40000000u
#define SDADC_PWM_GEN_SIGN_SHIFT 30u
#define SDADC_PWM_GEN_SIGN_WIDTH 1u
#define SDADC_PWM_GEN_SIGN(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_SIGN_SHIFT)) & SDADC_PWM_GEN_SIGN_MASK)
#define SDADC_PWM_GEN_PWM_CNT_MASK  0x1F000000u
#define SDADC_PWM_GEN_PWM_CNT_SHIFT 24u
#define SDADC_PWM_GEN_PWM_CNT_WIDTH 5u
#define SDADC_PWM_GEN_PWM_CNT(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_PWM_CNT_SHIFT)) & SDADC_PWM_GEN_PWM_CNT_MASK)
#define SDADC_PWM_GEN_PAT_CNT_MASK  0x1F0000u
#define SDADC_PWM_GEN_PAT_CNT_SHIFT 16u
#define SDADC_PWM_GEN_PAT_CNT_WIDTH 5u
#define SDADC_PWM_GEN_PAT_CNT(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_PAT_CNT_SHIFT)) & SDADC_PWM_GEN_PAT_CNT_MASK)
#define SDADC_PWM_GEN_ON_MASK  0x8000u
#define SDADC_PWM_GEN_ON_SHIFT 15u
#define SDADC_PWM_GEN_ON_WIDTH 1u
#define SDADC_PWM_GEN_ON(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_ON_SHIFT)) & SDADC_PWM_GEN_ON_MASK)
#define SDADC_PWM_GEN_TRGSIGN_OEN_MASK  0x40u
#define SDADC_PWM_GEN_TRGSIGN_OEN_SHIFT 6u
#define SDADC_PWM_GEN_TRGSIGN_OEN_WIDTH 1u
#define SDADC_PWM_GEN_TRGSIGN_OEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_TRGSIGN_OEN_SHIFT)) & SDADC_PWM_GEN_TRGSIGN_OEN_MASK)
#define SDADC_PWM_GEN_CLKSEL_MASK  0x30u
#define SDADC_PWM_GEN_CLKSEL_SHIFT 4u
#define SDADC_PWM_GEN_CLKSEL_WIDTH 2u
#define SDADC_PWM_GEN_CLKSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_CLKSEL_SHIFT)) & SDADC_PWM_GEN_CLKSEL_MASK)
#define SDADC_PWM_GEN_BIT_REV_MASK  0x8u
#define SDADC_PWM_GEN_BIT_REV_SHIFT 3u
#define SDADC_PWM_GEN_BIT_REV_WIDTH 1u
#define SDADC_PWM_GEN_BIT_REV(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_BIT_REV_SHIFT)) & SDADC_PWM_GEN_BIT_REV_MASK)
#define SDADC_PWM_GEN_POL_MASK  0x4u
#define SDADC_PWM_GEN_POL_SHIFT 2u
#define SDADC_PWM_GEN_POL_WIDTH 1u
#define SDADC_PWM_GEN_POL(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_POL_SHIFT)) & SDADC_PWM_GEN_POL_MASK)
#define SDADC_PWM_GEN_PATTERN_MASK  0x3u
#define SDADC_PWM_GEN_PATTERN_SHIFT 0u
#define SDADC_PWM_GEN_PATTERN_WIDTH 2u
#define SDADC_PWM_GEN_PATTERN(x) \
    (((uint32)(((uint32)(x)) << SDADC_PWM_GEN_PATTERN_SHIFT)) & SDADC_PWM_GEN_PATTERN_MASK)
/* PWM_GEN Reg Mask */
#define SDADC_PWM_GEN_MASK       0x5F1F807Fu

/* EXTIS Bit Fields */
#define SDADC_EXTIS_TSVLD2_MASK  0x4000000u
#define SDADC_EXTIS_TSVLD2_SHIFT 26u
#define SDADC_EXTIS_TSVLD2_WIDTH 1u
#define SDADC_EXTIS_TSVLD2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_TSVLD2_SHIFT)) & SDADC_EXTIS_TSVLD2_MASK)
#define SDADC_EXTIS_TSVLD1_MASK  0x2000000u
#define SDADC_EXTIS_TSVLD1_SHIFT 25u
#define SDADC_EXTIS_TSVLD1_WIDTH 1u
#define SDADC_EXTIS_TSVLD1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_TSVLD1_SHIFT)) & SDADC_EXTIS_TSVLD1_MASK)
#define SDADC_EXTIS_TSVLD0_MASK  0x1000000u
#define SDADC_EXTIS_TSVLD0_SHIFT 24u
#define SDADC_EXTIS_TSVLD0_WIDTH 1u
#define SDADC_EXTIS_TSVLD0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_TSVLD0_SHIFT)) & SDADC_EXTIS_TSVLD0_MASK)
#define SDADC_EXTIS_TSIGN_P2N2_MASK  0x40000u
#define SDADC_EXTIS_TSIGN_P2N2_SHIFT 18u
#define SDADC_EXTIS_TSIGN_P2N2_WIDTH 1u
#define SDADC_EXTIS_TSIGN_P2N2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_TSIGN_P2N2_SHIFT)) & SDADC_EXTIS_TSIGN_P2N2_MASK)
#define SDADC_EXTIS_TSIGN_P2N1_MASK  0x20000u
#define SDADC_EXTIS_TSIGN_P2N1_SHIFT 17u
#define SDADC_EXTIS_TSIGN_P2N1_WIDTH 1u
#define SDADC_EXTIS_TSIGN_P2N1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_TSIGN_P2N1_SHIFT)) & SDADC_EXTIS_TSIGN_P2N1_MASK)
#define SDADC_EXTIS_TSIGN_P2N0_MASK  0x10000u
#define SDADC_EXTIS_TSIGN_P2N0_SHIFT 16u
#define SDADC_EXTIS_TSIGN_P2N0_WIDTH 1u
#define SDADC_EXTIS_TSIGN_P2N0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_TSIGN_P2N0_SHIFT)) & SDADC_EXTIS_TSIGN_P2N0_MASK)
#define SDADC_EXTIS_MCIC_COC2_MASK  0x400u
#define SDADC_EXTIS_MCIC_COC2_SHIFT 10u
#define SDADC_EXTIS_MCIC_COC2_WIDTH 1u
#define SDADC_EXTIS_MCIC_COC2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_MCIC_COC2_SHIFT)) & SDADC_EXTIS_MCIC_COC2_MASK)
#define SDADC_EXTIS_MCIC_COC1_MASK  0x200u
#define SDADC_EXTIS_MCIC_COC1_SHIFT 9u
#define SDADC_EXTIS_MCIC_COC1_WIDTH 1u
#define SDADC_EXTIS_MCIC_COC1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_MCIC_COC1_SHIFT)) & SDADC_EXTIS_MCIC_COC1_MASK)
#define SDADC_EXTIS_MCIC_COC0_MASK  0x100u
#define SDADC_EXTIS_MCIC_COC0_SHIFT 8u
#define SDADC_EXTIS_MCIC_COC0_WIDTH 1u
#define SDADC_EXTIS_MCIC_COC0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_MCIC_COC0_SHIFT)) & SDADC_EXTIS_MCIC_COC0_MASK)
#define SDADC_EXTIS_SD_CAPVLD2_MASK  0x4u
#define SDADC_EXTIS_SD_CAPVLD2_SHIFT 2u
#define SDADC_EXTIS_SD_CAPVLD2_WIDTH 1u
#define SDADC_EXTIS_SD_CAPVLD2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_SD_CAPVLD2_SHIFT)) & SDADC_EXTIS_SD_CAPVLD2_MASK)
#define SDADC_EXTIS_SD_CAPVLD1_MASK  0x2u
#define SDADC_EXTIS_SD_CAPVLD1_SHIFT 1u
#define SDADC_EXTIS_SD_CAPVLD1_WIDTH 1u
#define SDADC_EXTIS_SD_CAPVLD1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_SD_CAPVLD1_SHIFT)) & SDADC_EXTIS_SD_CAPVLD1_MASK)
#define SDADC_EXTIS_SD_CAPVLD0_MASK  0x1u
#define SDADC_EXTIS_SD_CAPVLD0_SHIFT 0u
#define SDADC_EXTIS_SD_CAPVLD0_WIDTH 1u
#define SDADC_EXTIS_SD_CAPVLD0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_SD_CAPVLD0_SHIFT)) & SDADC_EXTIS_SD_CAPVLD0_MASK)
#define SDADC_EXTIS_MCIC_COC_MASK  0x700u
#define SDADC_EXTIS_MCIC_COC_SHIFT 8u
#define SDADC_EXTIS_MCIC_COC_WIDTH 3u
#define SDADC_EXTIS_MCIC_COC(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_MCIC_COC_SHIFT)) & SDADC_EXTIS_MCIC_COC_MASK)
#define SDADC_EXTIS_TSVLD_MASK  0x7000000u
#define SDADC_EXTIS_TSVLD_SHIFT 24u
#define SDADC_EXTIS_TSVLD_WIDTH 3u
#define SDADC_EXTIS_TSVLD(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIS_TSVLD_SHIFT)) & SDADC_EXTIS_TSVLD_MASK)
/* EXTIS Reg Mask */
#define SDADC_EXTIS_MASK            0x07070707u
#define SDADC_EXTIS_CH0_MASK        0x01010101u

/* EXTIE Bit Fields */
#define SDADC_EXTIE_TSVLD_IE2_MASK  0x4000000u
#define SDADC_EXTIE_TSVLD_IE2_SHIFT 26u
#define SDADC_EXTIE_TSVLD_IE2_WIDTH 1u
#define SDADC_EXTIE_TSVLD_IE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_TSVLD_IE2_SHIFT)) & SDADC_EXTIE_TSVLD_IE2_MASK)
#define SDADC_EXTIE_TSVLD_IE1_MASK  0x2000000u
#define SDADC_EXTIE_TSVLD_IE1_SHIFT 25u
#define SDADC_EXTIE_TSVLD_IE1_WIDTH 1u
#define SDADC_EXTIE_TSVLD_IE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_TSVLD_IE1_SHIFT)) & SDADC_EXTIE_TSVLD_IE1_MASK)
#define SDADC_EXTIE_TSVLD_IE0_MASK  0x1000000u
#define SDADC_EXTIE_TSVLD_IE0_SHIFT 24u
#define SDADC_EXTIE_TSVLD_IE0_WIDTH 1u
#define SDADC_EXTIE_TSVLD_IE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_TSVLD_IE0_SHIFT)) & SDADC_EXTIE_TSVLD_IE0_MASK)
#define SDADC_EXTIE_TSIGN_P2N_IE2_MASK  0x40000u
#define SDADC_EXTIE_TSIGN_P2N_IE2_SHIFT 18u
#define SDADC_EXTIE_TSIGN_P2N_IE2_WIDTH 1u
#define SDADC_EXTIE_TSIGN_P2N_IE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_TSIGN_P2N_IE2_SHIFT)) & SDADC_EXTIE_TSIGN_P2N_IE2_MASK)
#define SDADC_EXTIE_TSIGN_P2N_IE1_MASK  0x20000u
#define SDADC_EXTIE_TSIGN_P2N_IE1_SHIFT 17u
#define SDADC_EXTIE_TSIGN_P2N_IE1_WIDTH 1u
#define SDADC_EXTIE_TSIGN_P2N_IE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_TSIGN_P2N_IE1_SHIFT)) & SDADC_EXTIE_TSIGN_P2N_IE1_MASK)
#define SDADC_EXTIE_TSIGN_P2N_IE0_MASK  0x10000u
#define SDADC_EXTIE_TSIGN_P2N_IE0_SHIFT 16u
#define SDADC_EXTIE_TSIGN_P2N_IE0_WIDTH 1u
#define SDADC_EXTIE_TSIGN_P2N_IE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_TSIGN_P2N_IE0_SHIFT)) & SDADC_EXTIE_TSIGN_P2N_IE0_MASK)
#define SDADC_EXTIE_SD_CAPVLD_IE2_MASK  0x4u
#define SDADC_EXTIE_SD_CAPVLD_IE2_SHIFT 2u
#define SDADC_EXTIE_SD_CAPVLD_IE2_WIDTH 1u
#define SDADC_EXTIE_SD_CAPVLD_IE2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_SD_CAPVLD_IE2_SHIFT)) & SDADC_EXTIE_SD_CAPVLD_IE2_MASK)
#define SDADC_EXTIE_SD_CAPVLD_IE1_MASK  0x2u
#define SDADC_EXTIE_SD_CAPVLD_IE1_SHIFT 1u
#define SDADC_EXTIE_SD_CAPVLD_IE1_WIDTH 1u
#define SDADC_EXTIE_SD_CAPVLD_IE1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_SD_CAPVLD_IE1_SHIFT)) & SDADC_EXTIE_SD_CAPVLD_IE1_MASK)
#define SDADC_EXTIE_SD_CAPVLD_IE0_MASK  0x1u
#define SDADC_EXTIE_SD_CAPVLD_IE0_SHIFT 0u
#define SDADC_EXTIE_SD_CAPVLD_IE0_WIDTH 1u
#define SDADC_EXTIE_SD_CAPVLD_IE0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_SD_CAPVLD_IE0_SHIFT)) & SDADC_EXTIE_SD_CAPVLD_IE0_MASK)
#define SDADC_EXTIE_TSVLD_IE_MASK  0x7000000u
#define SDADC_EXTIE_TSVLD_IE_SHIFT 24u
#define SDADC_EXTIE_TSVLD_IE_WIDTH 3u
#define SDADC_EXTIE_TSVLD_IE(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTIE_TSVLD_IE_SHIFT)) & SDADC_EXTIE_TSVLD_IE_MASK)
/* EXTIE Reg Mask */
#define SDADC_EXTIE_MASK                0x07070007u
#define SDADC_EXTIE_CH0_MASK            0x01010001u

/* EXTCTRL Bit Fields */
#define SDADC_EXTCTRL_INTG_STRIG2_MASK  0x4u
#define SDADC_EXTCTRL_INTG_STRIG2_SHIFT 2u
#define SDADC_EXTCTRL_INTG_STRIG2_WIDTH 1u
#define SDADC_EXTCTRL_INTG_STRIG2(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTCTRL_INTG_STRIG2_SHIFT)) & SDADC_EXTCTRL_INTG_STRIG2_MASK)
#define SDADC_EXTCTRL_INTG_STRIG1_MASK  0x2u
#define SDADC_EXTCTRL_INTG_STRIG1_SHIFT 1u
#define SDADC_EXTCTRL_INTG_STRIG1_WIDTH 1u
#define SDADC_EXTCTRL_INTG_STRIG1(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTCTRL_INTG_STRIG1_SHIFT)) & SDADC_EXTCTRL_INTG_STRIG1_MASK)
#define SDADC_EXTCTRL_INTG_STRIG0_MASK  0x1u
#define SDADC_EXTCTRL_INTG_STRIG0_SHIFT 0u
#define SDADC_EXTCTRL_INTG_STRIG0_WIDTH 1u
#define SDADC_EXTCTRL_INTG_STRIG0(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTCTRL_INTG_STRIG0_SHIFT)) & SDADC_EXTCTRL_INTG_STRIG0_MASK)
#define SDADC_EXTCTRL_INTG_STRIG_MASK  0x7u
#define SDADC_EXTCTRL_INTG_STRIG_SHIFT 0u
#define SDADC_EXTCTRL_INTG_STRIG_WIDTH 3u
#define SDADC_EXTCTRL_INTG_STRIG(x) \
    (((uint32)(((uint32)(x)) << SDADC_EXTCTRL_INTG_STRIG_SHIFT)) & SDADC_EXTCTRL_INTG_STRIG_MASK)
/* EXTCTRL Reg Mask */
#define SDADC_EXTCTRL_MASK        0x00000007u

/* BACSR Bit Fields */
#define SDADC_BACSR_BIAS_ON_MASK  0x80000000u
#define SDADC_BACSR_BIAS_ON_SHIFT 31u
#define SDADC_BACSR_BIAS_ON_WIDTH 1u
#define SDADC_BACSR_BIAS_ON(x) \
    (((uint32)(((uint32)(x)) << SDADC_BACSR_BIAS_ON_SHIFT)) & SDADC_BACSR_BIAS_ON_MASK)
#define SDADC_BACSR_BSTC_MASK  0xFF0000u
#define SDADC_BACSR_BSTC_SHIFT 16u
#define SDADC_BACSR_BSTC_WIDTH 8u
#define SDADC_BACSR_BSTC(x) \
    (((uint32)(((uint32)(x)) << SDADC_BACSR_BSTC_SHIFT)) & SDADC_BACSR_BSTC_MASK)
#define SDADC_BACSR_VCM_BEN_MASK  0x4000u
#define SDADC_BACSR_VCM_BEN_SHIFT 14u
#define SDADC_BACSR_VCM_BEN_WIDTH 1u
#define SDADC_BACSR_VCM_BEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_BACSR_VCM_BEN_SHIFT)) & SDADC_BACSR_VCM_BEN_MASK)
#define SDADC_BACSR_HFVREF_EN_MASK  0xF0u
#define SDADC_BACSR_HFVREF_EN_SHIFT 4u
#define SDADC_BACSR_HFVREF_EN_WIDTH 4u
#define SDADC_BACSR_HFVREF_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_BACSR_HFVREF_EN_SHIFT)) & SDADC_BACSR_HFVREF_EN_MASK)
#define SDADC_BACSR_BIAS_EN_MASK  0x1u
#define SDADC_BACSR_BIAS_EN_SHIFT 0u
#define SDADC_BACSR_BIAS_EN_WIDTH 1u
#define SDADC_BACSR_BIAS_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_BACSR_BIAS_EN_SHIFT)) & SDADC_BACSR_BIAS_EN_MASK)
/* BACSR0 Reg Mask */
#define SDADC_BACSR_MASK         0x80FF40F1u

/* CRTCSR Bit Fields */
#define SDADC_CRTCSR_DSIGN_MASK  0x80000000u
#define SDADC_CRTCSR_DSIGN_SHIFT 31u
#define SDADC_CRTCSR_DSIGN_WIDTH 1u
#define SDADC_CRTCSR_DSIGN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_DSIGN_SHIFT)) & SDADC_CRTCSR_DSIGN_MASK)
#define SDADC_CRTCSR_SSIGN_MASK  0x40000000u
#define SDADC_CRTCSR_SSIGN_SHIFT 30u
#define SDADC_CRTCSR_SSIGN_WIDTH 1u
#define SDADC_CRTCSR_SSIGN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_SSIGN_SHIFT)) & SDADC_CRTCSR_SSIGN_MASK)
#define SDADC_CRTCSR_SDON_MASK  0x20000000u
#define SDADC_CRTCSR_SDON_SHIFT 29u
#define SDADC_CRTCSR_SDON_WIDTH 1u
#define SDADC_CRTCSR_SDON(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_SDON_SHIFT)) & SDADC_CRTCSR_SDON_MASK)
#define SDADC_CRTCSR_TSIGN_MASK  0x10000000u
#define SDADC_CRTCSR_TSIGN_SHIFT 28u
#define SDADC_CRTCSR_TSIGN_WIDTH 1u
#define SDADC_CRTCSR_TSIGN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_TSIGN_SHIFT)) & SDADC_CRTCSR_TSIGN_MASK)
#define SDADC_CRTCSR_DLY_TRG_MASK  0xFF0000u
#define SDADC_CRTCSR_DLY_TRG_SHIFT 16u
#define SDADC_CRTCSR_DLY_TRG_WIDTH 8u
#define SDADC_CRTCSR_DLY_TRG(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_DLY_TRG_SHIFT)) & SDADC_CRTCSR_DLY_TRG_MASK)
#define SDADC_CRTCSR_CTRGSIGN_OEN_MASK  0x8000u
#define SDADC_CRTCSR_CTRGSIGN_OEN_SHIFT 15u
#define SDADC_CRTCSR_CTRGSIGN_OEN_WIDTH 1u
#define SDADC_CRTCSR_CTRGSIGN_OEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_CTRGSIGN_OEN_SHIFT)) & SDADC_CRTCSR_CTRGSIGN_OEN_MASK)
#define SDADC_CRTCSR_SSCH_MASK  0xF00u
#define SDADC_CRTCSR_SSCH_SHIFT 8u
#define SDADC_CRTCSR_SSCH_WIDTH 4u
#define SDADC_CRTCSR_SSCH(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_SSCH_SHIFT)) & SDADC_CRTCSR_SSCH_MASK)
#define SDADC_CRTCSR_SSRC_MASK  0x30u
#define SDADC_CRTCSR_SSRC_SHIFT 4u
#define SDADC_CRTCSR_SSRC_WIDTH 2u
#define SDADC_CRTCSR_SSRC(x) \
    (((uint32)(((uint32)(x)) << SDADC_CRTCSR_SSRC_SHIFT)) & SDADC_CRTCSR_SSRC_MASK)
/* CRTCSR0 Reg Mask */
#define SDADC_CRTCSR_MASK        0xF0FF8F30u

/* CSDR Bit Fields */
#define SDADC_CSDR_DLY_NEG_MASK  0xFF000000u
#define SDADC_CSDR_DLY_NEG_SHIFT 24u
#define SDADC_CSDR_DLY_NEG_WIDTH 8u
#define SDADC_CSDR_DLY_NEG(x) \
    (((uint32)(((uint32)(x)) << SDADC_CSDR_DLY_NEG_SHIFT)) & SDADC_CSDR_DLY_NEG_MASK)
#define SDADC_CSDR_DLY_POS_MASK  0xFF0000u
#define SDADC_CSDR_DLY_POS_SHIFT 16u
#define SDADC_CSDR_DLY_POS_WIDTH 8u
#define SDADC_CSDR_DLY_POS(x) \
    (((uint32)(((uint32)(x)) << SDADC_CSDR_DLY_POS_SHIFT)) & SDADC_CSDR_DLY_POS_MASK)
#define SDADC_CSDR_SD_CAP_MASK  0xFF00u
#define SDADC_CSDR_SD_CAP_SHIFT 8u
#define SDADC_CSDR_SD_CAP_WIDTH 8u
#define SDADC_CSDR_SD_CAP(x) \
    (((uint32)(((uint32)(x)) << SDADC_CSDR_SD_CAP_SHIFT)) & SDADC_CSDR_SD_CAP_MASK)
#define SDADC_CSDR_SD_CNT_MASK  0xFFu
#define SDADC_CSDR_SD_CNT_SHIFT 0u
#define SDADC_CSDR_SD_CNT_WIDTH 8u
#define SDADC_CSDR_SD_CNT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CSDR_SD_CNT_SHIFT)) & SDADC_CSDR_SD_CNT_MASK)
/* CSDR0 Reg Mask */
#define SDADC_CSDR_MASK           0xFFFFFFFFu

/* CICFR Bit Fields */
#define SDADC_CICFR_NVALINT_MASK  0x3F000000u
#define SDADC_CICFR_NVALINT_SHIFT 24u
#define SDADC_CICFR_NVALINT_WIDTH 6u
#define SDADC_CICFR_NVALINT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_NVALINT_SHIFT)) & SDADC_CICFR_NVALINT_MASK)
#define SDADC_CICFR_NVALDIS_MASK  0x3F0000u
#define SDADC_CICFR_NVALDIS_SHIFT 16u
#define SDADC_CICFR_NVALDIS_WIDTH 6u
#define SDADC_CICFR_NVALDIS(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_NVALDIS_SHIFT)) & SDADC_CICFR_NVALDIS_MASK)
#define SDADC_CICFR_SYNC_TRGEN_MASK  0x8000u
#define SDADC_CICFR_SYNC_TRGEN_SHIFT 15u
#define SDADC_CICFR_SYNC_TRGEN_WIDTH 1u
#define SDADC_CICFR_SYNC_TRGEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_SYNC_TRGEN_SHIFT)) & SDADC_CICFR_SYNC_TRGEN_MASK)
#define SDADC_CICFR_SYNC_TRGSEL_MASK  0x7000u
#define SDADC_CICFR_SYNC_TRGSEL_SHIFT 12u
#define SDADC_CICFR_SYNC_TRGSEL_WIDTH 3u
#define SDADC_CICFR_SYNC_TRGSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_SYNC_TRGSEL_SHIFT)) & SDADC_CICFR_SYNC_TRGSEL_MASK)
#define SDADC_CICFR_NVALREP_MASK  0xF00u
#define SDADC_CICFR_NVALREP_SHIFT 8u
#define SDADC_CICFR_NVALREP_WIDTH 4u
#define SDADC_CICFR_NVALREP(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_NVALREP_SHIFT)) & SDADC_CICFR_NVALREP_MASK)
#define SDADC_CICFR_ITRSEL_MASK  0x80u
#define SDADC_CICFR_ITRSEL_SHIFT 7u
#define SDADC_CICFR_ITRSEL_WIDTH 1u
#define SDADC_CICFR_ITRSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_ITRSEL_SHIFT)) & SDADC_CICFR_ITRSEL_MASK)
#define SDADC_CICFR_HTRPOL_MASK  0x40u
#define SDADC_CICFR_HTRPOL_SHIFT 6u
#define SDADC_CICFR_HTRPOL_WIDTH 1u
#define SDADC_CICFR_HTRPOL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_HTRPOL_SHIFT)) & SDADC_CICFR_HTRPOL_MASK)
#define SDADC_CICFR_FCRC_MASK  0x20u
#define SDADC_CICFR_FCRC_SHIFT 5u
#define SDADC_CICFR_FCRC_WIDTH 1u
#define SDADC_CICFR_FCRC(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_FCRC_SHIFT)) & SDADC_CICFR_FCRC_MASK)
#define SDADC_CICFR_EXTSTP_MASK  0x10u
#define SDADC_CICFR_EXTSTP_SHIFT 4u
#define SDADC_CICFR_EXTSTP_WIDTH 1u
#define SDADC_CICFR_EXTSTP(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_EXTSTP_SHIFT)) & SDADC_CICFR_EXTSTP_MASK)
#define SDADC_CICFR_IOGT_MASK  0x8u
#define SDADC_CICFR_IOGT_SHIFT 3u
#define SDADC_CICFR_IOGT_WIDTH 1u
#define SDADC_CICFR_IOGT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_IOGT_SHIFT)) & SDADC_CICFR_IOGT_MASK)
#define SDADC_CICFR_ISVAL_MASK  0x7u
#define SDADC_CICFR_ISVAL_SHIFT 0u
#define SDADC_CICFR_ISVAL_WIDTH 3u
#define SDADC_CICFR_ISVAL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CICFR_ISVAL_SHIFT)) & SDADC_CICFR_ISVAL_MASK)
/* CICFR0 Reg Mask */
#define SDADC_CICFR_MASK        0x3F3FFFFFu

/* CISR Bit Fields */
#define SDADC_CISR_INTGON_MASK  0x8000u
#define SDADC_CISR_INTGON_SHIFT 15u
#define SDADC_CISR_INTGON_WIDTH 1u
#define SDADC_CISR_INTGON(x) \
    (((uint32)(((uint32)(x)) << SDADC_CISR_INTGON_SHIFT)) & SDADC_CISR_INTGON_MASK)
#define SDADC_CISR_REPCNT_MASK  0xF00u
#define SDADC_CISR_REPCNT_SHIFT 8u
#define SDADC_CISR_REPCNT_WIDTH 4u
#define SDADC_CISR_REPCNT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CISR_REPCNT_SHIFT)) & SDADC_CISR_REPCNT_MASK)
#define SDADC_CISR_VALCNT_MASK  0x3Fu
#define SDADC_CISR_VALCNT_SHIFT 0u
#define SDADC_CISR_VALCNT_WIDTH 6u
#define SDADC_CISR_VALCNT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CISR_VALCNT_SHIFT)) & SDADC_CISR_VALCNT_MASK)
/* CISR0 Reg Mask */
#define SDADC_CISR_MASK          0x00008F3Fu

/* CIVAL Bit Fields */
#define SDADC_CIVAL_INTVAL_MASK  0xFFFFFFFCu
#define SDADC_CIVAL_INTVAL_SHIFT 2u
#define SDADC_CIVAL_INTVAL_WIDTH 30u
#define SDADC_CIVAL_INTVAL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CIVAL_INTVAL_SHIFT)) & SDADC_CIVAL_INTVAL_MASK)
/* CIVAL0 Reg Mask */
#define SDADC_CIVAL_MASK         0xFFFFFFFCu

/* CMACSR Bit Fields */
#define SDADC_CMACSR_MASEL_MASK  0x80000000u
#define SDADC_CMACSR_MASEL_SHIFT 31u
#define SDADC_CMACSR_MASEL_WIDTH 1u
#define SDADC_CMACSR_MASEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_MASEL_SHIFT)) & SDADC_CMACSR_MASEL_MASK)
#define SDADC_CMACSR_MACLKSEL_MASK  0x60000000u
#define SDADC_CMACSR_MACLKSEL_SHIFT 29u
#define SDADC_CMACSR_MACLKSEL_WIDTH 2u
#define SDADC_CMACSR_MACLKSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_MACLKSEL_SHIFT)) & SDADC_CMACSR_MACLKSEL_MASK)
#define SDADC_CMACSR_RSTSEL_MASK  0xF000000u
#define SDADC_CMACSR_RSTSEL_SHIFT 24u
#define SDADC_CMACSR_RSTSEL_WIDTH 4u
#define SDADC_CMACSR_RSTSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_RSTSEL_SHIFT)) & SDADC_CMACSR_RSTSEL_MASK)
#define SDADC_CMACSR_DITHER_EN_MASK  0x800000u
#define SDADC_CMACSR_DITHER_EN_SHIFT 23u
#define SDADC_CMACSR_DITHER_EN_WIDTH 1u
#define SDADC_CMACSR_DITHER_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_DITHER_EN_SHIFT)) & SDADC_CMACSR_DITHER_EN_MASK)
#define SDADC_CMACSR_INCFGPV11_MASK  0x400000u
#define SDADC_CMACSR_INCFGPV11_SHIFT 22u
#define SDADC_CMACSR_INCFGPV11_WIDTH 1u
#define SDADC_CMACSR_INCFGPV11(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_INCFGPV11_SHIFT)) & SDADC_CMACSR_INCFGPV11_MASK)
#define SDADC_CMACSR_GAINSEL_MASK  0x300000u
#define SDADC_CMACSR_GAINSEL_SHIFT 20u
#define SDADC_CMACSR_GAINSEL_WIDTH 2u
#define SDADC_CMACSR_GAINSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_GAINSEL_SHIFT)) & SDADC_CMACSR_GAINSEL_MASK)
#define SDADC_CMACSR_CMENP_MASK  0xF0000u
#define SDADC_CMACSR_CMENP_SHIFT 16u
#define SDADC_CMACSR_CMENP_WIDTH 4u
#define SDADC_CMACSR_CMENP(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_CMENP_SHIFT)) & SDADC_CMACSR_CMENP_MASK)
#define SDADC_CMACSR_CMENM_MASK  0xF000u
#define SDADC_CMACSR_CMENM_SHIFT 12u
#define SDADC_CMACSR_CMENM_WIDTH 4u
#define SDADC_CMACSR_CMENM(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_CMENM_SHIFT)) & SDADC_CMACSR_CMENM_MASK)
#define SDADC_CMACSR_INCFGP_MASK  0xC00u
#define SDADC_CMACSR_INCFGP_SHIFT 10u
#define SDADC_CMACSR_INCFGP_WIDTH 2u
#define SDADC_CMACSR_INCFGP(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_INCFGP_SHIFT)) & SDADC_CMACSR_INCFGP_MASK)
#define SDADC_CMACSR_INCFGM_MASK  0x300u
#define SDADC_CMACSR_INCFGM_SHIFT 8u
#define SDADC_CMACSR_INCFGM_WIDTH 2u
#define SDADC_CMACSR_INCFGM(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_INCFGM_SHIFT)) & SDADC_CMACSR_INCFGM_MASK)
#define SDADC_CMACSR_INMUX_MASK  0x30u
#define SDADC_CMACSR_INMUX_SHIFT 4u
#define SDADC_CMACSR_INMUX_WIDTH 2u
#define SDADC_CMACSR_INMUX(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_INMUX_SHIFT)) & SDADC_CMACSR_INMUX_MASK)
#define SDADC_CMACSR_INSEL_MASK  0xCu
#define SDADC_CMACSR_INSEL_SHIFT 2u
#define SDADC_CMACSR_INSEL_WIDTH 2u
#define SDADC_CMACSR_INSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_INSEL_SHIFT)) & SDADC_CMACSR_INSEL_MASK)
#define SDADC_CMACSR_INMOD_MASK  0x3u
#define SDADC_CMACSR_INMOD_SHIFT 0u
#define SDADC_CMACSR_INMOD_WIDTH 2u
#define SDADC_CMACSR_INMOD(x) \
    (((uint32)(((uint32)(x)) << SDADC_CMACSR_INMOD_SHIFT)) & SDADC_CMACSR_INMOD_MASK)
/* CMACSR0 Reg Mask */
#define SDADC_CMACSR_MASK       0xEFFFFF3Fu

/* COFCAL Bit Fields */
#define SDADC_COFCAL_OPT1_MASK  0xFFFF0000u
#define SDADC_COFCAL_OPT1_SHIFT 16u
#define SDADC_COFCAL_OPT1_WIDTH 16u
#define SDADC_COFCAL_OPT1(x) \
    (((uint32)(((uint32)(x)) << SDADC_COFCAL_OPT1_SHIFT)) & SDADC_COFCAL_OPT1_MASK)
#define SDADC_COFCAL_OPT0_MASK  0xFFFFu
#define SDADC_COFCAL_OPT0_SHIFT 0u
#define SDADC_COFCAL_OPT0_WIDTH 16u
#define SDADC_COFCAL_OPT0(x) \
    (((uint32)(((uint32)(x)) << SDADC_COFCAL_OPT0_SHIFT)) & SDADC_COFCAL_OPT0_MASK)
/* COFCAL0 Reg Mask */
#define SDADC_COFCAL_MASK       0xFFFFFFFFu

/* CGNCAL Bit Fields */
#define SDADC_CGNCAL_OPT1_MASK  0xFFFF0000u
#define SDADC_CGNCAL_OPT1_SHIFT 16u
#define SDADC_CGNCAL_OPT1_WIDTH 16u
#define SDADC_CGNCAL_OPT1(x) \
    (((uint32)(((uint32)(x)) << SDADC_CGNCAL_OPT1_SHIFT)) & SDADC_CGNCAL_OPT1_MASK)
#define SDADC_CGNCAL_OPT0_MASK  0xFFFFu
#define SDADC_CGNCAL_OPT0_SHIFT 0u
#define SDADC_CGNCAL_OPT0_WIDTH 16u
#define SDADC_CGNCAL_OPT0(x) \
    (((uint32)(((uint32)(x)) << SDADC_CGNCAL_OPT0_SHIFT)) & SDADC_CGNCAL_OPT0_MASK)
/* CGNCAL0 Reg Mask */
#define SDADC_CGNCAL_MASK         0xFFFFFFFFu

/* CGNR Bit Fields */
#define SDADC_CGNR_GAIN_FAC_MASK  0x3FFFFu
#define SDADC_CGNR_GAIN_FAC_SHIFT 0u
#define SDADC_CGNR_GAIN_FAC_WIDTH 18u
#define SDADC_CGNR_GAIN_FAC(x) \
    (((uint32)(((uint32)(x)) << SDADC_CGNR_GAIN_FAC_SHIFT)) & SDADC_CGNR_GAIN_FAC_MASK)
/* CGNR0 Reg Mask */
#define SDADC_CGNR_MASK               0x0003FFFFu

/* CTSCNT Bit Fields */
#define SDADC_CTSCNT_SYNC_TRGEN_MASK  0x20000000u
#define SDADC_CTSCNT_SYNC_TRGEN_SHIFT 29u
#define SDADC_CTSCNT_SYNC_TRGEN_WIDTH 1u
#define SDADC_CTSCNT_SYNC_TRGEN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_SYNC_TRGEN_SHIFT)) & SDADC_CTSCNT_SYNC_TRGEN_MASK)
#define SDADC_CTSCNT_SYNC_TRGSEL_MASK  0x1C000000u
#define SDADC_CTSCNT_SYNC_TRGSEL_SHIFT 26u
#define SDADC_CTSCNT_SYNC_TRGSEL_WIDTH 3u
#define SDADC_CTSCNT_SYNC_TRGSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_SYNC_TRGSEL_SHIFT)) & SDADC_CTSCNT_SYNC_TRGSEL_MASK)
#define SDADC_CTSCNT_TSRDM_MASK  0x3000000u
#define SDADC_CTSCNT_TSRDM_SHIFT 24u
#define SDADC_CTSCNT_TSRDM_WIDTH 2u
#define SDADC_CTSCNT_TSRDM(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_TSRDM_SHIFT)) & SDADC_CTSCNT_TSRDM_MASK)
#define SDADC_CTSCNT_TSTRGM_MASK  0x600000u
#define SDADC_CTSCNT_TSTRGM_SHIFT 21u
#define SDADC_CTSCNT_TSTRGM_WIDTH 2u
#define SDADC_CTSCNT_TSTRGM(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_TSTRGM_SHIFT)) & SDADC_CTSCNT_TSTRGM_MASK)
#define SDADC_CTSCNT_INMXCP_MASK  0x100000u
#define SDADC_CTSCNT_INMXCP_SHIFT 20u
#define SDADC_CTSCNT_INMXCP_WIDTH 1u
#define SDADC_CTSCNT_INMXCP(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_INMXCP_SHIFT)) & SDADC_CTSCNT_INMXCP_MASK)
#define SDADC_CTSCNT_TS_EN_MASK  0x80000u
#define SDADC_CTSCNT_TS_EN_SHIFT 19u
#define SDADC_CTSCNT_TS_EN_WIDTH 1u
#define SDADC_CTSCNT_TS_EN(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_TS_EN_SHIFT)) & SDADC_CTSCNT_TS_EN_MASK)
#define SDADC_CTSCNT_TSCLKSEL_MASK  0x30000u
#define SDADC_CTSCNT_TSCLKSEL_SHIFT 16u
#define SDADC_CTSCNT_TSCLKSEL_WIDTH 2u
#define SDADC_CTSCNT_TSCLKSEL(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_TSCLKSEL_SHIFT)) & SDADC_CTSCNT_TSCLKSEL_MASK)
#define SDADC_CTSCNT_TSCNT_MASK  0xFFFFu
#define SDADC_CTSCNT_TSCNT_SHIFT 0u
#define SDADC_CTSCNT_TSCNT_WIDTH 16u
#define SDADC_CTSCNT_TSCNT(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSCNT_TSCNT_SHIFT)) & SDADC_CTSCNT_TSCNT_MASK)
/* CTSCNT0 Reg Mask */
#define SDADC_CTSCNT_MASK          0x3F7BFFFFu

/* CTSINFO Bit Fields */
#define SDADC_CTSINFO_TSDATA_MASK  0xFFFF0000u
#define SDADC_CTSINFO_TSDATA_SHIFT 16u
#define SDADC_CTSINFO_TSDATA_WIDTH 16u
#define SDADC_CTSINFO_TSDATA(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSINFO_TSDATA_SHIFT)) & SDADC_CTSINFO_TSDATA_MASK)
#define SDADC_CTSINFO_TSTAMP_MASK  0xFFFFu
#define SDADC_CTSINFO_TSTAMP_SHIFT 0u
#define SDADC_CTSINFO_TSTAMP_WIDTH 16u
#define SDADC_CTSINFO_TSTAMP(x) \
    (((uint32)(((uint32)(x)) << SDADC_CTSINFO_TSTAMP_SHIFT)) & SDADC_CTSINFO_TSTAMP_MASK)
/* CTSINFO0 Reg Mask */
#define SDADC_CTSINFO_MASK                      0xFFFFFFFFu

/* TSTMP_LOCK Bit Fields */
#define SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL_MASK  0x70000000u
#define SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL_SHIFT 28u
#define SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL_WIDTH 3u
#define SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL(x)                                \
    (((uint32)(((uint32)(x)) << SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL_SHIFT)) & \
     SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL_MASK)
#define SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL_MASK  0x3000000u
#define SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL_SHIFT 24u
#define SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL_WIDTH 2u
#define SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL(x)                                \
    (((uint32)(((uint32)(x)) << SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL_SHIFT)) & \
     SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL_MASK)
#define SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL_MASK  0x700000u
#define SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL_SHIFT 20u
#define SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL_WIDTH 3u
#define SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL(x)                                \
    (((uint32)(((uint32)(x)) << SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL_SHIFT)) & \
     SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL_MASK)
#define SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL_MASK  0x30000u
#define SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL_SHIFT 16u
#define SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL_WIDTH 2u
#define SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL(x)                                \
    (((uint32)(((uint32)(x)) << SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL_SHIFT)) & \
     SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL_MASK)
/* TSTMP_LOCK Reg Mask */
#define SCM_TSTMP_LOCK_MASK 0x7373F3F3u

/*!
 * @}
 */ /* end of group SDADC_Register_Masks */

/*!
 * @}
 */ /* end of group SDADC_Peripheral_Access_Layer */
#ifdef __cplusplus
}
#endif

#endif
