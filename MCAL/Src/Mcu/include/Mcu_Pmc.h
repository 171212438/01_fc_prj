/**
*   @file    Mcu_Pmc.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Pmc driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Pmc hardware IP.
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
#ifndef MCU_PMC_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_PMC_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Mcu_Pmc_Regs.h"


/**
 * @addtogroup Mcu_driver_pmc
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

#if (MCU_CFG_PMC_REG_7300_SUPPORT == STD_ON)
#define PMC_LVCSR_ALLFLAG_MASK         0x80FF007FU  /**< All flags of LVCSR MSASK */
#define PMC_LVCSR_HVD_FLAG_MASK        0x4FU        /**< All HVD flags of LVCSR MSASK */
#define PMC_LVCSR_LVD_FLAG_MASK        0x30U        /**< All LVD flags of LVCSR MSASK */
#elif (MCU_CFG_PMC_REG_7300GT_SUPPORT == STD_ON)
#define PMC_LVCSR_ALLFLAG_MASK         0x83FF001FU  /**< All flags of LVCSR MSASK */
#define PMC_LVCSR_HVD_FLAG_MASK        0x0FU        /**< All HVD flags of LVCSR MSASK */
#define PMC_LVCSR_LVD_FLAG_MASK        0x10U        /**< All LVD flags of LVCSR MSASK */
#elif (MCU_CFG_PMC_REG_7300GT_LITE_SUPPORT == STD_ON)
#define PMC_LVCSR_ALLFLAG_MASK         0x83FF007FU  /**< All flags of LVCSR MSASK */
#define PMC_LVCSR_HVD_FLAG_MASK        0x4FU        /**< All HVD flags of LVCSR MSASK */
#define PMC_LVCSR_LVD_FLAG_MASK        0x30U        /**< All LVD flags of LVCSR MSASK */
#elif (MCU_CFG_PMC_REG_7240_SUPPORT == STD_ON)
#define PMC_LVCSR_ALLFLAG_MASK         0x80F3007DU  /**< All flags of LVCSR MSASK */
#define PMC_LVCSR_HVD_FLAG_MASK        0x4DU        /**< All HVD flags of LVCSR MSASK */
#define PMC_LVCSR_LVD_FLAG_MASK        0x30U        /**< All LVD flags of LVCSR MSASK */
#else
/* More platform...*/
#endif /* (MCU_CFG_PMC_REG_7300_SUPPORT == STD_ON)  */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
========================================================================
==========================*/

/** @brief Pmc interrupt notification function type */
typedef void (*PMC_ISRCallbackType)(uint32 u32Flag);

/** @brief Pmc interrupt notification type */
typedef struct
{
    boolean u8PmcLvdIntEn;                /**< bit9, low voltage detect interrupt enable */
    boolean u8PmcHvdIntEn;                /**< bit8, high voltage detect interrupt enable */
    boolean u8PmcRpmV25En;                /**< bit3, V25 domain enable during RPM  */
} PMC_InterruptType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/** @brief Pmc interrupt notification function type */
extern PMC_ISRCallbackType PMC_ErrorNotify;

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

void Pmc_Init(const PMC_InterruptType *const pInterruptCfg);

void Pmc_Disable(void);

void PMC_UserIRQHandler(void);

#if defined(__cplusplus)
}
#endif
/** @}*/  /* Mcu_Pmc */
#endif

/** @}*/
