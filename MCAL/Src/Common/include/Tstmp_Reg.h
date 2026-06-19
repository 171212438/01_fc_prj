/**
*   @file    Tstmp_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Tstmp - module register and macro definitions.
*   @details Tstmp module registers, and macrodefinitions used to manipulate the module registers.
*
*   @addtogroup Common
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Tstmp
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef TSTMP_REG_H
#define TSTMP_REG_H

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
#define MAX_MOD_NUMBER  4U


/* TSTMP - Peripheral instance base addresses */

/** Peripheral TSTMP0 base address */

#define TSTMP0_BASE                              (0x4002c000u)

/** Peripheral TSTMP0 base pointer */

#define TSTMP0                                   ((TSTMP_Type *)TSTMP0_BASE)

/** Peripheral TSTMP1 base address */

#define TSTMP1_BASE                              (0x4002d000u)

/** Peripheral TSTMP1 base pointer */

#define TSTMP1                                   ((TSTMP_Type *)TSTMP1_BASE)
#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F8MDTxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
/** Peripheral TSTMP2 base address */

#define TSTMP2_BASE                              (0x40438000u)

/** Peripheral TSTMP2 base pointer */

#define TSTMP2                                   ((TSTMP_Type *)TSTMP2_BASE)
#endif
#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F8MDTxxxxT1B))
/** Peripheral TSTMP3 base address */

#define TSTMP3_BASE                              (0x40439000u)

/** Peripheral TSTMP3 base pointer */

#define TSTMP3                                   ((TSTMP_Type *)TSTMP3_BASE)
#endif
#if (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
/** Peripheral TSTMP4 base address */

#define TSTMP4_BASE                              (0x4043A000u)

/** Peripheral TSTMP4 base pointer */

#define TSTMP4                                   ((TSTMP_Type *)TSTMP4_BASE)
#endif

#if ((DEVICE_SERIES == FC7300F4MDSxxxxT1B) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
/** Number of instances of the TSTMP module. */
#define TSTMP_INSTANCE_COUNT                     (2u)

/** Array initializer of TSTMP peripheral base addresses */

#define TSTMP_BASE_ADDRS                         {TSTMP0_BASE, TSTMP1_BASE}

/** Array initializer of TSTMP peripheral base pointers */

