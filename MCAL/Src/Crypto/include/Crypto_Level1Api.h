// clang-format off

#ifndef CRYPTO_LEVEL1API_H
#define CRYPTO_LEVEL1API_H

#ifdef __cplusplus
extern "C" {
#endif


#include "Crypto_Level0Api.h"

#ifdef CRYPTO_HSM_MCAL
#include "Rte_Csm_Type.h"
#else
typedef enum {
    /**@details The result of the verification is "true",
        i.e. the two compared elements are identical. This return code shall be given as value "0" */
    CRYPTO_E_VER_OK = 0x00U,
    /**@details The result of the verification is "false",
        i.e. the two compared elements are not identical. This return code shall be given as value "1". */
    CRYPTO_E_VER_NOT_OK = 0x01U
}Crypto_VerifyResultType;
#endif

#ifdef __ghs__
    #include <arm_ghs.h>
    #define hsm_hw_swap_u32(x) __REV(x)

#elif defined(__GNUC__)
    #define hsm_hw_swap_u32(x) __builtin_bswap32(x)

#elif defined(__ICCARM__)
    #include "iccarm_builtin.h"
    #define hsm_hw_swap_u32(x)     __iar_builtin_REV(x)
#else
    #define hsm_hw_swap_u32(x)     ({hsm_uint32_t y; asm volatile ("rev %0, %1\n" :"=r"(y) :"r"(x)); y;})
#endif

#define HSM_ADDRESS_UP_ALIGN(addr)  ((((hsm_uint32_t)(addr)) + 0x3u) & (~((hsm_uint32_t)0x3)))

typedef struct
{
    const hsm_uint8_t        *pInputData;             /*!< address is 4bytes aligned, input data, if not 64bytes align, the last uint64_t's high byte left to patch 0 to align */
    hsm_uint32_t              u32InputDataByteCount;  /*!< the byte count of input data */
    HSM_DataFormatType  eInputDataFmt;

    hsm_uint32_t              u32KeyEId;
    const hsm_uint8_t        *pKeyE;                  /*!< address is 4bytes aligned, input key E data for "A = (input data)^E mod N", if not 64bytes align, the last uint64_t's high byte left to patch 0 to align */
    hsm_uint32_t              u32KeyEByteCount;       /*!< the byte count of key E */
    HSM_DataFormatType  eKeyEFmt;

    hsm_uint32_t              u32KeyNId;
    const hsm_uint8_t        *pKeyN;                 /*!< address is 4bytes aligned, input key N data for "A = (input data)^E mod N", if not 64bytes align, the last uint64_t's high byte left to patch 0 to align */
    hsm_uint32_t              u32KeyNByteCount;     /*!< hw will get the actual key data bit count according to the non-zero bit count, it means key not generate by multiply 2 */
    HSM_DataFormatType  eKeyNFmt;

    hsm_uint8_t              *pResult;                /*!< address is 4bytes aligned, output buffer, the buffer size should >= "u32Key_N_ByteCount" */
    hsm_uint32_t              u32ResultBufByteCnt;    /*!< the result buffer size */
    hsm_uint32_t             *pResultByteCnt;         /*!< the result size */
    HSM_DataFormatType  eOutputFmt;
} HSM_L1_RsaType;

typedef enum {
    HSM_L1_BNCALC_A_ADD_B = 0,
    HSM_L1_BNCALC_A_SUB_B,
    HSM_L1_BNCALC_B_SUB_A,
    HSM_L1_BNCALC_A_x_B,
    HSM_L1_BNCALC_A_Exp_E,
    HSM_L1_BNCALC_A_MOD,
    HSM_L1_BNCALC_A_RECIPROCAL,
} HSM_L1_BnCalcTypeType;

typedef struct
{
    hsm_uint32_t                  u32KeyEId;  /*!< means don't load key from HSM, otherwise would load key with KEYID from HSM */
    hsm_uint32_t                  u32KeyNId;  /*!< means don't load key from HSM, otherwise would load key with KEYID from HSM */
    hsm_uint32_t                  u32BitCnt;           /*!< the bit count of numbers used of N */
    HSM_L1_BnCalcTypeType         eCalcType;

    const hsm_uint8_t            *pA;                  /*!< address is 4bytes aligned, input data, if not 64bytes align, the last uint64_t's high byte left to patch 0 to align */
    hsm_uint32_t                  u32AByteCount;       /*!< the byte count of input data */
    HSM_DataFormatType            eAFmt;

    const hsm_uint8_t            *pB;
    hsm_uint32_t                  u32BByteCount;
    HSM_DataFormatType            eBFmt;

    const hsm_uint8_t            *pE;                  /*!< address is 4bytes aligned, input key E data for "A = (input data)^E mod N", if not 64bytes align, the last uint64_t's high byte left to patch 0 to align */
    hsm_uint32_t                  u32EByteCount;       /*!< the byte count of key E */
    HSM_DataFormatType            eEFmt;

    const hsm_uint8_t            *pN;                  /*!< address is 4bytes aligned, input key N data for "A = (input data)^E mod N", if not 64bytes align, the last uint64_t's high byte left to patch 0 to align */
    hsm_uint32_t                  u32NByteCount;       /*!< hw will get the actual key data bit count according to the non-zero bit count, it means key not generate by multiply 2 */
    HSM_DataFormatType            eNFmt;

    hsm_uint8_t                  *pResult;             /*!< address is 4bytes aligned, output buffer, the buffer size should >= "u32Key_N_ByteCount" */
    hsm_uint32_t                  u32ResultBufByteCnt; /*!< the result buffer size */
    hsm_uint32_t                 *pResultByteCnt;
    HSM_DataFormatType            eResultFmt;
} HSM_L1_BnCalcType;

typedef struct
{
    const hsm_uint8_t *pP;     /*!< address is 4bytes aligned, ecc curve modulus */
    hsm_uint32_t       u32PByteCnt;

    const hsm_uint8_t *pN;     /*!< address is 4bytes aligned, ecc curve order; size; the count of all possible EC points */
    hsm_uint32_t       u32NByteCnt;

    const hsm_uint8_t *pA;     /*!< address is 4bytes aligned, the constant "a" in y^2 = x^3 + a*x + b (mod p) */
    hsm_uint32_t       u32AByteCnt;

    const hsm_uint8_t *pB;     /*!< address is 4bytes aligned, the constant "b" in y^2 = x^3 + a*x + b (mod p) */
    hsm_uint32_t       u32BByteCnt;

    const hsm_uint8_t *pGx;    /*!< address is 4bytes aligned, x of the curve generator point G {x, y} */
    hsm_uint32_t       u32GxByteCnt;

    const hsm_uint8_t *pGy;    /*!< address is 4bytes aligned, y of the curve generator point G {x, y} */
    hsm_uint32_t       u32GyByteCnt;
} HSM_L1_EccCurveParamType;

typedef struct
{
    HSM_DrvEccCurvePrmIndexType    u32EccCurve;
    HSM_L1_EccCurveParamType       tCurve;            /*!< ecc curve parameters */
    HSM_DataFormatType             eCurveDataFmt;

    hsm_uint32_t                   u32PublicKeyId;
    const hsm_uint8_t             *pkGx;             /*!< address is 4bytes aligned, public key axis x */
    hsm_uint32_t                   u32kGxByteCnt;
    const hsm_uint8_t             *pkGy;             /*!< address is 4bytes aligned, public key axis y */
    hsm_uint32_t                   u32kGyByteCnt;
    HSM_DataFormatType             ekGxyDataFmt;

    const hsm_uint8_t             *pData;         /*!< address is 4bytes aligned, if input hash, hash of the data to verify, if raw data to hash, it point to raw data */
    hsm_uint32_t                   u32DataByteCnt;
    HSM_DataFormatType             eDataFmt;

    const hsm_uint8_t             *pR;                /*!< address is 4bytes aligned, the sign result R of the data to verify */
    hsm_uint32_t                   u32RByteCnt;
    HSM_DataFormatType             eRDataFmt;

    const hsm_uint8_t             *pS;                /*!< address is 4bytes aligned, the sign result S of the data to verify */
    hsm_uint32_t                   u32SByteCnt;
    HSM_DataFormatType             eSDataFmt;
} HSM_L1_EccVerifyType;

typedef struct
{
    HSM_DataFormatType          eInputDataFmt;
    HSM_DataFormatType          eOutputDataFmt;

    HSM_DrvEccCurvePrmIndexType u32EccCurve;
    HSM_L1_EccCurveParamType    tCurve;            /*!< ecc curve parameters */

    hsm_uint32_t                    u32PointId;
    const hsm_uint8_t              *pPointX;             /*!< address is 4bytes aligned, public key axis x */
    hsm_uint32_t                    u32PointXByteCnt;
    const hsm_uint8_t              *pPointY;             /*!< address is 4bytes aligned, public key axis y */
    hsm_uint32_t                    u32PointYByteCnt;

    hsm_uint32_t                    u32KId;
    const hsm_uint8_t              *pK;         /*!< address is 4bytes aligned, hash of the data to verify */
    hsm_uint32_t                    u32KByteCnt;

    hsm_uint8_t                    *pResultX;                /*!< address is 4bytes aligned, the sign result R of the data to verify */
    hsm_uint32_t                    u32ResultXBufferByteCnt;
    hsm_uint32_t                   *pResultXByteCnt;

    hsm_uint8_t                    *pResultY;                /*!< address is 4bytes aligned, the sign result R of the data to verify */
    hsm_uint32_t                    u32ResultYBufferByteCnt;
    hsm_uint32_t                   *pResultYByteCnt;
} HSM_Ln_EccKPType;

typedef struct
{
    HSM_DataFormatType          eInputDataFmt;
    HSM_DataFormatType          eOutputDataFmt;

    HSM_DrvEccCurvePrmIndexType u32EccCurve;
    HSM_L1_EccCurveParamType    tCurve;            /*!< ecc curve parameters */

    hsm_uint32_t                   u32PublicKeyId;
    const hsm_uint8_t             *pkGx;             /*!< address is 4bytes aligned, public key axis x */
    hsm_uint32_t                   u32kGxByteCnt;
    const hsm_uint8_t             *pkGy;             /*!< address is 4bytes aligned, public key axis y */
    hsm_uint32_t                   u32kGyByteCnt;

    hsm_uint32_t                   u32PrivateKeyId;
    const hsm_uint8_t             *pPrivateKey;         /*!< address is 4bytes aligned, hash of the data to verify */
    hsm_uint32_t                   u32PrivateKeyByteCnt;

    const hsm_uint8_t             *pEncryptedData;                /*!< address is 4bytes aligned, the sign result S of the data to verify */
    hsm_uint32_t                   u32EncryptedDataByteCnt;

    hsm_uint8_t                   *pPlainData;                /*!< address is 4bytes aligned, the sign result R of the data to verify */
    hsm_uint32_t                   u32PlainDataBufferByteCnt;
    hsm_uint32_t                  *pPlainResultByteCnt;
} HSM_Ln_EccDecryptType;

typedef struct
{
    HSM_DrvEccCurvePrmIndexType    u32EccCurve;
    HSM_L1_EccCurveParamType       tCurve;            /*!< ecc curve parameters */
    HSM_DataFormatType             eCurveDataFmt;

    hsm_uint32_t                   u32PrivateKeyId;
    const hsm_uint8_t              *pPrivate;             /*!< address is 4bytes aligned, public key axis x */
    hsm_uint32_t                   u32PrivateByteCnt;
    HSM_DataFormatType             ePrivateKeyFmt;

    const hsm_uint8_t              *pData;         /*!< address is 4bytes aligned, if input hash, hash of the data to verify, if raw data to hash, it point to raw data */
    hsm_uint32_t                    u32DataByteCnt;
    HSM_DataFormatType             eDataFmt;

    hsm_uint8_t                    *pR;                /*!< address is 4bytes aligned, the sign result R of the data to verify */
    hsm_uint32_t                   u32RBufByteCnt;

    hsm_uint8_t                    *pS;                /*!< address is 4bytes aligned, the sign result S of the data to verify */
    hsm_uint32_t                   u32SBufByteCnt;

    HSM_DataFormatType             eRSDataFmt;
} HSM_L1_EccSignType;

typedef struct {
    hsm_uint32_t                   aTrngBuf0[HSM_TRNG_RAND_U32_CNT];
    hsm_uint32_t                   u32LFSR;
    hsm_uint32_t                   u32LFSRUsedIndex;
    hsm_uint32_t                   u32LFSRUsedCnt;
    hsm_uint32_t                   u32NoRepeatCnt;
} HSM_DrvRandPoolType;

typedef enum {
    HSM_DRV_SM_READY = 0,
    HSM_DRV_SM_ARITH,
    HSM_DRV_SM_STOP,
} HSM_L1_DrvSMType;

typedef struct {
    hsm_uint32_t                      u32NBitCnt;
    HSMCom_RsaType                   *pRsaParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                     *pResultByteCnt;
    HSM_DataFormatType                eOutFmt;
    hsm_uint32_t                      aRsaInputAndResult[128+1]; /* 4096bit for max pkam big number calculate, 1 for address align */
    hsm_uint32_t                      aRsaE[128+1]; /* 4096bit for max pkam big number calculate, 1 for address align */
    hsm_uint32_t                      aRsaN[128+1]; /* 4096bit for max pkam big number calculate, 1 for address align */
    hsm_uint32_t                      aRsaParmBuf[((sizeof(HSMCom_RsaType)+3)/4)+1];
} HSM_DrvRsaInfType;

typedef struct {
    HSMCom_BigNumberCalcType         *pBnCalcParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                     *pResultByteCnt;
    HSM_DataFormatType                eOutFmt;
    hsm_uint32_t                      aAAndResult[128+1]; /* 4096bit for max pkam big number calculate, 1 for address align */
    hsm_uint32_t                      aB[128+1];
    hsm_uint32_t                      aE[128+1]; /* 4096bit for max pkam big number calculate, 1 for address align */
    hsm_uint32_t                      aN[128+1]; /* 4096bit for max pkam big number calculate, 1 for address align */
    hsm_uint32_t                      aBnCalcParmBuf[((sizeof(HSMCom_BigNumberCalcType)+3)/4)+1];
} HSM_DrvBnCalcInfType;

typedef struct {
    HSMCom_BigNumberCalcExtType      *pBnCalcParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                     *pResultByteCnt;
    HSM_DataFormatType                eOutFmt;

    hsm_uint32_t                      aResultCache[128+1]; /* 4096bit for max pkam big number calculate, 1 for address align */
    hsm_uint32_t                      aB[128+1];
    hsm_uint32_t                      aBnCalcParmBuf[((sizeof(HSMCom_BigNumberCalcExtType)+3)/4)+1];
    hsm_uint32_t                      u32ResultByteCnt;
} HSM_DrvBnCalcExtInfType;

typedef struct {
    HSMCom_Md5ExType           *pParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                     *pOutResultSize;
    HSM_BoolType                bSwapOut;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_Md5ExType)+3)/4)+1];
    hsm_uint32_t                      aResultCacheBuf[4+1]; /* cache buffer for result */
    hsm_uint32_t                      aInputCacheBuf[128+1];
} HSM_DrvMd5InfType;

