/**
*   @file    Cordic_Reg.h
*   @version 1.5.1
*   
*   @brief   AUTOSAR Cordic - hardware specific type definition
*   @details This file contains the Pwm Autosar hardware specific type definition
*
*   @addtogroup Cordic
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Cordic
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2024-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       02/04/2025    QXW0054       N/A          Release version
==================================================================================================*/
/* PRQA S 1534 EOF 
   1534:The macro '%1s' is declared but not used within this project.
   REASON: These macros are Cordic registers definition, they are reserved for future usage.
*/

#ifndef CORDIC_REG_H
#define CORDIC_REG_H

#ifdef __cplusplus
extern "C" {
#endif

/*===============================================================================================
*                                         INCLUDE FILES
===============================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef struct {

  __IO uint32 CTRL                          ; /* Control Register, offset: 0x0 */
       uint8  RESERVED_0[12];
  __IO uint32 X_INPUT                       ; /* X-axis Input Data, offset: 0x10 */
  __IO uint32 Y_INPUT                       ; /* Y-axis Input Data, offset: 0x14 */
  __IO uint32 Z_INPUT                       ; /* Z-axis Input Data, offset: 0x18 */
       uint8  RESERVED_1[4];
  __IO uint32 STAT                          ; /* State Register, offset: 0x20 */
  __I  uint32 X_OUTPUT                      ; /* X-axis Output Data, offset: 0x24 */
  __I  uint32 Y_OUTPUT                      ; /* Y-axis Output Data, offset: 0x28 */
  __I  uint32 Z_OUTPUT                      ; /* Z-axis Output Data, offset: 0x2C */

} CORDIC_Type;

 /*===============================================================================================
 *                                       DEFINES AND MACROS
 ===============================================================================================*/

#define CORDIC_INSTANCE_COUNT                    (1u)

/* CORDIC - Peripheral instance base addresses */
/** Peripheral CORDIC base address */
#define CORDIC_BASE                              (0x4002b000u)
/** Peripheral CORDIC base pointer */
#define CORDIC                                   ((CORDIC_Type *)CORDIC_BASE)
/** Array initializer of CORDIC peripheral base addresses */
#define CORDIC_BASE_ADDRS                        {CORDIC_BASE}
/** Array initializer of CORDIC peripheral base pointers */
#define CORDIC_BASE_PTRS                         {CORDIC}

/* CTRL Bit Fields */
#define CORDIC_CTRL_IE_MASK            0x80000000u
#define CORDIC_CTRL_IE_SHIFT           31u
#define CORDIC_CTRL_IE_WIDTH           1u
#define CORDIC_CTRL_IE(x)              (((uint32)(((uint32)(x))<<CORDIC_CTRL_IE_SHIFT))&CORDIC_CTRL_IE_MASK)
#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
#define CORDIC_CTRL_SCALE_MASK         0x380u
#define CORDIC_CTRL_SCALE_SHIFT        7u
#define CORDIC_CTRL_SCALE_WIDTH        3u
#define CORDIC_CTRL_SCALE(x)           (((uint32)(((uint32)(x))<<CORDIC_CTRL_SCALE_SHIFT))&CORDIC_CTRL_SCALE_MASK)
#endif
#define CORDIC_CTRL_ITER_MASK          0x30u
#define CORDIC_CTRL_ITER_SHIFT         4u
#define CORDIC_CTRL_ITER_WIDTH         2u
#define CORDIC_CTRL_ITER(x)            (((uint32)(((uint32)(x))<<CORDIC_CTRL_ITER_SHIFT))&CORDIC_CTRL_ITER_MASK)
#define CORDIC_CTRL_OS_MASK            0xEu
#define CORDIC_CTRL_OS_SHIFT           1u
#define CORDIC_CTRL_OS_WIDTH           3u
#define CORDIC_CTRL_OS(x)              (((uint32)(((uint32)(x))<<CORDIC_CTRL_OS_SHIFT))&CORDIC_CTRL_OS_MASK)
#define CORDIC_CTRL_MODE_MASK          0x1u
#define CORDIC_CTRL_MODE_SHIFT         0u
#define CORDIC_CTRL_MODE_WIDTH         1u
#define CORDIC_CTRL_MODE(x)            (((uint32)(((uint32)(x))<<CORDIC_CTRL_MODE_SHIFT))&CORDIC_CTRL_MODE_MASK)
/* CTRL Reg Mask */
#define CORDIC_CTRL_MASK               0x8000003Fu

