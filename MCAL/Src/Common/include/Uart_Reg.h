/**
*   @file    Uart_Reg.h
*   @version 1.5.1

*   @brief   AUTOSAR UART - Module register and macro definitions.
*   @details UART module registers, and macrodefinitions used to manipulate the module registers.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
*   PLATFORM             : Flagchip FC7xxx
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
*   ---------   ----------    ------------- ----------   ------------------
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
==================================================================================================*/
#ifndef UART_REG_H_
#define UART_REG_H_

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
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1B))
/** Peripheral FCUART0 base address */

#define FCUART0_BASE  (0x40068000u)

/** Peripheral FCUART0 base pointer */

#define FCUART0       ((FCUART_Type *)FCUART0_BASE)

/** Peripheral FCUART1 base address */

#define FCUART1_BASE  (0x40069000u)

/** Peripheral FCUART1 base pointer */

#define FCUART1       ((FCUART_Type *)FCUART1_BASE)

/** Peripheral FCUART2 base address */

#define FCUART2_BASE  (0x4006a000u)

/** Peripheral FCUART2 base pointer */

#define FCUART2       ((FCUART_Type *)FCUART2_BASE)

/** Peripheral FCUART3 base address */

#define FCUART3_BASE  (0x4006b000u)

/** Peripheral FCUART3 base pointer */

#define FCUART3       ((FCUART_Type *)FCUART3_BASE)

/** Peripheral FCUART4 base address */

#define FCUART4_BASE  (0x4006c000u)

/** Peripheral FCUART4 base pointer */

#define FCUART4       ((FCUART_Type *)FCUART4_BASE)

/** Peripheral FCUART5 base address */

#define FCUART5_BASE  (0x4006d000u)

/** Peripheral FCUART5 base pointer */

#define FCUART5       ((FCUART_Type *)FCUART5_BASE)

/** Peripheral FCUART6 base address */

#define FCUART6_BASE  (0x4006e000u)

/** Peripheral FCUART6 base pointer */

#define FCUART6       ((FCUART_Type *)FCUART6_BASE)

/** Peripheral FCUART7 base address */

#define FCUART7_BASE  (0x4006f000u)

/** Peripheral FCUART7 base pointer */

#define FCUART7       ((FCUART_Type *)FCUART7_BASE)

/** Peripheral FCUART16 base address */

#define FCUART16_BASE (0x40446000u)

/** Peripheral FCUART16 base pointer */

#define FCUART16      ((FCUART_Type *)FCUART16_BASE)

/** Peripheral FCUART17 base address */

#define FCUART17_BASE (0x40447000u)

/** Peripheral FCUART17 base pointer */

#define FCUART17      ((FCUART_Type *)FCUART17_BASE)

/** Peripheral FCUART8 base address */

#define FCUART8_BASE  (0x40468000u)

/** Peripheral FCUART8 base pointer */

#define FCUART8       ((FCUART_Type *)FCUART8_BASE)

/** Peripheral FCUART9 base address */

#define FCUART9_BASE  (0x40469000u)

/** Peripheral FCUART9 base pointer */

#define FCUART9       ((FCUART_Type *)FCUART9_BASE)

/** Peripheral FCUART10 base address */

#define FCUART10_BASE (0x4046a000u)

/** Peripheral FCUART10 base pointer */

#define FCUART10      ((FCUART_Type *)FCUART10_BASE)

/** Peripheral FCUART11 base address */

#define FCUART11_BASE (0x4046b000u)

/** Peripheral FCUART11 base pointer */

#define FCUART11      ((FCUART_Type *)FCUART11_BASE)

/** Peripheral FCUART12 base address */

#define FCUART12_BASE (0x4046c000u)

/** Peripheral FCUART12 base pointer */

#define FCUART12      ((FCUART_Type *)FCUART12_BASE)

/** Peripheral FCUART13 base address */

#define FCUART13_BASE (0x4046d000u)

/** Peripheral FCUART13 base pointer */

#define FCUART13      ((FCUART_Type *)FCUART13_BASE)

/** Peripheral FCUART14 base address */

#define FCUART14_BASE (0x4046e000u)

/** Peripheral FCUART14 base pointer */

#define FCUART14      ((FCUART_Type *)FCUART14_BASE)

/** Peripheral FCUART15 base address */

#define FCUART15_BASE (0x4046f000u)

/** Peripheral FCUART15 base pointer */

#define FCUART15      ((FCUART_Type *)FCUART15_BASE)

/** Array initializer of FCUART peripheral base addresses */

#define FCUART_BASE_ADDRS                                                                       \
    { FCUART0_BASE,  FCUART1_BASE,  FCUART2_BASE,  FCUART3_BASE,  FCUART4_BASE,  FCUART5_BASE,  \
      FCUART6_BASE,  FCUART7_BASE,  FCUART8_BASE,  FCUART9_BASE,  FCUART10_BASE, FCUART11_BASE, \
      FCUART12_BASE, FCUART13_BASE, FCUART14_BASE, FCUART15_BASE, FCUART16_BASE, FCUART17_BASE }

/** Array initializer of FCUART peripheral base pointers */

#define FCUART_BASE_PTRS                                                                      \
    { FCUART0, FCUART1,  FCUART2,  FCUART3,  FCUART4,  FCUART5,  FCUART6,  FCUART7,  FCUART8, \
      FCUART9, FCUART10, FCUART11, FCUART12, FCUART13, FCUART14, FCUART15, FCUART16, FCUART17 }

#elif ((DEVICE_SERIES == FC7300F8MDQxxxxT1B))
/** Peripheral FCUART0 base address */

#define FCUART0_BASE  (0x40068000u)

/** Peripheral FCUART0 base pointer */

#define FCUART0       ((FCUART_Type *)FCUART0_BASE)

/** Peripheral FCUART1 base address */

#define FCUART1_BASE  (0x40069000u)

/** Peripheral FCUART1 base pointer */

#define FCUART1       ((FCUART_Type *)FCUART1_BASE)

/** Peripheral FCUART2 base address */

#define FCUART2_BASE  (0x4006a000u)

/** Peripheral FCUART2 base pointer */

#define FCUART2       ((FCUART_Type *)FCUART2_BASE)

/** Peripheral FCUART3 base address */

