/**
 *   @file    FcFMC_Regs.h
 *   @version 1.5.1
 *
 *   @brief   Include FMC registers file
 *
 *   @addtogroup Pfls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pfls
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
*   1.4.0       09/29/2025    QXW0054       N/A          Pfls Initial Version
==================================================================================================*/
#ifndef FCFMC_REGS_H
#define FCFMC_REGS_H
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"

#ifndef DEVICE_TYPE
#error "Please include Common_Cfg.h"

#else
/* ----------------------------------------------------------------------------

   -- FMC Peripheral Access Layer

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup FMC_Peripheral_Access_Layer FMC Peripheral Access Layer

 * @{

 */

/** FMC - Size of Registers Arrays */

/** FMC - Register Layout Typedef */

#define FMC_FB_FPELCK_COUNT   6

#define FMC_FB_CPELCK_COUNT   8

typedef struct
{

    __IO uint32 FAPC0; /* Flash Access Port Control 0, offset: 0x0 */

    __IO uint32 FAPC1; /* Flash Access Port Control 1, offset: 0x4 */
    __IO uint32 FAPC2; /* Flash Access Port Control 2, offset: 0x8 */

    uint8 RESERVED_0[4];

    __IO uint32 FEEC; /* Flash ECC Error Control, offset: 0x10 */

    uint8 RESERVED_1[748];

    __IO uint32 FPESA_L; /* Flash Program Erase Start Address Logical, offset: 0x300 */

    __I uint32 FPESA_P; /* Flash Program Erase Start Address Physical, offset: 0x304 */

    uint8       RESERVED_4[16];
    __IO uint32 FB_FPELCK6; /* Flash Block n Fine Program Erase Lock Register, offset: 0x318 */
    __IO uint32 FB_FPELCK7; /* Flash Block n Fine Program Erase Lock Register, offset: 0x31C */
    __IO uint32 FB_FPELCK8; /* Flash Block n Fine Program Erase Lock Register, offset: 0x320 */
    __IO uint32 FB_FPELCK9; /* Flash Block n Fine Program Erase Lock Register, offset: 0x324 */
    uint8       RESERVED_5[20];
    __IO uint32 FB_FPELCK10; /* Flash Block n Fine Program Erase Lock Register, offset: 0x33C */

    __IO uint32
        FB_FPELCK[FMC_FB_FPELCK_COUNT]; /* Flash Block n Fine Program Erase Lock, offset: 0x340 */

    __IO uint32 FN_FPELCK; /* Flash NVR Fine Program Erase Lock, offset: 0x358 */

    __IO uint32
        FB_CPELCK[FMC_FB_CPELCK_COUNT]; /* Flash Block n Coarse Program Erase Lock, offset: 0x35c */

} FMC_Type, *FMC_MemMapPtr;

/* FMC - Peripheral instance base addresses */

/** Peripheral FMC base address */

#define FMC_BASE              (0x4001e000u)

/** Peripheral FMC base pointer */

#define FMC                   ((FMC_Type *)FMC_BASE)

/* ----------------------------------------------------------------------------

   -- FMC Register Masks

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup FMC_Register_Masks FMC Register Masks

 * @{

 */

/* FAPC0 Bit Fields */

#define FMC_FAPC0_DBPEN_MASK  0x20u

#define FMC_FAPC0_DBPEN_SHIFT 5u

#define FMC_FAPC0_DBPEN_WIDTH 1u

#define FMC_FAPC0_DBPEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC0_DBPEN_SHIFT)) & FMC_FAPC0_DBPEN_MASK)

#define FMC_FAPC0_CBPEN_MASK  0x10u

#define FMC_FAPC0_CBPEN_SHIFT 4u

#define FMC_FAPC0_CBPEN_WIDTH 1u

#define FMC_FAPC0_CBPEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC0_CBPEN_SHIFT)) & FMC_FAPC0_CBPEN_MASK)

#define FMC_FAPC0_DBBEN_MASK  0x2u

#define FMC_FAPC0_DBBEN_SHIFT 1u

#define FMC_FAPC0_DBBEN_WIDTH 1u

