/**
*   @file    Port_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - module register and macro definitions.
*   @details Port module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup Common
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : PORT
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

#ifndef PORT_REG_H
#define PORT_REG_H
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Std_Types.h"

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                       DEFINES AND MACROS
=================================================================================================*/

/** PORT - Size of Registers Arrays */
#define PORT_PCR_COUNT 32U

/** Number of instances of the PORT module. */

#define PORT_INSTANCE_COUNT                      (9u)


/* PORT - Peripheral instance base addresses */

/** Peripheral PORTA base address */

#define PORTA_BASE                               (0x40047000u)

/** Peripheral PORTA base pointer */

#define PORTA                                    ((PORT_Type *)PORTA_BASE)

/** Peripheral PORTB base address */

#define PORTB_BASE                               (0x40048000u)

/** Peripheral PORTB base pointer */

#define PORTB                                    ((PORT_Type *)PORTB_BASE)

/** Peripheral PORTC base address */

#define PORTC_BASE                               (0x40049000u)

/** Peripheral PORTC base pointer */

#define PORTC                                    ((PORT_Type *)PORTC_BASE)

/** Peripheral PORTD base address */

#define PORTD_BASE                               (0x4004A000u)

/** Peripheral PORTD base pointer */

#define PORTD                                    ((PORT_Type *)PORTD_BASE)

/** Peripheral PORTE base address */

#define PORTE_BASE                               (0x4004B000u)

/** Peripheral PORTE base pointer */

#define PORTE                                    ((PORT_Type *)PORTE_BASE)

/** Peripheral PORTF base address */

#define PORTF_BASE                               (0x4004C000u)

/** Peripheral PORTF base pointer */

#define PORTF                                    ((PORT_Type *)PORTF_BASE)

/** Peripheral PORTG base address */

#define PORTG_BASE                               (0x4004D000u)

/** Peripheral PORTG base pointer */

#define PORTG                                    ((PORT_Type *)PORTG_BASE)

/** Peripheral PORTH base address */

#define PORTH_BASE                               (0x4004E000u)

/** Peripheral PORTH base pointer */

#define PORTH                                    ((PORT_Type *)PORTH_BASE)

/** Peripheral PORTI base address */

#define PORTI_BASE                               (0x4004F000u)

/** Peripheral PORTI base pointer */

#define PORTI                                    ((PORT_Type *)PORTI_BASE)

/** Array initializer of PORT peripheral base addresses */

#define PORT_BASE_ADDRS                          {PORTA_BASE, PORTB_BASE, PORTC_BASE, PORTD_BASE, PORTE_BASE, PORTF_BASE, PORTG_BASE, PORTH_BASE, PORTI_BASE}

/** Array initializer of PORT peripheral base pointers */

#define PORT_BASE_PTRS                           {PORTA, PORTB, PORTC, PORTD, PORTE, PORTF, PORTG, PORTH, PORTI}




/*!

 * @addtogroup PORT_Register_Masks 

 */

 

/* PCR Bit Fields */

#define PORT_PCR_DWPLK_MASK            0x80000000u

#define PORT_PCR_DWPLK_SHIFT           31u

#define PORT_PCR_DWPLK_WIDTH           1u

#define PORT_PCR_DWPLK(x)              (((uint32)(((uint32)(x))<<PORT_PCR_DWPLK_SHIFT))&PORT_PCR_DWPLK_MASK)

#define PORT_PCR_DWP_MASK              0x3E000000u

#define PORT_PCR_DWP_SHIFT             25u

#define PORT_PCR_DWP_WIDTH             5u

#define PORT_PCR_DWP(x)                (((uint32)(((uint32)(x))<<PORT_PCR_DWP_SHIFT))&PORT_PCR_DWP_MASK)

#define PORT_PCR_ISF_MASK              0x1000000u

#define PORT_PCR_ISF_SHIFT             24u

#define PORT_PCR_ISF_WIDTH             1u

#define PORT_PCR_ISF(x)                (((uint32)(((uint32)(x))<<PORT_PCR_ISF_SHIFT))&PORT_PCR_ISF_MASK)

#define PORT_PCR_ESTOP_MASK            0x200000u

#define PORT_PCR_ESTOP_SHIFT           21u