#define FCUART3_BASE  (0x4006b000u)

/** Peripheral FCUART3 base pointer */

#define FCUART3       ((FCUART_Type *)FCUART3_BASE)

/** Peripheral FCUART4 base address */

#define FCUART4_BASE  (0x4006c000u)

/** Peripheral FCUART4 base pointer */

#define FCUART4       ((FCUART_Type *)FCUART4_BASE)

/** Peripheral FCUART5 base address */

#define FCUART5_BASE  (0x4006d000u)

/** Peripheral FCUART5 base pointer */

#define FCUART5       ((FCUART_Type *)FCUART5_BASE)

/** Peripheral FCUART6 base address */

#define FCUART6_BASE  (0x4006e000u)

/** Peripheral FCUART6 base pointer */

#define FCUART6       ((FCUART_Type *)FCUART6_BASE)

/** Peripheral FCUART7 base address */

#define FCUART7_BASE  (0x4006f000u)

/** Peripheral FCUART7 base pointer */

#define FCUART7       ((FCUART_Type *)FCUART7_BASE)

/** Peripheral FCUART8 base address */

#define FCUART8_BASE  (0x40468000u)

/** Peripheral FCUART8 base pointer */

#define FCUART8       ((FCUART_Type *)FCUART8_BASE)

/** Peripheral FCUART9 base address */

#define FCUART9_BASE  (0x40469000u)

/** Peripheral FCUART9 base pointer */

#define FCUART9       ((FCUART_Type *)FCUART9_BASE)

/** Peripheral FCUART10 base address */

#define FCUART10_BASE (0x4046a000u)

/** Peripheral FCUART10 base pointer */

#define FCUART10      ((FCUART_Type *)FCUART10_BASE)

/** Peripheral FCUART11 base address */

#define FCUART11_BASE (0x4046b000u)

/** Peripheral FCUART11 base pointer */

#define FCUART11      ((FCUART_Type *)FCUART11_BASE)

/** Peripheral FCUART12 base address */

#define FCUART12_BASE (0x4046c000u)

/** Peripheral FCUART12 base pointer */

#define FCUART12      ((FCUART_Type *)FCUART12_BASE)

/** Peripheral FCUART13 base address */

#define FCUART13_BASE (0x4046d000u)

/** Peripheral FCUART13 base pointer */

#define FCUART13      ((FCUART_Type *)FCUART13_BASE)

/** Array initializer of FCUART peripheral base addresses */

#define FCUART_BASE_ADDRS                                                      \
    { FCUART0_BASE,  FCUART1_BASE,  FCUART2_BASE,  FCUART3_BASE, FCUART4_BASE, \
      FCUART5_BASE,  FCUART6_BASE,  FCUART7_BASE,  FCUART8_BASE, FCUART9_BASE, \
      FCUART10_BASE, FCUART11_BASE, FCUART12_BASE, FCUART13_BASE }

/** Array initializer of FCUART peripheral base pointers */

#define FCUART_BASE_PTRS                                                \
    { FCUART0, FCUART1, FCUART2, FCUART3,  FCUART4,  FCUART5,  FCUART6, \
      FCUART7, FCUART8, FCUART9, FCUART10, FCUART11, FCUART12, FCUART13 }

#elif ((DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || \
       (DEVICE_SERIES == FC7240F2MDSxxxxT1A))

/** Peripheral FCUART0 base address */

#define FCUART0_BASE (0x40068000u)

/** Peripheral FCUART0 base pointer */

#define FCUART0      ((FCUART_Type *)FCUART0_BASE)

/** Peripheral FCUART1 base address */

#define FCUART1_BASE (0x40069000u)

/** Peripheral FCUART1 base pointer */

#define FCUART1      ((FCUART_Type *)FCUART1_BASE)

/** Peripheral FCUART2 base address */

#define FCUART2_BASE (0x4006a000u)

/** Peripheral FCUART2 base pointer */

#define FCUART2      ((FCUART_Type *)FCUART2_BASE)

/** Peripheral FCUART3 base address */

#define FCUART3_BASE (0x4006b000u)

/** Peripheral FCUART3 base pointer */

#define FCUART3      ((FCUART_Type *)FCUART3_BASE)

/** Peripheral FCUART4 base address */

#define FCUART4_BASE (0x40468000u)

/** Peripheral FCUART4 base pointer */

#define FCUART4      ((FCUART_Type *)FCUART4_BASE)

/** Peripheral FCUART5 base address */

#define FCUART5_BASE (0x40469000u)

/** Peripheral FCUART5 base pointer */

#define FCUART5      ((FCUART_Type *)FCUART5_BASE)

/** Peripheral FCUART6 base address */

#define FCUART6_BASE (0x4046a000u)

/** Peripheral FCUART6 base pointer */

#define FCUART6      ((FCUART_Type *)FCUART6_BASE)

/** Peripheral FCUART7 base address */

#define FCUART7_BASE (0x4046b000u)

/** Peripheral FCUART7 base pointer */

#define FCUART7      ((FCUART_Type *)FCUART7_BASE)

/** Array initializer of FCUART peripheral base addresses */

#define FCUART_BASE_ADDRS                                     \
    { FCUART0_BASE, FCUART1_BASE, FCUART2_BASE, FCUART3_BASE, \
      FCUART4_BASE, FCUART5_BASE, FCUART6_BASE, FCUART7_BASE }

/** Array initializer of FCUART peripheral base pointers */

#define FCUART_BASE_PTRS { FCUART0, FCUART1, FCUART2, FCUART3, FCUART4, FCUART5, FCUART6, FCUART7 }

#else
/* More platform... */
#endif

/*!

 * @addtogroup FCUART_Register_Masks FCUART Register Masks

 * @{

 */
/* RST Bit Fields */

#define FCUART_RST_RST_MASK         0x2u

#define FCUART_RST_RST_SHIFT        1u

#define FCUART_RST_RST_WIDTH        1u

#define FCUART_RST_RST(x)           (((uint32)(((uint32)(x)) << FCUART_RST_RST_SHIFT)) & FCUART_RST_RST_MASK)

/* RST Reg Mask */

#define FCUART_RST_MASK             0x00000002u

/* PIN_CFG Bit Fields */

