/**
*   @file    Mcu_Csc_regs.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Csc module register and macro definitions.
*   @details Csc module registers, and macro definitions used to manipulate the module registers.
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
#ifndef MCU_CSC_REGS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_CSC_REGS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcu_CfgPlatformDef.h"

#if (MCU_CFG_CSC0_INIT_API_SUPPORT == STD_ON)

/*!

 * @addtogroup CSC0_Peripheral_Access_Layer CSC0 Peripheral Access Layer

 * @{

 */
/** CSC0 - Size of Registers Arrays */
/** CSC0 - Register Layout Typedef */
typedef struct {

  __IO uint32 STOP_MODER0                   ; /* STOP Mode Control Register 0, offset: 0x0 */

  __IO uint32 STOP_REQR0                    ; /* STOP Request Register 0, offset: 0x4 */

  __I  uint32 STOP_ACKR0                    ; /* STOP Acknowledge Register 0, offset: 0x8 */

  __IO uint32 STOP_MODER1                   ; /* STOP Mode Control Register 1, offset: 0xC */

  __IO uint32 STOP_REQR1                    ; /* STOP Request Register 1, offset: 0x10 */

  __I  uint32 STOP_ACKR1                    ; /* STOP Acknowledge Register 1, offset: 0x14 */

  __IO uint32 STOP_MODER2                   ; /* STOP Mode Control Register 2, offset: 0x18 */

  __IO uint32 STOP_REQR2                    ; /* STOP Request Register 2, offset: 0x1C */

  __I  uint32 STOP_ACKR2                    ; /* STOP Acknowledge Register 2, offset: 0x20 */

  __IO uint32 CCM0_CFG                      ; /* CCM0 Configure Register, offset: 0x24 */

  __I  uint32 CCM0_STATUS                   ; /* CCM0 Status Register, offset: 0x28 */

  __IO uint32 SCG_MAM_STALL                 ; /* SCG MAM Stall Request Register, offset: 0x2C */

  __IO uint32 CPU0_INT                      ; /* CPU0 Software Interrupt Register, offset: 0x30 */

       uint8  RESERVED_0[12];

  __IO uint32 CLKOUT_CTRL                   ; /* Clkout Control Register, offset: 0x40 */

  __IO uint32 AONCLKSR                      ; /* AON Clock Select Register, offset: 0x44 */

  __IO uint32 PCU_CTRL                      ; /* PCU Control Register, offset: 0x48 */

       uint8  RESERVED_1[4];

  __IO uint32 SMU_CTRL0                     ; /* FCSMU Control Register 0, offset: 0x50 */

  __IO uint32 SMU_CTRL1                     ; /* FCSMU Control Register 1, offset: 0x54 */

#if (MCU_CFG_CSC0_REG_7300_SUPPORT == STD_ON)
  __IO uint32 SMU_CTRL2                     ; /* FCSMU Control Register 2, offset: 0x58 */

  __IO uint32 SMU_CTRL3                     ; /* FCSMU Control Register 3, offset: 0x5C */
#elif (MCU_CFG_CSC0_REG_7240_SUPPORT == STD_ON)
  uint8  RESERVED_2[8];
#else
 /* More platform... */
#endif /*(MCU_CFG_CSC0_REG_7300_SUPPORT == STD_ON)*/
  __IO uint32 SMU_CTRL4                     ; /* FCSMU Control Register 4, offset: 0x60 */

  __IO uint32 CMU_CTRL                      ; /* CMU Control Register, offset: 0x64 */

#if (MCU_CFG_CSC0_REG_7240_SUPPORT == STD_ON)
 __IO uint32 SMU_CTRL5                     ; /* FCSMU Control Register 5, offset: 0x68 */

      uint8  RESERVED_3[4];

  __IO uint32 LP_WAKEUP                     ; /* Low Power Wakeup Register, offset: 0x70 */
#endif /*(MCU_CFG_CSC0_REG_7240_SUPPORT == STD_ON)*/

} CSC0_Type;



/** Number of instances of the CSC0 module. */

#define CSC0_INSTANCE_COUNT                      (1u)



/* CSC0 - Peripheral instance base addresses */

/** Peripheral CSC0 base address */

#define CSC0_BASE                                (0x40079000u)

/** Peripheral CSC0 base pointer */

#define CSC0                                     ((CSC0_Type *)CSC0_BASE)

/** Array initializer of CSC0 peripheral base addresses */

#define CSC0_BASE_ADDRS                          {CSC0_BASE}

/** Array initializer of CSC0 peripheral base pointers */

#define CSC0_BASE_PTRS                           {CSC0}

/* ----------------------------------------------------------------------------

   -- CSC0 Register Masks

   ---------------------------------------------------------------------------- */
/*!

 * @addtogroup CSC0_Register_Masks CSC0 Register Masks

 * @{

 */