#define PORT_PCR_ESTOP_WIDTH           1u

#define PORT_PCR_ESTOP(x)              (((uint32)(((uint32)(x))<<PORT_PCR_ESTOP_SHIFT))&PORT_PCR_ESTOP_MASK)

#define PORT_PCR_WKUDIS_MASK           0x100000u

#define PORT_PCR_WKUDIS_SHIFT          20u

#define PORT_PCR_WKUDIS_WIDTH          1u

#define PORT_PCR_WKUDIS(x)             (((uint32)(((uint32)(x))<<PORT_PCR_WKUDIS_SHIFT))&PORT_PCR_WKUDIS_MASK)

#define PORT_PCR_IRQC_MASK             0xF0000u

#define PORT_PCR_IRQC_SHIFT            16u

#define PORT_PCR_IRQC_WIDTH            4u

#define PORT_PCR_IRQC(x)               (((uint32)(((uint32)(x))<<PORT_PCR_IRQC_SHIFT))&PORT_PCR_IRQC_MASK)

#define PORT_PCR_LK_MASK               0x8000u

#define PORT_PCR_LK_SHIFT              15u

#define PORT_PCR_LK_WIDTH              1u

#define PORT_PCR_LK(x)                 (((uint32)(((uint32)(x))<<PORT_PCR_LK_SHIFT))&PORT_PCR_LK_MASK)

#define PORT_PCR_MUX_MASK              0x700u

#define PORT_PCR_MUX_SHIFT             8u

#define PORT_PCR_MUX_WIDTH             3u

#define PORT_PCR_MUX(x)                (((uint32)(((uint32)(x))<<PORT_PCR_MUX_SHIFT))&PORT_PCR_MUX_MASK)

#define PORT_PCR_DSE1_MASK             0x80u

#define PORT_PCR_DSE1_SHIFT            7u

#define PORT_PCR_DSE1_WIDTH            1u

#define PORT_PCR_DSE1(x)               (((uint32)(((uint32)(x))<<PORT_PCR_DSE1_SHIFT))&PORT_PCR_DSE1_MASK)

#define PORT_PCR_DSE0_MASK             0x40u

#define PORT_PCR_DSE0_SHIFT            6u

#define PORT_PCR_DSE0_WIDTH            1u

#define PORT_PCR_DSE0(x)               (((uint32)(((uint32)(x))<<PORT_PCR_DSE0_SHIFT))&PORT_PCR_DSE0_MASK)

#define PORT_PCR_ODE_MASK              0x20u

#define PORT_PCR_ODE_SHIFT             5u

#define PORT_PCR_ODE_WIDTH             1u

#define PORT_PCR_ODE(x)                (((uint32)(((uint32)(x))<<PORT_PCR_ODE_SHIFT))&PORT_PCR_ODE_MASK)

#define PORT_PCR_PFE_MASK              0x10u

#define PORT_PCR_PFE_SHIFT             4u

#define PORT_PCR_PFE_WIDTH             1u

#define PORT_PCR_PFE(x)                (((uint32)(((uint32)(x))<<PORT_PCR_PFE_SHIFT))&PORT_PCR_PFE_MASK)

#define PORT_PCR_SRE_MASK              0x4u

#define PORT_PCR_SRE_SHIFT             2u

#define PORT_PCR_SRE_WIDTH             1u

#define PORT_PCR_SRE(x)                (((uint32)(((uint32)(x))<<PORT_PCR_SRE_SHIFT))&PORT_PCR_SRE_MASK)

#define PORT_PCR_PE_MASK               0x2u

#define PORT_PCR_PE_SHIFT              1u

#define PORT_PCR_PE_WIDTH              1u

#define PORT_PCR_PE(x)                 (((uint32)(((uint32)(x))<<PORT_PCR_PE_SHIFT))&PORT_PCR_PE_MASK)

#define PORT_PCR_PS_MASK               0x1u

#define PORT_DRV_PCR_PE_PS_MASK_U32    (0x00000003UL)

#define PORT_PCR_PS_SHIFT              0u

#define PORT_PCR_PS_WIDTH              1u

#define PORT_PCR_PS(x)                 (((uint32)(((uint32)(x))<<PORT_PCR_PS_SHIFT))&PORT_PCR_PS_MASK)

