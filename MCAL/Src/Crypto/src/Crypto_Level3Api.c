/**
 *   @file    Crypto_Level2Api.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - Low level part of CRY driver.
 *   @details Hardware security module (HSM) provides several standards based cryptographic
 *            services and security services.
 *
 *   @addtogroup CRYPTO
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CRYPTO,MAILBOX
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

#include "Crypto_Level0Api.h"
#include "Crypto_Level1Api.h"
#include "Crypto_Level2Api.h"
#include "Crypto_Level3Api.h"
#include "Crypto_LevelNApi.h"

HSM_StatusType HSM_L3_ScatterCMacSetupEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL2Ctx;
    (void)pL1Ctx;

    if (HSM_LEVEL_3RD_OP_NONE == pL3Ctx->eOperation)
    {
        pL3Ctx->eOperation        = HSM_LEVEL_3RD_OP_SCATTER_CMAC;
        pL3Ctx->tL3AlgCtx.tScatterCMac.eState  = HSM_L3_SCATTER_CMAC_READY;
        pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize = 0u;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}
HSM_StatusType HSM_L3_ScatterCMacExitEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_3RD_OP_SCATTER_CMAC == pL3Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        HSM_L2_Abort(pL2Ctx);
        pL3Ctx->eOperation = HSM_LEVEL_3RD_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

HSM_StatusType HSM_L3_ScatterCMacInit(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_CMacCfgParmsType *pKeyCfg, const HSM_Ln_ScatterCMacType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    (void)pL2Ctx;

    if (HSM_LEVEL_3RD_OP_SCATTER_CMAC == pL3Ctx->eOperation)
    {
        if (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_READY)
        {
            pL3Ctx->tL3AlgCtx.tScatterCMac.u32TimeoutMs = u32TimeoutMs;

            if (pCfg->u32DataSize > 0)
            {
                eRet = HSM_L1_ScatterCMacSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_INIT;
                    pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize = pCfg->u32DataSize;

                    eRet = HSM_L1_ScatterCMacInit(pL1Ctx, pKeyCfg, pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        ;
                    }
                    else if (HSM_STATUS_AGAIN == eRet)
                    {
                        pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_INIT;
                    }
                    else
                    {
                        HSM_L1_ScatterCMacExitEnv(pL1Ctx);
                        pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                    }
                }
                else
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                }
            }
            else
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize = 0u;
                hsm_memcpy(&(pL3Ctx->tL3AlgCtx.tScatterCMac.tCfgParm), pKeyCfg, sizeof(pL3Ctx->tL3AlgCtx.tScatterCMac.tCfgParm));

                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_EMPTY_INPUT;
                eRet = HSM_STATUS_AGAIN;
            }
        }
        else
        {
            eRet = HSM_STATUS_LOGIC_ERR;
        }
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L3_ScatterCMacUpdate(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ScatterCMacType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    (void)pL2Ctx;

    if (HSM_LEVEL_3RD_OP_SCATTER_CMAC == pL3Ctx->eOperation)
    {
        if ((pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_INIT) ||
            (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_INIT_OK) ||
            (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_UPDATE) ||
            (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_UPDATE_OK))
        {
            pL3Ctx->tL3AlgCtx.tScatterCMac.u32TimeoutMs = u32TimeoutMs;

            pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_UPDATE;
            pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize += pCfg->u32DataSize;

            eRet = HSM_L1_ScatterCMacUpdate(pL1Ctx, pCfg, u32TimeoutMs);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                ;
            }
            else if (HSM_STATUS_AGAIN == eRet)
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_UPDATE;
            }
            else
            {
                HSM_L1_ScatterCMacExitEnv(pL1Ctx);
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
            }
        }
        else if (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_EMPTY_INPUT)
        {
            pL3Ctx->tL3AlgCtx.tScatterCMac.u32TimeoutMs = u32TimeoutMs;

            if (pCfg->u32DataSize > 0)
            {
                eRet = HSM_L1_ScatterCMacSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_INIT;
                    pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize = pCfg->u32DataSize;

                    eRet = HSM_L1_ScatterCMacInit(pL1Ctx, &(pL3Ctx->tL3AlgCtx.tScatterCMac.tCfgParm), pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        ;
                    }
                    else if (HSM_STATUS_AGAIN == eRet)
                    {
                        pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_INIT;
                    }
                    else
                    {
                        HSM_L1_ScatterCMacExitEnv(pL1Ctx);
                        pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                    }
                }
                else
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                }
            }
            else
            {
                eRet = HSM_STATUS_AGAIN;
            }
        }
        else
        {
            eRet = HSM_STATUS_LOGIC_ERR;
        }
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L3_ScatterCMacFinal(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ScatterCMacType *pCfg, const HSM_Ln_ResultBufInfoType *pResult, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    if (HSM_LEVEL_3RD_OP_SCATTER_CMAC == pL3Ctx->eOperation)
    {
        if ((pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_INIT) ||
            (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_INIT_OK) ||
            (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_UPDATE) ||
            (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_UPDATE_OK))
        {
            pL3Ctx->tL3AlgCtx.tScatterCMac.u32TimeoutMs = u32TimeoutMs;

            pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_FINAL;
            pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize += pCfg->u32DataSize;

            eRet = HSM_L1_ScatterCMacFinal(pL1Ctx, pCfg, pResult, u32TimeoutMs);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                ;
            }
            else
            {
                HSM_L1_ScatterCMacExitEnv(pL1Ctx);
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
            }
        }
        else if (pL3Ctx->tL3AlgCtx.tScatterCMac.eState == HSM_L3_SCATTER_CMAC_EMPTY_INPUT)
        {
            pL3Ctx->tL3AlgCtx.tScatterCMac.u32TimeoutMs = u32TimeoutMs;

            if (pCfg->u32DataSize > 0)
            {
                eRet = HSM_L1_ScatterCMacSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_FINAL;
                    pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize = pCfg->u32DataSize;

                    eRet = HSM_L1_ScatterCMacInit(pL1Ctx, &(pL3Ctx->tL3AlgCtx.tScatterCMac.tCfgParm), NULL_PTR, u32TimeoutMs);
                    if (HSM_STATUS_AGAIN == eRet)
                    {
                        eRet = HSM_L1_ScatterCMacFinal(pL1Ctx, pCfg, pResult, u32TimeoutMs);
                        if (HSM_STATUS_SUCCESS == eRet)
                        {
                            ;
                        }
                        else
                        {
                            HSM_L1_ScatterCMacExitEnv(pL1Ctx);
                            pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                        }
                    }
                    else
                    {
                        HSM_L1_ScatterCMacExitEnv(pL1Ctx);
                        pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                    }
                }
                else
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                }
            }
            else
            {
                eRet = HSM_L2_CMacEmptySetupEnv(pL2Ctx, pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_FINAL;
                    pL3Ctx->tL3AlgCtx.tScatterCMac.u32InputTotalSize = pCfg->u32DataSize;

                    eRet = HSM_L2_CMacEmpty(pL2Ctx, pL1Ctx, &(pL3Ctx->tL3AlgCtx.tScatterCMac.tCfgParm), pResult, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        ;
                    }
                    else
                    {
                        HSM_L2_CMacEmptyExitEnv(pL2Ctx, pL1Ctx);
                        pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                    }
                }
                else
                {
                    pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                }
            }
        }
        else
        {
            eRet = HSM_STATUS_LOGIC_ERR;
        }
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}
HSM_StatusType HSM_L3_ScatterCMacContextSave(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, HSM_Ln_ScatterCmacContextInfType * pContext)
{
    HSM_StatusType         eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_3RD_OP_SCATTER_CMAC == pL3Ctx->eOperation)
    {
        eRet = HSM_L1_ScatterCmacContextSave(pL1Ctx, &pContext->tScatterCmacL1Context);

        if(HSM_STATUS_SUCCESS == eRet)
        {
            hsm_memcpy(&pContext->tScatterCmacL3Context,&(pL3Ctx->tL3AlgCtx.tScatterCMac),sizeof(HSM_L3_DrvScatterCMacInfType));
            pContext->eL3OperationCata = HSM_LEVEL_3RD_OP_SCATTER_CMAC;
            pContext->eL3Stat = pL3Ctx->tL3AlgCtx.tScatterCMac.eState;
        }
        /* else do nothing */
    }
    else
    {
        eRet = HSM_STATUS_LOGIC_ERR;
    }
    (void)pL2Ctx;

    return eRet;
}

