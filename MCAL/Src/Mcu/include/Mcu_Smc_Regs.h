/**
*   @file    Mcu_smc_regs.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Smc module register and macro definitions.
*   @details Smc module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
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
#ifndef MCU_SMC_REGS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_SMC_REGS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcu_CfgPlatformDef.h"

/* ----------------------------------------------------------------------------

   -- SMC Peripheral Access Layer

   ---------------------------------------------------------------------------- */



/*!

 * @addtogroup SMC_Peripheral_Access_Layer SMC Peripheral Access Layer

 * @{

 */



/** SMC - Size of Registers Arrays */



/** SMC - Register Layout Typedef */



typedef struct {

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)

    uint8  RESERVED_0[8];

   __IO  uint32 PMPROT                        ;/* PMPROT, offset: 0x8 */

   __IO uint32 PMCTRL                         ; /* PMCTRL, offset: 0xc */

   __IO uint32 STANDBY_CFG                    ; /* STANDBY_CFG, offset: 0x10 */

      uint8  RESERVED_1[4];

   __IO uint32 WAKEUP                         ; /* WAKEUP, offset: 0x18 */

   __IO uint32 IOLOCK                         ; /* IOLOCK, offset: 0x1c */

   __IO uint32 RAMRET                         ; /* RAMRETEN, offset: 0x20 */

   __IO uint32 PGCTRL                         ; /* PGCTRL, offset: 0x24 */

      uint8  RESERVED_2[40];

   __IO uint32 AONCLKSEL                      ; /* AONCLKSEL, offset: 0x50 */

   __IO uint32 PCU_CTRL                       ; /* PCU_CTRL, offset: 0x54 */

   __IO uint32 ISO_CTRL                       ; /* ISO_CTRL, offset: 0x58 */

   __IO uint32 CGM_WAKEUP                     ; /* CGM_WAKEUP, offset: 0x5c */

   __IO uint32 CCM_LPCTRL                     ; /* CCM_LPCTRL, offset: 0x60 */

   __IO uint32 DFTDEBUG                       ; /* DFTDEBUG, offset: 0x64 */

   __IO uint32 SW_BANK0                       ; /* SW_BANK0, offset: 0x68 */

   __IO uint32 SW_BANK1                       ; /* SW_BANK1, offset: 0x6c */

   __IO uint32 ADC1_CFG0                      ; /* ADC1_CFG0, offset: 0x70 */

   __IO uint32 ADC1_CFG1                      ; /* ADC1_CFG1, offset: 0x74 */

   __I uint32 ADC1_RES                        ; /* ADC1_RES, offset: 0x78 */

   __IO uint32 ADC2_CFG0                      ; /* ADC1_CFG0, offset: 0x7C */

   __IO uint32 ADC2_CFG1                      ; /* ADC1_CFG1, offset: 0x80 */

   __I uint32 ADC2_RES                        ; /* ADC1_RES, offset: 0x84 */

   __IO uint32 CLKOUT_CTRL                    ; /* CLKOUT_CTRL, offset: 0x88 */

   /* Some other registers are not used */
#else
    uint8  RESERVED_0[12];

    __IO uint32 PMCTRL                        ; /* PMCTRL, offset: 0xc */

    __IO uint32 STANDBY_CFG                   ; /* STANDBY_CFG, offset: 0x10 */
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */

} SMC_Type;



/** Number of instances of the SMC module. */

#define SMC_INSTANCE_COUNT                       (1u)



/* SMC - Peripheral instance base addresses */

/** Peripheral SMC base address */

#define SMC_BASE                                 (0x40045000u)

/** Peripheral SMC base pointer */

#define SMC                                      ((SMC_Type *)SMC_BASE)



/** Array initializer of SMC peripheral base pointers */

#define SMC_BASE_PTRS                            {SMC}

/* ----------------------------------------------------------------------------

   -- SMC Register Masks

   ---------------------------------------------------------------------------- */



