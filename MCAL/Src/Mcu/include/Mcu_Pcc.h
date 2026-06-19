/**
*   @file    Mcu_Pcc.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Pcc driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Pcc hardware IP.
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
#ifndef MCU_PCC_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_PCC_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcu_CfgPlatformDef.h"

/**
 * @addtogroup Mcu_Pcc
 * @{
 */

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANT-LIKE DEFINES
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

/*==================================================================================================
*                                            MACROS
==================================================================================================*/
/** Peripheral PCC base address */
#define PCC_BASE                            (0x40024000U)

/** @brief Marco for PCCn Bit Field definition */
#define PCC_CGC_MASK                        0x800000U

#if ( MCU_CFG_PCC_DWP_SUPPORT == STD_ON )
#define PCC_DWP_MASK                        0x70000000u
#define PCC_DWP_SHIFT                       28u
#define PCC_DWP(x)                          (((uint32)(((uint32)(x))<<PCC_DWP_SHIFT))&PCC_DWP_MASK)

#define PCC_WKU0_OFFSET                     0xFCU
#define PCC_CMU0_OFFSET                     0xC4U
#define PCC_CMU1_OFFSET                     0xC8U
#define PCC_CMU2_OFFSET                     0xCCU
#define PCC_CMU3_OFFSET                     0xD0U
#define PCC_CMU4_OFFSET                     0xD4U
#endif /* ( MCU_CFG_PCC_DWP_SUPPORT == STD_ON ) */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief define the PCC module initialization structure.
 */
typedef struct
{
    uint32 u32RegOffset;
    uint32 u32RegVal;
} PCC_CLKCtrlType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

void PCC_SetPcc(const PCC_CLKCtrlType *const pPccConfig);

#if ( MCU_CFG_PCC_DWP_SUPPORT == STD_ON )
uint8 PCC_GetPccDwp(uint32 u32OffSet);
#endif /* ( MCU_CFG_PCC_DWP_SUPPORT == STD_ON ) */

#if defined(__cplusplus)
}
#endif
/** @}*/
#endif

/** @}*/

