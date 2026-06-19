/**
*   @file    CDD_Mb.c
*   @version 1.5.1

*   @brief   Mailbox - driver API and development errors implemention.
*   @details This file contains the Mailbox driver API and development errors implemention.
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
*   0.2.0       07/09/2023    QXW0070       N/A          Mb Initial Version
*   0.4.0       23/10/2023    QXW0070       N/A          Optimize Mb_GetSpinLock
*   0.4.0       04/11/2023    QXW0070       N/A          Fix Mb_ValidateBuffer parameter error
*   0.6.0       11/03/2024    QXW0070       N/A          Add the switch to disable runtime error report
==================================================================================================*/
/* PRQA S 2071,5087 EOF
   2071: [E] This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 2053 EOF
   This block comment appears to comment out source code.
   REASON: This is a normal usage
*/
#ifdef __cplusplus
extern "C"
{
#endif

/***************************************************************************************************
 *                                        INCLUDE FILES
 ***************************************************************************************************/
#include "CDD_Mb_Version.h"
#include "CDD_Mb.h"
#include "CDD_Mb_Hw.h"
#include "SchM_Mb.h"
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF) || (MB_DEV_ERROR_DETECT == STD_ON)
/* [SWS_Mb_00111] */
#include "Det.h"
#endif
#if (MB_MESSAGE_QUEUE_API == STD_ON)
#include "SpinLock.h"
#endif
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Mailbox configuration header file are of the same Autosar version */
#if ((MB_AR_RELEASE_MAJOR_VERSION != MB_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (MB_AR_RELEASE_MINOR_VERSION != MB_CFG_AR_RELEASE_MINOR_VERSION) || \
     (MB_AR_RELEASE_REVISION_VERSION != MB_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of CDD_Mb.h and CDD_Mb_Cfg.h are different"
#endif

/* Check if current file and Mailbox configuration header file are of the same software version */
#if ((MB_SW_MAJOR_VERSION != MB_CFG_SW_MAJOR_VERSION) || \
     (MB_SW_MINOR_VERSION != MB_CFG_SW_MINOR_VERSION) || \
     (MB_SW_PATCH_VERSION != MB_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of CDD_Mb.h and CDD_Mb_Cfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
#if (MB_MESSAGE_QUEUE_API == STD_ON)
/**
 * @brief          type definition of the ring block state machine.
 *
 */
typedef struct
{
    uint32 u32ReadIndex;  /**< @brief Read position of the ring block. */
    uint32 u32WriteIndex; /**< @brief Write position of the ring block. */
    uint16 u16ReadFlip;   /**< @brief Flip flag of read. */
    uint16 u16WriteFlip;  /**< @brief Flip flag of write. */
    uint8  u8Reading;     /**< @brief Is the ring block being read. */
    uint8  u8Writing;     /**< @brief Is the ring block being written. */
    uint8  u8Checking;    /**< @brief Is the ring block being checked. */
} Mb_RingBlockSMType;
#endif /* (MB_MESSAGE_QUEUE_API == STD_ON) */
/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/**
 * @brief          Definition of skipping type checking
 *
 */
#define MB_SKIP_MODE_CHECK ((Mb_ChannelModeType)0xFFu)

#ifndef PROCESS_UNUSED_VAR
#if (defined(__ICCARM__))

#define PROCESS_UNUSED_VAR(var) (var) = (var);

#elif defined __GNUC__
#define PROCESS_UNUSED_VAR(var) (void)(var);
#else
#define PROCESS_UNUSED_VAR(var)
#endif /* #if (defined(__ICCARM__)) */
#endif /* #ifndef PROCESS_UNUSED_VAR */
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#ifdef MB_PRECOMPILE_SUPPORT
#define MB_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mb_MemMap.h"

MB_DATA_SECTION extern const Mb_ConfigType Mb_Config;

#define MB_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mb_MemMap.h"
#endif
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define MB_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Mb_MemMap.h"
/* PRQA S 3408 ++  #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object
 * or function with external linkage is defined REASON: The object will be referenced in other
 * module and declared where it is used
 */
/**
 * @brief          Global Configuration Pointer.
 * @details        Data structure containing the set of configuration parameters required for
 *                 initializing the Mailbox Driver and Mailbox HW Unit(s).
 *
 */
MB_DATA_SECTION static const Mb_ConfigType *Mb_Cfg_Ptr[MB_CORE_COUNT];
/* PRQA S 3408 -- */
#define MB_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Mb_MemMap.h"

#define MB_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Mb_MemMap.h"
#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
/**
 * @brief          State machine of the ring blocks
 *
 */
MB_DATA_SECTION static Mb_RingBlockSMType s_aMqRingBlockStatus[MB_MESSAGE_QUEUE_COUNT];
/**
 * @brief          Spin lock of the mailbox module
 *
 */
MB_DATA_SECTION static uint32 s_u32MbSpinLock;
#endif /* (MB_MESSAGE_QUEUE_API == STD_ON) */
#define MB_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Mb_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"
#if (MB_DEV_ERROR_DETECT == STD_ON)
MB_TEXT_SECTION LOCAL_INLINE Std_ReturnType Mb_ValidateChannelMode(uint8              u8ServiceID,
                                                                   Mb_ChannelType     Channel,
                                                                   Mb_ChannelModeType Mode,
                                                                   uint32             u32CoreIndex);
#if (MB_MESSAGE_QUEUE_API == STD_ON)
MB_TEXT_SECTION LOCAL_INLINE Std_ReturnType Mb_ValidateBuffer(uint8        u8ServiceID,
                                                              const uint8 *Buffer,
                                                              uint32       BufferLength,
                                                              uint32       BlockSize,
                                                              Mb_CoreType  AllowedCore,
                                                              Mb_CoreType  CurrentCore);
#endif
#endif
#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
MB_TEXT_SECTION LOCAL_INLINE Mb_MessageQueueStateType Mb_GetMqStatus(uint32 SubChannel);
MB_TEXT_SECTION LOCAL_INLINE Std_ReturnType           Mb_GetSpinLock(uint8 u8ServiceID);
MB_TEXT_SECTION LOCAL_INLINE void                     Mb_ReleaseSpinLock(void);
#endif
#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"

#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
/**
 * @brief          Get the spin lock of the mailbox
 *
 * @details           [SWS_Mb_00154]
 * @param[in]      u8ServiceID   The service id of the caller function
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Get spin lock success.
 * @retval         E_NOT_OK      Get spin lock failed.
 *
 */
MB_TEXT_SECTION LOCAL_INLINE Std_ReturnType Mb_GetSpinLock(uint8 u8ServiceID)
{
    Std_ReturnType eSucc      = E_OK;
    uint32         u32Timeout = MB_SPIN_LOCK_TIMEOUT;
    /* PRQA S 3415 ++ #Misra-C:2012 Rule-13.5 The right hand operand of a logical && or || operator
     * shall not contain persistent side effects. REASON: To improve efficiency, don't need to
     * acquire the spin lock after a timeout
     */
#ifdef SPIN_LOCK_USE_SEMA
    while ((0U < u32Timeout) &&
           (E_OK != SpinLock_AcquireWithRes(SPINLOCK_SEMA_RES_ID_MB, &s_u32MbSpinLock)))
#else
    while ((0U < u32Timeout) && (E_OK != SpinLock_Acquire(&s_u32MbSpinLock)))
#endif
    {
        u32Timeout--;
    }
    /* PRQA S 3415 -- */
    if (0U == u32Timeout)
    {
        eSucc = E_NOT_OK;
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
        /* [SWS_Mb_000143][SWS_Mb_00145][SWS_Mb_00146][SWS_Mb_00148][SWS_Mb_00150] */
        (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                     (uint8)0U,
                                     (uint8)u8ServiceID,
                                     (uint8)MB_E_GET_SPIN_LOCK_FAILED);
#else
        PROCESS_UNUSED_VAR(u8ServiceID);
#endif
    }
    return eSucc;
}

/**
 * @brief          Release the spin lock of the mailbox
 *
 * @return         void
 *
 */
MB_TEXT_SECTION LOCAL_INLINE void Mb_ReleaseSpinLock(void)
{
    SpinLock_Release(&s_u32MbSpinLock);
}
#endif

#if (MB_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief          Validate the channel conditions
 *
 * @param[in]      u8ServiceID   The service id of the caller function
 * @param[in]      Channel       Channel ID to be checked
 * @param[in]      Mode          Expected mode
 * @param[in]      u32CoreIndex  Core ID
 *
 * @return         Std_ReturnType
 * @retval         E_OK          The channel conditions is correct
 * @retval         E_NOT_OK      The channel conditions is incorrect
 *
 */
MB_TEXT_SECTION LOCAL_INLINE Std_ReturnType Mb_ValidateChannelMode(uint8              u8ServiceID,
                                                                   Mb_ChannelType     Channel,
                                                                   Mb_ChannelModeType Mode,
                                                                   uint32             u32CoreIndex)
{
    Std_ReturnType eValid = E_NOT_OK;
    /* Check Module initialized */
    if (NULL_PTR == Mb_Cfg_Ptr[u32CoreIndex])
    {
        (void)Det_ReportError((uint16)MB_MODULE_ID, (uint8)0, u8ServiceID, (uint8)MB_E_UNINIT);
    }
    /* Check the channel is in range */
    else if (Channel >= Mb_Cfg_Ptr[u32CoreIndex]->tChannelCount)
    {
        (void)Det_ReportError((uint16)MB_MODULE_ID, (uint8)0, u8ServiceID, (uint8)MB_E_PARAM_CHANNEL);
    }
    /* Check if the current channel mode matches. */
    /* PRQA S 1317 ++ #Value of constant expression is not in the enum type to which it is being
     * converted. REASON: This value represents skipping checks, and it is only used in this driver
     */
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type. REASON: This value represents skipping checks, and it is only
     * used in this driver
     */
    else if ((Mode != MB_SKIP_MODE_CHECK) &&
             (Mode != Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].eChannelMode))
    /* PRQA S 1317,4342 -- */
    {
        (void)Det_ReportError((uint16)MB_MODULE_ID, (uint8)0, u8ServiceID, (uint8)MB_E_PARAM_CHANNEL);
    }
#if (MB_SUPPORT_MULTICORE == STD_ON)
    else if (0U == (Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[(uint32)Channel].u16ChannelPartition &
                    ((uint16)1U << u32CoreIndex)))
    {
        /* Check if the channel can be operated on the current partition. */
        (void)Det_ReportError((uint16)MB_MODULE_ID, (uint8)0U, u8ServiceID, (uint8)MB_E_INV_PARTITION);
    }
#endif
    else
    {
        eValid = E_OK;
    }
    return eValid;
}
#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
/**
 * @brief          Validate the message queue parameters
 *
 * @param[in]      u8ServiceID   The service id of the caller function
 * @param[in]      Buffer        Pointer to send/receive buffer
 * @param[in]      BufferLength  Send/Receive buffer byte length
 * @param[in]      BlockSize     Block size of the message ring block.
 * @param[in]      AllowedCore   Sender/Receiver of the message queue.
 * @param[in]      CurrentCore   Current core.
 *
 * @return         Std_ReturnType
 * @retval         E_OK          The message queue parameters are correct
 * @retval         E_NOT_OK      The message queue parameters are incorrect
 *
 */
MB_TEXT_SECTION LOCAL_INLINE Std_ReturnType Mb_ValidateBuffer(uint8        u8ServiceID,
                                                              const uint8 *Buffer,
                                                              uint32       BufferLength,
                                                              uint32       BlockSize,
                                                              Mb_CoreType  AllowedCore,
                                                              Mb_CoreType  CurrentCore)
{
    Std_ReturnType eValid = E_NOT_OK;
    if (AllowedCore != CurrentCore)
    {
        /* Only message sender allowed to call Mb_SendMessage,
         * message receiver allowed to call Mb_GetMessage */
        (void)Det_ReportError((uint16)MB_MODULE_ID,
                              (uint8)0U,
                              (uint8)u8ServiceID,
                              (uint8)MB_E_PARAM_CORE);
    }
    else if (Buffer == NULL_PTR)
    {
        /* Pointer to buffer must be valid */
        (void)Det_ReportError((uint16)MB_MODULE_ID,
                              (uint8)0U,
                              (uint8)u8ServiceID,
                              (uint8)MB_E_PARAM_POINTER);
    }
    else if (BufferLength > BlockSize)
    {
        /* buffer length must be valid */
        (void)Det_ReportError((uint16)MB_MODULE_ID,
                              (uint8)0U,
                              (uint8)u8ServiceID,
                              (uint8)MB_E_PARAM_BUFFER_SIZE);
    }
    else
    {
        eValid = E_OK;
    }

    return eValid;
}
#endif
#endif

#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
/**
 * @brief          Get the message queue state of the channel
 *
 * @param[in]      SubChannel                    Channel ID to be checked
 *
 * @return         Mb_MessageQueueStateType      Current message queue state
 * @retval         MB_MESSAGE_QUEUE_EMPTY        The message queue is empty.
 * @retval         MB_MESSAGE_QUEUE_FULL         The message queue is full.
 * @retval         MB_MESSAGE_QUEUE_HALF_FULL    The message queue is half full.
 *
 */
MB_TEXT_SECTION LOCAL_INLINE Mb_MessageQueueStateType Mb_GetMqStatus(uint32 SubChannel)
{
    Mb_MessageQueueStateType eStatus;
    if (s_aMqRingBlockStatus[(uint32)SubChannel].u32ReadIndex ==
        s_aMqRingBlockStatus[(uint32)SubChannel].u32WriteIndex)
    {
        if (s_aMqRingBlockStatus[(uint32)SubChannel].u16ReadFlip ==
            s_aMqRingBlockStatus[(uint32)SubChannel].u16WriteFlip)
        {
            /*
             * ----(r,w)-----
             * */
            eStatus = MB_MESSAGE_QUEUE_EMPTY;
        }
        else
        {
            /*
             * oooo(w,r)ooooo
             * */
            eStatus = MB_MESSAGE_QUEUE_FULL;
        }
    }
    else
    {
        /*
         * ----(r)oooo(w)----
         * */
        eStatus = MB_MESSAGE_QUEUE_HALF_FULL;
    }
    return eStatus;
}
#endif
#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"
/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"
MB_TEXT_SECTION void Mb_DoneHandle(uint32 u32HwChannel, uint32 u32CoreIndex);
MB_TEXT_SECTION void Mb_RequestHandle(uint32 u32HwChannel,
                                      uint32 u32MasterCore,
                                      uint32 u32Data0,
                                      uint32 u32Data1,
                                      uint32 u32CoreIndex);
/**
 * @brief          Request event handle
 * @details        The mailbox interrupt service function calls
 *                 this function when a request event is received.
 *
 * @param[in]      u32HwChannel      The hardware channel that receive the request
 * @param[in]      u32MasterCore     The source core of the request
 * @param[in]      u32Data0          The received DATA0
 * @param[in]      u32Data1          The received DATA1
 * @param[in]      u32CoreIndex      Current core index
 *
 * @return         void
 *
 */
MB_TEXT_SECTION void Mb_RequestHandle(uint32 u32HwChannel,
                                      uint32 u32MasterCore,
                                      uint32 u32Data0,
                                      uint32 u32Data1,
                                      uint32 u32CoreIndex)
{
    /* [FMR_Mailbox_0002] */
    if (NULL_PTR != Mb_Cfg_Ptr[u32CoreIndex])
    {
        Mb_ChannelType Channel = Mb_Cfg_Ptr[u32CoreIndex]->pMbHwChannelMap[u32HwChannel];
        if (MB_HW_UNUSED != Channel)
        {
            Mb_ChannelType SubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[Channel];
            if (MB_MODE_FREE == Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].eChannelMode)
            {
                if (NULL_PTR != Mb_Cfg_Ptr[u32CoreIndex]->pFreeChannel[SubChannel].pRequestCallback)
                {
                    /* call the request callback of the channel [SWS_Mb_00117] */
                    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not
                     * be cast to an inappropriate essential type. REASON: This value represents
                     * skipping checks, and it is only used in this driver
                     */
                    Mb_Cfg_Ptr[u32CoreIndex]->pFreeChannel[SubChannel].pRequestCallback(
                        Channel,
                        (Mb_CoreType)u32MasterCore,
                        u32Data0,
                        u32Data1);
                    /* PRQA S 4342 -- */
                }

                if (0U != (Mb_Cfg_Ptr[u32CoreIndex]->pFreeChannel[SubChannel].u32ConfigFlag &
                           (uint32)MB_CHANNEL_AUTO_DONE))
                {
                    /* Send done if auto done is enabled */
                    (void)Mb_HL_DoneChannel(u32HwChannel);
                }
            }
            else /* MB_MODE_MESSAGE_QUEUE */
            {
                /* Send done */
                (void)Mb_HL_DoneChannel(u32HwChannel);
                if (NULL_PTR != Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].pReceivedCallback)
                {
                    /* Call the receive callback of the channel [SWS_Mb_00123]*/
                    Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].pReceivedCallback();
                }
            }
        }
    }
}

