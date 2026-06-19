/**
 *   @file    Crypto_LevelNApi.c
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

#ifdef CRYPTO_HSM_MCAL
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"
#else

#endif

CRYPTO_TEXT_SECTION void HSM_Ln_Init(HSM_Ln_RtCtxType *pLnRt, HSM_Ln_InitParmType *pInitParm)
{
    union {
    HSM_L1_InitParmType tL1Parm;
    HSM_L2_InitParmType tL2Parm;
    HSM_L3_InitParmType tL3Parm;
    } tParm;

    tParm.tL1Parm.eTriggerSrc = pInitParm->eTriggerSrc;
    tParm.tL1Parm.pStopCb     = HSM_L2_Ack_IrqHandler;
    tParm.tL1Parm.pSendCmdCb  = pInitParm->pSendCmdCb;
    tParm.tL1Parm.pReadAckCb  = pInitParm->pReadAckCb;
    tParm.tL1Parm.pCancelCmdCb= pInitParm->pCancelCmdCb;
    tParm.tL1Parm.pCleanDCache= pInitParm->pCleanDCache;
    tParm.tL1Parm.pCleanAndFlushDcache = pInitParm->pCleanAndFlushDcache;

    HSM_L1_Init(&(pLnRt->tHsmL1Ctx), &tParm.tL1Parm);

    tParm.tL2Parm.pStopCb = HSM_L3_Ack_IrqHandler;
    HSM_L2_Init(&(pLnRt->tHsmL2Ctx), &tParm.tL2Parm);

    tParm.tL3Parm.pStopCb = pInitParm->pStopCb;
    HSM_L3_Init(&(pLnRt->tHsmL3Ctx), &tParm.tL3Parm);

    pLnRt->u32OpLimitMs = pInitParm->u32OpLimitMs;
}

CRYPTO_TEXT_SECTION void HSM_Ln_Ack_IrqHandler(HSM_Ln_RtCtxType *pLnCtx)
{
    HSM_L1_Ack_IrqHandler(pLnCtx, HSM_STATUS_SUCCESS);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Abort(HSM_Ln_RtCtxType *pCtx)
{
    HSM_StatusType eRet;

    eRet = HSM_L1_Abort(&(pCtx->tHsmL1Ctx));
    HSM_L2_Abort(&(pCtx->tHsmL2Ctx));
    HSM_L3_Abort(&(pCtx->tHsmL3Ctx));

    return eRet;
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CommonExitEnv(HSM_Ln_RtCtxType *pCtx)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;

    eRet = HSM_L1_CommonExitEnv(&(pCtx->tHsmL1Ctx));
    HSM_L2_CommonExitEnv(&(pCtx->tHsmL2Ctx));
    HSM_L3_CommonExitEnv(&(pCtx->tHsmL3Ctx));

    return eRet;
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssVerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32RsaBitCnt)
{
    return HSM_L1_RsaSsaPssVerifySetupEnv(&(pLnCtx->tHsmL1Ctx), u32RsaBitCnt);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssVerify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_RsaSsaPssVerifyType *pCfg)
{
    return HSM_L1_RsaSsaPssVerify(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssVerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_RsaSsaPssVerifyExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1v15VerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32RsaBitCnt)
{
    return HSM_L1_RsaSsaPkcs1V15VerifySetupEnv(&(pLnCtx->tHsmL1Ctx), u32RsaBitCnt);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1v15Verify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_RsaSsaPkcs1v15VerifyType *pCfg)
{
    return HSM_L1_RsaSsaPkcs1V15Verify(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1v15VerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_RsaSsaPkcs1V15VerifyExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ShaSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_ShaSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ShaExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_ShaExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sha(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ShaType *pSha)
{
    return HSM_L1_Sha(&(pLnCtx->tHsmL1Ctx), pSha, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesEncryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_AesEncryptSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesEncryptExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_AesEncryptExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesEncrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_AesEncryptType *pCfg)
{
    return HSM_L1_AesEncrypt(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesDecryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_AesDecryptSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesDecryptExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_AesDecryptExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesDecrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_AesDecryptType *pCfg)
{
    return HSM_L1_AesDecrypt(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Md5SetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Md5SetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Md5ExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Md5ExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Md5(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Md5Type *pCfg)
{
    return HSM_L1_Md5(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm3SetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Sm3SetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm3ExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Sm3ExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm3(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm3Type *pCfg)
{
    return HSM_L1_Sm3(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4EncryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Sm4EncryptSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4EncryptExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Sm4EncryptExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4Encrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm4EncryptType *pCfg)
{
    return HSM_L1_Sm4Encrypt(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4DecryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Sm4DecryptSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4DecryptExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_Sm4DecryptExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4Decrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm4DecryptType *pCfg)
{
    return HSM_L1_Sm4Decrypt(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccVerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32BitCnt)
{
    return HSM_L2_EccVerifySetupEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), u32BitCnt);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccVerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_EccVerifyExitEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccVerify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_EccVerifyType *pCfg)
{
    return HSM_L2_EccVerify(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CMacSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_CMacSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CMacExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_CMacExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CMac(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_CMacType *pCfg)
{
    return HSM_L1_CMac(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RngSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_RngSetupEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RngExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_RngExitEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Rng(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_RngType *pCfg)
{
    return HSM_L2_Rng(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L3_ScatterCMacSetupEnv(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L3_ScatterCMacExitEnv(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacInit(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_CMacCfgParmsType *pParmCfg, const HSM_Ln_ScatterCMacType *pCfg)
{
    return HSM_L3_ScatterCMacInit(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pParmCfg, pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacUpdate(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterCMacType *pCfg)
{
    return HSM_L3_ScatterCMacUpdate(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacFinal(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterCMacType *pCfg, const HSM_Ln_ResultBufInfoType *pResult)
{
    return HSM_L3_ScatterCMacFinal(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pResult, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacContextSave(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_ScatterCmacContextInfType * pContext)
{
    return HSM_L3_ScatterCMacContextSave(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pContext);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacContextRestore(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterCmacContextInfType * pContext)
{
    return HSM_L3_ScatterCMacContextRestore(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pContext);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccSignSetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32BitCnt)
{
    return HSM_L2_EccSignSetupEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), u32BitCnt);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccSignExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_EccSignExitEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccSign(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_EccSignType *pCfg)
{
    return HSM_L2_EccSign(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_ScatterHashSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_ScatterHashExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashSetMacCfg(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_HashMacCfgType *pCfg)
{
    return HSM_L1_ScatterHashSetMacCfg(&(pLnCtx->tHsmL1Ctx), pCfg);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashInit(HSM_Ln_RtCtxType *pLnCtx, const HSM_HashAlgType eAlg, const HSM_Ln_ScatterHashType *pCfg)
{
    return HSM_L1_ScatterHashInit(&(pLnCtx->tHsmL1Ctx), eAlg, pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashUpdate(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterHashType *pCfg)
{
    return HSM_L1_ScatterHashUpdate(&(pLnCtx->tHsmL1Ctx),  pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashFinal(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterHashType *pCfg, const HSM_Ln_ResultBufInfoType *pResult)
{
    return HSM_L1_ScatterHashFinal(&(pLnCtx->tHsmL1Ctx),  pCfg, pResult, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashContextSave(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_ScatterHashContextInfType * pContext)
{
    return HSM_L1_ScatterHashContextSave(&(pLnCtx->tHsmL1Ctx), pContext);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashContextRestore(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterHashContextInfType * pContext)
{
    return HSM_L1_ScatterHashContextRestore(&(pLnCtx->tHsmL1Ctx), pContext);
}
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeyExportSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_KeyExportSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeyExport(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ExportUserKeyType *pCfg)
{
    return HSM_L1_KeyExport(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeyExportExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_KeyExportExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceTidyUpSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_KeySpaceTidyUpSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceTidyUp(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_KeySpaceStatusType *pCfg)
{
    return HSM_L1_KeySpaceTidyUp(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceTidyUpExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_KeySpaceTidyUpExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceGetStatusSetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_KeySpaceGetStatusSetupEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceGetStatus(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_KeySpaceStatusType *pCfg)
{
    return HSM_L1_KeySpaceGetStatus(&(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceGetStatusExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L1_KeySpaceGetStatusExitEnv(&(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateKeySetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L3_UpdateKeySetupEnv(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateKey(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_PlainKeyImport *pCfg)
{
    return HSM_L3_UpdatePlainKey(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateKeyExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L3_UpdateKeyExitEnv(&(pLnCtx->tHsmL3Ctx), &(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RevokeKeySetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_RevokeKeySetupEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RevokeKey(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32KeyId)
{
    return HSM_L2_RevokeKey(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), u32KeyId, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RevokeKeyExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_RevokeKeyExitEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1V15SignSetupEnv(HSM_Ln_RtCtxType *pCtx)
{
    return HSM_L1_RsaSsaPkcs1V15SignSetupEnv(&(pCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1V15SignData(HSM_Ln_RtCtxType *pCtx, const HSM_Ln_RsaSsaPkcs1V15SignDataType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    HSM_Ln_RsaSsaPkcs1V15SignHashType tCfg;

    if (pCfg != NULL_PTR)
    {
        if (pCfg->u32InputDataByteCount > 0)
        {
            eRet = HSM_L1_RsaSsaPkcs1V15SignData(&(pCtx->tHsmL1Ctx), pCfg, u32TimeoutMs);
        }
        else
        {
            eRet = hsm_aux_get_empty_data_hash(pCfg->eHashType, &tCfg.pHashData, &tCfg.u32HashDataByteCount);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                tCfg.u32RsaBitCnt           = pCfg->u32RsaBitCnt;
                tCfg.eInputFmt              = pCfg->eInputFmt;
                tCfg.eOutputFmt             = pCfg->eOutputFmt;
                tCfg.eHashType              = pCfg->eHashType;
                tCfg.u32PrivateKeyId        = pCfg->u32PrivateKeyId;
                tCfg.pPrivateKey            = pCfg->pPrivateKey;
                tCfg.u32PrivateKeyByteCnt   = pCfg->u32PrivateKeyByteCnt;
                tCfg.u32KeyNId              = pCfg->u32KeyNId;
                tCfg.pKeyN                  = pCfg->pKeyN;
                tCfg.u32KeyNByteCount       = pCfg->u32KeyNByteCount;
                tCfg.pResult                = pCfg->pResult;
                tCfg.u32ResultBufByteCnt    = pCfg->u32ResultBufByteCnt;
                tCfg.pResultByteCnt         = pCfg->pResultByteCnt;

                eRet = HSM_L1_RsaSsaPkcs1V15SignHash(&(pCtx->tHsmL1Ctx), &tCfg, u32TimeoutMs);
            }
            /* else do nothing */
        }
    }
    else
    {
        eRet = HSM_STATUS_PARAM_ERR;
    }

    return eRet;
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1V15SignExitEnv(HSM_Ln_RtCtxType *pCtx)
{
    return HSM_L1_RsaSsaPkcs1V15SignExitEnv(&(pCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssSignSetupEnv(HSM_Ln_RtCtxType *pCtx)
{
    return HSM_L1_RsaSsaPssSignSetupEnv(&(pCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssSignData(HSM_Ln_RtCtxType *pCtx, const HSM_Ln_RsaSsaPssSignDataType *pCfg, hsm_uint32_t u32TimeoutMs)
{
    HSM_StatusType eRet;

    HSM_Ln_RsaSsaPssSignHashType tCfg;

    if (pCfg != NULL_PTR)
    {
        if (pCfg->u32InputDataByteCount > 0)
        {
            eRet = HSM_L1_RsaSsaPssSignData(&(pCtx->tHsmL1Ctx), pCfg, u32TimeoutMs);
        }
        else
        {
            eRet = hsm_aux_get_empty_data_hash(pCfg->eHashType, &tCfg.pHashData, &tCfg.u32HashDataByteCount);
            if (HSM_STATUS_SUCCESS == eRet)
            {
                tCfg.u32RsaBitCnt           = pCfg->u32RsaBitCnt;
                tCfg.bUsePseudoRand         = pCfg->bUsePseudoRand;
                tCfg.eInputFmt              = pCfg->eInputFmt;
                tCfg.eOutputFmt             = pCfg->eOutputFmt;
                tCfg.eHashType              = pCfg->eHashType;
                tCfg.u32PrivateKeyId        = pCfg->u32PrivateKeyId;
                tCfg.pPrivateKey            = pCfg->pPrivateKey;
                tCfg.u32PrivateKeyByteCnt   = pCfg->u32PrivateKeyByteCnt;
                tCfg.u32KeyNId              = pCfg->u32KeyNId;
                tCfg.pKeyN                  = pCfg->pKeyN;
                tCfg.u32KeyNByteCount       = pCfg->u32KeyNByteCount;
                tCfg.pResult                = pCfg->pResult;
                tCfg.u32ResultBufByteCnt    = pCfg->u32ResultBufByteCnt;
                tCfg.pResultByteCnt         = pCfg->pResultByteCnt;

                eRet = HSM_L1_RsaSsaPssSignHash(&(pCtx->tHsmL1Ctx), &tCfg, u32TimeoutMs);
            }
            /* else do nothing */
        }
    }
    else
    {
        eRet = HSM_STATUS_PARAM_ERR;
    }

    return eRet;
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssSignExitEnv(HSM_Ln_RtCtxType *pCtx)
{
    return HSM_L1_RsaSsaPssSignExitEnv(&(pCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm2VerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_Sm2VerifySetupEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm2VerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_Sm2VerifyExitEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm2Verify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm2VerifyType *pCfg)
{
    return HSM_L2_Sm2Verify(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateSheKeySetupEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_UpdateSheKeySetupEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateSheKey(HSM_Ln_RtCtxType *pLnCtx, const HSM_LN_UpdateSheKeyType *pCfg)
{
    return HSM_L2_UpdateSheKey(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx), pCfg, pLnCtx->u32OpLimitMs);
}

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateSheKeyExitEnv(HSM_Ln_RtCtxType *pLnCtx)
{
    return HSM_L2_UpdateSheKeyExitEnv(&(pLnCtx->tHsmL2Ctx), &(pLnCtx->tHsmL1Ctx));
}

#ifdef CRYPTO_HSM_MCAL
#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"
#endif

// clang-format on