HSM_StatusType HSM_L3_ScatterCMacContextRestore(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ScatterCmacContextInfType * pContext)
{
    HSM_StatusType         eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_3RD_OP_NONE == pL3Ctx->eOperation)
    {
        eRet = HSM_L1_ScatterCmacContextRestore(pL1Ctx, &pContext->tScatterCmacL1Context);

        if(HSM_STATUS_SUCCESS == eRet)
        {
            hsm_memcpy(&(pL3Ctx->tL3AlgCtx.tScatterCMac),&pContext->tScatterCmacL3Context,sizeof(HSM_L3_DrvScatterCMacInfType));
            pL3Ctx->eOperation = pContext->eL3OperationCata;
            pL3Ctx->tL3AlgCtx.tScatterCMac.eState = pContext->eL3Stat;
        }
        /* else do nothing */
    }
    else
    {
        eRet = HSM_STATUS_LOGIC_ERR;
    }
    (void)pL2Ctx;

    return eRet;
}

static HSM_StatusType hsm_scatter_cmac_process(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L3_DrvScatterCMacInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType eRet;

    switch (pCfg->eState)
    {
        case HSM_L3_SCATTER_CMAC_INIT:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                ; /* nothing to do */
            }
            else
            {
                /* PRQA S 2982 ++
                2982: This assignment is redundant. The value of this object is never used before being modified.
                REASON:eRet is the return value for this function*/
                eRet = HSM_STATUS_ERROR;
                /* PRQA S 2982 -- */
                /*bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL*/
            }

            if (HSM_STATUS_SUCCESS == eRetFromPrevious)
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_INIT_OK;
                eRet = HSM_STATUS_SUCCESS;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                eRet = HSM_STATUS_ERROR;
            }
        }
        break;

        case HSM_L3_SCATTER_CMAC_UPDATE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                ;
            }
            else
            {
                /* PRQA S 2982 ++
                2982: This assignment is redundant. The value of this object is never used before being modified.
                REASON:eRet is the return value for this function*/
                eRet = HSM_STATUS_ERROR;
                /* PRQA S 2982 -- */
                /*bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL*/
            }

            if (HSM_STATUS_SUCCESS == eRetFromPrevious)
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_UPDATE_OK;
                eRet = HSM_STATUS_SUCCESS;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                eRet = HSM_STATUS_ERROR;
            }
        }
        break;

        case HSM_L3_SCATTER_CMAC_FINAL:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
                HSM_L2_CommonExitEnv(pL2Ctx);
            }
            else
            {
                /* PRQA S 2982 ++
                2982: This assignment is redundant. The value of this object is never used before being modified.
                REASON:eRet is the return value for this function*/
                eRet = HSM_STATUS_ERROR;
                /* PRQA S 2982 -- */
                /*bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL*/
            }

            if (HSM_STATUS_SUCCESS == eRetFromPrevious)
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                eRet = HSM_STATUS_SUCCESS;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                pL3Ctx->tL3AlgCtx.tScatterCMac.eState = HSM_L3_SCATTER_CMAC_STOP;
                eRet = HSM_STATUS_ERROR;
            }

        }
        break;

        default:
            eRet = HSM_STATUS_LOGIC_ERR;
            break;
    }
    (void)u32TimeoutMs;

    return eRet;
}
/* --------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------- */