#define FCUART_PIN_CFG_TRGSEL_MASK  0x3u

#define FCUART_PIN_CFG_TRGSEL_SHIFT 0u

#define FCUART_PIN_CFG_TRGSEL_WIDTH 2u

#define FCUART_PIN_CFG_TRGSEL(x) \
    (((uint32)(((uint32)(x)) << FCUART_PIN_CFG_TRGSEL_SHIFT)) & FCUART_PIN_CFG_TRGSEL_MASK)

/* PIN_CFG Reg Mask */

#define FCUART_PIN_CFG_MASK     0x00000003u

/* BAUD Bit Fields */

#define FCUART_BAUD_MAEN0_MASK  0x80000000u

#define FCUART_BAUD_MAEN0_SHIFT 31u

#define FCUART_BAUD_MAEN0_WIDTH 1u

#define FCUART_BAUD_MAEN0(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_MAEN0_SHIFT)) & FCUART_BAUD_MAEN0_MASK)

#define FCUART_BAUD_MAEN1_MASK  0x40000000u

#define FCUART_BAUD_MAEN1_SHIFT 30u

#define FCUART_BAUD_MAEN1_WIDTH 1u

#define FCUART_BAUD_MAEN1(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_MAEN1_SHIFT)) & FCUART_BAUD_MAEN1_MASK)

#define FCUART_BAUD_10BIT_MODE_MASK  0x20000000u

#define FCUART_BAUD_10BIT_MODE_SHIFT 29u

#define FCUART_BAUD_10BIT_MODE_WIDTH 1u

#define FCUART_BAUD_10BIT_MODE(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_10BIT_MODE_SHIFT)) & FCUART_BAUD_10BIT_MODE_MASK)

#define FCUART_BAUD_OVR_SAMP_MASK  0x1F000000u

#define FCUART_BAUD_OVR_SAMP_SHIFT 24u

#define FCUART_BAUD_OVR_SAMP_WIDTH 5u

#define FCUART_BAUD_OVR_SAMP(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_OVR_SAMP_SHIFT)) & FCUART_BAUD_OVR_SAMP_MASK)

#define FCUART_BAUD_TDMAEN_MASK  0x800000u

#define FCUART_BAUD_TDMAEN_SHIFT 23u

#define FCUART_BAUD_TDMAEN_WIDTH 1u

#define FCUART_BAUD_TDMAEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_TDMAEN_SHIFT)) & FCUART_BAUD_TDMAEN_MASK)

#define FCUART_BAUD_RDMAEN_MASK  0x200000u

#define FCUART_BAUD_RDMAEN_SHIFT 21u

#define FCUART_BAUD_RDMAEN_WIDTH 1u

#define FCUART_BAUD_RDMAEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_RDMAEN_SHIFT)) & FCUART_BAUD_RDMAEN_MASK)

#define FCUART_BAUD_RIDMAEN_MASK  0x100000u

#define FCUART_BAUD_RIDMAEN_SHIFT 20u

#define FCUART_BAUD_RIDMAEN_WIDTH 1u

#define FCUART_BAUD_RIDMAEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_RIDMAEN_SHIFT)) & FCUART_BAUD_RIDMAEN_MASK)

#define FCUART_BAUD_MATCH_CFG_MASK  0xC0000u

#define FCUART_BAUD_MATCH_CFG_SHIFT 18u

#define FCUART_BAUD_MATCH_CFG_WIDTH 2u

#define FCUART_BAUD_MATCH_CFG(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_MATCH_CFG_SHIFT)) & FCUART_BAUD_MATCH_CFG_MASK)

#define FCUART_BAUD_BEDGE_SAMP_MASK  0x20000u

#define FCUART_BAUD_BEDGE_SAMP_SHIFT 17u

#define FCUART_BAUD_BEDGE_SAMP_WIDTH 1u

#define FCUART_BAUD_BEDGE_SAMP(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_BEDGE_SAMP_SHIFT)) & FCUART_BAUD_BEDGE_SAMP_MASK)

#define FCUART_BAUD_RESYNC_DIS_MASK  0x10000u

#define FCUART_BAUD_RESYNC_DIS_SHIFT 16u

#define FCUART_BAUD_RESYNC_DIS_WIDTH 1u

#define FCUART_BAUD_RESYNC_DIS(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_RESYNC_DIS_SHIFT)) & FCUART_BAUD_RESYNC_DIS_MASK)

#define FCUART_BAUD_LBKDIE_MASK  0x8000u

#define FCUART_BAUD_LBKDIE_SHIFT 15u

#define FCUART_BAUD_LBKDIE_WIDTH 1u

#define FCUART_BAUD_LBKDIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_LBKDIE_SHIFT)) & FCUART_BAUD_LBKDIE_MASK)

#define FCUART_BAUD_RIAEIE_MASK  0x4000u

#define FCUART_BAUD_RIAEIE_SHIFT 14u

#define FCUART_BAUD_RIAEIE_WIDTH 1u

#define FCUART_BAUD_RIAEIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_RIAEIE_SHIFT)) & FCUART_BAUD_RIAEIE_MASK)

#define FCUART_BAUD_SBNS_MASK  0x2000u

#define FCUART_BAUD_SBNS_SHIFT 13u

#define FCUART_BAUD_SBNS_WIDTH 1u

#define FCUART_BAUD_SBNS(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_SBNS_SHIFT)) & FCUART_BAUD_SBNS_MASK)

#define FCUART_BAUD_SBR_MASK  0x1FFFu

#define FCUART_BAUD_SBR_SHIFT 0u

#define FCUART_BAUD_SBR_WIDTH 13u

#define FCUART_BAUD_SBR(x) \
    (((uint32)(((uint32)(x)) << FCUART_BAUD_SBR_SHIFT)) & FCUART_BAUD_SBR_MASK)

/* BAUD Reg Mask */

#define FCUART_BAUD_MASK         0xFFBFFFFFu

/* STAT Bit Fields */

#define FCUART_STAT_LBKDIF_MASK  0x80000000u

#define FCUART_STAT_LBKDIF_SHIFT 31u

#define FCUART_STAT_LBKDIF_WIDTH 1u

#define FCUART_STAT_LBKDIF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_LBKDIF_SHIFT)) & FCUART_STAT_LBKDIF_MASK)

