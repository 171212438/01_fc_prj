// clang-format off

#ifndef CRYPTO_LEVEL2API_H
#define CRYPTO_LEVEL2API_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HSM_LEVEL_2ND_OP_NONE = 0,
    HSM_LEVEL_2ND_OP_CMAC_EMPTY,
    HSM_LEVEL_2ND_OP_UPDATE_KEY, /* if key not exist, create new */
    HSM_LEVEL_2ND_OP_REVOKE_KEY,
    HSM_LEVEL_2ND_OP_ECC_VERIFY, /* if input is raw data, need hash first */
    HSM_LEVEL_2ND_OP_SM2_VERIFY, /* if input is raw data, need hash first */
    HSM_LEVEL_2ND_OP_RNG, /* if input is raw data, need hash first */
    HSM_LEVEL_2ND_OP_UPDATE_SHE_KEY,
     HSM_LEVEL_2ND_OP_ECC_SIGN, /* if input is raw data, need hash first */   
} HSM_L2_DrvOpType;

typedef enum {
    HSM_L2_UPDATE_KEY_SM_READY,
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
    HSM_L2_UPDATE_KEY_SM_LOADFIRMWARE,
    HSM_L2_UPDATE_KEY_SM_CHECK_EXIST,
    HSM_L2_UPDATE_KEY_SM_REVOKE,
    HSM_L2_UPDATE_KEY_SM_TIDYUP,
    HSM_L2_UPDATE_KEY_SM_IMPORT,
    HSM_L2_UPDATE_KEY_SM_GET_STATUS,

#else
    HSM_L2_UPDATE_KEY_SM_TIDYUP,
    HSM_L2_UPDATE_KEY_SM_UPDATE,
    HSM_L2_UPDATE_KEY_SM_IMPORT,
    HSM_L2_UPDATE_KEY_SM_GET_STATUS,

#endif
    HSM_L2_UPDATE_KEY_SM_STOP,
} HSM_L2_DrvUpdateKeySMType;

typedef struct {
    HSM_L2_DrvUpdateKeySMType       eStat;
    hsm_uint32_t                    u32Id;
    hsm_uint32_t                   *pKeyIdOut;
    HSM_BoolType                    bTidyUpAlready;

    HSM_Ln_ImportUserKeyExtType     tImportCfg;
    HSM_Ln_KeySpaceStatusType       tKeySpaceStatus;

#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
#else

    HSM_Ln_KeyManagerUpdateUserKeyType tUpdateKeyCfg;
#endif
} HSM_L2_DrvUpdateKeyInfType;

typedef enum {
    HSM_L2_REVOKE_KEY_SM_READY,
    HSM_L2_REVOKE_KEY_SM_CHECK_EXIST,
    HSM_L2_REVOKE_KEY_SM_REVOKE,
#if 0
    HSM_L2_REVOKE_KEY_SM_TIDYUP,
#endif
    HSM_L2_REVOKE_KEY_SM_STOP,
} HSM_L2_DrvRevokeKeySMType;

typedef struct {
    HSM_L2_DrvRevokeKeySMType       eStat;
    hsm_uint32_t                    u32Id;
    union {
    HSM_Ln_KeySpaceStatusType       tKeySpaceStatus;
    } tRevokeInfo;
} HSM_L2_DrvRevokeKeyInfType;

typedef enum {
    HSM_L2_CMAC_EMPTY_SM_READY,
    HSM_L2_CMAC_EMPTY_SM_GENERATE_L,
    HSM_L2_CMAC_EMPTY_SM_GENERATE_T,
    HSM_L2_CMAC_EMPTY_SM_STOP,
} HSM_L2_DrvCMacEmptySMType;

typedef struct {
    HSM_L2_DrvCMacEmptySMType   eStat;
    hsm_uint8_t                    *pOut;
    hsm_uint32_t                    u32OutBufSize;
    HSM_DataFormatType          eOutFmt;
    hsm_uint32_t                     *pOutSize;

    HSM_Ln_AesEncryptType       tParm;
    HSM_AesmBackendType         eBackend;

    hsm_uint32_t                      aResultCacheBuf[4+1]; /* pkcs7 result size has more 16bytes than input */
    hsm_uint32_t                      aInputCacheBuf[4+1];
    hsm_uint32_t                      aIvData[4+1];
    hsm_uint32_t                      aKeyData[8+1];
} HSM_L2_DrvCMacEmptyInfType;

typedef enum {
    HSM_L2_ECC_VERIFY_SM_READY,
    HSM_L2_ECC_VERIFY_SM_HASH,
    HSM_L2_ECC_VERIFY_SM_VERIFY,
    HSM_L2_ECC_VERIFY_SM_STOP,
} HSM_L2_DrvEccVerifySMType;

