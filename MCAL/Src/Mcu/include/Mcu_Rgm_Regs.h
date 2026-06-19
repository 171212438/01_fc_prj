/**
*   @file    Mcu_Rgm_Regs.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Rgm module register and macro definitions.
*   @details Rgm module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_WKU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       08/08/2024    QXW0055       N/A          Add SOSC no wait and PMC&RGM disable API
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/
#ifndef MCU_RGM_REGS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behavior
 * Reason: It is common definition in h files */
#define MCU_RGM_REGS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcu_CfgPlatformDef.h"


/** RGM - Register Layout Typedef */

typedef struct {

    uint8  RESERVED_0[8];

    __IO uint32 SRS                           ; /* System Reset Status Register, offset: 0x8 */

    __IO uint32 RSTFLT                        ; /* Reset Filter Control Register, offset: 0xC */

    uint8  RESERVED_1[8];

    __IO uint32 SSRS                          ; /* Sticky System Reset Status, offset: 0x18 */

    __IO uint32 SRIE                          ; /* System Reset Interrupt Enable Register, offset: 0x1C */

    uint8  RESERVED_2[224];

    __IO uint32 C0_CFG                        ; /* CPU0 Reset Configuration Register, offset: 0x100 */

    __IO uint32 C0_RST                        ; /* CPU0 Reset Register, offset: 0x104 */

    __IO uint32 C0_SRS                        ; /* CPU0 System Reset Status Register, offset: 0x108 */

    uint8  RESERVED_3[8];

    __IO uint32 C0_SSRS                       ; /* CPU0 Sticky System Reset Status Register, offset: 0x114 */

#if ( MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON )
    uint8  RESERVED_4[232];

    __IO uint32 C1_CFG                        ; /* CPU1 Reset Configuration Register, offset: 0x200 */

    __IO uint32 C1_RST                        ; /* CPU1 Reset Register, offset: 0x204 */

    __IO uint32 C1_SRS                        ; /* CPU1 System Reset Status Register, offset: 0x208 */

    __IO uint32 C1_RLS                        ; /* CPU1 Release Register, offset: 0x20C */

    __IO uint32 C1_RIC                        ; /* CPU1 Reset Interrupt Control Register, offset: 0x210 */

    __IO uint32 C1_SSRS                       ; /* CPU1 Sticky System Reset Status Register, offset: 0x214 */

    uint8  RESERVED_5[232];

    __IO uint32 C2_CFG                        ; /* CPU2 Reset Configuration Register, offset: 0x300 */

    __IO uint32 C2_RST                        ; /* CPU2 Reset Register, offset: 0x304 */

    __IO uint32 C2_SRS                        ; /* CPU2 System Reset Status Register, offset: 0x308 */

    __IO uint32 C2_RLS                        ; /* CPU2 Release Register, offset: 0x30C */

    __IO uint32 C2_RIC                        ; /* CPU2 Reset Interrupt Control Register, offset: 0x310 */

    __IO uint32 C2_SSRS                       ; /* CPU2 Sticky System Reset Status Register, offset: 0x314 */

#if (MCU_CFG_RGM_C3_SUPPORT == STD_ON)
    uint8  RESERVED_6[232];

    __IO uint32 C3_CFG                        ; /* CPU3 Reset Configuration Register, offset: 0x400 */

    __IO uint32 C3_RST                        ; /* CPU3 Reset Register, offset: 0x404 */

    __IO uint32 C3_SRS                        ; /* CPU3 System Reset Status Register, offset: 0x408 */

    __IO uint32 C3_RLS                        ; /* CPU3 Release Register, offset: 0x40C */

    __IO uint32 C3_RIC                        ; /* CPU3 Reset Interrupt Control Register, offset: 0x410 */

    __IO uint32 C3_SSRS                       ; /* CPU3 Sticky System Reset Status Register, offset: 0x414 */
#endif /* (MCU_CFG_RGM_C3_SUPPORT == STD_ON) */

#endif /* ( MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON ) */

} RGM_Type;



