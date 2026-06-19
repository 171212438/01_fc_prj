/**
*   @file    Eftu_Dtm_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Eftu - Dtm module register and macro definitions.
*   @details DTM module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup EftuGlobal
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DTM
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   1.0.0       14/11/2024    QXW0070       N/A          EftuGlobal Initial Version
==================================================================================================*/

#ifndef EFTU_DTM_REG_H
#define EFTU_DTM_REG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/** EFTU_DTM - Register Layout Typedef */
#define EFTU_DTM_CHn_DTV_COUNT    4
#define EFTU_DTM_CHn_DTV_SR_COUNT 4
#define EFTU_DTM_DTV_COUNT        12

typedef struct {

  __IO uint32 CTRL                          ; /* Global Configuration and Control Register, offset: 0x00 */
  __IO uint32 CH_CTRL1                      ; /* Channel Control Register 1, offset: 0x04 */
  __IO uint32 CH_CTRL2                      ; /* Channel Control Register 2, offset: 0x08 */
  __IO uint32 CH_CTRL2_SR                   ; /* Channel Control Register 2 Shadow, offset: 0x0C */
  __IO uint32 PS_CTRL                       ; /* Phase Shift Unit Configuration and Control Register, offset: 0x10 */
  __IO uint32 CHn_DTV[EFTU_DTM_CHn_DTV_COUNT]; /* Channel [x] Dead Time Reload Values Register, offset: 0x14 */
  __IO uint32 CH_SR                         ; /* Channel Shadow Register, offset: 0x24 */
  __IO uint32 CH_CTRL3                      ; /* Channel Control Register 3, offset: 0x28 */
  __IO uint32 CTRL2                         ; /* Global Configuration and Control Register 2, offset: 0x2C */
  __IO uint32 CHn_DTV_SR[EFTU_DTM_CHn_DTV_SR_COUNT]; /* Channel [x] Dead Time Shadow Value Register, offset: 0x30 */

} EFTU_DTM_Type, *EFTU_DTM_MemMapPtr;

/** Number of instances of the EFTU_DTM module. */
#define EFTU_DTM_INSTANCE_COUNT                  (4u)

/* EFTU_DTM - Peripheral instance base addresses */
/** Peripheral EFTU_DTM0 base address */
#define EFTU_DTM0_BASE                           (0x600u)
/** Peripheral EFTU_DTM0 base pointer */
#define EFTU_DTM0                                ((EFTU_DTM_Type *)EFTU_DTM0_BASE)
/** Peripheral EFTU_DTM1 base address */
#define EFTU_DTM1_BASE                           (0x680u)
/** Peripheral EFTU_DTM1 base pointer */
#define EFTU_DTM1                                ((EFTU_DTM_Type *)EFTU_DTM1_BASE)
/** Peripheral EFTU_DTM2 base address */
#define EFTU_DTM2_BASE                           (0x700u)
/** Peripheral EFTU_DTM2 base pointer */
#define EFTU_DTM2                                ((EFTU_DTM_Type *)EFTU_DTM2_BASE)
/** Peripheral EFTU_DTM3 base address */
#define EFTU_DTM3_BASE                           (0x780u)
/** Peripheral EFTU_DTM3 base pointer */
#define EFTU_DTM3                                ((EFTU_DTM_Type *)EFTU_DTM3_BASE)
#if(DEVICE_SERIES == FC7300F4MDDxxxxT1C)||(DEVICE_SERIES == FC7300F4MDSxxxxT1C)
/** Peripheral EFTU_0_DTM_0 base address */
#define EFTU_0_DTM_0_BASE                        (0x40476600u)
/** Peripheral EFTU_0_DTM_1 base address */
#define EFTU_0_DTM_1_BASE                        (0x40476680u)
/** Peripheral EFTU_0_DTM_2 base address */
#define EFTU_0_DTM_2_BASE                        (0x40476700u)
/** Peripheral EFTU_0_DTM_3 base address */
#define EFTU_0_DTM_3_BASE                        (0x40476780u)
#else
/** Peripheral EFTU_0_DTM_0 base address */
#define EFTU_0_DTM_0_BASE                        (0x4083e600u)
/** Peripheral EFTU_0_DTM_1 base address */
#define EFTU_0_DTM_1_BASE                        (0x4083e680u)
/** Peripheral EFTU_0_DTM_2 base address */
#define EFTU_0_DTM_2_BASE                        (0x4083e700u)
/** Peripheral EFTU_0_DTM_3 base address */
#define EFTU_0_DTM_3_BASE                        (0x4083e780u)
#endif
/** Peripheral EFTU_1_DTM_0 base address */
#define EFTU_1_DTM_0_BASE                        (0x40840600u)
/** Peripheral EFTU_1_DTM_1 base address */
#define EFTU_1_DTM_1_BASE                        (0x40840680u)
/** Peripheral EFTU_1_DTM_2 base address */
#define EFTU_1_DTM_2_BASE                        (0x40840700u)
/** Peripheral EFTU_1_DTM_3 base address */
#define EFTU_1_DTM_3_BASE                        (0x40840780u)
/** Peripheral EFTU_2_DTM_0 base address */
#define EFTU_2_DTM_0_BASE                        (0x40842600u)
/** Peripheral EFTU_2_DTM_1 base address */
#define EFTU_2_DTM_1_BASE                        (0x40842680u)
/** Peripheral EFTU_2_DTM_2 base address */
#define EFTU_2_DTM_2_BASE                        (0x40842700u)
/** Peripheral EFTU_2_DTM_3 base address */
#define EFTU_2_DTM_3_BASE                        (0x40842780u)
/** Peripheral EFTU_0_DTM_0 base pointer */
#define EFTU0_DTM0                               ((EFTU_DTM_Type *)EFTU_0_DTM_0_BASE)
/** Peripheral EFTU_0_DTM_1 base pointer */
#define EFTU0_DTM1                               ((EFTU_DTM_Type *)EFTU_0_DTM_1_BASE)
/** Peripheral EFTU_0_DTM_2 base pointer */
#define EFTU0_DTM2                               ((EFTU_DTM_Type *)EFTU_0_DTM_2_BASE)
/** Peripheral EFTU_0_DTM_3 base pointer */
#define EFTU0_DTM3                               ((EFTU_DTM_Type *)EFTU_0_DTM_3_BASE)
/** Peripheral EFTU_1_DTM_0 base pointer */
#define EFTU1_DTM0                               ((EFTU_DTM_Type *)EFTU_1_DTM_0_BASE)
/** Peripheral EFTU_1_DTM_1 base pointer */
#define EFTU1_DTM1                               ((EFTU_DTM_Type *)EFTU_1_DTM_1_BASE)
/** Peripheral EFTU_1_DTM_2 base pointer */
#define EFTU1_DTM2                               ((EFTU_DTM_Type *)EFTU_1_DTM_2_BASE)
/** Peripheral EFTU_1_DTM_3 base pointer */
#define EFTU1_DTM3                               ((EFTU_DTM_Type *)EFTU_1_DTM_3_BASE)
/** Peripheral EFTU_2_DTM_0 base pointer */
#define EFTU2_DTM0                               ((EFTU_DTM_Type *)EFTU_2_DTM_0_BASE)
/** Peripheral EFTU_2_DTM_1 base pointer */
#define EFTU2_DTM1                               ((EFTU_DTM_Type *)EFTU_2_DTM_1_BASE)
/** Peripheral EFTU_2_DTM_2 base pointer */
#define EFTU2_DTM2                               ((EFTU_DTM_Type *)EFTU_2_DTM_2_BASE)
/** Peripheral EFTU_2_DTM_3 base pointer */
#define EFTU2_DTM3                               ((EFTU_DTM_Type *)EFTU_2_DTM_3_BASE)

