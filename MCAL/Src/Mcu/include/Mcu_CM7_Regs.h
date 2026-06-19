/**
 *   @file    Mcu_Cm7_Regs.h
 *   @version 1.5.1
 *
 *   @brief AUTOSAR Mcu - Cm4 register and macro definitions.
 *   @details Cm7 registers, and macro definitions used to manipulate the module registers.
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
#ifndef MCU_CM7_REGS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
#define MCU_CM7_REGS_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C"
{
#endif

/* [FUNC_MCU_0022/0023/0024/0029] */
#include "Std_Types.h"

/* ----------------------------------------------------------------------------
   -- FC7XXX_SCB SyStem Control Block Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/* clang-format off */
/*!
 * @addtogroup FC7XXX_SCB_Peripheral_Access_Layer FC7XXX_SCB Peripheral Access Layer
 * @{
 */


/** FC7XXX_SCB - Size of Registers Arrays */

/** FC7XXX_SCB - Register Layout Typedef */
typedef struct {
  __I  uint32 CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  __IO uint32 ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
  __IO uint32 VTOR;                   /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
  __IO uint32 AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
  __IO uint32 SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
  __IO uint32 CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
  __IO uint8  SHPR[12U];              /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) */
  __IO uint32 SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
  __IO uint32 CFSR;                   /*!< Offset: 0x028 (R/W)  Configurable Fault Status Register */
  __IO uint32 HFSR;                   /*!< Offset: 0x02C (R/W)  HardFault Status Register */
  __IO uint32 DFSR;                   /*!< Offset: 0x030 (R/W)  Debug Fault Status Register */
  __IO uint32 MMFAR;                  /*!< Offset: 0x034 (R/W)  MemManage Fault Address Register */
  __IO uint32 BFAR;                   /*!< Offset: 0x038 (R/W)  BusFault Address Register */
  __IO uint32 AFSR;                   /*!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register */
  __I  uint32 ID_PFR[2U];             /*!< Offset: 0x040 (R/ )  Processor Feature Register */
  __I  uint32 ID_DFR;                 /*!< Offset: 0x048 (R/ )  Debug Feature Register */
  __I  uint32 ID_AFR;                 /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
  __I  uint32 ID_MFR[4U];             /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
  __I  uint32 ID_ISAR[5U];            /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
        uint32 RESERVED0[1U];
  __I  uint32 CLIDR;                  /*!< Offset: 0x078 (R/ )  Cache Level ID register */
  __I  uint32 CTR;                    /*!< Offset: 0x07C (R/ )  Cache Type register */
  __I  uint32 CCSIDR;                 /*!< Offset: 0x080 (R/ )  Cache Size ID Register */
  __IO uint32 CSSELR;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
  __IO uint32 CPACR;                  /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register */
        uint32 RESERVED3[93U];
  __O  uint32 STIR;                   /*!< Offset: 0x200 ( /W)  Software Triggered Interrupt Register */
        uint32 RESERVED4[15U];
  __I  uint32 MVFR0;                  /*!< Offset: 0x240 (R/ )  Media and VFP Feature Register 0 */
  __I  uint32 MVFR1;                  /*!< Offset: 0x244 (R/ )  Media and VFP Feature Register 1 */
  __I  uint32 MVFR2;                  /*!< Offset: 0x248 (R/ )  Media and VFP Feature Register 2 */
        uint32 RESERVED5[1U];
  __O  uint32 ICIALLU;                /*!< Offset: 0x250 ( /W)  I-Cache Invalidate All to PoU */
        uint32 RESERVED6[1U];
  __O  uint32 ICIMVAU;                /*!< Offset: 0x258 ( /W)  I-Cache Invalidate by MVA to PoU */
  __O  uint32 DCIMVAC;                /*!< Offset: 0x25C ( /W)  D-Cache Invalidate by MVA to PoC */
  __O  uint32 DCISW;                  /*!< Offset: 0x260 ( /W)  D-Cache Invalidate by Set-way */
  __O  uint32 DCCMVAU;                /*!< Offset: 0x264 ( /W)  D-Cache Clean by MVA to PoU */
  __O  uint32 DCCMVAC;                /*!< Offset: 0x268 ( /W)  D-Cache Clean by MVA to PoC */
  __O  uint32 DCCSW;                  /*!< Offset: 0x26C ( /W)  D-Cache Clean by Set-way */
  __O  uint32 DCCIMVAC;               /*!< Offset: 0x270 ( /W)  D-Cache Clean and Invalidate by MVA to PoC */
  __O  uint32 DCCISW;                 /*!< Offset: 0x274 ( /W)  D-Cache Clean and Invalidate by Set-way */
        uint32 RESERVED7[6U];
  __IO uint32 ITCMCR;                 /*!< Offset: 0x290 (R/W)  Instruction Tightly-Coupled Memory Control Register */
  __IO uint32 DTCMCR;                 /*!< Offset: 0x294 (R/W)  Data Tightly-Coupled Memory Control Registers */
  __IO uint32 AHBPCR;                 /*!< Offset: 0x298 (R/W)  AHBP Control Register */
  __IO uint32 CACR;                   /*!< Offset: 0x29C (R/W)  L1 Cache Control Register */
  __IO uint32 AHBSCR;                 /*!< Offset: 0x2A0 (R/W)  AHB Slave Control Register */
        uint32 RESERVED8[1U];
  __IO uint32 ABFSR;                  /*!< Offset: 0x2A8 (R/W)  Auxiliary Bus Fault Status Register */
} FC7XXX_SCB_Type;

/** Number of instances of the FC7XXX_SCB module. */
#define FC7XXX_SCB_INSTANCE_COUNT                   (1u)

/* FC7XXX_SCB - Peripheral instance base addresses */
/** Peripheral FC7XXX_SCB base address */
#define FC7XXX_SCB_BASE                             (0xE000ED00u)
/** Peripheral FC7XXX_SCB base pointer */
#define FC7XXX_SCB                                  ((FC7XXX_SCB_Type *)FC7XXX_SCB_BASE)
/** Array initializer of FC7XXX_SCB peripheral base pointers */
#define FC7XXX_SCB_BASE_PTRS                        { FC7XXX_SCB }

/* ----------------------------------------------------------------------------
   -- FC7XXX_SCB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FC7XXX_SCB_Register_Masks FC7XXX_SCB Register Masks
 * @{
 */

/* CPUID Bit Fields */
#define FC7XXX_SCB_CPUID_IMPLEMENTER_MASK           0xFF000000u

#define FC7XXX_SCB_CPUID_IMPLEMENTER_SHIFT          24u

#define FC7XXX_SCB_CPUID_IMPLEMENTER_WIDTH          8u

#define FC7XXX_SCB_CPUID_IMPLEMENTER(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_CPUID_IMPLEMENTER_SHIFT))&FC7XXX_SCB_CPUID_IMPLEMENTER_MASK)

#define FC7XXX_SCB_CPUID_VARIANT_MASK               0x00F00000u

#define FC7XXX_SCB_CPUID_VARIANT_SHIFT              20u

#define FC7XXX_SCB_CPUID_VARIANT_WIDTH              4u

#define FC7XXX_SCB_CPUID_VARIANT(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_CPUID_VARIANT_SHIFT))&FC7XXX_SCB_CPUID_VARIANT_MASK)

#define FC7XXX_SCB_CPUID_ARCHITECTURE_MASK          0x000F0000u

#define FC7XXX_SCB_CPUID_ARCHITECTURE_SHIFT         16u

#define FC7XXX_SCB_CPUID_ARCHITECTURE_WIDTH         4u

#define FC7XXX_SCB_CPUID_ARCHITECTURE(x)            (((uint32)(((uint32)(x))<<FC7XXX_SCB_CPUID_ARCHITECTURE_SHIFT))&FC7XXX_SCB_CPUID_ARCHITECTURE_MASK)

#define FC7XXX_SCB_CPUID_PARTNO_MASK                0x0000FFF0u

#define FC7XXX_SCB_CPUID_PARTNO_SHIFT               4u

