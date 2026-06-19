/**
 *   @file    Sema_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Sema - low level driver header file.
 *   @details Sema low level driver API.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Sema
*   PLATFORM             : Flagchip FC7300
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
*   0.9.0       25/10/2024    QXW0070       N/A          Sema Initial Version
==================================================================================================*/
#ifndef SEMA_REGOPS_H
#define SEMA_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Sema_Reg.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Function to get the semaphore status
 *
 * This function retrieves the status of a semaphore specified by the identifier u32Sema.
 * It accesses the SEMAn_STATUS array of a predefined MB object, which contains the status values of all semaphores.
 *
 * @param u32Sema Semaphore identifier used to specify the semaphore whose status is to be retrieved.
 * @return uint32 Returns the status value of the specified semaphore.
 *
 */
LOCAL_INLINE uint32 SEMA_HWA_GetSemaStatus(uint32 u32Sema)
{
    return SEMA->SEMAn_STATUS[u32Sema];
}

/**
 * @brief  Get semaphore lock status
 *
 * @param u32Sema  Semaphore identifier
 *
 * @return bool    Returns the semaphore lock status
 *
 * @note   This function checks the specific bit in the SEMAn_STATUS register to determine if the semaphore is locked
 */
LOCAL_INLINE boolean SEMA_HWA_GetSemaLock(uint32 u32Sema)
{
    return (boolean)(SEMA->SEMAn_STATUS[u32Sema] & SEMAn_STATUS_SEMA_FLG_MASK);
}

/**
 * @brief Get the master ID of a semaphore
 *
 * @param u32Sema Semaphore identifier used to select the specific semaphore status register
 * @return uint8 The master ID of the semaphore
 */
LOCAL_INLINE uint8 SEMA_HWA_GetSemaMasterID(uint32 u32Sema)
{
    return (uint8)((SEMA->SEMAn_STATUS[u32Sema] & SEMAn_STATUS_SEMA_MID_MASK) >> SEMAn_STATUS_SEMA_MID_SHIFT);
}

/**
 * @brief Get Semaphore Resource ID
 *
 * @param u32Sema Semaphore index, indicating which semaphore register to use.
 * @return uint8 Semaphore resource ID.
 */
LOCAL_INLINE uint8 SEMA_HWA_GetSemaResourceID(uint32 u32Sema)
{
    return (uint8)((SEMA->SEMAn_STATUS[u32Sema] & SEMAn_STATUS_SEMA_RSRC_ID_MASK) >> SEMAn_STATUS_SEMA_RSRC_ID_SHIFT);
}

/**
 * @brief Get the global semaphore status
 *
 * @return uint16 The current global semaphore status value
 */
LOCAL_INLINE uint16 SEMA_HWA_GetSemaGlobalStatus(void)
{
    return (uint16)(SEMA->SEMA_GLOBAL_STATUS & SEMA_GLOBAL_STATUS_MASK);
}

/**
 * @brief Enable semaphore lock protection
 *
 */
LOCAL_INLINE void SEMA_HWA_EnableSemaLockProtect(void)
{
    SEMA->SEMA_CTRL = 0U;
}

/**
 * @brief Disable semaphore lock protection
 *
 */
LOCAL_INLINE void SEMA_HWA_DisableSemaLockProtect(void)
{
    SEMA->SEMA_CTRL = SEMA_CTRL_MASK;
}

/**
 * @brief Get the SEMA error status register value
 *
 * @return uint32 The current value of the SEMA error status register
 */
LOCAL_INLINE uint32 SEMA_HWA_ReadSemaErrorStatus(void)
{
    return SEMA->SEMA_ERROR_STATUS;
}

/**
 * @brief Get Semaphore Error Resource ID
 *
 * @return uint8 The value of the semaphore error resource ID
 */
LOCAL_INLINE uint8 SEMA_HWA_GetSemaErrorResourceID(void)
{
    return (uint8)((SEMA->SEMA_ERROR_STATUS & SEMA_ERROR_STATUS_SEMA_ERR_RSRC_ID_MASK) >> SEMA_ERROR_STATUS_SEMA_ERR_RSRC_ID_SHIFT);
}

/**
 * @brief Get Semaphore Master ID
 *
 * @return uint8 The value of the semaphore error master ID
 */
LOCAL_INLINE uint8 SEMA_HWA_GetSemaErrorMasterID(void)
{
    return (uint8)((SEMA->SEMA_ERROR_STATUS & SEMA_ERROR_STATUS_SEMA_ERR_MID_MASK) >> SEMA_ERROR_STATUS_SEMA_ERR_MID_SHIFT);
}

/**
 * @brief Get Semaphore Error Status
 *
 * @return uint8 The value of the semaphore error status
 */
LOCAL_INLINE uint8 SEMA_HWA_GetSemaErrorStatus(void)
{
    return (uint8)(SEMA->SEMA_ERROR_STATUS & SEMA_ERROR_STATUS_SEMA_ERR_ST_MASK);
}

/**
 * @brief Sets the software reset signal for the SEMA module
 *
 */
LOCAL_INLINE void SEMA_HWA_SoftwareResetSema(void)
{
    SEMA->SEMA_SW_RESET = SEMA_KEY_SW_RESET;
}

/**
 * @brief Release all semaphores
 *
 * @param u8MasterId The Master ID used to identify the resource to be acquired
 */
LOCAL_INLINE void SEMA_HWA_ReleaseAllSema(uint8 u8MasterId)
{
    SEMA->SEMA_RELEASE = SEMA_KEY_RELEASE_ALL | (uint32)(u8MasterId & 0x7u);
}

/**
 * @brief Acquire a resource by its ID
 *
 * @param u32ResourceID The resource ID used to identify the resource to be acquired
 */
LOCAL_INLINE uint32 SEMA_HWA_GetResource(uint32 u32ResourceID)
{
    return SEMA->SEMA_RSRC[u32ResourceID];
}

/**
 * @brief Unlocks the specified resource
 *
 * This function unlocks the resource identified by u32ResourceID by setting the associated semaphore key to an unlocked state.
 *
 * @param u32ResourceID The resource identifier used to specify the resource to unlock
 */
LOCAL_INLINE void SEMA_HWA_UnlockResource(uint32 u32ResourceID)
{
    SEMA->SEMA_RSRC[u32ResourceID] = SEMA_KEY_UNLOCK;
}

LOCAL_INLINE void SEMA_HWA_ReleaseResource(uint32 u32ResourceID)
{
	SEMA->SEMA_RSRC[u32ResourceID] = SEMA_KEY_RELEASE;
}

/**
 * @brief Clear error status function
 *
 * Sets the status flag for the specified resource ID to the key value that clears the error status.
 *
 */
LOCAL_INLINE void SEMA_HWA_ClearErrorStatus(void)
{
    SEMA->SEMA_ERROR_STATUS = SEMA_KEY_CLEAR_ERROR;
}
#ifdef __cplusplus
}
#endif

#endif /* SEMA_REGOPS_H */
