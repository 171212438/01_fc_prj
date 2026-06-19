/**
 *   @file    Eftu_Tbu_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - Tbu module register and macro definitions.
 *   @details TBU module registers, and macro definitions used to manipulate the module registers.
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TBU
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   1.0.0       14/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
#ifndef EFTU_TBU_REG_H
#define EFTU_TBU_REG_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/** Number of instances of the EFTU_TBU module. */
#define EFTU_TBU_INSTANCE_COUNT (1u)

/* EFTU_TBU - Peripheral instance base addresses */
/** Peripheral EFTU_TBU base address */
#if (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C)
#define EFTU_TBU_BASE (0x40476500u)
#else
#define EFTU_TBU_BASE (0x4083E500u)
#endif
/** Peripheral EFTU_TBU base pointer */
#define EFTU_TBU                      ((EFTU_TBU_Type *)EFTU_TBU_BASE)
/** Array initializer of EFTU_TBU peripheral base addresses */
#define EFTU_TBU_BASE_ADDRS           { EFTU_TBU_BASE }
/** Array initializer of EFTU_TBU peripheral base pointers */
#define EFTU_TBU_BASE_PTRS            { EFTU_TBU }

/* ----------------------------------------------------------------------------
   -- EFTU_TBU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EFTU_TBU_Register_Masks EFTU_TBU Register Masks
 * @{
 */

/* CHEN Bit Fields */
#define EFTU_TBU_CHEN_ENDIS_CH0_MASK  0x3u
#define EFTU_TBU_CHEN_ENDIS_CH0_SHIFT 0u
#define EFTU_TBU_CHEN_ENDIS_CH0_WIDTH 2u
#define EFTU_TBU_CHEN_ENDIS_CH0(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CHEN_ENDIS_CH0_SHIFT)) & EFTU_TBU_CHEN_ENDIS_CH0_MASK)
#define EFTU_TBU_CHEN_ENDIS_CH1_MASK  0xCu
#define EFTU_TBU_CHEN_ENDIS_CH1_SHIFT 2u
#define EFTU_TBU_CHEN_ENDIS_CH1_WIDTH 2u
#define EFTU_TBU_CHEN_ENDIS_CH1(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CHEN_ENDIS_CH1_SHIFT)) & EFTU_TBU_CHEN_ENDIS_CH1_MASK)
#define EFTU_TBU_CHEN_ENDIS_CH2_MASK  0x30u
#define EFTU_TBU_CHEN_ENDIS_CH2_SHIFT 4u
#define EFTU_TBU_CHEN_ENDIS_CH2_WIDTH 2u
#define EFTU_TBU_CHEN_ENDIS_CH2(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CHEN_ENDIS_CH2_SHIFT)) & EFTU_TBU_CHEN_ENDIS_CH2_MASK)
#define EFTU_TBU_CHEN_ENDIS_CH3_MASK  0xC0u
#define EFTU_TBU_CHEN_ENDIS_CH3_SHIFT 6u
#define EFTU_TBU_CHEN_ENDIS_CH3_WIDTH 2u
#define EFTU_TBU_CHEN_ENDIS_CH3(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CHEN_ENDIS_CH3_SHIFT)) & EFTU_TBU_CHEN_ENDIS_CH3_MASK)
/* CHEN Reg Mask */
#define EFTU_TBU_CHEN_MASK              0x000000FFu

/* CH0_CTRL Bit Fields */
#define EFTU_TBU_CH0_CTRL_LOW_RES_MASK  0x1u
#define EFTU_TBU_CH0_CTRL_LOW_RES_SHIFT 0u
#define EFTU_TBU_CH0_CTRL_LOW_RES_WIDTH 1u
#define EFTU_TBU_CH0_CTRL_LOW_RES(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH0_CTRL_LOW_RES_SHIFT)) & EFTU_TBU_CH0_CTRL_LOW_RES_MASK)
#define EFTU_TBU_CH0_CTRL_CH_CLK_SRC_MASK  0xEu
#define EFTU_TBU_CH0_CTRL_CH_CLK_SRC_SHIFT 1u
#define EFTU_TBU_CH0_CTRL_CH_CLK_SRC_WIDTH 3u
#define EFTU_TBU_CH0_CTRL_CH_CLK_SRC(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH0_CTRL_CH_CLK_SRC_SHIFT)) & \
     EFTU_TBU_CH0_CTRL_CH_CLK_SRC_MASK)
