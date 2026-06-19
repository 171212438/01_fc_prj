/**
 *   @file    Ftu_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ftu - module register and macro definitions.
 *   @details Ftu module registers, and macro definitions used to manipulate the module registers.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef FTU_REG_H
#define FTU_REG_H

#ifdef __cplusplus
extern "C"
{
#endif

/*===============================================================================================
*                                         INCLUDE FILES
===============================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"

/*===============================================================================================
*                                           CONSTANTS
===============================================================================================*/

/*===============================================================================================
*                                       DEFINES AND MACROS
===============================================================================================*/
/** Peripheral FTU0 base address */

#if (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU0_BASE (0x4045D000u)

#else

#define FTU0_BASE (0x4005C000u)

#endif

/** Peripheral FTU0 base pointer */

#define FTU0 ((FTU_Type *)FTU0_BASE)

/** Peripheral FTU1 base address */

#if (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU1_BASE (0x4045E000u)

#else

#define FTU1_BASE (0x4005D000u)

#endif

/** Peripheral FTU1 base pointer */

#define FTU1 ((FTU_Type *)FTU1_BASE)

/** Peripheral FTU2 base address */

#if (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU2_BASE (0x4045F000u)

#else

#define FTU2_BASE (0x4005E000u)

#endif

/** Peripheral FTU2 base pointer */

#define FTU2 ((FTU_Type *)FTU2_BASE)

/** Peripheral FTU3 base address */

#if (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU3_BASE (0x40460000u)

#else

#define FTU3_BASE (0x4005F000u)

#endif

/** Peripheral FTU3 base pointer */

#define FTU3 ((FTU_Type *)FTU3_BASE)

/** Peripheral FTU4 base address */
#if (DEVICE_SERIES == FC7240F2MDSxxxxT1A)

#define FTU4_BASE (0x4045F000u)

#elif ((DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C))

#define FTU4_BASE (0x4045d000u)
#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU4_BASE (0x4085d000u)

#else

#define FTU4_BASE (0x40060000u)

#endif

/** Peripheral FTU4 base pointer */

#define FTU4 ((FTU_Type *)FTU4_BASE)

/** Peripheral FTU5 base address */
#if (DEVICE_SERIES == FC7240F2MDSxxxxT1A)

#define FTU5_BASE (0x40460000u)

#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU5_BASE (0x4085e000u)

#elif ((DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C))

#define FTU5_BASE (0x4045e000u)

#else

#define FTU5_BASE (0x40061000u)

#endif

/** Peripheral FTU5 base pointer */

#define FTU5 ((FTU_Type *)FTU5_BASE)

/** Peripheral FTU6 base address */
#if (DEVICE_SERIES == FC7240F2MDSxxxxT1A)

#define FTU6_BASE (0x40461000u)

#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU6_BASE (0x4085f000u)

#else

#define FTU6_BASE (0x4045F000u)

#endif

/** Peripheral FTU6 base pointer */

#define FTU6 ((FTU_Type *)FTU6_BASE)

/** Peripheral FTU7 base address */
#if (DEVICE_SERIES == FC7240F2MDSxxxxT1A)

#define FTU7_BASE (0x40462000u)

#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)

#define FTU7_BASE (0x40860000u)

#else

#define FTU7_BASE (0x40460000u)

#endif

/** Peripheral FTU7 base pointer */

#define FTU7       ((FTU_Type *)FTU7_BASE)

/** Peripheral FTU8 base address */

#define FTU8_BASE  (0x40461000u)

/** Peripheral FTU8 base pointer */

#define FTU8       ((FTU_Type *)FTU8_BASE)

/** Peripheral FTU9 base address */

#define FTU9_BASE  (0x40462000u)

/** Peripheral FTU9 base pointer */

#define FTU9       ((FTU_Type *)FTU9_BASE)

/** Peripheral FTU10 base address */

#define FTU10_BASE (0x40463000u)

/** Peripheral FTU10 base pointer */

#define FTU10      ((FTU_Type *)FTU10_BASE)

/** Peripheral FTU11 base address */

#define FTU11_BASE (0x40464000u)

/** Peripheral FTU11 base pointer */

#define FTU11      ((FTU_Type *)FTU11_BASE)

/** Array initializer of FTU peripheral base addresses */

#define FTU_BASE_ADDRS                                                   \
    { FTU0_BASE, FTU1_BASE, FTU2_BASE, FTU3_BASE, FTU4_BASE,  FTU5_BASE, \
      FTU6_BASE, FTU7_BASE, FTU8_BASE, FTU9_BASE, FTU10_BASE, FTU11_BASE }

/** Array initializer of FTU peripheral base pointers */

#define FTU_BASE_PTRS           { FTU0, FTU1, FTU2, FTU3, FTU4, FTU5, FTU6, FTU7, FTU8, FTU9, FTU10, FTU11 }

/* SC Bit Fields */

#define FTU_SC_UPDOWN_DIS_MASK  0xC0000000u

#define FTU_SC_UPDOWN_DIS_SHIFT 30u

#define FTU_SC_UPDOWN_DIS_WIDTH 2u

#define FTU_SC_UPDOWN_DIS(x) \
    (((uint32)(((uint32)(x)) << FTU_SC_UPDOWN_DIS_SHIFT)) & FTU_SC_UPDOWN_DIS_MASK)

#define FTU_SC_FLTPS_MASK     0xF000000u

#define FTU_SC_FLTPS_SHIFT    24u

#define FTU_SC_FLTPS_WIDTH    4u

#define FTU_SC_FLTPS(x)       (((uint32)(((uint32)(x)) << FTU_SC_FLTPS_SHIFT)) & FTU_SC_FLTPS_MASK)

#define FTU_SC_CHNOUTEN_MASK  0xFF0000u

#define FTU_SC_CHNOUTEN_SHIFT 16u

#define FTU_SC_CHNOUTEN_WIDTH 8u

#define FTU_SC_CHNOUTEN(x) \
    (((uint32)(((uint32)(x)) << FTU_SC_CHNOUTEN_SHIFT)) & FTU_SC_CHNOUTEN_MASK)

#define FTU_SC_TCKSEL_MASK                   0xC000u

#define FTU_SC_TCKSEL_SHIFT                  14u

#define FTU_SC_TCKSEL_WIDTH                  2u

#define FTU_SC_TCKSEL(x)                     (((uint32)(((uint32)(x)) << FTU_SC_TCKSEL_SHIFT)) & FTU_SC_TCKSEL_MASK)

#define FTU_SC_OBECTL_MASK                   0x800u

#define FTU_SC_OBECTL_SHIFT                  11u

#define FTU_SC_OBECTL_WIDTH                  1u

#define FTU_SC_OBECTL(x)                     (((uint32)(((uint32)(x)) << FTU_SC_OBECTL_SHIFT)) & FTU_SC_OBECTL_MASK)

#define FTU_SC_TOF_MASK                      0x200u

#define FTU_SC_TOF_SHIFT                     9u

#define FTU_SC_TOF_WIDTH                     1u

#define FTU_SC_TOF(x)                        (((uint32)(((uint32)(x)) << FTU_SC_TOF_SHIFT)) & FTU_SC_TOF_MASK)

#define FTU_SC_TOIE_MASK                     0x100u

#define FTU_SC_TOIE_SHIFT                    8u

#define FTU_SC_TOIE_WIDTH                    1u

#define FTU_SC_TOIE(x)                       (((uint32)(((uint32)(x)) << FTU_SC_TOIE_SHIFT)) & FTU_SC_TOIE_MASK)

#define FTU_SC_RF_MASK                       0x80u

#define FTU_SC_RF_SHIFT                      7u

#define FTU_SC_RF_WIDTH                      1u

#define FTU_SC_RF(x)                         (((uint32)(((uint32)(x)) << FTU_SC_RF_SHIFT)) & FTU_SC_RF_MASK)

#define FTU_SC_RIE_MASK                      0x40u

#define FTU_SC_RIE_SHIFT                     6u

#define FTU_SC_RIE_WIDTH                     1u

#define FTU_SC_RIE(x)                        (((uint32)(((uint32)(x)) << FTU_SC_RIE_SHIFT)) & FTU_SC_RIE_MASK)

#define FTU_SC_CPWMS_MASK                    0x20u