/** Array initializer of EFTU_2_DTM_ peripheral base addresses */
#define EFTU_DTM_BASE_ADDRS                      {EFTU_0_DTM_0_BASE, EFTU_0_DTM_1_BASE, EFTU_0_DTM_2_BASE, EFTU_0_DTM_3_BASE, EFTU_1_DTM_0_BASE, EFTU_1_DTM_1_BASE, EFTU_1_DTM_2_BASE, EFTU_1_DTM_3_BASE, EFTU_2_DTM_0_BASE, EFTU_2_DTM_1_BASE, EFTU_2_DTM_2_BASE, EFTU_2_DTM_3_BASE}
/** Array initializer of EFTU_DTM peripheral base pointers */
#define EFTU_DTM_BASE_PTRS                       {EFTU0_DTM0, EFTU0_DTM1, EFTU0_DTM2, EFTU0_DTM3, EFTU1_DTM0, EFTU1_DTM1, EFTU1_DTM2, EFTU1_DTM3, EFTU2_DTM0, EFTU2_DTM1, EFTU2_DTM2, EFTU2_DTM3}

/* ----------------------------------------------------------------------------
   -- EFTU_DTM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EFTU_DTM_Register_Masks EFTU_DTM Register Masks
 * @{
 */

/* CTRL Bit Fields */
#define EFTU_DTM_CTRL_CLK_SEL_MASK     0x3u
#define EFTU_DTM_CTRL_CLK_SEL_SHIFT    0u
#define EFTU_DTM_CTRL_CLK_SEL_WIDTH    2u
#define EFTU_DTM_CTRL_CLK_SEL(x)       (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL_CLK_SEL_SHIFT))&EFTU_DTM_CTRL_CLK_SEL_MASK)
#define EFTU_DTM_CTRL_DTM_SEL_MASK     0xCu
#define EFTU_DTM_CTRL_DTM_SEL_SHIFT    2u
#define EFTU_DTM_CTRL_DTM_SEL_WIDTH    2u
#define EFTU_DTM_CTRL_DTM_SEL(x)       (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL_DTM_SEL_SHIFT))&EFTU_DTM_CTRL_DTM_SEL_MASK)
#define EFTU_DTM_CTRL_UPD_MODE_MASK    0x70u
#define EFTU_DTM_CTRL_UPD_MODE_SHIFT   4u
#define EFTU_DTM_CTRL_UPD_MODE_WIDTH   3u
#define EFTU_DTM_CTRL_UPD_MODE(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL_UPD_MODE_SHIFT))&EFTU_DTM_CTRL_UPD_MODE_MASK)
#define EFTU_DTM_CTRL_CH_SHUTOFF_EN_MASK 0x80u
#define EFTU_DTM_CTRL_CH_SHUTOFF_EN_SHIFT 7u
#define EFTU_DTM_CTRL_CH_SHUTOFF_EN_WIDTH 1u
#define EFTU_DTM_CTRL_CH_SHUTOFF_EN(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL_CH_SHUTOFF_EN_SHIFT))&EFTU_DTM_CTRL_CH_SHUTOFF_EN_MASK)
#define EFTU_DTM_CTRL_SR_UPD_EN_MASK   0x100u
#define EFTU_DTM_CTRL_SR_UPD_EN_SHIFT  8u
#define EFTU_DTM_CTRL_SR_UPD_EN_WIDTH  1u
#define EFTU_DTM_CTRL_SR_UPD_EN(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL_SR_UPD_EN_SHIFT))&EFTU_DTM_CTRL_SR_UPD_EN_MASK)
#define EFTU_DTM_CTRL_SHUT_OFF_RST_MASK 0x10000u
#define EFTU_DTM_CTRL_SHUT_OFF_RST_SHIFT 16u
#define EFTU_DTM_CTRL_SHUT_OFF_RST_WIDTH 1u
#define EFTU_DTM_CTRL_SHUT_OFF_RST(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL_SHUT_OFF_RST_SHIFT))&EFTU_DTM_CTRL_SHUT_OFF_RST_MASK)
/* CTRL Reg Mask */
#define EFTU_DTM_CTRL_MASK             0x000101FFu