/**
 * @brief HSM_ECC_VERIFY_INPUT_RAW_MESSAGE value for type "HSM_EccVerifyInputType"
 */
#define HSM_ECC_VERIFY_INPUT_RAW_MESSAGE  0u

/**
 * @brief HSM_ECC_VERIFY_INPUT_HASH_DATA value for type "HSM_EccVerifyInputType"
 */
#define HSM_ECC_VERIFY_INPUT_HASH_DATA    1u

typedef hsm_uint32_t HSM_EccVerifyInputType;

typedef struct
{
    HSM_EccVerifyInputType         eInputType;
    HSM_ShaAlgType                 eAlg;
    Crypto_VerifyResultType       *pVerifyResult;
    HSM_L1_EccVerifyType           tVerifyParm;
} HSM_Ln_EccVerifyType;

typedef struct {
    hsm_uint32_t                    u32BitCnt;
    HSM_L2_DrvEccVerifySMType       eStat;
    hsm_uint32_t                    aCache[17]; /* for max sha512 */
    HSM_Ln_EccVerifyType            tEccCfg;
    HSM_Ln_ShaType                  tShaParm;
} HSM_L2_DrvEccVerifyInfType;

typedef enum {
    HSM_L2_SM2_VERIFY_SM_READY,
    HSM_L2_SM2_VERIFY_SM_GEN_ZA,
    HSM_L2_SM2_VERIFY_SM_HASH_UPDATE,
    HSM_L2_SM2_VERIFY_SM_HASH_FINALLY,
    HSM_L2_SM2_VERIFY_SM_VERIFY,
    HSM_L2_SM2_VERIFY_SM_STOP,
} HSM_L2_DrvSm2VerifySMType;

/**
 * @brief HSM_ECC_VERIFY_INPUT_RAW_MESSAGE value for type "HSM_EccVerifyInputType"
 */
#define HSM_SM2_VERIFY_INPUT_RAW_MESSAGE  0u

/**
 * @brief HSM_ECC_VERIFY_INPUT_HASH_DATA value for type "HSM_EccVerifyInputType"
 */
#define HSM_SM2_VERIFY_INPUT_HASH_DATA    1u

typedef hsm_uint32_t HSM_Sm2VerifyInputType;

typedef struct
{
    HSM_Sm2VerifyInputType         eInputType;
    Crypto_VerifyResultType       *pVerifyResult;
    HSM_L1_Sm2VerifyType           tVerifyParm;
} HSM_Ln_Sm2VerifyType;

typedef struct {
    HSM_L2_DrvSm2VerifySMType       eStat;
    HSM_Ln_Sm2VerifyType            tSm2Cfg;
    HSM_LN_Sm2GenZaType             tSm2GenZaCfg;
    HSM_Ln_ScatterHashType          tScatterSm3Cfg;
    hsm_uint32_t                    aCache[8];
    HSM_Ln_ResultBufInfoType        tScatterSm3Result;
} HSM_L2_DrvSm2VerifyInfType;

typedef enum {
    HSM_L2_RNG_SM_READY,
    HSM_L2_RNG_SM_GEN_TRNG,
    HSM_L2_RNG_SM_GEN_FAST_TRNG,
    HSM_L2_RNG_SM_STOP,
} HSM_L2_DrvRngSMType;

typedef struct {
    hsm_uint8_t        *pResult; /*!< MD5 result is 16bytes, point to the memory that driver to store result */
    hsm_uint32_t        u32ResultBufSize; /*!< the size of buffer 'pResult' to store result */
    union
    {
        HSM_RndSrcType      eTrngSrc;
        HSM_FastTrngSrcType eFastTrngSrc;
    }eRngSrc;
    hsm_uint32_t        u32TrngBytesEachTime;/* specific sample size in byte each time */
} HSM_Ln_RngType;

typedef struct {
    HSM_L2_DrvRngSMType       eStat;
    HSM_Ln_RngType            tRngCfg;
} HSM_L2_DrvRngInfType;

typedef enum {
    HSM_L2_UPDATE_SHE_KEY_SM_READY,
    HSM_L2_UPDATE_SHE_KEY_SM_LOADFIRMWARE,
    HSM_L2_UPDATE_SHE_KEY_SM_UPDATE,
    HSM_L2_UPDATE_SHE_KEY_SM_REVOKE,
    HSM_L2_UPDATE_SHE_KEY_SM_TIDYUP,
    HSM_L2_UPDATE_SHE_KEY_SM_STOP,
} HSM_L2_DrvUpdateSheKeySMType;

typedef struct {
    HSM_L2_DrvUpdateSheKeySMType       eStat;
    HSM_BoolType                    bTidyUpAlready;
    HSM_Ln_KeySpaceStatusType       tKeySpaceStatus;
    HSM_LN_UpdateSheKeyType     tUpdateCfg;
} HSM_L2_DrvUpdateSheKeyInfType;

