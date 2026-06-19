/**
 * @file Crypto_LevelnApi.h
 * @author Flagchip051
 * @brief FC7xxx HSM driver type definition and API
 * @version 1.5.1
 * @date 2023-02-06
 *
 * @copyright Copyright (c) 2023 Flagchip Semiconductors Co., Ltd.
 *
 */
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       15/02/2024    QXW0051       N/A          CRYPTO Initial Version
*   0.6.0       23/03/2024    QXW0071       N/A          Add Support For FC7240
==================================================================================================*/
// clang-format off

#ifndef CRYPTO_LEVELNAPI_H
#define CRYPTO_LEVELNAPI_H

#include "Crypto_Level0Api.h"
#include "Crypto_Level1Api.h"
#include "Crypto_Level2Api.h"
#include "Crypto_Level3Api.h"

#if defined(__cplusplus)
extern "C" {
#endif

/**
 * @addtogroup fc7xxx_driver_hsm
 * @{
 */

#define HSM_KEY_LOCATION_NVR_RAM   (0x1u)
#define HSM_KEY_LOCATION_NVR_FLASH (0x0u)
#define HSM_KEY_ID(id, location) (((((hsm_uint32_t)(id)) << 8u)) | (((hsm_uint32_t)(location)) & 0x1u))

typedef struct {
    HSM_TriggerSrcType    eTriggerSrc;
    HSM_StopCbType        pStopCb;
    HSM_SendCommandCbType pSendCmdCb;
    HSM_GetAckStatCbType  pReadAckCb;
    HSM_CancelCmdCbType   pCancelCmdCb;
    HSM_CleanDcacheCbType pCleanDCache;
    HSM_CleanAndFlushDcacheCbType pCleanAndFlushDcache;
    hsm_uint32_t                u32OpLimitMs;
} HSM_Ln_InitParmType;

typedef struct {
    hsm_uint32_t         u32OpLimitMs;
    HSM_L1_RtCtxType tHsmL1Ctx;
    HSM_L2_RtCtxType tHsmL2Ctx;
    HSM_L3_RtCtxType tHsmL3Ctx;
} HSM_Ln_RtCtxType;

#ifdef CRYPTO_HSM_MCAL
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"
#else
#define CRYPTO_TEXT_SECTION
#endif


CRYPTO_TEXT_SECTION void           HSM_Ln_Init(HSM_Ln_RtCtxType *pLnRt, HSM_Ln_InitParmType *pInitParm);
CRYPTO_TEXT_SECTION void           HSM_Ln_Ack_IrqHandler(HSM_Ln_RtCtxType *pLnCtx);

CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssVerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32RsaBitCnt);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssVerify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_RsaSsaPssVerifyType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssVerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1v15VerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32RsaBitCnt);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1v15Verify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_RsaSsaPkcs1v15VerifyType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1v15VerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ShaSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ShaExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sha(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ShaType *pSha);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CommonExitEnv(HSM_Ln_RtCtxType *pCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4EncryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4EncryptExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4Encrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm4EncryptType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4DecryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4DecryptExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm4Decrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm4DecryptType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesEncryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesEncryptExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesEncrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_AesEncryptType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesDecryptSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesDecryptExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_AesDecrypt(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_AesDecryptType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Md5SetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Md5ExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Md5(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Md5Type *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm3SetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm3ExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm3(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm3Type *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CMacSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CMacExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_CMac(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_CMacType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RngSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RngExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Rng(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_RngType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashSetMacCfg(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_HashMacCfgType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacInit(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_CMacCfgParmsType *pParmCfg, const HSM_Ln_ScatterCMacType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacUpdate(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterCMacType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacFinal(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterCMacType *pCfg, const HSM_Ln_ResultBufInfoType *pResult);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacContextSave(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_ScatterCmacContextInfType * pContext);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterCMacContextRestore(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterCmacContextInfType * pContext);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashInit(HSM_Ln_RtCtxType *pLnCtx, const HSM_HashAlgType eAlg, const HSM_Ln_ScatterHashType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashUpdate(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterHashType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashFinal(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterHashType *pCfg, const HSM_Ln_ResultBufInfoType *pResult);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashContextSave(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_ScatterHashContextInfType * pContext);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_ScatterHashContextRestore(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ScatterHashContextInfType * pContext);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccSignSetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32BitCnt);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccSignExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccSign(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_EccSignType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Abort(HSM_Ln_RtCtxType *pCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccVerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32BitCnt);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccVerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_EccVerify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_EccVerifyType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeyExportSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeyExport(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_ExportUserKeyType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeyExportExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceTidyUpSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceTidyUp(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_KeySpaceStatusType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceTidyUpExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceGetStatusSetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceGetStatus(HSM_Ln_RtCtxType *pLnCtx, HSM_Ln_KeySpaceStatusType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_KeySpaceGetStatusExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateKeySetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateKey(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_PlainKeyImport *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateKeyExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RevokeKeySetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RevokeKey(HSM_Ln_RtCtxType *pLnCtx, hsm_uint32_t u32KeyId);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RevokeKeyExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1V15SignSetupEnv(HSM_Ln_RtCtxType *pCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1V15SignData(HSM_Ln_RtCtxType *pCtx, const HSM_Ln_RsaSsaPkcs1V15SignDataType *pCfg, hsm_uint32_t u32TimeoutMs);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1V15SignHash(HSM_Ln_RtCtxType *pCtx, const HSM_Ln_RsaSsaPkcs1V15SignHashType *pCfg, hsm_uint32_t u32TimeoutMs);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPkcs1V15SignExitEnv(HSM_Ln_RtCtxType *pCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssSignSetupEnv(HSM_Ln_RtCtxType *pCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssSignData(HSM_Ln_RtCtxType *pCtx, const HSM_Ln_RsaSsaPssSignDataType *pCfg, hsm_uint32_t u32TimeoutMs);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssSignHash(HSM_Ln_RtCtxType *pCtx, const HSM_Ln_RsaSsaPssSignHashType *pCfg, hsm_uint32_t u32TimeoutMs);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_RsaSsaPssSignExitEnv(HSM_Ln_RtCtxType *pCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm2VerifySetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm2VerifyExitEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm2Verify(HSM_Ln_RtCtxType *pLnCtx, const HSM_Ln_Sm2VerifyType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_Sm2VerifyPoll(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateSheKeySetupEnv(HSM_Ln_RtCtxType *pLnCtx);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateSheKey(HSM_Ln_RtCtxType *pLnCtx, const HSM_LN_UpdateSheKeyType *pCfg);
CRYPTO_TEXT_SECTION HSM_StatusType HSM_Ln_UpdateSheKeyExitEnv(HSM_Ln_RtCtxType *pLnCtx);
#ifdef CRYPTO_HSM_MCAL
#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"
#endif

/**@}*/

/** @}*/

#if defined(__cplusplus)
}
#endif

#endif /* end of CRYPTO_LEVELNAPI_H */

// clang-format on