/** Number of instances of the RGM module. */

#define RGM_INSTANCE_COUNT                       (1u)

/* RGM - Peripheral instance base addresses */

/** Peripheral RGM base address */

#define RGM_BASE                                 (0x40046000u)

/** Peripheral RGM base pointer */

#define RGM                                      ((RGM_Type *)RGM_BASE)

/** Array initializer of RGM peripheral base addresses */

#define RGM_BASE_ADDRS                           {RGM_BASE}

/** Array initializer of RGM peripheral base pointers */

#define RGM_BASE_PTRS                            {RGM}


/* ----------------------------------------------------------------------------

   -- RGM Register Masks

   ---------------------------------------------------------------------------- */
/*!

 * @addtogroup RGM_Register_Masks RGM Register Masks

 * @{

 */

/* SRS Bit Fields */

#define RGM_SRS_SYSRST_TOUT_MASK       0x80000000u

#define RGM_SRS_SYSRST_TOUT_SHIFT      31u

#define RGM_SRS_SYSRST_TOUT_WIDTH      1u

#define RGM_SRS_SYSRST_TOUT(x)         (((uint32)(((uint32)(x))<<RGM_SRS_SYSRST_TOUT_SHIFT))&RGM_SRS_SYSRST_TOUT_MASK)

#define RGM_SRS_PINRST_TOUT_MASK       0x40000000u

#define RGM_SRS_PINRST_TOUT_SHIFT      30u

#define RGM_SRS_PINRST_TOUT_WIDTH      1u

#define RGM_SRS_PINRST_TOUT(x)         (((uint32)(((uint32)(x))<<RGM_SRS_PINRST_TOUT_SHIFT))&RGM_SRS_PINRST_TOUT_MASK)

#define RGM_SRS_FSM_ERR_MASK           0x20000000u

#define RGM_SRS_FSM_ERR_SHIFT          29u

#define RGM_SRS_FSM_ERR_WIDTH          1u

#define RGM_SRS_FSM_ERR(x)             (((uint32)(((uint32)(x))<<RGM_SRS_FSM_ERR_SHIFT))&RGM_SRS_FSM_ERR_MASK)

#define RGM_SRS_LBIST_MASK             0x8000u

#define RGM_SRS_LBIST_SHIFT            15u

#define RGM_SRS_LBIST_WIDTH            1u

#define RGM_SRS_LBIST(x)               (((uint32)(((uint32)(x))<<RGM_SRS_LBIST_SHIFT))&RGM_SRS_LBIST_MASK)

#define RGM_SRS_CMU_MASK               0x4000u

#define RGM_SRS_CMU_SHIFT              14u

#define RGM_SRS_CMU_WIDTH              1u

#define RGM_SRS_CMU(x)                 (((uint32)(((uint32)(x))<<RGM_SRS_CMU_SHIFT))&RGM_SRS_CMU_MASK)

#define RGM_SRS_SACKERR_MASK           0x2000u

#define RGM_SRS_SACKERR_SHIFT          13u

#define RGM_SRS_SACKERR_WIDTH          1u

#define RGM_SRS_SACKERR(x)             (((uint32)(((uint32)(x))<<RGM_SRS_SACKERR_SHIFT))&RGM_SRS_SACKERR_MASK)

#define RGM_SRS_WDOG1_MASK             0x1000u

#define RGM_SRS_WDOG1_SHIFT            12u

#define RGM_SRS_WDOG1_WIDTH            1u

#define RGM_SRS_WDOG1(x)               (((uint32)(((uint32)(x))<<RGM_SRS_WDOG1_SHIFT))&RGM_SRS_WDOG1_MASK)

#define RGM_SRS_SYSAP_MASK             0x800u

#define RGM_SRS_SYSAP_SHIFT            11u

#define RGM_SRS_SYSAP_WIDTH            1u

#define RGM_SRS_SYSAP(x)               (((uint32)(((uint32)(x))<<RGM_SRS_SYSAP_SHIFT))&RGM_SRS_SYSAP_MASK)