#define FC7XXX_SCB_CPUID_PARTNO_WIDTH               12u

#define FC7XXX_SCB_CPUID_PARTNO(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CPUID_PARTNO_SHIFT))&FC7XXX_SCB_CPUID_PARTNO_MASK)

#define FC7XXX_SCB_CPUID_REVISION_MASK              0x0000000Fu

#define FC7XXX_SCB_CPUID_REVISION_SHIFT             0u

#define FC7XXX_SCB_CPUID_REVISION_WIDTH             4u

#define FC7XXX_SCB_CPUID_REVISION(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CPUID_REVISION_SHIFT))&FC7XXX_SCB_CPUID_REVISION_MASK)

/* CPUID Reg Mask */

#define FC7XXX_SCB_CPUID_MASK                       0xFFFFFFFFu



/* ICSR Bit Fields */
#define FC7XXX_SCB_ICSR_NMIPENDSET_MASK             0x8000000u

#define FC7XXX_SCB_ICSR_NMIPENDSET_SHIFT            31u

#define FC7XXX_SCB_ICSR_NMIPENDSET_WIDTH            1u

#define FC7XXX_SCB_ICSR_NMIPENDSET(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_NMIPENDSET_SHIFT))&FC7XXX_SCB_ICSR_NMIPENDSET_MASK)

#define FC7XXX_SCB_ICSR_PENDSVSET_MASK              0x10000000u

#define FC7XXX_SCB_ICSR_PENDSVSET_SHIFT             28u

#define FC7XXX_SCB_ICSR_PENDSVSET_WIDTH             1u

#define FC7XXX_SCB_ICSR_PENDSVSET(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_PENDSVSET_SHIFT))&FC7XXX_SCB_ICSR_PENDSVSET_MASK)

#define FC7XXX_SCB_ICSR_PENDSVCLR_MASK              0x08000000u

#define FC7XXX_SCB_ICSR_PENDSVCLR_SHIFT             27u

#define FC7XXX_SCB_ICSR_PENDSVCLR_WIDTH             1u

#define FC7XXX_SCB_ICSR_PENDSVCLR(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_PENDSVCLR_SHIFT))&FC7XXX_SCB_ICSR_PENDSVCLR_MASK)

#define FC7XXX_SCB_ICSR_PENDSTSET_MASK              0x04000000u

#define FC7XXX_SCB_ICSR_PENDSTSET_SHIFT             26u

#define FC7XXX_SCB_ICSR_PENDSTSET_WIDTH             1u

#define FC7XXX_SCB_ICSR_PENDSTSET(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_PENDSTSET_SHIFT))&FC7XXX_SCB_ICSR_PENDSTSET_MASK)

#define FC7XXX_SCB_ICSR_PENDSTCLR_MASK              0x02000000u

#define FC7XXX_SCB_ICSR_PENDSTCLR_SHIFT             25u

#define FC7XXX_SCB_ICSR_PENDSTCLR_WIDTH             1u

#define FC7XXX_SCB_ICSR_PENDSTCLR(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_PENDSTCLR_SHIFT))&FC7XXX_SCB_ICSR_PENDSTCLR_MASK)

#define FC7XXX_SCB_ICSR_ISRPREEMPT_MASK             0x00800000u

#define FC7XXX_SCB_ICSR_ISRPREEMPT_SHIFT            23u

#define FC7XXX_SCB_ICSR_ISRPREEMPT_WIDTH            1u

#define FC7XXX_SCB_ICSR_ISRPREEMPT(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_ISRPREEMPT_SHIFT))&FC7XXX_SCB_ICSR_ISRPREEMPT_MASK)

#define FC7XXX_SCB_ICSR_ISRPENDING_MASK             0x00400000u

#define FC7XXX_SCB_ICSR_ISRPENDING_SHIFT            22u

#define FC7XXX_SCB_ICSR_ISRPENDING_WIDTH            1u

#define FC7XXX_SCB_ICSR_ISRPENDING(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_ISRPENDING_SHIFT))&FC7XXX_SCB_ICSR_ISRPENDING_MASK)

#define FC7XXX_SCB_ICSR_VECTPENDING_MASK            0x001FF000u

#define FC7XXX_SCB_ICSR_VECTPENDING_SHIFT           12u

#define FC7XXX_SCB_ICSR_VECTPENDING_WIDTH           9u

#define FC7XXX_SCB_ICSR_VECTPENDING(x)              (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_VECTPENDING_SHIFT))&FC7XXX_SCB_ICSR_VECTPENDING_MASK)

#define FC7XXX_SCB_ICSR_RETTOBASE_MASK              0x00000800u

#define FC7XXX_SCB_ICSR_RETTOBASE_SHIFT             11u

#define FC7XXX_SCB_ICSR_RETTOBASE_WIDTH             1u

#define FC7XXX_SCB_ICSR_RETTOBASE(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_RETTOBASE_SHIFT))&FC7XXX_SCB_ICSR_RETTOBASE_MASK)

#define FC7XXX_SCB_ICSR_VECTACTIVE_MASK             0x000001FFu

#define FC7XXX_SCB_ICSR_VECTACTIVE_SHIFT            0u

#define FC7XXX_SCB_ICSR_VECTACTIVE_WIDTH            9u

#define FC7XXX_SCB_ICSR_VECTACTIVE(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_ICSR_VECTACTIVE_SHIFT))&FC7XXX_SCB_ICSR_VECTACTIVE_MASK)

/* ICSR Reg Mask */

#define FC7XXX_SCB_ICSR_MASK                        0x9EDFF9FFu



/* VTOR Bit Fields */
#define FC7XXX_SCB_VTOR_TBLOFF_MASK                 0xFFFFFF80u

#define FC7XXX_SCB_VTOR_TBLOFF_SHIFT                7u

#define FC7XXX_SCB_VTOR_TBLOFF_WIDTH                25u

#define FC7XXX_SCB_VTOR_TBLOFF(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_VTOR_TBLOFF_SHIFT))&FC7XXX_SCB_VTOR_TBLOFF_MASK)

/* VTOR Reg Mask */

#define FC7XXX_SCB_VTOR_MASK                       0xFFFFFF80u



/* AIRCR Bit Fields */
#define FC7XXX_SCB_AIRCR_VECTKEY_MASK               0xFFFF0000u

#define FC7XXX_SCB_AIRCR_VECTKEY_SHIFT              16u

#define FC7XXX_SCB_AIRCR_VECTKEY_WIDTH              16u

#define FC7XXX_SCB_AIRCR_VECTKEY(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_AIRCR_VECTKEY_SHIFT))&FC7XXX_SCB_AIRCR_VECTKEY_MASK)

#define FC7XXX_SCB_AIRCR_ENDIANESS_MASK             0x00008000u

#define FC7XXX_SCB_AIRCR_ENDIANESS_SHIFT            15u

#define FC7XXX_SCB_AIRCR_ENDIANESS_WIDTH            1u

#define FC7XXX_SCB_AIRCR_ENDIANESS(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_AIRCR_ENDIANESS_SHIFT))&FC7XXX_SCB_AIRCR_ENDIANESS_MASK)

#define FC7XXX_SCB_AIRCR_PRIGROUP_MASK              0x0000700u

#define FC7XXX_SCB_AIRCR_PRIGROUP_SHIFT             8u

#define FC7XXX_SCB_AIRCR_PRIGROUP_WIDTH             3u

#define FC7XXX_SCB_AIRCR_PRIGROUP(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_AIRCR_PRIGROUP_SHIFT))&FC7XXX_SCB_AIRCR_PRIGROUP_MASK)

#define FC7XXX_SCB_AIRCR_SYSRESETREQ_MASK           0x00000004u

#define FC7XXX_SCB_AIRCR_SYSRESETREQ_SHIFT          2u

#define FC7XXX_SCB_AIRCR_SYSRESETREQ_WIDTH          1u

#define FC7XXX_SCB_AIRCR_SYSRESETREQ(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_AIRCR_SYSRESETREQ_SHIFT))&FC7XXX_SCB_AIRCR_SYSRESETREQ_MASK)