/* CH_CTRL1 Bit Fields */
#define EFTU_DTM_CH_CTRL1_O1SEL_0_MASK 0x1u
#define EFTU_DTM_CH_CTRL1_O1SEL_0_SHIFT 0u
#define EFTU_DTM_CH_CTRL1_O1SEL_0_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_O1SEL_0(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1SEL_0_SHIFT))&EFTU_DTM_CH_CTRL1_O1SEL_0_MASK)
#define EFTU_DTM_CH_CTRL1_I1SEL_0_MASK 0x2u
#define EFTU_DTM_CH_CTRL1_I1SEL_0_SHIFT 1u
#define EFTU_DTM_CH_CTRL1_I1SEL_0_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_I1SEL_0(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_I1SEL_0_SHIFT))&EFTU_DTM_CH_CTRL1_I1SEL_0_MASK)
#define EFTU_DTM_CH_CTRL1_SWAP_0_MASK  0x8u
#define EFTU_DTM_CH_CTRL1_SWAP_0_SHIFT 3u
#define EFTU_DTM_CH_CTRL1_SWAP_0_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_SWAP_0(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_SWAP_0_SHIFT))&EFTU_DTM_CH_CTRL1_SWAP_0_MASK)
#define EFTU_DTM_CH_CTRL1_O1F_0_MASK   0x30u
#define EFTU_DTM_CH_CTRL1_O1F_0_SHIFT  4u
#define EFTU_DTM_CH_CTRL1_O1F_0_WIDTH  2u
#define EFTU_DTM_CH_CTRL1_O1F_0(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1F_0_SHIFT))&EFTU_DTM_CH_CTRL1_O1F_0_MASK)
#define EFTU_DTM_CH_CTRL1_XDT_EN_0_1_MASK 0x40u
#define EFTU_DTM_CH_CTRL1_XDT_EN_0_1_SHIFT 6u
#define EFTU_DTM_CH_CTRL1_XDT_EN_0_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_XDT_EN_0_1(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_XDT_EN_0_1_SHIFT))&EFTU_DTM_CH_CTRL1_XDT_EN_0_1_MASK)
#define EFTU_DTM_CH_CTRL1_O1SEL_1_MASK 0x100u
#define EFTU_DTM_CH_CTRL1_O1SEL_1_SHIFT 8u
#define EFTU_DTM_CH_CTRL1_O1SEL_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_O1SEL_1(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1SEL_1_SHIFT))&EFTU_DTM_CH_CTRL1_O1SEL_1_MASK)
#define EFTU_DTM_CH_CTRL1_I1SEL_1_MASK 0x200u
#define EFTU_DTM_CH_CTRL1_I1SEL_1_SHIFT 9u
#define EFTU_DTM_CH_CTRL1_I1SEL_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_I1SEL_1(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_I1SEL_1_SHIFT))&EFTU_DTM_CH_CTRL1_I1SEL_1_MASK)
#define EFTU_DTM_CH_CTRL1_SH_EN_1_MASK 0x400u
#define EFTU_DTM_CH_CTRL1_SH_EN_1_SHIFT 10u
#define EFTU_DTM_CH_CTRL1_SH_EN_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_SH_EN_1(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_SH_EN_1_SHIFT))&EFTU_DTM_CH_CTRL1_SH_EN_1_MASK)
#define EFTU_DTM_CH_CTRL1_SWAP_1_MASK  0x800u
#define EFTU_DTM_CH_CTRL1_SWAP_1_SHIFT 11u
#define EFTU_DTM_CH_CTRL1_SWAP_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_SWAP_1(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_SWAP_1_SHIFT))&EFTU_DTM_CH_CTRL1_SWAP_1_MASK)
#define EFTU_DTM_CH_CTRL1_O1F_1_MASK   0x3000u
#define EFTU_DTM_CH_CTRL1_O1F_1_SHIFT  12u
#define EFTU_DTM_CH_CTRL1_O1F_1_WIDTH  2u
#define EFTU_DTM_CH_CTRL1_O1F_1(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1F_1_SHIFT))&EFTU_DTM_CH_CTRL1_O1F_1_MASK)
#define EFTU_DTM_CH_CTRL1_O1SEL_2_MASK 0x10000u
#define EFTU_DTM_CH_CTRL1_O1SEL_2_SHIFT 16u
#define EFTU_DTM_CH_CTRL1_O1SEL_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_O1SEL_2(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1SEL_2_SHIFT))&EFTU_DTM_CH_CTRL1_O1SEL_2_MASK)
#define EFTU_DTM_CH_CTRL1_I1SEL_2_MASK 0x20000u
#define EFTU_DTM_CH_CTRL1_I1SEL_2_SHIFT 17u
#define EFTU_DTM_CH_CTRL1_I1SEL_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_I1SEL_2(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_I1SEL_2_SHIFT))&EFTU_DTM_CH_CTRL1_I1SEL_2_MASK)
#define EFTU_DTM_CH_CTRL1_SH_EN_2_MASK 0x40000u
#define EFTU_DTM_CH_CTRL1_SH_EN_2_SHIFT 18u
#define EFTU_DTM_CH_CTRL1_SH_EN_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_SH_EN_2(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_SH_EN_2_SHIFT))&EFTU_DTM_CH_CTRL1_SH_EN_2_MASK)
#define EFTU_DTM_CH_CTRL1_SWAP_2_MASK  0x80000u
#define EFTU_DTM_CH_CTRL1_SWAP_2_SHIFT 19u
#define EFTU_DTM_CH_CTRL1_SWAP_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_SWAP_2(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_SWAP_2_SHIFT))&EFTU_DTM_CH_CTRL1_SWAP_2_MASK)
#define EFTU_DTM_CH_CTRL1_O1F_2_MASK   0x300000u
#define EFTU_DTM_CH_CTRL1_O1F_2_SHIFT  20u
#define EFTU_DTM_CH_CTRL1_O1F_2_WIDTH  2u
#define EFTU_DTM_CH_CTRL1_O1F_2(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1F_2_SHIFT))&EFTU_DTM_CH_CTRL1_O1F_2_MASK)
#define EFTU_DTM_CH_CTRL1_XDT_EN_2_3_MASK 0x400000u
#define EFTU_DTM_CH_CTRL1_XDT_EN_2_3_SHIFT 22u
#define EFTU_DTM_CH_CTRL1_XDT_EN_2_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_XDT_EN_2_3(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_XDT_EN_2_3_SHIFT))&EFTU_DTM_CH_CTRL1_XDT_EN_2_3_MASK)
#define EFTU_DTM_CH_CTRL1_O1SEL_3_MASK 0x1000000u
#define EFTU_DTM_CH_CTRL1_O1SEL_3_SHIFT 24u
#define EFTU_DTM_CH_CTRL1_O1SEL_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_O1SEL_3(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1SEL_3_SHIFT))&EFTU_DTM_CH_CTRL1_O1SEL_3_MASK)
#define EFTU_DTM_CH_CTRL1_I1SEL_3_MASK 0x2000000u
#define EFTU_DTM_CH_CTRL1_I1SEL_3_SHIFT 25u
#define EFTU_DTM_CH_CTRL1_I1SEL_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_I1SEL_3(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_I1SEL_3_SHIFT))&EFTU_DTM_CH_CTRL1_I1SEL_3_MASK)
#define EFTU_DTM_CH_CTRL1_SH_EN_3_MASK 0x4000000u
#define EFTU_DTM_CH_CTRL1_SH_EN_3_SHIFT 26u
#define EFTU_DTM_CH_CTRL1_SH_EN_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_SH_EN_3(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_SH_EN_3_SHIFT))&EFTU_DTM_CH_CTRL1_SH_EN_3_MASK)
#define EFTU_DTM_CH_CTRL1_SWAP_3_MASK  0x8000000u
#define EFTU_DTM_CH_CTRL1_SWAP_3_SHIFT 27u
#define EFTU_DTM_CH_CTRL1_SWAP_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL1_SWAP_3(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_SWAP_3_SHIFT))&EFTU_DTM_CH_CTRL1_SWAP_3_MASK)
#define EFTU_DTM_CH_CTRL1_O1F_3_MASK   0x30000000u
#define EFTU_DTM_CH_CTRL1_O1F_3_SHIFT  28u
#define EFTU_DTM_CH_CTRL1_O1F_3_WIDTH  2u
#define EFTU_DTM_CH_CTRL1_O1F_3(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL1_O1F_3_SHIFT))&EFTU_DTM_CH_CTRL1_O1F_3_MASK)
/* CH_CTRL1 Reg Mask */
#define EFTU_DTM_CH_CTRL1_MASK         0x3F7F3F7Bu

