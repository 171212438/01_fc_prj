/**
*   @file    Fcpit_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Fcpit - module register and macro definitions.
*   @details Fcpit module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup Common
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FCPIT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef FCPIT_REG_H
#define FCPIT_REG_H

#ifdef __cplusplus
extern "C"{
#endif


/*===============================================================================================
*                                         INCLUDE FILES
===============================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/** Peripheral FCPIT max channel number */
#define MAX_FCPIT_CHANNEL_NUM                     (4u)

/** Peripheral FCPIT base address */
#define FCPIT0_BASE                               (0x4002E000u)
/** Peripheral FCPIT base pointer */
#define FCPIT0                                    ((FCPIT_Type *)FCPIT0_BASE)

/** Peripheral FCPIT base address */
#define FCPIT1_BASE                               (0x40437000u)
/** Peripheral FCPIT base pointer */
#define FCPIT1                                    ((FCPIT_Type *)FCPIT1_BASE)

#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F8MDQxxxxT1B))
/** Number of instances of the FCPIT module. */
#define FCPIT_INSTANCE_COUNT                     (2u)
#define FCPIT_BASE_ADDRS                         {FCPIT0_BASE,FCPIT1_BASE}
#define FCPIT_BASE_PTRS                          {FCPIT0,FCPIT1}

#elif ((DEVICE_SERIES == FC7240F2MDSxxxxT1A) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
       (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || \
       (DEVICE_SERIES == FC7300F4MDDxxxxT1C))
/** Number of instances of the FCPIT module. */
#define FCPIT_INSTANCE_COUNT                     (1u)
#define FCPIT_BASE_ADDRS                         {FCPIT0_BASE}
#define FCPIT_BASE_PTRS                          {FCPIT0}

#else
/* The device is currently not supported */
#endif

/* MCR Bit Fields */

#define FCPIT_MCR_DBG_EN_MASK          0x8u

#define FCPIT_MCR_DBG_EN_SHIFT         3u

#define FCPIT_MCR_DBG_EN_WIDTH         1u

#define FCPIT_MCR_DBG_EN(x)            (((uint32)(((uint32)(x))<<FCPIT_MCR_DBG_EN_SHIFT))&FCPIT_MCR_DBG_EN_MASK)

#define FCPIT_MCR_LPM_EN_MASK          0x4u

#define FCPIT_MCR_LPM_EN_SHIFT         2u

#define FCPIT_MCR_LPM_EN_WIDTH         1u

#define FCPIT_MCR_LPM_EN(x)            (((uint32)(((uint32)(x))<<FCPIT_MCR_LPM_EN_SHIFT))&FCPIT_MCR_LPM_EN_MASK)

#define FCPIT_MCR_SW_RST_MASK          0x2u

#define FCPIT_MCR_SW_RST_SHIFT         1u

#define FCPIT_MCR_SW_RST_WIDTH         1u

#define FCPIT_MCR_SW_RST(x)            (((uint32)(((uint32)(x))<<FCPIT_MCR_SW_RST_SHIFT))&FCPIT_MCR_SW_RST_MASK)

#define FCPIT_MCR_M_CEN_MASK           0x1u

#define FCPIT_MCR_M_CEN_SHIFT          0u

#define FCPIT_MCR_M_CEN_WIDTH          1u

#define FCPIT_MCR_M_CEN(x)             (((uint32)(((uint32)(x))<<FCPIT_MCR_M_CEN_SHIFT))&FCPIT_MCR_M_CEN_MASK)

/* MCR Reg Mask */

#define FCPIT_MCR_MASK                 0x0000000Fu



/* MSR Bit Fields */

#define FCPIT_MSR_TIF3_MASK            0x8u

#define FCPIT_MSR_TIF3_SHIFT           3u

#define FCPIT_MSR_TIF3_WIDTH           1u

#define FCPIT_MSR_TIF3(x)              (((uint32)(((uint32)(x))<<FCPIT_MSR_TIF3_SHIFT))&FCPIT_MSR_TIF3_MASK)

#define FCPIT_MSR_TIF2_MASK            0x4u

#define FCPIT_MSR_TIF2_SHIFT           2u

#define FCPIT_MSR_TIF2_WIDTH           1u

#define FCPIT_MSR_TIF2(x)              (((uint32)(((uint32)(x))<<FCPIT_MSR_TIF2_SHIFT))&FCPIT_MSR_TIF2_MASK)

