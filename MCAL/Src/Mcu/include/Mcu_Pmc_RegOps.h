/**
*   @file    Mcu_Pmc_Regops.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Mcu Pmc header file.
*   @details Mcu Pmc low level driver API.
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
#ifndef MCU_PMC_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_PMC_REGOPS_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Mcu_Pmc_Regs.h"

/**
 * @addtogroup mcu_pmc
 * @{
 */

/**
 * @brief Set PMC CONFIG register
 *
 * @param pPmcReg PMC instance handler
 * @param u32Val CONFIG register value
 */
LOCAL_INLINE void PMC_HWA_SetPmcConfiguration(PMC_Type *pPmcReg, uint32 u32Val)
{
    pPmcReg->CONFIG = u32Val;
}

/**
 * @brief Get PMC CONFIG register
 *
 * @param pPmcReg PMC instance handler
 * @return uint32 CONFIG register value
 */
LOCAL_INLINE uint32 PMC_HWA_GetPmcConfiguration(PMC_Type *pPmcReg)
{
   return (uint32)pPmcReg->CONFIG;
}

/**
 * @brief get PMC LVCSR register
 *
 * @param pPmcReg PMC instance handler
 * @return uint32 LVCSR register value
 */
LOCAL_INLINE uint32 PMC_HWA_GetLVCSRRegister(const PMC_Type *pPmcReg)
{
    return (uint32)(pPmcReg->LVCSR);
}


/**
 * @brief set PMC LVCSR register.
 *
 * This function configures the PMC LVCSR registe.
 *
 * @param pPmcReg PMC instance handler
 * @param u32LvcsrValue Set PMC LVCSR register value.
 */
LOCAL_INLINE void PMC_HWA_SetLVCSRRegister(PMC_Type *pPmcReg, uint32 u32LvcsrValue)
{
    pPmcReg->LVCSR = u32LvcsrValue;
}

/** @}*/

#if defined(__cplusplus)
}
#endif

#endif /* MCU_PMC_REGOPS_H */

/** @}*/