/**
 * @brief          Done event handle
 * @details        The mailbox interrupt service function calls
 *                 this function when a done event is received.
 *
 * @param[in]      u32HwChannel      The hardware channel that receive the done
 * @param[in]      u32CoreIndex      Current core index
 *
 * @return         void
 *
 */
MB_TEXT_SECTION void Mb_DoneHandle(uint32 u32HwChannel, uint32 u32CoreIndex)
{
    /* [FMR_Mailbox_0002] */
    if (NULL_PTR != Mb_Cfg_Ptr[u32CoreIndex])
    {
        Mb_ChannelType Channel = Mb_Cfg_Ptr[u32CoreIndex]->pMbHwChannelMap[u32HwChannel];
        if (MB_HW_UNUSED != Channel)
        {
            Mb_ChannelType SubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[Channel];
            if (MB_MODE_FREE == Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].eChannelMode)
            {
                if (NULL_PTR != Mb_Cfg_Ptr[u32CoreIndex]->pFreeChannel[SubChannel].pDone)
                {
                    /* Call the done callback of the channel [SWS_Mb_00120] */
                    Mb_Cfg_Ptr[u32CoreIndex]->pFreeChannel[SubChannel].pDone(Channel);
                }
            }
        }
    }
}

/**
 * @brief          Initializes the Mailbox channel and the driver.
 * @details        This function will initialize both the Mailbox HW unit and the driver structures.
 *                    [SWS_Mb_00001][SWS_Mb_00002]
 *
 * @param[in]      ConfigPtr   Pointer to configuration set in Variant PB
 *                             (Variant PC requires a NULL_PTR). [SWS_Mb_00008]
 * @return         void
 *
 * @note           The function Autosar Service ID[hex]: 0x00.
 * @note           Synchronous.
 * @note           Non Re-entrant function.
 */