#define FCPIT_MSR_TIF1_MASK            0x2u

#define FCPIT_MSR_TIF1_SHIFT           1u

#define FCPIT_MSR_TIF1_WIDTH           1u

#define FCPIT_MSR_TIF1(x)              (((uint32)(((uint32)(x))<<FCPIT_MSR_TIF1_SHIFT))&FCPIT_MSR_TIF1_MASK)

#define FCPIT_MSR_TIF0_MASK            0x1u

#define FCPIT_MSR_TIF0_SHIFT           0u

#define FCPIT_MSR_TIF0_WIDTH           1u

#define FCPIT_MSR_TIF0(x)              (((uint32)(((uint32)(x))<<FCPIT_MSR_TIF0_SHIFT))&FCPIT_MSR_TIF0_MASK)

/* MSR Reg Mask */

#define FCPIT_MSR_MASK                 0x0000000Fu



/* MIER Bit Fields */

#define FCPIT_MIER_TIE3_MASK           0x8u

#define FCPIT_MIER_TIE3_SHIFT          3u

#define FCPIT_MIER_TIE3_WIDTH          1u

#define FCPIT_MIER_TIE3(x)             (((uint32)(((uint32)(x))<<FCPIT_MIER_TIE3_SHIFT))&FCPIT_MIER_TIE3_MASK)

#define FCPIT_MIER_TIE2_MASK           0x4u

#define FCPIT_MIER_TIE2_SHIFT          2u

#define FCPIT_MIER_TIE2_WIDTH          1u

#define FCPIT_MIER_TIE2(x)             (((uint32)(((uint32)(x))<<FCPIT_MIER_TIE2_SHIFT))&FCPIT_MIER_TIE2_MASK)

#define FCPIT_MIER_TIE1_MASK           0x2u

#define FCPIT_MIER_TIE1_SHIFT          1u

#define FCPIT_MIER_TIE1_WIDTH          1u

#define FCPIT_MIER_TIE1(x)             (((uint32)(((uint32)(x))<<FCPIT_MIER_TIE1_SHIFT))&FCPIT_MIER_TIE1_MASK)

#define FCPIT_MIER_TIE0_MASK           0x1u

#define FCPIT_MIER_TIE0_SHIFT          0u

#define FCPIT_MIER_TIE0_WIDTH          1u

#define FCPIT_MIER_TIE0(x)             (((uint32)(((uint32)(x))<<FCPIT_MIER_TIE0_SHIFT))&FCPIT_MIER_TIE0_MASK)

/* MIER Reg Mask */

#define FCPIT_MIER_MASK                0x0000000Fu



/* SETTEN Bit Fields */

#define FCPIT_SETTEN_SET_T_EN_3_MASK   0x8u

#define FCPIT_SETTEN_SET_T_EN_3_SHIFT  3u

#define FCPIT_SETTEN_SET_T_EN_3_WIDTH  1u

#define FCPIT_SETTEN_SET_T_EN_3(x)     (((uint32)(((uint32)(x))<<FCPIT_SETTEN_SET_T_EN_3_SHIFT))&FCPIT_SETTEN_SET_T_EN_3_MASK)

#define FCPIT_SETTEN_SET_T_EN_2_MASK   0x4u

#define FCPIT_SETTEN_SET_T_EN_2_SHIFT  2u

#define FCPIT_SETTEN_SET_T_EN_2_WIDTH  1u

#define FCPIT_SETTEN_SET_T_EN_2(x)     (((uint32)(((uint32)(x))<<FCPIT_SETTEN_SET_T_EN_2_SHIFT))&FCPIT_SETTEN_SET_T_EN_2_MASK)

#define FCPIT_SETTEN_SET_T_EN_1_MASK   0x2u

#define FCPIT_SETTEN_SET_T_EN_1_SHIFT  1u

#define FCPIT_SETTEN_SET_T_EN_1_WIDTH  1u

#define FCPIT_SETTEN_SET_T_EN_1(x)     (((uint32)(((uint32)(x))<<FCPIT_SETTEN_SET_T_EN_1_SHIFT))&FCPIT_SETTEN_SET_T_EN_1_MASK)

#define FCPIT_SETTEN_SET_T_EN_0_MASK   0x1u

#define FCPIT_SETTEN_SET_T_EN_0_SHIFT  0u