#define RGM_SRS_JTAG_MASK              0x100u

#define RGM_SRS_JTAG_SHIFT             8u

#define RGM_SRS_JTAG_WIDTH             1u

#define RGM_SRS_JTAG(x)                (((uint32)(((uint32)(x))<<RGM_SRS_JTAG_SHIFT))&RGM_SRS_JTAG_MASK)

#define RGM_SRS_POR_MASK               0x80u

#define RGM_SRS_POR_SHIFT              7u

#define RGM_SRS_POR_WIDTH              1u

#define RGM_SRS_POR(x)                 (((uint32)(((uint32)(x))<<RGM_SRS_POR_SHIFT))&RGM_SRS_POR_MASK)

#define RGM_SRS_PIN_MASK               0x40u

#define RGM_SRS_PIN_SHIFT              6u

#define RGM_SRS_PIN_WIDTH              1u

#define RGM_SRS_PIN(x)                 (((uint32)(((uint32)(x))<<RGM_SRS_PIN_SHIFT))&RGM_SRS_PIN_MASK)

#define RGM_SRS_HSM_WDOG_MASK          0x20u

#define RGM_SRS_HSM_WDOG_SHIFT         5u

#define RGM_SRS_HSM_WDOG_WIDTH         1u

#define RGM_SRS_HSM_WDOG(x)            (((uint32)(((uint32)(x))<<RGM_SRS_HSM_WDOG_SHIFT))&RGM_SRS_HSM_WDOG_MASK)

#define RGM_SRS_FCSMU_MASK             0x10u

#define RGM_SRS_FCSMU_SHIFT            4u

#define RGM_SRS_FCSMU_WIDTH            1u

#define RGM_SRS_FCSMU(x)               (((uint32)(((uint32)(x))<<RGM_SRS_FCSMU_SHIFT))&RGM_SRS_FCSMU_MASK)

#define RGM_SRS_CLKERR0_MASK           0x8u

#define RGM_SRS_CLKERR0_SHIFT          3u

#define RGM_SRS_CLKERR0_WIDTH          1u

#define RGM_SRS_CLKERR0(x)             (((uint32)(((uint32)(x))<<RGM_SRS_CLKERR0_SHIFT))&RGM_SRS_CLKERR0_MASK)

#define RGM_SRS_CLKERR1_MASK           0x4u

#define RGM_SRS_CLKERR1_SHIFT          2u

#define RGM_SRS_CLKERR1_WIDTH          1u

#define RGM_SRS_CLKERR1(x)             (((uint32)(((uint32)(x))<<RGM_SRS_CLKERR1_SHIFT))&RGM_SRS_CLKERR1_MASK)

#define RGM_SRS_LVD_MASK               0x2u

#define RGM_SRS_LVD_SHIFT              1u

#define RGM_SRS_LVD_WIDTH              1u

#define RGM_SRS_LVD(x)                 (((uint32)(((uint32)(x))<<RGM_SRS_LVD_SHIFT))&RGM_SRS_LVD_MASK)

#define RGM_SRS_WAKEUP_MASK            0x1u

#define RGM_SRS_WAKEUP_SHIFT           0u

#define RGM_SRS_WAKEUP_WIDTH           1u

#define RGM_SRS_WAKEUP(x)              (((uint32)(((uint32)(x))<<RGM_SRS_WAKEUP_SHIFT))&RGM_SRS_WAKEUP_MASK)

/* SRS Reg Mask */
#define RGM_SRS_MASK                   0xE000E9FFu

/* RSTFLT Bit Fields */
#define RGM_RSTFLT_RSTFLT_BUSW_MASK    0x1F00u

#define RGM_RSTFLT_RSTFLT_BUSW_SHIFT   8u

#define RGM_RSTFLT_RSTFLT_BUSW_WIDTH   5u