/* PCR0 Reg Mask */

#define PORT_PCR_MASK                  0x011F87D7u



/* GPCLR Bit Fields */

#define PORT_GPCLR_GPWE_MASK           0xFFFF0000u

#define PORT_GPCLR_GPWE_SHIFT          16u

#define PORT_GPCLR_GPWE_WIDTH          16u

#define PORT_GPCLR_GPWE(x)             (((uint32)(((uint32)(x))<<PORT_GPCLR_GPWE_SHIFT))&PORT_GPCLR_GPWE_MASK)

#define PORT_GPCLR_GPWD_MASK           0xFFFFu

#define PORT_GPCLR_GPWD_SHIFT          0u

#define PORT_GPCLR_GPWD_WIDTH          16u

#define PORT_GPCLR_GPWD(x)             (((uint32)(((uint32)(x))<<PORT_GPCLR_GPWD_SHIFT))&PORT_GPCLR_GPWD_MASK)

/* GPCLR Reg Mask */

#define PORT_GPCLR_MASK                0xFFFFFFFFu



/* GPCHR Bit Fields */

#define PORT_GPCHR_GPWE_MASK           0xFFFF0000u

#define PORT_GPCHR_GPWE_SHIFT          16u

#define PORT_GPCHR_GPWE_WIDTH          16u

#define PORT_GPCHR_GPWE(x)             (((uint32)(((uint32)(x))<<PORT_GPCHR_GPWE_SHIFT))&PORT_GPCHR_GPWE_MASK)

#define PORT_GPCHR_GPWD_MASK           0xFFFFu

#define PORT_GPCHR_GPWD_SHIFT          0u

#define PORT_GPCHR_GPWD_WIDTH          16u

#define PORT_GPCHR_GPWD(x)             (((uint32)(((uint32)(x))<<PORT_GPCHR_GPWD_SHIFT))&PORT_GPCHR_GPWD_MASK)

/* GPCHR Reg Mask */

#define PORT_GPCHR_MASK                0xFFFFFFFFu



/* GICLR Bit Fields */

#define PORT_GICLR_GIWD_MASK           0xFFFF0000u

#define PORT_GICLR_GIWD_SHIFT          16u

#define PORT_GICLR_GIWD_WIDTH          16u

#define PORT_GICLR_GIWD(x)             (((uint32)(((uint32)(x))<<PORT_GICLR_GIWD_SHIFT))&PORT_GICLR_GIWD_MASK)

#define PORT_GICLR_GIWE_MASK           0xFFFFu

#define PORT_GICLR_GIWE_SHIFT          0u

#define PORT_GICLR_GIWE_WIDTH          16u

#define PORT_GICLR_GIWE(x)             (((uint32)(((uint32)(x))<<PORT_GICLR_GIWE_SHIFT))&PORT_GICLR_GIWE_MASK)

/* GICLR Reg Mask */

#define PORT_GICLR_MASK                0xFFFFFFFFu



/* GICHR Bit Fields */

#define PORT_GICHR_GIWD_MASK           0xFFFF0000u

#define PORT_GICHR_GIWD_SHIFT          16u

#define PORT_GICHR_GIWD_WIDTH          16u

#define PORT_GICHR_GIWD(x)             (((uint32)(((uint32)(x))<<PORT_GICHR_GIWD_SHIFT))&PORT_GICHR_GIWD_MASK)

#define PORT_GICHR_GIWE_MASK           0xFFFFu

#define PORT_GICHR_GIWE_SHIFT          0u

#define PORT_GICHR_GIWE_WIDTH          16u

#define PORT_GICHR_GIWE(x)             (((uint32)(((uint32)(x))<<PORT_GICHR_GIWE_SHIFT))&PORT_GICHR_GIWE_MASK)

/* GICHR Reg Mask */

#define PORT_GICHR_MASK                0xFFFFFFFFu



/* ISFR Bit Fields */

#define PORT_ISFR_ISF_MASK             0xFFFFFFFFu

#define PORT_ISFR_ISF_SHIFT            0u

#define PORT_ISFR_ISF_WIDTH            32u

#define PORT_ISFR_ISF(x)               (((uint32)(((uint32)(x))<<PORT_ISFR_ISF_SHIFT))&PORT_ISFR_ISF_MASK)

