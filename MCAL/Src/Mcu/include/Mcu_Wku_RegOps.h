/**
*   @file    Mcu_Wku_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Mcu Wku header file.
*   @details Mcu Wku low level driver API.
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
#ifndef MCU_WKU_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_WKU_REGOPS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Mcu_Wku_Regs.h"


/*=============== Local inline function =============== */

/**
 * @brief Set wakeup source
 *
 * @param pWkuReg WKU instance handler
 * @param u32Wakeup Wakeup source type
 */
LOCAL_INLINE void WKU_HWA_SetWakeupSource(WKU_Type *pWkuReg, const uint32 u32Wakeup)
{
    pWkuReg->MWER0 = (uint32)(u32Wakeup & 0xFFU);
    pWkuReg->MWER1 = (uint32)((u32Wakeup >> 8U) & 0xFFU);
    pWkuReg->MWER2 = (uint32)((u32Wakeup >> 16U) & 0xFFU);
}

#if ( MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON )
/**
 * @brief Enable wakeup delay counter
 *
* @param pWkuReg WKU instance handler
 */
LOCAL_INLINE void WKU_HWA_EnableDelayCounter(WKU_Type *pWkuReg)
{
    pWkuReg->MDC |= (uint32)WKU_MDC_DLYEN_MASK;
}

/**
 * @brief Disable wakeup delay counter
 *
 * @param pWkuReg WKU instance handler
 */
LOCAL_INLINE void WKU_HWA_DisableDelayCounter(WKU_Type *pWkuReg)
{
    pWkuReg->MDC &= ~((uint32)WKU_MDC_DLYEN_MASK);
}

/**
 * @brief Set wakeup delay time
 *
 * @param pWkuReg WKU instance handler
 * @param u8DelayTime delay time
 */
LOCAL_INLINE void WKU_HWA_SetDelayTime(WKU_Type *pWkuReg, uint8 u8DelayTime)
{
    uint32 u32RegVal = pWkuReg->MDC;
    pWkuReg->MDC = ((u32RegVal & (~WKU_MDC_DELAYTIME_MASK)) | WKU_MDC_DELAYTIME(u8DelayTime));
}
#endif /* (MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON) */

#if ( (MCU_CFG_WKU_REG_7300GT_SUPPORT == STD_ON) || (MCU_CFG_WKU_REG_7300GT_LITE_SUPPORT == STD_ON) )
/**
 * @brief Set LP_WakeUp pad level
 *
 * @param pWkuReg WKU instance handler
 * @param bHighLevel pad level high status
 */
LOCAL_INLINE void WKU_HWA_SetLPWakeUpPAdToHigh(WKU_Type *pWkuReg, boolean bHighLevel)
{
    if( (boolean)TRUE == bHighLevel )
    {
        pWkuReg->SWW = 0xFC200001U;
    }
    else
    {
        pWkuReg->SWW = 0xFC200000U;
    }
}
#endif /* ( (MCU_CFG_WKU_REG_7300GT_SUPPORT == STD_ON) || (MCU_CFG_WKU_REG_7300GT_LITE_SUPPORT == STD_ON) ) */




#if defined(__cplusplus)
}
#endif

/** @}*/

#endif /* MCU_WKU_REGOPS_H */
