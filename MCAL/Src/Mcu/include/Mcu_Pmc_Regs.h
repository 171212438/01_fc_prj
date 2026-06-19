/**
*   @file    Mcu_Pmc_Regs.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Pmc module register and macro definitions.
*   @details Pmc module registers, and macro definitions used to manipulate the module registers.
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
#ifndef MCU_PMC_REGS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_PMC_REGS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcu_CfgPlatformDef.h"

/* ----------------------------------------------------------------------------

   -- PMC Peripheral Access Layer

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup PMC_Peripheral_Access_Layer PMC Peripheral Access Layer

 * @{

 */



/** PMC - Size of Registers Arrays */

/** PMC - Register Layout Typedef */
typedef struct {

    __IO  uint32 LVCSR                         ; /* Low Voltage Status and Control Register, offset: 0x0 */

    __IO  uint32 CONFIG                        ; /* PMC Configuration Register, offset: 0x4 */

} PMC_Type;



/** Number of instances of the PMC module. */

#define PMC_INSTANCE_COUNT                       (1u)



/* PMC - Peripheral instance base addresses */

/** Peripheral PMC base address */

#define PMC_BASE                                 (0x40044000u)

/** Peripheral PMC base pointer */

#define PMC                                      ((PMC_Type *)PMC_BASE)

/** Array initializer of PMC peripheral base pointers */

#define PMC_BASE_PTRS                            {PMC}

/* ----------------------------------------------------------------------------

   -- PMC Register Masks

   ---------------------------------------------------------------------------- */
/*!

 * @addtogroup PMC_Register_Masks PMC Register Masks

 * @{

 */



/* CONFIG Bit Fields */

#define PMC_CONFIG_LVD_IE_MASK         0x200u

#define PMC_CONFIG_LVD_IE_SHIFT        9u

#define PMC_CONFIG_LVD_IE(x)           (((uint32)(((uint32)(x))<<PMC_CONFIG_LVD_IE_SHIFT))&PMC_CONFIG_LVD_IE_MASK)

#define PMC_CONFIG_HVD_IE_MASK         0x100u

#define PMC_CONFIG_HVD_IE_SHIFT        8u

#define PMC_CONFIG_HVD_IE(x)           (((uint32)(((uint32)(x))<<PMC_CONFIG_HVD_IE_SHIFT))&PMC_CONFIG_HVD_IE_MASK)

#define PMC_CONFIG_RPM_VDD2P5_EN_MASK  0x8u

#define PMC_CONFIG_RPM_VDD2P5_EN_SHIFT 3u

#define PMC_CONFIG_RPM_VDD2P5_EN(x)    (((uint32)(((uint32)(x))<<PMC_CONFIG_RPM_VDD2P5_EN_SHIFT))&PMC_CONFIG_RPM_VDD2P5_EN_MASK)

/*!

 * @}

 */ /* end of group PMC_Register_Masks */


/*!

 * @}

 */ /* end of group PMC_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif
/** @}*/

#endif