#define FCUART_STAT_RPAEIF_MASK  0x40000000u

#define FCUART_STAT_RPAEIF_SHIFT 30u

#define FCUART_STAT_RPAEIF_WIDTH 1u

#define FCUART_STAT_RPAEIF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_RPAEIF_SHIFT)) & FCUART_STAT_RPAEIF_MASK)

#define FCUART_STAT_MSBF_MASK  0x20000000u

#define FCUART_STAT_MSBF_SHIFT 29u

#define FCUART_STAT_MSBF_WIDTH 1u

#define FCUART_STAT_MSBF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_MSBF_SHIFT)) & FCUART_STAT_MSBF_MASK)

#define FCUART_STAT_RXINV_MASK  0x10000000u

#define FCUART_STAT_RXINV_SHIFT 28u

#define FCUART_STAT_RXINV_WIDTH 1u

#define FCUART_STAT_RXINV(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_RXINV_SHIFT)) & FCUART_STAT_RXINV_MASK)

#define FCUART_STAT_RWUID_MASK  0x8000000u

#define FCUART_STAT_RWUID_SHIFT 27u

#define FCUART_STAT_RWUID_WIDTH 1u

#define FCUART_STAT_RWUID(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_RWUID_SHIFT)) & FCUART_STAT_RWUID_MASK)

#define FCUART_STAT_BCGL_MASK  0x4000000u

#define FCUART_STAT_BCGL_SHIFT 26u

#define FCUART_STAT_BCGL_WIDTH 1u

#define FCUART_STAT_BCGL(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_BCGL_SHIFT)) & FCUART_STAT_BCGL_MASK)

#define FCUART_STAT_LBKDE_MASK  0x2000000u

#define FCUART_STAT_LBKDE_SHIFT 25u

#define FCUART_STAT_LBKDE_WIDTH 1u

#define FCUART_STAT_LBKDE(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_LBKDE_SHIFT)) & FCUART_STAT_LBKDE_MASK)

#define FCUART_STAT_RAF_MASK  0x1000000u

#define FCUART_STAT_RAF_SHIFT 24u

#define FCUART_STAT_RAF_WIDTH 1u

#define FCUART_STAT_RAF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_RAF_SHIFT)) & FCUART_STAT_RAF_MASK)

#define FCUART_STAT_TDREF_MASK  0x800000u

#define FCUART_STAT_TDREF_SHIFT 23u

#define FCUART_STAT_TDREF_WIDTH 1u

#define FCUART_STAT_TDREF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_TDREF_SHIFT)) & FCUART_STAT_TDREF_MASK)

#define FCUART_STAT_TCF_MASK  0x400000u

#define FCUART_STAT_TCF_SHIFT 22u

#define FCUART_STAT_TCF_WIDTH 1u

#define FCUART_STAT_TCF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_TCF_SHIFT)) & FCUART_STAT_TCF_MASK)

#define FCUART_STAT_RDRFF_MASK  0x200000u

#define FCUART_STAT_RDRFF_SHIFT 21u

#define FCUART_STAT_RDRFF_WIDTH 1u

#define FCUART_STAT_RDRFF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_RDRFF_SHIFT)) & FCUART_STAT_RDRFF_MASK)

#define FCUART_STAT_IDLEF_MASK  0x100000u

#define FCUART_STAT_IDLEF_SHIFT 20u

#define FCUART_STAT_IDLEF_WIDTH 1u

#define FCUART_STAT_IDLEF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_IDLEF_SHIFT)) & FCUART_STAT_IDLEF_MASK)

#define FCUART_STAT_RORF_MASK  0x80000u

#define FCUART_STAT_RORF_SHIFT 19u

#define FCUART_STAT_RORF_WIDTH 1u

#define FCUART_STAT_RORF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_RORF_SHIFT)) & FCUART_STAT_RORF_MASK)

#define FCUART_STAT_NF_MASK   0x40000u

#define FCUART_STAT_NF_SHIFT  18u

#define FCUART_STAT_NF_WIDTH  1u

#define FCUART_STAT_NF(x)     (((uint32)(((uint32)(x)) << FCUART_STAT_NF_SHIFT)) & FCUART_STAT_NF_MASK)

#define FCUART_STAT_FEF_MASK  0x20000u

#define FCUART_STAT_FEF_SHIFT 17u

#define FCUART_STAT_FEF_WIDTH 1u

#define FCUART_STAT_FEF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_FEF_SHIFT)) & FCUART_STAT_FEF_MASK)

#define FCUART_STAT_PEF_MASK  0x10000u

#define FCUART_STAT_PEF_SHIFT 16u

#define FCUART_STAT_PEF_WIDTH 1u

#define FCUART_STAT_PEF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_PEF_SHIFT)) & FCUART_STAT_PEF_MASK)

#define FCUART_STAT_M0F_MASK  0x8000u

#define FCUART_STAT_M0F_SHIFT 15u

#define FCUART_STAT_M0F_WIDTH 1u

#define FCUART_STAT_M0F(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_M0F_SHIFT)) & FCUART_STAT_M0F_MASK)

#define FCUART_STAT_M1F_MASK  0x4000u

#define FCUART_STAT_M1F_SHIFT 14u

#define FCUART_STAT_M1F_WIDTH 1u

#define FCUART_STAT_M1F(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_M1F_SHIFT)) & FCUART_STAT_M1F_MASK)

#define FCUART_STAT_RPEF_MASK  0x8u

#define FCUART_STAT_RPEF_SHIFT 3u

#define FCUART_STAT_RPEF_WIDTH 1u

#define FCUART_STAT_RPEF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_RPEF_SHIFT)) & FCUART_STAT_RPEF_MASK)

#define FCUART_STAT_TPEF_MASK  0x4u

#define FCUART_STAT_TPEF_SHIFT 2u

#define FCUART_STAT_TPEF_WIDTH 1u

#define FCUART_STAT_TPEF(x) \
    (((uint32)(((uint32)(x)) << FCUART_STAT_TPEF_SHIFT)) & FCUART_STAT_TPEF_MASK)

/* Mcal used define */
#define FCUART_STAT_ERRFLAG_MASK (uint32)0xF0000u

