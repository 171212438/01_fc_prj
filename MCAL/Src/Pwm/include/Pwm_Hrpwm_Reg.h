/**
*   @file    Pwm_Hrpwm_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR ICU - module register and macro definitions.
*   @details ICU module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : HRPWM
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
*   0.9.0       19/12/2024    QXW0119       N/A          Add HRPWM support
==================================================================================================*/
#ifndef PWM_HRPWM_REG_H
#define PWM_HRPWM_REG_H

#include "Std_Types.h"
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations 
 * Reason: This type may not used by user */
typedef struct {
  __IO uint32 EN_CTRL                       ; /* PWM Channel Enable Register, offset: 0x00 */
  __IO uint32 BYPASS_CTRL                   ; /* PWM Channel Bypass Control Register, offset: 0x04 */
  __IO uint32 ANA_CTRL                      ; /* Phase Generation Lock Status Register, offset: 0x08 */
       uint8  RESERVED_0[4];
  __IO uint32 LOCK_CTRL                     ; /* Register Write Lock Control Register, offset: 0x10 */
  __IO uint32 FAULT_SW_CTRL_EN              ; /* Software Release Fault Enable Register, offset: 0x14 */
  __IO uint32 FAULT_STATUS                  ; /* Channel Fault Status Register, offset: 0x18 */

} HRPWM_Type, *HRPWM_MemMapPtr;

/* PRQA S 1535 -- */

/** Number of instances of the HRPWM module. */
#define HRPWM_INSTANCE_COUNT                     (1u)
/** Number of the channel of the HRPWM module. */
#define HRPWM_CHANNEL_COUNT                      (8u)
/* HRPWM - Peripheral instance base addresses */
/** Peripheral HRPWM base address */
#define HRPWM_BASE                               (0x40478000u)
/** Peripheral HRPWM base pointer */
#define HRPWM                                    ((HRPWM_Type *)HRPWM_BASE)
/** Array initializer of HRPWM peripheral base addresses */
#define HRPWM_BASE_ADDRS                         {HRPWM_BASE}
/** Array initializer of HRPWM peripheral base pointers */
#define HRPWM_BASE_PTRS                          {HRPWM}

/* EN_CTRL Bit Fields */
#define HRPWM_EN_CTRL_CHNL_ENABLE_MASK 0xFFu
#define HRPWM_EN_CTRL_CHNL_ENABLE_SHIFT 0u
#define HRPWM_EN_CTRL_CHNL_ENABLE_WIDTH 8u
#define HRPWM_EN_CTRL_CHNL_ENABLE(x)   (((uint32)(((uint32)(x))<<HRPWM_EN_CTRL_CHNL_ENABLE_SHIFT))&HRPWM_EN_CTRL_CHNL_ENABLE_MASK)
/* EN_CTRL Reg Mask */
#define HRPWM_EN_CTRL_MASK             0x000000FFu

/* BYPASS_CTRL Bit Fields */
#define HRPWM_BYPASS_CTRL_CHNL_BYPASS_MASK 0xFFu
#define HRPWM_BYPASS_CTRL_CHNL_BYPASS_SHIFT 0u
#define HRPWM_BYPASS_CTRL_CHNL_BYPASS_WIDTH 8u
#define HRPWM_BYPASS_CTRL_CHNL_BYPASS(x) (((uint32)(((uint32)(x))<<HRPWM_BYPASS_CTRL_CHNL_BYPASS_SHIFT))&HRPWM_BYPASS_CTRL_CHNL_BYPASS_MASK)
/* BYPASS_CTRL Reg Mask */
#define HRPWM_BYPASS_CTRL_MASK         0x000000FFu