#define FTU_SC_CPWMS_SHIFT                   5u

#define FTU_SC_CPWMS_WIDTH                   1u

#define FTU_SC_CPWMS(x)                      (((uint32)(((uint32)(x)) << FTU_SC_CPWMS_SHIFT)) & FTU_SC_CPWMS_MASK)

#define FTU_SC_CLKS_MASK                     0x18u

#define FTU_SC_CLKS_SHIFT                    3u

#define FTU_SC_CLKS_WIDTH                    2u

#define FTU_SC_CLKS(x)                       (((uint32)(((uint32)(x)) << FTU_SC_CLKS_SHIFT)) & FTU_SC_CLKS_MASK)

#define FTU_SC_PS_MASK                       0x7u

#define FTU_SC_PS_SHIFT                      0u

#define FTU_SC_PS_WIDTH                      3u

#define FTU_SC_PS(x)                         (((uint32)(((uint32)(x)) << FTU_SC_PS_SHIFT)) & FTU_SC_PS_MASK)

/* SC Reg Mask */

#define FTU_SC_MASK                          0x0FFFCBFFu

/* CNT Bit Fields */

#define FTU_CNT_COUNT_MASK                   0xFFFFu

#define FTU_CNT_COUNT_SHIFT                  0u

#define FTU_CNT_COUNT_WIDTH                  16u

#define FTU_CNT_COUNT(x)                     (((uint32)(((uint32)(x)) << FTU_CNT_COUNT_SHIFT)) & FTU_CNT_COUNT_MASK)

/* CNT Reg Mask */

#define FTU_CNT_MASK                         0x0000FFFFu

/* MOD Bit Fields */

#define FTU_MOD_MOD_MASK                     0xFFFFFFu

#define FTU_MOD_MOD_SHIFT                    0u

#define FTU_MOD_MOD_WIDTH                    16u

#define FTU_MOD_MOD(x)                       (((uint32)(((uint32)(x)) << FTU_MOD_MOD_SHIFT)) & FTU_MOD_MOD_MASK)

/* MOD Reg Mask */

#define FTU_MOD_MASK                         0x00FFFFFFu

/* CSC Bit Fields */
/*Only some series chips support Icm mode,please refer the reference manual*/
#define FTU_CSC_ICM_ICEXP_NUM_ICM_ECNT_MASK  0xFF000000u

#define FTU_CSC_ICM_ICEXP_NUM_ICM_ECNT_SHIFT 24u

#define FTU_CSC_ICM_ICEXP_NUM_ICM_ECNT_WIDTH 8u

#define FTU_CSC_ICM_ICEXP_NUM_ICM_ECNT(x)                                \
    (((uint32)(((uint32)(x)) << FTU_CSC_ICM_ICEXP_NUM_ICM_ECNT_SHIFT)) & \
     FTU_CSC_ICM_ICEXP_NUM_ICM_ECNT_MASK)

#define FTU_CSC_ICM_SINGLE_MASK  0x40000u

#define FTU_CSC_ICM_SINGLE_SHIFT 18u

#define FTU_CSC_ICM_SINGLE_WIDTH 1u

#define FTU_CSC_ICM_SINGLE(x) \
    (((uint32)(((uint32)(x)) << FTU_CSC_ICM_SINGLE_SHIFT)) & FTU_CSC_ICM_SINGLE_MASK)

#define FTU_CSC_ICM_START_MASK  0x20000u

#define FTU_CSC_ICM_START_SHIFT 17u

#define FTU_CSC_ICM_START_WIDTH 1u

#define FTU_CSC_ICM_START(x) \
    (((uint32)(((uint32)(x)) << FTU_CSC_ICM_START_SHIFT)) & FTU_CSC_ICM_START_MASK)

#define FTU_CSC_ICM_CONT_MASK  0x10000u

#define FTU_CSC_ICM_CONT_SHIFT 16u

#define FTU_CSC_ICM_CONT_WIDTH 1u

#define FTU_CSC_ICM_CONT(x) \
    (((uint32)(((uint32)(x)) << FTU_CSC_ICM_CONT_SHIFT)) & FTU_CSC_ICM_CONT_MASK)

#define FTU_CSC_ICM_MODE_MASK  0xE000u

#define FTU_CSC_ICM_MODE_SHIFT 13u

#define FTU_CSC_ICM_MODE_WIDTH 3u

#define FTU_CSC_ICM_MODE(x) \
    (((uint32)(((uint32)(x)) << FTU_CSC_ICM_MODE_SHIFT)) & FTU_CSC_ICM_MODE_MASK)

#define FTU_CSC_FDLYSEL_MASK  0x1800u

#define FTU_CSC_FDLYSEL_SHIFT 11u

#define FTU_CSC_FDLYSEL_WIDTH 2u

#define FTU_CSC_FDLYSEL(x) \
    (((uint32)(((uint32)(x)) << FTU_CSC_FDLYSEL_SHIFT)) & FTU_CSC_FDLYSEL_MASK)

#define FTU_CSC_CHOV_MASK      0x400u

#define FTU_CSC_CHOV_SHIFT     10u

#define FTU_CSC_CHOV_WIDTH     1u

#define FTU_CSC_CHOV(x)        (((uint32)(((uint32)(x)) << FTU_CSC_CHOV_SHIFT)) & FTU_CSC_CHOV_MASK)

#define FTU_CSC_CHIS_MASK      0x200u

#define FTU_CSC_CHIS_SHIFT     9u

#define FTU_CSC_CHIS_WIDTH     1u

#define FTU_CSC_CHIS(x)        (((uint32)(((uint32)(x)) << FTU_CSC_CHIS_SHIFT)) & FTU_CSC_CHIS_MASK)

#define FTU_CSC_TRIGMODE_MASK  0x100u

#define FTU_CSC_TRIGMODE_SHIFT 8u

#define FTU_CSC_TRIGMODE_WIDTH 1u

#define FTU_CSC_TRIGMODE(x) \
    (((uint32)(((uint32)(x)) << FTU_CSC_TRIGMODE_SHIFT)) & FTU_CSC_TRIGMODE_MASK)

#define FTU_CSC_CHF_MASK      0x80u

#define FTU_CSC_CHF_SHIFT     7u

#define FTU_CSC_CHF_WIDTH     1u

#define FTU_CSC_CHF(x)        (((uint32)(((uint32)(x)) << FTU_CSC_CHF_SHIFT)) & FTU_CSC_CHF_MASK)

#define FTU_CSC_CHIE_MASK     0x40u

#define FTU_CSC_CHIE_SHIFT    6u

#define FTU_CSC_CHIE_WIDTH    1u

#define FTU_CSC_CHIE(x)       (((uint32)(((uint32)(x)) << FTU_CSC_CHIE_SHIFT)) & FTU_CSC_CHIE_MASK)

#define FTU_CSC_MSB_MASK      0x20u

#define FTU_CSC_MSB_SHIFT     5u

#define FTU_CSC_MSB_WIDTH     1u

#define FTU_CSC_MSB(x)        (((uint32)(((uint32)(x)) << FTU_CSC_MSB_SHIFT)) & FTU_CSC_MSB_MASK)

#define FTU_CSC_MSA_MASK      0x10u

#define FTU_CSC_MSA_SHIFT     4u

#define FTU_CSC_MSA_WIDTH     1u

#define FTU_CSC_MSA(x)        (((uint32)(((uint32)(x)) << FTU_CSC_MSA_SHIFT)) & FTU_CSC_MSA_MASK)

#define FTU_CSC_ELSB_MASK     0x8u

#define FTU_CSC_ELSB_SHIFT    3u

#define FTU_CSC_ELSB_WIDTH    1u

#define FTU_CSC_ELSB(x)       (((uint32)(((uint32)(x)) << FTU_CSC_ELSB_SHIFT)) & FTU_CSC_ELSB_MASK)

#define FTU_CSC_ELSA_MASK     0x4u

#define FTU_CSC_ELSA_SHIFT    2u

#define FTU_CSC_ELSA_WIDTH    1u

#define FTU_CSC_ELSA(x)       (((uint32)(((uint32)(x)) << FTU_CSC_ELSA_SHIFT)) & FTU_CSC_ELSA_MASK)