#define FCUART_STAT_ALLFLAG_MASK (uint32)0xC1FFC00Cu

#define FCUART_CHANGE_MASK       0x3FE00000u
/* STAT Reg Mask */

#define FCUART_STAT_MASK         0xFFFFC00Cu

/* CTRL Bit Fields */

#define FCUART_CTRL_R8T9_MASK    0x80000000u

#define FCUART_CTRL_R8T9_SHIFT   31u

#define FCUART_CTRL_R8T9_WIDTH   1u

#define FCUART_CTRL_R8T9(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_R8T9_SHIFT)) & FCUART_CTRL_R8T9_MASK)

#define FCUART_CTRL_R9T8_MASK  0x40000000u

#define FCUART_CTRL_R9T8_SHIFT 30u

#define FCUART_CTRL_R9T8_WIDTH 1u

#define FCUART_CTRL_R9T8(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_R9T8_SHIFT)) & FCUART_CTRL_R9T8_MASK)

#define FCUART_CTRL_TXDIR_MASK  0x20000000u

#define FCUART_CTRL_TXDIR_SHIFT 29u

#define FCUART_CTRL_TXDIR_WIDTH 1u

#define FCUART_CTRL_TXDIR(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_TXDIR_SHIFT)) & FCUART_CTRL_TXDIR_MASK)

#define FCUART_CTRL_TXINV_MASK  0x10000000u

#define FCUART_CTRL_TXINV_SHIFT 28u

#define FCUART_CTRL_TXINV_WIDTH 1u

#define FCUART_CTRL_TXINV(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_TXINV_SHIFT)) & FCUART_CTRL_TXINV_MASK)

#define FCUART_CTRL_ORIE_MASK  0x8000000u

#define FCUART_CTRL_ORIE_SHIFT 27u

#define FCUART_CTRL_ORIE_WIDTH 1u

#define FCUART_CTRL_ORIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_ORIE_SHIFT)) & FCUART_CTRL_ORIE_MASK)

#define FCUART_CTRL_NEIE_MASK  0x4000000u

#define FCUART_CTRL_NEIE_SHIFT 26u

#define FCUART_CTRL_NEIE_WIDTH 1u

#define FCUART_CTRL_NEIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_NEIE_SHIFT)) & FCUART_CTRL_NEIE_MASK)

#define FCUART_CTRL_FEIE_MASK  0x2000000u

#define FCUART_CTRL_FEIE_SHIFT 25u

#define FCUART_CTRL_FEIE_WIDTH 1u

#define FCUART_CTRL_FEIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_FEIE_SHIFT)) & FCUART_CTRL_FEIE_MASK)

#define FCUART_CTRL_PEIE_MASK  0x1000000u

#define FCUART_CTRL_PEIE_SHIFT 24u

#define FCUART_CTRL_PEIE_WIDTH 1u

#define FCUART_CTRL_PEIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_PEIE_SHIFT)) & FCUART_CTRL_PEIE_MASK)

#define FCUART_CTRL_TIE_MASK  0x800000u

#define FCUART_CTRL_TIE_SHIFT 23u

#define FCUART_CTRL_TIE_WIDTH 1u

#define FCUART_CTRL_TIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_TIE_SHIFT)) & FCUART_CTRL_TIE_MASK)

#define FCUART_CTRL_TCIE_MASK  0x400000u

#define FCUART_CTRL_TCIE_SHIFT 22u

#define FCUART_CTRL_TCIE_WIDTH 1u

#define FCUART_CTRL_TCIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_TCIE_SHIFT)) & FCUART_CTRL_TCIE_MASK)

#define FCUART_CTRL_RIE_MASK  0x200000u

#define FCUART_CTRL_RIE_SHIFT 21u

#define FCUART_CTRL_RIE_WIDTH 1u

#define FCUART_CTRL_RIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_RIE_SHIFT)) & FCUART_CTRL_RIE_MASK)

#define FCUART_CTRL_IIE_MASK  0x100000u

#define FCUART_CTRL_IIE_SHIFT 20u

#define FCUART_CTRL_IIE_WIDTH 1u

#define FCUART_CTRL_IIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_IIE_SHIFT)) & FCUART_CTRL_IIE_MASK)

#define FCUART_CTRL_TE_MASK   0x80000u

#define FCUART_CTRL_TE_SHIFT  19u

#define FCUART_CTRL_TE_WIDTH  1u

#define FCUART_CTRL_TE(x)     (((uint32)(((uint32)(x)) << FCUART_CTRL_TE_SHIFT)) & FCUART_CTRL_TE_MASK)

#define FCUART_CTRL_RE_MASK   0x40000u

#define FCUART_CTRL_RE_SHIFT  18u

#define FCUART_CTRL_RE_WIDTH  1u

#define FCUART_CTRL_RE(x)     (((uint32)(((uint32)(x)) << FCUART_CTRL_RE_SHIFT)) & FCUART_CTRL_RE_MASK)

#define FCUART_CTRL_RWC_MASK  0x20000u

#define FCUART_CTRL_RWC_SHIFT 17u

#define FCUART_CTRL_RWC_WIDTH 1u

#define FCUART_CTRL_RWC(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_RWC_SHIFT)) & FCUART_CTRL_RWC_MASK)

#define FCUART_CTRL_SBK_MASK  0x10000u

#define FCUART_CTRL_SBK_SHIFT 16u

#define FCUART_CTRL_SBK_WIDTH 1u

#define FCUART_CTRL_SBK(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_SBK_SHIFT)) & FCUART_CTRL_SBK_MASK)

#define FCUART_CTRL_M0IE_MASK  0x8000u

#define FCUART_CTRL_M0IE_SHIFT 15u

#define FCUART_CTRL_M0IE_WIDTH 1u

#define FCUART_CTRL_M0IE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_M0IE_SHIFT)) & FCUART_CTRL_M0IE_MASK)

#define FCUART_CTRL_M1IE_MASK  0x4000u

#define FCUART_CTRL_M1IE_SHIFT 14u

#define FCUART_CTRL_M1IE_WIDTH 1u

#define FCUART_CTRL_M1IE(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_M1IE_SHIFT)) & FCUART_CTRL_M1IE_MASK)

#define FCUART_CTRL_BRKD_MASK  0x1000u