#define RGM_RSTFLT_RSTFLT_BUSW(x)      (((uint32)(((uint32)(x))<<RGM_RSTFLT_RSTFLT_BUSW_SHIFT))&RGM_RSTFLT_RSTFLT_BUSW_MASK)

#define RGM_RSTFLT_RSTFLT_AON_LP_MASK  0x4u

#define RGM_RSTFLT_RSTFLT_AON_LP_SHIFT 2u

#define RGM_RSTFLT_RSTFLT_AON_LP_WIDTH 1u

#define RGM_RSTFLT_RSTFLT_AON_LP(x)    (((uint32)(((uint32)(x))<<RGM_RSTFLT_RSTFLT_AON_LP_SHIFT))&RGM_RSTFLT_RSTFLT_AON_LP_MASK)

#define RGM_RSTFLT_RSTFLT_AON_MASK     0x2u

#define RGM_RSTFLT_RSTFLT_AON_SHIFT    1u

#define RGM_RSTFLT_RSTFLT_AON_WIDTH    1u

#define RGM_RSTFLT_RSTFLT_AON(x)       (((uint32)(((uint32)(x))<<RGM_RSTFLT_RSTFLT_AON_SHIFT))&RGM_RSTFLT_RSTFLT_AON_MASK)

#define RGM_RSTFLT_RSTFLT_BUS_MASK     0x1u

#define RGM_RSTFLT_RSTFLT_BUS_SHIFT    0u

#define RGM_RSTFLT_RSTFLT_BUS_WIDTH    1u

#define RGM_RSTFLT_RSTFLT_BUS(x)       (((uint32)(((uint32)(x))<<RGM_RSTFLT_RSTFLT_BUS_SHIFT))&RGM_RSTFLT_RSTFLT_BUS_MASK)

/* RSTFLT Reg Mask */
#define RGM_RSTFLT_MASK                0x00001F07u

/* SRIE Bit Fields */
#define RGM_SRIE_CMU_RIE_MASK          0x4000u

#define RGM_SRIE_CMU_RIE_SHIFT         14u

#define RGM_SRIE_CMU_RIE_WIDTH         1u

#define RGM_SRIE_CMU_RIE(x)            (((uint32)(((uint32)(x))<<RGM_SRIE_CMU_RIE_SHIFT))&RGM_SRIE_CMU_RIE_MASK)

#define RGM_SRIE_SACKERR_RIE_MASK      0x2000u

#define RGM_SRIE_SACKERR_RIE_SHIFT     13u

#define RGM_SRIE_SACKERR_RIE_WIDTH     1u

#define RGM_SRIE_SACKERR_RIE(x)        (((uint32)(((uint32)(x))<<RGM_SRIE_SACKERR_RIE_SHIFT))&RGM_SRIE_SACKERR_RIE_MASK)

#define RGM_SRIE_INTM_TOUT_RIE_MASK    0x1000u

#define RGM_SRIE_INTM_TOUT_RIE_SHIFT   12u

#define RGM_SRIE_INTM_TOUT_RIE_WIDTH   1u

#define RGM_SRIE_INTM_TOUT_RIE(x)      (((uint32)(((uint32)(x))<<RGM_SRIE_INTM_TOUT_RIE_SHIFT))&RGM_SRIE_INTM_TOUT_RIE_MASK)

#define RGM_SRIE_SYSAP_RIE_MASK        0x800u

#define RGM_SRIE_SYSAP_RIE_SHIFT       11u

#define RGM_SRIE_SYSAP_RIE_WIDTH       1u

#define RGM_SRIE_SYSAP_RIE(x)          (((uint32)(((uint32)(x))<<RGM_SRIE_SYSAP_RIE_SHIFT))&RGM_SRIE_SYSAP_RIE_MASK)

#define RGM_SRIE_SW_RIE_MASK           0x400u

#define RGM_SRIE_SW_RIE_SHIFT          10u

#define RGM_SRIE_SW_RIE_WIDTH          1u