HSM_StatusType HSM_L3_UpdateKeySetupEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL2Ctx;
    (void)pL1Ctx;

    if (HSM_LEVEL_3RD_OP_NONE == pL3Ctx->eOperation)
    {
        pL3Ctx->eOperation         = HSM_LEVEL_3RD_OP_UPDATE_KEY;
        pL3Ctx->tL3AlgCtx.tUpdateKey.eState  = HSM_L3_UPDATE_KEY_READY;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L3_UpdateKeyExitEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_3RD_OP_UPDATE_KEY == pL3Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        HSM_L2_Abort(pL2Ctx);
        pL3Ctx->eOperation = HSM_LEVEL_3RD_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

void hsm_core_padding_and_swap_array(
    hsm_uint32_t *pAlignedDest, hsm_uint32_t u32DestOpWordCnt, const void *pSrcData,
    hsm_uint32_t u32SrcOpByteCnt, HSM_DataFormatType eSrcFmt, hsm_uint8_t u8PadByte, HSM_BoolType bPadFromMSB, HSM_BoolType bSwap)
{
    hsm_uint32_t u32Idx     = 0;
    hsm_uint32_t u32Temp;
    hsm_uint32_t u32Data;
    hsm_uint32_t u32DestIdx;
    const hsm_uint32_t *pSrc = (const hsm_uint32_t *)pSrcData;
    hsm_uint32_t u32DestWordCnt = u32DestOpWordCnt;
    hsm_uint32_t u32SrcByteCnt = u32SrcOpByteCnt;

    if ((u32DestWordCnt << 2u) < u32SrcByteCnt)
    {
        u32SrcByteCnt = (u32DestWordCnt << 2u);
    }

    u32Temp    = u32SrcByteCnt >> 2u; /* the word cnt, remove the extra bytes */

    if (0u == (((hsm_uint32_t)pSrc) & 0x3u))
    {
        if (HSM_FALSE != bSwap)
        {
            for (; u32Idx < u32Temp; ++u32Idx)
            {
                /* PRQA S 3335 ++ #Misra-C:2012 Rule-1.1-C99 A function is being used for which there is no previous definition or declaration, 
                                            and so in accordance with the ISO:C Standard an implicit declaration is being inserted. It is not good practice to use a function which has not been previously declared.
                Reason: The  hsm_hw_swap_u32 is declared in the Crypto_Level1Api.h file. */
                pAlignedDest[u32Idx] = hsm_hw_swap_u32(pSrc[u32Idx]);
                /* PRQA S 3335 -- */
            }
        }
        else
        {
            for (; u32Idx < u32Temp; ++u32Idx)
            {
                pAlignedDest[u32Idx] = pSrc[u32Idx];
            }
        }
    }
    else
    {
        if (HSM_FALSE != bSwap)
        {
            for (; u32Idx < u32Temp; ++u32Idx)
            {
                u32DestIdx = (hsm_uint32_t)pSrc + (u32Idx * 4);

                u32Data = *((hsm_uint8_t *)u32DestIdx + 3);
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32DestIdx + 2));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32DestIdx + 1));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32DestIdx + 0));
                /* PRQA S 3335 ++ #Misra-C:2012 Rule-1.1-C99 A function is being used for which there is no previous definition or declaration, 
                                                        and so in accordance with the ISO:C Standard an implicit declaration is being inserted. It is not good practice to use a function which has not been previously declared.
                Reason: The  hsm_hw_swap_u32 is declared in the Crypto_Level1Api.h file. */
                pAlignedDest[u32Idx] = hsm_hw_swap_u32(u32Data);
                /* PRQA S 3335 -- */
            }
        }
        else
        {
            for (; u32Idx < u32Temp; ++u32Idx)
            {
                u32DestIdx = (hsm_uint32_t)pSrc + (u32Idx * 4);

                u32Data = *((hsm_uint8_t *)u32DestIdx + 3);
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32DestIdx + 2));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32DestIdx + 1));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32DestIdx + 0));

                pAlignedDest[u32Idx] = (u32Data);
            }
        }
    }

    u32DestIdx = u32Idx;

    u32Temp = (u32SrcByteCnt % 4u);
    if (0u != u32Temp)
    {
        u32Temp         = 4u - u32Temp; /* 1-3 -> 3-1, get the pad byte cnt */
        u32SrcByteCnt   = (hsm_uint32_t)pSrc + (u32Idx * 4);
        u32Data         = 0u;

        /*PRQA S 2986 ++
        2986: This operation is redundant. The value of the result is always that of the right-hand operand.
        REASON:This assignment is necessary for flexibility of code reviewing */
        if (HSM_DATA_FORMAT_1B == eSrcFmt)
        {
            /* be careful to not read exceed the border */
            if (u32Temp == 1u) /* pad 1 byte, so can read 3bytes */
            {
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 2));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 1));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 0));
            }
            else if (u32Temp == 2u)
            {
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 1));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 0));
            }
            else
            {
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 0));
            }
        }
        else /* source is 4B format */
        {
            /* be careful to not read exceed the border */
            if (u32Temp == 1u) /* pad 1 byte, so can read 3bytes */
            {
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 3));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 2));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 1));
                u32Data = (u32Data << 8u); /* & 0xFFFFFF00u */
            }
            else if (u32Temp == 2u)
            {
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 3));
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 2));
                u32Data = (u32Data << 16u); /* & 0xFFFF0000u */
            }
            else
            {
                u32Data = (u32Data << 8u) | (*((hsm_uint8_t *)u32SrcByteCnt + 3));
                u32Data = (u32Data << 24u); /* & 0xFF000000u */
            }
        }
        /*PRQA S 2986 --*/
        if (HSM_FALSE != bPadFromMSB) /* pad data at the high address of the last word of the input buffer */
        {
            u32Data = u32Data << (u32Temp * 8u);

            for (u32Idx = 0; u32Idx < u32Temp; ++u32Idx)
            {
                u32Data = (u32Data >> 8u) | (((hsm_uint32_t)u8PadByte) << 24u);
            }
        }
        else
        {
            u32Data = u32Data >> (u32Temp * 8u);

            for (u32Idx = 0; u32Idx < u32Temp; ++u32Idx)
            {
                u32Data = (u32Data << 8u) | (((hsm_uint32_t)u8PadByte));
            }
        }

        if (HSM_FALSE != bSwap)
        {
            /* PRQA S 3335 ++ #Misra-C:2012 Rule-1.1-C99 A function is being used for which there is no previous definition or declaration, 
                                            and so in accordance with the ISO:C Standard an implicit declaration is being inserted. It is not good practice to use a function which has not been previously declared.
            Reason: The  hsm_hw_swap_u32 is declared in the Crypto_Level1Api.h file. */
            pAlignedDest[u32DestIdx] = hsm_hw_swap_u32(u32Data);
            /* PRQA S 3335 -- */
        }
        else
        {
            pAlignedDest[u32DestIdx] = (u32Data);
        }
        u32DestIdx++;
    }

    hsm_memset(pAlignedDest+u32DestIdx, u8PadByte, (u32DestWordCnt<<2u) - (u32DestIdx << 2u));
}

