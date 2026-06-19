/**
 *   @file    CDD_Mb_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mailbox - hardware abstraction layer driver source file.
 *   @details This is the hardware abstraction layer driver source file for Mailbox.
 *
 *   @addtogroup Mailbox
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
*   0.2.0       09/09/2023    QXW0070       N/A          Mailbox Initial Version
*   0.4.0       08/11/2023    QXW0070       N/A          Add Mb_HL_GetIntrFlag,
*                                                        Mb_HL_GetChannelMasterCoreIndex
*   0.6.0       15/03/2024    QXW0070       N/A          Support more devices
==================================================================================================*/
/* PRQA S 2071,5087 EOF
   2071: [E] This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON: Variables and text need to be placed in the specified location
*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mb_RegOps.h"
#include "SchM_Mb.h"
#include "CDD_Mb_Hw.h"
#include "Mcal.h"
#include "Common_Cfg.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define MB_START_SEC_CONST_UNSPECIFIED
#include "Mb_MemMap.h"
/**
 * @brief          Master ID of each core
 */
static const uint8 s_aMasterIdTab[MB_MAX_HW_INTR_CHANNEL] = MB_MASTER_ID_TABLE;
#define MB_STOP_SEC_CONST_UNSPECIFIED
#include "Mb_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"
MB_TEXT_SECTION static uint32 Mb_HL_GetCoreIndex(uint32 u32CoreID);
#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief          Convert master ID to core index.
 *
 * @param[in]      u32CoreID         Master ID of the core
 *
 * @return         uint32            Core Index
 *
 */
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"
MB_TEXT_SECTION static uint32 Mb_HL_GetCoreIndex(uint32 u32CoreID)
{
    uint32 u32CoreIndex = 0U, u32Loop;
    for (u32Loop = 0U; u32Loop < MB_MAX_HW_INTR_CHANNEL; u32Loop++)
    {
        if (u32CoreID == s_aMasterIdTab[u32Loop])
        {
            u32CoreIndex = u32Loop;
            break;
        }
    }
    return u32CoreIndex;
}

#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"
/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"

/**
 * @brief          This function initializes the Mailbox interrupt register.
 *
 * @details        [SWS_Mb_00004][SWS_Mb_00006]
 *
 * @param[in]      u16ChannelRequestFlag   Request event flag, each bit represents a specific channel.
 * @param[in]      u16ChannelDoneFlag      Done event flag, each bit represents a specific channel.
 *
 * @return         void
 *
 */
MB_TEXT_SECTION void Mb_HL_Init(uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)
{
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIdx = Mb_HL_Core2MbIndex(GET_CPU_ID());

    /* PRQA S 3469 -- */
    uint32 u32Flag = (uint32)u16ChannelRequestFlag | ((uint32)u16ChannelDoneFlag << 16U);
    /* [SWS_Mb_00152] */
    SchM_Enter_Mb_MB_EXCLUSIVE_AREA_07();
    MB_HWA_UnlockIntrChannel(u32CoreIdx,
                             MB_MB_CCn_CTRL_FLG_LOCK_MASK | MB_MB_CCn_CTRL_FLG_MASK_LOCK_MASK |
                                 MB_MB_CCn_CTRL_INTEN_LOCK_MASK);
    /* Clear All interrupt flag */
    MB_HWA_ClearFlag(u32CoreIdx,
                     (MB_USED_CHANNEL_MASK) | (MB_USED_CHANNEL_MASK << MB_CHANNEL_CONFIG_COUNT));
    /*Configure the event mask*/
    MB_HWA_EnableEvent(u32CoreIdx, u32Flag);
    /* Enable event interrupts */
    MB_HWA_EnableIntr(u32CoreIdx, u32Flag);
    MB_HWA_LockIntrChannel(u32CoreIdx,
                           MB_MB_CCn_CTRL_FLG_LOCK_MASK | MB_MB_CCn_CTRL_FLG_MASK_LOCK_MASK |
                               MB_MB_CCn_CTRL_INTEN_LOCK_MASK);
    SchM_Exit_Mb_MB_EXCLUSIVE_AREA_07();
}