#define FTU_CSC_ICRST_MASK    0x2u

#define FTU_CSC_ICRST_SHIFT   1u

#define FTU_CSC_ICRST_WIDTH   1u

#define FTU_CSC_ICRST(x)      (((uint32)(((uint32)(x)) << FTU_CSC_ICRST_SHIFT)) & FTU_CSC_ICRST_MASK)

#define FTU_CSC_DMA_MASK      0x1u

#define FTU_CSC_DMA_SHIFT     0u

#define FTU_CSC_DMA_WIDTH     1u

#define FTU_CSC_DMA(x)        (((uint32)(((uint32)(x)) << FTU_CSC_DMA_SHIFT)) & FTU_CSC_DMA_MASK)

/* CSC0 Reg Mask */

#define FTU_CSC_MASK          0x000007FFu

/* CV Bit Fields */

#define FTU_CV_VAL_MASK       0xFFFFu

#define FTU_CV_VAL_SHIFT      0u

#define FTU_CV_VAL_WIDTH      16u

#define FTU_CV_VAL(x)         (((uint32)(((uint32)(x)) << FTU_CV_VAL_SHIFT)) & FTU_CV_VAL_MASK)

/* CV0 Reg Mask */

#define FTU_CV_MASK           0x0000FFFFu

/* CNTIN Bit Fields */

#define FTU_CNTIN_INIT_MASK   0xFFFFu

#define FTU_CNTIN_INIT_SHIFT  0u

#define FTU_CNTIN_INIT_WIDTH  16u

#define FTU_CNTIN_INIT(x)     (((uint32)(((uint32)(x)) << FTU_CNTIN_INIT_SHIFT)) & FTU_CNTIN_INIT_MASK)

/* CNTIN Reg Mask */

#define FTU_CNTIN_MASK        0x0000FFFFu

/* STATUS Bit Fields */

#define FTU_STATUS_CHNF_MASK  0xFFu

#define FTU_STATUS_CHNF_SHIFT 0u

#define FTU_STATUS_CHNF_WIDTH 8u

#define FTU_STATUS_CHNF(x) \
    (((uint32)(((uint32)(x)) << FTU_STATUS_CHNF_SHIFT)) & FTU_STATUS_CHNF_MASK)

#define FTU_STATUS_CHNICOF_MASK  0xFF00u

#define FTU_STATUS_CHNICOF_SHIFT 8u

#define FTU_STATUS_CHNICOF_WIDTH 8u

#define FTU_STATUS_CHNICOF(x) \
    (((uint32)(((uint32)(x)) << FTU_STATUS_CHNICOF_SHIFT)) & FTU_STATUS_CHNICOF_MASK)

/* STATUS Reg Mask */

#define FTU_STATUS_MASK        0x0000FFFFu

/* MODE Bit Fields */

#define FTU_MODE_FAULTIE_MASK  0x80u

#define FTU_MODE_FAULTIE_SHIFT 7u

#define FTU_MODE_FAULTIE_WIDTH 1u

#define FTU_MODE_FAULTIE(x) \
    (((uint32)(((uint32)(x)) << FTU_MODE_FAULTIE_SHIFT)) & FTU_MODE_FAULTIE_MASK)

#define FTU_MODE_FAULTM_MASK  0x60u

#define FTU_MODE_FAULTM_SHIFT 5u

#define FTU_MODE_FAULTM_WIDTH 2u

#define FTU_MODE_FAULTM(x) \
    (((uint32)(((uint32)(x)) << FTU_MODE_FAULTM_SHIFT)) & FTU_MODE_FAULTM_MASK)

#define FTU_MODE_PWMSYNC_MASK  0x8u

#define FTU_MODE_PWMSYNC_SHIFT 3u

#define FTU_MODE_PWMSYNC_WIDTH 1u

#define FTU_MODE_PWMSYNC(x) \
    (((uint32)(((uint32)(x)) << FTU_MODE_PWMSYNC_SHIFT)) & FTU_MODE_PWMSYNC_MASK)

#define FTU_MODE_WPDIS_MASK   0x4u

#define FTU_MODE_WPDIS_SHIFT  2u

#define FTU_MODE_WPDIS_WIDTH  1u

#define FTU_MODE_WPDIS(x)     (((uint32)(((uint32)(x)) << FTU_MODE_WPDIS_SHIFT)) & FTU_MODE_WPDIS_MASK)

#define FTU_MODE_INIT_MASK    0x2u

#define FTU_MODE_INIT_SHIFT   1u

#define FTU_MODE_INIT_WIDTH   1u

#define FTU_MODE_INIT(x)      (((uint32)(((uint32)(x)) << FTU_MODE_INIT_SHIFT)) & FTU_MODE_INIT_MASK)

#define FTU_MODE_FTUEN_MASK   0x1u

#define FTU_MODE_FTUEN_SHIFT  0u

#define FTU_MODE_FTUEN_WIDTH  1u

#define FTU_MODE_FTUEN(x)     (((uint32)(((uint32)(x)) << FTU_MODE_FTUEN_SHIFT)) & FTU_MODE_FTUEN_MASK)

/* MODE Reg Mask */

#define FTU_MODE_MASK         0x000000EFu

/* SYNC Bit Fields */

#define FTU_SYNC_SWSYNC_MASK  0x80u

#define FTU_SYNC_SWSYNC_SHIFT 7u

#define FTU_SYNC_SWSYNC_WIDTH 1u

#define FTU_SYNC_SWSYNC(x) \
    (((uint32)(((uint32)(x)) << FTU_SYNC_SWSYNC_SHIFT)) & FTU_SYNC_SWSYNC_MASK)

#define FTU_SYNC_TRIG2_MASK    0x40u

#define FTU_SYNC_TRIG2_SHIFT   6u

#define FTU_SYNC_TRIG2_WIDTH   1u

#define FTU_SYNC_TRIG2(x)      (((uint32)(((uint32)(x)) << FTU_SYNC_TRIG2_SHIFT)) & FTU_SYNC_TRIG2_MASK)

#define FTU_SYNC_TRIG1_MASK    0x20u

#define FTU_SYNC_TRIG1_SHIFT   5u

#define FTU_SYNC_TRIG1_WIDTH   1u

#define FTU_SYNC_TRIG1(x)      (((uint32)(((uint32)(x)) << FTU_SYNC_TRIG1_SHIFT)) & FTU_SYNC_TRIG1_MASK)

#define FTU_SYNC_TRIG0_MASK    0x10u

#define FTU_SYNC_TRIG0_SHIFT   4u

#define FTU_SYNC_TRIG0_WIDTH   1u

#define FTU_SYNC_TRIG0(x)      (((uint32)(((uint32)(x)) << FTU_SYNC_TRIG0_SHIFT)) & FTU_SYNC_TRIG0_MASK)

#define FTU_SYNC_SYNCHOM_MASK  0x8u

#define FTU_SYNC_SYNCHOM_SHIFT 3u

#define FTU_SYNC_SYNCHOM_WIDTH 1u

#define FTU_SYNC_SYNCHOM(x) \
    (((uint32)(((uint32)(x)) << FTU_SYNC_SYNCHOM_SHIFT)) & FTU_SYNC_SYNCHOM_MASK)

#define FTU_SYNC_REINIT_MASK  0x4u

#define FTU_SYNC_REINIT_SHIFT 2u

#define FTU_SYNC_REINIT_WIDTH 1u

#define FTU_SYNC_REINIT(x) \
    (((uint32)(((uint32)(x)) << FTU_SYNC_REINIT_SHIFT)) & FTU_SYNC_REINIT_MASK)

#define FTU_SYNC_CNTMAX_MASK  0x2u

#define FTU_SYNC_CNTMAX_SHIFT 1u

#define FTU_SYNC_CNTMAX_WIDTH 1u

#define FTU_SYNC_CNTMAX(x) \
    (((uint32)(((uint32)(x)) << FTU_SYNC_CNTMAX_SHIFT)) & FTU_SYNC_CNTMAX_MASK)

#define FTU_SYNC_CNTMIN_MASK  0x1u

#define FTU_SYNC_CNTMIN_SHIFT 0u

#define FTU_SYNC_CNTMIN_WIDTH 1u