#define FCUART_CTRL_BRKD_SHIFT 12u

#define FCUART_CTRL_BRKD_WIDTH 1u

#define FCUART_CTRL_BRKD(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_BRKD_SHIFT)) & FCUART_CTRL_BRKD_MASK)

#define FCUART_CTRL_7BMS_MASK  0x800u

#define FCUART_CTRL_7BMS_SHIFT 11u

#define FCUART_CTRL_7BMS_WIDTH 1u

#define FCUART_CTRL_7BMS(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_7BMS_SHIFT)) & FCUART_CTRL_7BMS_MASK)

#define FCUART_CTRL_IDLECFG_MASK  0x700u

#define FCUART_CTRL_IDLECFG_SHIFT 8u

#define FCUART_CTRL_IDLECFG_WIDTH 3u

#define FCUART_CTRL_IDLECFG(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_IDLECFG_SHIFT)) & FCUART_CTRL_IDLECFG_MASK)

#define FCUART_CTRL_LOOPMS_MASK  0x80u

#define FCUART_CTRL_LOOPMS_SHIFT 7u

#define FCUART_CTRL_LOOPMS_WIDTH 1u

#define FCUART_CTRL_LOOPMS(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_LOOPMS_SHIFT)) & FCUART_CTRL_LOOPMS_MASK)

#define FCUART_CTRL_WAITEN_MASK  0x40u

#define FCUART_CTRL_WAITEN_SHIFT 6u

#define FCUART_CTRL_WAITEN_WIDTH 1u

#define FCUART_CTRL_WAITEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_WAITEN_SHIFT)) & FCUART_CTRL_WAITEN_MASK)

#define FCUART_CTRL_RXSRC_MASK  0x20u

#define FCUART_CTRL_RXSRC_SHIFT 5u

#define FCUART_CTRL_RXSRC_WIDTH 1u

#define FCUART_CTRL_RXSRC(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_RXSRC_SHIFT)) & FCUART_CTRL_RXSRC_MASK)

#define FCUART_CTRL_BMSEL_MASK  0x10u

#define FCUART_CTRL_BMSEL_SHIFT 4u

#define FCUART_CTRL_BMSEL_WIDTH 1u

#define FCUART_CTRL_BMSEL(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_BMSEL_SHIFT)) & FCUART_CTRL_BMSEL_MASK)

#define FCUART_CTRL_RSWMS_MASK  0x8u

#define FCUART_CTRL_RSWMS_SHIFT 3u

#define FCUART_CTRL_RSWMS_WIDTH 1u

#define FCUART_CTRL_RSWMS(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_RSWMS_SHIFT)) & FCUART_CTRL_RSWMS_MASK)

#define FCUART_CTRL_ITS_MASK  0x4u

#define FCUART_CTRL_ITS_SHIFT 2u

#define FCUART_CTRL_ITS_WIDTH 1u

#define FCUART_CTRL_ITS(x) \
    (((uint32)(((uint32)(x)) << FCUART_CTRL_ITS_SHIFT)) & FCUART_CTRL_ITS_MASK)

#define FCUART_CTRL_PE_MASK     0x2u

#define FCUART_CTRL_PE_SHIFT    1u

#define FCUART_CTRL_PE_WIDTH    1u

#define FCUART_CTRL_PE(x)       (((uint32)(((uint32)(x)) << FCUART_CTRL_PE_SHIFT)) & FCUART_CTRL_PE_MASK)

#define FCUART_CTRL_PT_MASK     0x1u

#define FCUART_CTRL_PT_SHIFT    0u

#define FCUART_CTRL_PT_WIDTH    1u

#define FCUART_CTRL_PT(x)       (((uint32)(((uint32)(x)) << FCUART_CTRL_PT_SHIFT)) & FCUART_CTRL_PT_MASK)

/* CTRL Reg Mask */

#define FCUART_CTRL_MASK        0xFFFFCFFFu

/* DATA Bit Fields */

#define FCUART_DATA_NOISY_MASK  0x8000u

#define FCUART_DATA_NOISY_SHIFT 15u

#define FCUART_DATA_NOISY_WIDTH 1u

#define FCUART_DATA_NOISY(x) \
    (((uint32)(((uint32)(x)) << FCUART_DATA_NOISY_SHIFT)) & FCUART_DATA_NOISY_MASK)

#define FCUART_DATA_PARITYE_MASK  0x4000u

#define FCUART_DATA_PARITYE_SHIFT 14u

#define FCUART_DATA_PARITYE_WIDTH 1u

#define FCUART_DATA_PARITYE(x) \
    (((uint32)(((uint32)(x)) << FCUART_DATA_PARITYE_SHIFT)) & FCUART_DATA_PARITYE_MASK)

#define FCUART_DATA_FETSC_MASK  0x2000u

#define FCUART_DATA_FETSC_SHIFT 13u

#define FCUART_DATA_FETSC_WIDTH 1u

#define FCUART_DATA_FETSC(x) \
    (((uint32)(((uint32)(x)) << FCUART_DATA_FETSC_SHIFT)) & FCUART_DATA_FETSC_MASK)

#define FCUART_DATA_RXEMPT_MASK  0x1000u

#define FCUART_DATA_RXEMPT_SHIFT 12u

#define FCUART_DATA_RXEMPT_WIDTH 1u

#define FCUART_DATA_RXEMPT(x) \
    (((uint32)(((uint32)(x)) << FCUART_DATA_RXEMPT_SHIFT)) & FCUART_DATA_RXEMPT_MASK)

#define FCUART_DATA_IDLE_MASK  0x800u

#define FCUART_DATA_IDLE_SHIFT 11u

#define FCUART_DATA_IDLE_WIDTH 1u

#define FCUART_DATA_IDLE(x) \
    (((uint32)(((uint32)(x)) << FCUART_DATA_IDLE_SHIFT)) & FCUART_DATA_IDLE_MASK)

#define FCUART_DATA_RXTXDATA_MASK  0x3FFu

#define FCUART_DATA_RXTXDATA_SHIFT 0u

#define FCUART_DATA_RXTXDATA_WIDTH 10u

#define FCUART_DATA_RXTXDATA(x) \
    (((uint32)(((uint32)(x)) << FCUART_DATA_RXTXDATA_SHIFT)) & FCUART_DATA_RXTXDATA_MASK)