MB_TEXT_SECTION void Mb_Init(const Mb_ConfigType *ConfigPtr)
{
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR != Mb_Cfg_Ptr[u32CoreIndex])
    {
        /* [SWS_Mb_00007] */
        (void)Det_ReportError((uint16)MB_MODULE_ID,
                              (uint8)0U,
                              (uint8)MB_INIT_ID,
                              (uint8)MB_E_ALREADY_INITIALIZED);
    }
#ifdef MB_PRECOMPILE_SUPPORT
    else if (NULL_PTR != ConfigPtr)
#else
    else if (NULL_PTR == ConfigPtr)
#endif
    {
        (void)Det_ReportError((uint16)MB_MODULE_ID,
                              (uint8)0U,
                              (uint8)MB_INIT_ID,
                              (uint8)MB_E_PARAM_CONFIG);
    }
    else
#endif
    {
#ifdef MB_PRECOMPILE_SUPPORT
        Mb_Cfg_Ptr[u32CoreIndex] = &Mb_Config;
        (void)ConfigPtr;
#else
        Mb_Cfg_Ptr[u32CoreIndex] = ConfigPtr;
#endif /* MB_PRECOMPILE_SUPPORT */
        uint32 u32Loop;
        uint16 u16ChannelRequestFlag = 0U, u16ChannelDoneFlag = 0U;
        for (u32Loop = 0; u32Loop < Mb_Cfg_Ptr[u32CoreIndex]->tChannelCount; u32Loop++)
        {
            Mb_ChannelType tSubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[u32Loop];
            if (MB_MODE_FREE == Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[u32Loop].eChannelMode)
            {
                if (0U != (Mb_Cfg_Ptr[u32CoreIndex]->pFreeChannel[tSubChannel].u32ConfigFlag &
                           ((uint32)MB_FREE_CH_CFG_REQ_TO_CORE0 << u32CoreIndex)))
                {
                    u16ChannelRequestFlag |=
                        (uint16)(1U
                                 << Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[u32Loop].u16MbHwChannel);
                }
                if (0U != (Mb_Cfg_Ptr[u32CoreIndex]->pFreeChannel[tSubChannel].u32ConfigFlag &
                           ((uint32)MB_FREE_CH_CFG_DONE_TO_CORE0 << u32CoreIndex)))
                {
                    u16ChannelDoneFlag |=
                        (uint16)(1U
                                 << Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[u32Loop].u16MbHwChannel);
                }
            }
            else /* (MB_MODE_MESSAGE_QUEUE) */
            {
                if (Mb_HL_Mb2CoreIndex(
                        Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[tSubChannel].ReceiverCore) ==
                    u32CoreIndex)
                {
                    u16ChannelRequestFlag |=
                        (uint16)(1U
                                 << Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[u32Loop].u16MbHwChannel);
                }
                if (Mb_HL_Mb2CoreIndex(
                        Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[tSubChannel].SenderCore) ==
                    u32CoreIndex)
                {
                    /* [SWS_Mb_00005] */
#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
                    /* Initialize Ring Block state by sender */
                    s_aMqRingBlockStatus[tSubChannel].u16ReadFlip   = (uint16)0U;
                    s_aMqRingBlockStatus[tSubChannel].u32ReadIndex  = 0U;
                    s_aMqRingBlockStatus[tSubChannel].u16WriteFlip  = 0U;
                    s_aMqRingBlockStatus[tSubChannel].u32WriteIndex = 0U;
                    s_aMqRingBlockStatus[tSubChannel].u8Reading     = STD_IDLE;
                    s_aMqRingBlockStatus[tSubChannel].u8Writing     = STD_IDLE;
                    s_aMqRingBlockStatus[tSubChannel].u8Checking    = STD_IDLE;
#endif /* MB_MESSAGE_QUEUE_API == STD_ON */
                    u16ChannelDoneFlag |=
                        (uint16)(1U
                                 << Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[u32Loop].u16MbHwChannel);
                }
            }
        }

        /* [SWS_Mb_00003] */
        Mb_HL_Init(u16ChannelRequestFlag, u16ChannelDoneFlag);
    }
}