#define FCPIT_SETTEN_SET_T_EN_0_WIDTH  1u

#define FCPIT_SETTEN_SET_T_EN_0(x)     (((uint32)(((uint32)(x))<<FCPIT_SETTEN_SET_T_EN_0_SHIFT))&FCPIT_SETTEN_SET_T_EN_0_MASK)

/* SETTEN Reg Mask */

#define FCPIT_SETTEN_MASK              0x0000000Fu



/* CLRTEN Bit Fields */

#define FCPIT_CLRTEN_CLR_T_EN_3_MASK   0x8u

#define FCPIT_CLRTEN_CLR_T_EN_3_SHIFT  3u

#define FCPIT_CLRTEN_CLR_T_EN_3_WIDTH  1u

#define FCPIT_CLRTEN_CLR_T_EN_3(x)     (((uint32)(((uint32)(x))<<FCPIT_CLRTEN_CLR_T_EN_3_SHIFT))&FCPIT_CLRTEN_CLR_T_EN_3_MASK)

#define FCPIT_CLRTEN_CLR_T_EN_2_MASK   0x4u

#define FCPIT_CLRTEN_CLR_T_EN_2_SHIFT  2u

#define FCPIT_CLRTEN_CLR_T_EN_2_WIDTH  1u

#define FCPIT_CLRTEN_CLR_T_EN_2(x)     (((uint32)(((uint32)(x))<<FCPIT_CLRTEN_CLR_T_EN_2_SHIFT))&FCPIT_CLRTEN_CLR_T_EN_2_MASK)

#define FCPIT_CLRTEN_CLR_T_EN_1_MASK   0x2u

#define FCPIT_CLRTEN_CLR_T_EN_1_SHIFT  1u

#define FCPIT_CLRTEN_CLR_T_EN_1_WIDTH  1u

#define FCPIT_CLRTEN_CLR_T_EN_1(x)     (((uint32)(((uint32)(x))<<FCPIT_CLRTEN_CLR_T_EN_1_SHIFT))&FCPIT_CLRTEN_CLR_T_EN_1_MASK)

#define FCPIT_CLRTEN_CLR_T_EN_0_MASK   0x1u

#define FCPIT_CLRTEN_CLR_T_EN_0_SHIFT  0u

#define FCPIT_CLRTEN_CLR_T_EN_0_WIDTH  1u

#define FCPIT_CLRTEN_CLR_T_EN_0(x)     (((uint32)(((uint32)(x))<<FCPIT_CLRTEN_CLR_T_EN_0_SHIFT))&FCPIT_CLRTEN_CLR_T_EN_0_MASK)

/* CLRTEN Reg Mask */

#define FCPIT_CLRTEN_MASK              0x0000000Fu



/* TVAL Bit Fields */

#define FCPIT_TVAL_TMR_VAL_MASK        0xFFu

#define FCPIT_TVAL_TMR_VAL_SHIFT       0u

#define FCPIT_TVAL_TMR_VAL_WIDTH       8u

#define FCPIT_TVAL_TMR_VAL(x)          (((uint32)(((uint32)(x))<<FCPIT_TVAL_TMR_VAL_SHIFT))&FCPIT_TVAL_TMR_VAL_MASK)

/* TVAL0 Reg Mask */

#define FCPIT_TVAL_MASK                0x000000FFu



/* CVAL Bit Fields */

#define FCPIT_CVAL_TMR_CUR_VAL_MASK    0xFFu

#define FCPIT_CVAL_TMR_CUR_VAL_SHIFT   0u

#define FCPIT_CVAL_TMR_CUR_VAL_WIDTH   8u

#define FCPIT_CVAL_TMR_CUR_VAL(x)      (((uint32)(((uint32)(x))<<FCPIT_CVAL_TMR_CUR_VAL_SHIFT))&FCPIT_CVAL_TMR_CUR_VAL_MASK)

/* CVAL0 Reg Mask */

#define FCPIT_CVAL_MASK                0x000000FFu



/* TCTRL Bit Fields */

#define FCPIT_TCTRL_TRG_SEL_MASK       0xF000000u

#define FCPIT_TCTRL_TRG_SEL_SHIFT      24u

#define FCPIT_TCTRL_TRG_SEL_WIDTH      4u

#define FCPIT_TCTRL_TRG_SEL(x)         (((uint32)(((uint32)(x))<<FCPIT_TCTRL_TRG_SEL_SHIFT))&FCPIT_TCTRL_TRG_SEL_MASK)