/* X_INPUT Bit Fields */
#define CORDIC_X_INPUT_DATA_MASK       0xFFFFFFFFu
#define CORDIC_X_INPUT_DATA_SHIFT      0u
#define CORDIC_X_INPUT_DATA_WIDTH      32u
#define CORDIC_X_INPUT_DATA(x)         (((uint32)(((uint32)(x))<<CORDIC_X_INPUT_DATA_SHIFT))&CORDIC_X_INPUT_DATA_MASK)
/* X_INPUT Reg Mask */
#define CORDIC_X_INPUT_MASK            0xFFFFFFFFu

/* Y_INPUT Bit Fields */
#define CORDIC_Y_INPUT_DATA_MASK       0xFFFFFFFFu
#define CORDIC_Y_INPUT_DATA_SHIFT      0u
#define CORDIC_Y_INPUT_DATA_WIDTH      32u
#define CORDIC_Y_INPUT_DATA(x)         (((uint32)(((uint32)(x))<<CORDIC_Y_INPUT_DATA_SHIFT))&CORDIC_Y_INPUT_DATA_MASK)
/* Y_INPUT Reg Mask */
#define CORDIC_Y_INPUT_MASK            0xFFFFFFFFu

/* Z_INPUT Bit Fields */
#define CORDIC_Z_INPUT_DATA_MASK       0xFFFFFFFFu
#define CORDIC_Z_INPUT_DATA_SHIFT      0u
#define CORDIC_Z_INPUT_DATA_WIDTH      32u
#define CORDIC_Z_INPUT_DATA(x)         (((uint32)(((uint32)(x))<<CORDIC_Z_INPUT_DATA_SHIFT))&CORDIC_Z_INPUT_DATA_MASK)
/* Z_INPUT Reg Mask */
#define CORDIC_Z_INPUT_MASK            0xFFFFFFFFu

/* STAT Bit Fields */
#define CORDIC_STAT_DONE_MASK          0x1u
#define CORDIC_STAT_DONE_SHIFT         0u
#define CORDIC_STAT_DONE_WIDTH         1u
#define CORDIC_STAT_DONE(x)            (((uint32)(((uint32)(x))<<CORDIC_STAT_DONE_SHIFT))&CORDIC_STAT_DONE_MASK)
/* STAT Reg Mask */
#define CORDIC_STAT_MASK               0x00000001u

/* X_OUTPUT Bit Fields */
#define CORDIC_X_OUTPUT_DATA_MASK      0xFFFFFFFFu
#define CORDIC_X_OUTPUT_DATA_SHIFT     0u
#define CORDIC_X_OUTPUT_DATA_WIDTH     32u
#define CORDIC_X_OUTPUT_DATA(x)        (((uint32)(((uint32)(x))<<CORDIC_X_OUTPUT_DATA_SHIFT))&CORDIC_X_OUTPUT_DATA_MASK)
/* X_OUTPUT Reg Mask */
#define CORDIC_X_OUTPUT_MASK           0xFFFFFFFFu

/* Y_OUTPUT Bit Fields */
#define CORDIC_Y_OUTPUT_DATA_MASK      0xFFFFFFFFu
#define CORDIC_Y_OUTPUT_DATA_SHIFT     0u
#define CORDIC_Y_OUTPUT_DATA_WIDTH     32u
#define CORDIC_Y_OUTPUT_DATA(x)        (((uint32)(((uint32)(x))<<CORDIC_Y_OUTPUT_DATA_SHIFT))&CORDIC_Y_OUTPUT_DATA_MASK)
/* Y_OUTPUT Reg Mask */
#define CORDIC_Y_OUTPUT_MASK           0xFFFFFFFFu

/* Z_OUTPUT Bit Fields */
#define CORDIC_Z_OUTPUT_DATA_MASK      0xFFFFFFFFu
#define CORDIC_Z_OUTPUT_DATA_SHIFT     0u
#define CORDIC_Z_OUTPUT_DATA_WIDTH     32u
#define CORDIC_Z_OUTPUT_DATA(x)        (((uint32)(((uint32)(x))<<CORDIC_Z_OUTPUT_DATA_SHIFT))&CORDIC_Z_OUTPUT_DATA_MASK)
/* Z_OUTPUT Reg Mask */
#define CORDIC_Z_OUTPUT_MASK           0xFFFFFFFFu

#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
#define CORDIC_CTR_VAL(s,a,b,c,d)  (CORDIC_CTRL_SCALE(s) | CORDIC_CTRL_IE(a) | CORDIC_CTRL_ITER(b) | CORDIC_CTRL_OS(c) |  CORDIC_CTRL_MODE(d))
#else
#define CORDIC_CTR_VAL(s,a,b,c,d)  (CORDIC_CTRL_IE(a) | CORDIC_CTRL_ITER(b) | CORDIC_CTRL_OS(c) |  CORDIC_CTRL_MODE(d))
#endif


/*!
 * @}
 */ /* end of group CORDIC_Register_Masks */

/*!
 * @}
 */ /* end of group CORDIC_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif
#endif