#if (MB_DEINIT_API == STD_ON) /* [SWS_Mb_00013][SWS_Mb_00014] */
/**
 * @brief          De-initialize the Mailbox module.
 *
 * @details        [SWS_Mb_00009]
 *
 * @return         void
 *
 * @note           The function Autosar Service ID[hex]: 0x01.
 * @note           Synchronous.
 * @note           Non Re-entrant function.
 */
MB_TEXT_SECTION void Mb_DeInit(void)
{
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Mb_Cfg_Ptr[u32CoreIndex])
    {
        (void)Det_ReportError((uint16)MB_MODULE_ID, (uint8)0U, (uint8)MB_DEINIT_ID, (uint8)MB_E_UNINIT);
    }
    else
#endif /* MB_DEV_ERROR_DETECT */
    {
        Mb_Cfg_Ptr[u32CoreIndex] = NULL_PTR;
        Mb_HL_DeInit();
    }
}
#endif /* (MB_DEINIT_API == STD_ON) */

#if (MB_FREE_CHANNEL_API == STD_ON) /* [SWS_Mb_00017][SWS_Mb_00020][SWS_Mb_00026][SWS_Mb_00027] */
/**
 * @brief          Sending data to a specific core through a mailbox channel.
 *                 [SWS_Mb_00015][SWS_Mb_00016]
 *
 * @param[in]      Channel                   Sending channel
 * @param[in]      DstCore                   Target core
 * @param[in]      Data0                     The DATA0 to be sent.
 * @param[in]      Data1                     The DATA1 to be sent.
 *
 * @return         Mb_ReturnStateType        The result of the operation.
 * @retval         MB_RET_STATE_SUCCESS      The operation is successful.
 * @retval         MB_RET_STATE_FAILED       The operation is failed.
 * @retval         MB_RET_STATE_BUSY         The channel is busy with the current operation.
 *
 * @note           The function Autosar Service ID[hex]: 0x02.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION Mb_ReturnStateType Mb_SendData(Mb_ChannelType Channel,
                                               Mb_CoreType    DstCore,
                                               uint32         Data0,
                                               uint32         Data1)
{
    Mb_ReturnStateType eState;
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    eState = MB_RET_STATE_FAILED;
    /* [SWS_Mb_00018][SWS_Mb_00019][SWS_Mb_00021][SWS_Mb_00141] */
    Std_ReturnType eValid =
        Mb_ValidateChannelMode(MB_SEND_DATA_ID, Channel, MB_MODE_FREE, u32CoreIndex);
    if (E_OK == eValid)
    {
        /* Check the target core */
        if (DstCore >= MB_CORE_NUM)
        {
            (void)Det_ReportError((uint16)MB_MODULE_ID,
                                  (uint8)0U,
                                  (uint8)MB_SEND_DATA_ID,
                                  (uint8)MB_E_PARAM_CORE);
        }
        else
        {
#endif
            if (E_OK == Mb_HL_SendData(
                            (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].u16MbHwChannel,
                            (uint32)DstCore,
                            Data0,
                            Data1))
            {
                /* [SWS_Mb_00086] */
                eState = MB_RET_STATE_SUCCESS;
            }
            else
            {
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
                /* [SWS_Mb_00078] */
                (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                             (uint8)0U,
                                             (uint8)MB_SEND_DATA_ID,
                                             (uint8)MB_E_CHANNEL_LOCKED);
#endif
                /* current channel is locked [SWS_Mb_00022] */
                eState = MB_RET_STATE_BUSY;
            }
#if (MB_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
    return eState;
}

/**
 * @brief          Send a "done" event to the specified channel.
 *                 [SWS_Mb_00024]
 *
 * @param[in]      Channel   Channel to be done
 *
 * @return         void
 *
 * @note           The function Autosar Service ID[hex]: 0x03.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION void Mb_DoneChannel(Mb_ChannelType Channel)
{
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Mb_00028][SWS_Mb_00031][SWS_Mb_00032] */
    Std_ReturnType eValid =
        Mb_ValidateChannelMode(MB_DONE_CHANNEL_ID, Channel, MB_MODE_FREE, u32CoreIndex);
    if (E_OK == eValid)
    {
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
        if (E_NOT_OK == Mb_HL_DoneChannel(
                            (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].u16MbHwChannel))
        {
            /* [SWS_Mb_00029][SWS_Mb_00030] */
            (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)MB_DONE_CHANNEL_ID,
                                         (uint8)MB_E_CHANNEL_UNLOCKED);
        }
#else
        (void)Mb_HL_DoneChannel(
            (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].u16MbHwChannel);
#endif
#else
    (void)Mb_HL_DoneChannel((uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].u16MbHwChannel);
#endif

#if (MB_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* (MB_FREE_CHANNEL_API == STD_ON) */

#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
/* [SWS_Mb_00035][SWS_Mb_00036][SWS_Mb_00047][SWS_Mb_00048][SWS_Mb_00058][SWS_Mb_00059]
 * [SWS_Mb_00065][SWS_Mb_00066][SWS_Mb_00080][SWS_Mb_00081] */
/**
 * @brief          Send the message via the mailbox channel
 *                    [SWS_Mb_00033][SWS_Mb_00034]
 *
 * @param[in]      Channel       Channel to send the message
 * @param[in]      Buffer        Pointer to the send buffer
 * @param[in]      BufferLength  Send buffer byte length
 *
 * @return         Mb_ReturnStateType    The current state of the message queue.
 * @retval         MB_RET_STATE_FAILED   The operation is failed.
 * @retval         MB_RET_STATE_FULL     The message queue is full.
 * @retval         MB_RET_STATE_BUSY     The channel is busy with the current operation.
 *
 * @note           The function Autosar Service ID[hex]: 0x04.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION Mb_ReturnStateType Mb_SendMessage(Mb_ChannelType Channel,
                                                  const uint8   *Buffer,
                                                  uint32         BufferLength)
{
    Mb_ChannelType           SubChannel;
    Mb_MessageQueueStateType eStatus;
    uint32                   u32Loop;
    uint8                   *pBufferAddr;
    Mb_ReturnStateType       eState = MB_RET_STATE_FAILED;
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Mb_00037][SWS_Mb_00070][SWS_Mb_00038][SWS_Mb_00071][SWS_Mb_00039][SWS_Mb_00072]
     * [SWS_Mb_00040][SWS_Mb_00073] */
    Std_ReturnType eValid =
        Mb_ValidateChannelMode(MB_SEND_MESSAGE_ID, Channel, MB_MODE_MESSAGE_QUEUE, u32CoreIndex);
    if (E_OK == eValid)
#endif
    {
        SubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[Channel];
#if (MB_DEV_ERROR_DETECT == STD_ON)
        /* Check the buffer size, buffer pointer, and call core
         * [SWS_Mb_00041][SWS_Mb_00074][SWS_Mb_00042] [SWS_Mb_00075] */
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
         * an inappropriate essential type. REASON: This value represents skipping checks, and it is
         * only used in this driver
         */
        eValid = Mb_ValidateBuffer(
            MB_SEND_MESSAGE_ID,
            Buffer,
            BufferLength,
            Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockSize,
            Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].SenderCore,
            (Mb_CoreType)Mb_HL_Core2MbIndex(u32CoreIndex));
        /* PRQA S 4342 -- */
        if (E_OK == eValid)
#endif
        {
            /* [SWS_Mb_00152] */
            SchM_Enter_Mb_MB_EXCLUSIVE_AREA_00();
            /* lock status */
            if (E_OK == Mb_GetSpinLock(MB_SEND_MESSAGE_ID))
            {
                if (STD_IDLE == s_aMqRingBlockStatus[SubChannel].u8Writing)
                {
                    s_aMqRingBlockStatus[SubChannel].u8Writing = STD_ACTIVE;
                    eStatus                                    = Mb_GetMqStatus(SubChannel);
                    if (MB_MESSAGE_QUEUE_FULL != eStatus)
                    {
                        Mb_ReleaseSpinLock();
                        /* copy data to message pool */
                        uint32 u32BlockSize =
                            Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockSize;
                        uint32 u32WriteIndex = s_aMqRingBlockStatus[SubChannel].u32WriteIndex;
                        pBufferAddr          = &(Mb_Cfg_Ptr[u32CoreIndex]
                                            ->pMessageQueue[SubChannel]
                                            .RingBlock.pBuffer[u32BlockSize * u32WriteIndex]);
                        for (u32Loop = 0; u32Loop < BufferLength; u32Loop++)
                        {
                            pBufferAddr[u32Loop] = Buffer[u32Loop];
                        }

                        if (E_OK == Mb_GetSpinLock(MB_SEND_MESSAGE_ID))
                        {
                            uint32 u32WriteIndexBak = s_aMqRingBlockStatus[SubChannel].u32WriteIndex;
                            uint16 u16WriteFlipBak = s_aMqRingBlockStatus[SubChannel].u16WriteFlip;
                            ++s_aMqRingBlockStatus[SubChannel].u32WriteIndex;
                            if (s_aMqRingBlockStatus[SubChannel].u32WriteIndex ==
                                Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockNum)
                            {
                                /* update write position */
                                s_aMqRingBlockStatus[SubChannel].u32WriteIndex = 0U;
                                s_aMqRingBlockStatus[SubChannel].u16WriteFlip =
                                    (uint16)(~s_aMqRingBlockStatus[SubChannel].u16WriteFlip);
                            }
                            Std_ReturnType eSendStatus = Mb_HL_SendData(
                                (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[Channel].u16MbHwChannel,
                                (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].ReceiverCore,
                                0U,
                                0U);

                            if (E_OK == eSendStatus)
                            {
                                eState = MB_RET_STATE_SUCCESS;
                            }
                            else
                            {
                                s_aMqRingBlockStatus[SubChannel].u32WriteIndex = u32WriteIndexBak;
                                s_aMqRingBlockStatus[SubChannel].u16WriteFlip  = u16WriteFlipBak;
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
                                /* [SWS_Mb_00043] */
                                (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                                             (uint8)0U,
                                                             (uint8)MB_SEND_MESSAGE_ID,
                                                             (uint8)MB_E_CHANNEL_LOCKED);
#endif
                                /* [SWS_Mb_00076] */
                                eState = MB_RET_STATE_BUSY;
                            }

                            s_aMqRingBlockStatus[SubChannel].u8Writing = STD_IDLE;
                            Mb_ReleaseSpinLock();
                        }
                        else
                        {
                            /* recover writing status if get spin lock failed */
                            s_aMqRingBlockStatus[SubChannel].u8Writing = STD_IDLE;
                        }
                    }
                    else
                    {
                        s_aMqRingBlockStatus[SubChannel].u8Writing = STD_IDLE;
                        Mb_ReleaseSpinLock();
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
                        /* [SWS_Mb_00044] */
                        (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                                     (uint8)0U,
                                                     (uint8)MB_SEND_MESSAGE_ID,
                                                     (uint8)MB_E_MESSAGE_QUEUE_FULL);
#endif
                        /* [SWS_Mb_00077] */
                        eState = MB_RET_STATE_FULL;
                    }
                }
                else
                {
                    Mb_ReleaseSpinLock();
                }
            }
            /* [SWS_Mb_000144] */
            SchM_Exit_Mb_MB_EXCLUSIVE_AREA_00();
        }
    }
    return eState;
}