/*!

 * @addtogroup SMC_Register_Masks SMC Register Masks

 * @{

 */



/* PMCTRL Bit Fields */

#define SMC_PMCTRL_STOP_MODE_MASK      0x7u


/* STANDBY_CFG Bit Fields */

#define SMC_STANDBY_CFG_OPTION_MASK    0x3u



/* CLKOUT_CTRL Bit Fields */

#define SMC_CLKOUT_CTRL_CLKOUT_EN_MASK 0x80000000u

#define SMC_CLKOUT_CTRL_CLKOUT_EN_SHIFT 31u

#define SMC_CLKOUT_CTRL_CLKOUT_EN_WIDTH 1u

#define SMC_CLKOUT_CTRL_CLKOUT_EN(x)  (((uint32)(((uint32)(x))<<SMC_CLKOUT_CTRL_CLKOUT_EN_SHIFT))&SMC_CLKOUT_CTRL_CLKOUT_EN_MASK)

#define SMC_CLKOUT_CTRL_CLKOUT_DIV_MASK 0x70000000u

#define SMC_CLKOUT_CTRL_CLKOUT_DIV_SHIFT 28u

#define SMC_CLKOUT_CTRL_CLKOUT_DIV_WIDTH 3u

#define SMC_CLKOUT_CTRL_CLKOUT_DIV(x) (((uint32)(((uint32)(x))<<SMC_CLKOUT_CTRL_CLKOUT_DIV_SHIFT))&SMC_CLKOUT_CTRL_CLKOUT_DIV_MASK)

#define SMC_CLKOUT_CTRL_CLKOUT_SEL_MASK 0xF000000u

#define SMC_CLKOUT_CTRL_CLKOUT_SEL_SHIFT 24u

#define SMC_CLKOUT_CTRL_CLKOUT_SEL_WIDTH 4u

#define SMC_CLKOUT_CTRL_CLKOUT_SEL(x) (((uint32)(((uint32)(x))<<SMC_CLKOUT_CTRL_CLKOUT_SEL_SHIFT))&SMC_CLKOUT_CTRL_CLKOUT_SEL_MASK)

#define SMC_CLKOUT_CTRL_LOCK_MASK     0x1u

#define SMC_CLKOUT_CTRL_LOCK_SHIFT    0u

#define SMC_CLKOUT_CTRL_LOCK_WIDTH    1u

#define SMC_CLKOUT_CTRL_LOCK(x)       (((uint32)(((uint32)(x))<<SMC_CLKOUT_CTRL_LOCK_SHIFT))&SMC_CLKOUT_CTRL_LOCK_MASK)

/* CLKOUT_CTRL Reg Mask */

#define SMC_CLKOUT_CTRL_MASK          0xFF000001u


/* AONCLKSEL Bit Fields */

#define SMC_AONCLKSEL_AON32KCLKSEL_MASK 0xC000u

#define SMC_AONCLKSEL_AON32KCLKSEL_SHIFT 14u

#define SMC_AONCLKSEL_AON32KCLKSEL_WIDTH 2u

#define SMC_AONCLKSEL_AON32KCLKSEL(x)  (((uint32)(((uint32)(x))<<SMC_AONCLKSEL_AON32KCLKSEL_SHIFT))&SMC_AONCLKSEL_AON32KCLKSEL_MASK)

#define SMC_AONCLKSEL_RTCCLKSEL_MASK   0x3000u

#define SMC_AONCLKSEL_RTCCLKSEL_SHIFT  12u

#define SMC_AONCLKSEL_RTCCLKSEL_WIDTH  2u

#define SMC_AONCLKSEL_RTCCLKSEL(x)     (((uint32)(((uint32)(x))<<SMC_AONCLKSEL_RTCCLKSEL_SHIFT))&SMC_AONCLKSEL_RTCCLKSEL_MASK)

#define SMC_AONCLKSEL_AONCLKSEL_MASK   0xC00u

#define SMC_AONCLKSEL_AONCLKSEL_SHIFT  10u