/* DATA Reg Mask */

#define FCUART_DATA_MASK          0x0000FBFFu

/* MATCH Bit Fields */

#define FCUART_MATCH_MATCH1_MASK  0x3FF0000u

#define FCUART_MATCH_MATCH1_SHIFT 16u

#define FCUART_MATCH_MATCH1_WIDTH 10u

#define FCUART_MATCH_MATCH1(x) \
    (((uint32)(((uint32)(x)) << FCUART_MATCH_MATCH1_SHIFT)) & FCUART_MATCH_MATCH1_MASK)

#define FCUART_MATCH_MATCH0_MASK  0x3FFu

#define FCUART_MATCH_MATCH0_SHIFT 0u

#define FCUART_MATCH_MATCH0_WIDTH 10u

#define FCUART_MATCH_MATCH0(x) \
    (((uint32)(((uint32)(x)) << FCUART_MATCH_MATCH0_SHIFT)) & FCUART_MATCH_MATCH0_MASK)

/* MATCH Reg Mask */

#define FCUART_MATCH_MASK           0x03FF03FFu

/* MODIR Bit Fields */

#define FCUART_MODIR_RXRTSCFG_MASK  0x300u

#define FCUART_MODIR_RXRTSCFG_SHIFT 8u

#define FCUART_MODIR_RXRTSCFG_WIDTH 2u

#define FCUART_MODIR_RXRTSCFG(x) \
    (((uint32)(((uint32)(x)) << FCUART_MODIR_RXRTSCFG_SHIFT)) & FCUART_MODIR_RXRTSCFG_MASK)

#define FCUART_MODIR_TXCTSSRC_MASK  0x20u

#define FCUART_MODIR_TXCTSSRC_SHIFT 5u

#define FCUART_MODIR_TXCTSSRC_WIDTH 1u

#define FCUART_MODIR_TXCTSSRC(x) \
    (((uint32)(((uint32)(x)) << FCUART_MODIR_TXCTSSRC_SHIFT)) & FCUART_MODIR_TXCTSSRC_MASK)

#define FCUART_MODIR_TXCTSCFG_MASK  0x10u

#define FCUART_MODIR_TXCTSCFG_SHIFT 4u

#define FCUART_MODIR_TXCTSCFG_WIDTH 1u

#define FCUART_MODIR_TXCTSCFG(x) \
    (((uint32)(((uint32)(x)) << FCUART_MODIR_TXCTSCFG_SHIFT)) & FCUART_MODIR_TXCTSCFG_MASK)

#define FCUART_MODIR_RXRTSEN_MASK  0x8u

#define FCUART_MODIR_RXRTSEN_SHIFT 3u

#define FCUART_MODIR_RXRTSEN_WIDTH 1u

#define FCUART_MODIR_RXRTSEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_MODIR_RXRTSEN_SHIFT)) & FCUART_MODIR_RXRTSEN_MASK)

#define FCUART_MODIR_TXRTSPOL_MASK  0x4u

#define FCUART_MODIR_TXRTSPOL_SHIFT 2u

#define FCUART_MODIR_TXRTSPOL_WIDTH 1u

#define FCUART_MODIR_TXRTSPOL(x) \
    (((uint32)(((uint32)(x)) << FCUART_MODIR_TXRTSPOL_SHIFT)) & FCUART_MODIR_TXRTSPOL_MASK)

#define FCUART_MODIR_TXRTSEN_MASK  0x2u

#define FCUART_MODIR_TXRTSEN_SHIFT 1u

#define FCUART_MODIR_TXRTSEN_WIDTH 1u

#define FCUART_MODIR_TXRTSEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_MODIR_TXRTSEN_SHIFT)) & FCUART_MODIR_TXRTSEN_MASK)

#define FCUART_MODIR_TXCTSEN_MASK  0x1u

#define FCUART_MODIR_TXCTSEN_SHIFT 0u

#define FCUART_MODIR_TXCTSEN_WIDTH 1u

#define FCUART_MODIR_TXCTSEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_MODIR_TXCTSEN_SHIFT)) & FCUART_MODIR_TXCTSEN_MASK)

/* MODIR Reg Mask */

#define FCUART_MODIR_MASK         0x0000033Fu

/* FIFO Bit Fields */

#define FCUART_FIFO_TXEMPTY_MASK  0x800000u

#define FCUART_FIFO_TXEMPTY_SHIFT 23u

#define FCUART_FIFO_TXEMPTY_WIDTH 1u

#define FCUART_FIFO_TXEMPTY(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_TXEMPTY_SHIFT)) & FCUART_FIFO_TXEMPTY_MASK)

#define FCUART_FIFO_RXEMPTY_MASK  0x400000u

#define FCUART_FIFO_RXEMPTY_SHIFT 22u

#define FCUART_FIFO_RXEMPTY_WIDTH 1u

#define FCUART_FIFO_RXEMPTY(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_RXEMPTY_SHIFT)) & FCUART_FIFO_RXEMPTY_MASK)

#define FCUART_FIFO_TXOF_MASK  0x20000u

#define FCUART_FIFO_TXOF_SHIFT 17u

#define FCUART_FIFO_TXOF_WIDTH 1u

#define FCUART_FIFO_TXOF(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_TXOF_SHIFT)) & FCUART_FIFO_TXOF_MASK)

#define FCUART_FIFO_RXUF_MASK  0x10000u

#define FCUART_FIFO_RXUF_SHIFT 16u

#define FCUART_FIFO_RXUF_WIDTH 1u

#define FCUART_FIFO_RXUF(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_RXUF_SHIFT)) & FCUART_FIFO_RXUF_MASK)

#define FCUART_FIFO_TXFLUSH_MASK  0x8000u

#define FCUART_FIFO_TXFLUSH_SHIFT 15u

#define FCUART_FIFO_TXFLUSH_WIDTH 1u

#define FCUART_FIFO_TXFLUSH(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_TXFLUSH_SHIFT)) & FCUART_FIFO_TXFLUSH_MASK)

#define FCUART_FIFO_RXFLUSH_MASK  0x4000u

#define FCUART_FIFO_RXFLUSH_SHIFT 14u

