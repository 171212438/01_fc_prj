/**
 *   @file    Eftu_Cmu_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - Cmu module register and macro definitions.
 *   @details CMU module registers, and macro definitions used to manipulate the module registers.
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CMU
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
#ifndef EFTU_CMU_REG_H
#define EFTU_CMU_REG_H

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
/* ----------------------------------------------------------------------------
   -- EFTU_CMU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EFTU_CMU_Peripheral_Access_Layer EFTU_CMU Peripheral Access Layer
 * @{
 */

/** EFTU_CMU - Size of Registers Arrays */

#define EFTU_CMU_CLK_n_CTRL_COUNT  8
#define EFTU_CMU_ECLK_n_CTRL_COUNT 2

/** Number of instances of the EFTU_CMU module. */
#define EFTU_CMU_INSTANCE_COUNT    (1u)

/* EFTU_CMU - Peripheral instance base addresses */
/** Peripheral EFTU_CMU base address */
#if (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C)
#define EFTU_CMU_BASE (0x40476400u)
#else
#define EFTU_CMU_BASE (0x4083E400u)
#endif
/** Peripheral EFTU_CMU base pointer */
#define EFTU_CMU                      ((EFTU_CMU_Type *)EFTU_CMU_BASE)
/** Array initializer of EFTU_CMU peripheral base addresses */
#define EFTU_CMU_BASE_ADDRS           { EFTU_CMU_BASE }
/** Array initializer of EFTU_CMU peripheral base pointers */
#define EFTU_CMU_BASE_PTRS            { EFTU_CMU }

/* ----------------------------------------------------------------------------
   -- EFTU_CMU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EFTU_CMU_Register_Masks EFTU_CMU Register Masks
 * @{
 */

/* CLK_EN Bit Fields */
#define EFTU_CMU_CLK_EN_EN_CLK0_MASK  0x3u
#define EFTU_CMU_CLK_EN_EN_CLK0_SHIFT 0u
#define EFTU_CMU_CLK_EN_EN_CLK0_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK0(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK0_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK0_MASK)
#define EFTU_CMU_CLK_EN_EN_CLK1_MASK  0xCu
#define EFTU_CMU_CLK_EN_EN_CLK1_SHIFT 2u
#define EFTU_CMU_CLK_EN_EN_CLK1_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK1(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK1_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK1_MASK)
#define EFTU_CMU_CLK_EN_EN_CLK2_MASK  0x30u
#define EFTU_CMU_CLK_EN_EN_CLK2_SHIFT 4u
#define EFTU_CMU_CLK_EN_EN_CLK2_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK2(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK2_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK2_MASK)
#define EFTU_CMU_CLK_EN_EN_CLK3_MASK  0xC0u
#define EFTU_CMU_CLK_EN_EN_CLK3_SHIFT 6u
#define EFTU_CMU_CLK_EN_EN_CLK3_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK3(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK3_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK3_MASK)
#define EFTU_CMU_CLK_EN_EN_CLK4_MASK  0x300u
#define EFTU_CMU_CLK_EN_EN_CLK4_SHIFT 8u
#define EFTU_CMU_CLK_EN_EN_CLK4_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK4(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK4_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK4_MASK)
#define EFTU_CMU_CLK_EN_EN_CLK5_MASK  0xC00u
#define EFTU_CMU_CLK_EN_EN_CLK5_SHIFT 10u
#define EFTU_CMU_CLK_EN_EN_CLK5_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK5(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK5_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK5_MASK)
#define EFTU_CMU_CLK_EN_EN_CLK6_MASK  0x3000u
#define EFTU_CMU_CLK_EN_EN_CLK6_SHIFT 12u
#define EFTU_CMU_CLK_EN_EN_CLK6_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK6(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK6_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK6_MASK)
#define EFTU_CMU_CLK_EN_EN_CLK7_MASK  0xC000u
#define EFTU_CMU_CLK_EN_EN_CLK7_SHIFT 14u
#define EFTU_CMU_CLK_EN_EN_CLK7_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_CLK7(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_CLK7_SHIFT)) & EFTU_CMU_CLK_EN_EN_CLK7_MASK)
#define EFTU_CMU_CLK_EN_EN_ECLK0_MASK  0x30000u
#define EFTU_CMU_CLK_EN_EN_ECLK0_SHIFT 16u
#define EFTU_CMU_CLK_EN_EN_ECLK0_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_ECLK0(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_ECLK0_SHIFT)) & EFTU_CMU_CLK_EN_EN_ECLK0_MASK)
#define EFTU_CMU_CLK_EN_EN_ECLK1_MASK  0xC0000u
#define EFTU_CMU_CLK_EN_EN_ECLK1_SHIFT 18u
#define EFTU_CMU_CLK_EN_EN_ECLK1_WIDTH 2u
#define EFTU_CMU_CLK_EN_EN_ECLK1(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_EN_EN_ECLK1_SHIFT)) & EFTU_CMU_CLK_EN_EN_ECLK1_MASK)
/* CLK_EN Reg Mask */
#define EFTU_CMU_CLK_EN_MASK             0x000FFFFFu

/* GCLK_NUM Bit Fields */
#define EFTU_CMU_GCLK_NUM_GCLK_NUM_MASK  0xFFu
#define EFTU_CMU_GCLK_NUM_GCLK_NUM_SHIFT 0u
#define EFTU_CMU_GCLK_NUM_GCLK_NUM_WIDTH 8u
#define EFTU_CMU_GCLK_NUM_GCLK_NUM(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_GCLK_NUM_GCLK_NUM_SHIFT)) & EFTU_CMU_GCLK_NUM_GCLK_NUM_MASK)
/* GCLK_NUM Reg Mask */
#define EFTU_CMU_GCLK_NUM_MASK           0x000000FFu