#define SMC_AONCLKSEL_AONCLKSEL_WIDTH  2u

#define SMC_AONCLKSEL_AONCLKSEL(x)     (((uint32)(((uint32)(x))<<SMC_AONCLKSEL_AONCLKSEL_SHIFT))&SMC_AONCLKSEL_AONCLKSEL_MASK)

#define SMC_AONCLKSEL_SIRCDIV32KEN_MASK 0x200u

#define SMC_AONCLKSEL_SIRCDIV32KEN_SHIFT 9u

#define SMC_AONCLKSEL_SIRCDIV32KEN_WIDTH 1u

#define SMC_AONCLKSEL_SIRCDIV32KEN(x)  (((uint32)(((uint32)(x))<<SMC_AONCLKSEL_SIRCDIV32KEN_SHIFT))&SMC_AONCLKSEL_SIRCDIV32KEN_MASK)

#define SMC_AONCLKSEL_AON1KCLKEN_MASK  0x100u

#define SMC_AONCLKSEL_AON1KCLKEN_SHIFT 8u

#define SMC_AONCLKSEL_AON1KCLKEN_WIDTH 1u

#define SMC_AONCLKSEL_AON1KCLKEN(x)    (((uint32)(((uint32)(x))<<SMC_AONCLKSEL_AON1KCLKEN_SHIFT))&SMC_AONCLKSEL_AON1KCLKEN_MASK)

#define SMC_AONCLKSEL_LOCK_MASK        0x1u

#define SMC_AONCLKSEL_LOCK_SHIFT       0u

#define SMC_AONCLKSEL_LOCK_WIDTH       1u

#define SMC_AONCLKSEL_LOCK(x)          (((uint32)(((uint32)(x))<<SMC_AONCLKSEL_LOCK_SHIFT))&SMC_AONCLKSEL_LOCK_MASK)

/* AONCLKSEL Reg Mask */

#define SMC_AONCLKSEL_MASK             0x0000FF01u

/* WAKEUP Bit Fields */

#define SMC_WAKEUP_LP_WAKEUP_CFG0_MASK 0xF0000000u

#define SMC_WAKEUP_LP_WAKEUP_CFG0_SHIFT 28u

#define SMC_WAKEUP_LP_WAKEUP_CFG0_WIDTH 4u

#define SMC_WAKEUP_LP_WAKEUP_CFG0(x) (((uint32)(((uint32)(x))<<SMC_WAKEUP_LP_WAKEUP_CFG0_SHIFT))&SMC_WAKEUP_LP_WAKEUP_CFG0_MASK)

#define SMC_WAKEUP_LP0_POL_MASK    0x80u

#define SMC_WAKEUP_LP0_POL_SHIFT   7u

#define SMC_WAKEUP_LP0_POL_WIDTH   1u

#define SMC_WAKEUP_LP0_POL(x)      (((uint32)(((uint32)(x))<<SMC_WAKEUP_LP0_POL_SHIFT))&SMC_WAKEUP_LP0_POL_MASK)

/* WAKEUP Reg Mask */

#define SMC_WAKEUP_MASK            0xFFFFF0F8u

/* PGCTRL Bit Fields */

#define SMC_PGCTRL_PG_LOCK_EN_MASK   0x80u

#define SMC_PGCTRL_PG_LOCK_EN_SHIFT  7u

#define SMC_PGCTRL_PG_LOCK_SEL_MASK   0x30u

#define SMC_PGCTRL_PG_LOCK_SEL_SHIFT  4u

#define SMC_PGCTRL_PG_LOCK_SEL(x)     (((uint32)(((uint32)(x))<<SMC_PGCTRL_PG_LOCK_SEL_SHIFT))&SMC_PGCTRL_PG_LOCK_SEL_MASK)

#define SMC_PGCTRL_PG_POL_MASK   0x2u

#define SMC_PGCTRL_PG_POL_SHIFT  1u

