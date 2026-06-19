/**
 *   @file    Mb_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD_Mb - low level driver header file.
 *   @details Mailbox low level driver API.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Mailbox
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
*   0.2.0       06/09/2023    QXW0070       N/A          Mb Initial Version
==================================================================================================*/
#ifndef MB_REGOPS_H
#define MB_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mb_Reg.h"
#include "Common_Cfg.h"
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 *   @brief Command to force unlock a mailbox channel
 */
#if (DEVICE_SERIES == FC7240F2MDSxxxxT1A)
#define MB_FORCE_UNLOCK_CODE		(0xFC350000U)
#else
#define MB_FORCE_UNLOCK_CODE		(0xFC200000U)
#endif
/**
 * @brief The definition of mask all events
 *
 */
#define MB_EVENT_NONE          0u
/**
 * @brief The definition of receiving all events
 *
 */
#define MB_EVENT_ALL           0xFFFFFFFFu
/**
 * @brief The definition of receiving all request events
 *
 */
#define MB_EVENT_ALL_REQ       0x0000FFFFu
/**
 * @brief The definition of receiving all done events
 *
 */
#define MB_EVENT_ALL_DONE      0xFFFF0000u
/**
 * @brief The definition of request events on ch
 *
 */
#define MB_EVENT_REQ(ch)       (uint32)((uint32)1u << (ch))
/**
 * @brief The definition of done events on ch
 *
 */
#define MB_EVENT_DONE(ch)      (uint32)((uint32)1u << ((ch) + 16u))
/**
 * @brief The definition of issue to no core
 *
 */
#define MB_CORE_MASK_CORE_NONE 0u

/**
 * @brief The definition of issue to core
 *
 */
#define MB_CORE_MASK(core)     (uint32)(1u << (core))

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
enum
{
    MB_CORE_INDEX_CORE_0 = 0, /*!< Core index of core 0 */
    MB_CORE_INDEX_CORE_1,     /*!< Core index of core 1 */
    MB_CORE_INDEX_CORE_2,     /*!< Core index of core 2 */
    MB_CORE_INDEX_HSM,        /*!< Core index of HSM */
};

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Lock the mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Flag Lock flag
 */
LOCAL_INLINE void MB_HWA_LockIntrChannel(uint32 u32CoreIndex, uint32 u32Flag)
{
    MB->INTR[u32CoreIndex].MB_CCn_CTRL |= u32Flag;
}

/**
 * @brief Unlock the mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Flag Unlock flag
 */
LOCAL_INLINE void MB_HWA_UnlockIntrChannel(uint32 u32CoreIndex, uint32 u32Flag)
{
    MB->INTR[u32CoreIndex].MB_CCn_CTRL &= ~u32Flag;
}

/**
 * @brief Configure receive events of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask configuration for receiving events
 */
LOCAL_INLINE void MB_HWA_ConfigFlagMask(uint32 u32CoreIndex, uint32 u32Mask)
{
    MB->INTR[u32CoreIndex].MB_CCn_FLG_MASK = u32Mask;
}

/**
 * @brief Enable receive events of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask indicates the events to be enabled
 */
LOCAL_INLINE void MB_HWA_EnableEvent(uint32 u32CoreIndex, uint32 u32Mask)
{
    MB->INTR[u32CoreIndex].MB_CCn_FLG_MASK |= u32Mask;
}

/**
 * @brief Disable receive events of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask indicates the events to be enabled
 */
LOCAL_INLINE void MB_HWA_DisableEvent(uint32 u32CoreIndex, uint32 u32Mask)
{
    MB->INTR[u32CoreIndex].MB_CCn_FLG_MASK &= ~u32Mask;
}

/**
 * @brief Configure the interrupt of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask configuration for interrupts
 */
LOCAL_INLINE void MB_HWA_ConfigIntrEnable(uint32 u32CoreIndex, uint32 u32Mask)
{
    MB->INTR[u32CoreIndex].MB_CCn_INTEN = u32Mask;
}

/**
 * @brief Enable the interrupt of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask indicates the interrupts to be enabled
 */
LOCAL_INLINE void MB_HWA_EnableIntr(uint32 u32CoreIndex, uint32 u32Mask)
{
    MB->INTR[u32CoreIndex].MB_CCn_INTEN |= u32Mask;
}

/**
 * @brief Disable the interrupt of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask indicates the interrupts to be disabled
 */
LOCAL_INLINE void MB_HWA_DisableIntr(uint32 u32CoreIndex, uint32 u32Mask)
{
    MB->INTR[u32CoreIndex].MB_CCn_INTEN &= ~u32Mask;
}