/**
 * @brief          Get a message in message queue
 *                    [SWS_Mb_00045]
 *
 * @param[in]      Channel               Channel to receive a message
 * @param[in]      ReceiveBuffer         Pointer to the receive buffer
 * @param[in]      ReceiveBufferLength   Receive buffer byte length
 *
 * @return         Mb_ReturnStateType    Whether the message was received successfully
 * @retval         MB_RET_STATE_SUCCESS  Message received successfully
 * @retval         MB_RET_STATE_FAILED   Message reception failed
 * @retval         MB_RET_STATE_EMPTY    Message queue is empty
 * @retval         MB_RET_STATE_BUSY     Message queue is busy
 *
 * @note           The function Autosar Service ID[hex]: 0x05.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION Mb_ReturnStateType Mb_GetMessage(Mb_ChannelType Channel,
                                                 uint8         *ReceiveBuffer,
                                                 uint32         ReceiveBufferLength)
{
    Mb_ChannelType           SubChannel;
    Mb_MessageQueueStateType eStatus;
    uint32                   u32Loop;
    const uint8             *pBufferAddr;
    Mb_ReturnStateType       eState = MB_RET_STATE_FAILED;
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Mb_00049][SWS_Mb_00050][SWS_Mb_00051][SWS_Mb_00052] */
    Std_ReturnType eValid =
        Mb_ValidateChannelMode(MB_GET_MESSAGE_ID, Channel, MB_MODE_MESSAGE_QUEUE, u32CoreIndex);
    if (E_OK == eValid)
