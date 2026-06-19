/**
 *   @file    Wdg_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Wdg - register layer header file.
 *   @details watchdog register header file.
 *
 *   @addtogroup WDG
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : WDG
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       14/07/2023    QXW0074       N/A          FC7300 WDG first release
*   0.2.0       09/27/2023    QXW0074       N/A          Add multicore support
*   0.3.0       10/20/2023    QXW0074       N/A          Optimization code
*   0.4.0       11/17/2023    QXW0074       N/A          Optimization Plugins
*   0.5.0       03/16/2024    QXW0074       N/A          Fix some compilation issues and
*                                                        Changed some functions to inline
*   0.6.0       03/22/2024    QXW0074       N/A          Add FC7240 platform support
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by
user without hardware timer and optimization code
==================================================================================================*/

#ifndef _WDG_Reg_H_
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be
 * declared Reason: It is common definition in h files */
#define _WDG_Reg_H_
/* PRQA S 0602 -- */
/* PRQA S 0603 -- */
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

/*!

 * @addtogroup WDOG_Peripheral_Access_Layer WDOG Peripheral Access Layer

 * @{

 */

/** WDOG - Size of Registers Arrays */

/** WDOG - Register Layout Typedef */

typedef struct
{

    __IO uint32 CS; /* Watchdog Control and Status Register, offset: 0x0 */

    __IO uint32 COUNTER; /* Watchdog Counter Register, offset: 0x4 */

    __IO uint32 TIMEOUT; /* Watchdog Timeout Value Register, offset: 0x8 */

    __IO uint32 WINDOW; /* Watchdog Window Register, offset: 0xC */
#if (DEVICE_SERIES == FC7300F4MDSxxxxT1C)
    __IO uint32 FASTCFG; /* Fast Configuration Register, offset: 0x10 */
#endif

} WDOG_Type;

/* WDOG - Peripheral instance base addresses */

/** Peripheral WDOG0 base address */

#define WDOG0_BASE (0x40022000u)

/** Peripheral WDOG0 base pointer */

#define WDOG0      ((WDOG_Type *)WDOG0_BASE)
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || \
     (DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
/** Peripheral WDOG1 base address */

#define WDOG1_BASE (0x40433000u)

/** Peripheral WDOG1 base pointer */

#define WDOG1      ((WDOG_Type *)WDOG1_BASE)
#endif
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F8MDQxxxxT1B))
/** Peripheral WDOG2 base address */

#define WDOG2_BASE (0x40434000u)

/** Peripheral WDOG2 base pointer */

#define WDOG2      ((WDOG_Type *)WDOG2_BASE)
#endif
#if (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
/** Peripheral WDOG3 base address */

#define WDOG3_BASE (0x40435000u)

/** Peripheral WDOG3 base pointer */

#define WDOG3      ((WDOG_Type *)WDOG3_BASE)
#endif

#if (DEVICE_SERIES == FC7300F4MDSxxxxT1B)
/** Number of instances of the WDOG module. */

#define WDOG_INSTANCE_COUNT (1u)

/** Array initializer of WDOG peripheral base addresses */

#define WDOG_BASE_ADDRS     { WDOG0_BASE }

/** Array initializer of WDOG peripheral base pointers */