#define FTU_SYNC_CNTMIN(x) \
    (((uint32)(((uint32)(x)) << FTU_SYNC_CNTMIN_SHIFT)) & FTU_SYNC_CNTMIN_MASK)

/* SYNC Reg Mask */

#define FTU_SYNC_MASK           0x000000FFu

/* OUTINIT Bit Fields */

#define FTU_OUTINIT_CHNOI_MASK  0xFFu

#define FTU_OUTINIT_CHNOI_SHIFT 0u

#define FTU_OUTINIT_CHNOI_WIDTH 8u

#define FTU_OUTINIT_CHNOI(x) \
    (((uint32)(((uint32)(x)) << FTU_OUTINIT_CHNOI_SHIFT)) & FTU_OUTINIT_CHNOI_MASK)

/* OUTINIT Reg Mask */

#define FTU_OUTINIT_MASK        0x000000FFu

/* OUTMASK Bit Fields */

#define FTU_OUTMASK_CHNOM_MASK  0xFFu

#define FTU_OUTMASK_CHNOM_SHIFT 0u

#define FTU_OUTMASK_CHNOM_WIDTH 8u

#define FTU_OUTMASK_CHNOM(x) \
    (((uint32)(((uint32)(x)) << FTU_OUTMASK_CHNOM_SHIFT)) & FTU_OUTMASK_CHNOM_MASK)

/* OUTMASK Reg Mask */

#define FTU_OUTMASK_MASK         0x000000FFu

/* CHCTRL Bit Fields */
#define FTU_CHCTRL_EPHASE3_MASK  0x80000000u

#define FTU_CHCTRL_EPHASE3_SHIFT 31u

#define FTU_CHCTRL_EPHASE3_WIDTH 1u

#define FTU_CHCTRL_EPHASE3(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_EPHASE3_SHIFT)) & FTU_CHCTRL_EPHASE3_MASK)

#define FTU_CHCTRL_FAULTEN3_MASK  0x40000000u

#define FTU_CHCTRL_FAULTEN3_SHIFT 30u

#define FTU_CHCTRL_FAULTEN3_WIDTH 1u

#define FTU_CHCTRL_FAULTEN3(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_FAULTEN3_SHIFT)) & FTU_CHCTRL_FAULTEN3_MASK)

#define FTU_CHCTRL_SYNCEN3_MASK  0x20000000u

#define FTU_CHCTRL_SYNCEN3_SHIFT 29u

#define FTU_CHCTRL_SYNCEN3_WIDTH 1u

#define FTU_CHCTRL_SYNCEN3(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_SYNCEN3_SHIFT)) & FTU_CHCTRL_SYNCEN3_MASK)

#define FTU_CHCTRL_DTEN3_MASK  0x10000000u

#define FTU_CHCTRL_DTEN3_SHIFT 28u

#define FTU_CHCTRL_DTEN3_WIDTH 1u

#define FTU_CHCTRL_DTEN3(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_DTEN3_SHIFT)) & FTU_CHCTRL_DTEN3_MASK)

#define FTU_CHCTRL_COMP3_MASK  0x2000000u

#define FTU_CHCTRL_COMP3_SHIFT 25u

#define FTU_CHCTRL_COMP3_WIDTH 1u

#define FTU_CHCTRL_COMP3(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_COMP3_SHIFT)) & FTU_CHCTRL_COMP3_MASK)

#define FTU_CHCTRL_PHASE3_MASK  0x1000000u

#define FTU_CHCTRL_PHASE3_SHIFT 24u

#define FTU_CHCTRL_PHASE3_WIDTH 1u

#define FTU_CHCTRL_PHASE3(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_PHASE3_SHIFT)) & FTU_CHCTRL_PHASE3_MASK)

#define FTU_CHCTRL_EPHASE2_MASK  0x800000u

#define FTU_CHCTRL_EPHASE2_SHIFT 23u

#define FTU_CHCTRL_EPHASE2_WIDTH 1u

#define FTU_CHCTRL_EPHASE2(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_EPHASE2_SHIFT)) & FTU_CHCTRL_EPHASE2_MASK)

#define FTU_CHCTRL_FAULTEN2_MASK  0x400000u

#define FTU_CHCTRL_FAULTEN2_SHIFT 22u

#define FTU_CHCTRL_FAULTEN2_WIDTH 1u

#define FTU_CHCTRL_FAULTEN2(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_FAULTEN2_SHIFT)) & FTU_CHCTRL_FAULTEN2_MASK)

#define FTU_CHCTRL_SYNCEN2_MASK  0x200000u

#define FTU_CHCTRL_SYNCEN2_SHIFT 21u

#define FTU_CHCTRL_SYNCEN2_WIDTH 1u

#define FTU_CHCTRL_SYNCEN2(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_SYNCEN2_SHIFT)) & FTU_CHCTRL_SYNCEN2_MASK)

#define FTU_CHCTRL_DTEN2_MASK  0x100000u

#define FTU_CHCTRL_DTEN2_SHIFT 20u

#define FTU_CHCTRL_DTEN2_WIDTH 1u

#define FTU_CHCTRL_DTEN2(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_DTEN2_SHIFT)) & FTU_CHCTRL_DTEN2_MASK)

#define FTU_CHCTRL_COMP2_MASK  0x20000u

#define FTU_CHCTRL_COMP2_SHIFT 17u

#define FTU_CHCTRL_COMP2_WIDTH 1u

#define FTU_CHCTRL_COMP2(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_COMP2_SHIFT)) & FTU_CHCTRL_COMP2_MASK)

#define FTU_CHCTRL_PHASE2_MASK  0x10000u

#define FTU_CHCTRL_PHASE2_SHIFT 16u

#define FTU_CHCTRL_PHASE2_WIDTH 1u

#define FTU_CHCTRL_PHASE2(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_PHASE2_SHIFT)) & FTU_CHCTRL_PHASE2_MASK)

#define FTU_CHCTRL_EPHASE1_MASK  0x8000u

#define FTU_CHCTRL_EPHASE1_SHIFT 15u

#define FTU_CHCTRL_EPHASE1_WIDTH 1u

#define FTU_CHCTRL_EPHASE1(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_EPHASE1_SHIFT)) & FTU_CHCTRL_EPHASE1_MASK)

#define FTU_CHCTRL_FAULTEN1_MASK  0x4000u

#define FTU_CHCTRL_FAULTEN1_SHIFT 14u

#define FTU_CHCTRL_FAULTEN1_WIDTH 1u

#define FTU_CHCTRL_FAULTEN1(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_FAULTEN1_SHIFT)) & FTU_CHCTRL_FAULTEN1_MASK)

#define FTU_CHCTRL_SYNCEN1_MASK  0x2000u

#define FTU_CHCTRL_SYNCEN1_SHIFT 13u

#define FTU_CHCTRL_SYNCEN1_WIDTH 1u

#define FTU_CHCTRL_SYNCEN1(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_SYNCEN1_SHIFT)) & FTU_CHCTRL_SYNCEN1_MASK)

#define FTU_CHCTRL_DTEN1_MASK  0x1000u

#define FTU_CHCTRL_DTEN1_SHIFT 12u

#define FTU_CHCTRL_DTEN1_WIDTH 1u

#define FTU_CHCTRL_DTEN1(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_DTEN1_SHIFT)) & FTU_CHCTRL_DTEN1_MASK)

#define FTU_CHCTRL_COMP1_MASK  0x200u

#define FTU_CHCTRL_COMP1_SHIFT 9u

#define FTU_CHCTRL_COMP1_WIDTH 1u

#define FTU_CHCTRL_COMP1(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_COMP1_SHIFT)) & FTU_CHCTRL_COMP1_MASK)

#define FTU_CHCTRL_PHASE1_MASK  0x100u

#define FTU_CHCTRL_PHASE1_SHIFT 8u

#define FTU_CHCTRL_PHASE1_WIDTH 1u

#define FTU_CHCTRL_PHASE1(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_PHASE1_SHIFT)) & FTU_CHCTRL_PHASE1_MASK)

#define FTU_CHCTRL_EPHASE0_MASK  0x80u

#define FTU_CHCTRL_EPHASE0_SHIFT 7u

#define FTU_CHCTRL_EPHASE0_WIDTH 1u