/* ANA_CTRL Bit Fields */
#define HRPWM_ANA_CTRL_PH_LDOEN_MASK   0x40000000u
#define HRPWM_ANA_CTRL_PH_LDOEN_SHIFT  30u
#define HRPWM_ANA_CTRL_PH_LDOEN_WIDTH  1u
#define HRPWM_ANA_CTRL_PH_LDOEN(x)     (((uint32)(((uint32)(x))<<HRPWM_ANA_CTRL_PH_LDOEN_SHIFT))&HRPWM_ANA_CTRL_PH_LDOEN_MASK)
#define HRPWM_ANA_CTRL_PH_LDOBYPASSEN_MASK 0x20000000u
#define HRPWM_ANA_CTRL_PH_LDOBYPASSEN_SHIFT 29u
#define HRPWM_ANA_CTRL_PH_LDOBYPASSEN_WIDTH 1u
#define HRPWM_ANA_CTRL_PH_LDOBYPASSEN(x) (((uint32)(((uint32)(x))<<HRPWM_ANA_CTRL_PH_LDOBYPASSEN_SHIFT))&HRPWM_ANA_CTRL_PH_LDOBYPASSEN_MASK)
#define HRPWM_ANA_CTRL_PH_EN_MASK      0x10000000u
#define HRPWM_ANA_CTRL_PH_EN_SHIFT     28u
#define HRPWM_ANA_CTRL_PH_EN_WIDTH     1u
#define HRPWM_ANA_CTRL_PH_EN(x)        (((uint32)(((uint32)(x))<<HRPWM_ANA_CTRL_PH_EN_SHIFT))&HRPWM_ANA_CTRL_PH_EN_MASK)
#define HRPWM_ANA_CTRL_ANA_POWER_OK_MASK 0x2u
#define HRPWM_ANA_CTRL_ANA_POWER_OK_SHIFT 1u
#define HRPWM_ANA_CTRL_ANA_POWER_OK_WIDTH 1u
#define HRPWM_ANA_CTRL_ANA_POWER_OK(x) (((uint32)(((uint32)(x))<<HRPWM_ANA_CTRL_ANA_POWER_OK_SHIFT))&HRPWM_ANA_CTRL_ANA_POWER_OK_MASK)
#define HRPWM_ANA_CTRL_ANA_LOCK_MASK   0x1u
#define HRPWM_ANA_CTRL_ANA_LOCK_SHIFT  0u
#define HRPWM_ANA_CTRL_ANA_LOCK_WIDTH  1u
#define HRPWM_ANA_CTRL_ANA_LOCK(x)     (((uint32)(((uint32)(x))<<HRPWM_ANA_CTRL_ANA_LOCK_SHIFT))&HRPWM_ANA_CTRL_ANA_LOCK_MASK)
/* ANA_CTRL Reg Mask */
#define HRPWM_ANA_CTRL_MASK            0x70000003u

/* LOCK_CTRL Bit Fields */
#define HRPWM_LOCK_CTRL_UNLOCK_NUMBER_MASK 0xFFFFFFFFu
#define HRPWM_LOCK_CTRL_UNLOCK_NUMBER_SHIFT 0u
#define HRPWM_LOCK_CTRL_UNLOCK_NUMBER_WIDTH 32u
#define HRPWM_LOCK_CTRL_UNLOCK_NUMBER(x) (((uint32)(((uint32)(x))<<HRPWM_LOCK_CTRL_UNLOCK_NUMBER_SHIFT))&HRPWM_LOCK_CTRL_UNLOCK_NUMBER_MASK)
/* LOCK_CTRL Reg Mask */
#define HRPWM_LOCK_CTRL_MASK           0xFFFFFFFFu

/* FAULT_SW_CTRL_EN Bit Fields */
#define HRPWM_FAULT_SW_CTRL_EN_SW_CTRL_EN_MASK 0xFFu
#define HRPWM_FAULT_SW_CTRL_EN_SW_CTRL_EN_SHIFT 0u
#define HRPWM_FAULT_SW_CTRL_EN_SW_CTRL_EN_WIDTH 8u
#define HRPWM_FAULT_SW_CTRL_EN_SW_CTRL_EN(x) (((uint32)(((uint32)(x))<<HRPWM_FAULT_SW_CTRL_EN_SW_CTRL_EN_SHIFT))&HRPWM_FAULT_SW_CTRL_EN_SW_CTRL_EN_MASK)
/* FAULT_SW_CTRL_EN Reg Mask */
#define HRPWM_FAULT_SW_CTRL_EN_MASK    0x000000FFu

/* FAULT_STATUS Bit Fields */
#define HRPWM_FAULT_STATUS_CH_FAULT_STATUS_MASK 0xFFu
#define HRPWM_FAULT_STATUS_CH_FAULT_STATUS_SHIFT 0u
#define HRPWM_FAULT_STATUS_CH_FAULT_STATUS_WIDTH 8u
#define HRPWM_FAULT_STATUS_CH_FAULT_STATUS(x) (((uint32)(((uint32)(x))<<HRPWM_FAULT_STATUS_CH_FAULT_STATUS_SHIFT))&HRPWM_FAULT_STATUS_CH_FAULT_STATUS_MASK)
/* FAULT_STATUS Reg Mask */
#define HRPWM_FAULT_STATUS_MASK        0x000000FFu

#endif 
/** @} */