/**
 * @brief Clear the flag of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask indicates the flags to be cleared
 */
LOCAL_INLINE void MB_HWA_ClearFlag(uint32 u32CoreIndex, uint32 u32Mask)
{
    MB->INTR[u32CoreIndex].MB_CCn_FLG = u32Mask;
}

/**
 * @brief Get the flag masks of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask the mask to get
 * @return the flag masks of the mailbox interrupt channel
 */
LOCAL_INLINE uint32 MB_HWA_GetFlagMask(uint32 u32CoreIndex, uint32 u32Mask)
{
    return MB->INTR[u32CoreIndex].MB_CCn_FLG_MASK & u32Mask;
}

/**
 * @brief Get the flags of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask the mask to get
 * @return the flags of the mailbox interrupt channel
 */
LOCAL_INLINE uint32 MB_HWA_GetFlag(uint32 u32CoreIndex, uint32 u32Mask)
{
	return MB->INTR[u32CoreIndex].MB_CCn_FLG & u32Mask;
}

/**
 * @brief Get the result of flag & inten of mailbox interrupt channel
 *
 * @param u32CoreIndex the index of the core
 * @param u32Mask the mask to get
 * @return the result of flag & inten of the mailbox interrupt channel
 */
LOCAL_INLINE uint32 MB_HWA_GetFlagStat(uint32 u32CoreIndex, uint32 u32Mask)
{
    return MB->INTR[u32CoreIndex].MB_CCn_FLG_STAT & u32Mask;
}

/**
 * @brief Get the master ID of the currently obtained channel
 *
 * @param u32Channel the index of the channel
 * @return the master ID
 */
LOCAL_INLINE uint32 MB_HWA_GetMasterID(uint32 u32Channel)
{
    return 	(MB->CHANNEL[u32Channel].MB_CCn_STAT & MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID_MASK)
    		>> 	MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID_SHIFT;
}

/**
 * @brief Get the security information of the currently obtained channel
 *
 * @param u32Channel the index of the channel
 * @return the security information
 */
LOCAL_INLINE uint32 MB_HWA_GetSecure(uint32 u32Channel)
{
    return MB->CHANNEL[u32Channel].MB_CCn_STAT & MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SEC_MASK;
}

/**
 * @brief Get the processing mode of the currently obtained channel
 *
 * @param u32Channel the index of the channel
 * @return the processing mode
 */
LOCAL_INLINE uint32 MB_HWA_GetSupervisor(uint32 u32Channel)
{
	return MB->CHANNEL[u32Channel].MB_CCn_STAT & MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SUPERVISOR_MASK;
}

/**
 * @brief Send data to the mailbox channel
 *
 * @param u32Channel the index of the channel
 * @param u32Data0 the data to be written to DATA0
 * @param u32Data1 the data to be written to DATA1
 */
LOCAL_INLINE void MB_HWA_WriteData(uint32 u32Channel, uint32 u32Data0, uint32 u32Data1)
{
    MB->CHANNEL[u32Channel].MB_CCn_DATA0 = u32Data0;
    MB->CHANNEL[u32Channel].MB_CCn_DATA1 = u32Data1;
}

/**
 * @brief Receive data from the mailbox channel
 *
 * @param u32Channel the index of the channel
 * @param pData0 the buffer to receive data0
 * @param pData1 the buffer to receive data1
 */
LOCAL_INLINE void MB_HWA_GetData(uint32 u32Channel, uint32 *pData0, uint32 *pData1)
{
    *pData0 = MB->CHANNEL[u32Channel].MB_CCn_DATA0;
    *pData1 = MB->CHANNEL[u32Channel].MB_CCn_DATA1;
}

/**
 * @brief Get the automatically clear status of the mailbox channel
 *
 * @param u32Channel the index of the channel
 * @param u32CoreIndex the index of the core
 * @return automatically clear the channel lock enable bit
 */
LOCAL_INLINE uint32 MB_HWA_GetAutoClear(uint32 u32Channel, uint32 u32CoreIndex)
{
    return MB->CHANNEL[u32Channel].MB_CCn_SEMA_UNLK
    					& ((uint32)1u << (u32CoreIndex + MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN0_SHIFT));
}

/**
 * @brief Release the mailbox channel
 *
 * @param u32Channel the index of the channel
 */
LOCAL_INLINE void MB_HWA_ReleaseChannel(uint32 u32Channel)
{
    MB->CHANNEL[u32Channel].MB_CCn_DONE = MB_MASTER_DONE_CODE;
}

