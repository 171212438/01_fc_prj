/**
*   @file    Mcu_Wku_Regs.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Wku module register and macro definitions.
*   @details Wku module registers, and macro definitions used to manipulate the module registers.
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
#ifndef MCU_WKU_REGS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_WKU_REGS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcu_CfgPlatformDef.h"

/* =============================================================================
   -- WKU Peripheral Access Layer
   ============================================================================= */
/*!

 * @addtogroup WKU_Peripheral_Access_Layer WKU Peripheral Access Layer

 * @{

 */



/** WKU - Size of Registers Arrays */



/** WKU - Register Layout Typedef */



typedef struct {
#if (MCU_CFG_WKU_REG_7300_SUPPORT == STD_ON)
    uint8  RESERVED_0[8];
#elif (MCU_CFG_WKU_REG_7240_SUPPORT == STD_ON)
    uint8  RESERVED_0[4];

    __IO uint32 MDC                           ; /* Module Delay Configuration Register0, offset: 0x04 */
#elif ( (MCU_CFG_WKU_REG_7300GT_SUPPORT == STD_ON) || (MCU_CFG_WKU_REG_7300GT_LITE_SUPPORT == STD_ON) )
    __IO uint32 SWW                           ; /* Software Wakeup Register, offset: 0x00 */

    __IO uint32 MDC                           ; /* Module Delay Configuration Register0, offset: 0x04 */
#else
    /* More platform... */
#endif /* (MCU_CFG_WKU_REG_7300_SUPPORT == STD_ON) */
    __IO uint32 MWER0                         ; /* Module Wakeup Enable Register 0, offset: 0x08 */

    __IO uint32 MWER1                         ; /* Module Wakeup Enable Register 1, offset: 0x0C */

    __IO uint32 MWER2                         ; /* Module Wakeup Enable Register 2, offset: 0x10 */
} WKU_Type;



/** Number of instances of the WKU module. */

#define WKU_INSTANCE_COUNT                       (1u)



/* WKU - Peripheral instance base addresses */

/** Peripheral WKU base address */

#define WKU_BASE                                 (0x4003f000u)

/** Peripheral WKU base pointer */

#define WKU                                      ((WKU_Type *)WKU_BASE)



/** Array initializer of WKU peripheral base pointers */

#define WKU_BASE_PTRS                            {WKU}

/*=============================================================================
   -- WKU Register Masks
   ============================================================================= */
#if ( MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON )
/* MDC Bit Fields */

#define WKU_MDC_DLYEN_MASK             0x80000000u

#define WKU_MDC_DLYEN_SHIFT            31u

#define WKU_MDC_DLYEN_WIDTH            1u

#define WKU_MDC_DLYEN(x)               (((uint32)(((uint32)(x))<<WKU_MDC_DLYEN_SHIFT))&WKU_MDC_DLYEN_MASK)

#define WKU_MDC_DELAYTIME_MASK         0x7u

#define WKU_MDC_DELAYTIME_SHIFT        0u

#define WKU_MDC_DELAYTIME_WIDTH        3u

#define WKU_MDC_DELAYTIME(x)           (((uint32)(((uint32)(x))<<WKU_MDC_DELAYTIME_SHIFT))&WKU_MDC_DELAYTIME_MASK)

/* MDC Reg Mask */

#define WKU_MDC_MASK                   0x80000007u
#endif /* (MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON) */

/*!

 * @}

 */ /* end of group WKU_Peripheral_Access_Layer */



#ifdef __cplusplus
}
#endif
#endif

/** @}*/