#define FC7XXX_SCB_AIRCR_VECTCLRACTIVE_MASK         0x00000002u

#define FC7XXX_SCB_AIRCR_VECTCLRACTIVE_SHIFT        1u

#define FC7XXX_SCB_AIRCR_VECTCLRACTIVE_WIDTH        1u

#define FC7XXX_SCB_AIRCR_VECTCLRACTIVE(x)           (((uint32)(((uint32)(x))<<FC7XXX_SCB_AIRCR_VECTCLRACTIVE_SHIFT))&FC7XXX_SCB_AIRCR_VECTCLRACTIVE_MASK)

#define FC7XXX_SCB_AIRCR_VECTRESET_MASK             0x00000001u

#define FC7XXX_SCB_AIRCR_VECTRESET_SHIFT            0u

#define FC7XXX_SCB_AIRCR_VECTRESET_WIDTH            1u

#define FC7XXX_SCB_AIRCR_VECTRESET(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_AIRCR_VECTRESET_SHIFT))&FC7XXX_SCB_AIRCR_VECTRESET_MASK)

/* AIRCR Reg Mask */

#define FC7XXX_SCB_AIRCR_MASK                       0xFFFF8707u



/* SCR Bit Fields */
#define FC7XXX_SCB_SCR_SEVONPEND_MASK               0x00000010u

#define FC7XXX_SCB_SCR_SEVONPEND_SHIFT              4u

#define FC7XXX_SCB_SCR_SEVONPEND_WIDTH              1u

#define FC7XXX_SCB_SCR_SEVONPEND(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_SCR_SEVONPEND_SHIFT))&FC7XXX_SCB_SCR_SEVONPEND_MASK)

#define FC7XXX_SCB_SCR_SLEEPDEEP_MASK               0x00000004u

#define FC7XXX_SCB_SCR_SLEEPDEEP_SHIFT              2u

#define FC7XXX_SCB_SCR_SLEEPDEEP_WIDTH              1u

#define FC7XXX_SCB_SCR_SLEEPDEEP(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_SCR_SLEEPDEEP_SHIFT))&FC7XXX_SCB_SCR_SLEEPDEEP_MASK)

#define FC7XXX_SCB_SCR_SLEEPONEXIT_MASK             0x00000002u

#define FC7XXX_SCB_SCR_SLEEPONEXIT_SHIFT            1u

#define FC7XXX_SCB_SCR_SLEEPONEXIT_WIDTH            1u

#define FC7XXX_SCB_SCR_SLEEPONEXIT(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_SCR_SLEEPONEXIT_SHIFT))&FC7XXX_SCB_SCR_SLEEPONEXIT_MASK)

/* SCR Reg Mask */

#define FC7XXX_SCB_SCR_MASK                       0x00000016u



/* CCR Bit Fields */
#define FC7XXX_SCB_CCR_BP_MASK                      0x40000u

#define FC7XXX_SCB_CCR_BP_SHIFT                     18u

#define FC7XXX_SCB_CCR_BP_WIDTH                     1u

#define FC7XXX_SCB_CCR_BP(x)                        (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_BP_SHIFT))&FC7XXX_SCB_CCR_BP_MASK)

#define FC7XXX_SCB_CCR_IC_MASK                      0x20000u

#define FC7XXX_SCB_CCR_IC_SHIFT                     17u

#define FC7XXX_SCB_CCR_IC_WIDTH                     1u

#define FC7XXX_SCB_CCR_IC(x)                        (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_IC_SHIFT))&FC7XXX_SCB_CCR_IC_MASK)

#define FC7XXX_SCB_CCR_DC_MASK                      0x10000u

#define FC7XXX_SCB_CCR_DC_SHIFT                     16u

#define FC7XXX_SCB_CCR_DC_WIDTH                     1u

#define FC7XXX_SCB_CCR_DC(x)                        (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_DC_SHIFT))&FC7XXX_SCB_CCR_DC_MASK)

#define FC7XXX_SCB_CCR_STKALIGN_MASK                0x200u

#define FC7XXX_SCB_CCR_STKALIGN_SHIFT               9u

#define FC7XXX_SCB_CCR_STKALIGN_WIDTH               1u

#define FC7XXX_SCB_CCR_STKALIGN(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_STKALIGN_SHIFT))&FC7XXX_SCB_CCR_STKALIGN_MASK)

#define FC7XXX_SCB_CCR_BFHFNMIGN_MASK               0x100u

#define FC7XXX_SCB_CCR_BFHFNMIGN_SHIFT              8u

#define FC7XXX_SCB_CCR_BFHFNMIGN_WIDTH              1u

#define FC7XXX_SCB_CCR_BFHFNMIGN(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_BFHFNMIGN_SHIFT))&FC7XXX_SCB_CCR_BFHFNMIGN_MASK)

#define FC7XXX_SCB_CCR_DIV0TRP_MASK                 0x10u

#define FC7XXX_SCB_CCR_DIV0TRP_SHIFT                4u

#define FC7XXX_SCB_CCR_DIV0TRP_WIDTH                1u

#define FC7XXX_SCB_CCR_DIV0TRP(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_DIV0TRP_SHIFT))&FC7XXX_SCB_CCR_DIV0TRP_MASK)

#define FC7XXX_SCB_CCR_UNALIGNTRP_MASK              0x8u

#define FC7XXX_SCB_CCR_UNALIGNTRP_SHIFT             3u

#define FC7XXX_SCB_CCR_UNALIGNTRP_WIDTH             1u

#define FC7XXX_SCB_CCR_UNALIGNTRP(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_UNALIGNTRP_SHIFT))&FC7XXX_SCB_CCR_UNALIGNTRP_MASK)

#define FC7XXX_SCB_CCR_USERSETMPEND_MASK            0x2u

#define FC7XXX_SCB_CCR_USERSETMPEND_SHIFT           1u

#define FC7XXX_SCB_CCR_USERSETMPEND_WIDTH           1u

#define FC7XXX_SCB_CCR_USERSETMPEND(x)              (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_USERSETMPEND_SHIFT))&FC7XXX_SCB_CCR_USERSETMPEND_MASK)

#define FC7XXX_SCB_CCR_NONBASETHRDENA_MASK          0x1u

#define FC7XXX_SCB_CCR_NONBASETHRDENA_SHIFT         0u

#define FC7XXX_SCB_CCR_NONBASETHRDENA_WIDTH         1u

#define FC7XXX_SCB_CCR_NONBASETHRDENA(x)            (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCR_NONBASETHRDENA_SHIFT))&FC7XXX_SCB_CCR_NONBASETHRDENA_MASK)

/* CCR Reg Mask */

#define FC7XXX_SCB_CCR_MASK                         0x0007031Bu



/* SHCSR Bit Fields */
#define FC7XXX_SCB_SHCSR_USGFAULTENA_MASK           0x00040000u

#define FC7XXX_SCB_SHCSR_USGFAULTENA_SHIFT          18u

#define FC7XXX_SCB_SHCSR_USGFAULTENA_WIDTH          1u

#define FC7XXX_SCB_SHCSR_USGFAULTENA(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_USGFAULTENA_SHIFT))&FC7XXX_SCB_SHCSR_USGFAULTENA_MASK)

#define FC7XXX_SCB_SHCSR_BUSFAULTENA_MASK           0x00020000u

#define FC7XXX_SCB_SHCSR_BUSFAULTENA_SHIFT          17u

#define FC7XXX_SCB_SHCSR_BUSFAULTENA_WIDTH          1u

#define FC7XXX_SCB_SHCSR_BUSFAULTENA(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_BUSFAULTENA_SHIFT))&FC7XXX_SCB_SHCSR_BUSFAULTENA_MASK)

#define FC7XXX_SCB_SHCSR_MEMFAULTENA_MASK           0x00010000u

#define FC7XXX_SCB_SHCSR_MEMFAULTENA_SHIFT          16u