#define FTU_CHCTRL_EPHASE0(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_EPHASE0_SHIFT)) & FTU_CHCTRL_EPHASE0_MASK)

#define FTU_CHCTRL_FAULTEN0_MASK  0x40u

#define FTU_CHCTRL_FAULTEN0_SHIFT 6u

#define FTU_CHCTRL_FAULTEN0_WIDTH 1u

#define FTU_CHCTRL_FAULTEN0(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_FAULTEN0_SHIFT)) & FTU_CHCTRL_FAULTEN0_MASK)

#define FTU_CHCTRL_SYNCEN0_MASK  0x20u

#define FTU_CHCTRL_SYNCEN0_SHIFT 5u

#define FTU_CHCTRL_SYNCEN0_WIDTH 1u

#define FTU_CHCTRL_SYNCEN0(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_SYNCEN0_SHIFT)) & FTU_CHCTRL_SYNCEN0_MASK)

#define FTU_CHCTRL_DTEN0_MASK  0x10u

#define FTU_CHCTRL_DTEN0_SHIFT 4u

#define FTU_CHCTRL_DTEN0_WIDTH 1u

#define FTU_CHCTRL_DTEN0(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_DTEN0_SHIFT)) & FTU_CHCTRL_DTEN0_MASK)

#define FTU_CHCTRL_COMP0_MASK  0x2u

#define FTU_CHCTRL_COMP0_SHIFT 1u

#define FTU_CHCTRL_COMP0_WIDTH 1u

#define FTU_CHCTRL_COMP0(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_COMP0_SHIFT)) & FTU_CHCTRL_COMP0_MASK)

#define FTU_CHCTRL_PHASE0_MASK  0x1u

#define FTU_CHCTRL_PHASE0_SHIFT 0u

#define FTU_CHCTRL_PHASE0_WIDTH 1u

#define FTU_CHCTRL_PHASE0(x) \
    (((uint32)(((uint32)(x)) << FTU_CHCTRL_PHASE0_SHIFT)) & FTU_CHCTRL_PHASE0_MASK)

/* CHCTRL Reg Mask */

#define FTU_CHCTRL_MASK            0x72727272u

/* DEADTIME Bit Fields */

#define FTU_DEADTIME_DTVALEX_MASK  0xF0000u

#define FTU_DEADTIME_DTVALEX_SHIFT 16u

#define FTU_DEADTIME_DTVALEX_WIDTH 4u

#define FTU_DEADTIME_DTVALEX(x) \
    (((uint32)(((uint32)(x)) << FTU_DEADTIME_DTVALEX_SHIFT)) & FTU_DEADTIME_DTVALEX_MASK)

#define FTU_DEADTIME_DTPS_MASK  0xC0u

#define FTU_DEADTIME_DTPS_SHIFT 6u

#define FTU_DEADTIME_DTPS_WIDTH 2u

#define FTU_DEADTIME_DTPS(x) \
    (((uint32)(((uint32)(x)) << FTU_DEADTIME_DTPS_SHIFT)) & FTU_DEADTIME_DTPS_MASK)

#define FTU_DEADTIME_DTVAL_MASK  0x3Fu

#define FTU_DEADTIME_DTVAL_SHIFT 0u

#define FTU_DEADTIME_DTVAL_WIDTH 6u

#define FTU_DEADTIME_DTVAL(x) \
    (((uint32)(((uint32)(x)) << FTU_DEADTIME_DTVAL_SHIFT)) & FTU_DEADTIME_DTVAL_MASK)

/* DEADTIME Reg Mask */

#define FTU_DEADTIME_MASK          0x000F00FFu

/* TRIGCONF Bit Fields */

#define FTU_TRIGCONF_CH7TRIG_MASK  0x200u

#define FTU_TRIGCONF_CH7TRIG_SHIFT 9u

#define FTU_TRIGCONF_CH7TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH7TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH7TRIG_SHIFT)) & FTU_TRIGCONF_CH7TRIG_MASK)

#define FTU_TRIGCONF_CH6TRIG_MASK  0x100u

#define FTU_TRIGCONF_CH6TRIG_SHIFT 8u

#define FTU_TRIGCONF_CH6TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH6TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH6TRIG_SHIFT)) & FTU_TRIGCONF_CH6TRIG_MASK)

#define FTU_TRIGCONF_TRIGF_MASK  0x80u

#define FTU_TRIGCONF_TRIGF_SHIFT 7u

#define FTU_TRIGCONF_TRIGF_WIDTH 1u

#define FTU_TRIGCONF_TRIGF(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_TRIGF_SHIFT)) & FTU_TRIGCONF_TRIGF_MASK)

#define FTU_TRIGCONF_RELOADTRIGEN_MASK  0x40u

#define FTU_TRIGCONF_RELOADTRIGEN_SHIFT 6u

#define FTU_TRIGCONF_RELOADTRIGEN_WIDTH 1u

#define FTU_TRIGCONF_RELOADTRIGEN(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_RELOADTRIGEN_SHIFT)) & FTU_TRIGCONF_RELOADTRIGEN_MASK)

#define FTU_TRIGCONF_CH1TRIG_MASK  0x20u

#define FTU_TRIGCONF_CH1TRIG_SHIFT 5u

#define FTU_TRIGCONF_CH1TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH1TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH1TRIG_SHIFT)) & FTU_TRIGCONF_CH1TRIG_MASK)

#define FTU_TRIGCONF_CH0TRIG_MASK  0x10u

#define FTU_TRIGCONF_CH0TRIG_SHIFT 4u

#define FTU_TRIGCONF_CH0TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH0TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH0TRIG_SHIFT)) & FTU_TRIGCONF_CH0TRIG_MASK)

#define FTU_TRIGCONF_CH5TRIG_MASK  0x8u

#define FTU_TRIGCONF_CH5TRIG_SHIFT 3u

#define FTU_TRIGCONF_CH5TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH5TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH5TRIG_SHIFT)) & FTU_TRIGCONF_CH5TRIG_MASK)

#define FTU_TRIGCONF_CH4TRIG_MASK  0x4u

#define FTU_TRIGCONF_CH4TRIG_SHIFT 2u

#define FTU_TRIGCONF_CH4TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH4TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH4TRIG_SHIFT)) & FTU_TRIGCONF_CH4TRIG_MASK)

#define FTU_TRIGCONF_CH3TRIG_MASK  0x2u

#define FTU_TRIGCONF_CH3TRIG_SHIFT 1u

#define FTU_TRIGCONF_CH3TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH3TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH3TRIG_SHIFT)) & FTU_TRIGCONF_CH3TRIG_MASK)

#define FTU_TRIGCONF_CH2TRIG_MASK  0x1u

#define FTU_TRIGCONF_CH2TRIG_SHIFT 0u

#define FTU_TRIGCONF_CH2TRIG_WIDTH 1u

#define FTU_TRIGCONF_CH2TRIG(x) \
    (((uint32)(((uint32)(x)) << FTU_TRIGCONF_CH2TRIG_SHIFT)) & FTU_TRIGCONF_CH2TRIG_MASK)

/* TRIGCONF Reg Mask */

#define FTU_TRIGCONF_MASK     0x000003FFu

/* POL Bit Fields */

#define FTU_POL_POLN_MASK     0xFFu

#define FTU_POL_POLN_SHIFT    0u

#define FTU_POL_POLN_WIDTH    8u

#define FTU_POL_POLN(x)       (((uint32)(((uint32)(x)) << FTU_POL_POLN_SHIFT)) & FTU_POL_POLN_MASK)

/* POL Reg Mask */

#define FTU_POL_MASK          0x000000FFu

/* FMS Bit Fields */

#define FTU_FMS_FAULTF_MASK   0x80u

#define FTU_FMS_FAULTF_SHIFT  7u

#define FTU_FMS_FAULTF_WIDTH  1u

#define FTU_FMS_FAULTF(x)     (((uint32)(((uint32)(x)) << FTU_FMS_FAULTF_SHIFT)) & FTU_FMS_FAULTF_MASK)

#define FTU_FMS_WPEN_MASK     0x40u

#define FTU_FMS_WPEN_SHIFT    6u

#define FTU_FMS_WPEN_WIDTH    1u