typedef enum {
    HSM_L2_ECC_SIGN_SM_READY,
    HSM_L2_ECC_SIGN_SM_HASH,
    HSM_L2_ECC_SIGN_SM_SIGN,
    HSM_L2_ECC_SIGN_SM_STOP,
} HSM_L2_DrvEccSignSMType;

/**
 * @brief HSM_ECC_Sign_INPUT_RAW_MESSAGE value for type "HSM_EccSignInputType"
 */
#define HSM_ECC_SIGN_INPUT_RAW_MESSAGE  0u

/**
 * @brief HSM_ECC_SIGN_INPUT_HASH_DATA value for type "HSM_EccSignInputType"
 */
#define HSM_ECC_SIGN_INPUT_HASH_DATA    1u

typedef hsm_uint32_t HSM_EccSignInputType;

typedef struct
{
    HSM_EccSignInputType           eInputType;
    HSM_ShaAlgType                 eAlg;
    HSM_L1_EccSignType             tSignParm;
} HSM_Ln_EccSignType;

typedef struct {
    hsm_uint32_t                    u32BitCnt;
    HSM_L2_DrvEccSignSMType       eStat;
    hsm_uint32_t                    aCache[17]; /* for max sha512 */
    HSM_Ln_EccSignType              tEccCfg;
    HSM_Ln_ShaType                  tShaParm;
} HSM_L2_DrvEccSignInfType;

typedef struct HSM_L2_RtCtxType_tag{
    HSM_L2_DrvOpType      eOperation;
    HSM_StopCbType        pStopCb;
    union {

    HSM_L2_DrvCMacEmptyInfType          tCMacEmpty;

    HSM_L2_DrvUpdateKeyInfType          tUpdateKey;

    HSM_L2_DrvRevokeKeyInfType          tRevokeKey;

    HSM_L2_DrvEccVerifyInfType          tEccVerify;

    HSM_L2_DrvSm2VerifyInfType          tSm2Verify;

    HSM_L2_DrvRngInfType                tRng;

    HSM_L2_DrvUpdateSheKeyInfType       tUpdateSheKey;

    HSM_L2_DrvEccSignInfType            tEccSign;
    }tL2AlgCtx;
} HSM_L2_RtCtxType;

typedef struct {
    HSM_StopCbType        pStopCb;
} HSM_L2_InitParmType;

void HSM_L2_Init(HSM_L2_RtCtxType *pCtx, HSM_L2_InitParmType *pParm);

void HSM_L2_Abort(HSM_L2_RtCtxType *pCtx);

HSM_StatusType hsm_l2_update_key_process(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs,
    HSM_L2_DrvUpdateKeyInfType *pCfg, HSM_StatusType eRetFromPrevious, HSM_TriggerSrcType bTriggerMode);

HSM_StatusType HSM_L2_UpdateKeySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType HSM_L2_UpdateKey(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ImportUserKeyExtType *pKeyCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L2_UpdateKeyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);

HSM_StatusType HSM_L2_CMacEmptySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType HSM_L2_CMacEmptyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType HSM_L2_CMacEmpty(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_CMacCfgParmsType *pKeyCfg, const HSM_Ln_ResultBufInfoType *pResult, hsm_uint32_t u32TimeoutMs);

HSM_StatusType HSM_L2_RevokeKeySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType HSM_L2_RevokeKey(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32KeyId, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L2_RevokeKeyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);

HSM_StatusType HSM_L2_EccVerifySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32BitCnt);
HSM_StatusType HSM_L2_EccVerify(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_EccVerifyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L2_EccVerifyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);

HSM_StatusType HSM_L2_Sm2VerifySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType HSM_L2_Sm2Verify(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_Sm2VerifyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L2_Sm2VerifyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);

HSM_StatusType HSM_L2_RngSetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType HSM_L2_Rng(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_RngType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L2_RngExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);

HSM_StatusType HSM_L2_UpdateSheKeySetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType HSM_L2_UpdateSheKey(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_LN_UpdateSheKeyType *pKeyCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L2_UpdateSheKeyExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);

HSM_StatusType HSM_L2_EccSignSetupEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32BitCnt);
HSM_StatusType HSM_L2_EccSign(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_EccSignType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L2_EccSignExitEnv(HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);

void HSM_L2_CleanEnv(HSM_L2_RtCtxType *pCtx);

void HSM_L2_Ack_IrqHandler(void *pUpperCtx, HSM_BoolType bIsErrorHappen, HSM_StatusType eRet);
void HSM_L2_CommonExitEnv(HSM_L2_RtCtxType *pCtx);

#ifdef __cplusplus
}
#endif

#endif /* CRYPTO_LEVEL2API_H */

/** @} */

// clang-format on