/* CH_CTRL2 Bit Fields */
#define EFTU_DTM_CH_CTRL2_POL0_0_MASK  0x1u
#define EFTU_DTM_CH_CTRL2_POL0_0_SHIFT 0u
#define EFTU_DTM_CH_CTRL2_POL0_0_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL0_0(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL0_0_SHIFT))&EFTU_DTM_CH_CTRL2_POL0_0_MASK)
#define EFTU_DTM_CH_CTRL2_OC0_0_MASK   0x2u
#define EFTU_DTM_CH_CTRL2_OC0_0_SHIFT  1u
#define EFTU_DTM_CH_CTRL2_OC0_0_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC0_0(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC0_0_SHIFT))&EFTU_DTM_CH_CTRL2_OC0_0_MASK)
#define EFTU_DTM_CH_CTRL2_SL0_0_MASK   0x4u
#define EFTU_DTM_CH_CTRL2_SL0_0_SHIFT  2u
#define EFTU_DTM_CH_CTRL2_SL0_0_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL0_0(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL0_0_SHIFT))&EFTU_DTM_CH_CTRL2_SL0_0_MASK)
#define EFTU_DTM_CH_CTRL2_DT0_0_MASK   0x8u
#define EFTU_DTM_CH_CTRL2_DT0_0_SHIFT  3u
#define EFTU_DTM_CH_CTRL2_DT0_0_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT0_0(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT0_0_SHIFT))&EFTU_DTM_CH_CTRL2_DT0_0_MASK)
#define EFTU_DTM_CH_CTRL2_POL1_0_MASK  0x10u
#define EFTU_DTM_CH_CTRL2_POL1_0_SHIFT 4u
#define EFTU_DTM_CH_CTRL2_POL1_0_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL1_0(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL1_0_SHIFT))&EFTU_DTM_CH_CTRL2_POL1_0_MASK)
#define EFTU_DTM_CH_CTRL2_OC1_0_MASK   0x20u
#define EFTU_DTM_CH_CTRL2_OC1_0_SHIFT  5u
#define EFTU_DTM_CH_CTRL2_OC1_0_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC1_0(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC1_0_SHIFT))&EFTU_DTM_CH_CTRL2_OC1_0_MASK)
#define EFTU_DTM_CH_CTRL2_SL1_0_MASK   0x40u
#define EFTU_DTM_CH_CTRL2_SL1_0_SHIFT  6u
#define EFTU_DTM_CH_CTRL2_SL1_0_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL1_0(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL1_0_SHIFT))&EFTU_DTM_CH_CTRL2_SL1_0_MASK)
#define EFTU_DTM_CH_CTRL2_DT1_0_MASK   0x80u
#define EFTU_DTM_CH_CTRL2_DT1_0_SHIFT  7u
#define EFTU_DTM_CH_CTRL2_DT1_0_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT1_0(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT1_0_SHIFT))&EFTU_DTM_CH_CTRL2_DT1_0_MASK)
#define EFTU_DTM_CH_CTRL2_POL0_1_MASK  0x100u
#define EFTU_DTM_CH_CTRL2_POL0_1_SHIFT 8u
#define EFTU_DTM_CH_CTRL2_POL0_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL0_1(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL0_1_SHIFT))&EFTU_DTM_CH_CTRL2_POL0_1_MASK)
#define EFTU_DTM_CH_CTRL2_OC0_1_MASK   0x200u
#define EFTU_DTM_CH_CTRL2_OC0_1_SHIFT  9u
#define EFTU_DTM_CH_CTRL2_OC0_1_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC0_1(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC0_1_SHIFT))&EFTU_DTM_CH_CTRL2_OC0_1_MASK)
#define EFTU_DTM_CH_CTRL2_SL0_1_MASK   0x400u
#define EFTU_DTM_CH_CTRL2_SL0_1_SHIFT  10u
#define EFTU_DTM_CH_CTRL2_SL0_1_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL0_1(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL0_1_SHIFT))&EFTU_DTM_CH_CTRL2_SL0_1_MASK)
#define EFTU_DTM_CH_CTRL2_DT0_1_MASK   0x800u
#define EFTU_DTM_CH_CTRL2_DT0_1_SHIFT  11u
#define EFTU_DTM_CH_CTRL2_DT0_1_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT0_1(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT0_1_SHIFT))&EFTU_DTM_CH_CTRL2_DT0_1_MASK)
#define EFTU_DTM_CH_CTRL2_POL1_1_MASK  0x1000u
#define EFTU_DTM_CH_CTRL2_POL1_1_SHIFT 12u
#define EFTU_DTM_CH_CTRL2_POL1_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL1_1(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL1_1_SHIFT))&EFTU_DTM_CH_CTRL2_POL1_1_MASK)
#define EFTU_DTM_CH_CTRL2_OC1_1_MASK   0x2000u
#define EFTU_DTM_CH_CTRL2_OC1_1_SHIFT  13u
#define EFTU_DTM_CH_CTRL2_OC1_1_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC1_1(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC1_1_SHIFT))&EFTU_DTM_CH_CTRL2_OC1_1_MASK)
#define EFTU_DTM_CH_CTRL2_SL1_1_MASK   0x4000u
#define EFTU_DTM_CH_CTRL2_SL1_1_SHIFT  14u
#define EFTU_DTM_CH_CTRL2_SL1_1_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL1_1(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL1_1_SHIFT))&EFTU_DTM_CH_CTRL2_SL1_1_MASK)
#define EFTU_DTM_CH_CTRL2_DT1_1_MASK   0x8000u
#define EFTU_DTM_CH_CTRL2_DT1_1_SHIFT  15u
#define EFTU_DTM_CH_CTRL2_DT1_1_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT1_1(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT1_1_SHIFT))&EFTU_DTM_CH_CTRL2_DT1_1_MASK)
#define EFTU_DTM_CH_CTRL2_POL0_2_MASK  0x10000u
#define EFTU_DTM_CH_CTRL2_POL0_2_SHIFT 16u
#define EFTU_DTM_CH_CTRL2_POL0_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL0_2(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL0_2_SHIFT))&EFTU_DTM_CH_CTRL2_POL0_2_MASK)
#define EFTU_DTM_CH_CTRL2_OC0_2_MASK   0x20000u
#define EFTU_DTM_CH_CTRL2_OC0_2_SHIFT  17u
#define EFTU_DTM_CH_CTRL2_OC0_2_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC0_2(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC0_2_SHIFT))&EFTU_DTM_CH_CTRL2_OC0_2_MASK)
#define EFTU_DTM_CH_CTRL2_SL0_2_MASK   0x40000u
#define EFTU_DTM_CH_CTRL2_SL0_2_SHIFT  18u
#define EFTU_DTM_CH_CTRL2_SL0_2_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL0_2(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL0_2_SHIFT))&EFTU_DTM_CH_CTRL2_SL0_2_MASK)
#define EFTU_DTM_CH_CTRL2_DT0_2_MASK   0x80000u
#define EFTU_DTM_CH_CTRL2_DT0_2_SHIFT  19u
#define EFTU_DTM_CH_CTRL2_DT0_2_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT0_2(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT0_2_SHIFT))&EFTU_DTM_CH_CTRL2_DT0_2_MASK)
#define EFTU_DTM_CH_CTRL2_POL1_2_MASK  0x100000u
#define EFTU_DTM_CH_CTRL2_POL1_2_SHIFT 20u
#define EFTU_DTM_CH_CTRL2_POL1_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL1_2(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL1_2_SHIFT))&EFTU_DTM_CH_CTRL2_POL1_2_MASK)
#define EFTU_DTM_CH_CTRL2_OC1_2_MASK   0x200000u
#define EFTU_DTM_CH_CTRL2_OC1_2_SHIFT  21u
#define EFTU_DTM_CH_CTRL2_OC1_2_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC1_2(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC1_2_SHIFT))&EFTU_DTM_CH_CTRL2_OC1_2_MASK)
#define EFTU_DTM_CH_CTRL2_SL1_2_MASK   0x400000u
#define EFTU_DTM_CH_CTRL2_SL1_2_SHIFT  22u
#define EFTU_DTM_CH_CTRL2_SL1_2_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL1_2(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL1_2_SHIFT))&EFTU_DTM_CH_CTRL2_SL1_2_MASK)
#define EFTU_DTM_CH_CTRL2_DT1_2_MASK   0x800000u
#define EFTU_DTM_CH_CTRL2_DT1_2_SHIFT  23u
#define EFTU_DTM_CH_CTRL2_DT1_2_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT1_2(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT1_2_SHIFT))&EFTU_DTM_CH_CTRL2_DT1_2_MASK)
#define EFTU_DTM_CH_CTRL2_POL0_3_MASK  0x1000000u
#define EFTU_DTM_CH_CTRL2_POL0_3_SHIFT 24u
#define EFTU_DTM_CH_CTRL2_POL0_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL0_3(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL0_3_SHIFT))&EFTU_DTM_CH_CTRL2_POL0_3_MASK)
#define EFTU_DTM_CH_CTRL2_OC0_3_MASK   0x2000000u
#define EFTU_DTM_CH_CTRL2_OC0_3_SHIFT  25u
#define EFTU_DTM_CH_CTRL2_OC0_3_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC0_3(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC0_3_SHIFT))&EFTU_DTM_CH_CTRL2_OC0_3_MASK)
#define EFTU_DTM_CH_CTRL2_SL0_3_MASK   0x4000000u
#define EFTU_DTM_CH_CTRL2_SL0_3_SHIFT  26u
#define EFTU_DTM_CH_CTRL2_SL0_3_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL0_3(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL0_3_SHIFT))&EFTU_DTM_CH_CTRL2_SL0_3_MASK)
#define EFTU_DTM_CH_CTRL2_DT0_3_MASK   0x8000000u
#define EFTU_DTM_CH_CTRL2_DT0_3_SHIFT  27u
#define EFTU_DTM_CH_CTRL2_DT0_3_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT0_3(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT0_3_SHIFT))&EFTU_DTM_CH_CTRL2_DT0_3_MASK)
#define EFTU_DTM_CH_CTRL2_POL1_3_MASK  0x10000000u
#define EFTU_DTM_CH_CTRL2_POL1_3_SHIFT 28u
#define EFTU_DTM_CH_CTRL2_POL1_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_POL1_3(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_POL1_3_SHIFT))&EFTU_DTM_CH_CTRL2_POL1_3_MASK)
#define EFTU_DTM_CH_CTRL2_OC1_3_MASK   0x20000000u
#define EFTU_DTM_CH_CTRL2_OC1_3_SHIFT  29u
#define EFTU_DTM_CH_CTRL2_OC1_3_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_OC1_3(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_OC1_3_SHIFT))&EFTU_DTM_CH_CTRL2_OC1_3_MASK)
#define EFTU_DTM_CH_CTRL2_SL1_3_MASK   0x40000000u
#define EFTU_DTM_CH_CTRL2_SL1_3_SHIFT  30u
#define EFTU_DTM_CH_CTRL2_SL1_3_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_SL1_3(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SL1_3_SHIFT))&EFTU_DTM_CH_CTRL2_SL1_3_MASK)
#define EFTU_DTM_CH_CTRL2_DT1_3_MASK   0x80000000u
#define EFTU_DTM_CH_CTRL2_DT1_3_SHIFT  31u
#define EFTU_DTM_CH_CTRL2_DT1_3_WIDTH  1u
#define EFTU_DTM_CH_CTRL2_DT1_3(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_DT1_3_SHIFT))&EFTU_DTM_CH_CTRL2_DT1_3_MASK)
/* CH_CTRL2 Reg Mask */
#define EFTU_DTM_CH_CTRL2_MASK         0xFFFFFFFFu