#endif
    {
        SubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[Channel];
#if (MB_DEV_ERROR_DETECT == STD_ON)
        /* Check the buffer size, buffer pointer, and call core [SWS_Mb_00053][SWS_Mb_00054] */
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
         * an inappropriate essential type. REASON: This value represents skipping checks, and it is
         * only used in this driver
         */
        eValid = Mb_ValidateBuffer(
            MB_GET_MESSAGE_ID,
            ReceiveBuffer,
            ReceiveBufferLength,
            Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockSize,
            Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].ReceiverCore,
            (Mb_CoreType)Mb_HL_Core2MbIndex(u32CoreIndex));
        /* PRQA S 4342 -- */
        if (E_OK == eValid)
#endif
        {
            /* [SWS_Mb_00152] */
            SchM_Enter_Mb_MB_EXCLUSIVE_AREA_01();
            if (E_OK == Mb_GetSpinLock(MB_GET_MESSAGE_ID))
            {
                if (STD_IDLE == s_aMqRingBlockStatus[SubChannel].u8Reading)
                {
                    s_aMqRingBlockStatus[SubChannel].u8Reading = STD_ACTIVE;
                    eStatus                                    = Mb_GetMqStatus(SubChannel);
                    if (MB_MESSAGE_QUEUE_EMPTY != eStatus)
                    {
                        /* start reading, can not reset message queue when reading */
                        Mb_ReleaseSpinLock();
                        uint32 u32BlockSize =
                            Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockSize;
                        uint32 u32ReadIndex = s_aMqRingBlockStatus[SubChannel].u32ReadIndex;
                        pBufferAddr         = &(Mb_Cfg_Ptr[u32CoreIndex]
                                            ->pMessageQueue[SubChannel]
                                            .RingBlock.pBuffer[u32BlockSize * u32ReadIndex]);
                        /* [SWS_Mb_00046] */
                        for (u32Loop = 0; u32Loop < ReceiveBufferLength; u32Loop++)
                        {
                            ReceiveBuffer[u32Loop] = pBufferAddr[u32Loop];
                        }
                        if (E_OK == Mb_GetSpinLock(MB_GET_MESSAGE_ID))
                        {
                            ++s_aMqRingBlockStatus[SubChannel].u32ReadIndex;
                            if (s_aMqRingBlockStatus[SubChannel].u32ReadIndex ==
                                Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockNum)
                            {
                                /* Update receive position */
                                s_aMqRingBlockStatus[SubChannel].u32ReadIndex = 0U;
                                s_aMqRingBlockStatus[SubChannel].u16ReadFlip =
                                    (uint16)(~s_aMqRingBlockStatus[SubChannel].u16ReadFlip);
                            }
                            s_aMqRingBlockStatus[SubChannel].u8Reading = STD_IDLE;
                            Mb_ReleaseSpinLock();
                            eState = MB_RET_STATE_SUCCESS;
                        }
                        else
                        {
                            /* recover reading status if get spin lock failed */
                            s_aMqRingBlockStatus[SubChannel].u8Reading = STD_IDLE;
                            eState                                     = MB_RET_STATE_FAILED;
                        }
                    }
                    else
                    {
                        s_aMqRingBlockStatus[SubChannel].u8Reading = STD_IDLE;
                        Mb_ReleaseSpinLock();
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
                        /* [SWS_Mb_00055] */
                        (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                                     (uint8)0U,
                                                     (uint8)MB_GET_MESSAGE_ID,
                                                     (uint8)MB_E_MESSAGE_QUEUE_EMPTY);
#endif
                        eState = MB_RET_STATE_EMPTY;
                    }
                }
                else
                {
                    Mb_ReleaseSpinLock();
                    eState = MB_RET_STATE_BUSY;
                }
            }

            SchM_Exit_Mb_MB_EXCLUSIVE_AREA_01();
        }
    }
    return eState;
}

/**
 * @brief          Get the number of messages in the message queue.
 *                    [SWS_Mb_00056][SWS_Mb_00057]
 *
 * @param[in]      Channel   The channel to be get.
 *
 * @return         uint32    The number of messages in the message queue.
 *
 * @note           The function Autosar Service ID[hex]: 0x02.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION uint32 Mb_GetMessageCount(Mb_ChannelType Channel)
{
    Mb_ChannelType           SubChannel;
    Mb_MessageQueueStateType eStatus;
    uint32                   u32MsgCount = 0U;
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Mb_00060][SWS_Mb_00061][SWS_Mb_00062] */
    Std_ReturnType eValid =
        Mb_ValidateChannelMode(MB_GET_MESSAGE_COUNT_ID, Channel, MB_MODE_MESSAGE_QUEUE, u32CoreIndex);
    if (E_OK == eValid)
