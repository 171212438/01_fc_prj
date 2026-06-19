/**
 *   @file    Wdg_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Wdg - Hardware access layer header file.
 *   @details watchdog hardware access layer header file.
 *
 *   @addtogroup WDG
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : WDG
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
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
*   0.1.0       07/14/2023    QXW0074       N/A          WDG Initial Version
*   0.2.0       09/27/2023    QXW0074       N/A          Add multicore support
*   0.3.0       10/20/2023    QXW0074       N/A          Optimization code
*   0.4.0       11/17/2023    QXW0074       N/A          Optimization Plugins
*   0.5.0       03/16/2024    QXW0074       N/A          Fix some compilation issues and
*                                                        Changed some functions to inline
*   0.6.0       03/22/2024    QXW0074       N/A          Add FC7240 platform support
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by
user without hardware timer and optimization code
==================================================================================================*/
#ifndef _WDG_REGOPS_H_
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be
 * declared Reason: It is common definition in h files */
#define _WDG_REGOPS_H_
/* PRQA S 0602 -- */
/* PRQA S 0603 -- */
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Wdg_Reg.h"
#include "Wdg_Cfg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/* [SWS_Wdg_00161] [FMR_WDG_0004] */
/**
 * @brief Set CS register value, for Wdog working mode configuration.
 *
 * @param WDOG_Type *pWdog. point to wdog instance base register address.
 *
 * @param uint32 u32Cs. configured register value
 */
LOCAL_INLINE void WDOG_HWA_SetCs(WDOG_Type *pWdog, uint32 u32Cs)
{
    pWdog->CS = u32Cs;
}

/**
 * @brief Get CS register value, for WDOG working mode configuration.
 * @return uint32 CS register value.
 */
LOCAL_INLINE uint32 WDOG_HWA_GetCs(const WDOG_Type *const pWdog)
{
    uint32 u32Temp;
    u32Temp = pWdog->CS;
    return u32Temp;
}

/**
 * @brief Set COUNTER register value. for Wdog unlock and refresh usage.
 *
 * @param pWdog. point to wdog instance base register address.
 *
 * @param u32Counter. configured register value
 */
LOCAL_INLINE void WDOG_HWA_SetCounter(WDOG_Type *pWdog, uint32 u32Counter)
{
    pWdog->COUNTER = u32Counter;
}

/**
 * @brief Set TIMEOUT register value. for WDOG timeout value
 *
 * @param WDOG_Type *pWdog. point to wdog instance base register address.
 *
 * @param uint32 u32Timeout configured register value
 */
LOCAL_INLINE void WDOG_HWA_SetTimeout(WDOG_Type *pWdog, uint32 u32Timeout)
{
    pWdog->TIMEOUT = u32Timeout;
}

/**
 * @brief Set WINDOW register value. for windowed WDOG low threshold value.
 *
 * @param WDOG_Type *pWdog. point to wdog instance base register address.
 *
 * @param uint32 u32Window. configured register value
 */
LOCAL_INLINE void WDOG_HWA_SetWindow(WDOG_Type *pWdog, uint32 u32Window)
{
    pWdog->WINDOW = u32Window;
}
#if (WDG_FAST_CONFIGURATION_ENABLED == STD_ON)
/**
 * @brief Set Fast Configuration Control.
 *
 * @param WDOG_Type *pWdog. point to wdog instance base register address.
 *
 * @param u32Value. configured register value
 */
LOCAL_INLINE void WDOG_HWA_SetFastCfgState(WDOG_Type *pWdog, uint32 u32Value)
{
    pWdog->FASTCFG = u32Value;
}
#endif

#endif /* #ifndef _WDG_REGOPS_H_ */
/** @} */