#define FC7XXX_SCB_SHCSR_MEMFAULTENA_WIDTH          1u

#define FC7XXX_SCB_SHCSR_MEMFAULTENA(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_MEMFAULTENA_SHIFT))&FC7XXX_SCB_SHCSR_MEMFAULTENA_MASK)

#define FC7XXX_SCB_SHCSR_SVCALLPENDED_MASK          0x00008000u

#define FC7XXX_SCB_SHCSR_SVCALLPENDED_SHIFT         15u

#define FC7XXX_SCB_SHCSR_SVCALLPENDED_WIDTH         1u

#define FC7XXX_SCB_SHCSR_SVCALLPENDED(x)            (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_SVCALLPENDED_SHIFT))&FC7XXX_SCB_SHCSR_SVCALLPENDED_MASK)

#define FC7XXX_SCB_SHCSR_BUSFAULTPENDED_MASK        0x00004000u

#define FC7XXX_SCB_SHCSR_BUSFAULTPENDED_SHIFT       14u

#define FC7XXX_SCB_SHCSR_BUSFAULTPENDED_WIDTH       1u

#define FC7XXX_SCB_SHCSR_BUSFAULTPENDED(x)          (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_BUSFAULTPENDED_SHIFT))&FC7XXX_SCB_SHCSR_BUSFAULTPENDED_MASK)

#define FC7XXX_SCB_SHCSR_MEMFAULTPENDED_MASK        0x00002000u

#define FC7XXX_SCB_SHCSR_MEMFAULTPENDED_SHIFT       13u

#define FC7XXX_SCB_SHCSR_MEMFAULTPENDED_WIDTH       1u

#define FC7XXX_SCB_SHCSR_MEMFAULTPENDED(x)          (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_MEMFAULTPENDED_SHIFT))&FC7XXX_SCB_SHCSR_MEMFAULTPENDED_MASK)

#define FC7XXX_SCB_SHCSR_USGFAULTPENDED_MASK        0x00001000u

#define FC7XXX_SCB_SHCSR_USGFAULTPENDED_SHIFT       12u

#define FC7XXX_SCB_SHCSR_USGFAULTPENDED_WIDTH       1u

#define FC7XXX_SCB_SHCSR_USGFAULTPENDED(x)          (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_USGFAULTPENDED_SHIFT))&FC7XXX_SCB_SHCSR_USGFAULTPENDED_MASK)

#define FC7XXX_SCB_SHCSR_SYSTICKACT_MASK            0x00000800u

#define FC7XXX_SCB_SHCSR_SYSTICKACT_SHIFT           11u

#define FC7XXX_SCB_SHCSR_SYSTICKACT_WIDTH           1u

#define FC7XXX_SCB_SHCSR_SYSTICKACT(x)              (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_SYSTICKACT_SHIFT))&FC7XXX_SCB_SHCSR_SYSTICKACT_MASK)

#define FC7XXX_SCB_SHCSR_PENDSVACT_MASK             0x00000400u

#define FC7XXX_SCB_SHCSR_PENDSVACT_SHIFT            10u

#define FC7XXX_SCB_SHCSR_PENDSVACT_WIDTH            1u

#define FC7XXX_SCB_SHCSR_PENDSVACT(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_PENDSVACT_SHIFT))&FC7XXX_SCB_SHCSR_PENDSVACT_MASK)

#define FC7XXX_SCB_SHCSR_MONITORACT_MASK            0x00000100u

#define FC7XXX_SCB_SHCSR_MONITORACT_SHIFT           8u

#define FC7XXX_SCB_SHCSR_MONITORACT_WIDTH           1u

#define FC7XXX_SCB_SHCSR_MONITORACT(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_MONITORACT_SHIFT))&FC7XXX_SCB_SHCSR_MONITORACT_MASK)

#define FC7XXX_SCB_SHCSR_SVCALLACT_MASK             0x00000080u

#define FC7XXX_SCB_SHCSR_SVCALLACT_SHIFT            7u

#define FC7XXX_SCB_SHCSR_SVCALLACT_WIDTH            1u

#define FC7XXX_SCB_SHCSR_SVCALLACT(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_SVCALLACT_SHIFT))&FC7XXX_SCB_SHCSR_SVCALLACT_MASK)

#define FC7XXX_SCB_SHCSR_USGFAULTACT_MASK           0x00000008u

#define FC7XXX_SCB_SHCSR_USGFAULTACT_SHIFT          3u

#define FC7XXX_SCB_SHCSR_USGFAULTACT_WIDTH          1u

#define FC7XXX_SCB_SHCSR_USGFAULTACT(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_USGFAULTACT_SHIFT))&FC7XXX_SCB_SHCSR_USGFAULTACT_MASK)

#define FC7XXX_SCB_SHCSR_BUSFAULTACT_MASK           0x00000002u

#define FC7XXX_SCB_SHCSR_BUSFAULTACT_SHIFT          1u

#define FC7XXX_SCB_SHCSR_BUSFAULTACT_WIDTH          1u

#define FC7XXX_SCB_SHCSR_BUSFAULTACT(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_BUSFAULTACT_SHIFT))&FC7XXX_SCB_SHCSR_BUSFAULTACT_MASK)

#define FC7XXX_SCB_SHCSR_MEMFAULTACT_MASK           0x00000001u

#define FC7XXX_SCB_SHCSR_MEMFAULTACT_SHIFT          0u

#define FC7XXX_SCB_SHCSR_MEMFAULTACT_WIDTH          1u

#define FC7XXX_SCB_SHCSR_MEMFAULTACT(x)             (((uint32)(((uint32)(x))<<FC7XXX_SCB_SHCSR_MEMFAULTACT_SHIFT))&FC7XXX_SCB_SHCSR_MEMFAULTACT_MASK)

/* SHCSR Reg Mask */

#define FC7XXX_SCB_SHCSR_MASK                       0x0007FD8Bu



/* CFSR Bit Fields */
#define FC7XXX_SCB_CFSR_DIVBYZERO_MASK              0x02000000u

#define FC7XXX_SCB_CFSR_DIVBYZERO_SHIFT             25u

#define FC7XXX_SCB_CFSR_DIVBYZERO_WIDTH             1u

#define FC7XXX_SCB_CFSR_DIVBYZERO(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_DIVBYZERO_SHIFT))&FC7XXX_SCB_CFSR_DIVBYZERO_MASK)

#define FC7XXX_SCB_CFSR_UNALIGNED_MASK              0x01000000u

#define FC7XXX_SCB_CFSR_UNALIGNED_SHIFT             24u

#define FC7XXX_SCB_CFSR_UNALIGNED_WIDTH             1u

#define FC7XXX_SCB_CFSR_UNALIGNED(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_UNALIGNED_SHIFT))&FC7XXX_SCB_CFSR_UNALIGNED_MASK)

#define FC7XXX_SCB_CFSR_NOCP_MASK                   0x00080000u

#define FC7XXX_SCB_CFSR_NOCP_SHIFT                  19u

#define FC7XXX_SCB_CFSR_NOCP_WIDTH                  1u

#define FC7XXX_SCB_CFSR_NOCP(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_NOCP_SHIFT))&FC7XXX_SCB_CFSR_NOCP_MASK)

#define FC7XXX_SCB_CFSR_INVPC_MASK                  0x00040000u

#define FC7XXX_SCB_CFSR_INVPC_SHIFT                 18u

#define FC7XXX_SCB_CFSR_INVPC_WIDTH                 1u

#define FC7XXX_SCB_CFSR_INVPC(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_INVPC_SHIFT))&FC7XXX_SCB_CFSR_INVPC_MASK)

#define FC7XXX_SCB_CFSR_INVSTATE_MASK               0x00020000u

#define FC7XXX_SCB_CFSR_INVSTATE_SHIFT              17u

#define FC7XXX_SCB_CFSR_INVSTATE_WIDTH              1u

#define FC7XXX_SCB_CFSR_INVSTATE(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_INVSTATE_SHIFT))&FC7XXX_SCB_CFSR_INVSTATE_MASK)