#define FMC_FAPC0_DBBEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC0_DBBEN_SHIFT)) & FMC_FAPC0_DBBEN_MASK)

#define FMC_FAPC0_CBBEN_MASK  0x1u

#define FMC_FAPC0_CBBEN_SHIFT 0u

#define FMC_FAPC0_CBBEN_WIDTH 1u

#define FMC_FAPC0_CBBEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC0_CBBEN_SHIFT)) & FMC_FAPC0_CBBEN_MASK)

/* FAPC0 Reg Mask */

#define FMC_FAPC0_MASK        0x00000033u

/* FAPC1 Bit Fields */

#define FMC_FAPC1_DBPEN_MASK  0x20u

#define FMC_FAPC1_DBPEN_SHIFT 5u

#define FMC_FAPC1_DBPEN_WIDTH 1u

#define FMC_FAPC1_DBPEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC1_DBPEN_SHIFT)) & FMC_FAPC1_DBPEN_MASK)

#define FMC_FAPC1_CBPEN_MASK  0x10u

#define FMC_FAPC1_CBPEN_SHIFT 4u

#define FMC_FAPC1_CBPEN_WIDTH 1u

#define FMC_FAPC1_CBPEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC1_CBPEN_SHIFT)) & FMC_FAPC1_CBPEN_MASK)

#define FMC_FAPC1_DBBEN_MASK  0x2u

#define FMC_FAPC1_DBBEN_SHIFT 1u

#define FMC_FAPC1_DBBEN_WIDTH 1u

#define FMC_FAPC1_DBBEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC1_DBBEN_SHIFT)) & FMC_FAPC1_DBBEN_MASK)

#define FMC_FAPC1_CBBEN_MASK  0x1u

#define FMC_FAPC1_CBBEN_SHIFT 0u

#define FMC_FAPC1_CBBEN_WIDTH 1u

#define FMC_FAPC1_CBBEN(x) \
    (((uint32)(((uint32)(x)) << FMC_FAPC1_CBBEN_SHIFT)) & FMC_FAPC1_CBBEN_MASK)

/* FAPC1 Reg Mask */

#define FMC_FAPC1_MASK          0x00000033u

/* FEEC Bit Fields */

#define FMC_FEEC_CEIE_SET_MASK  0xF0000000u

#define FMC_FEEC_CEIE_SET_SHIFT 28u

#define FMC_FEEC_CEIE_SET_WIDTH 4u

#define FMC_FEEC_CEIE_SET(x) \
    (((uint32)(((uint32)(x)) << FMC_FEEC_CEIE_SET_SHIFT)) & FMC_FEEC_CEIE_SET_MASK)

#define FMC_FEEC_EIE_SET_MASK  0xF000000u

#define FMC_FEEC_EIE_SET_SHIFT 24u

#define FMC_FEEC_EIE_SET_WIDTH 4u

#define FMC_FEEC_EIE_SET(x) \
    (((uint32)(((uint32)(x)) << FMC_FEEC_EIE_SET_SHIFT)) & FMC_FEEC_EIE_SET_MASK)

#define FMC_FEEC_EDATAC_POS2_MASK  0xF00000u

#define FMC_FEEC_EDATAC_POS2_SHIFT 20u

#define FMC_FEEC_EDATAC_POS2_WIDTH 4u

#define FMC_FEEC_EDATAC_POS2(x) \
    (((uint32)(((uint32)(x)) << FMC_FEEC_EDATAC_POS2_SHIFT)) & FMC_FEEC_EDATAC_POS2_MASK)

#define FMC_FEEC_EDATAC_POS1_MASK  0xF0000u

#define FMC_FEEC_EDATAC_POS1_SHIFT 16u

#define FMC_FEEC_EDATAC_POS1_WIDTH 4u

#define FMC_FEEC_EDATAC_POS1(x) \
    (((uint32)(((uint32)(x)) << FMC_FEEC_EDATAC_POS1_SHIFT)) & FMC_FEEC_EDATAC_POS1_MASK)

#define FMC_FEEC_DDBEE_MASK      0x80u

#define FMC_FEEC_DDBEE_SHIFT     7u

