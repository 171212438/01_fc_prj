/**
*   @file    Mcu_Cmu_Regs.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Cmu module register and macro definitions.
*   @details Cmu module registers, and macro definitions used to manipulate the module registers.
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
#ifndef MCU_CMU_REGS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_CMU_REGS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif
#include "Std_Types.h"
/* ----------------------------------------------------------------------------

   -- CMU Peripheral Access Layer

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup CMU_Peripheral_Access_Layer CMU Peripheral Access Layer

 * @{

 */



/** CMU - Size of Registers Arrays */



/** CMU - Register Layout Typedef */



typedef struct {



       uint8  RESERVED_0[8];

  __IO uint32 CTRL                          ; /* Control, offset: 0x8 */

       uint8  RESERVED_1[4];

  __IO uint32 MIN                           ; /* Minimum threshold, offset: 0x10 */

  __IO uint32 MAX                           ; /* Maximum threshold, offset: 0x14 */

  __IO uint32 REF_WINDOW                    ; /* Reference Window, offset: 0x18 */

  __I  uint32 MON_CNT                       ; /* Monitor counter, offset: 0x1C */

  __IO uint32 ST                            ; /* Status, offset: 0x20 */

  __IO uint32 PERIOD                        ; /* Period monitor mode configuration, offset: 0x24 */



} CMU_Type;



/** Number of instances of the CMU module. */

#define CMU_INSTANCE_COUNT                       (5u)



/* CMU - Peripheral instance base addresses */

/** Peripheral CMU0 base address */

#define CMU0_BASE                                (0x40031000u)

/** Peripheral CMU0 base pointer */

#define CMU0                                     ((CMU_Type *)CMU0_BASE)

/** Peripheral CMU1 base address */

#define CMU1_BASE                                (0x40032000u)

/** Peripheral CMU1 base pointer */

#define CMU1                                     ((CMU_Type *)CMU1_BASE)

/** Peripheral CMU2 base address */

#define CMU2_BASE                                (0x40033000u)

/** Peripheral CMU2 base pointer */

#define CMU2                                     ((CMU_Type *)CMU2_BASE)

/** Peripheral CMU3 base address */

#define CMU3_BASE                                (0x40034000u)

/** Peripheral CMU3 base pointer */

#define CMU3                                     ((CMU_Type *)CMU3_BASE)

/** Peripheral CMU4 base address */

#define CMU4_BASE                                (0x40035000u)

/** Peripheral CMU4 base pointer */

#define CMU4                                     ((CMU_Type *)CMU4_BASE)

/** Array initializer of CMU peripheral base addresses */

#define CMU_BASE_ADDRS                           {CMU0_BASE, CMU1_BASE, CMU2_BASE, CMU3_BASE, CMU4_BASE}

/** Array initializer of CMU peripheral base pointers */

#define CMU_BASE_PTRS                            {CMU0, CMU1, CMU2, CMU3, CMU4}


/* ----------------------------------------------------------------------------

   -- CMU Register Masks

   ---------------------------------------------------------------------------- */



/*!

 * @addtogroup CMU_Register_Masks CMU Register Masks

 * @{

 */



/* CTRL Bit Fields */

#define CMU_CTRL_REF_DIV_MASK          0x70000u

#define CMU_CTRL_REF_DIV_SHIFT         16u

#define CMU_CTRL_REF_DIV_WIDTH         3u

#define CMU_CTRL_REF_DIV(x)            (((uint32)(((uint32)(x))<<CMU_CTRL_REF_DIV_SHIFT))&CMU_CTRL_REF_DIV_MASK)

#define CMU_CTRL_IRQ_EN_MASK           0x40u

#define CMU_CTRL_IRQ_EN_SHIFT          6u

#define CMU_CTRL_IRQ_EN_WIDTH          1u

#define CMU_CTRL_IRQ_EN(x)             (((uint32)(((uint32)(x))<<CMU_CTRL_IRQ_EN_SHIFT))&CMU_CTRL_IRQ_EN_MASK)

#define CMU_CTRL_LP_EN_MASK            0x10u

#define CMU_CTRL_LP_EN_SHIFT           4u

#define CMU_CTRL_LP_EN_WIDTH           1u

#define CMU_CTRL_LP_EN(x)              (((uint32)(((uint32)(x))<<CMU_CTRL_LP_EN_SHIFT))&CMU_CTRL_LP_EN_MASK)

#define CMU_CTRL_STOP_EN_MASK          0x8u

#define CMU_CTRL_STOP_EN_SHIFT         3u

#define CMU_CTRL_STOP_EN_WIDTH         1u

#define CMU_CTRL_STOP_EN(x)            (((uint32)(((uint32)(x))<<CMU_CTRL_STOP_EN_SHIFT))&CMU_CTRL_STOP_EN_MASK)

#define CMU_CTRL_ENABLE_MASK           0x1u

/* CTRL Reg Mask */

#define CMU_CTRL_MASK                  0x0007007Bu

/* ST Bit Fields */

#define CMU_ST_LOC_MASK                0x8000u

#define CMU_ST_MIS_MASK                0x100u

/* ST Reg Mask */

#define CMU_ST_MASK                    0x00008100u



/* PERIOD Bit Fields */

#define CMU_PERIOD_WINDOW_MASK         0xF0000u

#define CMU_PERIOD_WINDOW_SHIFT        16u

#define CMU_PERIOD_WINDOW_WIDTH        4u

#define CMU_PERIOD_WINDOW(x)           (((uint32)(((uint32)(x))<<CMU_PERIOD_WINDOW_SHIFT))&CMU_PERIOD_WINDOW_MASK)

#define CMU_PERIOD_EN_MASK             0x1u

#define CMU_PERIOD_EN_SHIFT            0u

#define CMU_PERIOD_EN_WIDTH            1u

#define CMU_PERIOD_EN(x)               (((uint32)(((uint32)(x))<<CMU_PERIOD_EN_SHIFT))&CMU_PERIOD_EN_MASK)

/* PERIOD Reg Mask */

#define CMU_PERIOD_MASK                0x000F0001u





/*!

 * @}

 */ /* end of group CMU_Register_Masks */



/*!

 * @}

 */ /* end of group CMU_Peripheral_Access_Layer */





#ifdef __cplusplus
}
#endif
#endif
/** @}*/