typedef struct {
    HSMCom_Sm3ExType           *pParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                     *pOutResultSize;
    HSM_BoolType                bSwapOut;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_Sm3ExType)+3)/4)+1];
    hsm_uint32_t                      aResultCacheBuf[8+1]; /* cache buffer for result */
    hsm_uint32_t                      aInputCacheBuf[128+1];
} HSM_DrvSm3InfType;

typedef struct {
    HSMCom_ShaExType           *pParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                     *pOutResultSize;
    HSM_BoolType                bSwapOut;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_ShaExType)+3)/4)+1];
    hsm_uint32_t                      aInputCacheBuf[128+1];
    hsm_uint32_t                      aShaResultCache[((sizeof(HSM_ShaResultBufType)+3)/4)+1];
} HSM_DrvShaInfType;

typedef struct {
    HSMCom_TrueRandExType      *pParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                      u32GetSize;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_TrueRandExType)+3)/4)+1];
    hsm_uint32_t                      aRandom[HSM_TRNG_RAND_U32_CNT+1];
} HSM_DrvTrngInfType;

typedef struct {
    HSMCom_FastTrueRandType      *pParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                      u32GetSize;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_FastTrueRandType)+3)/4)+1];
    hsm_uint32_t                      aRandom[HSM_TRNG_RAND_U32_CNT+1];
    hsm_uint32_t                      u32TrngBytesEachTime;
} HSM_DrvFastTrngInfType;

