/**
 * @file flexcore_HwA_WDOG.h
 * @author Flagchip
 * @brief flexcore Wdog hardware access layer
 * @version 0.1.0
 * @date 2023-12-28
 *
 * @copyright Copyright (c) 2023 Flagchip Semiconductors Co., Ltd.
 *
 * @details
 */
/* ********************************************************************************
   *   Revision History:
   *
   *   Version     Date          Initials      CR#          Descriptions
   *   ---------   ----------    ------------  ----------   ---------------
   *   0.1.0       2023-12-28    Flagchip099   N/A          First version for flexcore wdg
   ******************************************************************************** */

#ifndef _FLEXCORE_HWA_WDOG_H_
#define _FLEXCORE_HWA_WDOG_H_

#include "flexcore_device_header.h"
#include "flexcore_wdog_regs.h"
#include "flexcore_common.h"
/**
 * @addtogroup HwA_WDOG
 * @{
 */

/********* Local typedef ************/

/*********   Local inline function   ************/

/********* Wdog Register interface ************/
/**
 * @brief Set CS register value, for Wdog working mode configuration.
 *
 * @param WDOG_Type *pWdog. point to wdog instance base register address.
 *
 * @param uint32_t u32Cs. configured register value
 */
FLEXCORECODE
LOCAL_INLINE void WDOG_HWA_SetCs(WDOG_Type *pWdog, uint32_t u32Cs)
{
    pWdog->CS = u32Cs;
}

/**
 * @brief Get CS register value, for WDOG working mode configuration.
 * @return uint32_t CS register value.
 */
FLEXCORECODE
LOCAL_INLINE uint32_t WDOG_HWA_GetCs(WDOG_Type *pWdog)
{
    return pWdog->CS;
}

/**
 * @brief Get WDOG unlock status, if locked, register can't be written.
 * @return bool. true as unlocked. false as locked.
 */
FLEXCORECODE
LOCAL_INLINE bool WDOG_HWA_GetUnlockStatus(WDOG_Type *pWdog)
{
    return (bool)((((uint32_t)pWdog->CS & (uint32_t)WDOG_CS_ULK_STAT_MASK) != 0U) ? true : false);
}

/**
 * @brief Set COUNTER register value. for Wdog unlock and refresh usage.
 *
 * @param pWdog. point to wdog instance base register address.
 *
 * @param u32Counter. configured register value
 */
FLEXCORECODE
LOCAL_INLINE void WDOG_HWA_SetCounter(WDOG_Type *pWdog, uint32_t u32Counter)
{
    pWdog->COUNTER = u32Counter;
}

/**
 * @brief Set TIMEOUT register value. for WDOG timeout value
 *
 * @param WDOG_Type *pWdog. point to wdog instance base register address.
 *
 * @param uint16_t u16Timeout configured register value
 */
FLEXCORECODE
LOCAL_INLINE void WDOG_HWA_SetTimeout(WDOG_Type *pWdog, uint16_t u16Timeout)
{
    pWdog->TIMEOUT = u16Timeout;
}

/**
 * @brief Set WINDOW register value. for windowed WDOG low threshold value.
 *
 * @param WDOG_Type *pWdog. point to wdog instance base register address.
 *
 * @param uint16_t u16Window. configured register value
 */
FLEXCORECODE
LOCAL_INLINE void WDOG_HWA_SetWindow(WDOG_Type *pWdog, uint16_t u16Window)
{
    pWdog->WINDOW = u16Window;
}

/**
 * @brief Get WDOG reconfiguring status,
 * @return bool. true as success. false as fail.
 */
FLEXCORECODE
LOCAL_INLINE bool WDOG_HWA_GetReconfigureStatus(WDOG_Type *pWdog)
{
    return (bool)((((uint32_t)pWdog->CS & (uint32_t)WDOG_CS_RECFG_STAT_MASK) != 0U) ? true : false);
}

/** @}*/ /* HwA_WODG */

#endif /* #ifndef _FLEXCORE_HWA_WDOG_H_ */
