/**
*   @file    DmaMux_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CDD DMA - Direct Memory Access(DMA) MUX functions
*   @details Contains functions for accessing DMA MUX from the Dma MUX driver perspective
*
*   @addtogroup DMA
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DMA
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
*   0.1.0       07/06/2023    QXW0099       N/A          DMA Initial Version
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Second Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       10/11/2023    QXW0099       N/A          Update version
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/

#ifndef DMAMUX_REGS_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define DMAMUX_REGS_H_
/* PRQA S 603, 602 -- */
#ifdef __cplusplus
extern "C" {
#endif

#include "Common_Cfg.h"

/* ----------------------------------------------------------------------------

   -- DMAMUX Peripheral Access Layer

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup DMAMUX_Peripheral_Access_Layer DMAMUX Peripheral Access Layer

 * @{

 */

/** DMAMUX - Size of Registers Arrays */

/** DMAMUX - Register Layout Typedef */

#if (DEVICE_SERIES != FC7240F2MDSxxxxT1A)
#  define DMAMUX_CHCFG_COUNT 32
#else
#  define DMAMUX_CHCFG_COUNT 16
#endif

typedef struct
{



    __IO uint8  CHCFG[DMAMUX_CHCFG_COUNT]     ; /* Channel N Configuration register, offset: 0x0 */

    __IO uint8  CHTRG                         ; /* Channel N Trigger register, offset: 0x10 for fc7240, 0x20 for fc7300 */


} DmaMux_Type;

/* DMAMUX - Peripheral instance base addresses */

/** Peripheral DMAMUX0 base address */

#define DMAMUX0_BASE                             (0x4000a000u)

/** Peripheral DMAMUX0 base pointer */

#define DMAMUX0                                  ((DmaMux_Type *)DMAMUX0_BASE)

#if (DEVICE_SERIES == FC7240F2MDSxxxxT1A) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
    (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C)

/** Array initializer of DMAMUX peripheral base addresses */

#  define DMAMUX_BASE_ADDRS                        {DMAMUX0_BASE}

/** Array initializer of DMAMUX peripheral base pointers */

#  define DMAMUX_BASE_PTRS                         {DMAMUX0}

#else

/** Peripheral DMAMUX1 base address */

#  define DMAMUX1_BASE                             (0x4040a000u)

/** Peripheral DMAMUX1 base pointer */

#  define DMAMUX1                                  ((DmaMux_Type *)DMAMUX1_BASE)

/** Array initializer of DMAMUX peripheral base addresses */

#  define DMAMUX_BASE_ADDRS                        {DMAMUX0_BASE, DMAMUX1_BASE}

/** Array initializer of DMAMUX peripheral base pointers */

#  define DMAMUX_BASE_PTRS                         {DMAMUX0, DMAMUX1}

#endif

/* ----------------------------------------------------------------------------

   -- DMAMUX Register Masks

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup DMAMUX_Register_Masks DMAMUX Register Masks

 * @{

 */


/* CHCFG Bit Fields */

#define DMAMUX_CHCFG_ENBL_MASK         0x80u

#define DMAMUX_CHCFG_ENBL_SHIFT        7u

#define DMAMUX_CHCFG_ENBL_WIDTH        1u

#define DMAMUX_CHCFG_ENBL(x)           (((uint8)(((uint8)(x))<<DMAMUX_CHCFG_ENBL_SHIFT))&DMAMUX_CHCFG_ENBL_MASK)

#define DMAMUX_CHCFG_SOURCE_MASK       0x7Fu

#define DMAMUX_CHCFG_SOURCE_SHIFT      0u

#define DMAMUX_CHCFG_SOURCE_WIDTH      7u

#define DMAMUX_CHCFG_SOURCE(x)         (((uint8)(((uint8)(x))<<DMAMUX_CHCFG_SOURCE_SHIFT))&DMAMUX_CHCFG_SOURCE_MASK)

/* CHCFG Reg Mask */

#define DMAMUX_CHCFG_MASK              0xFFu

/* CHTRG Bit Fields */

#define DMAMUX_CHTRG_TRIG_MASK        0x1u

#define DMAMUX_CHTRG_TRIG_SHIFT       0u

#define DMAMUX_CHTRG_TRIG_WIDTH       1u

#define DMAMUX_CHTRG_TRIG(x)          (((uint8)(((uint8)(x))<<DMAMUX_CHTRG_TRIG_SHIFT))&DMAMUX_CHTRG_TRIG_MASK)

/* CHTRG Reg Mask */

#define DMAMUX_CHTRG_MASK              0x0Fu

/*!

 * @}

 */ /* end of group DMAMUX_Register_Masks */

/*!

 * @}

 */ /* end of group DMAMUX_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif
#endif