/* CH0_CTRL Reg Mask */
#define EFTU_TBU_CH0_CTRL_MASK       0x0000000Fu

/* CH0_BASE Bit Fields */
#define EFTU_TBU_CH0_BASE_BASE_MASK  0x7FFFFFFu
#define EFTU_TBU_CH0_BASE_BASE_SHIFT 0u
#define EFTU_TBU_CH0_BASE_BASE_WIDTH 27u
#define EFTU_TBU_CH0_BASE_BASE(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH0_BASE_BASE_SHIFT)) & EFTU_TBU_CH0_BASE_BASE_MASK)
/* CH0_BASE Reg Mask */
#define EFTU_TBU_CH0_BASE_MASK             0x07FFFFFFu

/* CH1_CTRL Bit Fields */
#define EFTU_TBU_CH1_CTRL_CH_CLK_SRC_MASK  0xEu
#define EFTU_TBU_CH1_CTRL_CH_CLK_SRC_SHIFT 1u
#define EFTU_TBU_CH1_CTRL_CH_CLK_SRC_WIDTH 3u
#define EFTU_TBU_CH1_CTRL_CH_CLK_SRC(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH1_CTRL_CH_CLK_SRC_SHIFT)) & \
     EFTU_TBU_CH1_CTRL_CH_CLK_SRC_MASK)
/* CH1_CTRL Reg Mask */
#define EFTU_TBU_CH1_CTRL_MASK             0x0000000Eu

/* CH2_CTRL Bit Fields */
#define EFTU_TBU_CH2_CTRL_CH_CLK_SRC_MASK  0xEu
#define EFTU_TBU_CH2_CTRL_CH_CLK_SRC_SHIFT 1u
#define EFTU_TBU_CH2_CTRL_CH_CLK_SRC_WIDTH 3u
#define EFTU_TBU_CH2_CTRL_CH_CLK_SRC(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH2_CTRL_CH_CLK_SRC_SHIFT)) & \
     EFTU_TBU_CH2_CTRL_CH_CLK_SRC_MASK)
/* CH2_CTRL Reg Mask */
#define EFTU_TBU_CH2_CTRL_MASK       0x0000000Eu

/* CH1_BASE Bit Fields */
#define EFTU_TBU_CH1_BASE_BASE_MASK  0xFFFFFFu
#define EFTU_TBU_CH1_BASE_BASE_SHIFT 0u
#define EFTU_TBU_CH1_BASE_BASE_WIDTH 24u
#define EFTU_TBU_CH1_BASE_BASE(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH1_BASE_BASE_SHIFT)) & EFTU_TBU_CH1_BASE_BASE_MASK)
/* CH1_BASE Reg Mask */
#define EFTU_TBU_CH1_BASE_MASK       0x00FFFFFFu

/* CH2_BASE Bit Fields */
#define EFTU_TBU_CH2_BASE_BASE_MASK  0xFFFFFFu
#define EFTU_TBU_CH2_BASE_BASE_SHIFT 0u
#define EFTU_TBU_CH2_BASE_BASE_WIDTH 24u
#define EFTU_TBU_CH2_BASE_BASE(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH2_BASE_BASE_SHIFT)) & EFTU_TBU_CH2_BASE_BASE_MASK)
/* CH2_BASE Reg Mask */
#define EFTU_TBU_CH2_BASE_MASK          0x00FFFFFFu

/* CH3_CTRL Bit Fields */
#define EFTU_TBU_CH3_CTRL_CH_MODE_MASK  0x1u
#define EFTU_TBU_CH3_CTRL_CH_MODE_SHIFT 0u
#define EFTU_TBU_CH3_CTRL_CH_MODE_WIDTH 1u
#define EFTU_TBU_CH3_CTRL_CH_MODE(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH3_CTRL_CH_MODE_SHIFT)) & EFTU_TBU_CH3_CTRL_CH_MODE_MASK)
#define EFTU_TBU_CH3_CTRL_USE_CH2_MASK  0x10u
#define EFTU_TBU_CH3_CTRL_USE_CH2_SHIFT 4u
#define EFTU_TBU_CH3_CTRL_USE_CH2_WIDTH 1u
#define EFTU_TBU_CH3_CTRL_USE_CH2(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH3_CTRL_USE_CH2_SHIFT)) & EFTU_TBU_CH3_CTRL_USE_CH2_MASK)
/* CH3_CTRL Reg Mask */
#define EFTU_TBU_CH3_CTRL_MASK       0x00000011u