#define SMC_PGCTRL_PG_POL(x)     (((uint32)(((uint32)(x))<<SMC_PGCTRL_PG_POL_SHIFT))&SMC_PGCTRL_PG_POL_MASK)

#define SMC_PGCTRL_PG_EN_MASK    0x1u

#define SMC_PGCTRL_PG_EN_SHIFT   0u

/* PGCTRL Reg Mask */

#define SMC_PGCTRL_MASK            0xB3u

/* IOLOCK Bit Fields */

#define SMC_IOLOCK_CTRL0_MASK   0x80u

#define SMC_IOLOCK_CTRL0_SHIFT  7u

#define SMC_IOLOCK_CTRL1_MASK   0x40u

#define SMC_IOLOCK_CTRL1_SHIFT  6u

#define SMC_IOLOCK_CTRL2_MASK   0x20u

#define SMC_IOLOCK_CTRL2_SHIFT  5u

#define SMC_IOLOCK_CTRL3_MASK   0x10u

#define SMC_IOLOCK_CTRL3_SHIFT  4u

#define SMC_IOLOCK_CTRL4_MASK   0x8u

#define SMC_IOLOCK_CTRL4_SHIFT  3u

/* IOLOCK Reg Mask */

#define SMC_IOLOCK_MASK            0xF8u

/* PCU_CTRL Bit Fields */
#define SMC_PCU_CTRL_RPM_EXIT_CNT_MASK    0x3FFF0000u

#define SMC_PCU_CTRL_RPM_EXIT_CNT_SHIFT   16u

#define SMC_PCU_CTRL_RPM_EXIT_CNT_WIDTH   14u

#define SMC_PCU_CTRL_RPM_EXIT_CNT(x)      (((uint32)(((uint32)(x))<<SMC_PCU_CTRL_RPM_EXIT_CNT_SHIFT))&SMC_PCU_CTRL_RPM_EXIT_CNT_MASK)

#define SMC_PCU_CTRL_LOCK_MASK            0x1u

#define SMC_PCU_CTRL_LOCK_SHIFT           0u

#define SMC_PCU_CTRL_LOCK_WIDTH           1u

#define SMC_PCU_CTRL_LOCK(x)              (((uint32)(((uint32)(x))<<SMC_PCU_CTRL_LOCK_SHIFT))&SMC_PCU_CTRL_LOCK_MASK)

/* PCU_CTRL Reg Mask */
#define SMC_PCU_CTRL_MASK                 0x3FFF0001u

/* ISO_CTRL Bit Fields */

#define SMC_ISO_CTRL_PAD_ISO_HOLD_MASK   0x80u

#define SMC_ISO_CTRL_PAD_ISO_HOLD_SHIFT  7u

#define SMC_ISO_CTRL_PAD_ISO_HOLD_WIDTH  1u

#define SMC_ISO_CTRL_PAD_ISO_HOLD(x)     (((uint32)(((uint32)(x))<<SMC_ISO_CTRL_PAD_ISO_HOLD_SHIFT))&SMC_ISO_CTRL_PAD_ISO_HOLD_MASK)

#define SMC_ISO_CTRL_PAD_ISO_HOLD_CLR_MASK   0x40u

#define SMC_ISO_CTRL_PAD_ISO_HOLD_CLR_SHIFT  6u

#define SMC_ISO_CTRL_PAD_ISO_HOLD_CLR_WIDTH  1u

#define SMC_ISO_CTRL_PAD_ISO_HOLD_CLR(x) (((uint32)(((uint32)(x))<<SMC_ISO_CTRL_PAD_ISO_HOLD_CLR_SHIFT))&SMC_ISO_CTRL_PAD_ISO_HOLD_CLR_MASK)

/* IOLOCK Reg Mask */

#define SMC_ISO_CTRL_MASK            0xC1u



/*!

 * @}

 */ /* end of group SMC_Register_Masks */



/*!

 * @}

 */ /* end of group SMC_Peripheral_Access_Layer */



#ifdef __cplusplus
}
#endif
/** @}*/

#endif