/* CH_CTRL2_SR Bit Fields */
#define EFTU_DTM_CH_CTRL2_SR_POL0_0_SR_MASK 0x1u
#define EFTU_DTM_CH_CTRL2_SR_POL0_0_SR_SHIFT 0u
#define EFTU_DTM_CH_CTRL2_SR_POL0_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL0_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL0_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL0_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC0_0_SR_MASK 0x2u
#define EFTU_DTM_CH_CTRL2_SR_OC0_0_SR_SHIFT 1u
#define EFTU_DTM_CH_CTRL2_SR_OC0_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC0_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC0_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC0_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL0_0_SR_MASK 0x4u
#define EFTU_DTM_CH_CTRL2_SR_SL0_0_SR_SHIFT 2u
#define EFTU_DTM_CH_CTRL2_SR_SL0_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL0_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL0_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL0_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT0_0_SR_MASK 0x8u
#define EFTU_DTM_CH_CTRL2_SR_DT0_0_SR_SHIFT 3u
#define EFTU_DTM_CH_CTRL2_SR_DT0_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT0_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT0_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT0_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_POL1_0_SR_MASK 0x10u
#define EFTU_DTM_CH_CTRL2_SR_POL1_0_SR_SHIFT 4u
#define EFTU_DTM_CH_CTRL2_SR_POL1_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL1_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL1_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL1_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC1_0_SR_MASK 0x20u
#define EFTU_DTM_CH_CTRL2_SR_OC1_0_SR_SHIFT 5u
#define EFTU_DTM_CH_CTRL2_SR_OC1_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC1_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC1_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC1_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL1_0_SR_MASK 0x40u
#define EFTU_DTM_CH_CTRL2_SR_SL1_0_SR_SHIFT 6u
#define EFTU_DTM_CH_CTRL2_SR_SL1_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL1_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL1_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL1_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT1_0_SR_MASK 0x80u
#define EFTU_DTM_CH_CTRL2_SR_DT1_0_SR_SHIFT 7u
#define EFTU_DTM_CH_CTRL2_SR_DT1_0_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT1_0_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT1_0_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT1_0_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_POL0_1_SR_MASK 0x100u
#define EFTU_DTM_CH_CTRL2_SR_POL0_1_SR_SHIFT 8u
#define EFTU_DTM_CH_CTRL2_SR_POL0_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL0_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL0_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL0_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC0_1_SR_MASK 0x200u
#define EFTU_DTM_CH_CTRL2_SR_OC0_1_SR_SHIFT 9u
#define EFTU_DTM_CH_CTRL2_SR_OC0_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC0_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC0_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC0_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL0_1_SR_MASK 0x400u
#define EFTU_DTM_CH_CTRL2_SR_SL0_1_SR_SHIFT 10u
#define EFTU_DTM_CH_CTRL2_SR_SL0_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL0_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL0_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL0_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT0_1_SR_MASK 0x800u
#define EFTU_DTM_CH_CTRL2_SR_DT0_1_SR_SHIFT 11u
#define EFTU_DTM_CH_CTRL2_SR_DT0_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT0_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT0_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT0_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_POL1_1_SR_MASK 0x1000u
#define EFTU_DTM_CH_CTRL2_SR_POL1_1_SR_SHIFT 12u
#define EFTU_DTM_CH_CTRL2_SR_POL1_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL1_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL1_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL1_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC1_1_SR_MASK 0x2000u
#define EFTU_DTM_CH_CTRL2_SR_OC1_1_SR_SHIFT 13u
#define EFTU_DTM_CH_CTRL2_SR_OC1_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC1_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC1_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC1_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL1_1_SR_MASK 0x4000u
#define EFTU_DTM_CH_CTRL2_SR_SL1_1_SR_SHIFT 14u
#define EFTU_DTM_CH_CTRL2_SR_SL1_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL1_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL1_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL1_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT1_1_SR_MASK 0x8000u
#define EFTU_DTM_CH_CTRL2_SR_DT1_1_SR_SHIFT 15u
#define EFTU_DTM_CH_CTRL2_SR_DT1_1_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT1_1_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT1_1_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT1_1_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_POL0_2_SR_MASK 0x10000u
#define EFTU_DTM_CH_CTRL2_SR_POL0_2_SR_SHIFT 16u
#define EFTU_DTM_CH_CTRL2_SR_POL0_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL0_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL0_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL0_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC0_2_SR_MASK 0x20000u
#define EFTU_DTM_CH_CTRL2_SR_OC0_2_SR_SHIFT 17u
#define EFTU_DTM_CH_CTRL2_SR_OC0_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC0_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC0_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC0_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL0_2_SR_MASK 0x40000u
#define EFTU_DTM_CH_CTRL2_SR_SL0_2_SR_SHIFT 18u
#define EFTU_DTM_CH_CTRL2_SR_SL0_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL0_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL0_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL0_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT0_2_SR_MASK 0x80000u
#define EFTU_DTM_CH_CTRL2_SR_DT0_2_SR_SHIFT 19u
#define EFTU_DTM_CH_CTRL2_SR_DT0_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT0_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT0_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT0_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_POL1_2_SR_MASK 0x100000u
#define EFTU_DTM_CH_CTRL2_SR_POL1_2_SR_SHIFT 20u
#define EFTU_DTM_CH_CTRL2_SR_POL1_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL1_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL1_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL1_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC1_2_SR_MASK 0x200000u
#define EFTU_DTM_CH_CTRL2_SR_OC1_2_SR_SHIFT 21u
#define EFTU_DTM_CH_CTRL2_SR_OC1_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC1_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC1_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC1_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL1_2_SR_MASK 0x400000u
#define EFTU_DTM_CH_CTRL2_SR_SL1_2_SR_SHIFT 22u
#define EFTU_DTM_CH_CTRL2_SR_SL1_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL1_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL1_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL1_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT1_2_SR_MASK 0x800000u
#define EFTU_DTM_CH_CTRL2_SR_DT1_2_SR_SHIFT 23u
#define EFTU_DTM_CH_CTRL2_SR_DT1_2_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT1_2_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT1_2_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT1_2_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_POL0_3_SR_MASK 0x1000000u
#define EFTU_DTM_CH_CTRL2_SR_POL0_3_SR_SHIFT 24u
#define EFTU_DTM_CH_CTRL2_SR_POL0_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL0_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL0_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL0_3_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC0_3_SR_MASK 0x2000000u
#define EFTU_DTM_CH_CTRL2_SR_OC0_3_SR_SHIFT 25u
#define EFTU_DTM_CH_CTRL2_SR_OC0_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC0_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC0_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC0_3_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL0_3_SR_MASK 0x4000000u
#define EFTU_DTM_CH_CTRL2_SR_SL0_3_SR_SHIFT 26u
#define EFTU_DTM_CH_CTRL2_SR_SL0_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL0_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL0_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL0_3_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT0_3_SR_MASK 0x8000000u
#define EFTU_DTM_CH_CTRL2_SR_DT0_3_SR_SHIFT 27u
#define EFTU_DTM_CH_CTRL2_SR_DT0_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT0_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT0_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT0_3_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_POL1_3_SR_MASK 0x10000000u
#define EFTU_DTM_CH_CTRL2_SR_POL1_3_SR_SHIFT 28u
#define EFTU_DTM_CH_CTRL2_SR_POL1_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_POL1_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_POL1_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_POL1_3_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_OC1_3_SR_MASK 0x20000000u
#define EFTU_DTM_CH_CTRL2_SR_OC1_3_SR_SHIFT 29u
#define EFTU_DTM_CH_CTRL2_SR_OC1_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_OC1_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_OC1_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_OC1_3_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_SL1_3_SR_MASK 0x40000000u
#define EFTU_DTM_CH_CTRL2_SR_SL1_3_SR_SHIFT 30u
#define EFTU_DTM_CH_CTRL2_SR_SL1_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_SL1_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_SL1_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_SL1_3_SR_MASK)
#define EFTU_DTM_CH_CTRL2_SR_DT1_3_SR_MASK 0x80000000u
#define EFTU_DTM_CH_CTRL2_SR_DT1_3_SR_SHIFT 31u
#define EFTU_DTM_CH_CTRL2_SR_DT1_3_SR_WIDTH 1u
#define EFTU_DTM_CH_CTRL2_SR_DT1_3_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL2_SR_DT1_3_SR_SHIFT))&EFTU_DTM_CH_CTRL2_SR_DT1_3_SR_MASK)
/* CH_CTRL2_SR Reg Mask */
#define EFTU_DTM_CH_CTRL2_SR_MASK      0xFFFFFFFFu

