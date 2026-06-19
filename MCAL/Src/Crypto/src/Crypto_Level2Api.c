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
#include "Crypto_LevelNApi.h"

HSM_StatusType hsm_l2_cmac_empty_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvCMacEmptyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode);
HSM_StatusType hsm_l2_revoke_key_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvRevokeKeyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode);
HSM_StatusType hsm_l2_ecc_verify_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvEccVerifyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode);
HSM_StatusType hsm_l2_sm2_verify_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvSm2VerifyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode);
HSM_StatusType hsm_l2_rng_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvRngInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode);
HSM_StatusType hsm_l2_update_she_key_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvUpdateSheKeyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode);

HSM_StatusType HSM_L2_CMacEmptySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation        = HSM_LEVEL_2ND_OP_CMAC_EMPTY;
        pL2Ctx->tL2AlgCtx.tCMacEmpty.eStat  = HSM_L2_CMAC_EMPTY_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_CMacEmptyReset(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_CMAC_EMPTY == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->tL2AlgCtx.tCMacEmpty.eStat  = HSM_L2_CMAC_EMPTY_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }
    return eRet;
}

HSM_StatusType HSM_L2_CMacEmptyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_CMAC_EMPTY == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

static HSM_StatusType hsm_cmac_empty_encrypt(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvCMacEmptyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_AESM_BACKEND_AES == pCfg->eBackend)
    {
        eRet = HSM_L1_AesEncryptSetupEnv(pL1Ctx);
        if (HSM_STATUS_SUCCESS == eRet)
        {
            eRet = HSM_L1_AesEncrypt(pL1Ctx, &(pCfg->tParm), u32TimeoutMs);

            if (HSM_STATUS_SUCCESS == eRet)
            {
                ;
            }
            else
            {
                HSM_L1_AesEncryptExitEnv(pL1Ctx);
                pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_STOP;
            }
        }
        else
        {
            pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_STOP;
        }
    }
    else
    {
        eRet = HSM_L1_Sm4EncryptSetupEnv(pL1Ctx);
        if (HSM_STATUS_SUCCESS == eRet)
        {
            eRet = HSM_L1_Sm4Encrypt(pL1Ctx, &(pCfg->tParm), u32TimeoutMs);

            if (HSM_STATUS_SUCCESS == eRet)
            {
                ;
            }
            else
            {
                HSM_L1_Sm4EncryptExitEnv(pL1Ctx);
                pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_STOP;
            }
        }
        else
        {
            pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_STOP;
        }
    }

    return eRet;
}

HSM_StatusType hsm_l2_cmac_empty_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L2_DrvCMacEmptyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;
    hsm_uint32_t        u32Temp;

    switch (pCfg->eStat)
    {
        case HSM_L2_CMAC_EMPTY_SM_READY:
        {
            hsm_memset(&(pL2Ctx->tL2AlgCtx.tCMacEmpty.aInputCacheBuf[0]), 0, sizeof(pL2Ctx->tL2AlgCtx.tCMacEmpty.aInputCacheBuf));
            hsm_memset(&(pL2Ctx->tL2AlgCtx.tCMacEmpty.aIvData[0]), 0, sizeof(pL2Ctx->tL2AlgCtx.tCMacEmpty.aIvData));

            pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_GENERATE_L;

            eRet = hsm_cmac_empty_encrypt(pL1Ctx, pCfg, u32TimeoutMs);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                eRet = HSM_STATUS_AGAIN;
            }
            /* else do nothing */
        }
        break;

        case HSM_L2_CMAC_EMPTY_SM_GENERATE_L:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                /* generate K1 */
                hsm_uint32_t u32Idx;
                hsm_uint8_t  u8Data, u8Data2, u8Data3;
                hsm_uint8_t *pData = (hsm_uint8_t *)&(pCfg->aResultCacheBuf[0]);

                u8Data = pData[0];
                u8Data3 = pData[0];

                for (u32Idx = 0u; u32Idx < 15; ++u32Idx)
                {
                    u8Data2 = pData[u32Idx+1];
                    u8Data = ((hsm_uint8_t)(u8Data << 1)) | ((hsm_uint8_t)(u8Data2 >> 7));
                    pData[u32Idx] = u8Data;
                    u8Data = u8Data2;
                }

                u8Data = (hsm_uint8_t)(u8Data << 1);
                pData[15] = u8Data;


                if (0u != (u8Data3 & 0x80))
                {
                    pData[15] = pData[15] ^ 0x87;
                }

                /* generate K2 */
                u8Data = pData[0];
                u8Data3 = pData[0];

                for (u32Idx = 0u; u32Idx < 15; ++u32Idx)
                {
                    u8Data2 = pData[u32Idx+1];
                    u8Data = ((hsm_uint8_t)(u8Data << 1)) | ((hsm_uint8_t)(u8Data2 >> 7));
                    pData[u32Idx] = u8Data;
                    u8Data = u8Data2;
                }

                u8Data = (hsm_uint8_t)(u8Data << 1);
                pData[15] = u8Data;


                if (0u != (u8Data3 & 0x80))
                {
                    pData[15] = pData[15] ^ 0x87;
                }

                /* generate msg */
                pData[0] = pData[0] ^ 0x80;


                hsm_memcpy(&(pCfg->aInputCacheBuf[0]), &(pCfg->aResultCacheBuf[0]), 16);
                hsm_memset(&(pCfg->aResultCacheBuf[0]), 0, 16);

                pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_GENERATE_T;

                eRet = hsm_cmac_empty_encrypt(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */

            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_STOP;
            }
        }
        break;

        case HSM_L2_CMAC_EMPTY_SM_GENERATE_T:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                eRet = HSM_STATUS_SUCCESS;
                pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_STOP;

                if ((pCfg->pOut != NULL_PTR))
                {
                    u32Temp = 16u;

                    if (HSM_DATA_FORMAT_4B == pCfg->eOutFmt)
                    {
                        hsm_u32_array_swap((hsm_uint32_t *)&(pCfg->aResultCacheBuf[0]), u32Temp/4U); /* all result data size is 4*N */
                    }
                    else
                    {
                        
                    }

                    if (pCfg->u32OutBufSize <= u32Temp)
                    {
                        u32Temp = pCfg->u32OutBufSize;
                    }
                    /* else do nothing */

                    hsm_memcpy(pCfg->pOut, &(pCfg->aResultCacheBuf[0]), u32Temp);

                    if (NULL_PTR != pCfg->pOutSize)
                    {
                        hsm_memcpy(pCfg->pOutSize, &u32Temp, sizeof(u32Temp));
                    }
                    else
                    {
                        ;
                    }

                }
                /* else do nothing */
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_CMAC_EMPTY_SM_STOP;
            }
        }
        break;

        case HSM_L2_CMAC_EMPTY_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}

