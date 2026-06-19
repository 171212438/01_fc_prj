/**
 *   @file    Crypto_Hsm.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - File used by CRY to handle mailboxes.
 *   @details This file contains functions used for mailboxes management.
 *
 *   @addtogroup CRYPTO
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CRYPTO
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       15/02/2024    QXW0051       N/A          CRYPTO Initial Version
*   0.6.0       23/03/2024    QXW0071       N/A          Add Support For FC7240
==================================================================================================*/
// clang-format off

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"

#include "Crypto.h"
#include "Crypto_Level0Api.h"
#include "Crypto_Level1Api.h"
#include "Crypto_Level2Api.h"
#include "Crypto_LevelNApi.h"

#include "CDD_Mb.h"
#include "Crypto_Hsm.h"
#include "Crypto_LLD.h"
#include "Mcu_Pcc.h"
#include "SchM_Crypto.h"
#include "Crypto_Cfg.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

void Crypto_Cmd_Channel_DoneCb(Mb_ChannelType Channel);
void Crypto_Cancel_Channel_DoneCb(Mb_ChannelType Channel);
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
void Crypto_Cmd_Channel_DoneCb(Mb_ChannelType Channel)
{
    uint32 u32CoreId = Crypto_GetCoreID();

    Crypto_aCoreCtx[u32CoreId].pCmdMailboxInf->u8ChannelAcked = 1u;

    HSM_Ln_Ack_IrqHandler(
        &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
    (void)Channel;
}

void Crypto_Cancel_Channel_DoneCb(Mb_ChannelType Channel)
{
    uint32 u32CoreId = Crypto_GetCoreID();

    Crypto_aCoreCtx[u32CoreId].pCancelMailboxInf->u8ChannelAcked = 1u;
    (void)Channel;
}

void Crypto_LnAlgorithmStopCb(void *pLnCtx, HSM_BoolType bErrorHappen, HSM_StatusType eRet)
{
    uint32 u32CoreId = Crypto_GetCoreID();

    Crypto_aCoreCtx[u32CoreId].pHsmCtx->eHsmAlgorithmRet       = eRet;
    Crypto_aCoreCtx[u32CoreId].pHsmCtx->u8HsmAlgorithmFinished = 1u;

    if (HSM_FALSE == bErrorHappen)
    {
        if (NULL_PTR !=
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_RegisteredSvcResultsProcessFunc)
        {
            (*Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_RegisteredSvcResultsProcessFunc)(eRet);
        }
        /* else do nothing */
    }
    else
    {
        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus =
            (Std_ReturnType)E_NOT_OK;
        ;
    }

    if ((CRYPTO_DRIVER_IDLE !=  Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus)&&
        (CRYPTO_PROCESSING_ASYNC == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType))
    {
        if(((uint8)CRYPTO_OPERATIONMODE_FINISH == (((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode) & ((uint8)CRYPTO_OPERATIONMODE_FINISH))) &&
           (0u == Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess))
        {
            HSM_Ln_CommonExitEnv(&(
                ((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
        }

        Crypto_ScheduleJob();
    }
    (void)pLnCtx;
}

HSM_StatusType Crypto_SendCommandCb(HSM_CmdType *ptCmd)
{
    HSM_StatusType eRet      = HSM_STATUS_SUCCESS;
    uint32         u32CoreId = Crypto_GetCoreID();

    Crypto_aCoreCtx[u32CoreId].pCmdMailboxInf->u8ChannelAcked = 0u;

    if (NULL_PTR != (((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx).tHsmL1Ctx.pCleanDCache)
    {
        (((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx).tHsmL1Ctx.pCleanDCache();
    }

    if (MB_RET_STATE_SUCCESS != Mb_SendData(Crypto_aCoreCtx[u32CoreId].tSendCmdMailboxChannel,
                                            MB_CORE_HSM,
                                            ptCmd->u32Addr,
                                            ptCmd->u32Cmd))
    {
        eRet = HSM_STATUS_SEND_FAIL;
    }

    return eRet;
}

HSM_StatusType Crypto_GetAckStatCb(void)
{
    HSM_StatusType eRet      = HSM_STATUS_SUCCESS;
    uint32         u32CoreId = Crypto_GetCoreID();

    if (!Crypto_aCoreCtx[u32CoreId].pCmdMailboxInf->u8ChannelAcked)
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

#if (CRYPTO_NEED_CB_FEED_WDOG_ENABLE == STD_ON)
extern void CryptoFeedWdogCallback(void);
#endif


HSM_StatusType Crypto_CancelCmdCb(void)
{
    HSM_StatusType                eRet      = HSM_STATUS_SUCCESS;
    uint32                        u32CoreId = Crypto_GetCoreID();
    HSM_CmdType                   tCmd;
    volatile HSMCom_SelfTestType *pSelftest;
    uint32                        u32MaxTick = CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK;
    HSMCom_CancelJobType          tCancel;

    if (0x2u == (Crypto_aCoreCtx[u32CoreId].u8MailboxChannelValidFlag & 0x2u))
    {
        tCancel.u32HSMStatusRet   = MAILBOXAPI_RET_NONE;
        tCancel.u32Timeout        = 0u;
        tCancel.u32MailboxChannel = Crypto_aCoreCtx[u32CoreId].tSendCmdMailboxChannel;

        HSM_CancelJob(&tCmd, &tCancel);

        Crypto_aCoreCtx[u32CoreId].pCancelMailboxInf->u8ChannelAcked = 0u;

        if (NULL_PTR != (((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx).tHsmL1Ctx.pCleanDCache)
        {
            (((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx).tHsmL1Ctx.pCleanDCache();
        }

        if (MB_RET_STATE_SUCCESS != Mb_SendData(Crypto_aCoreCtx[u32CoreId].tSendCancelMailboxChannel,
                                                MB_CORE_HSM,
                                                tCmd.u32Addr,
                                                tCmd.u32Cmd))
        {
            eRet = HSM_STATUS_SEND_FAIL;
        }
        else
        {
            while ((!Crypto_aCoreCtx[u32CoreId].pCancelMailboxInf->u8ChannelAcked) &&
                   (u32MaxTick > 0U))
            {
                MCAL_DATA_SYNC_BARRIER();
                MCAL_DATA_MEMORY_BARRIER();
                MCAL_INSTRUCTION_SYNC_BARRIER();

#if (CRYPTO_NEED_CB_FEED_WDOG_ENABLE == STD_ON)
#if (CRYPTO_NEED_CB_FEED_WDOG_NOOP == STD_OFF)
                CryptoFeedWdogCallback();
#endif
#endif

                u32MaxTick--;
            }
        }

        /* after force release the channel, the ack no effect */
        Mb_ResetChannel(Crypto_aCoreCtx[u32CoreId].tSendCmdMailboxChannel);
    }
    else
    {
        if (sizeof(Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->aSelftestCache) <
            (sizeof(HSMCom_SelfTestType) + 4))
        {
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
            (void)Det_ReportError((uint16)CRYPTO_MODULE_ID,
                                  CRYPTO_INSTANCE_ID,
                                  CRYPTO_PROCESSJOB_ID,
                                  CRYPTO_E_PARAM_HANDLE);
#endif
        }
        else
        {
            pSelftest =
                (volatile HSMCom_SelfTestType *)
                     (((uint32)(&Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->aSelftestCache[0]) + 3) &
                      0xFFFFFFFCu);
            pSelftest->u32Timeout      = 0u;
            pSelftest->u32BusClk       = 0U;
            pSelftest->u32HSMStatusRet = MAILBOXAPI_RET_NONE;
            HSM_SelfTest(&tCmd, pSelftest);

            if (NULL_PTR != (((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx).tHsmL1Ctx.pCleanDCache)
            {
                (((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx).tHsmL1Ctx.pCleanDCache();
            }

            if (MB_RET_STATE_SUCCESS != Mb_SendData(Crypto_aCoreCtx[u32CoreId].tSendCmdMailboxChannel,
                                                    MB_CORE_HSM,
                                                    tCmd.u32Addr,
                                                    tCmd.u32Cmd))
            {
                eRet = HSM_STATUS_SEND_FAIL;
            }
            else
            {
                while ((!pSelftest->u32BusClk) &&
                       (MAILBOXAPI_RET_NONE == pSelftest->u32HSMStatusRet) &&
                       (u32MaxTick > 0U))
                {
                    MCAL_DATA_SYNC_BARRIER();
                    MCAL_DATA_MEMORY_BARRIER();
                    MCAL_INSTRUCTION_SYNC_BARRIER();

#if (CRYPTO_NEED_CB_FEED_WDOG_ENABLE == STD_ON)
#if (CRYPTO_NEED_CB_FEED_WDOG_NOOP == STD_OFF)
                    CryptoFeedWdogCallback();
#endif
#endif

                    u32MaxTick--;
                }
            }

            /* after force release the channel, the ack no effect */
            Mb_ResetChannel(Crypto_aCoreCtx[u32CoreId].tSendCmdMailboxChannel);
        }
    }

    return eRet;
}

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

// clang-format on