/* CH_CTRL3 Bit Fields */
#define EFTU_DTM_CH_CTRL3_CII0_MASK    0x1u
#define EFTU_DTM_CH_CTRL3_CII0_SHIFT   0u
#define EFTU_DTM_CH_CTRL3_CII0_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CII0(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CII0_SHIFT))&EFTU_DTM_CH_CTRL3_CII0_MASK)
#define EFTU_DTM_CH_CTRL3_CIS0_MASK    0x2u
#define EFTU_DTM_CH_CTRL3_CIS0_SHIFT   1u
#define EFTU_DTM_CH_CTRL3_CIS0_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CIS0(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CIS0_SHIFT))&EFTU_DTM_CH_CTRL3_CIS0_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL0_0_MASK 0x4u
#define EFTU_DTM_CH_CTRL3_TSEL0_0_SHIFT 2u
#define EFTU_DTM_CH_CTRL3_TSEL0_0_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL0_0(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL0_0_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL0_0_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL1_0_MASK 0x8u
#define EFTU_DTM_CH_CTRL3_TSEL1_0_SHIFT 3u
#define EFTU_DTM_CH_CTRL3_TSEL1_0_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL1_0(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL1_0_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL1_0_MASK)
#define EFTU_DTM_CH_CTRL3_CII1_MASK    0x100u
#define EFTU_DTM_CH_CTRL3_CII1_SHIFT   8u
#define EFTU_DTM_CH_CTRL3_CII1_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CII1(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CII1_SHIFT))&EFTU_DTM_CH_CTRL3_CII1_MASK)
#define EFTU_DTM_CH_CTRL3_CIS1_MASK    0x200u
#define EFTU_DTM_CH_CTRL3_CIS1_SHIFT   9u
#define EFTU_DTM_CH_CTRL3_CIS1_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CIS1(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CIS1_SHIFT))&EFTU_DTM_CH_CTRL3_CIS1_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL0_1_MASK 0x400u
#define EFTU_DTM_CH_CTRL3_TSEL0_1_SHIFT 10u
#define EFTU_DTM_CH_CTRL3_TSEL0_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL0_1(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL0_1_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL0_1_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL1_1_MASK 0x800u
#define EFTU_DTM_CH_CTRL3_TSEL1_1_SHIFT 11u
#define EFTU_DTM_CH_CTRL3_TSEL1_1_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL1_1(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL1_1_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL1_1_MASK)
#define EFTU_DTM_CH_CTRL3_CII2_MASK    0x10000u
#define EFTU_DTM_CH_CTRL3_CII2_SHIFT   16u
#define EFTU_DTM_CH_CTRL3_CII2_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CII2(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CII2_SHIFT))&EFTU_DTM_CH_CTRL3_CII2_MASK)
#define EFTU_DTM_CH_CTRL3_CIS2_MASK    0x20000u
#define EFTU_DTM_CH_CTRL3_CIS2_SHIFT   17u
#define EFTU_DTM_CH_CTRL3_CIS2_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CIS2(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CIS2_SHIFT))&EFTU_DTM_CH_CTRL3_CIS2_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL0_2_MASK 0x40000u
#define EFTU_DTM_CH_CTRL3_TSEL0_2_SHIFT 18u
#define EFTU_DTM_CH_CTRL3_TSEL0_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL0_2(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL0_2_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL0_2_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL1_2_MASK 0x80000u
#define EFTU_DTM_CH_CTRL3_TSEL1_2_SHIFT 19u
#define EFTU_DTM_CH_CTRL3_TSEL1_2_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL1_2(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL1_2_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL1_2_MASK)
#define EFTU_DTM_CH_CTRL3_CII3_MASK    0x1000000u
#define EFTU_DTM_CH_CTRL3_CII3_SHIFT   24u
#define EFTU_DTM_CH_CTRL3_CII3_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CII3(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CII3_SHIFT))&EFTU_DTM_CH_CTRL3_CII3_MASK)
#define EFTU_DTM_CH_CTRL3_CIS3_MASK    0x2000000u
#define EFTU_DTM_CH_CTRL3_CIS3_SHIFT   25u
#define EFTU_DTM_CH_CTRL3_CIS3_WIDTH   1u
#define EFTU_DTM_CH_CTRL3_CIS3(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_CIS3_SHIFT))&EFTU_DTM_CH_CTRL3_CIS3_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL0_3_MASK 0x4000000u
#define EFTU_DTM_CH_CTRL3_TSEL0_3_SHIFT 26u
#define EFTU_DTM_CH_CTRL3_TSEL0_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL0_3(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL0_3_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL0_3_MASK)
#define EFTU_DTM_CH_CTRL3_TSEL1_3_MASK 0x8000000u
#define EFTU_DTM_CH_CTRL3_TSEL1_3_SHIFT 27u
#define EFTU_DTM_CH_CTRL3_TSEL1_3_WIDTH 1u
#define EFTU_DTM_CH_CTRL3_TSEL1_3(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CH_CTRL3_TSEL1_3_SHIFT))&EFTU_DTM_CH_CTRL3_TSEL1_3_MASK)
/* CH_CTRL3 Reg Mask */
#define EFTU_DTM_CH_CTRL3_MASK         0x0F0F0F0Fu