void hsm_pkam_u32_array_append_zero_from_left(hsm_uint8_t *pDest, const hsm_uint8_t *pSrc, hsm_uint32_t u32SrcByteCnt, hsm_uint32_t u32ZeroByteCnt)
{
    hsm_uint32_t u32PadZeroTailCnt;
    hsm_uint32_t u32Left;
    hsm_uint8_t *pDestInter;
    const hsm_uint8_t *pSrcInter;
    hsm_uint8_t u8Data;

    if (0u == u32ZeroByteCnt)
    {
        if (pDest != pSrc)
        {
            hsm_bidi_memcpy(pDest, pSrc, u32SrcByteCnt, 1);
        }
        else
        {
            ; /* nothing to do */
        }
    }
    else
    {
        pSrcInter = pSrc;
        u32Left = u32SrcByteCnt;
        pDestInter = pDest + u32ZeroByteCnt;
        hsm_memset(pDest, 0, u32ZeroByteCnt);
        while (u32Left > 3u)
        {
            pDestInter[0] = pSrcInter[3];
            pDestInter[1] = pSrcInter[2];
            pDestInter[2] = pSrcInter[1];
            pDestInter[3] = pSrcInter[0];
            u32Left    -= 4u;
            pDestInter += 4u;
            pSrcInter  += 4u;
        }

        if (3u == u32Left)
        {
            pDestInter[0] = pSrcInter[3];
            pDestInter[1] = pSrcInter[2];
            pDestInter[2] = pSrcInter[1];
            pDestInter += 3u;
        }
        else if (2u == u32Left)
        {
            pDestInter[0] = pSrcInter[3];
            pDestInter[1] = pSrcInter[2];
            pDestInter += 2u;
        }
        else if (1u == u32Left)
        {
            pDestInter[0] = pSrcInter[3];
            pDestInter += 1u;
        }
        else
        {
            ; /* nothing to do */
        }

        u32PadZeroTailCnt = 4u - ((u32SrcByteCnt + u32ZeroByteCnt) % 4u);
        hsm_memset(pDestInter, 0, u32PadZeroTailCnt);

        u32Left = u32ZeroByteCnt + u32SrcByteCnt + u32PadZeroTailCnt;
        pDestInter = pDest;
        while (u32Left > 3u)
        {
            u8Data = pDestInter[3];
            pDestInter[3] = pDestInter[0];
            pDestInter[0] = u8Data;

            u8Data = pDestInter[2];
            pDestInter[2] = pDestInter[1];
            pDestInter[1] = u8Data;

            u32Left -= 4u;
            pDestInter += 4u;
        }
    }
}