#define FC7XXX_SCB_CFSR_UNDEFINSTR_MASK             0x00010000u

#define FC7XXX_SCB_CFSR_UNDEFINSTR_SHIFT            16u

#define FC7XXX_SCB_CFSR_UNDEFINSTR_WIDTH            1u

#define FC7XXX_SCB_CFSR_UNDEFINSTR(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_UNDEFINSTR_SHIFT))&FC7XXX_SCB_CFSR_UNDEFINSTR_MASK)

#define FC7XXX_SCB_CFSR_BFARVALID_MASK              0x00008000u

#define FC7XXX_SCB_CFSR_BFARVALID_SHIFT             15u

#define FC7XXX_SCB_CFSR_BFARVALID_WIDTH             1u

#define FC7XXX_SCB_CFSR_BFARVALID(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_BFARVALID_SHIFT))&FC7XXX_SCB_CFSR_BFARVALID_MASK)

#define FC7XXX_SCB_CFSR_LSPERR_MASK                 0x00002000u

#define FC7XXX_SCB_CFSR_LSPERR_SHIFT                13u

#define FC7XXX_SCB_CFSR_LSPERR_WIDTH                1u

#define FC7XXX_SCB_CFSR_LSPERR(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_LSPERR_SHIFT))&FC7XXX_SCB_CFSR_LSPERR_MASK)

#define FC7XXX_SCB_CFSR_STKERR_MASK                 0x00001000u

#define FC7XXX_SCB_CFSR_STKERR_SHIFT                12u

#define FC7XXX_SCB_CFSR_STKERR_WIDTH                1u

#define FC7XXX_SCB_CFSR_STKERR(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_STKERR_SHIFT))&FC7XXX_SCB_CFSR_STKERR_MASK)

#define FC7XXX_SCB_CFSR_UNSTKERR_MASK               0x00000800u

#define FC7XXX_SCB_CFSR_UNSTKERR_SHIFT              11u

#define FC7XXX_SCB_CFSR_UNSTKERR_WIDTH              1u

#define FC7XXX_SCB_CFSR_UNSTKERR(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_UNSTKERR_SHIFT))&FC7XXX_SCB_CFSR_UNSTKERR_MASK)

#define FC7XXX_SCB_CFSR_IMPRECISERR_MASK            0x00000400u

#define FC7XXX_SCB_CFSR_IMPRECISERR_SHIFT           10u

#define FC7XXX_SCB_CFSR_IMPRECISERR_WIDTH           1u

#define FC7XXX_SCB_CFSR_IMPRECISERR(x)              (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_IMPRECISERR_SHIFT))&FC7XXX_SCB_CFSR_IMPRECISERR_MASK)

#define FC7XXX_SCB_CFSR_PRECISERR_MASK              0x00000200u

#define FC7XXX_SCB_CFSR_PRECISERR_SHIFT             9u

#define FC7XXX_SCB_CFSR_PRECISERR_WIDTH             1u

#define FC7XXX_SCB_CFSR_PRECISERR(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_PRECISERR_SHIFT))&FC7XXX_SCB_CFSR_PRECISERR_MASK)

#define FC7XXX_SCB_CFSR_IBUSERR_MASK                0x00000100u

#define FC7XXX_SCB_CFSR_IBUSERR_SHIFT               8u

#define FC7XXX_SCB_CFSR_IBUSERR_WIDTH               1u

#define FC7XXX_SCB_CFSR_IBUSERR(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_IBUSERR_SHIFT))&FC7XXX_SCB_CFSR_IBUSERR_MASK)

#define FC7XXX_SCB_CFSR_MMARVALID_MASK              0x00000080u

#define FC7XXX_SCB_CFSR_MMARVALID_SHIFT             7u

#define FC7XXX_SCB_CFSR_MMARVALID_WIDTH             1u

#define FC7XXX_SCB_CFSR_MMARVALID(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_MMARVALID_SHIFT))&FC7XXX_SCB_CFSR_MMARVALID_MASK)

#define FC7XXX_SCB_CFSR_MLSPERR_MASK                0x00000020u

#define FC7XXX_SCB_CFSR_MLSPERR_SHIFT               5u

#define FC7XXX_SCB_CFSR_MLSPERR_WIDTH               1u

#define FC7XXX_SCB_CFSR_MLSPERR(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_MLSPERR_SHIFT))&FC7XXX_SCB_CFSR_MLSPERR_MASK)

#define FC7XXX_SCB_CFSR_MSTKERR_MASK                0x00000010u

#define FC7XXX_SCB_CFSR_MSTKERR_SHIFT               4u

#define FC7XXX_SCB_CFSR_MSTKERR_WIDTH               1u

#define FC7XXX_SCB_CFSR_MSTKERR(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_MSTKERR_SHIFT))&FC7XXX_SCB_CFSR_MSTKERR_MASK)

#define FC7XXX_SCB_CFSR_MUNSTKERR_MASK              0x00000008u

#define FC7XXX_SCB_CFSR_MUNSTKERR_SHIFT             3u

#define FC7XXX_SCB_CFSR_MUNSTKERR_WIDTH             1u

#define FC7XXX_SCB_CFSR_MUNSTKERR(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_MUNSTKERR_SHIFT))&FC7XXX_SCB_CFSR_MUNSTKERR_MASK)

#define FC7XXX_SCB_CFSR_DACCVIOL_MASK               0x00000002u

#define FC7XXX_SCB_CFSR_DACCVIOL_SHIFT              1u

#define FC7XXX_SCB_CFSR_DACCVIOL_WIDTH              1u

#define FC7XXX_SCB_CFSR_DACCVIOL(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_DACCVIOL_SHIFT))&FC7XXX_SCB_CFSR_DACCVIOL_MASK)

#define FC7XXX_SCB_CFSR_IACCVIOL_MASK               0x00000001u

#define FC7XXX_SCB_CFSR_IACCVIOL_SHIFT              0u

#define FC7XXX_SCB_CFSR_IACCVIOL_WIDTH              1u

#define FC7XXX_SCB_CFSR_IACCVIOL(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_CFSR_IACCVIOL_SHIFT))&FC7XXX_SCB_CFSR_IACCVIOL_MASK)

/* CFSR Reg Mask */

#define FC7XXX_SCB_CFSR_MASK                        0x030FBFBBu



/* HFSR Bit Fields */
#define FC7XXX_SCB_HFSR_DEBUGEVT_MASK               0x80000000u

#define FC7XXX_SCB_HFSR_DEBUGEVT_SHIFT              31u

#define FC7XXX_SCB_HFSR_DEBUGEVT_WIDTH              1u

#define FC7XXX_SCB_HFSR_DEBUGEVT(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_HFSR_DEBUGEVT_SHIFT))&FC7XXX_SCB_HFSR_DEBUGEVT_MASK)

#define FC7XXX_SCB_HFSR_FORCED_MASK                 0x40000000u

#define FC7XXX_SCB_HFSR_FORCED_SHIFT                30u

#define FC7XXX_SCB_HFSR_FORCED_WIDTH                1u

#define FC7XXX_SCB_HFSR_FORCED(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_HFSR_FORCED_SHIFT))&FC7XXX_SCB_HFSR_FORCED_MASK)

#define FC7XXX_SCB_HFSR_VECTTBL_MASK                0x00000002u

#define FC7XXX_SCB_HFSR_VECTTBL_SHIFT               1u

#define FC7XXX_SCB_HFSR_VECTTBL_WIDTH               1u

#define FC7XXX_SCB_HFSR_VECTTBL(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_HFSR_VECTTBL_SHIFT))&FC7XXX_SCB_HFSR_VECTTBL_MASK)

/* HFSR Reg Mask */

#define FC7XXX_SCB_HFSR_MASK                        0xC0000002u



/* DFSR Bit Fields */
#define FC7XXX_SCB_DFSR_EXTERNAL_MASK               0x00000010u

#define FC7XXX_SCB_DFSR_EXTERNAL_SHIFT              4u

#define FC7XXX_SCB_DFSR_EXTERNAL_WIDTH              1u