#define RGM_SRIE_SW_RIE(x)             (((uint32)(((uint32)(x))<<RGM_SRIE_SW_RIE_SHIFT))&RGM_SRIE_SW_RIE_MASK)

#define RGM_SRIE_CPULOC_RIE_MASK       0x200u

#define RGM_SRIE_CPULOC_RIE_SHIFT      9u

#define RGM_SRIE_CPULOC_RIE_WIDTH      1u

#define RGM_SRIE_CPULOC_RIE(x)         (((uint32)(((uint32)(x))<<RGM_SRIE_CPULOC_RIE_SHIFT))&RGM_SRIE_CPULOC_RIE_MASK)

#define RGM_SRIE_JTAG_RIE_MASK         0x100u

#define RGM_SRIE_JTAG_RIE_SHIFT        8u

#define RGM_SRIE_JTAG_RIE_WIDTH        1u

#define RGM_SRIE_JTAG_RIE(x)           (((uint32)(((uint32)(x))<<RGM_SRIE_JTAG_RIE_SHIFT))&RGM_SRIE_JTAG_RIE_MASK)

#define RGM_SRIE_GLOBAL_RIE_MASK       0x80u

#define RGM_SRIE_GLOBAL_RIE_SHIFT      7u

#define RGM_SRIE_GLOBAL_RIE_WIDTH      1u

#define RGM_SRIE_GLOBAL_RIE(x)         (((uint32)(((uint32)(x))<<RGM_SRIE_GLOBAL_RIE_SHIFT))&RGM_SRIE_GLOBAL_RIE_MASK)

#define RGM_SRIE_PIN_RIE_MASK          0x40u

#define RGM_SRIE_PIN_RIE_SHIFT         6u

#define RGM_SRIE_PIN_RIE_WIDTH         1u

#define RGM_SRIE_PIN_RIE(x)            (((uint32)(((uint32)(x))<<RGM_SRIE_PIN_RIE_SHIFT))&RGM_SRIE_PIN_RIE_MASK)

#define RGM_SRIE_WDG_RIE_MASK          0x20u

#define RGM_SRIE_WDG_RIE_SHIFT         5u

#define RGM_SRIE_WDG_RIE_WIDTH         1u

#define RGM_SRIE_WDG_RIE(x)            (((uint32)(((uint32)(x))<<RGM_SRIE_WDG_RIE_SHIFT))&RGM_SRIE_WDG_RIE_MASK)

#define RGM_SRIE_FCSMU_RIE_MASK        0x10u

#define RGM_SRIE_FCSMU_RIE_SHIFT       4u

#define RGM_SRIE_FCSMU_RIE_WIDTH       1u

#define RGM_SRIE_FCSMU_RIE(x)          (((uint32)(((uint32)(x))<<RGM_SRIE_FCSMU_RIE_SHIFT))&RGM_SRIE_FCSMU_RIE_MASK)

#define RGM_SRIE_CLKERR0_RIE_MASK      0x8u

#define RGM_SRIE_CLKERR0_RIE_SHIFT     3u

#define RGM_SRIE_CLKERR0_RIE_WIDTH     1u

#define RGM_SRIE_CLKERR0_RIE(x)        (((uint32)(((uint32)(x))<<RGM_SRIE_CLKERR0_RIE_SHIFT))&RGM_SRIE_CLKERR0_RIE_MASK)

#define RGM_SRIE_DELAY_MASK            0x3u

#define RGM_SRIE_DELAY_SHIFT           0u

#define RGM_SRIE_DELAY_WIDTH           2u

#define RGM_SRIE_DELAY(x)              (((uint32)(((uint32)(x))<<RGM_SRIE_DELAY_SHIFT))&RGM_SRIE_DELAY_MASK)

/* SRIE Reg Mask */
#define RGM_SRIE_MASK                  0x00007FFBu

/* Cx_CFG Bit Fields */
#define RGM_Cx_CFG_WPB_LOCK_MASK       0x80000000u

#define RGM_Cx_CFG_WPB_LOCK_SHIFT      31u