const hsm_uint32_t *hsm_pkam_get_loadable_buf(HSM_DataFormatType eInputFmt, hsm_uint32_t *pCacheBufferMayUse,
            hsm_uint32_t u32LastCacheByteCnt, const hsm_uint32_t *pSrc, hsm_uint32_t u32SrcByteCnt, hsm_uint32_t u32LoadByteCount)
{
    const hsm_uint32_t *pRet;
    hsm_uint32_t        u32WordCnt    = u32LoadByteCount >> 2U;
    hsm_uint32_t        u32Temp;
    hsm_uint32_t        u32CacheByteCnt = u32LastCacheByteCnt;
    hsm_uint32_t *pCacheMayUse = pCacheBufferMayUse;
    hsm_uint32_t *pAlignedCache = (hsm_uint32_t *)(((((hsm_uint32_t)pCacheMayUse) + 3u) >> 2u) << 2u);

    u32CacheByteCnt         = u32CacheByteCnt - (((hsm_uint32_t)pAlignedCache) - ((hsm_uint32_t)pCacheMayUse));
    pCacheMayUse            = pAlignedCache; /* make sure the buffer start address is 4bytes aligned */

    if (((((u32LoadByteCount + 7u) >> 3u) << 3u) <= u32CacheByteCnt) && /* require load cache size is enough for load data 8byte aligned */
        (0 == (u32LoadByteCount % 4)) &&
        (u32LoadByteCount >= u32SrcByteCnt))
    {
        if (u32SrcByteCnt == u32LoadByteCount)
        {
            if (HSM_DATA_FORMAT_1B == eInputFmt) /* 1bytes unit format */
            {
                hsm_core_padding_and_swap_array(pCacheMayUse, u32WordCnt, pSrc, u32LoadByteCount, eInputFmt, 0, HSM_TRUE, HSM_TRUE);
                if (0u != (u32LoadByteCount % 8u))
                {
                    pCacheMayUse[u32WordCnt] = 0u;
                }
                /* else nothing */

                pRet = pCacheMayUse;
            }
            /* 4byte format, if input start address not 4bytes aligned, or load byte cnt not 8bytes aligned, need pad 0, these two case should use cache */
            else if (((((hsm_uint32_t)pSrc) & 0x3u) != 0u) || (0u != (u32LoadByteCount % 8u)) ) /* && (0u != pSrc[u32LoadByteCount/4u]))) not read more to trigger MPU protect */
            {
                hsm_core_padding_and_swap_array(pCacheMayUse, u32WordCnt, pSrc, u32LoadByteCount, eInputFmt, 0, HSM_FALSE, HSM_FALSE);

                if (0u != (u32LoadByteCount % 8u))
                {
                    pCacheMayUse[u32WordCnt] = 0u;
                }
                /* else nothing */

                pRet = pCacheMayUse;
            }
            else
            {
                pRet = pSrc;
            }
        }
        else
        {
            pRet = pCacheMayUse;
            if (HSM_DATA_FORMAT_1B == eInputFmt) /* 1bytes unit format */
            {
                u32Temp = u32LoadByteCount - u32SrcByteCnt;
                hsm_memset(pCacheMayUse, 0U, u32Temp);
                hsm_bidi_memcpy(((hsm_uint8_t *)pCacheMayUse)+u32Temp, pSrc, u32SrcByteCnt, 1);
                hsm_core_padding_and_swap_array(pCacheMayUse, u32WordCnt, pCacheMayUse, u32LoadByteCount, eInputFmt, 0, HSM_TRUE, HSM_TRUE); /* the data size has patched to u32LoadByteCount size */

                if (0u != (u32LoadByteCount % 8u))
                {
                    pCacheMayUse[u32WordCnt] = 0u;
                }
            }
            else /* 4bytes unit format */
            {
                u32Temp = u32LoadByteCount - u32SrcByteCnt;

                hsm_pkam_u32_array_append_zero_from_left((hsm_uint8_t *)pCacheMayUse, (const hsm_uint8_t *)pSrc, u32SrcByteCnt, u32Temp);


                if (0u != (u32LoadByteCount % 8u))
                {
                    pCacheMayUse[u32WordCnt] = 0u;
                }
                /* else nothing */
            }
        }
    }
    else
    {
        pRet = pSrc; /* error case, make sure the caller not trigger this */
    }

    return pRet;
}