#define FCPIT_TCTRL_TRG_SRC_MASK       0x800000u

#define FCPIT_TCTRL_TRG_SRC_SHIFT      23u

#define FCPIT_TCTRL_TRG_SRC_WIDTH      1u

#define FCPIT_TCTRL_TRG_SRC(x)         (((uint32)(((uint32)(x))<<FCPIT_TCTRL_TRG_SRC_SHIFT))&FCPIT_TCTRL_TRG_SRC_MASK)

#define FCPIT_TCTRL_TROT_MASK          0x40000u

#define FCPIT_TCTRL_TROT_SHIFT         18u

#define FCPIT_TCTRL_TROT_WIDTH         1u

#define FCPIT_TCTRL_TROT(x)            (((uint32)(((uint32)(x))<<FCPIT_TCTRL_TROT_SHIFT))&FCPIT_TCTRL_TROT_MASK)

#define FCPIT_TCTRL_TSOI_MASK          0x20000u

#define FCPIT_TCTRL_TSOI_SHIFT         17u

#define FCPIT_TCTRL_TSOI_WIDTH         1u

#define FCPIT_TCTRL_TSOI(x)            (((uint32)(((uint32)(x))<<FCPIT_TCTRL_TSOI_SHIFT))&FCPIT_TCTRL_TSOI_MASK)

#define FCPIT_TCTRL_TSOT_MASK          0x10000u

#define FCPIT_TCTRL_TSOT_SHIFT         16u

#define FCPIT_TCTRL_TSOT_WIDTH         1u

#define FCPIT_TCTRL_TSOT(x)            (((uint32)(((uint32)(x))<<FCPIT_TCTRL_TSOT_SHIFT))&FCPIT_TCTRL_TSOT_MASK)

#define FCPIT_TCTRL_MODE_MASK          0xCu

#define FCPIT_TCTRL_MODE_SHIFT         2u

#define FCPIT_TCTRL_MODE_WIDTH         2u

#define FCPIT_TCTRL_MODE(x)            (((uint32)(((uint32)(x))<<FCPIT_TCTRL_MODE_SHIFT))&FCPIT_TCTRL_MODE_MASK)

#define FCPIT_TCTRL_CHAIN_MASK         0x2u

#define FCPIT_TCTRL_CHAIN_SHIFT        1u

#define FCPIT_TCTRL_CHAIN_WIDTH        1u

#define FCPIT_TCTRL_CHAIN(x)           (((uint32)(((uint32)(x))<<FCPIT_TCTRL_CHAIN_SHIFT))&FCPIT_TCTRL_CHAIN_MASK)

#define FCPIT_TCTRL_T_EN_MASK          0x1u

#define FCPIT_TCTRL_T_EN_SHIFT         0u

#define FCPIT_TCTRL_T_EN_WIDTH         1u

#define FCPIT_TCTRL_T_EN(x)            (((uint32)(((uint32)(x))<<FCPIT_TCTRL_T_EN_SHIFT))&FCPIT_TCTRL_T_EN_MASK)

/* TCTRL0 Reg Mask */

#define FCPIT_TCTRL_MASK               0x0F87000Fu

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This type will be used when the related macros are defined */
/** FCPIT - Register Layout Typedef */
typedef struct {



       uint8  RESERVED_0[8];

  __IO uint32 MCR                           ; /* Module Control Register, offset: 0x8 */

  __IO uint32 MSR                           ; /* Module Status Register, offset: 0xC */

  __IO uint32 MIER                          ; /* Module Interrupt Enable Register, offset: 0x10 */

  __IO uint32 SETTEN                        ; /* Set Timer Enable Register, offset: 0x14 */

  __O  uint32 CLRTEN                        ; /* Clear Timer Enable Register, offset: 0x18 */

  struct
  {

		   uint8  RESERVED_1[4];

	  __IO uint32 TVAL                      ; /* Timer Value Register, offset: 0x20 0x30 0x40 0x50*/

	  __IO uint32 CVAL;

	  __IO uint32 TCTRL                     ; /* Timer Control Register, offset: 0x28 0x38 0x48 0x58*/
  }CONTROLS[MAX_FCPIT_CHANNEL_NUM];

} FCPIT_Type;
/* PRQA S 1535 -- */
/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*FCPIT_REG_H*/

/** @} */