/**
 * @brief Software clears channel lock
 *
 * @param u32Channel the index of the channel
 */
LOCAL_INLINE void MB_HWA_UnlockChannel(uint32 u32Channel)
{
    MB->CHANNEL[u32Channel].MB_CCn_CLR = MB_FORCE_UNLOCK_CODE;
}

/**
 * @brief Issue a done event
 *
 * @param u32Channel the index of the channel
 * @param u32DoneMask the cores to issue
 */
LOCAL_INLINE void MB_HWA_SetDone(uint32 u32Channel, uint32 u32DoneMask)
{
    MB->CHANNEL[u32Channel].MB_CCn_DONE = u32DoneMask;
}

/**
 * @brief Try to lock a channel [FMR_Mailbox_0001]
 *
 * @param u32Channel the index of the channel
 * @return Channel Lock Acquisition
 */
LOCAL_INLINE uint32 MB_HWA_LockChannel(uint32 u32Channel)
{
    return MB->CHANNEL[u32Channel].MB_CCn_SEMA & MB_MB_CCn_SEMA_LOCK_MASK;
}

/**
 * @brief Configure the master ID of the core that generates a done event
 *
 * @param u32Channel the index of the channel
 * @param u32MasterId master ID
 */
LOCAL_INLINE void MB_HWA_ConfigDoneMasterId(uint32 u32Channel, uint32 u32MasterId)
{
    MB->CHANNEL[u32Channel].MB_CCn_DONE_MASK =
    			(MB->CHANNEL[u32Channel].MB_CCn_DONE_MASK & (~MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_MASK))
			| 	MB_MB_CCn_DONE_MASK_DONE_MASTER_ID(u32MasterId);
}

/**
 * @brief Get the master ID of the core that generates a done event [FMR_Mailbox_0001]
 *
 * @param u32Channel the index of the channel
 * @return the master ID
 */
LOCAL_INLINE uint32 MB_HWA_GetDoneMasterId(uint32 u32Channel)
{
    return (MB->CHANNEL[u32Channel].MB_CCn_DONE_MASK & MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_MASK) >>
                         MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_SHIFT;
}

/**
 * @brief Configure the mask of the done events
 *
 * @param u32Channel the index of the channel
 * @param u32DoneMask the cores to issue
 */
LOCAL_INLINE void MB_HWA_ConfigDoneMask(uint32 u32Channel, uint32 u32DoneMask)
{
    MB->CHANNEL[u32Channel].MB_CCn_DONE_MASK = (MB->CHANNEL[u32Channel].MB_CCn_DONE_MASK & ~MB_MB_CCn_DONE_MASK) | u32DoneMask;
}

/**
 * @brief Get the mask of the done events [FMR_Mailbox_0001]
 *
 * @param u32Channel the index of the channel
 * @return the mask of the done events
 */
LOCAL_INLINE uint32 MB_HWA_GetDoneMask(uint32 u32Channel)
{
    return MB->CHANNEL[u32Channel].MB_CCn_DONE_MASK & MB_MB_CCn_DONE_MASK;
}

/**
 * @brief Configure the automatically clear of the lock enable bit
 *
 * @param u32Channel the index of the channel
 * @param u32AutoUnlockMask the automatically clear of the lock enable bit
 */
LOCAL_INLINE void MB_HWA_ConfigAutoUnlock(uint32 u32Channel, uint32 u32AutoUnlockMask)
{
    MB->CHANNEL[u32Channel].MB_CCn_SEMA_UNLK = u32AutoUnlockMask;
}

/**
 * @brief Issue request events
 *
 * @param u32Channel the index of the channel
 * @param u32RequestMask the cores to issue
 */
LOCAL_INLINE void MB_HWA_ConfigRequest(uint32 u32Channel, uint32 u32RequestMask)
{
    MB->CHANNEL[u32Channel].MB_CCn_REQUEST = u32RequestMask;
}

/**
 * @brief Get channel current lock status [FMR_Mailbox_0001]
 *
 * @param u32Channel the index of the channel
 * @return the mask of the channel lock state
 */
LOCAL_INLINE uint32 MB_HWA_GetChannelLocked(uint32 u32Channel)
{
    return MB->CHANNEL[u32Channel].MB_CCn_STAT & MB_MB_CCn_STAT_CURRENT_LOCK_STATUS_MASK;
}

#ifdef __cplusplus
}
#endif

#endif /* MB_REGOPS_H */