/* GCLK_DEN Bit Fields */
#define EFTU_CMU_GCLK_DEN_GCLK_DEN_MASK  0xFFu
#define EFTU_CMU_GCLK_DEN_GCLK_DEN_SHIFT 0u
#define EFTU_CMU_GCLK_DEN_GCLK_DEN_WIDTH 8u
#define EFTU_CMU_GCLK_DEN_GCLK_DEN(x) \
    (((uint32)(((uint32)(x)) << EFTU_CMU_GCLK_DEN_GCLK_DEN_SHIFT)) & EFTU_CMU_GCLK_DEN_GCLK_DEN_MASK)
/* GCLK_DEN Reg Mask */
#define EFTU_CMU_GCLK_DEN_MASK            0x000000FFu

/* CLK_n_CTRL Bit Fields */
#define EFTU_CMU_CLK_n_CTRL_CLK_CNT_MASK  0xFFu
#define EFTU_CMU_CLK_n_CTRL_CLK_CNT_SHIFT 0u
#define EFTU_CMU_CLK_n_CTRL_CLK_CNT_WIDTH 8u
#define EFTU_CMU_CLK_n_CTRL_CLK_CNT(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_n_CTRL_CLK_CNT_SHIFT)) & \
     EFTU_CMU_CLK_n_CTRL_CLK_CNT_MASK)
/* CLK_0_CTRL Reg Mask */
#define EFTU_CMU_CLK_n_CTRL_MASK           0x000000FFu

/* ECLK_n_NUM Bit Fields */
#define EFTU_CMU_ECLK_n_NUM_ECLK_NUM_MASK  0xFFu
#define EFTU_CMU_ECLK_n_NUM_ECLK_NUM_SHIFT 0u
#define EFTU_CMU_ECLK_n_NUM_ECLK_NUM_WIDTH 8u
#define EFTU_CMU_ECLK_n_NUM_ECLK_NUM(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_ECLK_n_NUM_ECLK_NUM_SHIFT)) & \
     EFTU_CMU_ECLK_n_NUM_ECLK_NUM_MASK)
/* ECLK_0_NUM Reg Mask */
#define EFTU_CMU_ECLK_n_NUM_MASK           0x000000FFu

/* ECLK_n_DEN Bit Fields */
#define EFTU_CMU_ECLK_n_DEN_ECLK_DEN_MASK  0xFFu
#define EFTU_CMU_ECLK_n_DEN_ECLK_DEN_SHIFT 0u
#define EFTU_CMU_ECLK_n_DEN_ECLK_DEN_WIDTH 8u
#define EFTU_CMU_ECLK_n_DEN_ECLK_DEN(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_ECLK_n_DEN_ECLK_DEN_SHIFT)) & \
     EFTU_CMU_ECLK_n_DEN_ECLK_DEN_MASK)
/* ECLK_0_DEN Reg Mask */
#define EFTU_CMU_ECLK_n_DEN_MASK                 0x000000FFu

/* CLK_CTRL Bit Fields */
#define EFTU_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_MASK  0x1u
#define EFTU_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_SHIFT 0u
#define EFTU_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK0_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_MASK  0x2u
#define EFTU_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_SHIFT 1u
#define EFTU_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK1_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_MASK  0x4u
#define EFTU_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_SHIFT 2u
#define EFTU_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK2_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_MASK  0x8u
#define EFTU_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_SHIFT 3u
#define EFTU_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK3_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_MASK  0x10u
#define EFTU_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_SHIFT 4u
#define EFTU_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK4_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_MASK  0x20u
#define EFTU_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_SHIFT 5u
#define EFTU_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK5_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_MASK  0x40u
#define EFTU_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_SHIFT 6u
#define EFTU_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK6_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_MASK  0x80u
#define EFTU_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_SHIFT 7u
#define EFTU_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK7_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_MASK)
#define EFTU_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_MASK  0x100u
#define EFTU_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_SHIFT 8u
#define EFTU_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_WIDTH 1u
#define EFTU_CMU_CLK_CTRL_CLK8_EXT_DIVIDER(x)                                \
    (((uint32)(((uint32)(x)) << EFTU_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_SHIFT)) & \
     EFTU_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_MASK)
/* CLK_CTRL Reg Mask */
#define EFTU_CMU_CLK_CTRL_MASK 0x000001FFu

/*!
 * @}
 */ /* end of group EFTU_CMU_Register_Masks */
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/** EFTU_CMU - Register Layout Typedef */
typedef struct
{

    __IO uint32 CLK_EN; /* Clock Enable Register, offset: 0x0 */
    __IO uint32 GCLK_NUM; /* Numerator for CMU Global Clock Resolution Generator Register, offset: 0x4 */
    __IO uint32 GCLK_DEN; /* Denominator for CMU Global Clock Resolution Generator Register, offset: 0x8 */
    __IO uint32 CLK_n_CTRL[EFTU_CMU_CLK_n_CTRL_COUNT]; /* Control for Clock Resolution Generator N
                                                          Register, offset: 0xc */
    struct
    {
        __IO uint32 NUM; /* Numerator for the External Clock Resolution Generator N Register,
                            offset: 0x2c */
        __IO uint32 DEN; /* Denominator for the External Clock Resolution Generator N Register,
                            offset: 0x30 */
    } ECLK[EFTU_CMU_ECLK_n_CTRL_COUNT];
    uint8       RESERVED_0[16];
    __IO uint32 CLK_CTRL; /* Control for Clock Resolution Generator Register, offset: 0x4C */

} EFTU_CMU_Type, *EFTU_CMU_MemMapPtr;
/*!
 * @}
 */ /* end of group EFTU_CMU_Peripheral_Access_Layer */
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef __cplusplus
}
#endif
#endif