/* CH3_BASE Bit Fields */
#define EFTU_TBU_CH3_BASE_BASE_MASK  0xFFFFFFu
#define EFTU_TBU_CH3_BASE_BASE_SHIFT 0u
#define EFTU_TBU_CH3_BASE_BASE_WIDTH 24u
#define EFTU_TBU_CH3_BASE_BASE(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH3_BASE_BASE_SHIFT)) & EFTU_TBU_CH3_BASE_BASE_MASK)
/* CH3_BASE Reg Mask */
#define EFTU_TBU_CH3_BASE_MASK       0x00FFFFFFu

/* CH3_MARK Bit Fields */
#define EFTU_TBU_CH3_MARK_MARK_MASK  0xFFFFFFu
#define EFTU_TBU_CH3_MARK_MARK_SHIFT 0u
#define EFTU_TBU_CH3_MARK_MARK_WIDTH 24u
#define EFTU_TBU_CH3_MARK_MARK(x) \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH3_MARK_MARK_SHIFT)) & EFTU_TBU_CH3_MARK_MARK_MASK)
/* CH3_MARK Reg Mask */
#define EFTU_TBU_CH3_MARK_MASK             0x00FFFFFFu

/* CH3_CAPTURE Bit Fields */
#define EFTU_TBU_CH3_CAPTURE_CAPTURE_MASK  0xFFFFFFu
#define EFTU_TBU_CH3_CAPTURE_CAPTURE_SHIFT 0u
#define EFTU_TBU_CH3_CAPTURE_CAPTURE_WIDTH 24u
#define EFTU_TBU_CH3_CAPTURE_CAPTURE(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_TBU_CH3_CAPTURE_CAPTURE_SHIFT)) & \
     EFTU_TBU_CH3_CAPTURE_CAPTURE_MASK)
/* CH3_CAPTURE Reg Mask */
#define EFTU_TBU_CH3_CAPTURE_MASK 0x00FFFFFFu

/*!
 * @}
 */ /* end of group EFTU_TBU_Register_Masks */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* ----------------------------------------------------------------------------
   -- EFTU_TBU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EFTU_TBU_Peripheral_Access_Layer EFTU_TBU Peripheral Access Layer
 * @{
 */

/** EFTU_TBU - Size of Registers Arrays */

/** EFTU_TBU - Register Layout Typedef */

typedef struct
{

    __IO uint32 CHEN;        /* TBU Global Channel Enable Register, offset: 0x00 */
    __IO uint32 CH0_CTRL;    /* TBU Channel 0 Control Register, offset: 0x04 */
    __IO uint32 CH0_BASE;    /* TBU Channel 0 Base Register, offset: 0x08 */
    __IO uint32 CH1_CTRL;    /* TBU Channel 1 Control Register, offset: 0x0C */
    __IO uint32 CH1_BASE;    /* TBU Channel 1 Base Register, offset: 0x10 */
    __IO uint32 CH2_CTRL;    /* TBU Channel 2 Control Register, offset: 0x14 */
    __IO uint32 CH2_BASE;    /* TBU Channel 2 Base Register, offset: 0x18 */
    __IO uint32 CH3_CTRL;    /* TBU Channel 3 Control Register, offset: 0x1C */
    __IO uint32 CH3_BASE;    /* TBU Channel 3 Base Register, offset: 0x20 */
    __IO uint32 CH3_MARK;    /* TBU Channel 3 Modulo Value Register, offset: 0x24 */
    __IO uint32 CH3_CAPTURE; /* TBU Channel 3 Base Captured Register, offset: 0x28 */

} EFTU_TBU_Type, *EFTU_TBU_MemMapPtr;
/*!
 * @}
 */ /* end of group EFTU_TBU_Peripheral_Access_Layer */
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef __cplusplus
}
#endif
#endif