#define FC7XXX_SCB_DFSR_EXTERNAL(x)                 (((uint32)(((uint32)(x))<<FC7XXX_SCB_DFSR_EXTERNAL_SHIFT))&FC7XXX_SCB_DFSR_EXTERNAL_MASK)

#define FC7XXX_SCB_DFSR_VCATCH_MASK                 0x00000008u

#define FC7XXX_SCB_DFSR_VCATCH_SHIFT                3u

#define FC7XXX_SCB_DFSR_VCATCH_WIDTH                1u

#define FC7XXX_SCB_DFSR_VCATCH(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_DFSR_VCATCH_SHIFT))&FC7XXX_SCB_DFSR_VCATCH_MASK)

#define FC7XXX_SCB_DFSR_DWTTRAP_MASK                0x00000004u

#define FC7XXX_SCB_DFSR_DWTTRAP_SHIFT               2u

#define FC7XXX_SCB_DFSR_DWTTRAP_WIDTH               1u

#define FC7XXX_SCB_DFSR_DWTTRAP(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_DFSR_DWTTRAP_SHIFT))&FC7XXX_SCB_DFSR_DWTTRAP_MASK)

#define FC7XXX_SCB_DFSR_BKPT_MASK                   0x00000002u

#define FC7XXX_SCB_DFSR_BKPT_SHIFT                  1u

#define FC7XXX_SCB_DFSR_BKPT_WIDTH                  1u

#define FC7XXX_SCB_DFSR_BKPT(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_DFSR_BKPT_SHIFT))&FC7XXX_SCB_DFSR_BKPT_MASK)

#define FC7XXX_SCB_DFSR_HALTED_MASK                 0x00000001u

#define FC7XXX_SCB_DFSR_HALTED_SHIFT                0u

#define FC7XXX_SCB_DFSR_HALTED_WIDTH                1u

#define FC7XXX_SCB_DFSR_HALTED(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_DFSR_HALTED_SHIFT))&FC7XXX_SCB_DFSR_HALTED_MASK)

/* DFSR Reg Mask */

#define FC7XXX_SCB_DFSR_MASK                        0xC000001Fu



/* CLIDR Bit Fields */
#define FC7XXX_SCB_CLIDR_LOUU_MASK                  0x38000000u

#define FC7XXX_SCB_CLIDR_LOUU_SHIFT                 27u

#define FC7XXX_SCB_CLIDR_LOUU_WIDTH                 3u

#define FC7XXX_SCB_CLIDR_LOUU(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_CLIDR_LOUU_SHIFT))&FC7XXX_SCB_CLIDR_LOUU_MASK)

#define FC7XXX_SCB_CLIDR_LOC_MASK                   0x07000000u

#define FC7XXX_SCB_CLIDR_LOC_SHIFT                  24u

#define FC7XXX_SCB_CLIDR_LOC_WIDTH                  3u

#define FC7XXX_SCB_CLIDR_LOC(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_CLIDR_LOC_SHIFT))&FC7XXX_SCB_CLIDR_LOC_MASK)

/* CLIDR Reg Mask */

#define FC7XXX_SCB_CLIDR_MASK                       0x3F000000u



/* CTR Bit Fields */
#define FC7XXX_SCB_CTR_FORMAT_MASK                  0xE0000000u

#define FC7XXX_SCB_CTR_FORMAT_SHIFT                 29u

#define FC7XXX_SCB_CTR_FORMAT_WIDTH                 3u

#define FC7XXX_SCB_CTR_FORMAT(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_CTR_FORMAT_SHIFT))&FC7XXX_SCB_CTR_FORMAT_MASK)

#define FC7XXX_SCB_CTR_CWG_MASK                     0x0F000000u

#define FC7XXX_SCB_CTR_CWG_SHIFT                    24u

#define FC7XXX_SCB_CTR_CWG_WIDTH                    4u

#define FC7XXX_SCB_CTR_CWG(x)                       (((uint32)(((uint32)(x))<<FC7XXX_SCB_CTR_CWG_SHIFT))&FC7XXX_SCB_CTR_CWG_MASK)

#define FC7XXX_SCB_CTR_ERG_MASK                     0x00F00000u

#define FC7XXX_SCB_CTR_ERG_SHIFT                    20u

#define FC7XXX_SCB_CTR_ERG_WIDTH                    4u

#define FC7XXX_SCB_CTR_ERG(x)                       (((uint32)(((uint32)(x))<<FC7XXX_SCB_CTR_ERG_SHIFT))&FC7XXX_SCB_CTR_ERG_MASK)

#define FC7XXX_SCB_CTR_DMINLINE_MASK                0x000F0000u

#define FC7XXX_SCB_CTR_DMINLINE_SHIFT               16u

#define FC7XXX_SCB_CTR_DMINLINE_WIDTH               4u

#define FC7XXX_SCB_CTR_DMINLINE(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CTR_DMINLINE_SHIFT))&FC7XXX_SCB_CTR_DMINLINE_MASK)

#define FC7XXX_SCB_CTR_IMINLINE_MASK                0x0000000Fu

#define FC7XXX_SCB_CTR_IMINLINE_SHIFT               0u

#define FC7XXX_SCB_CTR_IMINLINE_WIDTH               4u

#define FC7XXX_SCB_CTR_IMINLINE(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CTR_IMINLINE_SHIFT))&FC7XXX_SCB_CTR_IMINLINE_MASK)

/* CTR Reg Mask */

#define FC7XXX_SCB_CTR_MASK                         0xEFFF000Fu



/* CCSIDR Bit Fields */
#define FC7XXX_SCB_CCSIDR_WT_MASK                   0x80000000u

#define FC7XXX_SCB_CCSIDR_WT_SHIFT                  31u

#define FC7XXX_SCB_CCSIDR_WT_WIDTH                  1u

#define FC7XXX_SCB_CCSIDR_WT(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCSIDR_WT_SHIFT))&FC7XXX_SCB_CCSIDR_WT_MASK)

#define FC7XXX_SCB_CCSIDR_WB_MASK                   0x40000000u

#define FC7XXX_SCB_CCSIDR_WB_SHIFT                  30u

#define FC7XXX_SCB_CCSIDR_WB_WIDTH                  1u

#define FC7XXX_SCB_CCSIDR_WB(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCSIDR_WB_SHIFT))&FC7XXX_SCB_CCSIDR_WB_MASK)

#define FC7XXX_SCB_CCSIDR_RA_MASK                   0x20000000u

#define FC7XXX_SCB_CCSIDR_RA_SHIFT                  29u

#define FC7XXX_SCB_CCSIDR_RA_WIDTH                  1u

#define FC7XXX_SCB_CCSIDR_RA(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCSIDR_RA_SHIFT))&FC7XXX_SCB_CCSIDR_RA_MASK)

#define FC7XXX_SCB_CCSIDR_WA_MASK                   0x10000000u

#define FC7XXX_SCB_CCSIDR_WA_SHIFT                  28u

#define FC7XXX_SCB_CCSIDR_WA_WIDTH                  1u

#define FC7XXX_SCB_CCSIDR_WA(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCSIDR_WA_SHIFT))&FC7XXX_SCB_CCSIDR_WA_MASK)

#define FC7XXX_SCB_CCSIDR_NUMSETS_MASK              0x0FFFE000u

#define FC7XXX_SCB_CCSIDR_NUMSETS_SHIFT             13u

#define FC7XXX_SCB_CCSIDR_NUMSETS_WIDTH             15u

#define FC7XXX_SCB_CCSIDR_NUMSETS(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCSIDR_NUMSETS_SHIFT))&FC7XXX_SCB_CCSIDR_NUMSETS_MASK)

#define FC7XXX_SCB_CCSIDR_ASSOCIATIVITY_MASK        0x00001FF8u

#define FC7XXX_SCB_CCSIDR_ASSOCIATIVITY_SHIFT       3u

#define FC7XXX_SCB_CCSIDR_ASSOCIATIVITY_WIDTH       10u

