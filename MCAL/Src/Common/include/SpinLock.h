/**
 *   @file    SpinLock.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SpinLock - common header file.
 *   @details Spin Lock module common header file.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SpinLock
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
*   0.3.0       07/09/2023    QXW0070       N/A          Spin lock Initial Version
==================================================================================================*/

#ifndef SPIN_LOCK_H
#define SPIN_LOCK_H
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"
#ifdef SPIN_LOCK_USE_SEMA
#include "Sema_RegOps.h"
#else
#include "Mb_RegOps.h"
#endif
#include "Mcal.h"
/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef SPIN_LOCK_USE_SEMA

typedef enum
{
	SPINLOCK_SEMA_RES_ID_ADC = 200U,
	SPINLOCK_SEMA_RES_ID_CAN,
	SPINLOCK_SEMA_RES_ID_CRC,
	SPINLOCK_SEMA_RES_ID_CRYPTO,
	SPINLOCK_SEMA_RES_ID_DIO,
	SPINLOCK_SEMA_RES_ID_DMA,
	SPINLOCK_SEMA_RES_ID_ETH,
	SPINLOCK_SEMA_RES_ID_FEE,
	SPINLOCK_SEMA_RES_ID_FLS,
	SPINLOCK_SEMA_RES_ID_GPT,
	SPINLOCK_SEMA_RES_ID_I2C,
	SPINLOCK_SEMA_RES_ID_ICU,
	SPINLOCK_SEMA_RES_ID_LIN,
	SPINLOCK_SEMA_RES_ID_MB,
	SPINLOCK_SEMA_RES_ID_MCU,
	SPINLOCK_SEMA_RES_ID_MSC,
	SPINLOCK_SEMA_RES_ID_OCU,
	SPINLOCK_SEMA_RES_ID_OSPI,
	SPINLOCK_SEMA_RES_ID_PORT,
	SPINLOCK_SEMA_RES_ID_PWM,
	SPINLOCK_SEMA_RES_ID_SENT,
	SPINLOCK_SEMA_RES_ID_SPI,
	SPINLOCK_SEMA_RES_ID_TRGSEL,
	SPINLOCK_SEMA_RES_ID_UART,
	SPINLOCK_SEMA_RES_ID_WDOG,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE225,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE226,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE227,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE228,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE229,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE230,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE231,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE232,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE233,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE234,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE235,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE236,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE237,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE238,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE239,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE240,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE241,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE242,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE243,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE244,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE245,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE246,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE247,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE248,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE249,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE250,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE251,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE252,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE253,
	SPINLOCK_SEMA_RES_ID_MCAL_RESERVE254,
} SpinLock_SemaResourceIdType;

#define SEMA_RSC_ERR_INV_MASTER_ID			0xFF800000u
#define SEMA_RSC_ERR_NO_CHECK_VALUE			0xFFC00000u
#define SEMA_RSC_ERR_NO_SEMA				0xFFE00000u
#define SEMA_RSC_ERR_ALREADY_LOCKED			0xFCFFE000u
/**
 * @brief          Acquire the spin lock
 *
 * @param[in]      u8ResourceID				Resource ID of SEMA
 * @param[in]      pSpinLock				Point to the spin lock
 *
 * @return         Std_ReturnType 		The state of the channel.
 * @retval		  E_NOT_OK				Acquire spin lock failed.
 * @retval		  E_OK					Acquire spin lock success.
 *
 */
LOCAL_INLINE Std_ReturnType SpinLock_AcquireWithRes(uint8 u8ResourceID, volatile uint32 *pSpinLock)
{
	Std_ReturnType eStatus = E_NOT_OK;
	SEMA_HWA_UnlockResource(u8ResourceID);
	uint32 u32Status = SEMA_HWA_GetResource(u8ResourceID);
	u32Status &= (~SEMA_RSRC_MASK);
	if (0U == u32Status)
	{
		if (0u == *pSpinLock)
		{
			*pSpinLock = 1u;
			MCAL_DATA_MEMORY_BARRIER();
			eStatus = E_OK;
		}
		SEMA_HWA_ReleaseResource(u8ResourceID);
	}
	return eStatus;
}

#define SpinLock_Acquire(r)		SpinLock_AcquireWithRes(SPIN_LOCK_DEFAULT_SEMA_RES, r)
#else
/**
 * @brief          Acquire the spin lock
 *
 * @param[in]      pSpinLock				Point to the spin lock
 *
 * @return         Std_ReturnType 		The state of the channel.
 * @retval		  E_NOT_OK				Acquire spin lock failed.
 * @retval		  E_OK					Acquire spin lock success.
 *
 */
LOCAL_INLINE Std_ReturnType SpinLock_Acquire(volatile uint32 *pSpinLock)
{
    Std_ReturnType eStatus = E_NOT_OK;
    if (0u == *pSpinLock)
    {
        /* get sema lock */
        if (0u != MB_HWA_LockChannel(SPIN_LOCK_MB_CHANNEL))
        {
            if (0u == *pSpinLock)
            {
                *pSpinLock = 1u;
                MCAL_DATA_MEMORY_BARRIER();
                eStatus = E_OK;
            }
            /* release channel */
            MB_HWA_ReleaseChannel(SPIN_LOCK_MB_CHANNEL);
        }
    }

    return eStatus;
}

#endif
/**
 * @brief          Release the spin lock
 *
 * @param[in]      pSpinLock				Point to the spin lock
 *
 * @return         void
 *
 */
LOCAL_INLINE void SpinLock_Release(volatile uint32 *pSpinLock)
{
    *pSpinLock = 0u;
    MCAL_DATA_MEMORY_BARRIER();
}
#ifdef __cplusplus
}
#endif

#endif /* SPIN_LOCK_H */

/** @} */