typedef struct {
    hsm_uint32_t                      u32NBitCnt;
    HSMCom_EccVerifyType             *pParm;
    hsm_uint32_t                      aP[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aN[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aA[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aB[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aGx[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aGy[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      akGx[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      akGy[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aR[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aS[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aHash[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_EccVerifyType)+3)/4)+1];
} HSM_DrvEccVerifyInfType;

typedef struct {
    hsm_uint32_t                      u32NBitCnt;
    HSMCom_EccEasyDecryType          *pParm;

    HSM_DataFormatType                eOutFmt;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufSize;
    hsm_uint32_t                     *pResultByteCnt;

    hsm_uint32_t                      aP[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aN[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aA[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aB[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aPrivate[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aPlain[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      akGx[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      akGy[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aEncrypted[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_EccEasyDecryType)+3)/4)+1];
} HSM_DrvEccDecryptInfType;

typedef struct {
    HSMCom_CMacExType                *pParm;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultBufByteCnt;
    hsm_uint32_t                     *pOutResultSize;
    HSM_BoolType                      bCheckMac;
    const hsm_uint8_t                *pMacToCheck;
    hsm_uint32_t                      u32MacToCheckByteCnt;
    Crypto_VerifyResultType          *pVerifyResult;
    HSM_BoolType                      bSwapOut;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_CMacExType)+3)/4)+1];
    hsm_uint32_t                      aResultCacheBuf[8+1]; /* max aes/sm4 key length is 256bit, so use 32bytes, cache buffer for result */
    hsm_uint32_t                      aInputCacheBuf[128+1];
} HSM_DrvCMacInfType;

typedef struct {
    HSMCom_FlexAesEncryptType  *pParm;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_FlexAesEncryptType)+3)/4)+1];
    HSM_BoolType                bSwapOut;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultByteCnt;
    hsm_uint32_t                      u32HsmRetResultSize;
    hsm_uint32_t                      aResultCacheBuf[132+1]; /* pkcs7 result size has more 16bytes than input */
    hsm_uint32_t                      aInputCacheBuf[128+1];
    hsm_uint32_t                      aIvData[4+1];
} HSM_DrvAesEncryptInfType;

typedef struct {
    hsm_uint32_t                      u32NBitCnt;
    HSMCom_EccCalcType              *pParm;

    HSM_DataFormatType            eOutFmt;
    hsm_uint8_t                      *pResultBufX;
    hsm_uint32_t                      u32ResultBufSizeX;
    hsm_uint32_t                     *pResultByteCntX;
    hsm_uint8_t                      *pResultBufY;
    hsm_uint32_t                      u32ResultBufSizeY;
    hsm_uint32_t                     *pResultByteCntY;

    hsm_uint32_t                      aA[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aB[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aP[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aN[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aP1x[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aP1y[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aE[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aP2x[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aP2y[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aResultX[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aResultY[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_EccCalcType)+3)/4)+1];
} HSM_DrvEccCalcInfType;

typedef struct {
    HSMCom_FlexAesDecryptType  *pParm;
    hsm_uint32_t                      u32HsmRetResultSize;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_FlexAesDecryptType)+3)/4)+1];
    hsm_uint32_t                      aIvData[4+1];
} HSM_DrvAesDecryptInfType;

typedef struct {
    HSMCom_Sm4DecryptExType    *pParm;
    hsm_uint32_t                      u32HsmRetResultSize;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_Sm4DecryptExType)+3)/4)+1];
    hsm_uint32_t                      aIvData[4+1];
} HSM_DrvSm4DecryptInfType;

typedef struct {
    HSMWrap_Sm4EncryptExType    tWrapper;
    HSMCom_Sm4EncryptExType    *pParm;
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_FlexAesEncryptType)+3)/4)+1];
    HSM_BoolType                bSwapOut;
    hsm_uint8_t                      *pResultBuf;
    hsm_uint32_t                      u32ResultByteCnt;
    hsm_uint32_t                      u32HsmRetResultSize;
    hsm_uint32_t                      aResultCacheBuf[132+1]; /* pkcs7 result size has more 16bytes than input */
    hsm_uint32_t                      aInputCacheBuf[128+1];
    hsm_uint32_t                      aIvData[4+1];
} HSM_DrvSm4EncryptInfType;

typedef struct
{
    HSMCom_UserKeyManageType            *pParm;
    hsm_uint32_t                         aParmBuf[((sizeof(HSMCom_UserKeyManageType)+3)/4)+1];

    union {
#if ((FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM))
    KeyManager_UserKeyStatusType         tKeyIdStatus;
#endif

    hsm_uint32_t                         aAlignedDataBuffer[(128 * 3) + 1]; /* FC7300/7240/7300GT only use 128 words, following is 128 * 3 */
    HSM_KeyManagerExportUserKeyStatusType tExportStatus;
    } tKeyInfoShared;
}HSM_DrvKeyManageInfType;

typedef struct
{
    HSMCom_KeySpaceStatusType            *pSpaceParm;
    hsm_uint32_t                          aParmBuf[((sizeof(HSMCom_KeySpaceStatusType)+3)/4)+1];
    HSM_Ln_KeySpaceStatusType             tKeySpaceStatus;
}HSM_DrvKeySpaceInfType;

/**
 * @brief MD5 information used by driver when call specific API
 *
 */