#define FTU_FMS_WPEN(x)       (((uint32)(((uint32)(x)) << FTU_FMS_WPEN_SHIFT)) & FTU_FMS_WPEN_MASK)

#define FTU_FMS_FAULTIN_MASK  0x20u

#define FTU_FMS_FAULTIN_SHIFT 5u

#define FTU_FMS_FAULTIN_WIDTH 1u

#define FTU_FMS_FAULTIN(x) \
    (((uint32)(((uint32)(x)) << FTU_FMS_FAULTIN_SHIFT)) & FTU_FMS_FAULTIN_MASK)

#define FTU_FMS_FAULTF1_MASK  0x2u

#define FTU_FMS_FAULTF1_SHIFT 1u

#define FTU_FMS_FAULTF1_WIDTH 1u

#define FTU_FMS_FAULTF1(x) \
    (((uint32)(((uint32)(x)) << FTU_FMS_FAULTF1_SHIFT)) & FTU_FMS_FAULTF1_MASK)

#define FTU_FMS_FAULTF0_MASK  0x1u

#define FTU_FMS_FAULTF0_SHIFT 0u

#define FTU_FMS_FAULTF0_WIDTH 1u

#define FTU_FMS_FAULTF0(x) \
    (((uint32)(((uint32)(x)) << FTU_FMS_FAULTF0_SHIFT)) & FTU_FMS_FAULTF0_MASK)

/* FMS Reg Mask */

#define FTU_FMS_MASK             0x000000E3u

/* FILTER Bit Fields */

#define FTU_FILTER_CH3FVAL_MASK  0xF000u

#define FTU_FILTER_CH3FVAL_SHIFT 12u

#define FTU_FILTER_CH3FVAL_WIDTH 4u

#define FTU_FILTER_CH3FVAL(x) \
    (((uint32)(((uint32)(x)) << FTU_FILTER_CH3FVAL_SHIFT)) & FTU_FILTER_CH3FVAL_MASK)

#define FTU_FILTER_CH2FVAL_MASK  0xF00u

#define FTU_FILTER_CH2FVAL_SHIFT 8u

#define FTU_FILTER_CH2FVAL_WIDTH 4u

#define FTU_FILTER_CH2FVAL(x) \
    (((uint32)(((uint32)(x)) << FTU_FILTER_CH2FVAL_SHIFT)) & FTU_FILTER_CH2FVAL_MASK)

#define FTU_FILTER_CH1FVAL_MASK  0xF0u

#define FTU_FILTER_CH1FVAL_SHIFT 4u

#define FTU_FILTER_CH1FVAL_WIDTH 4u

#define FTU_FILTER_CH1FVAL(x) \
    (((uint32)(((uint32)(x)) << FTU_FILTER_CH1FVAL_SHIFT)) & FTU_FILTER_CH1FVAL_MASK)

#define FTU_FILTER_CH0FVAL_MASK  0xFu

#define FTU_FILTER_CH0FVAL_SHIFT 0u

#define FTU_FILTER_CH0FVAL_WIDTH 4u

#define FTU_FILTER_CH0FVAL(x) \
    (((uint32)(((uint32)(x)) << FTU_FILTER_CH0FVAL_SHIFT)) & FTU_FILTER_CH0FVAL_MASK)

/* FILTER Reg Mask */

#define FTU_FILTER_MASK          0x0000FFFFu

/* FLTCTRL Bit Fields */
#define FTU_FLTCTRL_FDLYV0_MASK  0xFF0000u

#define FTU_FLTCTRL_FDLYV0_SHIFT 16u

#define FTU_FLTCTRL_FDLYV0_WIDTH 8u

#define FTU_FLTCTRL_FDLYV0(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FDLYV0_SHIFT)) & FTU_FLTCTRL_FDLYV0_MASK)

#define FTU_FLTCTRL_FSTATE_MASK  0x8000u

#define FTU_FLTCTRL_FSTATE_SHIFT 15u

#define FTU_FLTCTRL_FSTATE_WIDTH 1u

#define FTU_FLTCTRL_FSTATE(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FSTATE_SHIFT)) & FTU_FLTCTRL_FSTATE_MASK)

#define FTU_FLTCTRL_FFVAL_MASK  0xF00u

#define FTU_FLTCTRL_FFVAL_SHIFT 8u

#define FTU_FLTCTRL_FFVAL_WIDTH 4u

#define FTU_FLTCTRL_FFVAL(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FFVAL_SHIFT)) & FTU_FLTCTRL_FFVAL_MASK)

#define FTU_FLTCTRL_FLT3GFEN_MASK  0x80u

#define FTU_FLTCTRL_FLT3GFEN_SHIFT 7u

#define FTU_FLTCTRL_FLT3GFEN_WIDTH 1u

#define FTU_FLTCTRL_FLT3GFEN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FLT3GFEN_SHIFT)) & FTU_FLTCTRL_FLT3GFEN_MASK)

#define FTU_FLTCTRL_FLT2GFEN_MASK  0x40u

#define FTU_FLTCTRL_FLT2GFEN_SHIFT 6u

#define FTU_FLTCTRL_FLT2GFEN_WIDTH 1u

#define FTU_FLTCTRL_FLT2GFEN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FLT2GFEN_SHIFT)) & FTU_FLTCTRL_FLT2GFEN_MASK)

#define FTU_FLTCTRL_FLT1GFEN_MASK  0x20u

#define FTU_FLTCTRL_FLT1GFEN_SHIFT 5u

#define FTU_FLTCTRL_FLT1GFEN_WIDTH 1u

#define FTU_FLTCTRL_FLT1GFEN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FLT1GFEN_SHIFT)) & FTU_FLTCTRL_FLT1GFEN_MASK)

#define FTU_FLTCTRL_FLT0GFEN_MASK  0x10u

#define FTU_FLTCTRL_FLT0GFEN_SHIFT 4u

#define FTU_FLTCTRL_FLT0GFEN_WIDTH 1u

#define FTU_FLTCTRL_FLT0GFEN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FLT0GFEN_SHIFT)) & FTU_FLTCTRL_FLT0GFEN_MASK)

#define FTU_FLTCTRL_FAULT3EN_MASK  0x8u

#define FTU_FLTCTRL_FAULT3EN_SHIFT 3u

#define FTU_FLTCTRL_FAULT3EN_WIDTH 1u

#define FTU_FLTCTRL_FAULT3EN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FAULT3EN_SHIFT)) & FTU_FLTCTRL_FAULT3EN_MASK)

#define FTU_FLTCTRL_FAULT2EN_MASK  0x4u

#define FTU_FLTCTRL_FAULT2EN_SHIFT 2u

#define FTU_FLTCTRL_FAULT2EN_WIDTH 1u

#define FTU_FLTCTRL_FAULT2EN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FAULT2EN_SHIFT)) & FTU_FLTCTRL_FAULT2EN_MASK)

#define FTU_FLTCTRL_FAULT1EN_MASK  0x2u

#define FTU_FLTCTRL_FAULT1EN_SHIFT 1u

#define FTU_FLTCTRL_FAULT1EN_WIDTH 1u

#define FTU_FLTCTRL_FAULT1EN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FAULT1EN_SHIFT)) & FTU_FLTCTRL_FAULT1EN_MASK)

#define FTU_FLTCTRL_FAULT0EN_MASK  0x1u

#define FTU_FLTCTRL_FAULT0EN_SHIFT 0u

#define FTU_FLTCTRL_FAULT0EN_WIDTH 1u

#define FTU_FLTCTRL_FAULT0EN(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTCTRL_FAULT0EN_SHIFT)) & FTU_FLTCTRL_FAULT0EN_MASK)

/* FLTCTRL Reg Mask */

#define FTU_FLTCTRL_MASK         0x00008FFFu

/* QDCTRL Bit Fields */

#define FTU_QDCTRL_PHAGFEN_MASK  0x80u

#define FTU_QDCTRL_PHAGFEN_SHIFT 7u

#define FTU_QDCTRL_PHAGFEN_WIDTH 1u

#define FTU_QDCTRL_PHAGFEN(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_PHAGFEN_SHIFT)) & FTU_QDCTRL_PHAGFEN_MASK)

#define FTU_QDCTRL_PHBGFEN_MASK  0x40u

#define FTU_QDCTRL_PHBGFEN_SHIFT 6u