#define FC7XXX_SCB_CCSIDR_ASSOCIATIVITY(x)          (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCSIDR_ASSOCIATIVITY_SHIFT))&FC7XXX_SCB_CCSIDR_ASSOCIATIVITY_MASK)

#define FC7XXX_SCB_CCSIDR_LINESIZE_MASK             0x00000007u

#define FC7XXX_SCB_CCSIDR_LINESIZE_SHIFT            0u

#define FC7XXX_SCB_CCSIDR_LINESIZE_WIDTH            3u

#define FC7XXX_SCB_CCSIDR_LINESIZE(x)               (((uint32)(((uint32)(x))<<FC7XXX_SCB_CCSIDR_LINESIZE_SHIFT))&FC7XXX_SCB_CCSIDR_LINESIZE_MASK)

/* CCSIDR Reg Mask */

#define FC7XXX_SCB_CCSIDR_MASK                      0xFFFFFFFFu



/* CSSELR Bit Fields */
#define FC7XXX_SCB_CSSELR_LEVEL_MASK                0x0000000Eu

#define FC7XXX_SCB_CSSELR_LEVEL_SHIFT               1u

#define FC7XXX_SCB_CSSELR_LEVEL_WIDTH               3u

#define FC7XXX_SCB_CSSELR_LEVEL(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CSSELR_LEVEL_SHIFT))&FC7XXX_SCB_CSSELR_LEVEL_MASK)

#define FC7XXX_SCB_CSSELR_IND_MASK                  0x00000001u

#define FC7XXX_SCB_CSSELR_IND_SHIFT                 0u

#define FC7XXX_SCB_CSSELR_IND_WIDTH                 1u

#define FC7XXX_SCB_CSSELR_IND(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_CSSELR_IND_SHIFT))&FC7XXX_SCB_CSSELR_IND_MASK)

/* CSSELR Reg Mask */

#define FC7XXX_SCB_CSSELR_MASK                      0x0000000Fu



/* DCISW Bit Fields */
#define FC7XXX_SCB_DCISW_WAY_MASK                   0xC0000000u

#define FC7XXX_SCB_DCISW_WAY_SHIFT                  30u

#define FC7XXX_SCB_DCISW_WAY_WIDTH                  2u

#define FC7XXX_SCB_DCISW_WAY(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_DCISW_WAY_SHIFT))&FC7XXX_SCB_DCISW_WAY_MASK)

#define FC7XXX_SCB_DCISW_SET_MASK                   0x00003FE0u

#define FC7XXX_SCB_DCISW_SET_SHIFT                  5u

#define FC7XXX_SCB_DCISW_SET_WIDTH                  9u

#define FC7XXX_SCB_DCISW_SET(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_DCISW_SET_SHIFT))&FC7XXX_SCB_DCISW_SET_MASK)

/* DCISW Reg Mask */

#define FC7XXX_SCB_DCISW_MASK                       0xC0003FE0u



/* DCCSW Bit Fields */
#define FC7XXX_SCB_DCCSW_WAY_MASK                   0xC0000000u

#define FC7XXX_SCB_DCCSW_WAY_SHIFT                  30u

#define FC7XXX_SCB_DCCSW_WAY_WIDTH                  2u

#define FC7XXX_SCB_DCCSW_WAY(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_DCCSW_WAY_SHIFT))&FC7XXX_SCB_DCCSW_WAY_MASK)

#define FC7XXX_SCB_DCCSW_SET_MASK                   0x00003FE0u

#define FC7XXX_SCB_DCCSW_SET_SHIFT                  5u

#define FC7XXX_SCB_DCCSW_SET_WIDTH                  9u

#define FC7XXX_SCB_DCCSW_SET(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_DCCSW_SET_SHIFT))&FC7XXX_SCB_DCCSW_SET_MASK)

/* DCCSW Reg Mask */

#define FC7XXX_SCB_DCCSW_MASK                       0xC0003FE0u



/* DCCISW Bit Fields */
#define FC7XXX_SCB_DCCISW_WAY_MASK                  0xC0000000u

#define FC7XXX_SCB_DCCISW_WAY_SHIFT                 30u

#define FC7XXX_SCB_DCCISW_WAY_WIDTH                 2u

#define FC7XXX_SCB_DCCISW_WAY(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_DCCISW_WAY_SHIFT))&FC7XXX_SCB_DCCISW_WAY_MASK)

#define FC7XXX_SCB_DCCISW_SET_MASK                  0x00003FE0u

#define FC7XXX_SCB_DCCISW_SET_SHIFT                 5u

#define FC7XXX_SCB_DCCISW_SET_WIDTH                 9u

#define FC7XXX_SCB_DCCISW_SET(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_DCCISW_SET_SHIFT))&FC7XXX_SCB_DCCISW_SET_MASK)

/* DCCISW Reg Mask */

#define FC7XXX_SCB_DCCISW_MASK                      0xC0003FE0u



/* ITCMCR Bit Fields */
#define FC7XXX_SCB_ITCMCR_SZ_MASK                   0x00000078u

#define FC7XXX_SCB_ITCMCR_SZ_SHIFT                  3u

#define FC7XXX_SCB_ITCMCR_SZ_WIDTH                  4u

#define FC7XXX_SCB_ITCMCR_SZ(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_ITCMCR_SZ_SHIFT))&FC7XXX_SCB_ITCMCR_SZ_MASK)

#define FC7XXX_SCB_ITCMCR_RETEN_MASK                0x00000004u

#define FC7XXX_SCB_ITCMCR_RETEN_SHIFT               2u

#define FC7XXX_SCB_ITCMCR_RETEN_WIDTH               1u

#define FC7XXX_SCB_ITCMCR_RETEN(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_ITCMCR_RETEN_SHIFT))&FC7XXX_SCB_ITCMCR_RETEN_MASK)

#define FC7XXX_SCB_ITCMCR_RMW_MASK                  0x00000002u

#define FC7XXX_SCB_ITCMCR_RMW_SHIFT                 1u

#define FC7XXX_SCB_ITCMCR_RMW_WIDTH                 1u

#define FC7XXX_SCB_ITCMCR_RMW(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_ITCMCR_RMW_SHIFT))&FC7XXX_SCB_ITCMCR_RMW_MASK)

#define FC7XXX_SCB_ITCMCR_EN_MASK                   0x00000001u

#define FC7XXX_SCB_ITCMCR_EN_SHIFT                  0u

#define FC7XXX_SCB_ITCMCR_EN_WIDTH                  1u

#define FC7XXX_SCB_ITCMCR_EN(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_ITCMCR_EN_SHIFT))&FC7XXX_SCB_ITCMCR_EN_MASK)

/* ITCMCR Reg Mask */

#define FC7XXX_SCB_ITCMCR_MASK                      0x0000007Fu



/* DTCMCR Bit Fields */
#define FC7XXX_SCB_DTCMCR_SZ_MASK                   0x00000078u

#define FC7XXX_SCB_DTCMCR_SZ_SHIFT                  3u

#define FC7XXX_SCB_DTCMCR_SZ_WIDTH                  4u

#define FC7XXX_SCB_DTCMCR_SZ(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_DTCMCR_SZ_SHIFT))&FC7XXX_SCB_DTCMCR_SZ_MASK)

#define FC7XXX_SCB_DTCMCR_RETEN_MASK                0x00000004u

#define FC7XXX_SCB_DTCMCR_RETEN_SHIFT               2u

#define FC7XXX_SCB_DTCMCR_RETEN_WIDTH               1u

#define FC7XXX_SCB_DTCMCR_RETEN(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_DTCMCR_RETEN_SHIFT))&FC7XXX_SCB_DTCMCR_RETEN_MASK)

#define FC7XXX_SCB_DTCMCR_RMW_MASK                  0x00000002u

#define FC7XXX_SCB_DTCMCR_RMW_SHIFT                 1u

#define FC7XXX_SCB_DTCMCR_RMW_WIDTH                 1u

