// clang-format off

#ifndef CRYPTO_LEVEL3API_H
#define CRYPTO_LEVEL3API_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HSM_LEVEL_3RD_OP_NONE = 0,
    HSM_LEVEL_3RD_OP_SCATTER_CMAC,
    HSM_LEVEL_3RD_OP_UPDATE_KEY,
} HSM_L3_DrvOpType;

typedef enum {
    HSM_L3_UPDATE_KEY_READY,
    HSM_L3_UPDATE_KEY_PROCESS,
    HSM_L3_UPDATE_KEY_STOP
} HSM_L3_UpdateKeySMType;

typedef enum {
    HSM_LN_KEY_DATA_STORE_FMT_BN_LOADABLE = 0,
    HSM_LN_KEY_DATA_STORE_FMT_4B,
    HSM_LN_KEY_DATA_STORE_FMT_1B,
    HSM_LN_KEY_DATA_STORE_FMT_SPLIT_BN_LOADABLE,
} HSM_Ln_KeyDataStoreFmtType;

typedef struct {
    const hsm_uint8_t            *pKeyData;
    HSM_DataFormatType            eKeyDataFmt;
    hsm_uint32_t                  u32KeyDataByteCnt;
    hsm_uint32_t                  u32KeyId;
    HSM_Ln_KeyDataStoreFmtType    eKeyStoreFmt;
    HSM_KeyManagerUserKeyTypeType eKeyUsage;
    HSM_KeyManagerKeyExportType   eExportType;
} HSM_Ln_PlainKeyImport;

typedef struct {
    hsm_uint32_t                    u32TimeoutMs;
    HSM_L3_UpdateKeySMType          eState;
    hsm_uint32_t                        aKeyDataCache[129];
} HSM_L3_DrvUpdateKeyInfType;

/* --------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------- */
typedef enum {
    HSM_L3_SCATTER_CMAC_READY,
    HSM_L3_SCATTER_CMAC_EMPTY_INPUT,
    HSM_L3_SCATTER_CMAC_INIT,
    HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_INIT,
    HSM_L3_SCATTER_CMAC_INIT_OK,
    HSM_L3_SCATTER_CMAC_UPDATE,
    HSM_L3_SCATTER_CMAC_NEED_MORE_AFTER_UPDATE,
    HSM_L3_SCATTER_CMAC_UPDATE_OK,
    HSM_L3_SCATTER_CMAC_FINAL,
    HSM_L3_SCATTER_CMAC_STOP
} HSM_L3_ScatterCMacSMType;

typedef struct {
    hsm_uint32_t                    u32TimeoutMs;
    HSM_L3_ScatterCMacSMType        eState;
    HSM_Ln_CMacCfgParmsType         tCfgParm;
    hsm_uint32_t                    u32InputTotalSize;
} HSM_L3_DrvScatterCMacInfType;

typedef struct
{
    HSM_L3_DrvOpType      eL3OperationCata; 
    HSM_L3_ScatterCMacSMType eL3Stat;

    HSM_L1_ScatterCmacContextInfType tScatterCmacL1Context;
    HSM_L3_DrvScatterCMacInfType tScatterCmacL3Context;
} HSM_Ln_ScatterCmacContextInfType;

typedef struct HSM_L3_RtCtxType_tag{
    HSM_L3_DrvOpType      eOperation;
    HSM_StopCbType        pStopCb;
    union {
    HSM_L3_DrvScatterCMacInfType       tScatterCMac;
    HSM_L3_DrvUpdateKeyInfType         tUpdateKey;
    } tL3AlgCtx;
} HSM_L3_RtCtxType;

typedef struct {
    HSM_StopCbType        pStopCb;
} HSM_L3_InitParmType;

void hsm_core_padding_and_swap_array(hsm_uint32_t *pAlignedDest, hsm_uint32_t u32DestOpWordCnt, const void *pSrcData, hsm_uint32_t u32SrcOpByteCnt, HSM_DataFormatType eSrcFmt, hsm_uint8_t u8PadByte, HSM_BoolType bPadFromMSB, HSM_BoolType bSwap);
void hsm_pkam_u32_array_append_zero_from_left(hsm_uint8_t *pDest, const hsm_uint8_t *pSrc, hsm_uint32_t u32SrcByteCnt, hsm_uint32_t u32ZeroByteCnt);
const hsm_uint32_t *hsm_pkam_get_loadable_buf(HSM_DataFormatType eInputFmt, hsm_uint32_t *pCacheBufferMayUse, hsm_uint32_t u32LastCacheByteCnt, const hsm_uint32_t *pSrc, hsm_uint32_t u32SrcByteCnt, hsm_uint32_t u32LoadByteCount);

HSM_StatusType  HSM_L3_ScatterCMacSetupEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType  HSM_L3_ScatterCMacExitEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType  HSM_L3_ScatterCMacInit(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_CMacCfgParmsType *pKeyCfg, const HSM_Ln_ScatterCMacType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType  HSM_L3_ScatterCMacUpdate(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ScatterCMacType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType  HSM_L3_ScatterCMacFinal(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ScatterCMacType *pCfg, const HSM_Ln_ResultBufInfoType *pResult, hsm_uint32_t u32TimeoutMs);
HSM_StatusType  HSM_L3_ScatterCMacContextSave(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, HSM_Ln_ScatterCmacContextInfType * pContext);
HSM_StatusType  HSM_L3_ScatterCMacContextRestore(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_ScatterCmacContextInfType * pContext);
HSM_StatusType  HSM_L3_UpdateKeySetupEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType  HSM_L3_UpdateKeyExitEnv(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx);
HSM_StatusType  HSM_L3_UpdatePlainKey(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, const HSM_Ln_PlainKeyImport *pPlainKey, hsm_uint32_t u32TimeoutMs);
HSM_StatusType  HSM_L3_UpdateKeyPoll(HSM_L3_RtCtxType *pL3Ctx, HSM_L2_RtCtxType *pL2Ctx, HSM_L1_RtCtxType *pL1Ctx, hsm_uint32_t u32TimeoutMs);

void            HSM_L3_Ack_IrqHandler(void *pUpperCtx, HSM_BoolType bIsErrorHappen, HSM_StatusType eRet);
void            HSM_L3_Init(HSM_L3_RtCtxType *pCtx, HSM_L3_InitParmType *pParm);
void            HSM_L3_CleanEnv(HSM_L3_RtCtxType *pCtx);
void            HSM_L3_Abort(HSM_L3_RtCtxType *pCtx);
void            HSM_L3_CommonExitEnv(HSM_L3_RtCtxType *pCtx);

#ifdef __cplusplus
}
#endif

#endif /* CRYPTO_LEVEL3API_H */

/** @} */

// clang-format on