/* CPU0_INT Bit Fields */

#define CSC0_CPU0_INT_WPB_LOCK_MASK    0x80000000u

#define CSC0_CPU0_INT_WPB_LOCK_SHIFT   31u

#define CSC0_CPU0_INT_WPB_LOCK_WIDTH   1u

#define CSC0_CPU0_INT_WPB_LOCK(x)      (((uint32)(((uint32)(x))<<CSC0_CPU0_INT_WPB_LOCK_SHIFT))&CSC0_CPU0_INT_WPB_LOCK_MASK)

#define CSC0_CPU0_INT_WPB_MASK         0x70000000u

#define CSC0_CPU0_INT_WPB_SHIFT        28u

#define CSC0_CPU0_INT_WPB_WIDTH        3u

#define CSC0_CPU0_INT_WPB(x)           (((uint32)(((uint32)(x))<<CSC0_CPU0_INT_WPB_SHIFT))&CSC0_CPU0_INT_WPB_MASK)

#define CSC0_CPU0_INT_SW_INT_MASK      0x1u

#define CSC0_CPU0_INT_SW_INT_SHIFT     0u

#define CSC0_CPU0_INT_SW_INT_WIDTH     1u

#define CSC0_CPU0_INT_SW_INT(x)        (((uint32)(((uint32)(x))<<CSC0_CPU0_INT_SW_INT_SHIFT))&CSC0_CPU0_INT_SW_INT_MASK)

/* CPU0_INT Reg Mask */

#define CSC0_CPU0_INT_MASK             0xF0000001u



/* CLKOUT_CTRL Bit Fields */

#define CSC0_CLKOUT_CTRL_CLKOUT_EN_MASK 0x80000000u

#define CSC0_CLKOUT_CTRL_CLKOUT_EN_SHIFT 31u

#define CSC0_CLKOUT_CTRL_CLKOUT_EN_WIDTH 1u

#define CSC0_CLKOUT_CTRL_CLKOUT_EN(x)  (((uint32)(((uint32)(x))<<CSC0_CLKOUT_CTRL_CLKOUT_EN_SHIFT))&CSC0_CLKOUT_CTRL_CLKOUT_EN_MASK)

#define CSC0_CLKOUT_CTRL_CLKOUT_DIV_MASK 0x70000000u

#define CSC0_CLKOUT_CTRL_CLKOUT_DIV_SHIFT 28u

#define CSC0_CLKOUT_CTRL_CLKOUT_DIV_WIDTH 3u

#define CSC0_CLKOUT_CTRL_CLKOUT_DIV(x) (((uint32)(((uint32)(x))<<CSC0_CLKOUT_CTRL_CLKOUT_DIV_SHIFT))&CSC0_CLKOUT_CTRL_CLKOUT_DIV_MASK)

#define CSC0_CLKOUT_CTRL_CLKOUT_SEL_MASK 0xF000000u

#define CSC0_CLKOUT_CTRL_CLKOUT_SEL_SHIFT 24u

#define CSC0_CLKOUT_CTRL_CLKOUT_SEL_WIDTH 4u

#define CSC0_CLKOUT_CTRL_CLKOUT_SEL(x) (((uint32)(((uint32)(x))<<CSC0_CLKOUT_CTRL_CLKOUT_SEL_SHIFT))&CSC0_CLKOUT_CTRL_CLKOUT_SEL_MASK)

#define CSC0_CLKOUT_CTRL_LOCK_MASK     0x1u

#define CSC0_CLKOUT_CTRL_LOCK_SHIFT    0u

#define CSC0_CLKOUT_CTRL_LOCK_WIDTH    1u

#define CSC0_CLKOUT_CTRL_LOCK(x)       (((uint32)(((uint32)(x))<<CSC0_CLKOUT_CTRL_LOCK_SHIFT))&CSC0_CLKOUT_CTRL_LOCK_MASK)

/* CLKOUT_CTRL Reg Mask */

#define CSC0_CLKOUT_CTRL_MASK          0xFF000001u



/* AONCLKSR Bit Fields */

#define CSC0_AONCLKSR_AON32KCLKSEL_MASK 0xC000u

#define CSC0_AONCLKSR_AON32KCLKSEL_SHIFT 14u

#define CSC0_AONCLKSR_AON32KCLKSEL_WIDTH 2u

#define CSC0_AONCLKSR_AON32KCLKSEL(x)  (((uint32)(((uint32)(x))<<CSC0_AONCLKSR_AON32KCLKSEL_SHIFT))&CSC0_AONCLKSR_AON32KCLKSEL_MASK)

#define CSC0_AONCLKSR_RTCCLKSEL_MASK   0x3000u

#define CSC0_AONCLKSR_RTCCLKSEL_SHIFT  12u

#define CSC0_AONCLKSR_RTCCLKSEL_WIDTH  2u