#define TSTMP_BASE_PTRS                          {TSTMP0, TSTMP1}
#elif ((DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
       (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
/** Number of instances of the TSTMP module. */
#define TSTMP_INSTANCE_COUNT                     (3u)

/** Array initializer of TSTMP peripheral base addresses */

#define TSTMP_BASE_ADDRS                         {TSTMP0_BASE, TSTMP1_BASE, TSTMP2_BASE}

/** Array initializer of TSTMP peripheral base pointers */

#define TSTMP_BASE_PTRS                          {TSTMP0, TSTMP1, TSTMP2}
#elif (DEVICE_SERIES == FC7300F8MDTxxxxT1B)
/** Number of instances of the TSTMP module. */
#define TSTMP_INSTANCE_COUNT                     (4u)

/** Array initializer of TSTMP peripheral base addresses */

#define TSTMP_BASE_ADDRS                         {TSTMP0_BASE, TSTMP1_BASE, TSTMP2_BASE, TSTMP3_BASE}

/** Array initializer of TSTMP peripheral base pointers */

#define TSTMP_BASE_PTRS                          {TSTMP0, TSTMP1, TSTMP2, TSTMP3}
#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
/** Number of instances of the TSTMP module. */
#define TSTMP_INSTANCE_COUNT                     (5u)

/** Array initializer of TSTMP peripheral base addresses */

#define TSTMP_BASE_ADDRS                         {TSTMP0_BASE, TSTMP1_BASE, TSTMP2_BASE, TSTMP3_BASE TSTMP4_BASE}

/** Array initializer of TSTMP peripheral base pointers */

#define TSTMP_BASE_PTRS                          {TSTMP0, TSTMP1, TSTMP2, TSTMP3, TSTMP4}
#endif

/* VALL Bit Fields */

#define TSTMP_VALL_TVALL_MASK          0xFFFFFFFFu

#define TSTMP_VALL_TVALL_SHIFT         0u

#define TSTMP_VALL_TVALL_WIDTH         32u

#define TSTMP_VALL_TVALL(x)            (((uint32)(((uint32)(x))<<TSTMP_VALL_TVALL_SHIFT))&TSTMP_VALL_TVALL_MASK)

/* VALL Reg Mask */

#define TSTMP_VALL_MASK                0xFFFFFFFFu



/* VALH Bit Fields */

#define TSTMP_VALH_TVALH_MASK          0xFFFFFFu

#define TSTMP_VALH_TVALH_SHIFT         0u

#define TSTMP_VALH_TVALH_WIDTH         24u

#define TSTMP_VALH_TVALH(x)            (((uint32)(((uint32)(x))<<TSTMP_VALH_TVALH_SHIFT))&TSTMP_VALH_TVALH_MASK)

/* VALH Reg Mask */

#define TSTMP_VALH_MASK                0x00FFFFFFu



/* MOD_INTEN Bit Fields */
#if ((DEVICE_SERIES == FC7240F2MDSxxxxT1A) || (DEVICE_SERIES == FC7300F8MDQxxxxT1B) ||\
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
#define TSTMP_MOD_INTEN_MOD3_CLK_MASK  0x8000000u

#define TSTMP_MOD_INTEN_MOD3_CLK_SHIFT 27u

#define TSTMP_MOD_INTEN_MOD3_CLK_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD3_CLK(x)    (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD3_CLK_SHIFT))&TSTMP_MOD_INTEN_MOD3_CLK_MASK)

#define TSTMP_MOD_INTEN_MOD2_CLK_MASK  0x4000000u

#define TSTMP_MOD_INTEN_MOD2_CLK_SHIFT 26u

#define TSTMP_MOD_INTEN_MOD2_CLK_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD2_CLK(x)    (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD2_CLK_SHIFT))&TSTMP_MOD_INTEN_MOD2_CLK_MASK)

#define TSTMP_MOD_INTEN_MOD1_CLK_MASK  0x2000000u

#define TSTMP_MOD_INTEN_MOD1_CLK_SHIFT 25u

#define TSTMP_MOD_INTEN_MOD1_CLK_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD1_CLK(x)    (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD1_CLK_SHIFT))&TSTMP_MOD_INTEN_MOD1_CLK_MASK)

#define TSTMP_MOD_INTEN_MOD0_CLK_MASK  0x1000000u

#define TSTMP_MOD_INTEN_MOD0_CLK_SHIFT 24u

#define TSTMP_MOD_INTEN_MOD0_CLK_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD0_CLK(x)    (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD0_CLK_SHIFT))&TSTMP_MOD_INTEN_MOD0_CLK_MASK)
#endif
#define TSTMP_MOD_INTEN_MOD3_ENABLE_MASK 0x80000u

#define TSTMP_MOD_INTEN_MOD3_ENABLE_SHIFT 19u

#define TSTMP_MOD_INTEN_MOD3_ENABLE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD3_ENABLE(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD3_ENABLE_SHIFT))&TSTMP_MOD_INTEN_MOD3_ENABLE_MASK)

#define TSTMP_MOD_INTEN_MOD2_ENABLE_MASK 0x40000u

#define TSTMP_MOD_INTEN_MOD2_ENABLE_SHIFT 18u

#define TSTMP_MOD_INTEN_MOD2_ENABLE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD2_ENABLE(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD2_ENABLE_SHIFT))&TSTMP_MOD_INTEN_MOD2_ENABLE_MASK)

#define TSTMP_MOD_INTEN_MOD1_ENABLE_MASK 0x20000u

#define TSTMP_MOD_INTEN_MOD1_ENABLE_SHIFT 17u

#define TSTMP_MOD_INTEN_MOD1_ENABLE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD1_ENABLE(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD1_ENABLE_SHIFT))&TSTMP_MOD_INTEN_MOD1_ENABLE_MASK)

#define TSTMP_MOD_INTEN_MOD0_ENABLE_MASK 0x10000u

#define TSTMP_MOD_INTEN_MOD0_ENABLE_SHIFT 16u

#define TSTMP_MOD_INTEN_MOD0_ENABLE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD0_ENABLE(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD0_ENABLE_SHIFT))&TSTMP_MOD_INTEN_MOD0_ENABLE_MASK)

#define TSTMP_MOD_INTEN_MOD3_MODE_MASK 0x800u

#define TSTMP_MOD_INTEN_MOD3_MODE_SHIFT 11u

#define TSTMP_MOD_INTEN_MOD3_MODE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD3_MODE(x)   (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD3_MODE_SHIFT))&TSTMP_MOD_INTEN_MOD3_MODE_MASK)

#define TSTMP_MOD_INTEN_MOD2_MODE_MASK 0x400u

#define TSTMP_MOD_INTEN_MOD2_MODE_SHIFT 10u

#define TSTMP_MOD_INTEN_MOD2_MODE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD2_MODE(x)   (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD2_MODE_SHIFT))&TSTMP_MOD_INTEN_MOD2_MODE_MASK)

#define TSTMP_MOD_INTEN_MOD1_MODE_MASK 0x200u

#define TSTMP_MOD_INTEN_MOD1_MODE_SHIFT 9u

#define TSTMP_MOD_INTEN_MOD1_MODE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD1_MODE(x)   (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD1_MODE_SHIFT))&TSTMP_MOD_INTEN_MOD1_MODE_MASK)

#define TSTMP_MOD_INTEN_MOD0_MODE_MASK 0x100u

#define TSTMP_MOD_INTEN_MOD0_MODE_SHIFT 8u

#define TSTMP_MOD_INTEN_MOD0_MODE_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD0_MODE(x)   (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD0_MODE_SHIFT))&TSTMP_MOD_INTEN_MOD0_MODE_MASK)

#define TSTMP_MOD_INTEN_MOD3_INTEN_MASK 0x8u

#define TSTMP_MOD_INTEN_MOD3_INTEN_SHIFT 3u

#define TSTMP_MOD_INTEN_MOD3_INTEN_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD3_INTEN(x)  (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD3_INTEN_SHIFT))&TSTMP_MOD_INTEN_MOD3_INTEN_MASK)

#define TSTMP_MOD_INTEN_MOD2_INTEN_MASK 0x4u

#define TSTMP_MOD_INTEN_MOD2_INTEN_SHIFT 2u

#define TSTMP_MOD_INTEN_MOD2_INTEN_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD2_INTEN(x)  (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD2_INTEN_SHIFT))&TSTMP_MOD_INTEN_MOD2_INTEN_MASK)

#define TSTMP_MOD_INTEN_MOD1_INTEN_MASK 0x2u

#define TSTMP_MOD_INTEN_MOD1_INTEN_SHIFT 1u

#define TSTMP_MOD_INTEN_MOD1_INTEN_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD1_INTEN(x)  (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD1_INTEN_SHIFT))&TSTMP_MOD_INTEN_MOD1_INTEN_MASK)

#define TSTMP_MOD_INTEN_MOD0_INTEN_MASK 0x1u

#define TSTMP_MOD_INTEN_MOD0_INTEN_SHIFT 0u

#define TSTMP_MOD_INTEN_MOD0_INTEN_WIDTH 1u

#define TSTMP_MOD_INTEN_MOD0_INTEN(x)  (((uint32)(((uint32)(x))<<TSTMP_MOD_INTEN_MOD0_INTEN_SHIFT))&TSTMP_MOD_INTEN_MOD0_INTEN_MASK)

/* MOD_INTEN Reg Mask */

#define TSTMP_MOD_INTEN_MASK           0x000F0F0Fu



/* MOD_STATUS Bit Fields */

#define TSTMP_MOD_STATUS_MOD3_MATCH_MASK 0x8u

#define TSTMP_MOD_STATUS_MOD3_MATCH_SHIFT 3u

#define TSTMP_MOD_STATUS_MOD3_MATCH_WIDTH 1u

#define TSTMP_MOD_STATUS_MOD3_MATCH(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_STATUS_MOD3_MATCH_SHIFT))&TSTMP_MOD_STATUS_MOD3_MATCH_MASK)

#define TSTMP_MOD_STATUS_MOD2_MATCH_MASK 0x4u

#define TSTMP_MOD_STATUS_MOD2_MATCH_SHIFT 2u

#define TSTMP_MOD_STATUS_MOD2_MATCH_WIDTH 1u

#define TSTMP_MOD_STATUS_MOD2_MATCH(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_STATUS_MOD2_MATCH_SHIFT))&TSTMP_MOD_STATUS_MOD2_MATCH_MASK)

#define TSTMP_MOD_STATUS_MOD1_MATCH_MASK 0x2u

#define TSTMP_MOD_STATUS_MOD1_MATCH_SHIFT 1u

#define TSTMP_MOD_STATUS_MOD1_MATCH_WIDTH 1u

#define TSTMP_MOD_STATUS_MOD1_MATCH(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_STATUS_MOD1_MATCH_SHIFT))&TSTMP_MOD_STATUS_MOD1_MATCH_MASK)

#define TSTMP_MOD_STATUS_MOD0_MATCH_MASK 0x1u

#define TSTMP_MOD_STATUS_MOD0_MATCH_SHIFT 0u

#define TSTMP_MOD_STATUS_MOD0_MATCH_WIDTH 1u

#define TSTMP_MOD_STATUS_MOD0_MATCH(x) (((uint32)(((uint32)(x))<<TSTMP_MOD_STATUS_MOD0_MATCH_SHIFT))&TSTMP_MOD_STATUS_MOD0_MATCH_MASK)

/* MOD_STATUS Reg Mask */

#define TSTMP_MOD_STATUS_MASK          0x0000000Fu



/* MOD0_SETVAL Bit Fields */

#define TSTMP_MOD0_SETVAL_MOD0_SETVAL_MASK 0xFFFFFFFFu

#define TSTMP_MOD0_SETVAL_MOD0_SETVAL_SHIFT 0u

#define TSTMP_MOD0_SETVAL_MOD0_SETVAL_WIDTH 32u

#define TSTMP_MOD0_SETVAL_MOD0_SETVAL(x) (((uint32)(((uint32)(x))<<TSTMP_MOD0_SETVAL_MOD0_SETVAL_SHIFT))&TSTMP_MOD0_SETVAL_MOD0_SETVAL_MASK)

/* MOD0_SETVAL Reg Mask */

#define TSTMP_MOD0_SETVAL_MASK         0xFFFFFFFFu



/* MOD1_SETVAL Bit Fields */

#define TSTMP_MOD1_SETVAL_MOD1_SETVAL_MASK 0xFFFFFFFFu

#define TSTMP_MOD1_SETVAL_MOD1_SETVAL_SHIFT 0u

#define TSTMP_MOD1_SETVAL_MOD1_SETVAL_WIDTH 32u

#define TSTMP_MOD1_SETVAL_MOD1_SETVAL(x) (((uint32)(((uint32)(x))<<TSTMP_MOD1_SETVAL_MOD1_SETVAL_SHIFT))&TSTMP_MOD1_SETVAL_MOD1_SETVAL_MASK)

/* MOD1_SETVAL Reg Mask */

#define TSTMP_MOD1_SETVAL_MASK         0xFFFFFFFFu



/* MOD2_SETVAL Bit Fields */

#define TSTMP_MOD2_SETVAL_MOD2_SETVAL_MASK 0xFFFFFFFFu

#define TSTMP_MOD2_SETVAL_MOD2_SETVAL_SHIFT 0u

#define TSTMP_MOD2_SETVAL_MOD2_SETVAL_WIDTH 32u

#define TSTMP_MOD2_SETVAL_MOD2_SETVAL(x) (((uint32)(((uint32)(x))<<TSTMP_MOD2_SETVAL_MOD2_SETVAL_SHIFT))&TSTMP_MOD2_SETVAL_MOD2_SETVAL_MASK)

/* MOD2_SETVAL Reg Mask */

#define TSTMP_MOD2_SETVAL_MASK         0xFFFFFFFFu



/* MOD3_SETVAL Bit Fields */

#define TSTMP_MOD3_SETVAL_MOD3_SETVAL_MASK 0xFFFFFFFFu

#define TSTMP_MOD3_SETVAL_MOD3_SETVAL_SHIFT 0u

#define TSTMP_MOD3_SETVAL_MOD3_SETVAL_WIDTH 32u

#define TSTMP_MOD3_SETVAL_MOD3_SETVAL(x) (((uint32)(((uint32)(x))<<TSTMP_MOD3_SETVAL_MOD3_SETVAL_SHIFT))&TSTMP_MOD3_SETVAL_MOD3_SETVAL_MASK)

/* MOD3_SETVAL Reg Mask */

#define TSTMP_MOD3_SETVAL_MASK         0xFFFFFFFFu

/* TSTMP0_CLK_CFG Bit Fields in SMC */
#define SMC_TSTMP0_CLK_CFG_EN_MASK     0x80000000u

#define SMC_TSTMP0_CLK_CFG_EN_SHIFT    31u

#define SMC_TSTMP0_CLK_CFG_EN_WIDTH    1u

#define SMC_TSTMP0_CLK_CFG_EN(x)       (((uint32)(((uint32)(x))<<SMC_TSTMP0_CLK_CFG_EN_SHIFT))&SMC_TSTMP0_CLK_CFG_EN_MASK)

#define SMC_TSTMP0_CLK_CFG_DIV_MASK    0x70000000u

#define SMC_TSTMP0_CLK_CFG_DIV_SHIFT   28u

#define SMC_TSTMP0_CLK_CFG_DIV_WIDTH   3u

#define SMC_TSTMP0_CLK_CFG_DIV(x)      (((uint32)(((uint32)(x))<<SMC_TSTMP0_CLK_CFG_DIV_SHIFT))&SMC_TSTMP0_CLK_CFG_DIV_MASK)

#define SMC_TSTMP0_CLK_CFG_SEL_MASK    0x3000000u

#define SMC_TSTMP0_CLK_CFG_SEL_SHIFT   24u

#define SMC_TSTMP0_CLK_CFG_SEL_WIDTH   2u

#define SMC_TSTMP0_CLK_CFG_SEL(x)      (((uint32)(((uint32)(x))<<SMC_TSTMP0_CLK_CFG_SEL_SHIFT))&SMC_TSTMP0_CLK_CFG_SEL_MASK)

#define SMC_TSTMP0_CLK_CFG_LOCK_MASK   0x1u

#define SMC_TSTMP0_CLK_CFG_LOCK_SHIFT  0u

#define SMC_TSTMP0_CLK_CFG_LOCK_WIDTH  1u

#define SMC_TSTMP0_CLK_CFG_LOCK(x)     (((uint32)(((uint32)(x))<<SMC_TSTMP0_CLK_CFG_LOCK_SHIFT))&SMC_TSTMP0_CLK_CFG_LOCK_MASK)

/* TSTMP0_CLK_CFG Reg Mask in SMC*/
#define SMC_TSTMP0_CLK_CFG_MASK        0xF3000001u
/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/** TSTMP - Register Layout Typedef */
typedef struct {
  __I  uint32 VALL                          ; /* Low Value, offset: 0x0 */

  __I  uint32 VALH                          ; /* High Value, offset: 0x4 */

  __IO uint32 MOD_INTEN                     ; /* Modulate Interrupt Enable, offset: 0x8 */

  __IO uint32 MOD_STATUS                    ; /* Modulate Status, offset: 0xC */

  __IO uint32 MODn_SETVAL[MAX_MOD_NUMBER]   ; /* MOD0_SETVAL, offset: 0x10 + n*4h */
} TSTMP_Type, *TSTMP_MemMapPtr;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*AONTIMER_REG_H*/

/** @} */