typedef struct {
    HSM_Md5CtxType        tCfg; /*!< MD5 algorithm parameter set by user */
    hsm_uint8_t          *pResult; /*!< MD5 result is 16bytes, point to the memory that driver to store result */
    hsm_uint32_t          u32ResultBufSize; /*!< the size of buffer 'pResult' to store result */
    hsm_uint32_t         *pResultSize;
    HSM_DataFormatType    eInputFmt; /*!< input data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_DataFormatType    eOutputFmt; /*!< output data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_BoolType          bKeyUseId;
} HSM_Ln_Md5Type;

/**
 * @brief Rng information used by driver when call specific API
 *
 */
typedef struct {
    hsm_uint8_t        *pResult; /*!< MD5 result is 16bytes, point to the memory that driver to store result */
    hsm_uint32_t        u32ResultBufSize; /*!< the size of buffer 'pResult' to store result */
    HSM_RndSrcType      eSrc;
} HSM_L1_RngType;

/**
 * @brief Rng information used by driver when call specific API
 *
 */
typedef struct {
    hsm_uint8_t        *pResult; /*!< MD5 result is 16bytes, point to the memory that driver to store result */
    hsm_uint32_t        u32ResultBufSize; /*!< the size of buffer 'pResult' to store result */
    HSM_FastTrngSrcType eSrc;
    hsm_uint32_t        u32TrngBytesEachTime;/* specific sample size in byte each time */
    hsm_uint32_t        u32UseSampleSizeOnly;
    HSM_TrngInitCfgType tTrngCfg;
} HSM_L1_FastRngType;

/**
 * @brief Sm3 information used by driver when call specific API
 *
 */
typedef struct {
    HSM_Sm3CtxType        tCfg; /*!< algorithm parameter set by user */
    hsm_uint8_t          *pResult; /*!< MD5 result is 16bytes, point to the memory that driver to store result */
    hsm_uint32_t          u32ResultBufSize; /*!< the size of buffer 'pResult' to store result */
    hsm_uint32_t         *pResultSize;
    HSM_DataFormatType    eInputFmt; /*!< input data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_DataFormatType    eOutputFmt; /*!< output data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_BoolType          bKeyUseId;
} HSM_Ln_Sm3Type;

/**
 * @brief Sha information used by driver when call specific API
 *
 */
typedef struct {
    HSM_ShaAlgType      eAlg;
    HSM_ShaCtxType      tCfg; /*!< algorithm parameter set by user */
    hsm_uint8_t        *pResult; /*!< MD5 result is 16bytes, point to the memory that driver to store result */
    hsm_uint32_t        u32ResultBufSize; /*!< the size of buffer 'pResult' to store result */
    hsm_uint32_t       *pResultSize;
    HSM_DataFormatType  eInputFmt; /*!< input data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_DataFormatType  eOutputFmt; /*!< output data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_BoolType        bKeyUseId;
} HSM_Ln_ShaType;

typedef struct {
    hsm_uint32_t                    u32NewKeyId;
    HSM_AesKeyType                  eUseKeyType;        /*!< fix to HSM_AES_KEY_NEW */
    HSM_AesNewKeyInfType            tNewKeyInf;         /*!< when eUseKeyType is HSM_AES_KEY_NEW, this MUST configure */
    HSM_AesVendorKeyInfType         tVendorKeyInf;      /*!< when eUseKeyType is HSM_AES_KEY_CHIP_VENDOR_IFR, this MUST configure */
    hsm_uint32_t                    u32GenMacByteCnt;   /*!< XCMAC API generate MAC data, it's "u32GenMacByteCnt" size ICV data */
    const hsm_uint8_t              *pDataInput;         /*!< address should align with 4bytes */
    hsm_uint32_t                    u32InputByteCnt;    /*!< 128bit(16Bytes) align */

    hsm_uint8_t                    *pDataOutput;        /*!< address should align with 4bytes */
    hsm_uint32_t                    u32ResultBufSize;   /*!< 4bytes align, the output data buffer "pDataOutput" size, should >= "u32GenMacByteCnt" */
    hsm_uint32_t                   *pResultSize;

    HSM_BoolType                    bCheckMacEn;        /*!< if enable this check, user should place the data after the input data, hsm will check the generated data and it, if fail, hsm generate a interrupt, and if user get hw status, will get a error status */
    const hsm_uint8_t              *pCheckExternalMac;
    hsm_uint32_t                    u32CheckByteCnt;
    Crypto_VerifyResultType        *pVerifyResult;

    HSM_DataFormatType              eInputFmt;
    HSM_DataFormatType              eOutputFmt;
    HSM_XCMacEngineType             eEngine;
} HSM_Ln_CMacType;

typedef struct
{
    hsm_uint32_t                u32KeyId;
    HSM_AesKeyType              eUseKeyType;        /*!< the key source:vendor key programmed in nvr flash or new key in software */
    HSM_AesNewKeyInfType        tNewKeyInf;         /*!< when eUseKeyType is HSM_AES_KEY_NEW, this MUST configure */
    HSM_AesVendorKeyInfType     tVendorKeyInf;      /*!< when eUseKeyType is HSM_AES_KEY_CHIP_VENDOR_IFR, this MUST configure */
    HSM_SymmEnDecryptAlgType    eAesAlg;            /*!< encrypt/decrypt mode */

    const hsm_uint8_t          *pDataInput;         /*!< address should align with 4bytes */
    hsm_uint32_t                u32InputByteCnt;    /*!< 128bit(16Bytes) align */
    hsm_uint8_t                *pDataOutput;        /*!< address should align with 4bytes */
    hsm_uint32_t                u32OutputMemSize;   /*!< the output data buffer "pDataOutput" size, should >= "u32InputByteCnt" */

    const hsm_uint8_t          *pIvData; /*!< address should align with 4bytes, 128bit(16Bytes) iv(initialization vector) data array, ECB not need configure this */

    HSM_FlexAesPadType          ePad;     /*!< for encrypt, if data size not 16bytes aligned, the pad byte should refer to this configuration,
                                            for decrypt, driver to process the padding data according to this,
                                            however, if zero padding, driver will not remove the padding 0, user should delete the data manually  */
    HSM_DataFormatType          eInputFmt; /*!< key/iv/input data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_DataFormatType          eOutputFmt; /*!< output result data format  */
    hsm_uint32_t               *pGenerateOutByteCnt; /*!< point to the hsm_uint8_t variable to store the result byte count, can't be NULL_PTR */
} HSM_Ln_AesEncryptType;

typedef HSM_Ln_AesEncryptType HSM_Ln_Sm4EncryptType;

typedef struct
{
    hsm_uint32_t                u32KeyId;
    HSM_AesKeyType              eUseKeyType;        /*!< the key source:vendor key programmed in nvr flash or new key in software */
    HSM_AesNewKeyInfType        tNewKeyInf;         /*!< when eUseKeyType is HSM_AES_KEY_NEW, this MUST configure */
    HSM_AesVendorKeyInfType     tVendorKeyInf;      /*!< when eUseKeyType is HSM_AES_KEY_CHIP_VENDOR_IFR, this MUST configure */
    HSM_SymmEnDecryptAlgType    eAesAlg;            /*!< encrypt/decrypt mode */

    const hsm_uint8_t          *pDataInput;         /*!< address should align with 4bytes */
    hsm_uint32_t                u32InputByteCnt;    /*!< 128bit(16Bytes) align */
    hsm_uint8_t                *pDataOutput;        /*!< address should align with 4bytes */
    hsm_uint32_t                u32OutputMemSize;   /*!< the output data buffer "pDataOutput" size, should >= "u32InputByteCnt" */

    const hsm_uint8_t          *pIvData; /*!< address should align with 4bytes, 128bit(16Bytes) iv(initialization vector) data array, ECB not need configure this */

    HSM_FlexAesPadType          ePad;     /*!< for encrypt, if data size not 16bytes aligned, the pad byte should refer to this configuration,
                                            for decrypt, driver to process the padding data according to this,
                                            however, if zero padding, driver will not remove the padding 0, user should delete the data manually  */
    HSM_DataFormatType          eInputFmt; /*!< key/iv/input data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_DataFormatType          eOutputFmt; /*!< output result data format  */
    hsm_uint32_t               *pGenerateOutByteCnt; /*!< point to the hsm_uint32_t variable to store the result byte count, can't be NULL_PTR */
} HSM_Ln_AesDecryptType;

typedef HSM_Ln_AesDecryptType HSM_Ln_Sm4DecryptType;

typedef enum {
  HFA_MD5 = 0,
  HFA_SHA160 = 1,
  HFA_SHA224 = 2,
  HFA_SHA256 = 3,
  HFA_SHA384 = 4,
  HFA_SHA512 = 5,
  HFA_SHA512_224 = 6,
  HFA_SHA512_256 = 7,
  HFA_SM3 = 8,
} HFAM_MODE_E;

/**
 * @brief type definition for algorithm stop callback registered in HSM_Ln_Init API.
 *
 */
typedef void (*HSM_StopCbType)(void *pLnCtx, HSM_BoolType bErrorHappen, HSM_StatusType eRet);

typedef void            (*HSM_IsrEnableCbType)(HSM_BoolType bPara);
typedef HSM_StatusType  (*HSM_SendCommandCbType)(HSM_CmdType* pPara);
typedef HSM_StatusType  (*HSM_GetAckStatCbType)(void);
typedef HSM_StatusType  (*HSM_CancelCmdCbType)(void);
typedef HSM_StatusType  (*HSM_ResetHsmHwCbType)(void);
typedef void (*HSM_CleanDcacheCbType)(void);
typedef void (*HSM_CleanAndFlushDcacheCbType)(void);

typedef struct {
    const hsm_uint8_t      *pData;
    hsm_uint32_t            u32DataSize;
    HSM_DataFormatType  eDataFmt;
} HSM_Ln_ScatterHashType;

typedef struct {
    hsm_uint8_t            *pData;
    hsm_uint32_t            u32DataBufSize;
    HSM_DataFormatType  eDataFmt;
    hsm_uint32_t           *pDataSize;
} HSM_Ln_ResultBufInfoType;

typedef enum {
    HSM_L1_SCATTER_HASH_READY,
    HSM_L1_SCATTER_HASH_NEED_MORE_BEFORE_INIT,
    HSM_L1_SCATTER_HASH_INIT,
    HSM_L1_SCATTER_HASH_INIT_OK,
    HSM_L1_SCATTER_HASH_NEED_MORE_BEFORE_UPDATE_FINAL,
    HSM_L1_SCATTER_HASH_UPDATE,
    HSM_L1_SCATTER_HASH_UPDATE_OK,
    HSM_L1_SCATTER_HASH_FINAL,
    HSM_L1_SCATTER_HASH_STOP
} HSM_ScatterHashSMType;

typedef struct {
    HSM_BoolType         bGenerateMacEn;          /*!< whether generate MAC */
    HSM_HfamMacType      eMacType;                /*!< if enable generating MAC, this should configure */
    union {
    const hsm_uint8_t   *pKeyData;                /*!< address is 4bytes aligned, key to generate MAC, if enable generating MAC, this should configure */
    hsm_uint32_t         u32KeyId;
    } tHashMacKeyInfo;
    hsm_uint32_t         u32KeyByteCnt;           /*!< the byte count of key data */
    hsm_uint32_t         u32GenerateMacByteCnt;   /*!< the byte count of MAC data output */
    HSM_DataFormatType   eKeyDataFmt;
    HSM_BoolType         bKeyUseId;
} HSM_Ln_HashMacCfgType;

typedef struct {
    hsm_uint32_t                    u32TimeoutMs;

    HSM_HashAlgType              eAlg;

    hsm_uint8_t                    *pOut;
    hsm_uint32_t                    u32OutBufSize;
    HSM_DataFormatType          eOutFmt;
    hsm_uint32_t                     *pOutSize;

    HSM_ScatterHashSMType       eState;
    const hsm_uint8_t              *pInputData;
    HSM_DataFormatType          eInputFmt;
    hsm_uint32_t                    u32InputTotalSize;
    hsm_uint32_t                    u32ProcessedSize;

    hsm_uint32_t                    u32CacheDataByteCnt;

    HSMCom_ScatterHashType     *pScatterHashParm;

    union {
    hsm_uint32_t                      aShaResultBuf[((sizeof(HSM_ShaResultBufType)+3)/4)+1];
    hsm_uint32_t                      aHashCtx[18];
    } tScatterHashResultShared;

    union {
    hsm_uint32_t                      aShaParmBuf[((sizeof(HSMCom_ShaExType)+3)/4)+1];
    hsm_uint32_t                      aScatterHashParmBuf[((sizeof(HSMCom_ScatterHashType)+3)/4)+1];
    } tScatterHashParamShared;

    HSM_Ln_HashMacCfgType             tMacCfg;
    hsm_uint32_t                      aMacKeyCache[0x21];

    hsm_uint32_t                      aDataBuf[32];
} HSM_DrvScatterHashInfType;

typedef struct
{
    HSM_BoolType                  bInProcess;
    hsm_uint32_t                  eOperationCata; /* HSM_DrvOpCatagoryType deceide using which info structure */
    HSM_L1_DrvSMType              eStat;

    HSM_DrvScatterHashInfType tScatterHashContext;
} HSM_Ln_ScatterHashContextInfType;

typedef struct {
    const hsm_uint8_t  *pData;
    hsm_uint32_t        u32DataSize;
    HSM_DataFormatType  eDataFmt;
} HSM_Ln_ScatterCMacType;

/**
 * @brief HSM_AESM_BACKEND_AES value for type "HSM_AesmBackendType"
 */
#define HSM_AESM_BACKEND_AES  0x0

/**
 * @brief HSM_AESM_BACKEND_AES value for type "HSM_AesmBackendType"
 */
#define HSM_AESM_BACKEND_SM4  0x1

typedef hsm_uint32_t HSM_AesmBackendType;

typedef struct {
    HSM_AesKeyType          eUseKeyType;
    hsm_uint32_t            u32KeyId;
    HSM_AesKeyBitCntType    eKeyType; /*!< the key bit count, which determine the AES algorithm type */
    const hsm_uint8_t            *pKeyAddr;
    HSM_DataFormatType      eKeyDataFmt;
    HSM_AesmBackendType     eBackend;
} HSM_Ln_CMacCfgParmsType;

typedef struct {
    hsm_uint8_t            *pData;
    hsm_uint32_t            u32DataBufSize;
    HSM_DataFormatType  eDataFmt;
    hsm_uint32_t           *pDataSize;
} HSM_L1_ScatterCMacResultType;

typedef enum {
    HSM_L1_SCATTER_CMAC_READY,
    HSM_L1_SCATTER_CMAC_NEED_MORE_BEFORE_INIT,
    HSM_L1_SCATTER_CMAC_INIT,
    HSM_L1_SCATTER_CMAC_INIT_OK,
    HSM_L1_SCATTER_CMAC_NEED_MORE_BEFORE_UPDATE_FINAL,
    HSM_L1_SCATTER_CMAC_UPDATE,
    HSM_L1_SCATTER_CMAC_UPDATE_OK,
    HSM_L1_SCATTER_CMAC_FINAL,
    HSM_L1_SCATTER_CMAC_STOP
} HSM_ScatterCMacSMType;

typedef struct {
    HSM_ScatterCMacSMType       eState;
    hsm_uint32_t                    u32TimeoutMs;

    hsm_uint8_t                    *pOut;
    hsm_uint32_t                    u32OutBufSize;
    HSM_DataFormatType          eOutFmt;
    hsm_uint32_t                     *pOutSize;

    const hsm_uint8_t              *pInputData;
    HSM_DataFormatType          eInputFmt;
    hsm_uint32_t                    u32InputTotalSize;
    hsm_uint32_t                    u32ProcessedSize;
    hsm_uint32_t                    u32CacheDataByteCnt;
    hsm_uint32_t                    u32CacheProcByteCnt;

    HSM_AesKeyType              eUseKeyType;
    HSM_AesmBackendType         eBackend;
    hsm_uint32_t                    u32KeyId;
    HSM_AesKeyBitCntType        eKeyType; /*!< the key bit count, which determine the AES algorithm type */
    hsm_uint32_t                    aKeyData[8]; /* for max 256bit key */

    HSMCom_AesmRawApiType      *pScatterCMacParm;

    union {
    hsm_uint32_t                      aCMacResultBuf[16];
    hsm_uint32_t                      aCMacCtx[16];
    } tScatterCMacResultShared;

    union {
    hsm_uint32_t                      aCMacParmBuf[((sizeof(HSMCom_CMacExType)+3)/4)+1];
    hsm_uint32_t                      aScatterCMacParmBuf[((sizeof(HSMCom_AesmRawApiType)+3)/4)+1];
    } tScatterCMacParamShared;

    hsm_uint32_t                      aDataBuf[32];
} HSM_DrvScatterCMacInfType;

typedef struct
{
    HSM_BoolType          bInProcess;
    hsm_uint32_t          eL1OperationCata;
    HSM_L1_DrvSMType      eL1Stat;

    HSM_DrvScatterCMacInfType    tScatterCmacL1Context;
} HSM_L1_ScatterCmacContextInfType;

typedef struct {
    hsm_uint32_t                      u32NBitCnt;

    HSM_DataFormatType            eOutFmt;
    hsm_uint8_t                      *pR;
    hsm_uint32_t                      u32RBufByteCnt;
    hsm_uint8_t                      *pS;
    hsm_uint32_t                      u32SBufByteCnt;

    HSMCom_EccSignType           *pParm;
    hsm_uint32_t                      aP[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aN[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aA[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aB[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aGx[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aGy[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aPrivate[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aR[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aS[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aHash[32+1]; /* 1024bit for max pkam ECC number calculate, 1 for address align */
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_EccSignType)+3)/4)+1];
} HSM_DrvEccSignInfType;

/**
 * @brief RSA PSS signature verify information used by driver when call specific API
 *
 */
typedef struct {
    hsm_uint32_t              u32EmBitCnt; /* RFC8017 require set it to (N's bit count - 1). the em data bit count, it MUST < N's bit count, should keep same with the signature generate configuration */
    HSM_HashAlgType           eMgfHashType; /*!< the hash type used by signature */
    HSM_HashAlgType           eHashType; /*!< the hash type used by signature */
    hsm_uint32_t              u32SaltByteCount; /*!< the byte count of salt data, it must > 0, suggest use hash length, for example, if eHashType is HSM_SHA_256, set this to 256/8=32bytes */

    HSM_DataFormatType        eInputDataFmt; /*!< input data(raw message or hash data) organized format, hsm_uint8_t array, or hsm_uint32_t array */
    HSM_RsaSsaInputType       eInputType; /*!< input data type, may raw input message, or the hash data of raw message */
    const hsm_uint8_t        *pInputData; /*!< input data */
    hsm_uint32_t              u32InputDataByteCount; /*!< the byte count of input data, when the eInputType is HSM_RSA_SSA_INPUT_RAW_MESSAGE */

    HSM_DataFormatType        eSignDataFmt; /*!< Signature/Public key/N input data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    const hsm_uint8_t        *pSignData; /*!< input signature data */
    hsm_uint32_t              u32SignDataByteCount; /*!< the byte count of signature data, it must > 0 */

    hsm_uint32_t              u32KeyEId;
    HSM_DataFormatType        ePublicKeyDataFmt;
    const hsm_uint8_t        *pPublicKey; /*!< public key, input key E data for "A = (input data)^E mod N" */
    hsm_uint32_t              u32PublicKeyByteCnt; /*!< the byte count of key E */

    hsm_uint32_t              u32KeyNId;
    HSM_DataFormatType        eKeyNDataFmt;
    const hsm_uint8_t        *pKeyN; /*!< input key N data for "A = (input data)^E mod N" */
    hsm_uint32_t              u32KeyNByteCount; /*!< key N data byte count */

    Crypto_VerifyResultType    *pVerifyResult;
} HSM_Ln_RsaSsaPssVerifyType;

typedef struct {
    hsm_uint32_t                        u32BitCnt;
    HSMCom_RsaSsaPssVerifyType     *pParm;
    hsm_uint32_t                        aParmBuf[((sizeof(HSMCom_RsaSsaPssVerifyType)+3)/4)+1];
    Crypto_VerifyResultType         *pVerifyResult;
} HSM_L1_DrvRSASsaPssVerifyType;

/**
 * @brief RSA PKCS1 V1.5 signature verify information used by driver when call specific API
 *
 */
typedef struct {
    hsm_uint32_t            u32EmByteCnt; /*!< set it 0 to use default value. RFC8017 require set it to N'byte count, equal to u32KeyNByteCount. the em data byte count, itx8 MUST < N's bit count, should keep same with the signature generate configuration */

    HSM_HashAlgType         eHashType; /*!< the hash type used by signature */

    HSM_DataFormatType      eInputDataFmt; /*!< input data organized format, hsm_uint8_t array, or hsm_uint32_t array */
    const hsm_uint8_t      *pInputData; /*!< input data */
    hsm_uint32_t            u32InputDataByteCount; /*!< the byte count of input data */

    HSM_DataFormatType      eSignDataFmt;
    const hsm_uint8_t      *pSignData; /*!< input signature data */
    hsm_uint32_t            u32SignDataByteCount; /*!< the byte count of signature data, it must > 0 */

    hsm_uint32_t            u32KeyEId;
    HSM_DataFormatType      ePublicKeyFmt;
    const hsm_uint8_t      *pPublicKey; /*!< public key, input key E data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32PublicKeyByteCnt; /*!< the byte count of key E */

    HSM_BoolType            bUseInputDer; /*!< set to HSM_TRUE when RFC8017 not support some hash algorithm, for example SM3 Hash type, DER encoding of the DigestInfo value, if use hsm internal data, just set it to HSM_FALSE */
    const hsm_uint8_t      *pDer; /*!< when bUseInputDer is HSM_TRUE, this field point to the DER encoding of the DigestInfo value, others, ignore */
    hsm_uint32_t            u32DerByteCount; /*!< when bUseInputDer is HSM_TRUE, this field represent the byte count of DER data,  if bUseInputDer is HSM_FALSE, ignore this field */

    hsm_uint32_t            u32KeyNId;
    HSM_DataFormatType      eKeyNFmt;
    const hsm_uint8_t      *pKeyN; /*!< input key N data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32KeyNByteCount; /*!< key N's data byte count */

    Crypto_VerifyResultType    *pVerifyResult;
} HSM_Ln_RsaSsaPkcs1v15VerifyType;

typedef struct {
    hsm_uint32_t                         u32BitCnt;
    HSMCom_RsaSsaPkcs1V15VerifyType *pParm;
    hsm_uint32_t                         aParmBuf[((sizeof(HSMCom_RsaSsaPkcs1V15VerifyType)+3)/4)+1];
    Crypto_VerifyResultType         *pVerifyResult;
} HSM_L1_DrvRSASsaPkcs1V15VerifyType;

typedef struct {
    hsm_uint32_t            u32RsaBitCnt;
    HSM_DataFormatType      eInputFmt; /*!< input data organized format, uint8_t array, or uint32_t array */
    HSM_DataFormatType      eOutputFmt; /*!< output data organized format, uint8_t array, or uint32_t array */
    HSM_HashAlgType         eHashType; /*!< the hash type used by signature */
    const hsm_uint8_t      *pInputData; /*!< input data */
    hsm_uint32_t            u32InputDataByteCount; /*!< the byte count of input data */
    hsm_uint32_t            u32PrivateKeyId;
    const hsm_uint8_t      *pPrivateKey; /*!< private key, input key E data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32PrivateKeyByteCnt; /*!< the byte count of key E */
    hsm_uint32_t            u32KeyNId;
    const hsm_uint8_t      *pKeyN; /*!< input key N data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32KeyNByteCount; /*!< key N's data byte count */
    hsm_uint8_t            *pResult; /*!< output buffer, the buffer size should >= "u32KeyNByteCount" */
    hsm_uint32_t            u32ResultBufByteCnt; /*!< the result buffer size */
    hsm_uint32_t           *pResultByteCnt; /*!< the result data byte count */
} HSM_Ln_RsaSsaPkcs1V15SignDataType;

typedef struct {
    hsm_uint32_t            u32RsaBitCnt;
    HSM_DataFormatType      eInputFmt; /*!< input data organized format, uint8_t array, or uint32_t array */
    HSM_DataFormatType      eOutputFmt; /*!< output data organized format, uint8_t array, or uint32_t array */
    HSM_HashAlgType         eHashType; /*!< the hash type used by signature */
    const hsm_uint8_t      *pHashData; /*!< input data */
    hsm_uint32_t            u32HashDataByteCount; /*!< the byte count of input data */
    hsm_uint32_t            u32PrivateKeyId;
    const hsm_uint8_t      *pPrivateKey; /*!< private key, input key E data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32PrivateKeyByteCnt; /*!< the byte count of key E */
    hsm_uint32_t            u32KeyNId;
    const hsm_uint8_t      *pKeyN; /*!< input key N data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32KeyNByteCount; /*!< key N's data byte count */
    hsm_uint8_t            *pResult; /*!< output buffer, the buffer size should >= "u32KeyNByteCount" */
    hsm_uint32_t            u32ResultBufByteCnt; /*!< the result buffer size */
    hsm_uint32_t           *pResultByteCnt; /*!< the result data byte count */
} HSM_Ln_RsaSsaPkcs1V15SignHashType;

typedef struct {
    hsm_uint32_t                         u32BitCnt;
    HSMCom_RsaSsaPkcs1v15SignType       *pParm;
    hsm_uint32_t                         aParmBuf[((sizeof(HSMCom_RsaSsaPkcs1v15SignType)+3)/4)+1];
} HSM_L1_DrvRSASsaPkcs1V15SignType;

typedef struct {
    hsm_uint32_t            u32RsaBitCnt;
    HSM_BoolType            bUsePseudoRand;
    HSM_DataFormatType      eInputFmt; /*!< input data organized format, uint8_t array, or uint32_t array */
    HSM_DataFormatType      eOutputFmt; /*!< output data organized format, uint8_t array, or uint32_t array */
    HSM_HashAlgType         eHashType; /*!< the hash type used by signature */
    const hsm_uint8_t      *pInputData; /*!< input data */
    hsm_uint32_t            u32InputDataByteCount; /*!< the byte count of input data */
    hsm_uint32_t            u32PrivateKeyId;
    const hsm_uint8_t      *pPrivateKey; /*!< private key, input key E data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32PrivateKeyByteCnt; /*!< the byte count of key E */
    hsm_uint32_t            u32KeyNId;
    const hsm_uint8_t      *pKeyN; /*!< input key N data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32KeyNByteCount; /*!< key N's data byte count */
    hsm_uint8_t            *pResult; /*!< output buffer, the buffer size should >= "u32KeyNByteCount" */
    hsm_uint32_t            u32ResultBufByteCnt; /*!< the result buffer size */
    hsm_uint32_t           *pResultByteCnt; /*!< the result data byte count */
} HSM_Ln_RsaSsaPssSignDataType;

typedef struct {
    hsm_uint32_t            u32RsaBitCnt;
    HSM_BoolType            bUsePseudoRand;
    HSM_DataFormatType      eInputFmt; /*!< input data organized format, uint8_t array, or uint32_t array */
    HSM_DataFormatType      eOutputFmt; /*!< output data organized format, uint8_t array, or uint32_t array */
    HSM_HashAlgType         eHashType; /*!< the hash type used by signature */
    const hsm_uint8_t      *pHashData; /*!< input data */
    hsm_uint32_t            u32HashDataByteCount; /*!< the byte count of input data */
    hsm_uint32_t            u32PrivateKeyId;
    const hsm_uint8_t      *pPrivateKey; /*!< private key, input key E data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32PrivateKeyByteCnt; /*!< the byte count of key E */
    hsm_uint32_t            u32KeyNId;
    const hsm_uint8_t      *pKeyN; /*!< input key N data for "A = (input data)^E mod N" */
    hsm_uint32_t            u32KeyNByteCount; /*!< key N's data byte count */
    hsm_uint8_t            *pResult; /*!< output buffer, the buffer size should >= "u32KeyNByteCount" */
    hsm_uint32_t            u32ResultBufByteCnt; /*!< the result buffer size */
    hsm_uint32_t           *pResultByteCnt; /*!< the result data byte count */
} HSM_Ln_RsaSsaPssSignHashType;

typedef struct {
    hsm_uint32_t                    u32BitCnt;
    HSMCom_RsaSsaPssSignType       *pParm;
    hsm_uint32_t                    aParmBuf[((sizeof(HSMCom_RsaSsaPssSignType)+3)/4)+1];
} HSM_L1_DrvRSASsaPssSignType;

typedef struct {
    const hsm_uint8_t *pN;
    hsm_uint32_t       u32NByteCnt;

    const hsm_uint8_t *pE;
    hsm_uint32_t       u32EByteCnt;
} HSM_L1_PKCS_RsaPublicKeyInfType;

typedef  struct {
    const hsm_uint8_t *pKGx;
    hsm_uint32_t       u32KGxByteCnt;

    const hsm_uint8_t *pKGy;
    hsm_uint32_t       u32KGyByteCnt;
} HSM_L1_PKCS_EccPublicKeyInfType;


#define HSM_L1_RSA_PUBLIC_KEY 0
#define HSM_L1_ECC_PUBLIC_KEY 1
typedef hsm_uint32_t HSM_L1_PublicKeyType;

typedef struct {
    HSM_L1_PublicKeyType       eKeyType;
    union {
    HSM_L1_PKCS_RsaPublicKeyInfType tRsaKeyInf;
    HSM_L1_PKCS_EccPublicKeyInfType tEccKeyInf;
    } tPublicInf;
} HSM_L1_PublicKeyInfType;

typedef struct {
    const hsm_uint8_t *pN;
    hsm_uint32_t       u32NByteCnt;

    const hsm_uint8_t *pE;
    hsm_uint32_t       u32EByteCnt;

    const hsm_uint8_t *pD;
    hsm_uint32_t       u32DByteCnt;
} HSM_L1_PKCS_RsaPrivateKeyInfType;

typedef  struct {
    const hsm_uint8_t *pPrivate;
    hsm_uint32_t       u32PrivateByteCnt;
} HSM_L1_PKCS_EccPrivateKeyInfType;

#define HSM_L1_PKCS8_RSA_PRIVATE_KEY 0
#define HSM_L1_PKCS8_ECC_PRIVATE_KEY 1
typedef hsm_uint32_t HSM_L1_PKCS8_PrivateKeyType;

typedef struct {
    HSM_L1_PKCS8_PrivateKeyType       eKeyType;
    union {
    HSM_L1_PKCS_RsaPrivateKeyInfType tRsaKeyInf;
    HSM_L1_PKCS_EccPrivateKeyInfType tEccKeyInf;
    } tPrivateInfo;
} HSM_L1_PKCS8_PrivateKeyInfType;

typedef struct {
    HSMCom_LoadFirmwareType           *pParm;
    uint32                      aParmBuf[((sizeof(HSMCom_LoadFirmwareType)+3)/4)+1];
} HSM_DrvLoadFirmwareInfType;

#ifndef HSM_SM2_USERID_MAX_LENGTH
#define HSM_SM2_USERID_MAX_LENGTH (16u)
#endif

typedef struct
{
    HSM_BoolType bUseDefaultID;     /*!< true means use default ID. false means use specific ID with "pInputData_ID" and "u32SM2InputIDByteCnt" params. */

    hsm_uint32_t                   u32PublicKeyId;
    const hsm_uint8_t             *pkGx;             /*!< address is 4bytes aligned, public key axis x */
    hsm_uint32_t                   u32kGxByteCnt;
    const hsm_uint8_t             *pkGy;             /*!< address is 4bytes aligned, public key axis y */
    hsm_uint32_t                   u32kGyByteCnt;
    HSM_DataFormatType             ekGxyDataFmt;

    const hsm_uint8_t   *pInputData_ID;
    hsm_uint32_t u32SM2InputIDByteCnt;  /*!< the length should be <= 32bytes note: If "bUseDefaultID" is false, would use this specific ID length with byte unit. */
    const hsm_uint8_t             *pData;         /*!< address is 4bytes aligned, if input hash, hash of the data to verify, if raw data to hash, it point to raw data */
    hsm_uint32_t                   u32DataByteCnt;
    HSM_DataFormatType             eDataFmt;

    const hsm_uint8_t             *pR;                /*!< address is 4bytes aligned, the sign result R of the data to verify */
    hsm_uint32_t                   u32RByteCnt;
    const hsm_uint8_t             *pS;                /*!< address is 4bytes aligned, the sign result S of the data to verify */
    hsm_uint32_t                   u32SByteCnt;
    HSM_DataFormatType             eRSDataFmt;
} HSM_L1_Sm2VerifyType;

typedef struct {
    HSMCom_Sm2VerifyType             *pParm;
    hsm_uint32_t                      akGx[8];
    hsm_uint32_t                      akGy[8];
    hsm_uint32_t                      aR[8];
    hsm_uint32_t                      aS[8];
    hsm_uint32_t                      aHash[8];
    hsm_uint32_t                      aUserID[(HSM_SM2_USERID_MAX_LENGTH + 3)/4];
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_Sm2VerifyType)+3)/4)+1];
} HSM_DrvSm2VerifyInfType;

typedef struct {
    HSMCom_Sm2GenZaType             *pParm;
    HSM_BoolType                     bSwapOut;
    hsm_uint32_t                      akGx[8];
    hsm_uint32_t                      akGy[8];
    hsm_uint32_t                      aUserID[(HSM_SM2_USERID_MAX_LENGTH + 3)/4];
    hsm_uint32_t                      aParmBuf[((sizeof(HSMCom_Sm2GenZaType)+3)/4)+1];
} HSM_DrvSm2GenZaInfType;

typedef struct {
    HSM_BoolType bUseDefaultID;     /*!< true means use default ID. false means use specific ID with "pInputData_ID" and "u32SM2InputIDByteCnt" params. */

    hsm_uint32_t                   u32PublicKeyId;
    const hsm_uint8_t             *pkGx;             /*!< address is 4bytes aligned, public key axis x */
    hsm_uint32_t                   u32kGxByteCnt;
    const hsm_uint8_t             *pkGy;             /*!< address is 4bytes aligned, public key axis y */
    hsm_uint32_t                   u32kGyByteCnt;
    HSM_DataFormatType             ekGxyDataFmt;

    const hsm_uint8_t   *pInputData_ID;
    hsm_uint32_t u32SM2InputIDByteCnt;  /*!< the length should be <= 32bytes note: If "bUseDefaultID" is false, would use this specific ID length with byte unit. */
    HSM_DataFormatType             eDataFmt;

    hsm_uint32_t (*pOutputData_Za)[8];
    HSM_DataFormatType             eOutputFmt;
}HSM_LN_Sm2GenZaType;

typedef struct {
    HSMCom_UpdateSheKeyType       *pParm;
    hsm_uint32_t                  aParmBuf[((sizeof(HSMCom_UpdateSheKeyType)+3)/4)+1];
} HSM_L1_DrvUpdateSheKeyType;

typedef struct  HSM_L1_RtCtxType_tag{
    HSM_TriggerSrcType    eTriggerSrc;
    HSM_StopCbType        pStopCb;
    HSM_SendCommandCbType pSendCmdCb;
    HSM_GetAckStatCbType  pReadAckCb;
    HSM_CancelCmdCbType   pCancelCmdCb;
    HSM_CleanDcacheCbType pCleanDCache;
    HSM_CleanAndFlushDcacheCbType pCleanAndFlushDcache;

    HSM_BoolType          bInProcess;
    hsm_uint32_t          eOperationCata; /* HSM_DrvOpCatagoryType deceide using which info structure */
    HSM_L1_DrvSMType      eStat;

    hsm_uint32_t          eLastestHsmRet; /* HSM_StatusType */
    hsm_uint32_t          u32CurStatInf;
    HSM_DrvRandPoolType   tRandPool;
    HSM_CmdType           tCmd;

    union {
#if 0
        HSM_DrvRsaInfType         tRsaInf;
#endif
        HSM_DrvMd5InfType         tMd5Inf;
        HSM_DrvSm3InfType         tSm3Inf;
        HSM_DrvShaInfType         tShaInf;
        HSM_DrvTrngInfType        tRngInf;
        HSM_DrvEccVerifyInfType   tEccVerifyInf;
        HSM_DrvCMacInfType        tCMacInf;
        HSM_DrvAesEncryptInfType  tAesEncryptInf;
        HSM_DrvAesDecryptInfType  tAesDecryptInf;
        HSM_DrvSm4EncryptInfType  tSm4EncryptInf;
        HSM_DrvSm4DecryptInfType  tSm4DecryptInf;

        HSM_DrvScatterHashInfType tScatterHash;
        HSM_DrvScatterCMacInfType tScatterCMac;
        HSM_DrvEccSignInfType     tEccSignInf;

        HSM_L1_DrvRSASsaPssVerifyType       tRsaSsaPssVerify;
        HSM_L1_DrvRSASsaPkcs1V15VerifyType  tRsaSsaPkcs1V15Verify;
        HSM_DrvKeyManageInfType             tKeyInf;
        HSM_DrvKeySpaceInfType              tKeySpaceInf;

        HSM_L1_DrvRSASsaPkcs1V15SignType    tRsaSsaPkcs1v15Sign;
        HSM_L1_DrvRSASsaPssSignType         tRsaSsaPssSign;
        HSM_DrvLoadFirmwareInfType          tLoadFirmware;
        HSM_DrvSm2VerifyInfType             tSm2VerifyInf;
        HSM_DrvSm2GenZaInfType              tSm2GenZaInf;
        HSM_DrvFastTrngInfType              tFastTrueRngInf;
        HSM_L1_DrvUpdateSheKeyType          tUpdateSheKey;
    }tL1AlgCtx;

} HSM_L1_RtCtxType;

typedef struct {
    HSM_TriggerSrcType    eTriggerSrc;
    HSM_StopCbType        pStopCb;
    HSM_SendCommandCbType pSendCmdCb;
    HSM_GetAckStatCbType  pReadAckCb;
    HSM_CancelCmdCbType   pCancelCmdCb;
    HSM_CleanDcacheCbType pCleanDCache;
    HSM_CleanAndFlushDcacheCbType pCleanAndFlushDcache;
} HSM_L1_InitParmType;

void            hsm_u32_array_swap(hsm_uint32_t *pData, hsm_uint32_t u32WordCnt);
void            hsm_bidi_memcpy(void *pDstMem, const void *pSrcMem, hsm_uint32_t u32OpCnt, hsm_int32_t sOpDirection);
void            hsm_memcpy(void *pDstMem, const void *pSrcMem, hsm_uint32_t u32Cnt);
void            hsm_memset(void *pDstMem, hsm_uint8_t u8Val, hsm_uint32_t u32Cnt);
hsm_int32_t     hsm_memcmp(const void *pDst, const void *pSrc, hsm_uint32_t u32OpCnt);
HSM_StatusType  hsm_hash_get_result_byte_count(HFAM_MODE_E eMode, hsm_uint32_t *pRetByteCnt);
HSM_StatusType  hsm_1B4B_convert_from_idx(HSM_DataFormatType eDstFmt, void *pDst, hsm_uint32_t u32DstStartIdx, hsm_uint32_t u32DstBufByteSize, HSM_DataFormatType eSrcFmt, const void *pSrc, hsm_uint32_t u32SrcStartIdx, hsm_uint32_t u32SrcStopIdx);
void            hsm_rm_prefix_zeros(HSM_DataFormatType eInputFmt, const hsm_uint8_t *pData, hsm_uint32_t u32ByteCount, const hsm_uint8_t **ppActualData, hsm_uint32_t *pActualByteCnt);
void            hsm_core_swap_u32_array_pad(hsm_uint32_t *pAlignedDest, hsm_uint32_t u32DestWordCnt, const hsm_uint8_t *pSrc, hsm_uint32_t u32SrcOpByteCnt, hsm_uint8_t u8PadByte, HSM_BoolType bPadFromMSB, HSM_BoolType bSwap);
hsm_uint32_t    hsm_rm_prefix_split_bn_loadable_zero_words(hsm_uint32_t *pAlignedSrcPartA, hsm_uint32_t u32PartAWordCnt, hsm_uint32_t *pAlignedSrcPartB, hsm_uint32_t u32PartBWordCnt);
HSM_StatusType  hsm_aux_get_empty_data_hash(HSM_ShaAlgType eHash, const hsm_uint8_t **ppHashData, hsm_uint32_t *pByteCnt);

HSM_StatusType HSM_L1_CommonExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Abort(HSM_L1_RtCtxType *pCtx);
void           HSM_L1_Init(HSM_L1_RtCtxType *pCtx, HSM_L1_InitParmType *pParm);

HSM_StatusType HSM_L1_Md5SetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Md5ExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Md5(HSM_L1_RtCtxType *pCtx, const HSM_Ln_Md5Type *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_Md5_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm3SetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm3ExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm3(HSM_L1_RtCtxType *pCtx, const HSM_Ln_Sm3Type *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_Sm3_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ShaSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ShaExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sha(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ShaType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_Sha_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RngSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RngExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Rng(HSM_L1_RtCtxType *pCtx, const HSM_L1_RngType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_Rng_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_FastTrngSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_FastTrngExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_FastTrng(HSM_L1_RtCtxType *pCtx, const HSM_L1_FastRngType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_FastTrng_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_EccVerifySetupEnv(HSM_L1_RtCtxType *pCtx, hsm_uint32_t u32BitCnt);
HSM_StatusType HSM_L1_EccVerifyExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_EccVerify(HSM_L1_RtCtxType *pCtx, const HSM_L1_EccVerifyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_EccVerify_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_CMacSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_CMacExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_CMac(HSM_L1_RtCtxType *pCtx, const HSM_Ln_CMacType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_CMac_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_AesEncryptSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_AesEncryptExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_AesEncrypt(HSM_L1_RtCtxType *pCtx, const HSM_Ln_AesEncryptType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_AesEncrypt_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_AesDecryptSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_AesDecryptExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_AesDecrypt(HSM_L1_RtCtxType *pCtx, const HSM_Ln_AesDecryptType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_AesDecrypt_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm4EncryptSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm4EncryptExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm4Encrypt(HSM_L1_RtCtxType *pCtx, const HSM_Ln_Sm4EncryptType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_Sm4DecryptSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm4DecryptExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm4Decrypt(HSM_L1_RtCtxType *pCtx, const HSM_Ln_Sm4DecryptType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_ScatterHashSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ScatterHashInit(HSM_L1_RtCtxType *pCtx, const HSM_ShaAlgType eAlg, const HSM_Ln_ScatterHashType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_ScatterHashUpdate(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ScatterHashType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_ScatterHashFinal(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ScatterHashType *pCfg, const HSM_Ln_ResultBufInfoType *pResult, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_ScatterHash_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ScatterHashExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ScatterHashContextSave(HSM_L1_RtCtxType *pCtx, HSM_Ln_ScatterHashContextInfType * pContext);
HSM_StatusType HSM_L1_ScatterHashContextRestore(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ScatterHashContextInfType * pContext);
HSM_StatusType HSM_L1_ScatterHashSetMacCfg(HSM_L1_RtCtxType *pCtx, HSM_Ln_HashMacCfgType *ptCfg);

HSM_StatusType HSM_L1_ScatterCMacSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ScatterCMacInit(HSM_L1_RtCtxType *pCtx, const HSM_Ln_CMacCfgParmsType *pKeyCfg, const HSM_Ln_ScatterCMacType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_ScatterCMacUpdate(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ScatterCMacType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_ScatterCMacFinal(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ScatterCMacType *pCfg, const HSM_Ln_ResultBufInfoType *pResult, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_ScatterCMac_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ScatterCMacExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_ScatterCmacContextSave(HSM_L1_RtCtxType *pCtx, HSM_L1_ScatterCmacContextInfType * pContext);
HSM_StatusType HSM_L1_ScatterCmacContextRestore(HSM_L1_RtCtxType *pCtx, const HSM_L1_ScatterCmacContextInfType * pContext);

HSM_StatusType HSM_L1_EccSignSetupEnv(HSM_L1_RtCtxType *pCtx, hsm_uint32_t u32BitCnt);
HSM_StatusType HSM_L1_EccSign(HSM_L1_RtCtxType *pCtx, const HSM_L1_EccSignType *pCfg,  hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_EccSign_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_EccSignExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPssVerifySetupEnv(HSM_L1_RtCtxType *pCtx, hsm_uint32_t u32RsaBitCnt);
HSM_StatusType HSM_L1_RsaSsaPssVerify( HSM_L1_RtCtxType *pCtx, const HSM_Ln_RsaSsaPssVerifyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_RsaSsaPssVerify_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPssVerifyExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15VerifySetupEnv(HSM_L1_RtCtxType *pCtx, hsm_uint32_t u32RsaBitCnt);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15Verify( HSM_L1_RtCtxType *pCtx, const HSM_Ln_RsaSsaPkcs1v15VerifyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15Verify_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15VerifyExitEnv(HSM_L1_RtCtxType *pCtx);
void           HSM_L1_CleanEnv(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_Sm4Encrypt_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm4Decrypt_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_KeyImportSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeyImport(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ImportUserKeyExtType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_KeyImportExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeyImport_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_KeyExportSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeyExport(HSM_L1_RtCtxType *pCtx, const HSM_Ln_ExportUserKeyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_KeyExportExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeyExport_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_KeyRevokeSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeyRevoke(HSM_L1_RtCtxType *pCtx, hsm_uint32_t u32KeyId, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_KeyRevokeExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeyRevoke_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeySpaceTidyUpSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeySpaceTidyUp(HSM_L1_RtCtxType *pCtx, HSM_Ln_KeySpaceStatusType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_KeyUpdateSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeySpaceTidyup_Isr(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeySpaceTidyUpExitEnv(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_KeySpaceGetStatusSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeySpaceGetStatus(HSM_L1_RtCtxType *pCtx, HSM_Ln_KeySpaceStatusType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_KeySpaceGetStatusExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_KeySpaceGetStatus_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_GetKeyIdStatusSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_GetKeyIdStatus(HSM_L1_RtCtxType *pCtx, hsm_uint32_t u32KeyId, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_GetKeyIdStatusExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_GetKeyIdStatus_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_LoadFirmwareSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_LoadFirmware(HSM_L1_RtCtxType *pCtx, uint32 u32TimeoutMs);
HSM_StatusType HSM_L1_LoadFirmwareExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_LoadFirmware_Isr(HSM_L1_RtCtxType *pCtx);

#if ((FC7XXX_HSM_SUBSYSTEM_TYPE == FC7240_HSM_SUBSYSTEM) || (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM))
#else

HSM_StatusType HSM_L1_UpdateKeyIdContentSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_UpdateKeyIdContent(HSM_L1_RtCtxType *pCtx, const HSM_Ln_KeyManagerUpdateUserKeyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_UpdateKeyIdContentExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_UpdateKeyIdContent_Isr(HSM_L1_RtCtxType *pCtx);
#endif

HSM_StatusType HSM_L1_RsaSsaPkcs1V15SignSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15SignData(HSM_L1_RtCtxType *pCtx, const HSM_Ln_RsaSsaPkcs1V15SignDataType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15SignHash(HSM_L1_RtCtxType *pCtx, const HSM_Ln_RsaSsaPkcs1V15SignHashType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15SignExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPkcs1V15Sign_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_RsaSsaPssSignSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPssSignData(HSM_L1_RtCtxType *pCtx, const HSM_Ln_RsaSsaPssSignDataType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_RsaSsaPssSignHash(HSM_L1_RtCtxType *pCtx, const HSM_Ln_RsaSsaPssSignHashType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_RsaSsaPssSignExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_RsaSsaPssSign_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_Sm2GenZaSetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm2GenZaExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm2GenZa(HSM_L1_RtCtxType *pCtx, const HSM_LN_Sm2GenZaType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_Sm2GenZa_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_Sm2VerifySetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm2VerifyExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_Sm2Verify(HSM_L1_RtCtxType *pCtx, const HSM_L1_Sm2VerifyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_Sm2Verify_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType HSM_L1_UpdateSheKeySetupEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_UpdateSheKey(HSM_L1_RtCtxType *pCtx, const HSM_LN_UpdateSheKeyType *pCfg, hsm_uint32_t u32TimeoutMs);
HSM_StatusType HSM_L1_UpdateSheKeyExitEnv(HSM_L1_RtCtxType *pCtx);
HSM_StatusType HSM_L1_UpdateSheKey_Isr(HSM_L1_RtCtxType *pCtx);

HSM_StatusType hsm_l1_subjectpublicinfo_bitstring_geteccpublickeyinf(const hsm_uint8_t *pDer, HSM_L1_PKCS_EccPublicKeyInfType *pInf);
HSM_StatusType HSM_L1_PKCS1_GetRsaPrivateKeyInfFromDer(const hsm_uint8_t *pDer, HSM_L1_PKCS_RsaPrivateKeyInfType *pInf);
HSM_StatusType HSM_L1_PKCS1_GetEccPrivateKeyInfFromDer(const hsm_uint8_t *pDer, HSM_L1_PKCS_EccPrivateKeyInfType *pInf);
HSM_StatusType HSM_L1_PKCS8_GetPrivateKeyInfFromDer(const hsm_uint8_t *pDer, HSM_L1_PKCS8_PrivateKeyInfType *pInf);
HSM_StatusType HSM_L1_PKCS1_GetRsaPublicKeyInfFromDer(const hsm_uint8_t *pDer, HSM_L1_PKCS_RsaPublicKeyInfType *pInf);
HSM_StatusType HSM_L1_SubjectPublicInfo_GetPublicKeyInfFromDer(const hsm_uint8_t *pDer, HSM_L1_PublicKeyInfType *pInf);

void           HSM_L1_Ack_IrqHandler(void *pUpperCtx, HSM_StatusType eUpperRet);

#ifdef __cplusplus
}
#endif

#endif /* CRYPTO_LEVEL1API_H */

/** @} */

// clang-format on