#if (MB_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the Mailbox interrupt register.
 * @details        [SWS_Mb_00010][SWS_Mb_00012]
 *
 * @return         void
 *
 */
MB_TEXT_SECTION void Mb_HL_DeInit(void)
{
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIdx = Mb_HL_Core2MbIndex(GET_CPU_ID());
    /* [SWS_Mb_00152] */
    SchM_Enter_Mb_MB_EXCLUSIVE_AREA_08();
    /* PRQA S 3469 -- */
    MB_HWA_UnlockIntrChannel(u32CoreIdx,
                             MB_MB_CCn_CTRL_FLG_MASK_LOCK_MASK | MB_MB_CCn_CTRL_INTEN_LOCK_MASK);
    /* mask all interrupts */
    MB_HWA_DisableEvent(u32CoreIdx,
                        (MB_USED_CHANNEL_MASK) | (MB_USED_CHANNEL_MASK << MB_CHANNEL_CONFIG_COUNT));
    /* disable all interrupts */
    MB_HWA_DisableIntr(u32CoreIdx,
                       (MB_USED_CHANNEL_MASK) | (MB_USED_CHANNEL_MASK << MB_CHANNEL_CONFIG_COUNT));
    MB_HWA_LockIntrChannel(u32CoreIdx,
                           MB_MB_CCn_CTRL_FLG_MASK_LOCK_MASK | MB_MB_CCn_CTRL_INTEN_LOCK_MASK);
    SchM_Exit_Mb_MB_EXCLUSIVE_AREA_08();
}
#endif

/**
 * @brief          Send data via the mailbox channel
 *
 * @param[in]      u32HwChannel The hardware channel index
 * @param[in]      u32DstCore   The index of the target core
 * @param[in]      u32Data0     The data written to DATA0
 * @param[in]      u32Data1     The data written to DATA1
 *
 * @return         Std_ReturnType
 * @retval         E_OK         Write successful
 * @retval         E_NOT_OK     Write failed, channel is busy
 *
 */
MB_TEXT_SECTION Std_ReturnType Mb_HL_SendData(uint32 u32HwChannel,
                                              uint32 u32DstCore,
                                              uint32 u32Data0,
                                              uint32 u32Data1)
{
    Std_ReturnType eSucc = E_NOT_OK;
    /* Get SEMA Lock*/
    uint32 u32Lock = MB_HWA_LockChannel(u32HwChannel);
    if (0U != u32Lock)
    {
        /* PRQA S 3469 ++
           This usage of a function-like macro looks like it could be replaced by an equivalent
           function call. REASON: Macros have higher execution efficiency
        */
        uint32 u32MasterCoreIdx = Mb_HL_Core2MbIndex(GET_CPU_ID());
        /* PRQA S 3469 -- */
        MB_HWA_ConfigDoneMasterId(u32HwChannel, s_aMasterIdTab[u32DstCore]);
        /* only master can receive done event */
        MB_HWA_ConfigDoneMask(u32HwChannel, (uint32)1U << u32MasterCoreIdx);
        /* Auto unlock after done */
        MB_HWA_ConfigAutoUnlock(u32HwChannel, (uint32)1U << u32MasterCoreIdx);
        /* [SWS_Mb_00023] */
        MB_HWA_WriteData(u32HwChannel, u32Data0, u32Data1);
        /* Trigger request event */
        MB_HWA_ConfigRequest(u32HwChannel, (uint32)1U << u32DstCore);
        eSucc = E_OK;
    }
    return eSucc;
}

/**
 * @brief          Trigger done event via the mailbox channel
 *
 * @param[in]      u32HwChannel The hardware channel index
 *
 * @return         Std_ReturnType
 * @retval         E_OK         Done successful
 * @retval         E_NOT_OK     Done failed, channel is idle or current core do not allow to trigger
 * a done
 *
 */