HSM_StatusType HSM_L3_UpdatePlainKey(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx,
      const HSM_Ln_PlainKeyImport *pPlainKey, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;
    HSM_Ln_ImportUserKeyExtType tCfg;
    hsm_uint32_t u32ActualStoreSize;

    if (HSM_LEVEL_3RD_OP_UPDATE_KEY == pL3Ctx->eOperation)
    {
        if (pL3Ctx->tL3AlgCtx.tUpdateKey.eState == HSM_L3_UPDATE_KEY_READY)
        {

            if ((pPlainKey->u32KeyId) &&
                (!((HSM_LN_KEY_DATA_STORE_FMT_SPLIT_BN_LOADABLE == pPlainKey->eKeyStoreFmt) && (pPlainKey->u32KeyDataByteCnt & 0x1u))))
            {
                pL3Ctx->tL3AlgCtx.tUpdateKey.u32TimeoutMs = u32TimeoutMs;

                tCfg.bStoreInFlash = (pPlainKey->u32KeyId & 0x1u) ? HSM_FALSE : HSM_TRUE;
                tCfg.eExportType   = pPlainKey->eExportType;
                tCfg.pKeyID        = NULL_PTR;
                tCfg.eDecryType    = KEYMANAGER_ENDECRY_NONE;
                tCfg.u32DecryKeyID = 0U;
                tCfg.eUserKeyType  = KEYMANAGER_USER_KEY_TYPE_NONE; /* ignore the key type */
                tCfg.eAlgType      = KEYMANAGER_ENDECRY_ALG_CTR;
                tCfg.pIV           = NULL_PTR;
                tCfg.u32KeyIdFix   = pPlainKey->u32KeyId;
                tCfg.u32Protect    = 0u;

                if (HSM_LN_KEY_DATA_STORE_FMT_BN_LOADABLE == pPlainKey->eKeyStoreFmt)
                {
                    /* 4B format, 8bytes size aligned */
                    u32ActualStoreSize = ((pPlainKey->u32KeyDataByteCnt + 7u) >> 3u) << 3u;
                    tCfg.pDataAddr = hsm_pkam_get_loadable_buf(
                            pPlainKey->eKeyDataFmt, &(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]),
                            sizeof(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache), (const hsm_uint32_t *)pPlainKey->pKeyData, pPlainKey->u32KeyDataByteCnt, u32ActualStoreSize);

                    tCfg.u32DataLength = u32ActualStoreSize;
                }
                else if (HSM_LN_KEY_DATA_STORE_FMT_SPLIT_BN_LOADABLE == pPlainKey->eKeyStoreFmt)
                {
                    if (KEYMANAGER_USER_KEY_TYPE_SM2_PUBLIC == pPlainKey->eKeyUsage)
                    {
                        u32ActualStoreSize = 32u;
                    }
                    else
                    {
                        u32ActualStoreSize = (((pPlainKey->u32KeyDataByteCnt >> 1u) + 7u) >> 3u) << 3u;
                    }

                    tCfg.pDataAddr = hsm_pkam_get_loadable_buf(
                            pPlainKey->eKeyDataFmt, &(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]),
                            u32ActualStoreSize, (const hsm_uint32_t *)pPlainKey->pKeyData, pPlainKey->u32KeyDataByteCnt>> 1u, u32ActualStoreSize);

                    if ((const void *)tCfg.pDataAddr != (const void *)pPlainKey->pKeyData)
                    {
                        hsm_pkam_get_loadable_buf(
                            pPlainKey->eKeyDataFmt, (hsm_uint32_t *)(((hsm_uint8_t *)tCfg.pDataAddr) + u32ActualStoreSize),
                            u32ActualStoreSize,
                            (const hsm_uint32_t *)((const hsm_uint8_t *)pPlainKey->pKeyData + (pPlainKey->u32KeyDataByteCnt >> 1u)),
                            pPlainKey->u32KeyDataByteCnt >> 1u, u32ActualStoreSize);
                    }

                    tCfg.u32DataLength = u32ActualStoreSize << 1u;
                }
                else if (HSM_LN_KEY_DATA_STORE_FMT_1B == pPlainKey->eKeyStoreFmt)
                {
                    /* force 1B format */
                    if (HSM_DATA_FORMAT_4B == pPlainKey->eKeyDataFmt)
                    {
                        u32ActualStoreSize = ((pPlainKey->u32KeyDataByteCnt + 3u) >> 2u) << 2u;

                        hsm_core_padding_and_swap_array(&(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]), u32ActualStoreSize >> 2u,
                            pPlainKey->pKeyData, pPlainKey->u32KeyDataByteCnt, pPlainKey->eKeyDataFmt, 0, HSM_FALSE, HSM_TRUE);

                        tCfg.pDataAddr = &(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]);
                        tCfg.u32DataLength = pPlainKey->u32KeyDataByteCnt;
                        /* tCfg.u32DataLength NOT change */
                    }
                    else
                    {
                        hsm_memcpy((void*)(&(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0])),(const void *)pPlainKey->pKeyData,pPlainKey->u32KeyDataByteCnt);
                        tCfg.pDataAddr = (const hsm_uint32_t *)(&(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]));
                        tCfg.u32DataLength = pPlainKey->u32KeyDataByteCnt;
                    }
                }
                else /* HSM_LN_KEY_DATA_STORE_FMT_4B */
                {
                    if (HSM_DATA_FORMAT_1B == pPlainKey->eKeyDataFmt)
                    {
                        u32ActualStoreSize = ((pPlainKey->u32KeyDataByteCnt + 3u) >> 2u) << 2u; /* normal key data, size 4bytes aligned, force 4B format */

                        hsm_core_padding_and_swap_array(&(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]), u32ActualStoreSize >> 2u,
                            pPlainKey->pKeyData, pPlainKey->u32KeyDataByteCnt, pPlainKey->eKeyDataFmt, 0, HSM_TRUE, HSM_TRUE);

                        tCfg.pDataAddr = (const hsm_uint32_t *)(&(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]));
                        tCfg.u32DataLength = u32ActualStoreSize;
                    }
                    else
                    {
                        hsm_memcpy((void*)(&(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0])),(const void *)pPlainKey->pKeyData,pPlainKey->u32KeyDataByteCnt);
                        tCfg.pDataAddr = (const hsm_uint32_t *)(&(pL3Ctx->tL3AlgCtx.tUpdateKey.aKeyDataCache[0]));
                        tCfg.u32DataLength = pPlainKey->u32KeyDataByteCnt;
                    }
                }

                eRet = HSM_L2_UpdateKeySetupEnv(pL2Ctx, pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pL3Ctx->tL3AlgCtx.tUpdateKey.eState = HSM_L3_UPDATE_KEY_PROCESS;

                    eRet = HSM_L2_UpdateKey(pL2Ctx, pL1Ctx, &tCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        ;
                    }
                    else
                    {
                        HSM_L2_UpdateKeyExitEnv(pL2Ctx, pL1Ctx);
                        pL3Ctx->tL3AlgCtx.tUpdateKey.eState = HSM_L3_UPDATE_KEY_STOP;
                    }
                }
                else
                {
                    pL3Ctx->tL3AlgCtx.tUpdateKey.eState = HSM_L3_UPDATE_KEY_STOP;
                }
            }
            else
            {
                eRet = HSM_STATUS_PARAM_ERR;
            }
        }
        else
        {
            eRet = HSM_STATUS_LOGIC_ERR;
        }
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