#endif
    {
        SubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[Channel];
        /* [SWS_Mb_00152] */
        SchM_Enter_Mb_MB_EXCLUSIVE_AREA_02();
        if (E_OK == Mb_GetSpinLock(MB_GET_MESSAGE_COUNT_ID))
        {
            if (STD_IDLE == s_aMqRingBlockStatus[SubChannel].u8Checking)
            {
                s_aMqRingBlockStatus[SubChannel].u8Checking = STD_ACTIVE;
                eStatus                                     = Mb_GetMqStatus(SubChannel);
                if (MB_MESSAGE_QUEUE_EMPTY == eStatus)
                {
                    u32MsgCount = 0;
                }
                else if (MB_MESSAGE_QUEUE_FULL == eStatus)
                {
                    u32MsgCount =
                        Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockNum;
                }
                else /* (MB_MESSAGE_QUEUE_HALF_FULL == eStatus) */
                {
                    if (s_aMqRingBlockStatus[SubChannel].u32WriteIndex >
                        s_aMqRingBlockStatus[SubChannel].u32ReadIndex)
                    {
                        /*
                         * ---(r)oooo(w)----
                         * */
                        u32MsgCount = s_aMqRingBlockStatus[SubChannel].u32WriteIndex -
                                      s_aMqRingBlockStatus[SubChannel].u32ReadIndex;
                    }
                    else
                    {
                        /*
                         * ooo(w)----(r)ooo
                         * */
                        u32MsgCount =
                            Mb_Cfg_Ptr[u32CoreIndex]->pMessageQueue[SubChannel].RingBlock.u32BlockNum -
                            (s_aMqRingBlockStatus[SubChannel].u32ReadIndex -
                             s_aMqRingBlockStatus[SubChannel].u32WriteIndex);
                    }
                }
                s_aMqRingBlockStatus[SubChannel].u8Checking = STD_IDLE;
            }

            Mb_ReleaseSpinLock();
        }
        /* [SWS_Mb_00147] */
        SchM_Exit_Mb_MB_EXCLUSIVE_AREA_02();
    }
    return u32MsgCount;
}

/**
 * @brief          Get the current state of the message queue.
 *                    [SWS_Mb_00063][SWS_Mb_00064]
 *
 * @param[in]      Channel                      The channel to be get.
 *
 * @return         Mb_MessageQueueStateType     The current state of the message queue.
 * @retval         MB_MESSAGE_QUEUE_EMPTY       The message queue is empty.
 * @retval         MB_MESSAGE_QUEUE_FULL        The message queue is full.
 * @retval         MB_MESSAGE_QUEUE_HALF_FULL   The message queue is half full.
 *
 * @note           The function Autosar Service ID[hex]: 0x07.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION Mb_MessageQueueStateType Mb_GetMessageQueueState(Mb_ChannelType Channel)
{
    Mb_ChannelType SubChannel;
    /* [SWS_Mb_00149] */
    Mb_MessageQueueStateType eStatus = MB_MESSAGE_QUEUE_EMPTY;
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Mb_00067][SWS_Mb_00068][SWS_Mb_00069] */
    Std_ReturnType eValid = Mb_ValidateChannelMode(MB_GET_MESSAGE_QUEUE_STATE_ID,
                                                   Channel,
                                                   MB_MODE_MESSAGE_QUEUE,
                                                   u32CoreIndex);
    if (E_OK == eValid)
#endif
    {
        SubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[Channel];
        /* [SWS_Mb_00152] */
        SchM_Enter_Mb_MB_EXCLUSIVE_AREA_03();
        if (E_OK == Mb_GetSpinLock(MB_GET_MESSAGE_QUEUE_STATE_ID))
        {
            if (STD_IDLE == s_aMqRingBlockStatus[SubChannel].u8Checking)
            {
                s_aMqRingBlockStatus[SubChannel].u8Checking = STD_ACTIVE;
                eStatus                                     = Mb_GetMqStatus(SubChannel);
                s_aMqRingBlockStatus[SubChannel].u8Checking = STD_IDLE;
            }
            Mb_ReleaseSpinLock();
        }
        SchM_Exit_Mb_MB_EXCLUSIVE_AREA_03();
    }
    return eStatus;
}

/**
 * @brief          Clear all messages in the message queue.
 *                    [SWS_Mb_00142][SWS_Mb_00079]
 *
 * @param[in]      Channel               The channel to be cleared.
 *
 * @return         Mb_ReturnStateType    The result of the operation.
 * @retval         MB_RET_STATE_SUCCESS  The operation is successful.
 * @retval         MB_RET_STATE_BUSY     The message queue is busy.
 * @retval         MB_RET_STATE_FAILED   The operation is failed.
 *
 * @note           The function Autosar Service ID[hex]: 0x08.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION Mb_ReturnStateType Mb_ResetMessageQueue(Mb_ChannelType Channel)
{
    /* [SWS_Mb_00090][SWS_Mb_00151] */
    Mb_ReturnStateType eState = MB_RET_STATE_FAILED;
    Mb_ChannelType     SubChannel;
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();

    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Mb_00082][SWS_Mb_00089][SWS_Mb_00083][SWS_Mb_00084][SWS_Mb_00091] */
    Std_ReturnType eValid = Mb_ValidateChannelMode(MB_RESET_MESSAGE_QUEUE_ID,
                                                   Channel,
                                                   MB_MODE_MESSAGE_QUEUE,
                                                   u32CoreIndex);
    if (E_OK == eValid)