#define RGM_Cx_CFG_WPB_LOCK_WIDTH      1u

#define RGM_Cx_CFG_WPB_LOCK(x)         (((uint32)(((uint32)(x))<<RGM_Cx_CFG_WPB_LOCK_SHIFT))&RGM_Cx_CFG_WPB_LOCK_MASK)

#define RGM_Cx_CFG_WPB_MASK            0x70000000u

#define RGM_Cx_CFG_WPB_SHIFT           28u

#define RGM_Cx_CFG_WPB_WIDTH           3u

#define RGM_Cx_CFG_WPB(x)              (((uint32)(((uint32)(x))<<RGM_Cx_CFG_WPB_SHIFT))&RGM_Cx_CFG_WPB_MASK)

#define RGM_Cx_CFG_Cx_SWRST_EN_MASK    0x100000u

#define RGM_Cx_CFG_Cx_SWRST_EN_SHIFT   20u

#define RGM_Cx_CFG_Cx_SWRST_EN_WIDTH   1u

#define RGM_Cx_CFG_Cx_SWRST_EN(x)      (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_SWRST_EN_SHIFT))&RGM_Cx_CFG_Cx_SWRST_EN_MASK)

#define RGM_Cx_CFG_Cx_INTM_EN_MASK     0x80000u

#define RGM_Cx_CFG_Cx_INTM_EN_SHIFT    19u

#define RGM_Cx_CFG_Cx_INTM_EN_WIDTH    1u

#define RGM_Cx_CFG_Cx_INTM_EN(x)       (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_INTM_EN_SHIFT))&RGM_Cx_CFG_Cx_INTM_EN_MASK)

#define RGM_Cx_CFG_Cx_WDOG_EN_MASK     0x40000u

#define RGM_Cx_CFG_Cx_WDOG_EN_SHIFT    18u

#define RGM_Cx_CFG_Cx_WDOG_EN_WIDTH    1u

#define RGM_Cx_CFG_Cx_WDOG_EN(x)       (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_WDOG_EN_SHIFT))&RGM_Cx_CFG_Cx_WDOG_EN_MASK)

#define RGM_Cx_CFG_Cx_SYSRST_EN_MASK   0x20000u

#define RGM_Cx_CFG_Cx_SYSRST_EN_SHIFT  17u

#define RGM_Cx_CFG_Cx_SYSRST_EN_WIDTH  1u

#define RGM_Cx_CFG_Cx_SYSRST_EN(x)     (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_SYSRST_EN_SHIFT))&RGM_Cx_CFG_Cx_SYSRST_EN_MASK)

#define RGM_Cx_CFG_Cx_LOCKUP_EN_MASK   0x10000u

#define RGM_Cx_CFG_Cx_LOCKUP_EN_SHIFT  16u

#define RGM_Cx_CFG_Cx_LOCKUP_EN_WIDTH  1u

#define RGM_Cx_CFG_Cx_LOCKUP_EN(x)     (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_LOCKUP_EN_SHIFT))&RGM_Cx_CFG_Cx_LOCKUP_EN_MASK)

#define RGM_Cx_CFG_Cx_SWRST_IE_MASK    0x10u

#define RGM_Cx_CFG_Cx_SWRST_IE_SHIFT   4u

#define RGM_Cx_CFG_Cx_SWRST_IE_WIDTH   1u

#define RGM_Cx_CFG_Cx_SWRST_IE(x)      (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_SWRST_IE_SHIFT))&RGM_Cx_CFG_Cx_SWRST_IE_MASK)

#define RGM_Cx_CFG_Cx_INTM_IE_MASK     0x8u

#define RGM_Cx_CFG_Cx_INTM_IE_SHIFT    3u

#define RGM_Cx_CFG_Cx_INTM_IE_WIDTH    1u

#define RGM_Cx_CFG_Cx_INTM_IE(x)       (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_INTM_IE_SHIFT))&RGM_Cx_CFG_Cx_INTM_IE_MASK)

