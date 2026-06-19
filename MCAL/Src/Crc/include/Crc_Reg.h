/**
 *   @file    Crc_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - hardware specific type definition
 *   @details This file contains the Pwm Autosar hardware specific type definition
 *
 *   @addtogroup Crc
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Crc
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.4.0       15/12/2023    QXW0119       N/A          Release version
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/
/* PRQA S 1534 EOF
   1534:The macro '%1s' is declared but not used within this project.
   REASON: These macros are CRC registers definition, they are reserved for future usage.
*/

#ifndef CRC_REG_H
#define CRC_REG_H

#ifdef __cplusplus
extern "C"
{
#endif

/*===============================================================================================
*                                         INCLUDE FILES
===============================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef struct
{
    __IO uint32 DATA; /** CRC Data Register, offset: 0x0 */
    __IO uint32 POLY; /** CRC Polynomial register, offset: 0x4 */
    __IO uint32 CR;   /** CRC Control Register, offset: 0x8 */
} CRC_Type;
/*===============================================================================================
*                                       DEFINES AND MACROS
===============================================================================================*/
/* CRC - Peripheral instance base addresses */

/** Peripheral CRC0 base address */

#define CRC0_BASE (0x4002a000u)

/** Peripheral CRC0 base pointer */

#define CRC0      ((CRC_Type *)CRC0_BASE)

/** Peripheral CRC1 base address */

#define CRC1_BASE (0x40432000u)

/** Peripheral CRC1 base pointer */

#define CRC1      ((CRC_Type *)CRC1_BASE)

#if (DEVICE_SERIES == FC7240F2MDSxxxxT1A) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
    (DEVICE_SERIES == FC7300F4MDDxxxxT1C)
/** Number of instances of the CRC module. */

#define CRC_INSTANCE_COUNT (1u)

/** Array initializer of CRC peripheral base addresses */

#define CRC_BASE_ADDRS     { CRC0_BASE }

/** Array initializer of CRC peripheral base pointers */

#define CRC_BASE_PTRS      { CRC0 }
#else
/** Number of instances of the CRC module. */

#define CRC_INSTANCE_COUNT (2u)
/** Array initializer of CRC peripheral base addresses */

#define CRC_BASE_ADDRS     { CRC0_BASE, CRC1_BASE }

/** Array initializer of CRC peripheral base pointers */

#define CRC_BASE_PTRS      { CRC0, CRC1 }
#endif

/* DATA Bit Fields */

#define CRC_DATA_HU_MASK    0xFF000000u

#define CRC_DATA_HU_SHIFT   24u

#define CRC_DATA_HU_WIDTH   8u

#define CRC_DATA_HU(x)      (((uint32)(((uint32)(x)) << CRC_DATA_HU_SHIFT)) & CRC_DATA_HU_MASK)

#define CRC_DATA_HL_MASK    0xFF0000u

#define CRC_DATA_HL_SHIFT   16u

#define CRC_DATA_HL_WIDTH   8u

#define CRC_DATA_HL(x)      (((uint32)(((uint32)(x)) << CRC_DATA_HL_SHIFT)) & CRC_DATA_HL_MASK)

#define CRC_DATA_LU_MASK    0xFF00u

#define CRC_DATA_LU_SHIFT   8u

#define CRC_DATA_LU_WIDTH   8u

#define CRC_DATA_LU(x)      (((uint32)(((uint32)(x)) << CRC_DATA_LU_SHIFT)) & CRC_DATA_LU_MASK)

#define CRC_DATA_LL_MASK    0xFFu

#define CRC_DATA_LL_SHIFT   0u

#define CRC_DATA_LL_WIDTH   8u

#define CRC_DATA_LL(x)      (((uint32)(((uint32)(x)) << CRC_DATA_LL_SHIFT)) & CRC_DATA_LL_MASK)

/* DATA Reg Mask */

#define CRC_DATA_MASK       0xFFFFFFFFu

/* POLY Bit Fields */

#define CRC_POLY_HIGH_MASK  0xFFFF0000u

#define CRC_POLY_HIGH_SHIFT 16u

#define CRC_POLY_HIGH_WIDTH 16u

#define CRC_POLY_HIGH(x)    (((uint32)(((uint32)(x)) << CRC_POLY_HIGH_SHIFT)) & CRC_POLY_HIGH_MASK)

#define CRC_POLY_LOW_MASK   0xFFFFu

#define CRC_POLY_LOW_SHIFT  0u

#define CRC_POLY_LOW_WIDTH  16u

#define CRC_POLY_LOW(x)     (((uint32)(((uint32)(x)) << CRC_POLY_LOW_SHIFT)) & CRC_POLY_LOW_MASK)

/* POLY Reg Mask */

#define CRC_POLY_MASK       0xFFFFFFFFu

/* CR Bit Fields */

#define CRC_CR_DSW_MASK     0xC0000000u

#define CRC_CR_DSW_SHIFT    30u

#define CRC_CR_DSW_WIDTH    2u

#define CRC_CR_DSW(x)       (((uint32)(((uint32)(x)) << CRC_CR_DSW_SHIFT)) & CRC_CR_DSW_MASK)

#define CRC_CR_DSR_MASK     0x30000000u

#define CRC_CR_DSR_SHIFT    28u

#define CRC_CR_DSR_WIDTH    2u

#define CRC_CR_DSR(x)       (((uint32)(((uint32)(x)) << CRC_CR_DSR_SHIFT)) & CRC_CR_DSR_MASK)

#define CRC_CR_TCRC8_MASK   0x8000000u

#define CRC_CR_TCRC8_SHIFT  27u

#define CRC_CR_TCRC8_WIDTH  1u

#define CRC_CR_TCRC8(x)     (((uint32)(((uint32)(x)) << CRC_CR_TCRC8_SHIFT)) & CRC_CR_TCRC8_MASK)

#define CRC_CR_FXOR_MASK    0x4000000u

#define CRC_CR_FXOR_SHIFT   26u

#define CRC_CR_FXOR_WIDTH   1u

#define CRC_CR_FXOR(x)      (((uint32)(((uint32)(x)) << CRC_CR_FXOR_SHIFT)) & CRC_CR_FXOR_MASK)

#define CRC_CR_WAS_MASK     0x2000000u

#define CRC_CR_WAS_SHIFT    25u

#define CRC_CR_WAS_WIDTH    1u

#define CRC_CR_WAS(x)       (((uint32)(((uint32)(x)) << CRC_CR_WAS_SHIFT)) & CRC_CR_WAS_MASK)

#define CRC_CR_TCRC_MASK    0x1000000u

#define CRC_CR_TCRC_SHIFT   24u

#define CRC_CR_TCRC_WIDTH   1u

#define CRC_CR_TCRC(x)      (((uint32)(((uint32)(x)) << CRC_CR_TCRC_SHIFT)) & CRC_CR_TCRC_MASK)

/* CR Reg Mask */

#define CRC_CR_MASK         0xF7000000u

/*===============================================================================================
                                     FUNCTION PROTOTYPES
===============================================================================================*/

#ifdef __cplusplus
}
#endif
#endif