#endif
    {
        SubChannel = Mb_Cfg_Ptr[u32CoreIndex]->pMbSubChannelMap[Channel];
        {
            /* [SWS_Mb_00152] */
            SchM_Enter_Mb_MB_EXCLUSIVE_AREA_04();
            if (E_OK == Mb_GetSpinLock(MB_RESET_MESSAGE_QUEUE_ID))
            {
                /* The Mb_ResetMessageQueue function cannot be called before
                 * the completion of the Mb_GetMessageQueueState, Mb_GetMessageCount,
                 * Mb_GetMessage, Mb_SendMessage invocation. */
                if (((uint8)STD_IDLE == s_aMqRingBlockStatus[SubChannel].u8Reading) &&
                    ((uint8)STD_IDLE == s_aMqRingBlockStatus[SubChannel].u8Writing) &&
                    ((uint8)STD_IDLE == s_aMqRingBlockStatus[SubChannel].u8Checking))
                {
                    s_aMqRingBlockStatus[SubChannel].u8Reading  = STD_ACTIVE;
                    s_aMqRingBlockStatus[SubChannel].u8Writing  = STD_ACTIVE;
                    s_aMqRingBlockStatus[SubChannel].u8Checking = STD_ACTIVE;

                    s_aMqRingBlockStatus[SubChannel].u32ReadIndex  = 0;
                    s_aMqRingBlockStatus[SubChannel].u16ReadFlip   = 0;
                    s_aMqRingBlockStatus[SubChannel].u32WriteIndex = 0;
                    s_aMqRingBlockStatus[SubChannel].u16WriteFlip  = 0;

                    s_aMqRingBlockStatus[SubChannel].u8Reading  = STD_IDLE;
                    s_aMqRingBlockStatus[SubChannel].u8Writing  = STD_IDLE;
                    s_aMqRingBlockStatus[SubChannel].u8Checking = STD_IDLE;
                    /* [SWS_Mb_00087] */
                    eState = MB_RET_STATE_SUCCESS;
                }
                else
                {
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
                    /* [SWS_Mb_00085] */
                    (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                                 (uint8)0U,
                                                 (uint8)MB_RESET_MESSAGE_QUEUE_ID,
                                                 (uint8)MB_E_MESSAGE_QUEUE_BUSY);
#endif
                    /* [SWS_Mb_00088] */
                    eState = MB_RET_STATE_BUSY;
                }
                Mb_ReleaseSpinLock();
            }
            SchM_Exit_Mb_MB_EXCLUSIVE_AREA_04();
        }
    }
    return eState;
}
#endif /* (MB_MESSAGE_QUEUE_API == STD_ON) */

#if (MB_RESET_CHANNEL_API == STD_ON) /* [SWS_Mb_00094][SWS_Mb_00095] */
/**
 * @brief          Force reset the channel
 *                    [SWS_Mb_00092]
 *
 * @param[in]      Channel       Channel to reset
 *
 * @return         void
 *
 * @note           The function Autosar Service ID[hex]: 0x09.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION void Mb_ResetChannel(Mb_ChannelType Channel)
{
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* PRQA S 1317 ++ #Value of constant expression is not in the enum type to which it is being
     * converted. REASON: This value represents skipping checks, and it is only used in this driver
     */
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type. REASON: This value represents skipping checks, and it is only
     * used in this driver
     */
    /* [SWS_Mb_00096][SWS_Mb_00097][SWS_Mb_00098] */
    Std_ReturnType eValid =
        Mb_ValidateChannelMode(MB_RESET_CHANNEL_ID, Channel, MB_SKIP_MODE_CHECK, u32CoreIndex);
    /* PRQA S 1317,4342 -- */
    if (E_OK == eValid)
#endif
    {
        /* [SWS_Mb_00152] */
        SchM_Enter_Mb_MB_EXCLUSIVE_AREA_05();
        Mb_ChannelStateType eState = Mb_HL_GetChannelState(
            (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[(uint32)Channel].u16MbHwChannel);
        if (MB_CHANNEL_BUSY == eState)
        {
            /* [SWS_Mb_00093] */
            Mb_HL_ForceUnlockChannel(
                (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[(uint32)Channel].u16MbHwChannel);
            SchM_Exit_Mb_MB_EXCLUSIVE_AREA_05();
        }
        else
        {
            SchM_Exit_Mb_MB_EXCLUSIVE_AREA_05();
#if (MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS == STD_OFF)
            /* [SWS_Mb_00099] */
            (void)Det_ReportRuntimeError((uint16)MB_MODULE_ID,
                                         (uint8)0U,
                                         (uint8)MB_RESET_CHANNEL_ID,
                                         (uint8)MB_E_CHANNEL_UNLOCKED);
#endif
        }
    }
}
#endif

#if (MB_GET_CHANNEL_STATUS_API == STD_ON) /* [SWS_Mb_00102][SWS_Mb_00103] */
/**
 * @brief          Get the channel state
 *                    [SWS_Mb_00100]
 *
 * @param[in]      Channel               Channel to get
 *
 * @return         Mb_ChannelStateType   The state of the channel
 * @retval         MB_CHANNEL_BUSY       The channel is busy.
 * @retval         MB_CHANNEL_IDLE       The channel is idle.
 *
 * @note           The function Autosar Service ID[hex]: 0x0A.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION Mb_ChannelStateType Mb_GetChannelState(Mb_ChannelType Channel)
{
    /* [SWS_Mb_00124] */
    Mb_ChannelStateType eStatus = MB_CHANNEL_IDLE;
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
#if (MB_DEV_ERROR_DETECT == STD_ON)
    /* PRQA S 1317 ++ #Value of constant expression is not in the enum type to which it is being
     * converted. REASON: This value represents skipping checks, and it is only used in this driver
     */
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type. REASON: This value represents skipping checks, and it is only
     * used in this driver
     */
    /* [SWS_Mb_00104][SWS_Mb_00105][SWS_Mb_00106] */
    Std_ReturnType eValid =
        Mb_ValidateChannelMode(MB_GET_CHANNEL_STATE_ID, Channel, MB_SKIP_MODE_CHECK, u32CoreIndex);
    /* PRQA S 1317,4342 -- */
    if (E_OK == eValid)
#endif
    {
        /* [SWS_Mb_00152] */
        SchM_Enter_Mb_MB_EXCLUSIVE_AREA_06();
        /* [SWS_Mb_00101] */
        eStatus = Mb_HL_GetChannelState(
            (uint32)Mb_Cfg_Ptr[u32CoreIndex]->pChannelConfig[(uint32)Channel].u16MbHwChannel);
        SchM_Exit_Mb_MB_EXCLUSIVE_AREA_06();
    }
    return eStatus;
}
#endif

#if (MB_GET_VERSION_INFO_API == STD_ON)
/**
 * @brief          Returns the version information of this module.
 * @details        Returns the version information of this module. [SWS_Mb_00109]
 *
 * @param[out]     versioninfo    Pointer to where to store the version
 *                                 information of this module.
 * @return         void
 *
 * @note           The function Autosar Service ID[hex]: 0x0B.
 * @note           Synchronous.
 * @note           Reentrant function.
 */
MB_TEXT_SECTION void Mb_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (MB_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == versioninfo)
    {
        /* [SWS_Mb_00110] */
        (void)Det_ReportError((uint16)MB_MODULE_ID,
                              (uint8)0U,
                              (uint8)MB_GETVERSIONINFO_ID,
                              (uint8)MB_E_PARAM_VINFO);
    }
    else
#endif /* MB_DEV_ERROR_DETECT */
    {
        (versioninfo)->vendorID         = (uint16)MB_VENDOR_ID;
        (versioninfo)->moduleID         = (uint16)MB_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)MB_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)MB_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)MB_SW_PATCH_VERSION;
    }
}
#endif /* (MB_FREE_CHANNEL_API == STD_ON) */

#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"
#ifdef __cplusplus
}
#endif

/** @} */