#define RGM_Cx_CFG_Cx_WDOG_IE_MASK     0x4u

#define RGM_Cx_CFG_Cx_WDOG_IE_SHIFT    2u

#define RGM_Cx_CFG_Cx_WDOG_IE_WIDTH    1u

#define RGM_Cx_CFG_Cx_WDOG_IE(x)       (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_WDOG_IE_SHIFT))&RGM_Cx_CFG_Cx_WDOG_IE_MASK)

#define RGM_Cx_CFG_Cx_SYSRST_IE_MASK   0x2u

#define RGM_Cx_CFG_Cx_SYSRST_IE_SHIFT  1u

#define RGM_Cx_CFG_Cx_SYSRST_IE_WIDTH  1u

#define RGM_Cx_CFG_Cx_SYSRST_IE(x)     (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_SYSRST_IE_SHIFT))&RGM_Cx_CFG_Cx_SYSRST_IE_MASK)

#define RGM_Cx_CFG_Cx_LOCKUP_IE_MASK   0x1u

#define RGM_Cx_CFG_Cx_LOCKUP_IE_SHIFT  0u

#define RGM_Cx_CFG_Cx_LOCKUP_IE_WIDTH  1u

#define RGM_Cx_CFG_Cx_LOCKUP_IE(x)     (((uint32)(((uint32)(x))<<RGM_Cx_CFG_Cx_LOCKUP_IE_SHIFT))&RGM_Cx_CFG_Cx_LOCKUP_IE_MASK)

#define RGM_Cx_CFG_TRIGGER_SYS_EN_MASK  0x1F0000u

/* Cx_CFG Reg Mask */
#define RGM_Cx_CFG_MASK                0xF01F001Fu

/* Cx_RST Bit Fields */
#define RGM_Cx_RST_Cx_OUT_OF_RST_MASK  0x2u

#define RGM_Cx_RST_Cx_OUT_OF_RST_SHIFT 1u

#define RGM_Cx_RST_Cx_OUT_OF_RST_WIDTH 1u

#define RGM_Cx_RST_Cx_OUT_OF_RST(x)    (((uint32)(((uint32)(x))<<RGM_Cx_RST_Cx_OUT_OF_RST_SHIFT))&RGM_Cx_RST_Cx_OUT_OF_RST_MASK)

#define RGM_Cx_RST_Cx_SWRST_MASK       0x1u

#define RGM_Cx_RST_Cx_SWRST_SHIFT      0u

#define RGM_Cx_RST_Cx_SWRST_WIDTH      1u

#define RGM_Cx_RST_Cx_SWRST(x)         (((uint32)(((uint32)(x))<<RGM_Cx_RST_Cx_SWRST_SHIFT))&RGM_Cx_RST_Cx_SWRST_MASK)

/* Cx_RST Reg Mask */
#define RGM_Cx_RST_MASK                0x00000003u


/* Cx_SRS Bit Fields */
#define RGM_Cx_SRS_Cx_SWRST_MASK       0x100000u

#define RGM_Cx_SRS_Cx_SWRST_SHIFT      20u

#define RGM_Cx_SRS_Cx_SWRST_WIDTH      1u

#define RGM_Cx_SRS_Cx_SWRST(x)         (((uint32)(((uint32)(x))<<RGM_Cx_SRS_Cx_SWRST_SHIFT))&RGM_Cx_SRS_Cx_SWRST_MASK)

#define RGM_Cx_SRS_Cx_INTM_MASK        0x80000u

#define RGM_Cx_SRS_Cx_INTM_SHIFT       19u

#define RGM_Cx_SRS_Cx_INTM_WIDTH       1u

#define RGM_Cx_SRS_Cx_INTM(x)          (((uint32)(((uint32)(x))<<RGM_Cx_SRS_Cx_INTM_SHIFT))&RGM_Cx_SRS_Cx_INTM_MASK)

#define RGM_Cx_SRS_Cx_WDOG_MASK        0x40000u

#define RGM_Cx_SRS_Cx_WDOG_SHIFT       18u