#define CSC0_AONCLKSR_RTCCLKSEL(x)     (((uint32)(((uint32)(x))<<CSC0_AONCLKSR_RTCCLKSEL_SHIFT))&CSC0_AONCLKSR_RTCCLKSEL_MASK)

#define CSC0_AONCLKSR_AONCLKSEL_MASK   0xC00u

#define CSC0_AONCLKSR_AONCLKSEL_SHIFT  10u

#define CSC0_AONCLKSR_AONCLKSEL_WIDTH  2u

#define CSC0_AONCLKSR_AONCLKSEL(x)     (((uint32)(((uint32)(x))<<CSC0_AONCLKSR_AONCLKSEL_SHIFT))&CSC0_AONCLKSR_AONCLKSEL_MASK)

#define CSC0_AONCLKSR_SIRCDIV32KEN_MASK 0x200u

#define CSC0_AONCLKSR_SIRCDIV32KEN_SHIFT 9u

#define CSC0_AONCLKSR_SIRCDIV32KEN_WIDTH 1u

#define CSC0_AONCLKSR_SIRCDIV32KEN(x)  (((uint32)(((uint32)(x))<<CSC0_AONCLKSR_SIRCDIV32KEN_SHIFT))&CSC0_AONCLKSR_SIRCDIV32KEN_MASK)

#define CSC0_AONCLKSR_AON1KCLKEN_MASK  0x100u

#define CSC0_AONCLKSR_AON1KCLKEN_SHIFT 8u

#define CSC0_AONCLKSR_AON1KCLKEN_WIDTH 1u

#define CSC0_AONCLKSR_AON1KCLKEN(x)    (((uint32)(((uint32)(x))<<CSC0_AONCLKSR_AON1KCLKEN_SHIFT))&CSC0_AONCLKSR_AON1KCLKEN_MASK)

#define CSC0_AONCLKSR_LOCK_MASK        0x1u

#define CSC0_AONCLKSR_LOCK_SHIFT       0u

#define CSC0_AONCLKSR_LOCK_WIDTH       1u

#define CSC0_AONCLKSR_LOCK(x)          (((uint32)(((uint32)(x))<<CSC0_AONCLKSR_LOCK_SHIFT))&CSC0_AONCLKSR_LOCK_MASK)

/* AONCLKSR Reg Mask */

#define CSC0_AONCLKSR_MASK             0x0000FF01u


/* CCM0_CFG Bit Fields */
#define CSC0_CCM0_CFG_CPU0_FORCE_HCLKEN_MASK 0x4u


#if (MCU_CFG_CSC0_REG_7240_SUPPORT == STD_ON)
/* LP_WAKEUP Bit Fields */

#define CSC0_LP_WAKEUP_LP_WAKEUP_CFG0_MASK 0xF0000000u

#define CSC0_LP_WAKEUP_LP_WAKEUP_CFG0_SHIFT 28u

#define CSC0_LP_WAKEUP_LP_WAKEUP_CFG0_WIDTH 4u

#define CSC0_LP_WAKEUP_LP_WAKEUP_CFG0(x) (((uint32)(((uint32)(x))<<CSC0_LP_WAKEUP_LP_WAKEUP_CFG0_SHIFT))&CSC0_LP_WAKEUP_LP_WAKEUP_CFG0_MASK)

#define CSC0_LP_WAKEUP_LP0_POL_MASK    0x80u

#define CSC0_LP_WAKEUP_LP0_POL_SHIFT   7u

#define CSC0_LP_WAKEUP_LP0_POL_WIDTH   1u

#define CSC0_LP_WAKEUP_LP0_POL(x)      (((uint32)(((uint32)(x))<<CSC0_LP_WAKEUP_LP0_POL_SHIFT))&CSC0_LP_WAKEUP_LP0_POL_MASK)

#define CSC0_LP_WAKEUP_LOCK_MASK       0x1u

#define CSC0_LP_WAKEUP_LOCK_SHIFT      0u

#define CSC0_LP_WAKEUP_LOCK_WIDTH      1u

#define CSC0_LP_WAKEUP_LOCK(x)         (((uint32)(((uint32)(x))<<CSC0_LP_WAKEUP_LOCK_SHIFT))&CSC0_LP_WAKEUP_LOCK_MASK)

/* LP_WAKEUP Reg Mask */

#define CSC0_LP_WAKEUP_MASK            0xFFFFF0F9u
#endif /*(MCU_CFG_CSC0_REG_7240_SUPPORT == STD_ON)*/


/*!

 * @}

 */ /* end of group CSC0_Register_Masks */



/*!

 * @}

 */ /* end of group CSC0_Peripheral_Access_Layer */



#endif /* #if (MCU_CFG_CSC0_INIT_API_SUPPORT == STD_ON) */

#ifdef __cplusplus
}
#endif
/** @}*/

#endif