#define FTU_QDCTRL_PHBGFEN_WIDTH 1u

#define FTU_QDCTRL_PHBGFEN(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_PHBGFEN_SHIFT)) & FTU_QDCTRL_PHBGFEN_MASK)

#define FTU_QDCTRL_PHAPOL_MASK  0x20u

#define FTU_QDCTRL_PHAPOL_SHIFT 5u

#define FTU_QDCTRL_PHAPOL_WIDTH 1u

#define FTU_QDCTRL_PHAPOL(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_PHAPOL_SHIFT)) & FTU_QDCTRL_PHAPOL_MASK)

#define FTU_QDCTRL_PHBPOL_MASK  0x10u

#define FTU_QDCTRL_PHBPOL_SHIFT 4u

#define FTU_QDCTRL_PHBPOL_WIDTH 1u

#define FTU_QDCTRL_PHBPOL(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_PHBPOL_SHIFT)) & FTU_QDCTRL_PHBPOL_MASK)

#define FTU_QDCTRL_QUADMODE_MASK  0x8u

#define FTU_QDCTRL_QUADMODE_SHIFT 3u

#define FTU_QDCTRL_QUADMODE_WIDTH 1u

#define FTU_QDCTRL_QUADMODE(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_QUADMODE_SHIFT)) & FTU_QDCTRL_QUADMODE_MASK)

#define FTU_QDCTRL_QUADIR_MASK  0x4u

#define FTU_QDCTRL_QUADIR_SHIFT 2u

#define FTU_QDCTRL_QUADIR_WIDTH 1u

#define FTU_QDCTRL_QUADIR(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_QUADIR_SHIFT)) & FTU_QDCTRL_QUADIR_MASK)

#define FTU_QDCTRL_TOFDIR_MASK  0x2u

#define FTU_QDCTRL_TOFDIR_SHIFT 1u

#define FTU_QDCTRL_TOFDIR_WIDTH 1u

#define FTU_QDCTRL_TOFDIR(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_TOFDIR_SHIFT)) & FTU_QDCTRL_TOFDIR_MASK)

#define FTU_QDCTRL_QUADEN_MASK  0x1u

#define FTU_QDCTRL_QUADEN_SHIFT 0u

#define FTU_QDCTRL_QUADEN_WIDTH 1u

#define FTU_QDCTRL_QUADEN(x) \
    (((uint32)(((uint32)(x)) << FTU_QDCTRL_QUADEN_SHIFT)) & FTU_QDCTRL_QUADEN_MASK)

/* QDCTRL Reg Mask */

#define FTU_QDCTRL_MASK       0x000000FFu

/* CONF Bit Fields */

#define FTU_CONF_RTRIGR_MASK  0x800u

#define FTU_CONF_RTRIGR_SHIFT 11u

#define FTU_CONF_RTRIGR_WIDTH 1u

#define FTU_CONF_RTRIGR(x) \
    (((uint32)(((uint32)(x)) << FTU_CONF_RTRIGR_SHIFT)) & FTU_CONF_RTRIGR_MASK)

#define FTU_CONF_GTBEEN_MASK  0x200u

#define FTU_CONF_GTBEEN_SHIFT 9u

#define FTU_CONF_GTBEEN_WIDTH 1u

#define FTU_CONF_GTBEEN(x) \
    (((uint32)(((uint32)(x)) << FTU_CONF_GTBEEN_SHIFT)) & FTU_CONF_GTBEEN_MASK)

#define FTU_CONF_DBG_MASK       0xC0u

#define FTU_CONF_DBG_SHIFT      6u

#define FTU_CONF_DBG_WIDTH      2u

#define FTU_CONF_DBG(x)         (((uint32)(((uint32)(x)) << FTU_CONF_DBG_SHIFT)) & FTU_CONF_DBG_MASK)

#define FTU_CONF_LDFQ_MASK      0x1Fu

#define FTU_CONF_LDFQ_SHIFT     0u

#define FTU_CONF_LDFQ_WIDTH     5u

#define FTU_CONF_LDFQ(x)        (((uint32)(((uint32)(x)) << FTU_CONF_LDFQ_SHIFT)) & FTU_CONF_LDFQ_MASK)

/* CONF Reg Mask */

#define FTU_CONF_MASK           0x00000ADFu

/* FLTPOL Bit Fields */

#define FTU_FLTPOL_FDLYV1_MASK  0xFF0000u

#define FTU_FLTPOL_FDLYV1_SHIFT 16u

#define FTU_FLTPOL_FDLYV1_WIDTH 8u

#define FTU_FLTPOL_FDLYV1(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTPOL_FDLYV1_SHIFT)) & FTU_FLTPOL_FDLYV1_MASK)

#define FTU_FLTPOL_FLT3POL_MASK  0x8u

#define FTU_FLTPOL_FLT3POL_SHIFT 3u

#define FTU_FLTPOL_FLT3POL_WIDTH 1u

#define FTU_FLTPOL_FLT3POL(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTPOL_FLT3POL_SHIFT)) & FTU_FLTPOL_FLT3POL_MASK)

#define FTU_FLTPOL_FLT2POL_MASK  0x4u

#define FTU_FLTPOL_FLT2POL_SHIFT 2u

#define FTU_FLTPOL_FLT2POL_WIDTH 1u

#define FTU_FLTPOL_FLT2POL(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTPOL_FLT2POL_SHIFT)) & FTU_FLTPOL_FLT2POL_MASK)

#define FTU_FLTPOL_FLT1POL_MASK  0x2u

#define FTU_FLTPOL_FLT1POL_SHIFT 1u

#define FTU_FLTPOL_FLT1POL_WIDTH 1u

#define FTU_FLTPOL_FLT1POL(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTPOL_FLT1POL_SHIFT)) & FTU_FLTPOL_FLT1POL_MASK)

#define FTU_FLTPOL_FLT0POL_MASK  0x1u

#define FTU_FLTPOL_FLT0POL_SHIFT 0u

#define FTU_FLTPOL_FLT0POL_WIDTH 1u

#define FTU_FLTPOL_FLT0POL(x) \
    (((uint32)(((uint32)(x)) << FTU_FLTPOL_FLT0POL_SHIFT)) & FTU_FLTPOL_FLT0POL_MASK)

/* FLTPOL Reg Mask */

#define FTU_FLTPOL_MASK          0x0000000Fu

/* SYNCONF Bit Fields */

#define FTU_SYNCONF_CNTINC_MASK  0x4u

#define FTU_SYNCONF_CNTINC_SHIFT 2u

#define FTU_SYNCONF_CNTINC_WIDTH 1u

#define FTU_SYNCONF_CNTINC(x) \
    (((uint32)(((uint32)(x)) << FTU_SYNCONF_CNTINC_SHIFT)) & FTU_SYNCONF_CNTINC_MASK)

#define FTU_SYNCONF_HWTRIGMODE_MASK  0x1u

#define FTU_SYNCONF_HWTRIGMODE_SHIFT 0u

#define FTU_SYNCONF_HWTRIGMODE_WIDTH 1u

#define FTU_SYNCONF_HWTRIGMODE(x) \
    (((uint32)(((uint32)(x)) << FTU_SYNCONF_HWTRIGMODE_SHIFT)) & FTU_SYNCONF_HWTRIGMODE_MASK)

/* SYNCONF Reg Mask */

#define FTU_SYNCONF_MASK         0x00000005u

/* INVCTRL Bit Fields */

#define FTU_INVCTRL_INV3EN_MASK  0x8u

#define FTU_INVCTRL_INV3EN_SHIFT 3u

#define FTU_INVCTRL_INV3EN_WIDTH 1u

#define FTU_INVCTRL_INV3EN(x) \
    (((uint32)(((uint32)(x)) << FTU_INVCTRL_INV3EN_SHIFT)) & FTU_INVCTRL_INV3EN_MASK)

#define FTU_INVCTRL_INV2EN_MASK  0x4u

#define FTU_INVCTRL_INV2EN_SHIFT 2u

#define FTU_INVCTRL_INV2EN_WIDTH 1u

#define FTU_INVCTRL_INV2EN(x) \
    (((uint32)(((uint32)(x)) << FTU_INVCTRL_INV2EN_SHIFT)) & FTU_INVCTRL_INV2EN_MASK)

