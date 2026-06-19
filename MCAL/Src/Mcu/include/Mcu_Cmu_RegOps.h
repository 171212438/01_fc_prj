/**
*   @file    Mcu_Cmu_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Mcu Cmu header file.
*   @details Mcu Cmu low level driver API.
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
#ifndef MCU_CMU_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_CMU_REGOPS_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Mcu_Cmu_Regs.h"

/*=============== Local inline function ===============*/

/**
 * @brief Disable CMU
 *
 * @param pCmuReg CMU instance handle
 */
LOCAL_INLINE void CMU_HWA_DisableCmu(CMU_Type *pCmuReg)
{
    pCmuReg->CTRL &= ~(uint32)CMU_CTRL_ENABLE_MASK;
}

/**
 * @brief Enable CMU
 *
 * @param pCmuReg CMU instance handle
 */
LOCAL_INLINE void CMU_HWA_EnableCmu(CMU_Type *pCmuReg)
{
    pCmuReg->CTRL |= (uint32)CMU_CTRL_ENABLE_MASK;
}

/**
 * @brief Set Reference Window value
 *
 * @param pCmuReg CMU instance handle
 * @param u32Temp REF_WINDOW register value
 */
LOCAL_INLINE void CMU_HWA_SetRefWindow(CMU_Type *pCmuReg,uint32 u32Temp)
{
    pCmuReg->REF_WINDOW = u32Temp;
}


/**
 * @brief Set Minimum threshold register
 *
 * @param pCmuReg CMU instance handle
 * @param u32Temp Minimum threshold register value
 */
LOCAL_INLINE void CMU_HWA_SetMinCnts(CMU_Type *pCmuReg,uint32 u32Temp)
{
    pCmuReg->MIN = u32Temp;
}

/**
 * @brief Set Maximum threshold register
 *
 * @param pCmuReg CMU instance handle
 * @param u32Temp Maximum threshold register value
 */
LOCAL_INLINE void CMU_HWA_SetMaxCnts(CMU_Type *pCmuReg,uint32 u32Temp)
{
    pCmuReg->MAX = u32Temp;
}

/**
 * @brief Set period window Counter
 *
 * @param pCmuReg CMU instance handle
 * @param u8Temp Period window Counter value
 */
LOCAL_INLINE void CMU_HWA_SetPeriodWindow(CMU_Type *pCmuReg, uint8 u8Temp)
{
    pCmuReg->PERIOD = (pCmuReg->PERIOD & ~CMU_PERIOD_WINDOW_MASK) | CMU_PERIOD_WINDOW(u8Temp);
}

/**
 * @brief Set period window enable bit
 *
 * @param pCmuReg CMU instance handle
 * @param bEnable enable bit value
 */
LOCAL_INLINE void CMU_HWA_SetPeriodEnable(CMU_Type *pCmuReg, uint8 bEnable)
{
    pCmuReg->PERIOD = (pCmuReg->PERIOD & ~CMU_PERIOD_EN_MASK) | CMU_PERIOD_EN(bEnable);
}

/**
 * @brief Set CMU control register
 *
 * @param pCmuReg CMU instance handle
 * @param u32Temp Control register value
 */
LOCAL_INLINE void CMU_HWA_SetCtrlReg(CMU_Type *pCmuReg,uint32 u32Temp)
{
    pCmuReg->CTRL = u32Temp;
}

/**
 * @brief Enable CMU interrupt
 *
 * @param pCmuReg pCmu CMU instance handle
 */
LOCAL_INLINE void CMU_HWA_EnableInt(CMU_Type *pCmuReg)
{
    pCmuReg->CTRL |= (uint32)CMU_CTRL_IRQ_EN_MASK;
}

/**
 * @brief Disable CMU interrupt
 *
 * @param pCmuReg pCmu CMU instance handle
 */
LOCAL_INLINE void CMU_HWA_DisableInt(CMU_Type *pCmuReg)
{
    pCmuReg->CTRL &= ~(uint32)CMU_CTRL_IRQ_EN_MASK;
}

/**
* @brief return control register value.
*/
LOCAL_INLINE uint32 CMU_HWA_GetST(const CMU_Type * pCmuReg)
{
    return (uint32)pCmuReg->ST;
}

/**
* @brief clear control register value.
*/
LOCAL_INLINE void CMU_HWA_ClearST(CMU_Type *pCmuReg)
{
    pCmuReg->ST |= (uint32)(CMU_ST_MIS_MASK | CMU_ST_LOC_MASK);
}

#if defined(__cplusplus)
}
#endif
#endif /* #ifndef _MCU_CMU_REGOPS_H_ */
/** @}*/