HSM_StatusType HSM_L2_CMacEmpty(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_CMacCfgParmsType *pKeyCfg, const HSM_Ln_ResultBufInfoType *pResult, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_CMAC_EMPTY == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tCMacEmpty.eStat  == HSM_L2_CMAC_EMPTY_SM_READY)
        {
            pL2Ctx->tL2AlgCtx.tCMacEmpty.pOut                 = pResult->pData;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.u32OutBufSize        = pResult->u32DataBufSize;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.eOutFmt              = pResult->eDataFmt;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.pOutSize             = pResult->pDataSize;

            pL2Ctx->tL2AlgCtx.tCMacEmpty.eBackend                     = pKeyCfg->eBackend;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.u32KeyId               = pKeyCfg->u32KeyId;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.eUseKeyType            = pKeyCfg->eUseKeyType;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.tNewKeyInf.eKeyType    = pKeyCfg->eKeyType;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.tNewKeyInf.pKeyAddr    = (const hsm_uint8_t *)&(pL2Ctx->tL2AlgCtx.tCMacEmpty.aKeyData[0]); /* pKeyCfg->pKeyAddr; */
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.tVendorKeyInf.eKeyType = pKeyCfg->eKeyType;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.eAesAlg                = HSM_SYMM_ENDECRYPT_MODE_CBC;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.pDataInput             = (const hsm_uint8_t *)&(pL2Ctx->tL2AlgCtx.tCMacEmpty.aInputCacheBuf[0]);
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.u32InputByteCnt        = 0x10;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.pDataOutput            = (hsm_uint8_t *)&(pL2Ctx->tL2AlgCtx.tCMacEmpty.aResultCacheBuf[0]);
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.u32OutputMemSize       = sizeof(pL2Ctx->tL2AlgCtx.tCMacEmpty.aResultCacheBuf);
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.pIvData                = (const hsm_uint8_t *)&(pL2Ctx->tL2AlgCtx.tCMacEmpty.aIvData[0]);
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.ePad                   = HSM_FLEXAES_PAD_ZERO;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.eInputFmt              = HSM_DATA_FORMAT_1B;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.eOutputFmt             = HSM_DATA_FORMAT_1B;
            pL2Ctx->tL2AlgCtx.tCMacEmpty.tParm.pGenerateOutByteCnt    = NULL_PTR;

            if ((HSM_AES_KEY_NEW == pKeyCfg->eUseKeyType) && (0 == pKeyCfg->u32KeyId))
            {
                eRet = hsm_1B4B_convert_from_idx(HSM_DATA_FORMAT_1B, &(pL2Ctx->tL2AlgCtx.tCMacEmpty.aKeyData[0]), 0, sizeof(pL2Ctx->tL2AlgCtx.tCMacEmpty.aKeyData),
                                                pKeyCfg->eKeyDataFmt, pKeyCfg->pKeyAddr, 0, (pKeyCfg->eKeyType * 8) + 16);
            }

            if (HSM_STATUS_SUCCESS == eRet)
            {
                eRet = hsm_l2_cmac_empty_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                    &(pL2Ctx->tL2AlgCtx.tCMacEmpty), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);
                if (HSM_STATUS_AGAIN == eRet)
                {
                    eRet = HSM_STATUS_SUCCESS;
                }
                else
                {
                    ;
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

/* --------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------- */
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
static HSM_StatusType hsm_update_key_loadfirmware(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, uint32 u32TimeoutMs)
{
    HSM_StatusType eRet;

    eRet = HSM_L1_LoadFirmwareSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_LoadFirmware(pL1Ctx, u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            (void)HSM_L1_LoadFirmwareExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
    }

    return eRet;
}
#endif /* (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM) */

static HSM_StatusType hsm_update_key_import(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet          = HSM_STATUS_SUCCESS;

    eRet = HSM_L1_KeyImportSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_KeyImport(pL1Ctx, &(pCfg->tImportCfg), u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_KeyImportExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
    }

    return eRet;
}

static HSM_StatusType hsm_update_key_tidy(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    eRet = HSM_L1_KeySpaceTidyUpSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_KeySpaceTidyUp(pL1Ctx, &(pCfg->tKeySpaceStatus), u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_KeySpaceTidyUpExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
    }

    return eRet;
}

#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)

static HSM_StatusType hsm_update_key_get_status(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet          = HSM_STATUS_SUCCESS;

    eRet = HSM_L1_KeySpaceGetStatusSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_KeySpaceGetStatus(pL1Ctx, &(pCfg->tKeySpaceStatus), u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_KeySpaceGetStatusExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
    }

    return eRet;
}

static HSM_StatusType hsm_update_key_get_id_status(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    eRet = HSM_L1_GetKeyIdStatusSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_GetKeyIdStatus(pL1Ctx, pCfg->tImportCfg.u32KeyIdFix, u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_GetKeyIdStatusExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
    }

    return eRet;
}

static HSM_StatusType hsm_update_key_revoke(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet          = HSM_STATUS_SUCCESS;

    eRet = HSM_L1_KeyRevokeSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_KeyRevoke(pL1Ctx, pCfg->tImportCfg.u32KeyIdFix, u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_KeyRevokeExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
    }

    return eRet;
}

HSM_StatusType hsm_l2_update_key_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L2_DrvUpdateKeyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;

    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_UPDATE_KEY_SM_READY:
        {
            if (0u != (pCfg->tImportCfg.u32KeyIdFix))
            {
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_LOADFIRMWARE;
                eRet = hsm_update_key_loadfirmware(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            else
            {
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_IMPORT;

                if (KEYMANAGER_FALSE == pCfg->tImportCfg.bStoreInFlash) /* the ram key space always tidy up already */
                {
                    pCfg->bTidyUpAlready = HSM_TRUE;
                }

                eRet = hsm_update_key_import(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_LOADFIRMWARE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                if (0u != (pCfg->tImportCfg.u32KeyIdFix))
                {
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_CHECK_EXIST;
    
                    if (0x1u == (pCfg->tImportCfg.u32KeyIdFix & 0x1u)) /* the ram key space always tidy up already */
                    {
                        pCfg->bTidyUpAlready = HSM_TRUE;
                    }
    
                    eRet = hsm_update_key_get_id_status(pL1Ctx, pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    /* else do nothing */
                }
                else
                {
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_IMPORT;
    
                    if (KEYMANAGER_FALSE == pCfg->tImportCfg.bStoreInFlash) /* the ram key space always tidy up already */
                    {
                        pCfg->bTidyUpAlready = HSM_TRUE;
                    }
    
                    eRet = hsm_update_key_import(pL1Ctx, pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    /* else do nothing */
                }
            }
            else if (HSM_STATUS_HW_ERR == eRetFromPrevious)
            {
                eRet = HSM_STATUS_HW_ERR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_CHECK_EXIST:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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

            if (HSM_STATUS_NOT_EXIST == eRetFromPrevious) /* key id not exist */
            {
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_IMPORT;

                eRet = hsm_update_key_import(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            else if (HSM_STATUS_EXIST == eRetFromPrevious) /* key id exist, and valid */
            {
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_REVOKE;

                eRet = hsm_update_key_revoke(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            else if (HSM_STATUS_ZOMBIE == eRetFromPrevious) /* key id exist */
            {
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_TIDYUP;

                pCfg->bTidyUpAlready = HSM_TRUE;

                eRet = hsm_update_key_tidy(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_REVOKE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->bTidyUpAlready = HSM_TRUE;

                if (0x1u == (pCfg->tImportCfg.u32KeyIdFix & 0x1)) /* ram key don't need tidy up */
                {
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_IMPORT;
                    eRet = hsm_update_key_import(pL1Ctx, pCfg, u32TimeoutMs);
                }
                else
                {
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_TIDYUP;
                    eRet = hsm_update_key_tidy(pL1Ctx, pCfg, u32TimeoutMs);
                }

                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_TIDYUP:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_IMPORT;

                eRet = hsm_update_key_import(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_IMPORT:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;

                if (0u == pCfg->tImportCfg.u32KeyIdFix)
                {
                    if (NULL_PTR != pCfg->pKeyIdOut)
                    {
                        *pCfg->pKeyIdOut = pCfg->u32Id;
                    }
                }
                else
                {
                    if (NULL_PTR != pCfg->pKeyIdOut)
                    {
                        *pCfg->pKeyIdOut = pCfg->tImportCfg.u32KeyIdFix;
                    }
                }

                eRet = HSM_STATUS_SUCCESS;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else if (HSM_FALSE == pCfg->bTidyUpAlready)
            {
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_GET_STATUS;

                eRet = hsm_update_key_get_status(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_GET_STATUS:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->bTidyUpAlready = HSM_TRUE;

                if (pCfg->tKeySpaceStatus.u32InvalidKeyCounter > 0u)
                {
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_TIDYUP;

                    eRet = hsm_update_key_tidy(pL1Ctx, pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    /* else do nothing */
                }
                else
                {
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
                    eRet = HSM_STATUS_ERROR;
                }
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}
#else
static HSM_StatusType hsm_update_key_content(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    eRet = HSM_L1_UpdateKeyIdContentSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_UpdateKeyIdContent(pL1Ctx, &(pCfg->tUpdateKeyCfg), u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_UpdateKeyIdContentExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
    }

    return eRet;
}

static HSM_StatusType hsm_update_or_import(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvUpdateKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    if (0u != (pCfg->tImportCfg.u32KeyIdFix))
    {
        pCfg->tUpdateKeyCfg.u32KeyId            = pCfg->tImportCfg.u32KeyIdFix;
        pCfg->tUpdateKeyCfg.pDataAddr           = pCfg->tImportCfg.pDataAddr;
        pCfg->tUpdateKeyCfg.u32PlainKeyLength   = pCfg->tImportCfg.u32DataLength;
        pCfg->tUpdateKeyCfg.eDecryType          = pCfg->tImportCfg.eDecryType;
        pCfg->tUpdateKeyCfg.u32DecryKeyID       = pCfg->tImportCfg.u32DecryKeyID;
        pCfg->tUpdateKeyCfg.eUserKeyType        = pCfg->tImportCfg.eUserKeyType;
        pCfg->tUpdateKeyCfg.eAlgType            = pCfg->tImportCfg.eAlgType;
        pCfg->tUpdateKeyCfg.pIV                 = pCfg->tImportCfg.pIV;

        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_UPDATE;

        if (0x1u == (pCfg->tImportCfg.u32KeyIdFix & 0x1u)) /* the ram key space always tidy up already */
        {
            pCfg->bTidyUpAlready = HSM_TRUE;
        }

        eRet = hsm_update_key_content(pL1Ctx, pCfg, u32TimeoutMs);
        if (HSM_STATUS_SUCCESS == eRet)
        {
            eRet = HSM_STATUS_AGAIN;
        }
        /* else do nothing */
    }
    else
    {
        pCfg->eStat = HSM_L2_UPDATE_KEY_SM_IMPORT;

        if (KEYMANAGER_FALSE == pCfg->tImportCfg.bStoreInFlash) /* the ram key space always tidy up already */
        {
            pCfg->bTidyUpAlready = HSM_TRUE;
        }

        eRet = hsm_update_key_import(pL1Ctx, pCfg, u32TimeoutMs);
        if (HSM_STATUS_SUCCESS == eRet)
        {
            eRet = HSM_STATUS_AGAIN;
        }
        /* else do nothing */
    }

    return eRet;
}

HSM_StatusType hsm_l2_update_key_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L2_DrvUpdateKeyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;

    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_UPDATE_KEY_SM_READY:
        {
            eRet = hsm_update_or_import(pL1Ctx, pCfg, u32TimeoutMs);
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_UPDATE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;

                if (0u == pCfg->tImportCfg.u32KeyIdFix)
                {
                    if (NULL_PTR != pCfg->pKeyIdOut)
                    {
                        *pCfg->pKeyIdOut = pCfg->u32Id;
                    }
                }
                else
                {
                    if (NULL_PTR != pCfg->pKeyIdOut)
                    {
                        *pCfg->pKeyIdOut = pCfg->tImportCfg.u32KeyIdFix;
                    }
                }

                eRet = HSM_STATUS_SUCCESS;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else if (HSM_STATUS_NOT_EXIST == eRetFromPrevious) /* the fix key id not exist */
            {
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_IMPORT;

                if (KEYMANAGER_FALSE == pCfg->tImportCfg.bStoreInFlash) /* the ram key space always tidy up already */
                {
                    pCfg->bTidyUpAlready = HSM_TRUE;
                }

                eRet = hsm_update_key_import(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            else if (HSM_STATUS_SPACE_FULL == eRetFromPrevious)
            {
                if (HSM_FALSE == pCfg->bTidyUpAlready)
                {
                    pCfg->bTidyUpAlready = HSM_TRUE;
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_TIDYUP;

                    eRet = hsm_update_key_tidy(pL1Ctx, pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    /* else do nothing */
                }
                else
                {
                    eRet = HSM_STATUS_ERROR;
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
                }
                /* else do nothing */
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_IMPORT:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;

                if (0u == pCfg->tImportCfg.u32KeyIdFix)
                {
                    if (NULL_PTR != pCfg->pKeyIdOut)
                    {
                        *pCfg->pKeyIdOut = pCfg->u32Id;
                    }
                }
                else
                {
                    if (NULL_PTR != pCfg->pKeyIdOut)
                    {
                        *pCfg->pKeyIdOut = pCfg->tImportCfg.u32KeyIdFix;
                    }
                }

                eRet = HSM_STATUS_SUCCESS;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else if (HSM_STATUS_SPACE_FULL == eRetFromPrevious)
            {
                if (HSM_FALSE == pCfg->bTidyUpAlready)
                {
                    pCfg->bTidyUpAlready = HSM_TRUE;
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_TIDYUP;

                    eRet = hsm_update_key_tidy(pL1Ctx, pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    /* else do nothing */
                }
                else
                {
                    eRet = HSM_STATUS_ERROR;
                    pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
                }
                /* else do nothing */
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_TIDYUP:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                eRet = hsm_update_or_import(pL1Ctx, pCfg, u32TimeoutMs);
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_KEY_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}

#endif

HSM_StatusType HSM_L2_UpdateKeySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation        = HSM_LEVEL_2ND_OP_UPDATE_KEY;
        pL2Ctx->tL2AlgCtx.tUpdateKey.eStat  = HSM_L2_UPDATE_KEY_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_UpdateKey(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ImportUserKeyExtType *pKeyCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_UPDATE_KEY == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tUpdateKey.eStat  == HSM_L2_UPDATE_KEY_SM_READY)
        {

            hsm_memcpy(&(pL2Ctx->tL2AlgCtx.tUpdateKey.tImportCfg), pKeyCfg, sizeof(pL2Ctx->tL2AlgCtx.tUpdateKey.tImportCfg));

            pL2Ctx->tL2AlgCtx.tUpdateKey.u32Id                = 0u;
            pL2Ctx->tL2AlgCtx.tUpdateKey.pKeyIdOut            = pL2Ctx->tL2AlgCtx.tUpdateKey.tImportCfg.pKeyID;
            pL2Ctx->tL2AlgCtx.tUpdateKey.tImportCfg.pKeyID    = &(pL2Ctx->tL2AlgCtx.tUpdateKey.u32Id);
            pL2Ctx->tL2AlgCtx.tUpdateKey.bTidyUpAlready       = HSM_FALSE;

            eRet = hsm_l2_update_key_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                &(pL2Ctx->tL2AlgCtx.tUpdateKey), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);
            if (HSM_STATUS_AGAIN == eRet)
            {
                eRet = HSM_STATUS_SUCCESS;
            }
            else
            {
                ;
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

HSM_StatusType HSM_L2_UpdateKeyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_UPDATE_KEY == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

/* --------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------- */
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
static HSM_StatusType hsm_revoke_key_validate(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvRevokeKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    eRet = HSM_L1_GetKeyIdStatusSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_GetKeyIdStatus(pL1Ctx, pCfg->u32Id, u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_GetKeyIdStatusExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
    }

    return eRet;
}
#endif

#if 0
static HSM_StatusType hsm_revoke_key_tidy(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvRevokeKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;


    eRet = HSM_L1_KeySpaceTidyUpSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_KeySpaceTidyUp(pL1Ctx, &(pCfg->tRevokeInfo.tKeySpaceStatus), u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_KeySpaceTidyUpExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
    }

    return eRet;
}
#endif

static HSM_StatusType hsm_revoke_key_revoke(HSM_L1_RtCtxType *pL1Ctx, HSM_L2_DrvRevokeKeyInfType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet          = HSM_STATUS_SUCCESS;

    eRet = HSM_L1_KeyRevokeSetupEnv(pL1Ctx);
    if (HSM_STATUS_SUCCESS == eRet)
    {
        eRet = HSM_L1_KeyRevoke(pL1Ctx, pCfg->u32Id, u32TimeoutMs);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            ;
        }
        else
        {
            HSM_L1_KeyRevokeExitEnv(pL1Ctx);
            pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
        }
    }
    else
    {
        pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
    }

    return eRet;
}

HSM_StatusType hsm_l2_revoke_key_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L2_DrvRevokeKeyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;

    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_REVOKE_KEY_SM_READY:
        {
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
            pCfg->eStat = HSM_L2_REVOKE_KEY_SM_CHECK_EXIST;

            eRet = hsm_revoke_key_validate(pL1Ctx, pCfg, u32TimeoutMs);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                eRet = HSM_STATUS_AGAIN;
            }
            /* else do nothing */

#else
            pCfg->eStat = HSM_L2_REVOKE_KEY_SM_REVOKE;

            eRet = hsm_revoke_key_revoke(pL1Ctx, pCfg, u32TimeoutMs);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                eRet = HSM_STATUS_AGAIN;
            }
            /* else do nothing */
#endif
        }
        break;

        case HSM_L2_REVOKE_KEY_SM_CHECK_EXIST:
        {
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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

            if (HSM_STATUS_NOT_EXIST == eRetFromPrevious) /* key id not exist */
            {
                pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;

                eRet = HSM_STATUS_SUCCESS;
            }
            else if (HSM_STATUS_EXIST == eRetFromPrevious) /* key id exist */
            {
                pCfg->eStat = HSM_L2_REVOKE_KEY_SM_REVOKE;

                eRet = hsm_revoke_key_revoke(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
            }
            else if (HSM_STATUS_ZOMBIE == eRetFromPrevious) /* key id exist */
            {
#if 0
                pCfg->eStat = HSM_L2_REVOKE_KEY_SM_TIDYUP;

                eRet = hsm_revoke_key_tidy(pL1Ctx, pCfg, u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                /* else do nothing */
#else
                pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;

                eRet = HSM_STATUS_SUCCESS;

#endif
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
            }
#endif
        }
        break;

        case HSM_L2_REVOKE_KEY_SM_REVOKE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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

            if ((HSM_STATUS_SUCCESS == eRetFromPrevious)
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
#else
                || (HSM_STATUS_NOT_EXIST == eRetFromPrevious)
#endif
            )
            {
                if (0x1u == (pCfg->u32Id & 0x1u))
                {
                    eRet = HSM_STATUS_SUCCESS;
                    pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
                }
                else
                {
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)


#if 0
                    pCfg->eStat = HSM_L2_REVOKE_KEY_SM_TIDYUP;

                    eRet = hsm_revoke_key_tidy(pL1Ctx, pCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    /* else do nothing */
#else
                    eRet = HSM_STATUS_SUCCESS;
                    pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
#endif


#else
                    eRet = HSM_STATUS_SUCCESS;
                    pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
#endif
                }
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_REVOKE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_REVOKE_KEY_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;


        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}

HSM_StatusType HSM_L2_RevokeKeySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation        = HSM_LEVEL_2ND_OP_REVOKE_KEY;
        pL2Ctx->tL2AlgCtx.tRevokeKey.eStat  = HSM_L2_REVOKE_KEY_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_RevokeKey(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32KeyId, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_REVOKE_KEY == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tRevokeKey.eStat  == HSM_L2_REVOKE_KEY_SM_READY)
        {
            if (0u != u32KeyId)
            {
                pL2Ctx->tL2AlgCtx.tRevokeKey.u32Id = u32KeyId;

                eRet = hsm_l2_revoke_key_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                    &(pL2Ctx->tL2AlgCtx.tRevokeKey), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);
                if (HSM_STATUS_AGAIN == eRet)
                {
                    eRet = HSM_STATUS_SUCCESS;
                }
                else
                {
                    ;
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

HSM_StatusType HSM_L2_RevokeKeyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_REVOKE_KEY == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

/* --------------------------------------------------------------------------- */
HSM_StatusType hsm_l2_ecc_verify_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L2_DrvEccVerifyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;

    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_ECC_VERIFY_SM_READY:
        {
            if (HSM_ECC_VERIFY_INPUT_HASH_DATA == pCfg->tEccCfg.eInputType)
            {
                pCfg->eStat = HSM_L2_ECC_VERIFY_SM_VERIFY;

                eRet = HSM_L1_EccVerifySetupEnv(pL1Ctx, pCfg->u32BitCnt);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_EccVerify(pL1Ctx, &(pCfg->tEccCfg.tVerifyParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_EccVerifyExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
                }
            }
            else
            {
                pCfg->eStat = HSM_L2_ECC_VERIFY_SM_HASH;
                eRet = HSM_L1_ShaSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pCfg->tShaParm.eAlg                     = pCfg->tEccCfg.eAlg;
                    pCfg->tShaParm.tCfg.bGenerateMacEn      = HSM_FALSE;
                    pCfg->tShaParm.tCfg.u32InputDataByteCnt = pCfg->tEccCfg.tVerifyParm.u32DataByteCnt;
                    pCfg->tShaParm.tCfg.pInputData          = pCfg->tEccCfg.tVerifyParm.pData;
                    pCfg->tShaParm.pResult                  = (hsm_uint8_t *)&(pCfg->aCache[0u]);
                    pCfg->tShaParm.u32ResultBufSize         = sizeof(pCfg->aCache);
                    pCfg->tShaParm.pResultSize              = &(pCfg->tEccCfg.tVerifyParm.u32DataByteCnt);
                    pCfg->tShaParm.eInputFmt                = pCfg->tEccCfg.tVerifyParm.eDataFmt;
                    pCfg->tShaParm.eOutputFmt               = pCfg->tEccCfg.tVerifyParm.eDataFmt;
                    pCfg->tShaParm.bKeyUseId                = HSM_FALSE;

                    pCfg->tEccCfg.tVerifyParm.pData         = (const hsm_uint8_t *)&(pCfg->aCache[0u]);

                    eRet = HSM_L1_Sha(pL1Ctx, &(pCfg->tShaParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_ShaExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
                }
            }
        }
        break;

        case HSM_L2_ECC_VERIFY_SM_HASH:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_ECC_VERIFY_SM_VERIFY;

                eRet = HSM_L1_EccVerifySetupEnv(pL1Ctx, pCfg->u32BitCnt);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_EccVerify(pL1Ctx, &(pCfg->tEccCfg.tVerifyParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_EccVerifyExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
                }
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
            }
        }
        break;

        case HSM_L2_ECC_VERIFY_SM_VERIFY:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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

            if (HSM_STATUS_PASS == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;

                if (NULL_PTR != pCfg->tEccCfg.pVerifyResult)
                {
                    *(pCfg->tEccCfg.pVerifyResult) = CRYPTO_E_VER_OK;
                }
                /* else do nothing */
                eRet = eRetFromPrevious;
            }
            else if (HSM_STATUS_FAIL == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;

                if (NULL_PTR != pCfg->tEccCfg.pVerifyResult)
                {
                    *(pCfg->tEccCfg.pVerifyResult) = CRYPTO_E_VER_NOT_OK;
                }
                /* else do nothing */
                eRet = eRetFromPrevious;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_ECC_VERIFY_SM_STOP;
            }
        }
        break;

        case HSM_L2_ECC_VERIFY_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}

HSM_StatusType HSM_L2_EccVerifySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32BitCnt)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation              = HSM_LEVEL_2ND_OP_ECC_VERIFY;
        pL2Ctx->tL2AlgCtx.tEccVerify.eStat        = HSM_L2_ECC_VERIFY_SM_READY;
        pL2Ctx->tL2AlgCtx.tEccVerify.u32BitCnt    = u32BitCnt;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_EccVerify(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_EccVerifyType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_ECC_VERIFY == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tEccVerify.eStat  == HSM_L2_ECC_VERIFY_SM_READY)
        {
            hsm_memcpy(&(pL2Ctx->tL2AlgCtx.tEccVerify.tEccCfg), pCfg, sizeof(HSM_Ln_EccVerifyType));

            eRet = hsm_l2_ecc_verify_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                                             &(pL2Ctx->tL2AlgCtx.tEccVerify), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);
            if (HSM_STATUS_AGAIN == eRet)
            {
                eRet = HSM_STATUS_SUCCESS;
            }
            /* else do nothing */
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

HSM_StatusType HSM_L2_EccVerifyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_ECC_VERIFY == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

HSM_StatusType hsm_l2_sm2_verify_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
        HSM_L2_DrvSm2VerifyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;

    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_SM2_VERIFY_SM_READY:
        {
            if (HSM_SM2_VERIFY_INPUT_HASH_DATA == pCfg->tSm2Cfg.eInputType)
            {
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_VERIFY;

                eRet = HSM_L1_Sm2VerifySetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_Sm2Verify(pL1Ctx, &(pCfg->tSm2Cfg.tVerifyParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_Sm2VerifyExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                }
            }
            else
            {
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_GEN_ZA;

                eRet = HSM_L1_Sm2GenZaSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pCfg->tSm2GenZaCfg.bUseDefaultID = pCfg->tSm2Cfg.tVerifyParm.bUseDefaultID;
                    pCfg->tSm2GenZaCfg.eDataFmt = pCfg->tSm2Cfg.tVerifyParm.eDataFmt;
                    pCfg->tSm2GenZaCfg.pkGx = pCfg->tSm2Cfg.tVerifyParm.pkGx;
                    pCfg->tSm2GenZaCfg.pkGy = pCfg->tSm2Cfg.tVerifyParm.pkGy;
                    pCfg->tSm2GenZaCfg.pInputData_ID = pCfg->tSm2Cfg.tVerifyParm.pInputData_ID;
                    pCfg->tSm2GenZaCfg.u32SM2InputIDByteCnt = pCfg->tSm2Cfg.tVerifyParm.u32SM2InputIDByteCnt;
                    pCfg->tSm2GenZaCfg.ekGxyDataFmt = pCfg->tSm2Cfg.tVerifyParm.ekGxyDataFmt;
                    pCfg->tSm2GenZaCfg.u32PublicKeyId = pCfg->tSm2Cfg.tVerifyParm.u32PublicKeyId;
                    pCfg->tSm2GenZaCfg.u32kGxByteCnt = pCfg->tSm2Cfg.tVerifyParm.u32kGxByteCnt;
                    pCfg->tSm2GenZaCfg.u32kGyByteCnt = pCfg->tSm2Cfg.tVerifyParm.u32kGyByteCnt;
                    pCfg->tSm2GenZaCfg.pOutputData_Za = &pCfg->aCache;
                    pCfg->tSm2GenZaCfg.eOutputFmt = pCfg->tSm2Cfg.tVerifyParm.eDataFmt;

                    eRet = HSM_L1_Sm2GenZa(pL1Ctx, &(pCfg->tSm2GenZaCfg), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_Sm2GenZaExitEnv(pL1Ctx);
                        pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                }
            }
        }
        break;

        case HSM_L2_SM2_VERIFY_SM_GEN_ZA:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                eRet = HSM_L1_ScatterHashSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pCfg->tScatterSm3Cfg.pData = (const hsm_uint8_t *)(&pCfg->aCache[0]);
                    pCfg->tScatterSm3Cfg.u32DataSize = 32u;
                    pCfg->tScatterSm3Cfg.eDataFmt = pCfg->tSm2GenZaCfg.eOutputFmt;

                    eRet = HSM_L1_ScatterHashInit(pL1Ctx, HSM_HASH_SM3,&pCfg->tScatterSm3Cfg ,u32TimeoutMs);
                    if(HSM_STATUS_AGAIN == eRet)
                    {
                        pCfg->eStat = HSM_L2_SM2_VERIFY_SM_HASH_UPDATE;
                        pCfg->tScatterSm3Cfg.pData = pCfg->tSm2Cfg.tVerifyParm.pData;
                        pCfg->tScatterSm3Cfg.u32DataSize = pCfg->tSm2Cfg.tVerifyParm.u32DataByteCnt;
                        pCfg->tScatterSm3Cfg.eDataFmt = pCfg->tSm2Cfg.tVerifyParm.eDataFmt;

                        eRet = HSM_L1_ScatterHashUpdate(pL1Ctx,&pCfg->tScatterSm3Cfg ,u32TimeoutMs);
                        if (HSM_STATUS_SUCCESS == eRet)
                        {
                            eRet = HSM_STATUS_AGAIN;
                        }
                        else if(HSM_STATUS_AGAIN == eRet)
                        {
                            pCfg->eStat = HSM_L2_SM2_VERIFY_SM_HASH_FINALLY;
                            pCfg->tScatterSm3Cfg.pData = NULL_PTR;
                            pCfg->tScatterSm3Cfg.u32DataSize = 0;
                            pCfg->tScatterSm3Cfg.eDataFmt = pCfg->tSm2Cfg.tVerifyParm.eDataFmt;
                            pCfg->tScatterSm3Result.pData = (hsm_uint8_t *)(&pCfg->aCache[0]);
                            pCfg->tScatterSm3Result.u32DataBufSize = sizeof(pCfg->aCache);
                            pCfg->tScatterSm3Result.eDataFmt = pCfg->tSm2Cfg.tVerifyParm.eDataFmt;
                            pCfg->tScatterSm3Result.pDataSize = &pCfg->tSm2Cfg.tVerifyParm.u32DataByteCnt;
                            pCfg->tSm2Cfg.tVerifyParm.pData = pCfg->tScatterSm3Result.pData;

                            eRet = HSM_L1_ScatterHashFinal(pL1Ctx,&pCfg->tScatterSm3Cfg,&pCfg->tScatterSm3Result,u32TimeoutMs);
                            if (HSM_STATUS_SUCCESS == eRet)
                            {
                                eRet = HSM_STATUS_AGAIN;
                            }
                            else
                            {
                                (void)HSM_L1_ScatterHashExitEnv(pL1Ctx);
                                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                                eRet = HSM_STATUS_ERROR;
                            }
                        }
                        else
                        {
                            (void)HSM_L1_ScatterHashExitEnv(pL1Ctx);
                            pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                            eRet = HSM_STATUS_ERROR;
                        }
                    }
                    else
                    {
                        (void)HSM_L1_ScatterHashExitEnv(pL1Ctx);
                        pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                }
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
            }
        }
        break;

        case HSM_L2_SM2_VERIFY_SM_HASH_UPDATE:

            if (HSM_STATUS_SUCCESS == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_HASH_FINALLY;
                pCfg->tScatterSm3Cfg.pData = NULL_PTR;
                pCfg->tScatterSm3Cfg.u32DataSize = 0;
                pCfg->tScatterSm3Cfg.eDataFmt = pCfg->tSm2Cfg.tVerifyParm.eDataFmt;
                pCfg->tScatterSm3Result.pData = (hsm_uint8_t *)(&pCfg->aCache[0]);
                pCfg->tScatterSm3Result.u32DataBufSize = sizeof(pCfg->aCache);
                pCfg->tScatterSm3Result.eDataFmt = pCfg->tSm2Cfg.tVerifyParm.eDataFmt;
                pCfg->tScatterSm3Result.pDataSize = &pCfg->tSm2Cfg.tVerifyParm.u32DataByteCnt;
                pCfg->tSm2Cfg.tVerifyParm.pData = pCfg->tScatterSm3Result.pData;

                eRet = HSM_L1_ScatterHashFinal(pL1Ctx,&pCfg->tScatterSm3Cfg,&pCfg->tScatterSm3Result,u32TimeoutMs);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                else
                {
                    (void)HSM_L1_ScatterHashExitEnv(pL1Ctx);
                    pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                    eRet = HSM_STATUS_ERROR;
                }

            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
            }

            break;

        case HSM_L2_SM2_VERIFY_SM_HASH_FINALLY:
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_VERIFY;

                eRet = HSM_L1_Sm2VerifySetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_Sm2Verify(pL1Ctx, &(pCfg->tSm2Cfg.tVerifyParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_Sm2VerifyExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
                }

            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
            }

            break;

        case HSM_L2_SM2_VERIFY_SM_VERIFY:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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

            if (HSM_STATUS_PASS == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;

                if (NULL_PTR != pCfg->tSm2Cfg.pVerifyResult)
                {
                    *(pCfg->tSm2Cfg.pVerifyResult) = CRYPTO_E_VER_OK;
                }
                /* else do nothing */
                eRet = eRetFromPrevious;
            }
            else if (HSM_STATUS_FAIL == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;

                if (NULL_PTR != pCfg->tSm2Cfg.pVerifyResult)
                {
                    *(pCfg->tSm2Cfg.pVerifyResult) = CRYPTO_E_VER_NOT_OK;
                }
                /* else do nothing */
                eRet = eRetFromPrevious;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_SM2_VERIFY_SM_STOP;
            }
        }
        break;

        case HSM_L2_SM2_VERIFY_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}

HSM_StatusType HSM_L2_Sm2VerifySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation              = HSM_LEVEL_2ND_OP_SM2_VERIFY;
        pL2Ctx->tL2AlgCtx.tSm2Verify.eStat        = HSM_L2_SM2_VERIFY_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_Sm2Verify(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_Sm2VerifyType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_SM2_VERIFY == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tSm2Verify.eStat  == HSM_L2_SM2_VERIFY_SM_READY)
        {
            hsm_memcpy(&(pL2Ctx->tL2AlgCtx.tSm2Verify.tSm2Cfg), pCfg, sizeof(HSM_Ln_Sm2VerifyType));

            eRet = hsm_l2_sm2_verify_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                &(pL2Ctx->tL2AlgCtx.tSm2Verify), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);

            if (HSM_STATUS_AGAIN == eRet)
            {
                eRet = HSM_STATUS_SUCCESS;
            }
            /* else do nothing */
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

HSM_StatusType HSM_L2_Sm2VerifyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_SM2_VERIFY == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

HSM_StatusType hsm_l2_rng_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvRngInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;
    HSM_L1_FastRngType tFastTrngCfg;
    HSM_L1_RngType tTrngCfg;
    hsm_uint32_t u32TrngBytesEachTime;
    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_RNG_SM_READY:
        {
            u32TrngBytesEachTime = pCfg->tRngCfg.u32TrngBytesEachTime;
            if((0u < u32TrngBytesEachTime) && (64u > u32TrngBytesEachTime))
            {
                pCfg->eStat = HSM_L2_RNG_SM_GEN_FAST_TRNG;
                tFastTrngCfg.u32UseSampleSizeOnly = HSM_TRUE;
                tFastTrngCfg.u32TrngBytesEachTime = HSM_ADDRESS_UP_ALIGN(u32TrngBytesEachTime);
                tFastTrngCfg.tTrngCfg.samp_size = tFastTrngCfg.u32TrngBytesEachTime*0x13u;
                tFastTrngCfg.eSrc = pCfg->tRngCfg.eRngSrc.eFastTrngSrc;
                tFastTrngCfg.pResult = pCfg->tRngCfg.pResult;
                tFastTrngCfg.u32ResultBufSize = pCfg->tRngCfg.u32ResultBufSize;
                eRet = HSM_L1_FastTrngSetupEnv(pL1Ctx);

                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_FastTrng(pL1Ctx, &tFastTrngCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_FastTrngExitEnv(pL1Ctx);
                        pCfg->eStat = HSM_L2_RNG_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_RNG_SM_STOP;
                }
            }
            else if(64u == u32TrngBytesEachTime)
            {
                pCfg->eStat = HSM_L2_RNG_SM_GEN_TRNG;
                tTrngCfg.eSrc = pCfg->tRngCfg.eRngSrc.eTrngSrc;
                tTrngCfg.pResult = pCfg->tRngCfg.pResult;
                tTrngCfg.u32ResultBufSize = pCfg->tRngCfg.u32ResultBufSize;
                eRet = HSM_L1_RngSetupEnv(pL1Ctx);

                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_Rng(pL1Ctx, &tTrngCfg, u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_RngExitEnv(pL1Ctx);
                        pCfg->eStat = HSM_L2_RNG_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_RNG_SM_STOP;
                }
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_RNG_SM_STOP;
            }
        }
        break;

        case HSM_L2_RNG_SM_GEN_TRNG:
        {
            if (HSM_STATUS_SUCCESS == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_RNG_SM_STOP;
                HSM_L1_CommonExitEnv(pL1Ctx);
            }
            else if (HSM_STATUS_AGAIN == eRetFromPrevious)
            {
                eRet = HSM_STATUS_AGAIN;
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_RNG_SM_STOP;
                HSM_L1_CommonExitEnv(pL1Ctx);
            }
        }
        break;

        case HSM_L2_RNG_SM_GEN_FAST_TRNG:
        {
            if (HSM_STATUS_SUCCESS == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_RNG_SM_STOP;
                HSM_L1_CommonExitEnv(pL1Ctx);
            }
            else if (HSM_STATUS_AGAIN == eRetFromPrevious)
            {
                eRet = HSM_STATUS_AGAIN;
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_RNG_SM_STOP;
                HSM_L1_CommonExitEnv(pL1Ctx);
            }
        }
        break;

        case HSM_L2_RNG_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }
    (void)bTriggerMode;

    return eRet;
}

HSM_StatusType HSM_L2_RngSetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation              = HSM_LEVEL_2ND_OP_RNG;
        pL2Ctx->tL2AlgCtx.tRng.eStat        = HSM_L2_RNG_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_Rng(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_RngType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_RNG == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tRng.eStat  == HSM_L2_RNG_SM_READY)
        {
            hsm_memcpy(&(pL2Ctx->tL2AlgCtx.tRng.tRngCfg), pCfg, sizeof(HSM_Ln_RngType));

            eRet = hsm_l2_rng_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                &(pL2Ctx->tL2AlgCtx.tRng), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);

            if (HSM_STATUS_AGAIN == eRet)
            {
                eRet = HSM_STATUS_SUCCESS;
            }
            /* else do nothing */
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

HSM_StatusType HSM_L2_RngExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_RNG == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

HSM_StatusType hsm_l2_update_she_key_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs, HSM_L2_DrvUpdateSheKeyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;

    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_UPDATE_SHE_KEY_SM_READY:
        {
            pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_LOADFIRMWARE;
            eRet = HSM_L1_LoadFirmwareSetupEnv(pL1Ctx);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                eRet = HSM_L1_LoadFirmware(pL1Ctx, u32TimeoutMs);

                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_STATUS_AGAIN;
                }
                else
                {
                    (void)HSM_L1_LoadFirmwareExitEnv(pL1Ctx);
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                }
            }
            else
            {
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_SHE_KEY_SM_LOADFIRMWARE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_UPDATE;

                eRet = HSM_L1_UpdateSheKeySetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_UpdateSheKey(pL1Ctx, &(pCfg->tUpdateCfg), u32TimeoutMs);

                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_UpdateSheKeyExitEnv(pL1Ctx);
                        pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                }
            }
            else if (HSM_STATUS_HW_ERR == eRetFromPrevious)
            {
                eRet = HSM_STATUS_HW_ERR;
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
            }
        }
        break;

        case HSM_L2_UPDATE_SHE_KEY_SM_UPDATE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                eRet = HSM_STATUS_SUCCESS;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else if ((HSM_STATUS_SPACE_FULL == eRetFromPrevious) || (HSM_STATUS_ZOMBIE == eRetFromPrevious))
            {
                if (HSM_FALSE == pCfg->bTidyUpAlready)
                {
                    pCfg->bTidyUpAlready = HSM_TRUE;
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_TIDYUP;

                    eRet = HSM_L1_KeySpaceTidyUpSetupEnv(pL1Ctx);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_L1_KeySpaceTidyUp(pL1Ctx, &(pCfg->tKeySpaceStatus), u32TimeoutMs);

                        if (HSM_STATUS_SUCCESS == eRet)
                        {
                            eRet = HSM_STATUS_AGAIN;
                        }
                        else
                        {
                            (void)HSM_L1_KeySpaceTidyUpExitEnv(pL1Ctx);
                            pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                        }
                    }
                    else
                    {
                        pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                    }
                }
                else
                {
                    eRet = HSM_STATUS_ERROR;
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                }
                /* else do nothing */
            }
            else if (HSM_STATUS_EXIST == eRetFromPrevious)
            {
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_REVOKE;

                eRet = HSM_L1_KeyRevokeSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_KeyRevoke(pL1Ctx, pCfg->tUpdateCfg.u32KeyID, u32TimeoutMs);

                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        HSM_L1_KeyRevokeExitEnv(pL1Ctx);
                        pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                }
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
            }            
        }
        break;

        case HSM_L2_UPDATE_SHE_KEY_SM_REVOKE:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                if (HSM_FALSE == pCfg->bTidyUpAlready)
                {
                    pCfg->bTidyUpAlready = HSM_TRUE;
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_TIDYUP;

                    eRet = HSM_L1_KeySpaceTidyUpSetupEnv(pL1Ctx);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_L1_KeySpaceTidyUp(pL1Ctx, &(pCfg->tKeySpaceStatus), u32TimeoutMs);

                        if (HSM_STATUS_SUCCESS == eRet)
                        {
                            eRet = HSM_STATUS_AGAIN;
                        }
                        else
                        {
                            (void)HSM_L1_KeySpaceTidyUpExitEnv(pL1Ctx);
                            pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                        }
                    }
                    else
                    {
                        pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                    }
                }
                else
                {
                    eRet = HSM_STATUS_ERROR;
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                }
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
            }  
        }
        break;

        case HSM_L2_UPDATE_SHE_KEY_SM_TIDYUP:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_UPDATE;

                eRet = HSM_L1_UpdateSheKeySetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_UpdateSheKey(pL1Ctx, &(pCfg->tUpdateCfg), u32TimeoutMs);

                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_UpdateSheKeyExitEnv(pL1Ctx);
                        pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
                }
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_UPDATE_SHE_KEY_SM_STOP;
            }
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}

HSM_StatusType HSM_L2_UpdateSheKeySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation              = HSM_LEVEL_2ND_OP_UPDATE_SHE_KEY;
        pL2Ctx->tL2AlgCtx.tUpdateSheKey.eStat        = HSM_L2_UPDATE_SHE_KEY_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_UpdateSheKey(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_LN_UpdateSheKeyType *pKeyCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_UPDATE_SHE_KEY == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tUpdateSheKey.eStat  == HSM_L2_UPDATE_SHE_KEY_SM_READY)
        {
            hsm_memcpy(&(pL2Ctx->tL2AlgCtx.tUpdateSheKey.tUpdateCfg), pKeyCfg, sizeof(HSM_LN_UpdateSheKeyType));
            pL2Ctx->tL2AlgCtx.tUpdateSheKey.bTidyUpAlready       = HSM_FALSE;

            eRet = hsm_l2_update_she_key_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                &(pL2Ctx->tL2AlgCtx.tUpdateSheKey), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);

            if (HSM_STATUS_AGAIN == eRet)
            {
                eRet = HSM_STATUS_SUCCESS;
            }
            /* else do nothing */
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

HSM_StatusType HSM_L2_UpdateSheKeyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_UPDATE_SHE_KEY == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;    
}

/* --------------------------------------------------------------------------- */
HSM_StatusType hsm_l2_ecc_sign_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L2_DrvEccSignInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode)
{
    HSM_StatusType  eRet = eRetFromPrevious;

    (void)pL2Ctx;

    switch (pCfg->eStat)
    {
        case HSM_L2_ECC_SIGN_SM_READY:
        {
            if (HSM_ECC_SIGN_INPUT_HASH_DATA == pCfg->tEccCfg.eInputType)
            {
                pCfg->eStat = HSM_L2_ECC_SIGN_SM_SIGN;

                eRet = HSM_L1_EccSignSetupEnv(pL1Ctx, pCfg->u32BitCnt);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_EccSign(pL1Ctx, &(pCfg->tEccCfg.tSignParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_EccSignExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
                }
            }
            else
            {
                pCfg->eStat = HSM_L2_ECC_SIGN_SM_HASH;
                eRet = HSM_L1_ShaSetupEnv(pL1Ctx);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    pCfg->tShaParm.eAlg                     = pCfg->tEccCfg.eAlg;
                    pCfg->tShaParm.tCfg.bGenerateMacEn      = HSM_FALSE;
                    pCfg->tShaParm.tCfg.u32InputDataByteCnt = pCfg->tEccCfg.tSignParm.u32DataByteCnt;
                    pCfg->tShaParm.tCfg.pInputData          = pCfg->tEccCfg.tSignParm.pData;
                    pCfg->tShaParm.pResult                  = (hsm_uint8_t *)&(pCfg->aCache[0u]);
                    pCfg->tShaParm.u32ResultBufSize         = sizeof(pCfg->aCache);
                    pCfg->tShaParm.pResultSize              = &(pCfg->tEccCfg.tSignParm.u32DataByteCnt);
                    pCfg->tShaParm.eInputFmt                = pCfg->tEccCfg.tSignParm.eDataFmt;
                    pCfg->tShaParm.eOutputFmt               = pCfg->tEccCfg.tSignParm.eDataFmt;
                    pCfg->tShaParm.bKeyUseId                = HSM_FALSE;

                    pCfg->tEccCfg.tSignParm.pData         = (const hsm_uint8_t *)&(pCfg->aCache[0u]);

                    eRet = HSM_L1_Sha(pL1Ctx, &(pCfg->tShaParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_ShaExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
                }
            }
        }
        break;

        case HSM_L2_ECC_SIGN_SM_HASH:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_ECC_SIGN_SM_SIGN;

                eRet = HSM_L1_EccSignSetupEnv(pL1Ctx, pCfg->u32BitCnt);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    eRet = HSM_L1_EccSign(pL1Ctx, &(pCfg->tEccCfg.tSignParm), u32TimeoutMs);
                    if (HSM_STATUS_SUCCESS == eRet)
                    {
                        eRet = HSM_STATUS_AGAIN;
                    }
                    else
                    {
                        (void)HSM_L1_EccSignExitEnv(pL1Ctx);

                        pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
                }
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
            }
        }
        break;

        case HSM_L2_ECC_SIGN_SM_SIGN:
        {
            if (HSM_TRIGGER_SRC_ISR == bTriggerMode)
            {
                HSM_L1_CommonExitEnv(pL1Ctx);
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
                pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
                eRet = eRetFromPrevious;
            }
            /* bTriggerMode is always  HSM_TRIGGER_SRC_ISR for CRYPTO MCAL
            else if ((HSM_TRIGGER_SRC_ISR != bTriggerMode) && (HSM_STATUS_AGAIN == eRetFromPrevious))
            {
                eRet = HSM_STATUS_AGAIN;
            }
            */
            else
            {
                eRet = HSM_STATUS_ERROR;
                pCfg->eStat = HSM_L2_ECC_SIGN_SM_STOP;
            }
        }
        break;

        case HSM_L2_ECC_SIGN_SM_STOP:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;

        default:
        {
            eRet = HSM_STATUS_ERROR;
        }
        break;
    }

    return eRet;
}

HSM_StatusType HSM_L2_EccSignSetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32BitCnt)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    (void)pL1Ctx;

    if (HSM_LEVEL_2ND_OP_NONE == pL2Ctx->eOperation)
    {
        pL2Ctx->eOperation              = HSM_LEVEL_2ND_OP_ECC_SIGN;
        pL2Ctx->tL2AlgCtx.tEccSign.eStat        = HSM_L2_ECC_SIGN_SM_READY;
        pL2Ctx->tL2AlgCtx.tEccSign.u32BitCnt    = u32BitCnt;
    }
    else
    {
        eRet = HSM_STATUS_BUSY;
    }

    return eRet;
}

HSM_StatusType HSM_L2_EccSignReset(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_ECC_SIGN == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->tL2AlgCtx.tEccSign.eStat  = HSM_L2_ECC_SIGN_SM_READY;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

HSM_StatusType HSM_L2_EccSign(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_EccSignType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_ECC_SIGN == pL2Ctx->eOperation)
    {
        if (pL2Ctx->tL2AlgCtx.tEccSign.eStat  == HSM_L2_ECC_SIGN_SM_READY)
        {
            hsm_memcpy(&(pL2Ctx->tL2AlgCtx.tEccSign.tEccCfg), pCfg, sizeof(HSM_Ln_EccSignType));

            eRet = hsm_l2_ecc_sign_process(pL2Ctx, pL1Ctx, u32TimeoutMs,
                                             &(pL2Ctx->tL2AlgCtx.tEccSign), HSM_STATUS_SUCCESS, pL1Ctx->eTriggerSrc);
            if (HSM_STATUS_AGAIN == eRet)
            {
                eRet = HSM_STATUS_SUCCESS;
            }
            /* else do nothing */
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

HSM_StatusType HSM_L2_EccSignExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    if (HSM_LEVEL_2ND_OP_ECC_SIGN == pL2Ctx->eOperation)
    {
        eRet = HSM_L1_Abort(pL1Ctx);
        pL2Ctx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    return eRet;
}

/* --------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------- */
void HSM_L2_Ack_IrqHandler(void *pUpperCtx, HSM_BoolType bIsErrorHappen, HSM_StatusType eRet)
{
    HSM_StatusType    eCurStat = eRet;
    HSM_BoolType      bLevel2Running = HSM_TRUE;
    HSM_Ln_RtCtxType *pLnCtx = (HSM_Ln_RtCtxType *)pUpperCtx;
    HSM_L2_RtCtxType *pL2Ctx = &(pLnCtx->tHsmL2Ctx);
    HSM_L1_RtCtxType *pL1Ctx = &(pLnCtx->tHsmL1Ctx);
    HSM_BoolType bErrorHappen = bIsErrorHappen;
    
    switch (pL2Ctx->eOperation)
    {
        case HSM_LEVEL_2ND_OP_CMAC_EMPTY:
        {
            eCurStat = hsm_l2_cmac_empty_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tCMacEmpty, eRet, pL1Ctx->eTriggerSrc);
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

        case HSM_LEVEL_2ND_OP_UPDATE_KEY:
        {
            eCurStat = hsm_l2_update_key_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tUpdateKey, eRet, pL1Ctx->eTriggerSrc);
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

        case HSM_LEVEL_2ND_OP_REVOKE_KEY:
        {
            eCurStat = hsm_l2_revoke_key_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tRevokeKey, eRet, pL1Ctx->eTriggerSrc);
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

        case HSM_LEVEL_2ND_OP_ECC_VERIFY:
        {
            eCurStat = hsm_l2_ecc_verify_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tEccVerify, eRet, pL1Ctx->eTriggerSrc);
            if (HSM_STATUS_AGAIN != eCurStat)
            {
                if ((HSM_STATUS_PASS != eCurStat) && (HSM_STATUS_FAIL != eCurStat))
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

        case HSM_LEVEL_2ND_OP_SM2_VERIFY:
        {
            eCurStat = hsm_l2_sm2_verify_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tSm2Verify, eRet, pL1Ctx->eTriggerSrc);
            if (HSM_STATUS_AGAIN != eCurStat)
            {
                if ((HSM_STATUS_PASS != eCurStat) && (HSM_STATUS_FAIL != eCurStat))
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

        case HSM_LEVEL_2ND_OP_RNG:
        {
            eCurStat = hsm_l2_rng_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tRng, eRet, pL1Ctx->eTriggerSrc);
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

        case HSM_LEVEL_2ND_OP_UPDATE_SHE_KEY:
        {
            eCurStat = hsm_l2_update_she_key_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tUpdateSheKey, eRet, pL1Ctx->eTriggerSrc);
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

        case HSM_LEVEL_2ND_OP_ECC_SIGN:
        {
            eCurStat = hsm_l2_ecc_sign_process(pL2Ctx, pL1Ctx, pLnCtx->u32OpLimitMs, &pL2Ctx->tL2AlgCtx.tEccSign, eRet, pL1Ctx->eTriggerSrc);
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

        default:
            eCurStat = eRet;
            bLevel2Running = HSM_FALSE;
            break;
    }

    if ((HSM_FALSE == bLevel2Running) || (HSM_STATUS_AGAIN != eCurStat))
    {
        if (NULL_PTR != pL2Ctx->pStopCb)
        {
            pL2Ctx->pStopCb(pUpperCtx, bErrorHappen, eCurStat);
        }
        /* else nothing */
    }
    /* else do nothing */
}

void HSM_L2_Init(HSM_L2_RtCtxType *pCtx, HSM_L2_InitParmType *pParm)
{
    pCtx->eOperation = HSM_LEVEL_2ND_OP_NONE;
    pCtx->pStopCb    = pParm->pStopCb;
}

void HSM_L2_CleanEnv(HSM_L2_RtCtxType *pCtx)
{
    pCtx->eOperation = HSM_LEVEL_2ND_OP_NONE;
}

/* abort the second level operation, the operation goto none */
void HSM_L2_Abort(HSM_L2_RtCtxType *pCtx)
{
    pCtx->eOperation = HSM_LEVEL_2ND_OP_NONE;
}

void HSM_L2_CommonExitEnv(HSM_L2_RtCtxType *pCtx)
{
    pCtx->eOperation = HSM_LEVEL_2ND_OP_NONE;
}

// clang-format on