#define WDOG_BASE_PTRS      { WDOG0 }
#elif ((DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
       (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
/** Number of instances of the WDOG module. */

#define WDOG_INSTANCE_COUNT (2u)

/** Array initializer of WDOG peripheral base addresses */

#define WDOG_BASE_ADDRS     { WDOG0_BASE, WDOG1_BASE }

/** Array initializer of WDOG peripheral base pointers */

#define WDOG_BASE_PTRS      { WDOG0, WDOG1 }
#elif (DEVICE_SERIES == FC7300F8MDTxxxxT1B)
/** Number of instances of the WDOG module. */

#define WDOG_INSTANCE_COUNT (3u)

/** Array initializer of WDOG peripheral base addresses */

#define WDOG_BASE_ADDRS     { WDOG0_BASE, WDOG1_BASE, WDOG2_BASE }

/** Array initializer of WDOG peripheral base pointers */

#define WDOG_BASE_PTRS      { WDOG0, WDOG1, WDOG2 }
#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
/** Number of instances of the WDOG module. */

#define WDOG_INSTANCE_COUNT (4u)

/** Array initializer of WDOG peripheral base addresses */

#define WDOG_BASE_ADDRS     { WDOG0_BASE, WDOG1_BASE, WDOG2_BASE, WDOG3_BASE }

/** Array initializer of WDOG peripheral base pointers */

#define WDOG_BASE_PTRS      { WDOG0, WDOG1, WDOG2, WDOG3 }
#endif

/* ----------------------------------------------------------------------------

   -- WDOG Register Masks

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup WDOG_Register_Masks WDOG Register Masks

 * @{

 */

/* CS Bit Fields */

#define WDOG_CS_DLY_CNT_MSB_MASK  0x30000u

#define WDOG_CS_DLY_CNT_MSB_SHIFT 16u

#define WDOG_CS_DLY_CNT_MSB_WIDTH 2u

#define WDOG_CS_DLY_CNT_MSB(x) \
    (((uint32)(((uint32)(x)) << WDOG_CS_DLY_CNT_MSB_SHIFT)) & WDOG_CS_DLY_CNT_MSB_MASK)

#define WDOG_CS_WIN_MASK        0x8000u

#define WDOG_CS_WIN_SHIFT       15u

#define WDOG_CS_WIN_WIDTH       1u

#define WDOG_CS_WIN(x)          (((uint32)(((uint32)(x)) << WDOG_CS_WIN_SHIFT)) & WDOG_CS_WIN_MASK)

#define WDOG_CS_FLAG_MASK       0x4000u

#define WDOG_CS_FLAG_SHIFT      14u

#define WDOG_CS_FLAG_WIDTH      1u

#define WDOG_CS_FLAG(x)         (((uint32)(((uint32)(x)) << WDOG_CS_FLAG_SHIFT)) & WDOG_CS_FLAG_MASK)

#define WDOG_CS_PRESCALER_MASK  0x1000u

#define WDOG_CS_PRESCALER_SHIFT 12u

#define WDOG_CS_PRESCALER_WIDTH 1u

#define WDOG_CS_PRESCALER(x) \
    (((uint32)(((uint32)(x)) << WDOG_CS_PRESCALER_SHIFT)) & WDOG_CS_PRESCALER_MASK)

#define WDOG_CS_ULK_STAT_MASK  0x800u

#define WDOG_CS_ULK_STAT_SHIFT 11u

#define WDOG_CS_ULK_STAT_WIDTH 1u

#define WDOG_CS_ULK_STAT(x) \
    (((uint32)(((uint32)(x)) << WDOG_CS_ULK_STAT_SHIFT)) & WDOG_CS_ULK_STAT_MASK)

#define WDOG_CS_RECFG_STAT_MASK  0x400u

#define WDOG_CS_RECFG_STAT_SHIFT 10u

#define WDOG_CS_RECFG_STAT_WIDTH 1u

#define WDOG_CS_RECFG_STAT(x) \
    (((uint32)(((uint32)(x)) << WDOG_CS_RECFG_STAT_SHIFT)) & WDOG_CS_RECFG_STAT_MASK)

#define WDOG_CS_CLK_SEL_MASK  0x300u

#define WDOG_CS_CLK_SEL_SHIFT 8u

#define WDOG_CS_CLK_SEL_WIDTH 2u

#define WDOG_CS_CLK_SEL(x) \
    (((uint32)(((uint32)(x)) << WDOG_CS_CLK_SEL_SHIFT)) & WDOG_CS_CLK_SEL_MASK)

#define WDOG_CS_ENABLE_MASK     0x80u

#define WDOG_CS_ENABLE_SHIFT    7u

#define WDOG_CS_ENABLE_WIDTH    1u

#define WDOG_CS_ENABLE(x)       (((uint32)(((uint32)(x)) << WDOG_CS_ENABLE_SHIFT)) & WDOG_CS_ENABLE_MASK)

#define WDOG_CS_INT_MASK        0x40u

#define WDOG_CS_INT_SHIFT       6u

#define WDOG_CS_INT_WIDTH       1u

#define WDOG_CS_INT(x)          (((uint32)(((uint32)(x)) << WDOG_CS_INT_SHIFT)) & WDOG_CS_INT_MASK)

#define WDOG_CS_UPDATE_MASK     0x20u

#define WDOG_CS_UPDATE_SHIFT    5u

#define WDOG_CS_UPDATE_WIDTH    1u

#define WDOG_CS_UPDATE(x)       (((uint32)(((uint32)(x)) << WDOG_CS_UPDATE_SHIFT)) & WDOG_CS_UPDATE_MASK)

#define WDOG_CS_TST_MASK        0x18u

#define WDOG_CS_TST_SHIFT       3u

#define WDOG_CS_TST_WIDTH       2u

#define WDOG_CS_TST(x)          (((uint32)(((uint32)(x)) << WDOG_CS_TST_SHIFT)) & WDOG_CS_TST_MASK)

#define WDOG_CS_DBG_MASK        0x4u

#define WDOG_CS_DBG_SHIFT       2u

#define WDOG_CS_DBG_WIDTH       1u

#define WDOG_CS_DBG(x)          (((uint32)(((uint32)(x)) << WDOG_CS_DBG_SHIFT)) & WDOG_CS_DBG_MASK)

#define WDOG_CS_WAIT_MASK       0x2u

#define WDOG_CS_WAIT_SHIFT      1u

#define WDOG_CS_WAIT_WIDTH      1u

#define WDOG_CS_WAIT(x)         (((uint32)(((uint32)(x)) << WDOG_CS_WAIT_SHIFT)) & WDOG_CS_WAIT_MASK)

#define WDOG_CS_STOP_MASK       0x1u

#define WDOG_CS_STOP_SHIFT      0u

#define WDOG_CS_STOP_WIDTH      1u

#define WDOG_CS_STOP(x)         (((uint32)(((uint32)(x)) << WDOG_CS_STOP_SHIFT)) & WDOG_CS_STOP_MASK)

/* CS Reg Mask */

#define WDOG_CS_MASK            0x0000DFFFu

/* COUNTER Bit Fields */

#define WDOG_COUNTER_CNTH_MASK  0xFF00u

#define WDOG_COUNTER_CNTH_SHIFT 8u

#define WDOG_COUNTER_CNTH_WIDTH 8u

#define WDOG_COUNTER_CNTH(x) \
    (((uint32)(((uint32)(x)) << WDOG_COUNTER_CNTH_SHIFT)) & WDOG_COUNTER_CNTH_MASK)

#define WDOG_COUNTER_CNTL_MASK  0xFFu

#define WDOG_COUNTER_CNTL_SHIFT 0u

#define WDOG_COUNTER_CNTL_WIDTH 8u

#define WDOG_COUNTER_CNTL(x) \
    (((uint32)(((uint32)(x)) << WDOG_COUNTER_CNTL_SHIFT)) & WDOG_COUNTER_CNTL_MASK)

/* COUNTER Reg Mask */

#define WDOG_COUNTER_MASK               0x0000FFFFu

/* TIMEOUT Bit Fields */

#define WDOG_TIMEOUT_TIMEOUT_VALH_MASK  0xFF00u

#define WDOG_TIMEOUT_TIMEOUT_VALH_SHIFT 8u

#define WDOG_TIMEOUT_TIMEOUT_VALH_WIDTH 8u

#define WDOG_TIMEOUT_TIMEOUT_VALH(x) \
    (((uint32)(((uint32)(x)) << WDOG_TIMEOUT_TIMEOUT_VALH_SHIFT)) & WDOG_TIMEOUT_TIMEOUT_VALH_MASK)

#define WDOG_TIMEOUT_TIMEOUT_VALL_MASK  0xFFu

#define WDOG_TIMEOUT_TIMEOUT_VALL_SHIFT 0u

#define WDOG_TIMEOUT_TIMEOUT_VALL_WIDTH 8u

#define WDOG_TIMEOUT_TIMEOUT_VALL(x) \
    (((uint32)(((uint32)(x)) << WDOG_TIMEOUT_TIMEOUT_VALL_SHIFT)) & WDOG_TIMEOUT_TIMEOUT_VALL_MASK)

/* TIMEOUT Reg Mask */

#define WDOG_TIMEOUT_MASK             0x0000FFFFu

/* WINDOW Bit Fields */

#define WDOG_WINDOW_WINDOW_HIGH_MASK  0xFF00u

#define WDOG_WINDOW_WINDOW_HIGH_SHIFT 8u

#define WDOG_WINDOW_WINDOW_HIGH_WIDTH 8u

#define WDOG_WINDOW_WINDOW_HIGH(x) \
    (((uint32)(((uint32)(x)) << WDOG_WINDOW_WINDOW_HIGH_SHIFT)) & WDOG_WINDOW_WINDOW_HIGH_MASK)

#define WDOG_WINDOW_WINDOW_LOW_MASK  0xFFu

#define WDOG_WINDOW_WINDOW_LOW_SHIFT 0u

#define WDOG_WINDOW_WINDOW_LOW_WIDTH 8u

#define WDOG_WINDOW_WINDOW_LOW(x) \
    (((uint32)(((uint32)(x)) << WDOG_WINDOW_WINDOW_LOW_SHIFT)) & WDOG_WINDOW_WINDOW_LOW_MASK)

/* WINDOW Reg Mask */

#define WDOG_WINDOW_MASK 0x0000FFFFu

#if (DEVICE_SERIES == FC7300F4MDSxxxxT1C)
/* FASTCFG Bit Fields */

#define WDOG_FASTCFG_FASTCFG_MASK  0xFFFFFFFFu

#define WDOG_FASTCFG_FASTCFG_SHIFT 0u

#define WDOG_FASTCFG_FASTCFG_WIDTH 32u

#define WDOG_FASTCFG_FASTCFG(x) \
    (((uint32)(((uint32)(x)) << WDOG_FASTCFG_FASTCFG_SHIFT)) & WDOG_FASTCFG_FASTCFG_MASK)

/* FASTCFG Reg Mask */

#define WDOG_FASTCFG_MASK 0xFFFFFFFFu
#endif

/*!

 * @}

 */ /* end of group WDOG_Register_Masks */

/*!

 * @}

 */ /* end of group WDOG_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif
#endif

/** @} */
