/**
*   @file    Gpio_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpio - module register and macro definitions.
*   @details Gpio module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup Common
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPIO
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
*   0.2.0       14/07/2023    QXW0071       N/A          DIO Initial Version
==================================================================================================*/
#ifndef GPIO_REG_H
#define GPIO_REG_H

#ifdef __cplusplus
extern "C" {
#endif

/*===============================================================================================
*                                         INCLUDE FILES
===============================================================================================*/
#include "Std_Types.h"

/*===============================================================================================
*                                           CONSTANTS
===============================================================================================*/

#define DIO_CHANNEL_MASK_U8                     ((uint8)0x1F)
#define DIO_PORTID_SHIFT_U8                     ((uint8)5UL)

/*===============================================================================================
*                                       DEFINES AND MACROS
===============================================================================================*/

/**
@brief  GPIO
@details FC7300 System Memory Map
*/
#define GPIO_BASEADDR              ((uint32)0x41000000)

/**compute out whitch port(A~E) and channel(0~31) the given channel (0~153) belong to **/
#define GPIO_PORT_U32(channel)              ((uint32)((uint32)(channel)>>DIO_PORTID_SHIFT_U8))
#define GPIO_CHANNEL_U32(channel)           ((uint32)((uint32)(channel)&DIO_CHANNEL_MASK_U8))


/** Number of instances of the GPIO module. */

#define GPIO_INSTANCE_COUNT                      (9u)


/* GPIO - Peripheral instance base addresses */

/** Peripheral GPIOA base address */

#define GPIOA_BASE                               (0x41000000u)

/** Peripheral GPIOA base pointer */

#define GPIOA                                    ((GPIO_Type *)GPIOA_BASE)

/** Peripheral GPIOB base address */

#define GPIOB_BASE                               (0x41000040u)

/** Peripheral GPIOB base pointer */

#define GPIOB                                    ((GPIO_Type *)GPIOB_BASE)

/** Peripheral GPIOC base address */

#define GPIOC_BASE                               (0x41000080u)

/** Peripheral GPIOC base pointer */

#define GPIOC                                    ((GPIO_Type *)GPIOC_BASE)

/** Peripheral GPIOD base address */

#define GPIOD_BASE                               (0x410000C0u)

/** Peripheral GPIOD base pointer */

#define GPIOD                                    ((GPIO_Type *)GPIOD_BASE)

/** Peripheral GPIOE base address */

#define GPIOE_BASE                               (0x41000100u)

/** Peripheral GPIOE base pointer */

#define GPIOE                                    ((GPIO_Type *)GPIOE_BASE)

/** Peripheral GPIOF base address */

#define GPIOF_BASE                               (0x41000140u)

/** Peripheral GPIOF base pointer */

#define GPIOF                                    ((GPIO_Type *)GPIOF_BASE)

/** Peripheral GPIOG base address */

#define GPIOG_BASE                               (0x41000180u)

/** Peripheral GPIOG base pointer */

#define GPIOG                                    ((GPIO_Type *)GPIOG_BASE)

/** Peripheral GPIOH base address */

#define GPIOH_BASE                               (0x410001C0u)

/** Peripheral GPIOH base pointer */

#define GPIOH                                    ((GPIO_Type *)GPIOH_BASE)

/** Peripheral GPIOI base address */

#define GPIOI_BASE                               (0x41000200u)

/** Peripheral GPIOI base pointer */

#define GPIOI                                    ((GPIO_Type *)GPIOI_BASE)

/** Array initializer of GPIO peripheral base addresses */

#define GPIO_BASE_ADDRS                          {GPIOA_BASE, GPIOB_BASE, GPIOC_BASE, GPIOD_BASE, GPIOE_BASE, GPIOF_BASE, GPIOG_BASE, GPIOH_BASE, GPIOI_BASE}

/** Array initializer of GPIO peripheral base pointers */

#define GPIO_BASE_PTRS                           {GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF, GPIOG, GPIOH, GPIOI}


/** mask that indicate the channel is NO.X(0~31) pin in a port**/
#define PIN_ONE_BIT_MASK_U32(channel)           ((uint32)((uint32)1<<GPIO_CHANNEL_U32(channel)))



/* ----------------------------------------------------------------------------

   -- GPIO Register Masks

   ---------------------------------------------------------------------------- */


/* PDOR Bit Fields */

#define GPIO_PDOR_PDO_MASK             0xFFFFFFFFu

#define GPIO_PDOR_PDO_SHIFT            0u

#define GPIO_PDOR_PDO_WIDTH            32u

#define GPIO_PDOR_PDO(x)               (((uint32)(((uint32)(x))<<GPIO_PDOR_PDO_SHIFT))&GPIO_PDOR_PDO_MASK)

/* PDOR Reg Mask */

#define GPIO_PDOR_MASK                 0xFFFFFFFFu



/* PSOR Bit Fields */

#define GPIO_PSOR_PSO_MASK             0xFFFFFFFFu

#define GPIO_PSOR_PSO_SHIFT            0u

#define GPIO_PSOR_PSO_WIDTH            32u

#define GPIO_PSOR_PSO(x)               (((uint32)(((uint32)(x))<<GPIO_PSOR_PSO_SHIFT))&GPIO_PSOR_PSO_MASK)

/* PSOR Reg Mask */

#define GPIO_PSOR_MASK                 0xFFFFFFFFu



/* PCOR Bit Fields */

#define GPIO_PCOR_PCO_MASK             0xFFFFFFFFu

#define GPIO_PCOR_PCO_SHIFT            0u

#define GPIO_PCOR_PCO_WIDTH            32u

#define GPIO_PCOR_PCO(x)               (((uint32)(((uint32)(x))<<GPIO_PCOR_PCO_SHIFT))&GPIO_PCOR_PCO_MASK)

/* PCOR Reg Mask */

#define GPIO_PCOR_MASK                 0xFFFFFFFFu



/* PTOR Bit Fields */

#define GPIO_PTOR_PTO_MASK             0xFFFFFFFFu

#define GPIO_PTOR_PTO_SHIFT            0u

#define GPIO_PTOR_PTO_WIDTH            32u

#define GPIO_PTOR_PTO(x)               (((uint32)(((uint32)(x))<<GPIO_PTOR_PTO_SHIFT))&GPIO_PTOR_PTO_MASK)

/* PTOR Reg Mask */

#define GPIO_PTOR_MASK                 0xFFFFFFFFu



/* PDIR Bit Fields */

#define GPIO_PDIR_PDI_MASK             0xFFFFFFFFu

#define GPIO_PDIR_PDI_SHIFT            0u

#define GPIO_PDIR_PDI_WIDTH            32u

#define GPIO_PDIR_PDI(x)               (((uint32)(((uint32)(x))<<GPIO_PDIR_PDI_SHIFT))&GPIO_PDIR_PDI_MASK)

/* PDIR Reg Mask */

#define GPIO_PDIR_MASK                 0xFFFFFFFFu



/* PDDR Bit Fields */

#define GPIO_PDDR_PDD_MASK             0xFFFFFFFFu

#define GPIO_PDDR_PDD_SHIFT            0u

#define GPIO_PDDR_PDD_WIDTH            32u

#define GPIO_PDDR_PDD(x)               (((uint32)(((uint32)(x))<<GPIO_PDDR_PDD_SHIFT))&GPIO_PDDR_PDD_MASK)

/* PDDR Reg Mask */

#define GPIO_PDDR_MASK                 0xFFFFFFFFu



/* PIDR Bit Fields */

#define GPIO_PIDR_PID_MASK             0xFFFFFFFFu

#define GPIO_PIDR_PID_SHIFT            0u

#define GPIO_PIDR_PID_WIDTH            32u

#define GPIO_PIDR_PID(x)               (((uint32)(((uint32)(x))<<GPIO_PIDR_PID_SHIFT))&GPIO_PIDR_PID_MASK)

/* PIDR Reg Mask */

#define GPIO_PIDR_MASK                 0xFFFFFFFFu

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/
typedef struct {



  __IO uint32 PDOR;                          /* Port Data Output Register, offset: 0x0 */

  __O  uint32 PSOR;                           /* Port Set Output Register, offset: 0x4 */

  __O  uint32 PCOR;                       /* Port Clear Output Register, offset: 0x8 */

  __O  uint32 PTOR;                           /* Port Toggle Output Register, offset: 0xC */

  __I  uint32 PDIR;                           /* Port Data Input Register, offset: 0x10 */

  __IO uint32 PDDR;                          /* Port Data Direction Register, offset: 0x14 */

  __IO uint32 PIDR;                          /* Port Input Disable Register, offset: 0x18 */

} GPIO_Type;

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPIO_REG_H*/

/** @} */