/* PS_CTRL Bit Fields */
#define EFTU_DTM_PS_CTRL_RELBLK_MASK   0x3FFu
#define EFTU_DTM_PS_CTRL_RELBLK_SHIFT  0u
#define EFTU_DTM_PS_CTRL_RELBLK_WIDTH  10u
#define EFTU_DTM_PS_CTRL_RELBLK(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_PS_CTRL_RELBLK_SHIFT))&EFTU_DTM_PS_CTRL_RELBLK_MASK)
#define EFTU_DTM_PS_CTRL_PSU_IN_SEL_MASK 0x10000u
#define EFTU_DTM_PS_CTRL_PSU_IN_SEL_SHIFT 16u
#define EFTU_DTM_PS_CTRL_PSU_IN_SEL_WIDTH 1u
#define EFTU_DTM_PS_CTRL_PSU_IN_SEL(x) (((uint32)(((uint32)(x))<<EFTU_DTM_PS_CTRL_PSU_IN_SEL_SHIFT))&EFTU_DTM_PS_CTRL_PSU_IN_SEL_MASK)
#define EFTU_DTM_PS_CTRL_IN_POL_MASK   0x20000u
#define EFTU_DTM_PS_CTRL_IN_POL_SHIFT  17u
#define EFTU_DTM_PS_CTRL_IN_POL_WIDTH  1u
#define EFTU_DTM_PS_CTRL_IN_POL(x)     (((uint32)(((uint32)(x))<<EFTU_DTM_PS_CTRL_IN_POL_SHIFT))&EFTU_DTM_PS_CTRL_IN_POL_MASK)
#define EFTU_DTM_PS_CTRL_TIM_SEL_MASK  0x40000u
#define EFTU_DTM_PS_CTRL_TIM_SEL_SHIFT 18u
#define EFTU_DTM_PS_CTRL_TIM_SEL_WIDTH 1u
#define EFTU_DTM_PS_CTRL_TIM_SEL(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_PS_CTRL_TIM_SEL_SHIFT))&EFTU_DTM_PS_CTRL_TIM_SEL_MASK)
#define EFTU_DTM_PS_CTRL_SHIFT_SEL_MASK 0x300000u
#define EFTU_DTM_PS_CTRL_SHIFT_SEL_SHIFT 20u
#define EFTU_DTM_PS_CTRL_SHIFT_SEL_WIDTH 2u
#define EFTU_DTM_PS_CTRL_SHIFT_SEL(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_PS_CTRL_SHIFT_SEL_SHIFT))&EFTU_DTM_PS_CTRL_SHIFT_SEL_MASK)
/* PS_CTRL Reg Mask */
#define EFTU_DTM_PS_CTRL_MASK          0x003703FFu

/* CHn_DTV Bit Fields */
#define EFTU_DTM_CHn_DTV_RELRISE_MASK  0x1FFFu
#define EFTU_DTM_CHn_DTV_RELRISE_SHIFT 0u
#define EFTU_DTM_CHn_DTV_RELRISE_WIDTH 13u
#define EFTU_DTM_CHn_DTV_RELRISE(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_RELRISE_SHIFT))&EFTU_DTM_CHn_DTV_RELRISE_MASK)
#define EFTU_DTM_CHn_DTV_RELFALL_MASK  0x1FFF0000u
#define EFTU_DTM_CHn_DTV_RELFALL_SHIFT 16u
#define EFTU_DTM_CHn_DTV_RELFALL_WIDTH 13u
#define EFTU_DTM_CHn_DTV_RELFALL(x)    (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_RELFALL_SHIFT))&EFTU_DTM_CHn_DTV_RELFALL_MASK)
#define EFTU_DTM_CHn_DTV_HRES_MASK     0x80000000u
#define EFTU_DTM_CHn_DTV_HRES_SHIFT    31u
#define EFTU_DTM_CHn_DTV_HRES_WIDTH    1u
#define EFTU_DTM_CHn_DTV_HRES(x)       (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_HRES_SHIFT))&EFTU_DTM_CHn_DTV_HRES_MASK)
/* CH0_DTV Reg Mask */
#define EFTU_DTM_CHn_DTV_MASK          0x9FFF1FFFu

/* CH_SR Bit Fields */
#define EFTU_DTM_CH_SR_SL0_0_SR_SR_MASK 0x1u
#define EFTU_DTM_CH_SR_SL0_0_SR_SR_SHIFT 0u
#define EFTU_DTM_CH_SR_SL0_0_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL0_0_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL0_0_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL0_0_SR_SR_MASK)
#define EFTU_DTM_CH_SR_SL1_0_SR_SR_MASK 0x2u
#define EFTU_DTM_CH_SR_SL1_0_SR_SR_SHIFT 1u
#define EFTU_DTM_CH_SR_SL1_0_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL1_0_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL1_0_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL1_0_SR_SR_MASK)
#define EFTU_DTM_CH_SR_SL0_1_SR_SR_MASK 0x4u
#define EFTU_DTM_CH_SR_SL0_1_SR_SR_SHIFT 2u
#define EFTU_DTM_CH_SR_SL0_1_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL0_1_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL0_1_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL0_1_SR_SR_MASK)
#define EFTU_DTM_CH_SR_SL1_1_SR_SR_MASK 0x8u
#define EFTU_DTM_CH_SR_SL1_1_SR_SR_SHIFT 3u
#define EFTU_DTM_CH_SR_SL1_1_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL1_1_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL1_1_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL1_1_SR_SR_MASK)
#define EFTU_DTM_CH_SR_SL0_2_SR_SR_MASK 0x10u
#define EFTU_DTM_CH_SR_SL0_2_SR_SR_SHIFT 4u
#define EFTU_DTM_CH_SR_SL0_2_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL0_2_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL0_2_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL0_2_SR_SR_MASK)
#define EFTU_DTM_CH_SR_SL1_2_SR_SR_MASK 0x20u
#define EFTU_DTM_CH_SR_SL1_2_SR_SR_SHIFT 5u
#define EFTU_DTM_CH_SR_SL1_2_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL1_2_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL1_2_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL1_2_SR_SR_MASK)
#define EFTU_DTM_CH_SR_SL0_3_SR_SR_MASK 0x40u
#define EFTU_DTM_CH_SR_SL0_3_SR_SR_SHIFT 6u
#define EFTU_DTM_CH_SR_SL0_3_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL0_3_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL0_3_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL0_3_SR_SR_MASK)
#define EFTU_DTM_CH_SR_SL1_3_SR_SR_MASK 0x80u
#define EFTU_DTM_CH_SR_SL1_3_SR_SR_SHIFT 7u
#define EFTU_DTM_CH_SR_SL1_3_SR_SR_WIDTH 1u
#define EFTU_DTM_CH_SR_SL1_3_SR_SR(x)  (((uint32)(((uint32)(x))<<EFTU_DTM_CH_SR_SL1_3_SR_SR_SHIFT))&EFTU_DTM_CH_SR_SL1_3_SR_SR_MASK)
/* CH_SR Reg Mask */
#define EFTU_DTM_CH_SR_MASK            0x000000FFu