/* --------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------- */
void HSM_L3_Ack_IrqHandler(void *pUpperCtx, HSM_BoolType bIsErrorHappen, HSM_StatusType eRet)
{
    HSM_StatusType    eCurStat = eRet;
    HSM_BoolType      bRunning = HSM_TRUE;
    HSM_Ln_RtCtxType *pLnCtx = (HSM_Ln_RtCtxType *)pUpperCtx;
    HSM_L3_RtCtxType *pL3Ctx = &(pLnCtx->tHsmL3Ctx);
    HSM_L2_RtCtxType *pL2Ctx = &(pLnCtx->tHsmL2Ctx);
    HSM_L1_RtCtxType *pL1Ctx = &(pLnCtx->tHsmL1Ctx);
    HSM_BoolType bErrorHappen = bIsErrorHappen;

    switch (pL3Ctx->eOperation)
    {
        case HSM_LEVEL_3RD_OP_SCATTER_CMAC:
        {
            eCurStat = hsm_scatter_cmac_process(pL3Ctx, pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &(pL3Ctx->tL3AlgCtx.tScatterCMac), eRet, pL1Ctx->eTriggerSrc);
            if (HSM_STATUS_AGAIN != eCurStat)
            {
                if (HSM_STATUS_SUCCESS != eCurStat)
                {
                    bErrorHappen = HSM_TRUE;
                }
                else
                {
                    bErrorHappen = HSM_FALSE;
                }
            }
            /* else do nothing */
        }
        break;

        case HSM_LEVEL_3RD_OP_UPDATE_KEY:
        {
            ; /* nothing to do */
        }
        break;

        default:
            eCurStat = eRet;
            bRunning = HSM_FALSE;
            break;
    }

    if ((HSM_FALSE == bRunning) || (HSM_STATUS_AGAIN != eCurStat))
    {
        if (NULL_PTR != pL3Ctx->pStopCb)
        {
            pL3Ctx->pStopCb(pUpperCtx, bErrorHappen, eCurStat);
        }
        /* else nothing */
    }
    /* else do nothing */
}

void HSM_L3_Init(HSM_L3_RtCtxType *pCtx, HSM_L3_InitParmType *pParm)
{
    pCtx->eOperation = HSM_LEVEL_3RD_OP_NONE;
    pCtx->pStopCb    = pParm->pStopCb;
}

void HSM_L3_CleanEnv(HSM_L3_RtCtxType *pCtx)
{
    pCtx->eOperation = HSM_LEVEL_3RD_OP_NONE;
}

/* abort the second level operation, the operation goto none */
void HSM_L3_Abort(HSM_L3_RtCtxType *pCtx)
{
    pCtx->eOperation = HSM_LEVEL_3RD_OP_NONE;
}

void HSM_L3_CommonExitEnv(HSM_L3_RtCtxType *pCtx)
{
    pCtx->eOperation = HSM_LEVEL_3RD_OP_NONE;
}

// clang-format on