#define RGM_Cx_SRS_Cx_WDOG_WIDTH       1u

#define RGM_Cx_SRS_Cx_WDOG(x)          (((uint32)(((uint32)(x))<<RGM_Cx_SRS_Cx_WDOG_SHIFT))&RGM_Cx_SRS_Cx_WDOG_MASK)

#define RGM_Cx_SRS_Cx_SYSRST_MASK      0x20000u

#define RGM_Cx_SRS_Cx_SYSRST_SHIFT     17u

#define RGM_Cx_SRS_Cx_SYSRST_WIDTH     1u

#define RGM_Cx_SRS_Cx_SYSRST(x)        (((uint32)(((uint32)(x))<<RGM_Cx_SRS_Cx_SYSRST_SHIFT))&RGM_Cx_SRS_Cx_SYSRST_MASK)

#define RGM_Cx_SRS_Cx_LOCKUP_MASK      0x10000u

#define RGM_Cx_SRS_Cx_LOCKUP_SHIFT     16u

#define RGM_Cx_SRS_Cx_LOCKUP_WIDTH     1u

#define RGM_Cx_SRS_Cx_LOCKUP(x)        (((uint32)(((uint32)(x))<<RGM_Cx_SRS_Cx_LOCKUP_SHIFT))&RGM_Cx_SRS_Cx_LOCKUP_MASK)

#define RGM_Cx_SRS_Cx_SRS_MASK         0xFFFFu

#define RGM_Cx_SRS_Cx_SRS_SHIFT        0u

#define RGM_Cx_SRS_Cx_SRS_WIDTH        16u

#define RGM_Cx_SRS_Cx_SRS(x)           (((uint32)(((uint32)(x))<<RGM_Cx_SRS_Cx_SRS_SHIFT))&RGM_Cx_SRS_Cx_SRS_MASK)

/* Cx_SRS Reg Mask */
#define RGM_Cx_SRS_MASK                0x001FFFFFu

/* C1_RLS Bit Fields */
#define RGM_C1_RLS_C1_RELEASE_MASK     0x1u

#define RGM_C1_RLS_C1_RELEASE_SHIFT    0u

#define RGM_C1_RLS_C1_RELEASE_WIDTH    1u

#define RGM_C1_RLS_C1_RELEASE(x)       (((uint32)(((uint32)(x))<<RGM_C1_RLS_C1_RELEASE_SHIFT))&RGM_C1_RLS_C1_RELEASE_MASK)

/* C1_RLS Reg Mask */
#define RGM_C1_RLS_MASK                0x00000001u

/* C2_RLS Bit Fields */
#define RGM_C2_RLS_C2_RELEASE_MASK     0x1u

#define RGM_C2_RLS_C2_RELEASE_SHIFT    0u

#define RGM_C2_RLS_C2_RELEASE_WIDTH    1u

#define RGM_C2_RLS_C2_RELEASE(x)       (((uint32)(((uint32)(x))<<RGM_C2_RLS_C2_RELEASE_SHIFT))&RGM_C2_RLS_C2_RELEASE_MASK)

/* C2_RLS Reg Mask */
#define RGM_C2_RLS_MASK                0x00000001u

/* C3_RLS Bit Fields */
#define RGM_C3_RLS_C3_RELEASE_MASK     0x1u

#define RGM_C3_RLS_C3_RELEASE_SHIFT    0u

#define RGM_C3_RLS_C3_RELEASE_WIDTH    1u

#define RGM_C3_RLS_C3_RELEASE(x)       (((uint32)(((uint32)(x))<<RGM_C3_RLS_C3_RELEASE_SHIFT))&RGM_C3_RLS_C3_RELEASE_MASK)

/* C3_RLS Reg Mask */
#define RGM_C3_RLS_MASK                0x00000001u


/*!

 * @}

 */ /* end of group RGM_Peripheral_Access_Layer */



#ifdef __cplusplus
}
#endif
/** @}*/

#endif