/* ISFR Reg Mask */

#define PORT_ISFR_MASK                 0xFFFFFFFFu



/* DFER Bit Fields */

#define PORT_DFER_DFE_MASK             0xFFFFFFFFu

#define PORT_DFER_DFE_SHIFT            0u

#define PORT_DFER_DFE_WIDTH            32u

#define PORT_DFER_DFE(x)               (((uint32)(((uint32)(x))<<PORT_DFER_DFE_SHIFT))&PORT_DFER_DFE_MASK)

/* DFER Reg Mask */

#define PORT_DFER_MASK                 0xFFFFFFFFu



/* DFCR Bit Fields */

#define PORT_DFCR_CS_MASK              0x1u

#define PORT_DFCR_CS_SHIFT             0u

#define PORT_DFCR_CS_WIDTH             1u

#define PORT_DFCR_CS(x)                (((uint32)(((uint32)(x))<<PORT_DFCR_CS_SHIFT))&PORT_DFCR_CS_MASK)

/* DFCR Reg Mask */

#define PORT_DFCR_MASK                 0x00000001u



/* DFWR Bit Fields */

#define PORT_DFWR_FILT_MASK            0x1Fu

#define PORT_DFWR_FILT_SHIFT           0u

#define PORT_DFWR_FILT_WIDTH           5u

#define PORT_DFWR_FILT(x)              (((uint32)(((uint32)(x))<<PORT_DFWR_FILT_SHIFT))&PORT_DFWR_FILT_MASK)

/* DFWR Reg Mask */

#define PORT_DFWR_MASK                 0x0000001Fu



/* GLDWP Bit Fields */

#define PORT_GLDWP_DWPLK_MASK          0x80000000u

#define PORT_GLDWP_DWPLK_SHIFT         31u

#define PORT_GLDWP_DWPLK_WIDTH         1u

#define PORT_GLDWP_DWPLK(x)            (((uint32)(((uint32)(x))<<PORT_GLDWP_DWPLK_SHIFT))&PORT_GLDWP_DWPLK_MASK)

#define PORT_GLDWP_DWP_MASK            0x3E000000u

#define PORT_GLDWP_DWP_SHIFT           25u

#define PORT_GLDWP_DWP_WIDTH           5u

#define PORT_GLDWP_DWP(x)              (((uint32)(((uint32)(x))<<PORT_GLDWP_DWP_SHIFT))&PORT_GLDWP_DWP_MASK)

/* GLDWP Reg Mask */

#define PORT_GLDWP_MASK                0xBE000000u

/*=================================================================================================
*                                         SELECT PIN NO.
=================================================================================================*/


#define PIN_NO_MASK_U32(channel)           ((uint32)((uint32)1<<GPIO_CHANNEL_U32(channel)))

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

typedef struct {

  __IO uint32 PCR[PORT_PCR_COUNT]           ; /* Port Control Register, offset: 0x0 */

  __O  uint32 GPCLR                         ; /* Global Pin Control Low Register, offset: 0x80 */

  __O  uint32 GPCHR                         ; /* Global Pin Control High Register, offset: 0x84 */

  __O  uint32 GICLR                         ; /* Global Interrupt Control Low Register, offset: 0x88 */

  __O  uint32 GICHR                         ; /* Global Interrupt Control High Register, offset: 0x8C */

       uint8  RESERVED_0[16];

  __IO uint32 ISFR                          ; /* Interrupt Status Flag Register, offset: 0xA0 */

       uint8  RESERVED_1[28];

  __IO uint32 DFER                          ; /* Digital Filter Enable Register, offset: 0xC0 */

  __IO uint32 DFCR                          ; /* Digital Filter Clock Register, offset: 0xC4 */

  __IO uint32 DFWR                          ; /* Digital Filter Width Register, offset: 0xC8 */

  __IO uint32 GLDWP                          ; /* Global Domain Write Protection Register, offset: 0xCC */

} PORT_Type;


/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/
#define COMMON_START_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"
COMMON_DATA_SECTION extern PORT_Type *const PORT_PTRS[PORT_INSTANCE_COUNT];
#define COMMON_STOP_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"
/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif
/* PORT_REG_H */
#endif
/** @} */