/* CTRL2 Bit Fields */
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_0_MASK 0x7u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_0_SHIFT 0u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_0_WIDTH 3u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_0(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_SEL_0_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_SEL_0_MASK)
#define EFTU_DTM_CTRL2_SHUTOFF_POL_0_MASK 0x8u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_0_SHIFT 3u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_0_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_0(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_POL_0_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_POL_0_MASK)
#define EFTU_DTM_CTRL2_UPD_MODE_0_MASK 0x30u
#define EFTU_DTM_CTRL2_UPD_MODE_0_SHIFT 4u
#define EFTU_DTM_CTRL2_UPD_MODE_0_WIDTH 2u
#define EFTU_DTM_CTRL2_UPD_MODE_0(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_UPD_MODE_0_SHIFT))&EFTU_DTM_CTRL2_UPD_MODE_0_MASK)
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_0_MASK 0x40u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_0_SHIFT 6u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_0_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_0(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUT_OFF_RST_0_SHIFT))&EFTU_DTM_CTRL2_SHUT_OFF_RST_0_MASK)
#define EFTU_DTM_CTRL2_WR_EN_0_MASK    0x80u
#define EFTU_DTM_CTRL2_WR_EN_0_SHIFT   7u
#define EFTU_DTM_CTRL2_WR_EN_0_WIDTH   1u
#define EFTU_DTM_CTRL2_WR_EN_0(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_WR_EN_0_SHIFT))&EFTU_DTM_CTRL2_WR_EN_0_MASK)
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_1_MASK 0x700u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_1_SHIFT 8u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_1_WIDTH 3u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_1(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_SEL_1_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_SEL_1_MASK)
#define EFTU_DTM_CTRL2_SHUTOFF_POL_1_MASK 0x800u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_1_SHIFT 11u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_1_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_1(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_POL_1_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_POL_1_MASK)
#define EFTU_DTM_CTRL2_UPD_MODE_1_MASK 0x3000u
#define EFTU_DTM_CTRL2_UPD_MODE_1_SHIFT 12u
#define EFTU_DTM_CTRL2_UPD_MODE_1_WIDTH 2u
#define EFTU_DTM_CTRL2_UPD_MODE_1(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_UPD_MODE_1_SHIFT))&EFTU_DTM_CTRL2_UPD_MODE_1_MASK)
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_1_MASK 0x4000u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_1_SHIFT 14u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_1_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_1(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUT_OFF_RST_1_SHIFT))&EFTU_DTM_CTRL2_SHUT_OFF_RST_1_MASK)
#define EFTU_DTM_CTRL2_WR_EN_1_MASK    0x8000u
#define EFTU_DTM_CTRL2_WR_EN_1_SHIFT   15u
#define EFTU_DTM_CTRL2_WR_EN_1_WIDTH   1u
#define EFTU_DTM_CTRL2_WR_EN_1(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_WR_EN_1_SHIFT))&EFTU_DTM_CTRL2_WR_EN_1_MASK)
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_2_MASK 0x70000u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_2_SHIFT 16u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_2_WIDTH 3u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_2(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_SEL_2_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_SEL_2_MASK)
#define EFTU_DTM_CTRL2_SHUTOFF_POL_2_MASK 0x80000u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_2_SHIFT 19u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_2_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_2(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_POL_2_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_POL_2_MASK)
#define EFTU_DTM_CTRL2_UPD_MODE_2_MASK 0x300000u
#define EFTU_DTM_CTRL2_UPD_MODE_2_SHIFT 20u
#define EFTU_DTM_CTRL2_UPD_MODE_2_WIDTH 2u
#define EFTU_DTM_CTRL2_UPD_MODE_2(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_UPD_MODE_2_SHIFT))&EFTU_DTM_CTRL2_UPD_MODE_2_MASK)
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_2_MASK 0x400000u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_2_SHIFT 22u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_2_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_2(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUT_OFF_RST_2_SHIFT))&EFTU_DTM_CTRL2_SHUT_OFF_RST_2_MASK)
#define EFTU_DTM_CTRL2_WR_EN_2_MASK    0x800000u
#define EFTU_DTM_CTRL2_WR_EN_2_SHIFT   23u
#define EFTU_DTM_CTRL2_WR_EN_2_WIDTH   1u
#define EFTU_DTM_CTRL2_WR_EN_2(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_WR_EN_2_SHIFT))&EFTU_DTM_CTRL2_WR_EN_2_MASK)
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_3_MASK 0x7000000u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_3_SHIFT 24u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_3_WIDTH 3u
#define EFTU_DTM_CTRL2_SHUTOFF_SEL_3(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_SEL_3_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_SEL_3_MASK)
#define EFTU_DTM_CTRL2_SHUTOFF_POL_3_MASK 0x8000000u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_3_SHIFT 27u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_3_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUTOFF_POL_3(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUTOFF_POL_3_SHIFT))&EFTU_DTM_CTRL2_SHUTOFF_POL_3_MASK)
#define EFTU_DTM_CTRL2_UPD_MODE_3_MASK 0x30000000u
#define EFTU_DTM_CTRL2_UPD_MODE_3_SHIFT 28u
#define EFTU_DTM_CTRL2_UPD_MODE_3_WIDTH 2u
#define EFTU_DTM_CTRL2_UPD_MODE_3(x)   (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_UPD_MODE_3_SHIFT))&EFTU_DTM_CTRL2_UPD_MODE_3_MASK)
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_3_MASK 0x40000000u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_3_SHIFT 30u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_3_WIDTH 1u
#define EFTU_DTM_CTRL2_SHUT_OFF_RST_3(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_SHUT_OFF_RST_3_SHIFT))&EFTU_DTM_CTRL2_SHUT_OFF_RST_3_MASK)
#define EFTU_DTM_CTRL2_WR_EN_3_MASK    0x80000000u
#define EFTU_DTM_CTRL2_WR_EN_3_SHIFT   31u
#define EFTU_DTM_CTRL2_WR_EN_3_WIDTH   1u
#define EFTU_DTM_CTRL2_WR_EN_3(x)      (((uint32)(((uint32)(x))<<EFTU_DTM_CTRL2_WR_EN_3_SHIFT))&EFTU_DTM_CTRL2_WR_EN_3_MASK)
/* CTRL2 Reg Mask */
#define EFTU_DTM_CTRL2_MASK            0xFFFFFFFFu

/* CHn_DTV_SR Bit Fields */
#define EFTU_DTM_CHn_DTV_SR_RELRISE_SR_MASK 0x1FFFu
#define EFTU_DTM_CHn_DTV_SR_RELRISE_SR_SHIFT 0u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_SR_WIDTH 13u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_SR_RELRISE_SR_SHIFT))&EFTU_DTM_CHn_DTV_SR_RELRISE_SR_MASK)
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_FE0RE1_MASK 0x4000u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_FE0RE1_SHIFT 14u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_FE0RE1_WIDTH 1u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_FE0RE1(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_FE0RE1_SHIFT))&EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_FE0RE1_MASK)
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_EN_MASK 0x8000u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_EN_SHIFT 15u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_EN_WIDTH 1u
#define EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_EN(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_EN_SHIFT))&EFTU_DTM_CHn_DTV_SR_RELRISE_UPD_EN_MASK)
#define EFTU_DTM_CHn_DTV_SR_RELFALL_SR_MASK 0x1FFF0000u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_SR_SHIFT 16u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_SR_WIDTH 13u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_SR(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_SR_RELFALL_SR_SHIFT))&EFTU_DTM_CHn_DTV_SR_RELFALL_SR_MASK)
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_FE0RE1_MASK 0x40000000u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_FE0RE1_SHIFT 30u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_FE0RE1_WIDTH 1u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_FE0RE1(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_FE0RE1_SHIFT))&EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_FE0RE1_MASK)
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_EN_MASK 0x80000000u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_EN_SHIFT 31u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_EN_WIDTH 1u
#define EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_EN(x) (((uint32)(((uint32)(x))<<EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_EN_SHIFT))&EFTU_DTM_CHn_DTV_SR_RELFALL_UPD_EN_MASK)
/* CH0_DTV_SR Reg Mask */
#define EFTU_DTM_CHn_DTV_SR_MASK       0xDFFFDFFFu

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef __cplusplus
}
#endif
#endif