MB_TEXT_SECTION Std_ReturnType Mb_HL_DoneChannel(uint32 u32HwChannel)
{
    Std_ReturnType eSucc           = E_NOT_OK;
    uint32         u32DoneMasterID = MB_HWA_GetDoneMasterId(u32HwChannel);
    /* Check Channel is locked, and current core is the done master */
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    if ((0U != MB_HWA_GetChannelLocked(u32HwChannel)) &&
        (s_aMasterIdTab[Mb_HL_Core2MbIndex(GET_CPU_ID())] == u32DoneMasterID))
    /* PRQA S 3469 -- */
    {
        uint32 u32MasterID = MB_HWA_GetMasterID(u32HwChannel);
        uint32 u32DoneFlag = (uint32)1U << Mb_HL_GetCoreIndex(u32MasterID);
        if (0U != (u32DoneFlag & MB_HWA_GetDoneMask(u32HwChannel)))
        {
            /* [SWS_Mb_00025] */
            MB_HWA_SetDone(u32HwChannel, u32DoneFlag);
            eSucc = E_OK;
        }
    }
    return eSucc;
}

/**
 * @brief          Get the current state of the channel
 *
 * @param[in]      u32HwChannel The hardware channel index
 *
 * @return         Mb_ChannelStateType
 * @retval         MB_CHANNEL_IDLE      The current channel is idle.
 * @retval         MB_CHANNEL_BUSY      The current channel is busy.
 *
 */
MB_TEXT_SECTION Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)
{
    Mb_ChannelStateType eState;
    if (0U != MB_HWA_GetChannelLocked(u32HwChannel))
    {
        /* [SWS_Mb_00107] */
        eState = MB_CHANNEL_BUSY;
    }
    else
    {
        /* [SWS_Mb_00108] */
        eState = MB_CHANNEL_IDLE;
    }
    return eState;
}

/**
 * @brief          Force unlock the channel
 *
 * @param[in]      u32HwChannel The hardware channel index
 *
 * @return         void
 *
 */
MB_TEXT_SECTION void Mb_HL_ForceUnlockChannel(uint32 u32HwChannel)
{
    MB_HWA_UnlockChannel(u32HwChannel);
}

/**
 * @brief          Get and clear interrupt flag.
 *
 * @param[in]      u32CoreIndex      Core Index
 * @param[in]      u32Mask           Mask of the interrupt flag
 *
 * @return         uint32            Interrupt Flag
 *
 */
MB_TEXT_SECTION uint32 Mb_HL_GetIntrFlag(uint32 u32CoreIndex, uint32 u32Mask)
{
    uint32 u32FlagStat, u32MbIndex;
    u32MbIndex  = Mb_HL_Core2MbIndex(u32CoreIndex);
    u32FlagStat = MB_HWA_GetFlagStat(u32MbIndex, u32Mask);
    MB_HWA_UnlockIntrChannel(u32MbIndex, MB_MB_CCn_CTRL_FLG_LOCK_MASK);
    MB_HWA_ClearFlag(u32MbIndex, u32FlagStat);
    MB_HWA_LockIntrChannel(u32MbIndex, MB_MB_CCn_CTRL_FLG_LOCK_MASK);
    return u32FlagStat;
}

/**
 * @brief          Get the master core index of the channel.
 *
 * @param[in]      u32HwChannel      The mailbox channel index
 *
 * @return         uint32            Core Index
 *
 */
MB_TEXT_SECTION uint32 Mb_HL_GetChannelMasterCoreIndex(uint32 u32HwChannel)
{
    uint32 u32CoreIndex, u32MasterCoreId;
    /* Master ID to Core index */
    u32MasterCoreId = MB_HWA_GetMasterID(u32HwChannel);
    u32CoreIndex    = Mb_HL_GetCoreIndex(u32MasterCoreId);
    return u32CoreIndex;
}

/**
 * @brief          Get the data of the channel
 *
 * @param[in]      u32HwChannel The hardware channel index
 * @param[out]     pData0       Pointer for receiving DATA0
 * @param[out]     pData1       Pointer for receiving DATA1
 *
 * @return         void
 *
 */
MB_TEXT_SECTION void Mb_HL_GetChannelData(uint32 u32HwChannel, uint32 *pData0, uint32 *pData1)
{
    MB_HWA_GetData(u32HwChannel, pData0, pData1);
}

#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