#define FMC_FEEC_DDBEE_WIDTH     1u

#define FMC_FEEC_DDBEE(x)        (((uint32)(((uint32)(x)) << FMC_FEEC_DDBEE_SHIFT)) & FMC_FEEC_DDBEE_MASK)

#define FMC_FEEC_DES_MASK        0x1u

#define FMC_FEEC_DES_SHIFT       0u

#define FMC_FEEC_DES_WIDTH       1u

#define FMC_FEEC_DES(x)          (((uint32)(((uint32)(x)) << FMC_FEEC_DES_SHIFT)) & FMC_FEEC_DES_MASK)

/* FEEC Reg Mask */

#define FMC_FEEC_MASK            0xFFFF0081u

/* FPESA_L Bit Fields */

#define FMC_FPESA_L_PESA_L_MASK  0xFFFFFFFFu

#define FMC_FPESA_L_PESA_L_SHIFT 0u

#define FMC_FPESA_L_PESA_L_WIDTH 32u

#define FMC_FPESA_L_PESA_L(x) \
    (((uint32)(((uint32)(x)) << FMC_FPESA_L_PESA_L_SHIFT)) & FMC_FPESA_L_PESA_L_MASK)

/* FPESA_L Reg Mask */

#define FMC_FPESA_L_MASK         0xFFFFFFFFu

/* FPESA_P Bit Fields */

#define FMC_FPESA_P_PESA_P_MASK  0xFFFFFFFFu

#define FMC_FPESA_P_PESA_P_SHIFT 0u

#define FMC_FPESA_P_PESA_P_WIDTH 32u

#define FMC_FPESA_P_PESA_P(x) \
    (((uint32)(((uint32)(x)) << FMC_FPESA_P_PESA_P_SHIFT)) & FMC_FPESA_P_PESA_P_MASK)

/* FPESA_P Reg Mask */

#define FMC_FPESA_P_MASK           0xFFFFFFFFu

/* FB_FPELCK Bit Fields */

#define FMC_FB_FPELCK_FPELCK_MASK  0xFFFFFFFFu

#define FMC_FB_FPELCK_FPELCK_SHIFT 0u

#define FMC_FB_FPELCK_FPELCK_WIDTH 32u

#define FMC_FB_FPELCK_FPELCK(x) \
    (((uint32)(((uint32)(x)) << FMC_FB_FPELCK_FPELCK_SHIFT)) & FMC_FB_FPELCK_FPELCK_MASK)

/* FB_FPELCK0 Reg Mask */

#define FMC_FB_FPELCK_MASK         0xFFFFFFFFu

/* FN_FPELCK Bit Fields */

#define FMC_FN_FPELCK_FPELCK_MASK  0x1u

#define FMC_FN_FPELCK_FPELCK_SHIFT 0u

#define FMC_FN_FPELCK_FPELCK_WIDTH 1u

#define FMC_FN_FPELCK_FPELCK(x) \
    (((uint32)(((uint32)(x)) << FMC_FN_FPELCK_FPELCK_SHIFT)) & FMC_FN_FPELCK_FPELCK_MASK)

/* FN_FPELCK Reg Mask */

#define FMC_FN_FPELCK_MASK         0x00000001u

/* FB_CPELCK Bit Fields */

#define FMC_FB_CPELCK_CPELCK_MASK  0xFFFFFFFFu

#define FMC_FB_CPELCK_CPELCK_SHIFT 0u

#define FMC_FB_CPELCK_CPELCK_WIDTH 32u

#define FMC_FB_CPELCK_CPELCK(x) \
    (((uint32)(((uint32)(x)) << FMC_FB_CPELCK_CPELCK_SHIFT)) & FMC_FB_CPELCK_CPELCK_MASK)

/* FB_CPELCK0 Reg Mask */

#define FMC_FB_CPELCK_MASK 0xFFFFFFFFu

#endif /* Define DEVICE_TYPE */

/*!

 * @}

 */ /* end of group FMC_Register_Masks */

/*!

 * @}

 */ /* end of group FMC_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif
#endif /* _FCFMC_REGS_H_ */

/** @} */