#define FCUART_FIFO_RXFLUSH_WIDTH 1u

#define FCUART_FIFO_RXFLUSH(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_RXFLUSH_SHIFT)) & FCUART_FIFO_RXFLUSH_MASK)

#define FCUART_FIFO_RXIDEN_MASK  0x1C00u

#define FCUART_FIFO_RXIDEN_SHIFT 10u

#define FCUART_FIFO_RXIDEN_WIDTH 3u

#define FCUART_FIFO_RXIDEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_RXIDEN_SHIFT)) & FCUART_FIFO_RXIDEN_MASK)

#define FCUART_FIFO_TXOFIE_MASK  0x200u

#define FCUART_FIFO_TXOFIE_SHIFT 9u

#define FCUART_FIFO_TXOFIE_WIDTH 1u

#define FCUART_FIFO_TXOFIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_TXOFIE_SHIFT)) & FCUART_FIFO_TXOFIE_MASK)

#define FCUART_FIFO_RXUFIE_MASK  0x100u

#define FCUART_FIFO_RXUFIE_SHIFT 8u

#define FCUART_FIFO_RXUFIE_WIDTH 1u

#define FCUART_FIFO_RXUFIE(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_RXUFIE_SHIFT)) & FCUART_FIFO_RXUFIE_MASK)

#define FCUART_FIFO_TXFEN_MASK  0x80u

#define FCUART_FIFO_TXFEN_SHIFT 7u

#define FCUART_FIFO_TXFEN_WIDTH 1u

#define FCUART_FIFO_TXFEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_TXFEN_SHIFT)) & FCUART_FIFO_TXFEN_MASK)

#define FCUART_FIFO_TXFIFODEP_MASK  0x70u

#define FCUART_FIFO_TXFIFODEP_SHIFT 4u

#define FCUART_FIFO_TXFIFODEP_WIDTH 3u

#define FCUART_FIFO_TXFIFODEP(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_TXFIFODEP_SHIFT)) & FCUART_FIFO_TXFIFODEP_MASK)

#define FCUART_FIFO_RXFEN_MASK  0x8u

#define FCUART_FIFO_RXFEN_SHIFT 3u

#define FCUART_FIFO_RXFEN_WIDTH 1u

#define FCUART_FIFO_RXFEN(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_RXFEN_SHIFT)) & FCUART_FIFO_RXFEN_MASK)

#define FCUART_FIFO_RXFIFODEP_MASK  0x7u

#define FCUART_FIFO_RXFIFODEP_SHIFT 0u

#define FCUART_FIFO_RXFIFODEP_WIDTH 3u

#define FCUART_FIFO_RXFIFODEP(x) \
    (((uint32)(((uint32)(x)) << FCUART_FIFO_RXFIFODEP_SHIFT)) & FCUART_FIFO_RXFIFODEP_MASK)

#define FCUART_FIFO_CHANGE_MASK        0xC0FFFFu
/* FIFO Reg Mask */

#define FCUART_FIFO_MASK               0x00C3DFFFu

/* WATERMARK Bit Fields */

#define FCUART_WATERMARK_RXCOUNT_MASK  0x1F000000u

#define FCUART_WATERMARK_RXCOUNT_SHIFT 24u

#define FCUART_WATERMARK_RXCOUNT_WIDTH 5u

#define FCUART_WATERMARK_RXCOUNT(x) \
    (((uint32)(((uint32)(x)) << FCUART_WATERMARK_RXCOUNT_SHIFT)) & FCUART_WATERMARK_RXCOUNT_MASK)

#define FCUART_WATERMARK_RXWATER_MASK  0xF0000u

#define FCUART_WATERMARK_RXWATER_SHIFT 16u

#define FCUART_WATERMARK_RXWATER_WIDTH 4u

#define FCUART_WATERMARK_RXWATER(x) \
    (((uint32)(((uint32)(x)) << FCUART_WATERMARK_RXWATER_SHIFT)) & FCUART_WATERMARK_RXWATER_MASK)

#define FCUART_WATERMARK_TXCOUNT_MASK  0x1F00u

#define FCUART_WATERMARK_TXCOUNT_SHIFT 8u

#define FCUART_WATERMARK_TXCOUNT_WIDTH 5u

#define FCUART_WATERMARK_TXCOUNT(x) \
    (((uint32)(((uint32)(x)) << FCUART_WATERMARK_TXCOUNT_SHIFT)) & FCUART_WATERMARK_TXCOUNT_MASK)

#define FCUART_WATERMARK_TXWATER_MASK  0xFu

#define FCUART_WATERMARK_TXWATER_SHIFT 0u

#define FCUART_WATERMARK_TXWATER_WIDTH 4u

#define FCUART_WATERMARK_TXWATER(x) \
    (((uint32)(((uint32)(x)) << FCUART_WATERMARK_TXWATER_SHIFT)) & FCUART_WATERMARK_TXWATER_MASK)

/* WATERMARK Reg Mask */

#define FCUART_WATERMARK_MASK 0x1F0F1F0Fu

/** Number of instances of the FCUART module. */
#define FCUART_INSTANCE_COUNT (18u)

/*==================================================================================================
*                                GLOBAL DEFINES & DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef struct
{
    uint8       RESERVED_0[8];
    __IO uint32 RST;       /* RST, offset: 0x8 */
    __IO uint32 PIN_CFG;   /* PIN_CFG, offset: 0xC */
    __IO uint32 BAUD;      /* BAUD, offset: 0x10 */
    __IO uint32 STAT;      /* STAT, offset: 0x14 */
    __IO uint32 CTRL;      /* CTRL, offset: 0x18 */
    __IO uint32 DATA;      /* DATA, offset: 0x1C */
    __IO uint32 MATCH;     /* MATCH, offset: 0x20 */
    __IO uint32 MODIR;     /* MODIR, offset: 0x24 */
    __IO uint32 FIFO;      /* FIFO, offset: 0x28 */
    __IO uint32 WATERMARK; /* WATERMARK, offset: 0x2C */
} FCUART_Type, *FCUART_MemMapPtr;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*===============================================================================================
*                                     FUNCTION PROTOTYPES
===============================================================================================*/

#ifdef __cplusplus
}
#endif
#endif