#define FC7XXX_SCB_DTCMCR_RMW(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_DTCMCR_RMW_SHIFT))&FC7XXX_SCB_DTCMCR_RMW_MASK)

#define FC7XXX_SCB_DTCMCR_EN_MASK                   0x00000001u

#define FC7XXX_SCB_DTCMCR_EN_SHIFT                  0u

#define FC7XXX_SCB_DTCMCR_EN_WIDTH                  1u

#define FC7XXX_SCB_DTCMCR_EN(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_DTCMCR_EN_SHIFT))&FC7XXX_SCB_DTCMCR_EN_MASK)

/* DTCMCR Reg Mask */

#define FC7XXX_SCB_DTCMCR_MASK                      0x0000007Fu



/* AHBPCR Bit Fields */
#define FC7XXX_SCB_AHBPCR_SZ_MASK                   0x0000000Eu

#define FC7XXX_SCB_AHBPCR_SZ_SHIFT                  1u

#define FC7XXX_SCB_AHBPCR_SZ_WIDTH                  3u

#define FC7XXX_SCB_AHBPCR_SZ(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_AHBPCR_SZ_SHIFT))&FC7XXX_SCB_AHBPCR_SZ_MASK)

#define FC7XXX_SCB_AHBPCR_EN_MASK                   0x00000001u

#define FC7XXX_SCB_AHBPCR_EN_SHIFT                  0u

#define FC7XXX_SCB_AHBPCR_EN_WIDTH                  1u

#define FC7XXX_SCB_AHBPCR_EN(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_AHBPCR_EN_SHIFT))&FC7XXX_SCB_AHBPCR_EN_MASK)

/* AHBPCR Reg Mask */

#define FC7XXX_SCB_AHBPCR_MASK                      0x0000000Fu



/* CACR Bit Fields */
#define FC7XXX_SCB_CACR_FORCEWT_MASK                0x00000004u

#define FC7XXX_SCB_CACR_FORCEWT_SHIFT               2u

#define FC7XXX_SCB_CACR_FORCEWT_WIDTH               1u

#define FC7XXX_SCB_CACR_FORCEWT(x)                  (((uint32)(((uint32)(x))<<FC7XXX_SCB_CACR_FORCEWT_SHIFT))&FC7XXX_SCB_CACR_FORCEWT_MASK)

#define FC7XXX_SCB_CACR_ECCEN_MASK                  0x00000002u

#define FC7XXX_SCB_CACR_ECCEN_SHIFT                 1u

#define FC7XXX_SCB_CACR_ECCEN_WIDTH                 1u

#define FC7XXX_SCB_CACR_ECCEN(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_CACR_ECCEN_SHIFT))&FC7XXX_SCB_CACR_ECCEN_MASK)

#define FC7XXX_SCB_CACR_SIWT_MASK                   0x00000001u

#define FC7XXX_SCB_CACR_SIWT_SHIFT                  0u

#define FC7XXX_SCB_CACR_SIWT_WIDTH                  1u

#define FC7XXX_SCB_CACR_SIWT(x)                     (((uint32)(((uint32)(x))<<FC7XXX_SCB_CACR_SIWT_SHIFT))&FC7XXX_SCB_CACR_SIWT_MASK)

/* CACR Reg Mask */

#define FC7XXX_SCB_CACR_MASK                        0x00000007u



/* AHBSCR Bit Fields */
#define FC7XXX_SCB_AHBSCR_INITCOUNT_MASK            0x0000F800u

#define FC7XXX_SCB_AHBSCR_INITCOUNT_SHIFT           11u

#define FC7XXX_SCB_AHBSCR_INITCOUNT_WIDTH           5u

#define FC7XXX_SCB_AHBSCR_INITCOUNT(x)              (((uint32)(((uint32)(x))<<FC7XXX_SCB_AHBSCR_INITCOUNT_SHIFT))&FC7XXX_SCB_AHBSCR_INITCOUNT_MASK)

#define FC7XXX_SCB_AHBSCR_TPRI_MASK                 0x000007FCu

#define FC7XXX_SCB_AHBSCR_TPRI_SHIFT                2u

#define FC7XXX_SCB_AHBSCR_TPRI_WIDTH                9u

#define FC7XXX_SCB_AHBSCR_TPRI(x)                   (((uint32)(((uint32)(x))<<FC7XXX_SCB_AHBSCR_TPRI_SHIFT))&FC7XXX_SCB_AHBSCR_TPRI_MASK)

#define FC7XXX_SCB_AHBSCR_CTL_MASK                  0x00000003u

#define FC7XXX_SCB_AHBSCR_CTL_SHIFT                 0u

#define FC7XXX_SCB_AHBSCR_CTL_WIDTH                 2u

#define FC7XXX_SCB_AHBSCR_CTL(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_AHBSCR_CTL_SHIFT))&FC7XXX_SCB_AHBSCR_CTL_MASK)

/* AHBSCR Reg Mask */

#define FC7XXX_SCB_AHBSCR_MASK                      0x0000FFFFu



/* ABFSR Bit Fields */
#define FC7XXX_SCB_ABFSR_AXIMTYPE_MASK              0x00000300u

#define FC7XXX_SCB_ABFSR_AXIMTYPE_SHIFT             8u

#define FC7XXX_SCB_ABFSR_AXIMTYPE_WIDTH             2u

#define FC7XXX_SCB_ABFSR_AXIMTYPE(x)                (((uint32)(((uint32)(x))<<FC7XXX_SCB_ABFSR_AXIMTYPE_SHIFT))&FC7XXX_SCB_ABFSR_AXIMTYPE_MASK)

#define FC7XXX_SCB_ABFSR_EPPB_MASK                  0x00000010u

#define FC7XXX_SCB_ABFSR_EPPB_SHIFT                 4u

#define FC7XXX_SCB_ABFSR_EPPB_WIDTH                 1u

#define FC7XXX_SCB_ABFSR_EPPB(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_ABFSR_EPPB_SHIFT))&FC7XXX_SCB_ABFSR_EPPB_MASK)

#define FC7XXX_SCB_ABFSR_AXIM_MASK                  0x00000008u

#define FC7XXX_SCB_ABFSR_AXIM_SHIFT                 3u

#define FC7XXX_SCB_ABFSR_AXIM_WIDTH                 1u

#define FC7XXX_SCB_ABFSR_AXIM(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_ABFSR_AXIM_SHIFT))&FC7XXX_SCB_ABFSR_AXIM_MASK)

#define FC7XXX_SCB_ABFSR_AHBP_MASK                  0x00000004u

#define FC7XXX_SCB_ABFSR_AHBP_SHIFT                 2u

#define FC7XXX_SCB_ABFSR_AHBP_WIDTH                 1u

#define FC7XXX_SCB_ABFSR_AHBP(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_ABFSR_AHBP_SHIFT))&FC7XXX_SCB_ABFSR_AHBP_MASK)

#define FC7XXX_SCB_ABFSR_DTCM_MASK                  0x00000002u

#define FC7XXX_SCB_ABFSR_DTCM_SHIFT                 1u

#define FC7XXX_SCB_ABFSR_DTCM_WIDTH                 1u

#define FC7XXX_SCB_ABFSR_DTCM(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_ABFSR_DTCM_SHIFT))&FC7XXX_SCB_ABFSR_DTCM_MASK)

#define FC7XXX_SCB_ABFSR_ITCM_MASK                  0x00000001u

#define FC7XXX_SCB_ABFSR_ITCM_SHIFT                 0u

#define FC7XXX_SCB_ABFSR_ITCM_WIDTH                 1u

#define FC7XXX_SCB_ABFSR_ITCM(x)                    (((uint32)(((uint32)(x))<<FC7XXX_SCB_ABFSR_ITCM_SHIFT))&FC7XXX_SCB_ABFSR_ITCM_MASK)

/* ABFSR Reg Mask */

#define FC7XXX_SCB_ABFSR_MASK                       0x0000031Fu
/* clang-format on */

#if defined(__cplusplus)
}
#endif

#endif
/** @}*/

/** @}*/

/** @}*/