#define FTU_INVCTRL_INV1EN_MASK  0x2u

#define FTU_INVCTRL_INV1EN_SHIFT 1u

#define FTU_INVCTRL_INV1EN_WIDTH 1u

#define FTU_INVCTRL_INV1EN(x) \
    (((uint32)(((uint32)(x)) << FTU_INVCTRL_INV1EN_SHIFT)) & FTU_INVCTRL_INV1EN_MASK)

#define FTU_INVCTRL_INV0EN_MASK  0x1u

#define FTU_INVCTRL_INV0EN_SHIFT 0u

#define FTU_INVCTRL_INV0EN_WIDTH 1u

#define FTU_INVCTRL_INV0EN(x) \
    (((uint32)(((uint32)(x)) << FTU_INVCTRL_INV0EN_SHIFT)) & FTU_INVCTRL_INV0EN_MASK)

/* INVCTRL Reg Mask */

#define FTU_INVCTRL_MASK         0x0000000Fu

/* SWOCTRL Bit Fields */

#define FTU_SWOCTRL_CHNOCV_MASK  0xFF00u

#define FTU_SWOCTRL_CHNOCV_SHIFT 8u

#define FTU_SWOCTRL_CHNOCV_WIDTH 8u

#define FTU_SWOCTRL_CHNOCV(x) \
    (((uint32)(((uint32)(x)) << FTU_SWOCTRL_CHNOCV_SHIFT)) & FTU_SWOCTRL_CHNOCV_MASK)

#define FTU_SWOCTRL_CHNOC_MASK  0xFFu

#define FTU_SWOCTRL_CHNOC_SHIFT 0u

#define FTU_SWOCTRL_CHNOC_WIDTH 8u

#define FTU_SWOCTRL_CHNOC(x) \
    (((uint32)(((uint32)(x)) << FTU_SWOCTRL_CHNOC_SHIFT)) & FTU_SWOCTRL_CHNOC_MASK)

/* SWOCTRL Reg Mask */

#define FTU_SWOCTRL_MASK       0x0000FFFFu

/* PWMLOAD Bit Fields */

#define FTU_PWMLOAD_LDOK_MASK  0x200u

#define FTU_PWMLOAD_LDOK_SHIFT 9u

#define FTU_PWMLOAD_LDOK_WIDTH 1u

#define FTU_PWMLOAD_LDOK(x) \
    (((uint32)(((uint32)(x)) << FTU_PWMLOAD_LDOK_SHIFT)) & FTU_PWMLOAD_LDOK_MASK)

#define FTU_PWMLOAD_CHNSEL_MASK  0xFFu

#define FTU_PWMLOAD_CHNSEL_SHIFT 0u

#define FTU_PWMLOAD_CHNSEL_WIDTH 8u

#define FTU_PWMLOAD_CHNSEL(x) \
    (((uint32)(((uint32)(x)) << FTU_PWMLOAD_CHNSEL_SHIFT)) & FTU_PWMLOAD_CHNSEL_MASK)

/* PWMLOAD Reg Mask */

#define FTU_PWMLOAD_MASK               0x000002FFu

/* PAIRDEADTIME Bit Fields */

#define FTU_PAIRDEADTIME_DTVALEX_MASK  0xF0000u

#define FTU_PAIRDEADTIME_DTVALEX_SHIFT 16u

#define FTU_PAIRDEADTIME_DTVALEX_WIDTH 4u

#define FTU_PAIRDEADTIME_DTVALEX(x) \
    (((uint32)(((uint32)(x)) << FTU_PAIRDEADTIME_DTVALEX_SHIFT)) & FTU_PAIRDEADTIME_DTVALEX_MASK)

#define FTU_PAIRDEADTIME_DTPS_MASK  0xC0u

#define FTU_PAIRDEADTIME_DTPS_SHIFT 6u

#define FTU_PAIRDEADTIME_DTPS_WIDTH 2u

#define FTU_PAIRDEADTIME_DTPS(x) \
    (((uint32)(((uint32)(x)) << FTU_PAIRDEADTIME_DTPS_SHIFT)) & FTU_PAIRDEADTIME_DTPS_MASK)

#define FTU_PAIRDEADTIME_DTVAL_MASK  0x3Fu

#define FTU_PAIRDEADTIME_DTVAL_SHIFT 0u

#define FTU_PAIRDEADTIME_DTVAL_WIDTH 6u

#define FTU_PAIRDEADTIME_DTVAL(x) \
    (((uint32)(((uint32)(x)) << FTU_PAIRDEADTIME_DTVAL_SHIFT)) & FTU_PAIRDEADTIME_DTVAL_MASK)

/* PAIRDEADTIME0 Reg Mask */

#define FTU_PAIRDEADTIME_MASK      0x000F00FFu

/*==================================================================================================
*                                GLOBAL DEFINES & DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/** FTU - Register Layout Typedef */
#define FTU_CHANNEL_CONTROLS_COUNT 8u
#define FTU_INSTANCE_COUNT         12U /*  FTU MAX Instances Count for supported chips*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

typedef struct
{

    __IO uint32 SC; /* Status And Control, offset: 0x0 */

    __IO uint32 CNT; /* Counter, offset: 0x4 */

    __IO uint32 MOD; /* Modulo, offset: 0x8 */

    struct
    {

        __IO uint32 CnSC; /* Channel n control and status, offset: 0xc */

        __IO uint32 CnV; /* Channel n value, offset: 0x10 */
    } CONTROLS[FTU_CHANNEL_CONTROLS_COUNT];

    __IO uint32 CNTIN; /* Counter Initial Value, offset: 0x4C */

    __IO uint32 STATUS; /* Capture and Compare Status, offset: 0x50 */

    __IO uint32 MODE; /* Mode Selection, offset: 0x54 */

    __IO uint32 SYNC; /* Synchronization, offset: 0x58 */

    __IO uint32 OUTINIT; /* Initial State For Channels Output, offset: 0x5C */

    __IO uint32 OUTMASK; /* Output Mask, offset: 0x60 */

    __IO uint32 CHCTRL; /* Channel control, offset: 0x64 */

    __IO uint32 DEADTIME; /* Deadtime Configuration, offset: 0x68 */

    __IO uint32 TRIGCONF; /* FTU Trigger out configuration, offset: 0x6C */

    __IO uint32 POL; /* Polarity, offset: 0x70 */

    __IO uint32 FMS; /* Fault Mode Status, offset: 0x74 */

    __IO uint32 FILTER; /* Input Capture Filter Control, offset: 0x78 */

    __IO uint32 FLTCTRL; /* Fault Control, offset: 0x7C */

    __IO uint32 QDCTRL; /* Quadrature Decoder Control And Status, offset: 0x80 */

    __IO uint32 CONF; /* Configuration, offset: 0x84 */

    __IO uint32 FLTPOL; /* FTU Fault Input Polarity, offset: 0x88 */

    __IO uint32 SYNCONF; /* Synchronization Configuration, offset: 0x8C */

    __IO uint32 INVCTRL; /* FTU Inverting Control, offset: 0x90 */

    __IO uint32 SWOCTRL; /* FTU Software Output Control, offset: 0x94 */

    __IO uint32 PWMLOAD; /* FTU PWM Load, offset: 0x98 */

    uint8 RESERVED_0[4];

    __IO uint32 PAIRDEADTIME0; /* Pair (n) Deadtime Configuration, offset: 0xa0 */

    uint8 RESERVED_1[4];

    __IO uint32 PAIRDEADTIME1; /* Pair (n) Deadtime Configuration, offset: 0xa8 */

    uint8 RESERVED_2[4];

    __IO uint32 PAIRDEADTIME2; /* Pair (n) Deadtime Configuration, offset: 0xb0 */

    uint8 RESERVED_3[4];

    __IO uint32 PAIRDEADTIME3; /* Pair (n) Deadtime Configuration, offset: 0xb8 */

} FTU_Type;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define COMMON_START_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"

COMMON_DATA_SECTION extern FTU_Type *const FTU_PTRS[FTU_INSTANCE_COUNT];

#define COMMON_STOP_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"
/*===============================================================================================
                                     FUNCTION PROTOTYPES
===============================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* FTU_REG_H */

/** @} */
