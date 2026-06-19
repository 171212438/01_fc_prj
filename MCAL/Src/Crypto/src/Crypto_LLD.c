/**
 *   @file    Crypto_LLD.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - Low level part of CRY driver.
 *   @details This file contains the low level part of the functions defined by AutoSAR.
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

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"
#include "Crypto_Level0Api.h"
#include "Crypto_Level1Api.h"
#include "Crypto_Level2Api.h"
#include "Crypto_LevelNApi.h"
#include "Crypto_LLD.h"

#include "Mcu_Pcc.h"
#include "Crypto_KeyManagement.h"
#include "Crypto_Hsm.h"
#include "SchM_Crypto.h"
#include "CDD_Mb_Types.h"
#include "Crypto_Cfg.h"


/* DET-related inclusions */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"               /* include DET API */
#endif

/* Under this switch (activated based on the configuration) is a non-autosar implementation */
/* Implementation is similar to other timeouts specified by AUTOSAR like for example in LIN SWS */
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)


#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#define NB_SIZE_BYTE                      (8UL)
#endif


#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
#define FIRMWARE_VERSION    0x45U
#endif


/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/****************** variables used by HSM - should be placed in shared section ********************/


/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLES - UNINITIALIZED
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLES - INITIALIZED
==================================================================================================*/


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

/************************** Input parameter check ******************************/



/************************** Algorithm processing *******************************/

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessEcbEncrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCbcEncrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCfbEncrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCtrEncrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessOfbEncrypt(void);
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessEcbDecrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCbcDecrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCfbDecrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCtrDecrypt(void);
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessOfbDecrypt(void);
#endif /* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_KEY_SPACE_CHECK_DURING_INIT == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_KeySpaceInit(void);
#endif /* (CRYPTO_KEY_SPACE_CHECK_DURING_INIT == STD_ON) */
#endif /* (CRYPTO_KEY_CONFIGURED == STD_ON) */

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_GetHashAlgo(Crypto_AlgorithmFamilyType family, uint32 *pu32Len, HSM_ShaAlgType *pAlg);
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_AES_Req(Crypto_ServiceInfoType eService, HSM_SymmEnDecryptAlgType eAlgType, HSM_FlexAesPadType ePadType);
/*==================================================================================================
*                                   AUXLIARY FUNCTION
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
/**
* @brief   The function Crypto_LLD_memcpy_byte copy byte by byte buffer provided.
*
* @param[in]      pointer on buffer destination.
* @param[in]      pointer on buffer source.
* @param[in]      number of bytes to copy
* @param[out]     None.
*
* @return         None
*/
CRYPTO_TEXT_SECTION void Crypto_LLD_memcpy_byte(uint8 *destination, const uint8 *source, uint32 num)
{
    uint32       cnt;
    const uint8 *src_addr   = source;
    uint8       *dest_addr  = destination;

    for (cnt = (uint32)0x0UL; cnt < num; cnt++)
    {
        dest_addr[cnt] = src_addr[cnt];
    }
}

CRYPTO_TEXT_SECTION void Crypto_LLD_memset_byte(uint8 *destination, uint8 value, uint32 num)
{
    uint32 cnt;
    uint8 *dest_addr = destination;
    for (cnt = (uint32)0x0UL; cnt < num; cnt++)
    {
        dest_addr[cnt] = value;
    }
}

#endif /* (CRYPTO_KEY_CONFIGURED == STD_ON) */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

static void Crypto_Prepare_Hsm(void)
{
    uint32  u32CoreId = Crypto_GetCoreID();

    Crypto_aCoreCtx[u32CoreId].pHsmCtx->eHsmAlgorithmRet = HSM_STATUS_ERROR;
    Crypto_aCoreCtx[u32CoreId].pHsmCtx->u8HsmAlgorithmFinished = 0U;
}

static HSM_StatusType Crypto_GetHsmRet(void)
{
    uint32  u32CoreId = Crypto_GetCoreID();

    return (HSM_StatusType)(Crypto_aCoreCtx[u32CoreId].pHsmCtx->eHsmAlgorithmRet);
}

static uint8 Crypto_GetHsmAlgorithmStopFlag(void)
{
    uint32  u32CoreId = Crypto_GetCoreID();

    MCAL_DATA_SYNC_BARRIER();
    MCAL_DATA_MEMORY_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();

    return Crypto_aCoreCtx[u32CoreId].pHsmCtx->u8HsmAlgorithmFinished;
}

#if (CRYPTO_NEED_CB_FEED_WDOG_ENABLE == STD_ON)
extern void CryptoFeedWdogCallback(void);
#endif

static uint32 Crypto_WaitHsmAlgorithmFinish(void)
{
    uint32 u32WaitTick = CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK;

    while ((!Crypto_GetHsmAlgorithmStopFlag()) && (u32WaitTick > 0))
    {
#if (CRYPTO_NEED_CB_FEED_WDOG_ENABLE == STD_ON)
#if (CRYPTO_NEED_CB_FEED_WDOG_NOOP == STD_OFF)
        CryptoFeedWdogCallback();
#endif
#endif
        u32WaitTick--;
    }

    return Crypto_GetHsmAlgorithmStopFlag();
}

#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_SM4_EncryptProcess(const HSM_Ln_Sm4EncryptType *pCfg)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;
    /* SM4 encrypt */
    uint32                   u32CoreId = Crypto_GetCoreID();


    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_Sm4EncryptSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_Sm4Encrypt(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), pCfg))
        {
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_Sm4EncryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_Sm4EncryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                    (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                }
            }
            else
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_24();
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_24();
            }
        }
        else
        {
            HSM_Ln_Sm4EncryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return eStatus;
}
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_SM4_DecryptProcess(const HSM_Ln_Sm4DecryptType *pCfg)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;
    uint32                   u32CoreId = Crypto_GetCoreID();

    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_Sm4DecryptSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_Sm4Decrypt(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), pCfg))
        {
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_Sm4DecryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_Sm4DecryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                    (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                }
            }
            else
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_26();
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_26();
            }
        }
        else
        {
            HSM_Ln_Sm4DecryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return eStatus;
}
#endif /* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_GetKey(uint32 u32KeyElementId, const Crypto_KeyTypeDescriptionType **pptKeyTypeDes, const Crypto_KeyElemDescType **pptKeyElementDesc)
{
    Std_ReturnType  eStatus = (Std_ReturnType)E_OK;
    uint32          u32KeyTypeIndex;
    uint32          u32KeyElementIndex;
    uint32          u32CoreId = Crypto_GetCoreID();

    u32KeyElementIndex = Crypto_LLD_FindKeyElement(
        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->cryptoKeyId,
        u32KeyElementId,  &u32KeyTypeIndex);

    if (u32KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
    {
        /* The key stored in the job does not contain any "key" element. */
        /* Report the failure and finalize the job. */
        eStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        *pptKeyTypeDes = &Crypto_CryptoKeyList_PC[Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[u32KeyTypeIndex];
        *pptKeyElementDesc = &(Crypto_CryptoKeyElementList_PC[u32KeyElementIndex]);
        /* The output pointer is valid. */
    }

    return eStatus;
}

#if ((CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)||(CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON))
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_SM4_Req(Crypto_ServiceInfoType eService, HSM_SymmEnDecryptAlgType eAlgType, HSM_FlexAesPadType ePadType)
{
    Std_ReturnType                          eStatus     = (Std_ReturnType)E_OK;
    const Crypto_KeyTypeDescriptionType    *pIVTypeDes  = NULL_PTR;
    const Crypto_KeyTypeDescriptionType    *pKeyTypeDes = NULL_PTR;
    const Crypto_KeyElemDescType           *pIVEleDes   = NULL_PTR;
    const Crypto_KeyElemDescType           *pKeyEleDes  = NULL_PTR;
    uint32                                  u32CoreId   = Crypto_GetCoreID();

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_KEY, &pKeyTypeDes, &pKeyEleDes);

    if ((eStatus == E_OK) &&
        ((eAlgType == HSM_SYMM_ENDECRYPT_MODE_CTR) || (eAlgType == HSM_SYMM_ENDECRYPT_MODE_CBC) || (eAlgType == HSM_SYMM_ENDECRYPT_MODE_CFB) || (eAlgType == HSM_SYMM_ENDECRYPT_MODE_OFB)))
    {
        /* Get the IV parameter, stored in the key */
        eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_IV, &pIVTypeDes, &pIVEleDes);
    }

    if (eStatus == E_OK)
    {
        if (eService == CRYPTO_ENCRYPT)
        {
#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
            HSM_Ln_Sm4EncryptType tParam = {0};

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.tNewKeyInf.pKeyAddr = (const uint8 *)pKeyTypeDes->CryptoKeyElementDataPtr;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = HSM_AES_KEY128;
            }
            else if (CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.eUseKeyType            = HSM_AES_KEY_CHIP_VENDOR_IFR;
                tParam.tVendorKeyInf.eKeyType = HSM_AES_KEY128;
            }
            else
            {
                tParam.u32KeyId = pKeyEleDes->u32KeyIdForStore;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = HSM_AES_KEY128;
            }

            tParam.eAesAlg             = TYPE_CONVERT(HSM_SymmEnDecryptAlgType, HSM_SymmEnDecryptAlgType, eAlgType);
            tParam.pDataInput          = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tParam.u32InputByteCnt     = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tParam.pDataOutput         = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
            tParam.u32OutputMemSize    = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

            if (eAlgType == HSM_SYMM_ENDECRYPT_MODE_ECB)
            {
                tParam.pIvData         = NULL_PTR;
            }
            else
            {
                tParam.pIvData         = (const uint8 *)pIVTypeDes->CryptoKeyElementDataPtr;
            }

            tParam.ePad                = ePadType;
            tParam.eInputFmt           = HSM_DATA_FORMAT_1B;
            tParam.eOutputFmt          = HSM_DATA_FORMAT_1B;
            tParam.pGenerateOutByteCnt = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
            eStatus = Crypto_LLD_SM4_EncryptProcess(&tParam);
#else
            eStatus = E_NOT_OK;
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */
        }
        else if (eService == CRYPTO_DECRYPT)
        {
#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
            HSM_Ln_Sm4DecryptType tParam = {0};

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.tNewKeyInf.pKeyAddr = (const uint8 *)pKeyTypeDes->CryptoKeyElementDataPtr;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = HSM_AES_KEY128;
            }
            else if (CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.eUseKeyType            = HSM_AES_KEY_CHIP_VENDOR_IFR;
                tParam.tVendorKeyInf.eKeyType = HSM_AES_KEY128;
            }
            else
            {
                tParam.u32KeyId = pKeyEleDes->u32KeyIdForStore;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = HSM_AES_KEY128;
            }

            tParam.eAesAlg             = TYPE_CONVERT(HSM_SymmEnDecryptAlgType, HSM_SymmEnDecryptAlgType, eAlgType);
            tParam.pDataInput          = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tParam.u32InputByteCnt     = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tParam.pDataOutput         = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
            tParam.u32OutputMemSize    = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

            if (eAlgType == HSM_SYMM_ENDECRYPT_MODE_ECB)
            {
                tParam.pIvData         = NULL_PTR;
            }
            else
            {
                tParam.pIvData         = (const uint8 *)pIVTypeDes->CryptoKeyElementDataPtr;
            }

            tParam.ePad                = ePadType;
            tParam.eInputFmt           = HSM_DATA_FORMAT_1B;
            tParam.eOutputFmt          = HSM_DATA_FORMAT_1B;
            tParam.pGenerateOutByteCnt = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

            eStatus = Crypto_LLD_SM4_DecryptProcess(&tParam);
#else
            eStatus = E_NOT_OK;
#endif/* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }


    return eStatus;
}
#endif /* (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)||(CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON) */

#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_Aes_EncryptProcess(const HSM_Ln_AesEncryptType *pCfg)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;
    /* SM4 encrypt */
    uint32                   u32CoreId = Crypto_GetCoreID();

    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_AesEncryptSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_AesEncrypt(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), pCfg))
        {
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_AesEncryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_AesEncryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                    (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                }
            }
            else
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_28();
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_28();
            }
        }
        else
        {
            HSM_Ln_AesEncryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return eStatus;
}
#endif/* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_Aes_DecryptProcess(const HSM_Ln_AesDecryptType *pCfg)
{
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;
    /* SM4 encrypt */
    uint32                   u32CoreId = Crypto_GetCoreID();

    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_AesDecryptSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_AesDecrypt(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), pCfg))
        {
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_AesDecryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_AesDecryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                    (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                }
            }
            else
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_30();
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_30();
            }
        }
        else
        {
            HSM_Ln_AesDecryptExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return eStatus;
}
#endif/* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */

#if ((CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)||(CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON))
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_AES_Req(Crypto_ServiceInfoType eService, HSM_SymmEnDecryptAlgType eAlgType, HSM_FlexAesPadType ePadType)
{
    Std_ReturnType                          eStatus = (Std_ReturnType)E_OK;
    const Crypto_KeyTypeDescriptionType    *pIVTypeDes = NULL_PTR;
    const Crypto_KeyTypeDescriptionType    *pKeyTypeDes = NULL_PTR;
    const Crypto_KeyElemDescType           *pIVEleDes   = NULL_PTR;
    const Crypto_KeyElemDescType           *pKeyEleDes  = NULL_PTR;
    uint32                                  u32CoreId = Crypto_GetCoreID();
    HSM_AesKeyBitCntType                    eKeyType;

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_KEY, &pKeyTypeDes, &pKeyEleDes);

    if ((eStatus == E_OK) &&
        ((eAlgType == HSM_SYMM_ENDECRYPT_MODE_CTR) || (eAlgType == HSM_SYMM_ENDECRYPT_MODE_CBC) || (eAlgType == HSM_SYMM_ENDECRYPT_MODE_CFB) || (eAlgType == HSM_SYMM_ENDECRYPT_MODE_OFB)))
    {
        /* Get the IV parameter, stored in the key */
        eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_IV, &pIVTypeDes, &pIVEleDes);
    }

    if (128U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
    {
        eKeyType = HSM_AES_KEY128;
    }
    else if (192U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
    {
        eKeyType = HSM_AES_KEY192;
    }
    else
    {
        eKeyType = HSM_AES_KEY256;
    }

    if (eStatus == E_OK)
    {
        if (eService == CRYPTO_ENCRYPT)
        {
#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
            HSM_Ln_AesEncryptType tParam = {0};

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.tNewKeyInf.pKeyAddr = (const uint8 *)pKeyTypeDes->CryptoKeyElementDataPtr;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = eKeyType;
            }
            else if(CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.eUseKeyType         = HSM_AES_KEY_CHIP_VENDOR_IFR;   
                tParam.tVendorKeyInf.eKeyType = eKeyType;
            }
            else
            {
                tParam.u32KeyId = pKeyEleDes->u32KeyIdForStore;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = eKeyType;
            }

            tParam.eAesAlg             = eAlgType;
            tParam.pDataInput          = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tParam.u32InputByteCnt     = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tParam.pDataOutput         = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
            tParam.u32OutputMemSize    = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

            if (eAlgType == HSM_SYMM_ENDECRYPT_MODE_ECB)
            {
                tParam.pIvData         = NULL_PTR;
            }
            else
            {
                tParam.pIvData         = (const uint8 *)pIVTypeDes->CryptoKeyElementDataPtr;
            }

            tParam.ePad                = ePadType;
            tParam.eInputFmt           = HSM_DATA_FORMAT_1B;
            tParam.eOutputFmt          = HSM_DATA_FORMAT_1B;
            tParam.pGenerateOutByteCnt = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

            eStatus = Crypto_LLD_Aes_EncryptProcess(&tParam);
#else
            eStatus = E_NOT_OK;
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */
        }
        else if (eService == CRYPTO_DECRYPT)
        {
#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
            HSM_Ln_AesDecryptType tParam = {0};

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.tNewKeyInf.pKeyAddr = (const uint8 *)pKeyTypeDes->CryptoKeyElementDataPtr;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = eKeyType;
            }
            else if(CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX == pKeyEleDes->u32CryptoStoreType)
            {
                tParam.u32KeyId = 0u;
                tParam.eUseKeyType         = HSM_AES_KEY_CHIP_VENDOR_IFR;   
                tParam.tVendorKeyInf.eKeyType = eKeyType;
            }
            else
            {
                tParam.u32KeyId = pKeyEleDes->u32KeyIdForStore;
                tParam.eUseKeyType         = HSM_AES_KEY_NEW;
                tParam.tNewKeyInf.eKeyType = eKeyType;
            }

            tParam.eAesAlg             = TYPE_CONVERT(HSM_SymmEnDecryptAlgType, HSM_SymmEnDecryptAlgType, eAlgType);
            tParam.pDataInput          = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tParam.u32InputByteCnt     = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tParam.pDataOutput         = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
            tParam.u32OutputMemSize    = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

            if (eAlgType == HSM_SYMM_ENDECRYPT_MODE_ECB)
            {
                tParam.pIvData         = NULL_PTR;
            }
            else
            {
                tParam.pIvData         = (const uint8 *)pIVTypeDes->CryptoKeyElementDataPtr;
            }

            tParam.ePad                = ePadType;
            tParam.eInputFmt           = HSM_DATA_FORMAT_1B;
            tParam.eOutputFmt          = HSM_DATA_FORMAT_1B;
            tParam.pGenerateOutByteCnt = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

            eStatus = Crypto_LLD_Aes_DecryptProcess(&tParam);
#else
            eStatus = E_NOT_OK;
#endif /* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }

    return eStatus;
}
#endif /* (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)||(CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON) */

/************************** Algorithm processing *******************************/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)

CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessSymmEncrypt(uint32 u32Mode)
{
    Std_ReturnType      eStatus     = (Std_ReturnType)E_OK;
    uint32              u32CoreId   = Crypto_GetCoreID();
    HSM_FlexAesPadType  ePadType;
    uint32              u32OutLen;

    if (CRYPTO_ALGOFAM_PADDING_PKCS7 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.secondaryFamily)
    {
        u32OutLen = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength + 16) & 0xFFFFFFF0u;
        ePadType  = HSM_FLEXAES_PAD_PKCS7;
    }
    else /* default zero padding */
    {
        u32OutLen = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength + 15) & 0xFFFFFFF0u;
        ePadType  = HSM_FLEXAES_PAD_ZERO;
    }

    /* [SWS_Crypto_00136] */
    if (*(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr) < u32OutLen)
    {
        eStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        if (CRYPTO_ALGOFAM_SM4 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
        {
            eStatus = Crypto_LLD_SM4_Req(CRYPTO_ENCRYPT, u32Mode, ePadType);
        }
        else if (CRYPTO_ALGOFAM_AES == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
        {
            eStatus = Crypto_LLD_AES_Req(CRYPTO_ENCRYPT, u32Mode, ePadType);
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }

    return eStatus;
}

/**
* @brief   The function Crypto_LLD_ProcessEcbEncrypt prepares a request for an ECB encryption.
* @details The function is responsible of formatting the request for an ECB encryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*                 CRYPTO_E_SMALL_BUFFER          : The output buffer is too small to store the result of the operation.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessEcbEncrypt(void)
{
    return Crypto_LLD_ProcessSymmEncrypt(HSM_SYMM_ENDECRYPT_MODE_ECB);
}

/**
* @brief   The function Crypto_LLD_ProcessCtrEncrypt prepares a request for a Ctr encryption.
* @details The function is responsible of formatting the request for a CBC encryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCtrEncrypt(void)
{
    return Crypto_LLD_ProcessSymmEncrypt(HSM_SYMM_ENDECRYPT_MODE_CTR);
}

/**
* @brief   The function Crypto_LLD_ProcessCbcEncrypt prepares a request for a CBC encryption.
* @details The function is responsible of formatting the request for a CBC encryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCbcEncrypt(void)
{
    return Crypto_LLD_ProcessSymmEncrypt(HSM_SYMM_ENDECRYPT_MODE_CBC);
}

/**
* @brief   The function Crypto_LLD_ProcessCfbEncrypt prepares a request for a CFB encryption.
* @details The function is responsible of formatting the request for a CBC encryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessCfbEncrypt(void)
{
    return Crypto_LLD_ProcessSymmEncrypt(HSM_SYMM_ENDECRYPT_MODE_CFB);
}

/**
* @brief   The function Crypto_LLD_ProcessOfbEncrypt prepares a request for a OFB encryption.
* @details The function is responsible of formatting the request for a CBC encryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessOfbEncrypt(void)
{
    return Crypto_LLD_ProcessSymmEncrypt(HSM_SYMM_ENDECRYPT_MODE_OFB);
}
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */


#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessSymmDecrypt(uint32 u32Mode)
{
    Std_ReturnType      eStatus     = (Std_ReturnType)E_OK;
    uint32              u32CoreId   = Crypto_GetCoreID();
    HSM_FlexAesPadType  ePadType;
    uint32              u32OutLen   = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;

    if (CRYPTO_ALGOFAM_PADDING_PKCS7 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.secondaryFamily)
    {
        ePadType  = HSM_FLEXAES_PAD_PKCS7;
    }
    else /* default zero padding */
    {
        ePadType  = HSM_FLEXAES_PAD_ZERO;
    }

    /* [SWS_Crypto_00136] */
    if ((0u != (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength & 0xfu)) ||
        (*(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr) < u32OutLen))
    {
        eStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        if (CRYPTO_ALGOFAM_SM4 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
        {
            eStatus = Crypto_LLD_SM4_Req(CRYPTO_DECRYPT, u32Mode, ePadType);
        }
        else if (CRYPTO_ALGOFAM_AES == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
        {
            eStatus = Crypto_LLD_AES_Req(CRYPTO_DECRYPT, u32Mode, ePadType);
        }
        else
        {
            eStatus = (Std_ReturnType)E_NOT_OK;
        }
    }

    return eStatus;
}

/**
* @brief   The function Crypto_LLD_ProcessEcbDecrypt prepares a request for an ECB decryption.
* @details The function is responsible of formatting the request for an ECB decryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*                 CRYPTO_E_SMALL_BUFFER          : The output buffer is too small to store the result of the operation.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_LLD_ProcessEcbDecrypt(void)
{
    return Crypto_LLD_ProcessSymmDecrypt(HSM_SYMM_ENDECRYPT_MODE_ECB);
}

/**
* @brief   The function Crypto_LLD_ProcessCtrDecrypt prepares a request for a Ctr decryption.
* @details The function is responsible of formatting the request for a CBC decryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType  Crypto_LLD_ProcessCtrDecrypt(void)
{
    return Crypto_LLD_ProcessSymmDecrypt( HSM_SYMM_ENDECRYPT_MODE_CTR);
}

/**
* @brief   The function Crypto_LLD_ProcessCbcDecrypt prepares a request for a CBC decryption.
* @details The function is responsible of formatting the request for a CBC decryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType  Crypto_LLD_ProcessCbcDecrypt(void)
{
    return Crypto_LLD_ProcessSymmDecrypt(HSM_SYMM_ENDECRYPT_MODE_CBC);
}

/**
* @brief   The function Crypto_LLD_ProcessCfbDecrypt prepares a request for a CFB decryption.
* @details The function is responsible of formatting the request for a CBC decryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType  Crypto_LLD_ProcessCfbDecrypt(void)
{
    return Crypto_LLD_ProcessSymmDecrypt(HSM_SYMM_ENDECRYPT_MODE_CFB);
}

/**
* @brief   The function Crypto_LLD_ProcessOfbDecrypt prepares a request for a OFB decryption.
* @details The function is responsible of formatting the request for a CBC decryption request.
*
* @param[in]      uint32 KeySlot : physical slot of the key to use.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and prepared in shared memory.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType  Crypto_LLD_ProcessOfbDecrypt(void)
{
    return Crypto_LLD_ProcessSymmDecrypt(HSM_SYMM_ENDECRYPT_MODE_OFB);
}
#endif /* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType  Crypto_LLD_ProcessMd5Req(const HSM_Ln_HashMacCfgType *pMacCfg)
{
    Std_ReturnType  eStatus      = (Std_ReturnType)E_OK;
    HSM_Ln_Md5Type  tParamType = {0};
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();

    if (pMacCfg != NULL_PTR)
    {
        tParamType.tCfg.bGenerateMacEn          = pMacCfg->bGenerateMacEn;
        tParamType.tCfg.eMacType                = pMacCfg->eMacType;

        if (HSM_TRUE == (pMacCfg->bKeyUseId))
        {
            tParamType.tCfg.tKeyInfo.u32KeyId       = pMacCfg->tHashMacKeyInfo.u32KeyId;
        }
        else
        {
            tParamType.tCfg.tKeyInfo.pKeyData                = pMacCfg->tHashMacKeyInfo.pKeyData;
        }

        tParamType.tCfg.u32KeyByteCnt           = pMacCfg->u32KeyByteCnt;
        tParamType.tCfg.u32GenerateMacByteCnt   = pMacCfg->u32GenerateMacByteCnt;
    }
    else
    {
        tParamType.tCfg.bGenerateMacEn         = HSM_FALSE;
    }

    if (HSM_FALSE == tParamType.tCfg.bGenerateMacEn)
    {
        tParamType.bKeyUseId = HSM_FALSE;
    }
    else
    {
        tParamType.bKeyUseId = pMacCfg->bKeyUseId;
    }

    tParamType.tCfg.u32InputDataByteCnt    = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
    tParamType.tCfg.pInputData             = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;/* PRQA S 0310 */
    tParamType.pResult                     = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
    tParamType.u32ResultBufSize            = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
    tParamType.pResultSize                 = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
    tParamType.eInputFmt                   = HSM_DATA_FORMAT_1B;
    tParamType.eOutputFmt                  = HSM_DATA_FORMAT_1B;

    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_Md5SetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_Md5(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tParamType))
        {
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_Md5ExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_Md5ExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                    (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                }
            }
            else
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_38();
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_38();
            }
        }
        else
        {
            HSM_Ln_Md5ExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return eStatus;
}
#endif /* CRYPTO_HASH_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType  Crypto_LLD_ProcessSm3Req(const HSM_Ln_HashMacCfgType *pMacCfg)
{
    Std_ReturnType  eStatus      = (Std_ReturnType)E_OK;
    HSM_Ln_Sm3Type  tParamType = {0};
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();

    if (pMacCfg != NULL_PTR)
    {
        tParamType.tCfg.bGenerateMacEn          = pMacCfg->bGenerateMacEn;
        tParamType.tCfg.eMacType                = pMacCfg->eMacType;

        if (HSM_TRUE == (pMacCfg->bKeyUseId))
        {
            tParamType.tCfg.tKeyInfo.u32KeyId                = pMacCfg->tHashMacKeyInfo.u32KeyId;
        }
        else
        {
            tParamType.tCfg.tKeyInfo.pKeyData                = pMacCfg->tHashMacKeyInfo.pKeyData;
        }

        tParamType.tCfg.u32KeyByteCnt           = pMacCfg->u32KeyByteCnt;
        tParamType.tCfg.u32GenerateMacByteCnt   = pMacCfg->u32GenerateMacByteCnt;
    }
    else
    {
        tParamType.tCfg.bGenerateMacEn         = HSM_FALSE;
    }

    if (HSM_FALSE == tParamType.tCfg.bGenerateMacEn)
    {
        tParamType.bKeyUseId = HSM_FALSE;
    }
    else
    {
        tParamType.bKeyUseId = pMacCfg->bKeyUseId;
    }

    tParamType.tCfg.u32InputDataByteCnt    = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
    tParamType.tCfg.pInputData             = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;/* PRQA S 0310 */
    tParamType.pResult                     = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
    tParamType.u32ResultBufSize            = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
    tParamType.pResultSize                 = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
    tParamType.eInputFmt                   = HSM_DATA_FORMAT_1B;
    tParamType.eOutputFmt                  = HSM_DATA_FORMAT_1B;

    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_Sm3SetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_Sm3(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tParamType))
        {
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_Sm3ExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_Sm3ExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                    (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                }
            }
            else
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_40();
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_40();
            }
        }
        else
        {
            HSM_Ln_Sm3ExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return eStatus;
}
#endif /* CRYPTO_HASH_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType  Crypto_LLD_ProcessShaReq(const HSM_Ln_HashMacCfgType *pMacCfg)
{
    Std_ReturnType  eStatus      = (Std_ReturnType)E_OK;
    HSM_Ln_ShaType  tParamType = {0};
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();

    if (CRYPTO_ALGOFAM_SHA1 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        tParamType.eAlg = HSM_SHA_160;
    }
    else if (CRYPTO_ALGOFAM_SHA2_224 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        tParamType.eAlg = HSM_SHA_224;
    }
    else if (CRYPTO_ALGOFAM_SHA2_256 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        tParamType.eAlg = HSM_SHA_256;
    }
    else if (CRYPTO_ALGOFAM_SHA2_384 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        tParamType.eAlg = HSM_SHA_384;
    }
    else if (CRYPTO_ALGOFAM_SHA2_512 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        tParamType.eAlg = HSM_SHA_512;
    }
    else if (CRYPTO_ALGOFAM_SHA2_512_224 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        tParamType.eAlg = HSM_SHA_512_224;
    }
    /* No need to check if it is a supported Algo here because it is already check by Crypto_CheckCapabilities */
    else if (CRYPTO_ALGOFAM_SHA2_512_256 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        tParamType.eAlg = HSM_SHA_512_256;
    }
    else
    {
        eStatus = E_NOT_OK;
    }

    if (E_OK == eStatus)
    {
        if (pMacCfg != NULL_PTR)
        {
            tParamType.tCfg.bGenerateMacEn          = pMacCfg->bGenerateMacEn;
            tParamType.tCfg.eMacType                = pMacCfg->eMacType;

            if (HSM_TRUE == (pMacCfg->bKeyUseId))
            {
                tParamType.tCfg.tKeyInfo.u32KeyId                = pMacCfg->tHashMacKeyInfo.u32KeyId;
            }
            else
            {
                tParamType.tCfg.tKeyInfo.pKeyData                = pMacCfg->tHashMacKeyInfo.pKeyData;
            }

            tParamType.tCfg.u32KeyByteCnt           = pMacCfg->u32KeyByteCnt;
            tParamType.tCfg.u32GenerateMacByteCnt   = pMacCfg->u32GenerateMacByteCnt;
        }
        else
        {
            tParamType.tCfg.bGenerateMacEn         = HSM_FALSE;
        }

        if (HSM_FALSE == tParamType.tCfg.bGenerateMacEn)
        {
            tParamType.bKeyUseId = HSM_FALSE;
        }
        else
        {
            tParamType.bKeyUseId = pMacCfg->bKeyUseId;
        }

        tParamType.tCfg.u32InputDataByteCnt    = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
        tParamType.tCfg.pInputData             = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;/* PRQA S 0310 */
        tParamType.pResult                     = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
        tParamType.u32ResultBufSize            = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
        tParamType.pResultSize                 = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
        tParamType.eInputFmt                   = HSM_DATA_FORMAT_1B;
        tParamType.eOutputFmt                  = HSM_DATA_FORMAT_1B;

        Crypto_Prepare_Hsm();

        if (HSM_STATUS_SUCCESS == HSM_Ln_ShaSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
        {
            if (HSM_STATUS_SUCCESS == HSM_Ln_Sha(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tParamType))
            {
                if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                {
                    if (0u != Crypto_WaitHsmAlgorithmFinish())
                    {
                        eRet = Crypto_GetHsmRet();
                        HSM_Ln_ShaExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    }
                    else
                    {
                        HSM_Ln_ShaExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                        /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                    }
                }
                else
                {
                    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_40();
                    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_40();
                }
            }
            else
            {
                HSM_Ln_ShaExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                eRet = HSM_STATUS_ERROR;
            }
        }
        else
        {
            eRet = HSM_STATUS_ERROR;
        }

        if (HSM_STATUS_SUCCESS != eRet)
        {
            eStatus = E_NOT_OK;
        }
        else
        {
            ;
        }
    }

    return eStatus;
}
#endif /* CRYPTO_HASH_SERVICE_ENABLE == STD_ON */

/************************** Service request processing *******************************/
/**
* @brief   The function Crypto_LLD_ProcessHashReq processes a HASH request.
* @details The function is responsible of the sequence to proceed to a HASH operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      pMacCfg the HMAC/SMAC configuration
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessHashReq(const HSM_Ln_HashMacCfgType *pMacCfg)
{
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;
    uint32         u32CoreId   = Crypto_GetCoreID();

    if (CRYPTO_ALGOFAM_MD5 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        eStatus = Crypto_LLD_ProcessMd5Req(pMacCfg);
    }
    else if (CRYPTO_ALGOFAM_SM3 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        eStatus = Crypto_LLD_ProcessSm3Req(pMacCfg);
    }
    else
    {
        eStatus = Crypto_LLD_ProcessShaReq(pMacCfg);
    }

    return (Std_ReturnType)eStatus;
}
#endif/* CRYPTO_HASH_SERVICE_ENABLE == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessScatterHashStartReq processes a CRYPTO_HASH request for start mode .
* @details The function is responsible of the sequence to proceed to a hash operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessScatterHashStartReq(const HSM_Ln_HashMacCfgType *pMacCfg)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();
    HSM_HashAlgType eHashAlg    = HSM_HASH_MD5;
    Crypto_AlgorithmFamilyType eCurrentAlgoFamily;
    HSM_Ln_RtCtxType *pLnRtCtx;
    HSM_Ln_ScatterHashType tScatterHashInit = {0};

    eCurrentAlgoFamily = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family;

    if (CRYPTO_ALGOFAM_SHA1 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SHA_160;
    }
    else if (CRYPTO_ALGOFAM_SHA2_224 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SHA_224;
    }
    else if (CRYPTO_ALGOFAM_SHA2_256 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SHA_256;
    }
    else if (CRYPTO_ALGOFAM_SHA2_384 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SHA_384;
    }
    else if (CRYPTO_ALGOFAM_SHA2_512 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SHA_512;
    }
    else if (CRYPTO_ALGOFAM_SHA2_512_224 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SHA_512_224;
    }
    else if (CRYPTO_ALGOFAM_SHA2_512_256 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SHA_512_256;
    }
    else if (CRYPTO_ALGOFAM_SM3 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_SM3;
    }
    else if(CRYPTO_ALGOFAM_MD5 == eCurrentAlgoFamily)
    {
        eHashAlg = HSM_HASH_MD5;
    }
    else
    {
        eStatus = E_NOT_OK;
    }

    if(E_OK == eStatus)
    {
        Crypto_Prepare_Hsm();
        pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);

        if(HSM_STATUS_SUCCESS == HSM_Ln_ScatterHashSetupEnv(pLnRtCtx))
        {
            if(NULL_PTR != pMacCfg)
            {
                eRet = HSM_Ln_ScatterHashSetMacCfg(pLnRtCtx, (HSM_Ln_HashMacCfgType *)pMacCfg);
            }

            if(HSM_STATUS_SUCCESS == eRet)
            {
                tScatterHashInit.eDataFmt = HSM_DATA_FORMAT_1B;
                tScatterHashInit.pData = NULL_PTR;
                tScatterHashInit.u32DataSize = 0U;

                eRet = HSM_Ln_ScatterHashInit(pLnRtCtx, eHashAlg, &tScatterHashInit);

                if(HSM_STATUS_AGAIN != eRet)
                {
                    (void)HSM_Ln_ScatterHashExitEnv(pLnRtCtx);
                    eStatus = (Std_ReturnType)E_NOT_OK;
                }
            }
            else
            {
                eStatus = (Std_ReturnType)E_NOT_OK;
            }
        }
    }

    return (Std_ReturnType)eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
#endif /* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */

/**
* @brief   The function Crypto_LLD_ProcessScatterMacGenUpdateReq processes a CRYPTO_HASH request for update mode .
* @details The function is responsible of the sequence to proceed to a hash operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessScatterHashUpdateReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();
    HSM_Ln_RtCtxType *pLnRtCtx;
    HSM_Ln_ScatterHashType tScatterHashUpdate = {0};

    tScatterHashUpdate.eDataFmt = HSM_DATA_FORMAT_1B;
    tScatterHashUpdate.pData = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;/* PRQA S 0310 */
    tScatterHashUpdate.u32DataSize = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;

    Crypto_Prepare_Hsm();
    pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);
    eRet = HSM_Ln_ScatterHashUpdate(pLnRtCtx, &tScatterHashUpdate);

    if (HSM_STATUS_SUCCESS == eRet)
    {
        if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
        {
            if (0u != Crypto_WaitHsmAlgorithmFinish())
            {
                eRet = Crypto_GetHsmRet();
                if(HSM_STATUS_SUCCESS != eRet)
                {
                    (void)HSM_Ln_ScatterHashExitEnv(pLnRtCtx);
                }
            }
            else
            {
                (void)HSM_Ln_ScatterHashExitEnv(pLnRtCtx);
                eRet = HSM_STATUS_HW_ERR;
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
            }
       }
       else
       {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_67();
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_67();
       }
    }
    else
    {
        if(HSM_STATUS_AGAIN != eRet)
        {
            (void)HSM_Ln_ScatterHashExitEnv(pLnRtCtx);
            eRet = HSM_STATUS_ERROR;
        }
    }

    if ((HSM_STATUS_SUCCESS != eRet)&&(HSM_STATUS_AGAIN != eRet))
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return (Std_ReturnType)eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
#endif /* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */

/**
* @brief   The function Crypto_LLD_ProcessScatterMacGenFinalReq processes a CRYPTO_HASH request for finally mode .
* @details The function is responsible of the sequence to proceed to a hash operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessScatterHashFinishReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();
    HSM_Ln_RtCtxType *pLnRtCtx;
    HSM_Ln_ScatterHashType tScatterHashFinally = {0};
    HSM_Ln_ResultBufInfoType tScatterHashResult;

    tScatterHashFinally.eDataFmt = HSM_DATA_FORMAT_1B;
    tScatterHashFinally.pData = NULL_PTR;
    tScatterHashFinally.u32DataSize = 0u;

    tScatterHashResult.eDataFmt = HSM_DATA_FORMAT_1B;
    tScatterHashResult.pData = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
    tScatterHashResult.pDataSize = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr;
    tScatterHashResult.u32DataBufSize = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

    Crypto_Prepare_Hsm();
    pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);
    eRet = HSM_Ln_ScatterHashFinal(pLnRtCtx, &tScatterHashFinally,&tScatterHashResult);

    if (HSM_STATUS_SUCCESS == eRet)
    {
        if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
        {
            if (Crypto_WaitHsmAlgorithmFinish())
            {
                eRet = Crypto_GetHsmRet();
                (void)HSM_Ln_ScatterHashExitEnv(pLnRtCtx);
            }
            else
            {
                (void)HSM_Ln_ScatterHashExitEnv(pLnRtCtx);
                eRet = HSM_STATUS_HW_ERR;
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
            }
        }
        else
        {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_68();
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_68();
        }
    }
    else
    {
        (void)HSM_Ln_ScatterHashExitEnv(pLnRtCtx);
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return (Std_ReturnType)eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
#endif /* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
/**
* @brief   The function Crypto_LLD_ProcessMacGenReq processes a CRYPTO_MACGENERATE request.
* @details The function is responsible of the sequence to proceed to a MAC generation operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessMacGenReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();

    const Crypto_KeyTypeDescriptionType *pKeyTypePtr = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyEleDesc = NULL_PTR;
    HSM_ShaAlgType                       eTemp;
    HSM_AesKeyBitCntType                    eKeyType;

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_MAC_KEY, &pKeyTypePtr, &pKeyEleDesc);

    if (E_OK == eStatus)
    {
        if (CRYPTO_ALGOMODE_HMAC == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            HSM_Ln_HashMacCfgType tParam = {0};

            tParam.bGenerateMacEn = HSM_TRUE;
            tParam.eMacType       = HSM_HFAM_MAC_HMAC;

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDesc->u32CryptoStoreType)
            {
                tParam.tHashMacKeyInfo.pKeyData = (const uint8 *)pKeyTypePtr->CryptoKeyElementDataPtr;
                tParam.u32KeyByteCnt = pKeyEleDesc->CryptoKeyElementSize;
                tParam.bKeyUseId = HSM_FALSE;
            }
            else
            {
                tParam.tHashMacKeyInfo.u32KeyId = pKeyEleDesc->u32KeyIdForStore;
                tParam.u32KeyByteCnt = pKeyEleDesc->CryptoKeyElementSize;
                tParam.bKeyUseId = HSM_TRUE;
            }

            tParam.eKeyDataFmt = HSM_DATA_FORMAT_1B;

            eStatus = Crypto_LLD_GetHashAlgo(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family, &(tParam.u32GenerateMacByteCnt), &eTemp);
            if (E_OK == eStatus)
            {
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
                eStatus = Crypto_LLD_ProcessHashReq(&tParam);
#endif /* CRYPTO_HASH_SERVICE_ENABLE == STD_ON */
            }
        }
        else if (CRYPTO_ALGOMODE_CMAC == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            HSM_Ln_CMacType tParamType = {0};

            if (CRYPTO_ALGOFAM_SM4 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
            {
                eKeyType = HSM_AES_KEY128;/*128bit key only*/
                tParamType.u32GenMacByteCnt    = 16U;
                tParamType.eEngine             = HSM_XCMAC_ENGINE_SM4;
            }
            else if (CRYPTO_ALGOFAM_AES == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
            {
                tParamType.eEngine             = HSM_XCMAC_ENGINE_AES;

                if (256U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
                {
                    eKeyType = HSM_AES_KEY256;
                    tParamType.u32GenMacByteCnt    = 16U;
                }
                else if (192U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
                {
                    eKeyType = HSM_AES_KEY192;
                    tParamType.u32GenMacByteCnt    = 16U;
                }
                else if (128U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
                {
                    eKeyType = HSM_AES_KEY128;
                    tParamType.u32GenMacByteCnt    = 16U;
                }
                else
                {
                    eStatus = E_NOT_OK;
                }
            }
            else
            {
                eStatus = E_NOT_OK;
            }

            if (E_OK == eStatus)
            {
                if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDesc->u32CryptoStoreType)
                {
                    tParamType.u32NewKeyId = 0u;
                    tParamType.eUseKeyType = HSM_AES_KEY_NEW;
                    tParamType.tNewKeyInf.pKeyAddr = (const uint8 *)pKeyTypePtr->CryptoKeyElementDataPtr;
                    tParamType.tNewKeyInf.eKeyType = eKeyType;
                }
                else if (CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX == pKeyEleDesc->u32CryptoStoreType)
                {
                    tParamType.u32NewKeyId = 0u;
                    tParamType.eUseKeyType = HSM_AES_KEY_CHIP_VENDOR_IFR;
                    tParamType.tVendorKeyInf.eKeyType = eKeyType;
                }
                else
                {
                    tParamType.u32NewKeyId = pKeyEleDesc->u32KeyIdForStore;
                    tParamType.eUseKeyType = HSM_AES_KEY_NEW;
                    tParamType.tNewKeyInf.pKeyAddr = NULL_PTR;
                    tParamType.tNewKeyInf.eKeyType = eKeyType;
                }

                tParamType.bCheckMacEn          = HSM_FALSE;
                tParamType.pCheckExternalMac    = NULL_PTR;
                tParamType.u32CheckByteCnt      = 0u;
                tParamType.pDataInput           = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;/* PRQA S 0310,0311 */
                tParamType.u32InputByteCnt      = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
                tParamType.pDataOutput          = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;/* PRQA S 0310 */
                tParamType.u32ResultBufSize     = *((uint32 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
                tParamType.pResultSize          = ((uint32 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
                tParamType.pVerifyResult        = NULL_PTR;
                tParamType.eInputFmt            = HSM_DATA_FORMAT_1B;
                tParamType.eOutputFmt           = HSM_DATA_FORMAT_1B;

                Crypto_Prepare_Hsm();

                if (HSM_STATUS_SUCCESS == HSM_Ln_CMacSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
                {
                    if (HSM_STATUS_SUCCESS == HSM_Ln_CMac(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tParamType))
                    {
                        if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                        {
                            if (0u != Crypto_WaitHsmAlgorithmFinish())
                            {
                                eRet = Crypto_GetHsmRet();
                                HSM_Ln_CMacExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                            }
                            else
                            {
                                HSM_Ln_CMacExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                                eRet = HSM_STATUS_TIMEOUT_ERR;

   #if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                                /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                                (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
   #endif

                            }
                        }
                        else
                        {
                            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_44();
                            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_44();
                        }
                    }
                    else
                    {
                        HSM_Ln_CMacExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    eRet = HSM_STATUS_ERROR;
                }

                if (HSM_STATUS_SUCCESS != eRet)
                {
                    eStatus = E_NOT_OK;
                }
                else
                {
                    ;
                }
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }

    return (Std_ReturnType)eStatus;
}
#endif /* CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessMacVerifReq processes a CRYPTO_MACVERIFY request.
* @details The function is responsible of the sequence to proceed to a MAC verification operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessMacVerifReq(void)
{
    Std_ReturnType                       eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType                       eRet        = HSM_STATUS_SUCCESS;
    uint32                               u32CoreId   = Crypto_GetCoreID();
    HSM_Ln_CMacType                      tParamType  = {0};
    const Crypto_KeyTypeDescriptionType *pKeyTypePtr = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyEleDesc = NULL_PTR;
    HSM_AesKeyBitCntType                    eKeyType;

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_MAC_KEY, &pKeyTypePtr, &pKeyEleDesc);

    if (E_OK == eStatus)
    {

        if (CRYPTO_ALGOFAM_SM4 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
        {
            eKeyType = HSM_AES_KEY128;/*128bit key only*/
            tParamType.u32GenMacByteCnt    = 16U;
            tParamType.eEngine             = HSM_XCMAC_ENGINE_SM4;
        }
        else if (CRYPTO_ALGOFAM_AES == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
        {
            tParamType.eEngine             = HSM_XCMAC_ENGINE_AES;

            if (256U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
            {
                eKeyType = HSM_AES_KEY256;
                tParamType.u32GenMacByteCnt    = 16U;
            }
            else if (192U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
            {
                eKeyType = HSM_AES_KEY192;
                tParamType.u32GenMacByteCnt    = 16U;
            }
            else if (128U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength)
            {
                eKeyType = HSM_AES_KEY128;
                tParamType.u32GenMacByteCnt    = 16U;
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }

        if (E_OK == eStatus)
        {
            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDesc->u32CryptoStoreType)
            {
                tParamType.u32NewKeyId = 0u;
                tParamType.eUseKeyType = HSM_AES_KEY_NEW;
                tParamType.tNewKeyInf.pKeyAddr = (const uint8 *)pKeyTypePtr->CryptoKeyElementDataPtr;
                tParamType.tNewKeyInf.eKeyType = eKeyType;
            }
            else if (CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX == pKeyEleDesc->u32CryptoStoreType)
            {
                tParamType.u32NewKeyId = 0u;
                tParamType.eUseKeyType = HSM_AES_KEY_CHIP_VENDOR_IFR;
                tParamType.tVendorKeyInf.eKeyType = eKeyType;
            }
            else
            {
                tParamType.u32NewKeyId = pKeyEleDesc->u32KeyIdForStore;
                tParamType.eUseKeyType = HSM_AES_KEY_NEW;
                tParamType.tNewKeyInf.pKeyAddr = NULL_PTR;
                tParamType.tNewKeyInf.eKeyType = eKeyType;
            }

            tParamType.bCheckMacEn          = HSM_TRUE;
            tParamType.pCheckExternalMac    = (uint8 *) Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputPtr;
            tParamType.u32CheckByteCnt      = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputLength;
            tParamType.pDataInput           = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;/* PRQA S 0310,0311 */
            tParamType.u32InputByteCnt      = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tParamType.pDataOutput          = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;/* PRQA S 0310 */
            tParamType.u32ResultBufSize     = *((uint32 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
            tParamType.pResultSize          = ((uint32 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);
            tParamType.pVerifyResult        = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.verifyPtr);
            tParamType.eInputFmt            = HSM_DATA_FORMAT_1B;
            tParamType.eOutputFmt           = HSM_DATA_FORMAT_1B;

            Crypto_Prepare_Hsm();

            if (HSM_STATUS_SUCCESS == HSM_Ln_CMacSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
            {
                if (HSM_STATUS_SUCCESS == HSM_Ln_CMac(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tParamType))
                {
                    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                    {
                        if (0u != Crypto_WaitHsmAlgorithmFinish())
                        {
                            eRet = Crypto_GetHsmRet();
                            HSM_Ln_CMacExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        }
                        else
                        {
                            HSM_Ln_CMacExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                            eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                            /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                            (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                        }
                    }
                    else
                    {
                        SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_46();
                        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_46();
                    }
                }
                else
                {
                    HSM_Ln_CMacExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_ERROR;
                }
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
            }

            if (HSM_STATUS_SUCCESS != eRet)
            {
                eStatus = E_NOT_OK;
            }
            else
            {
                ;
            }

        }
    }

    return (Std_ReturnType)eStatus;
}

#endif /* CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessScatterMacGenInitReq processes a CRYPTO_MACGENERATE request for start mode .
* @details The function is responsible of the sequence to proceed to a MAC generation operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if ((CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON))
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessScatterMacStartReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();
    HSM_AesKeyBitCntType eKeyType;
    Crypto_AlgorithmFamilyType eCurrentAlgoFamily;
    uint32          u32CurrentAlgoKeyLength;
    const Crypto_KeyTypeDescriptionType *pKeyTypePtr = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyEleDesc = NULL_PTR;

    HSM_Ln_RtCtxType *pLnRtCtx;
    HSM_Ln_ScatterCMacType tScatterCmacInit = {0};
    HSM_Ln_CMacCfgParmsType tParamType = {0};

    eCurrentAlgoFamily = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family;
    u32CurrentAlgoKeyLength = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_MAC_KEY, &pKeyTypePtr, &pKeyEleDesc);

    if (E_OK == eStatus)
    {
        if (CRYPTO_ALGOFAM_SM4 == eCurrentAlgoFamily)
        {
            eKeyType = HSM_AES_KEY128;/*128bit key only*/
            tParamType.eBackend             = HSM_AESM_BACKEND_SM4;
        }
        else if (CRYPTO_ALGOFAM_AES == eCurrentAlgoFamily)
        {
            tParamType.eBackend             = HSM_AESM_BACKEND_AES;

            if (256U == u32CurrentAlgoKeyLength)
            {
                eKeyType = HSM_AES_KEY256;
            }
            else if (192U == u32CurrentAlgoKeyLength)
            {
                eKeyType = HSM_AES_KEY192;
            }
            else if (128U == u32CurrentAlgoKeyLength)
            {
                eKeyType = HSM_AES_KEY128;
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }

    if(E_OK == eStatus)
    {
        if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyEleDesc->u32CryptoStoreType)
        {
            tParamType.u32KeyId = 0u;
            tParamType.eUseKeyType = HSM_AES_KEY_NEW;
            tParamType.pKeyAddr = (const uint8 *)pKeyTypePtr->CryptoKeyElementDataPtr;
            tParamType.eKeyType = eKeyType;
        }
        else if (CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX == pKeyEleDesc->u32CryptoStoreType)
        {
            tParamType.u32KeyId = 0u;
            tParamType.eUseKeyType = HSM_AES_KEY_CHIP_VENDOR_IFR;
            tParamType.eKeyType = eKeyType;
        }
        else
        {
            tParamType.u32KeyId = pKeyEleDesc->u32KeyIdForStore;
            tParamType.eUseKeyType = HSM_AES_KEY_NEW;
            tParamType.pKeyAddr = NULL_PTR;
            tParamType.eKeyType = eKeyType;
        }

        tParamType.eKeyDataFmt = HSM_DATA_FORMAT_1B;

        Crypto_Prepare_Hsm();
        pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);

        if(HSM_STATUS_SUCCESS == HSM_Ln_ScatterCMacSetupEnv(pLnRtCtx))
        {
            if(HSM_STATUS_SUCCESS == eRet)
            {
                tScatterCmacInit.eDataFmt = HSM_DATA_FORMAT_1B;
                tScatterCmacInit.pData = NULL_PTR;
                tScatterCmacInit.u32DataSize = 0U;

                eRet = HSM_Ln_ScatterCMacInit(pLnRtCtx, &tParamType, &tScatterCmacInit);

                if(HSM_STATUS_AGAIN != eRet)
                {
                    (void)HSM_Ln_ScatterCMacExitEnv(pLnRtCtx);
                    eStatus = (Std_ReturnType)E_NOT_OK;
                }
            }
            else
            {
                eStatus = (Std_ReturnType)E_NOT_OK;
            }
        }
    }

    return (Std_ReturnType)eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
#endif /* ((CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON)) */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessScatterMacGenUpdateReq processes a CRYPTO_MACGENERATE request for update mode .
* @details The function is responsible of the sequence to proceed to a MAC generation operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if ((CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON))
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessScatterMacUpdateReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();
    HSM_Ln_RtCtxType *pLnRtCtx;
    HSM_Ln_ScatterCMacType tScatterCmacUpdate = {0};

    tScatterCmacUpdate.eDataFmt = HSM_DATA_FORMAT_1B;
    tScatterCmacUpdate.pData = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;/* PRQA S 0310 */
    tScatterCmacUpdate.u32DataSize = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;

    Crypto_Prepare_Hsm();
    pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);
    eRet = HSM_Ln_ScatterCMacUpdate(pLnRtCtx, &tScatterCmacUpdate);

    if (HSM_STATUS_SUCCESS == eRet)
    {
        if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
        {
            if (0u != Crypto_WaitHsmAlgorithmFinish())
            {
                eRet = Crypto_GetHsmRet();
                if(HSM_STATUS_SUCCESS != eRet)
                {
                    (void)HSM_Ln_ScatterCMacExitEnv(pLnRtCtx);
                }
            }
            else
            {
                (void)HSM_Ln_ScatterCMacExitEnv(pLnRtCtx);
                eRet = HSM_STATUS_HW_ERR;
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
            }
       }
       else
       {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_70();
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_70();
       }
    }
    else
    {
        if(HSM_STATUS_AGAIN != eRet)
        {
            (void)HSM_Ln_ScatterCMacExitEnv(pLnRtCtx);
            eRet = HSM_STATUS_ERROR;
        }
    }

    if ((HSM_STATUS_SUCCESS != eRet)&&(HSM_STATUS_AGAIN != eRet))
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return (Std_ReturnType)eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
#endif /* ((CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON)) */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessScatterMacGenFinalReq processes a CRYPTO_MACGENERATE request for finally mode .
* @details The function is responsible of the sequence to proceed to a MAC generation operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if ((CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON))
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessScatterMacFinishReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();
    HSM_Ln_RtCtxType *pLnRtCtx;
    HSM_Ln_ScatterCMacType tScatterCmacFinally = {0};
    HSM_Ln_ResultBufInfoType tScatterCmacResult;

    tScatterCmacFinally.eDataFmt = HSM_DATA_FORMAT_1B;
    tScatterCmacFinally.pData = NULL_PTR;
    tScatterCmacFinally.u32DataSize = 0u;

    tScatterCmacResult.eDataFmt = HSM_DATA_FORMAT_1B;
    tScatterCmacResult.pData = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
    tScatterCmacResult.pDataSize = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr;
    tScatterCmacResult.u32DataBufSize = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

    Crypto_Prepare_Hsm();
    pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);
    eRet = HSM_Ln_ScatterCMacFinal(pLnRtCtx, &tScatterCmacFinally,&tScatterCmacResult);

    if (HSM_STATUS_SUCCESS == eRet)
    {
        if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
        {
            if (Crypto_WaitHsmAlgorithmFinish())
            {
                eRet = Crypto_GetHsmRet();
                (void)HSM_Ln_ScatterCMacExitEnv(pLnRtCtx);
            }
            else
            {
                (void)HSM_Ln_ScatterCMacExitEnv(pLnRtCtx);
                eRet = HSM_STATUS_HW_ERR;
#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
            }
        }
        else
        {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_71();
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_71();
        }
    }
    else
    {
        (void)HSM_Ln_ScatterCMacExitEnv(pLnRtCtx);
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return (Std_ReturnType)eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
#endif /* ((CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON)) */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessCipherReq processes an encryption request.
* @details The function is responsible of the sequence to proceed to an encryption operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*                 CRYPTO_E_KEY_SIZE_MISMATCH     : Key stored in HSM does not correspond to the requested algorithm.
*                 CRYPTO_E_SMALL_BUFFER          : The output buffer is too small to store the result of the operation.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessCipherReq(void)
{
    Std_ReturnType  eStatus = (Std_ReturnType)E_OK;

    uint32  u32CoreId = Crypto_GetCoreID();

    /* ECB encryption */
    if (CRYPTO_ALGOMODE_ECB == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessEcbEncrypt();
    }
    else if (CRYPTO_ALGOMODE_CTR == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessCtrEncrypt();
    }
    else if (CRYPTO_ALGOMODE_CBC == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessCbcEncrypt();
    }
    else if (CRYPTO_ALGOMODE_CFB == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessCfbEncrypt();
    }
    else if (CRYPTO_ALGOMODE_OFB == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessOfbEncrypt();
    }
    else if (CRYPTO_ALGOMODE_NOT_SET == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode &&/* PRQA S 3397 */
             (CRYPTO_ALGOFAM_ECCNIST == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family))
    {
        eStatus = E_NOT_OK; /* Status = Crypto_LLD_ProcessEccNistEncrypt(); */
    }
    else /* if( (CRYPTO_ALGOMODE_NOT_SET == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode) &&
                 (CRYPTO_ALGOFAM_ECIES == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family) ) */
    {
        eStatus = E_NOT_OK;
    }

    return eStatus;
}
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessDecryptReq processes a CRYPTO_DECRYPTION service request.
* @details The function is responsible of the sequence to proceed to a decryption operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_ProcessDecryptReq(void)
{
    Std_ReturnType  eStatus = (Std_ReturnType)E_OK;
    uint32          u32CoreId = Crypto_GetCoreID();

    /* Register the function to be called for results processing, and launch the request procedure to HSM. */

    /* ECB encryption */
    if (CRYPTO_ALGOMODE_ECB == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessEcbDecrypt();
    }
    else if (CRYPTO_ALGOMODE_CTR == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessCtrDecrypt();
    }
    else if (CRYPTO_ALGOMODE_CBC == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessCbcDecrypt();
    }
    else if (CRYPTO_ALGOMODE_CFB == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessCfbDecrypt();
    }
    else if (CRYPTO_ALGOMODE_OFB == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
    {
        eStatus = Crypto_LLD_ProcessOfbDecrypt();
    }
    else if (CRYPTO_ALGOMODE_NOT_SET == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode &&/* PRQA S 3397 */
             (CRYPTO_ALGOFAM_ECCNIST == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family))
    {
        eStatus = E_NOT_OK;
    }
    else /* if( (CRYPTO_ALGOMODE_NOT_SET == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode) &&
             (CRYPTO_ALGOFAM_ECIES == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family) ) */
    {
        eStatus = E_NOT_OK;
    }

    return eStatus;
}
#endif /* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#if (CRYPTO_ENABLE_BRAINPOOL_CURVE_SUPPORT == STD_ON)
const uint32 BP160r1t1_p[] = {
    0x00000000, 0xE95E4A5F, 0x737059DC, 0x60DFC7AD, 0x95B3D813, 0x9515620F
};

const uint32 BP160r1t1_q[] = {
    0x00000000, 0xE95E4A5F, 0x737059DC, 0x60DF5991, 0xD4502940, 0x9E60FC09
};

const uint32 BP160r1_a[] = {
    0x00000000, 0x340E7BE2, 0xA280EB74, 0xE2BE61BA, 0xDA745D97, 0xE8F7C300
};

const uint32 BP160r1_b[] = {
    0x00000000, 0x1E589A85, 0x95423412, 0x134FAA2D, 0xBDEC95C8, 0xD8675E58
};

const uint32 BP160r1_gx[] = {
    0x00000000, 0xBED5AF16, 0xEA3F6A4F, 0x62938C46, 0x31EB5AF7, 0xBDBCDBC3
};

const uint32 BP160r1_gy[] = {
    0x00000000, 0x1667CB47, 0x7A1A8EC3, 0x38F94741, 0x669C9763, 0x16DA6321
};

const uint32 BP160t1_a[] = {
    0x00000000, 0xE95E4A5F, 0x737059DC, 0x60DFC7AD, 0x95B3D813, 0x9515620C
};

const uint32 BP160t1_b[] = {
    0x00000000, 0x7A556B6D, 0xAE535B7B, 0x51ED2C4D, 0x7DAA7A0B, 0x5C55F380
};

const uint32 BP160t1_gx[] = {
    0x00000000, 0xB199B13B, 0x9B34EFC1, 0x397E64BA, 0xEB05ACC2, 0x65FF2378
};

const uint32 BP160t1_gy[] = {
    0x00000000, 0xADD6718B, 0x7C7C1961, 0xF0991B84, 0x24437721, 0x52C9E0AD
};
/* ----------------------------------------------------------------------------------------------------------------------------- */
const uint32 BP192r1t1_p[] = {
    0xC302F41D, 0x932A36CD, 0xA7A34630, 0x93D18DB7, 0x8FCE476D, 0xE1A86297
};

const uint32 BP192r1t1_q[] = {
    0xC302F41D, 0x932A36CD, 0xA7A3462F, 0x9E9E916B, 0x5BE8F102, 0x9AC4ACC1
};

const uint32 BP192r1_a[] = {
    0x6A911740, 0x76B1E0E1, 0x9C39C031, 0xFE8685C1, 0xCAE040E5, 0xC69A28EF
};

const uint32 BP192r1_b[] = {
    0x469A28EF, 0x7C28CCA3, 0xDC721D04, 0x4F4496BC, 0xCA7EF414, 0x6FBF25C9
};

const uint32 BP192r1_gx[] = {
    0xC0A0647E, 0xAAB6A487, 0x53B033C5, 0x6CB0F090, 0x0A2F5C48, 0x53375FD6
};

const uint32 BP192r1_gy[] = {
    0x14B69086, 0x6ABD5BB8, 0x8B5F4828, 0xC1490002, 0xE6773FA2, 0xFA299B8F
};

const uint32 BP192t1_a[] = {
    0xC302F41D, 0x932A36CD, 0xA7A34630, 0x93D18DB7, 0x8FCE476D, 0xE1A86294
};

const uint32 BP192t1_b[] = {
    0x13D56FFA, 0xEC78681E, 0x68F9DEB4, 0x3B35BEC2, 0xFB68542E, 0x27897B79
};

const uint32 BP192t1_gx[] = {
    0x3AE9E58C, 0x82F63C30, 0x282E1FE7, 0xBBF43FA7, 0x2C446AF6, 0xF4618129
};

const uint32 BP192t1_gy[] = {
    0x097E2C56, 0x67C2223A, 0x902AB5CA, 0x449D0084, 0xB7E5B3DE, 0x7CCC01C9
};
/* ----------------------------------------------------------------------------------------------------------------------------- */


const uint32 BP224r1t1_p[] = {
    0x00000000, 0xD7C134AA, 0x26436686, 0x2A183025, 0x75D1D787, 0xB09F0757, 0x97DA89F5, 0x7EC8C0FF
};

const uint32 BP224r1t1_q[] = {
    0x00000000, 0xD7C134AA, 0x26436686, 0x2A183025, 0x75D0FB98, 0xD116BC4B, 0x6DDEBCA3, 0xA5A7939F
};

const uint32 BP224r1_a[] = {
    0x00000000, 0x68A5E62C, 0xA9CE6C1C, 0x299803A6, 0xC1530B51, 0x4E182AD8, 0xB0042A59, 0xCAD29F43
};

const uint32 BP224r1_b[] = {
    0x00000000, 0x2580F63C, 0xCFE44138, 0x870713B1, 0xA92369E3, 0x3E2135D2, 0x66DBB372, 0x386C400B
};

const uint32 BP224r1_gx[] = {
    0x00000000, 0x0D9029AD, 0x2C7E5CF4, 0x340823B2, 0xA87DC68C, 0x9E4CE317, 0x4C1E6EFD, 0xEE12C07D
};

const uint32 BP224r1_gy[] = {
    0x00000000, 0x58AA56F7, 0x72C0726F, 0x24C6B89E, 0x4ECDAC24, 0x354B9E99, 0xCAA3F6D3, 0x761402CD
};

const uint32 BP224t1_a[] = {
    0x00000000, 0xD7C134AA, 0x26436686, 0x2A183025, 0x75D1D787, 0xB09F0757, 0x97DA89F5, 0x7EC8C0FC
};

const uint32 BP224t1_b[] = {
    0x00000000, 0x4B337D93, 0x4104CD7B, 0xEF271BF6, 0x0CED1ED2, 0x0DA14C08, 0xB3BB64F1, 0x8A60888D
};

const uint32 BP224t1_gx[] = {
    0x00000000, 0x6AB1E344, 0xCE25FF38, 0x96424E7F, 0xFE14762E, 0xCB49F892, 0x8AC0C760, 0x29B4D580
};

const uint32 BP224t1_gy[] = {
    0x00000000, 0x0374E9F5, 0x143E568C, 0xD23F3F4D, 0x7C0D4B1E, 0x41C8CC0D, 0x1C6ABD5F, 0x1A46DB4C
};
/* ----------------------------------------------------------------------------------------------------------------------------- */
const uint32 BP256r1t1_p[] = {
    0xA9FB57DB, 0xA1EEA9BC, 0x3E660A90, 0x9D838D72, 0x6E3BF623, 0xD5262028, 0x2013481D, 0x1F6E5377
};

const uint32 BP256r1t1_q[] = {
    0xA9FB57DB, 0xA1EEA9BC, 0x3E660A90, 0x9D838D71, 0x8C397AA3, 0xB561A6F7, 0x901E0E82, 0x974856A7
};

const uint32 BP256r1_a[] = {
    0x7D5A0975, 0xFC2C3057, 0xEEF67530, 0x417AFFE7, 0xFB8055C1, 0x26DC5C6C, 0xE94A4B44, 0xF330B5D9
};

const uint32 BP256r1_b[] = {
    0x26DC5C6C, 0xE94A4B44, 0xF330B5D9, 0xBBD77CBF, 0x95841629, 0x5CF7E1CE, 0x6BCCDC18, 0xFF8C07B6
};

const uint32 BP256r1_gx[] = {
    0x8BD2AEB9, 0xCB7E57CB, 0x2C4B482F, 0xFC81B7AF, 0xB9DE27E1, 0xE3BD23C2, 0x3A4453BD, 0x9ACE3262
};

const uint32 BP256r1_gy[] = {
    0x547EF835, 0xC3DAC4FD, 0x97F8461A, 0x14611DC9, 0xC2774513, 0x2DED8E54, 0x5C1D54C7, 0x2F046997
};

const uint32 BP256t1_a[] = {
    0xA9FB57DB, 0xA1EEA9BC, 0x3E660A90, 0x9D838D72, 0x6E3BF623, 0xD5262028, 0x2013481D, 0x1F6E5374
};

const uint32 BP256t1_b[] = {
    0x662C61C4, 0x30D84EA4, 0xFE66A773, 0x3D0B76B7, 0xBF93EBC4, 0xAF2F4925, 0x6AE58101, 0xFEE92B04
};

const uint32 BP256t1_gx[] = {
    0xA3E8EB3C, 0xC1CFE7B7, 0x732213B2, 0x3A656149, 0xAFA142C4, 0x7AAFBC2B, 0x79A19156, 0x2E1305F4
};


const uint32 BP256t1_gy[] = {
    0x2D996C82, 0x3439C56D, 0x7F7B22E1, 0x4644417E, 0x69BCB6DE, 0x39D02700, 0x1DABE8F3, 0x5B25C9BE
};
/* ----------------------------------------------------------------------------------------------------------------------------- */
const uint32 BP320r1t1_p[] = {
    0xD35E4720, 0x36BC4FB7, 0xE13C785E, 0xD201E065, 0xF98FCFA6, 0xF6F40DEF, 0x4F92B9EC, 0x7893EC28, 0xFCD412B1, 0xF1B32E27
};

const uint32 BP320r1t1_q[] = {
    0xD35E4720, 0x36BC4FB7, 0xE13C785E, 0xD201E065, 0xF98FCFA5, 0xB68F12A3, 0x2D482EC7, 0xEE8658E9, 0x8691555B, 0x44C59311
};

const uint32 BP320r1_a[] = {
    0x3EE30B56, 0x8FBAB0F8, 0x83CCEBD4, 0x6D3F3BB8, 0xA2A73513, 0xF5EB79DA, 0x66190EB0, 0x85FFA9F4, 0x92F375A9, 0x7D860EB4
};

const uint32 BP320r1_b[] = {
    0x52088394, 0x9DFDBC42, 0xD3AD1986, 0x40688A6F, 0xE13F4134, 0x9554B49A, 0xCC31DCCD, 0x88453981, 0x6F5EB4AC, 0x8FB1F1A6
};

const uint32 BP320r1_gx[] = {
    0x43BD7E9A, 0xFB53D8B8, 0x5289BCC4, 0x8EE5BFE6, 0xF20137D1, 0x0A087EB6, 0xE7871E2A, 0x10A599C7, 0x10AF8D0D, 0x39E20611
};

const uint32 BP320r1_gy[] = {
    0x14FDD055, 0x45EC1CC8, 0xAB409324, 0x7F77275E, 0x0743FFED, 0x117182EA, 0xA9C77877, 0xAAAC6AC7, 0xD35245D1, 0x692E8EE1
};

const uint32 BP320t1_a[] = {
    0xD35E4720, 0x36BC4FB7, 0xE13C785E, 0xD201E065, 0xF98FCFA6, 0xF6F40DEF, 0x4F92B9EC, 0x7893EC28, 0xFCD412B1, 0xF1B32E24
};

const uint32 BP320t1_b[] = {
    0xA7F561E0, 0x38EB1ED5, 0x60B3D147, 0xDB782013, 0x064C19F2, 0x7ED27C67, 0x80AAF77F, 0xB8A547CE, 0xB5B4FEF4, 0x22340353
};

const uint32 BP320t1_gx[] = {
    0x925BE9FB, 0x01AFC6FB, 0x4D3E7D49, 0x90010F81, 0x3408AB10, 0x6C4F09CB, 0x7EE07868, 0xCC136FFF, 0x3357F624, 0xA21BED52
};

const uint32 BP320t1_gy[] = {
    0x63BA3A7A, 0x27483EBF, 0x6671DBEF, 0x7ABB30EB, 0xEE084E58, 0xA0B077AD, 0x42A5A098, 0x9D1EE71B, 0x1B9BC045, 0x5FB0D2C3
};
/* ----------------------------------------------------------------------------------------------------------------------------- */
const uint32 BP384r1t1_p[] = {
    0x8CB91E82, 0xA3386D28, 0x0F5D6F7E, 0x50E641DF, 0x152F7109, 0xED5456B4, 0x12B1DA19, 0x7FB71123, 0xACD3A729, 0x901D1A71, 0x87470013, 0x3107EC53
};

const uint32 BP384r1t1_q[] = {
    0x8CB91E82, 0xA3386D28, 0x0F5D6F7E, 0x50E641DF, 0x152F7109, 0xED5456B3, 0x1F166E6C, 0xAC0425A7, 0xCF3AB6AF, 0x6B7FC310, 0x3B883202, 0xE9046565
};

const uint32 BP384r1_a[] = {
    0x7BC382C6, 0x3D8C150C, 0x3C72080A, 0xCE05AFA0, 0xC2BEA28E, 0x4FB22787, 0x139165EF, 0xBA91F90F, 0x8AA5814A, 0x503AD4EB, 0x04A8C7DD, 0x22CE2826
};

const uint32 BP384r1_b[] = {
    0x04A8C7DD, 0x22CE2826, 0x8B39B554, 0x16F0447C, 0x2FB77DE1, 0x07DCD2A6, 0x2E880EA5, 0x3EEB62D5, 0x7CB43902, 0x95DBC994, 0x3AB78696, 0xFA504C11
};

const uint32 BP384r1_gx[] = {
    0x1D1C64F0, 0x68CF45FF, 0xA2A63A81, 0xB7C13F6B, 0x8847A3E7, 0x7EF14FE3, 0xDB7FCAFE, 0x0CBD10E8, 0xE826E034, 0x36D646AA, 0xEF87B2E2, 0x47D4AF1E
};

const uint32 BP384r1_gy[] = {
    0x8ABE1D75, 0x20F9C2A4, 0x5CB1EB8E, 0x95CFD552, 0x62B70B29, 0xFEEC5864, 0xE19C054F, 0xF9912928, 0x0E464621, 0x77918111, 0x42820341, 0x263C5315
};

const uint32 BP384t1_a[] = {
    0x8CB91E82, 0xA3386D28, 0x0F5D6F7E, 0x50E641DF, 0x152F7109, 0xED5456B4, 0x12B1DA19, 0x7FB71123, 0xACD3A729, 0x901D1A71, 0x87470013, 0x3107EC50
};

const uint32 BP384t1_b[] = {
    0x7F519EAD, 0xA7BDA81B, 0xD826DBA6, 0x47910F8C, 0x4B9346ED, 0x8CCDC64E, 0x4B1ABD11, 0x756DCE1D, 0x2074AA26, 0x3B88805C, 0xED70355A, 0x33B471EE
};

const uint32 BP384t1_gx[] = {
    0x18DE98B0, 0x2DB9A306, 0xF2AFCD72, 0x35F72A81, 0x9B80AB12, 0xEBD65317, 0x2476FECD, 0x462AABFF, 0xC4FF191B, 0x946A5F54, 0xD8D0AA2F, 0x418808CC
};

const uint32 BP384t1_gy[] = {
    0x25AB0569, 0x62D30651, 0xA114AFD2, 0x755AD336, 0x747F9347, 0x5B7A1FCA, 0x3B88F2B6, 0xA208CCFE, 0x46940858, 0x4DC2B291, 0x2675BF5B, 0x9E582928
};
/* ----------------------------------------------------------------------------------------------------------------------------- */
const uint32 BP512r1t1_p[] = {
    0xAADD9DB8, 0xDBE9C48B, 0x3FD4E6AE, 0x33C9FC07, 0xCB308DB3, 0xB3C9D20E, 0xD6639CCA, 0x70330871, 0x7D4D9B00, 0x9BC66842, 0xAECDA12A, 0xE6A380E6, 0x2881FF2F, 0x2D82C685, 0x28AA6056, 0x583A48F3
};

const uint32 BP512r1t1_q[] = {
    0xAADD9DB8, 0xDBE9C48B, 0x3FD4E6AE, 0x33C9FC07, 0xCB308DB3, 0xB3C9D20E, 0xD6639CCA, 0x70330870, 0x553E5C41, 0x4CA92619, 0x41866119, 0x7FAC1047, 0x1DB1D381, 0x085DDADD, 0xB5879682, 0x9CA90069
};

const uint32 BP512r1_a[] = {
    0x7830A331, 0x8B603B89, 0xE2327145, 0xAC234CC5, 0x94CBDD8D, 0x3DF91610, 0xA83441CA, 0xEA9863BC, 0x2DED5D5A, 0xA8253AA1, 0x0A2EF1C9, 0x8B9AC8B5, 0x7F1117A7, 0x2BF2C7B9, 0xE7C1AC4D, 0x77FC94CA
};

const uint32 BP512r1_b[] = {
    0x3DF91610, 0xA83441CA, 0xEA9863BC, 0x2DED5D5A, 0xA8253AA1, 0x0A2EF1C9, 0x8B9AC8B5, 0x7F1117A7, 0x2BF2C7B9, 0xE7C1AC4D, 0x77FC94CA, 0xDC083E67, 0x984050B7, 0x5EBAE5DD, 0x2809BD63, 0x8016F723
};

const uint32 BP512r1_gx[] = {
    0x81AEE4BD, 0xD82ED964, 0x5A21322E, 0x9C4C6A93, 0x85ED9F70, 0xB5D916C1, 0xB43B62EE, 0xF4D0098E, 0xFF3B1F78, 0xE2D0D48D, 0x50D1687B, 0x93B97D5F, 0x7C6D5047, 0x406A5E68, 0x8B352209, 0xBCB9F822
};

const uint32 BP512r1_gy[] = {
    0x7DDE385D, 0x566332EC, 0xC0EABFA9, 0xCF7822FD, 0xF209F700, 0x24A57B1A, 0xA000C55B, 0x881F8111, 0xB2DCDE49, 0x4A5F485E, 0x5BCA4BD8, 0x8A2763AE, 0xD1CA2B2F, 0xA8F05406, 0x78CD1E0F, 0x3AD80892
};

const uint32 BP512t1_a[] = {
    0xAADD9DB8, 0xDBE9C48B, 0x3FD4E6AE, 0x33C9FC07, 0xCB308DB3, 0xB3C9D20E, 0xD6639CCA, 0x70330871, 0x7D4D9B00, 0x9BC66842, 0xAECDA12A, 0xE6A380E6, 0x2881FF2F, 0x2D82C685, 0x28AA6056, 0x583A48F0
};

const uint32 BP512t1_b[] = {
    0x7CBBBCF9, 0x441CFAB7, 0x6E1890E4, 0x6884EAE3, 0x21F70C0B, 0xCB498152, 0x7897504B, 0xEC3E36A6, 0x2BCDFA23, 0x04976540, 0xF6450085, 0xF2DAE145, 0xC22553B4, 0x65763689, 0x180EA257, 0x1867423E
};

const uint32 BP512t1_gx[] = {
    0x640ECE5C, 0x12788717, 0xB9C1BA06, 0xCBC2A6FE, 0xBA858424, 0x58C56DDE, 0x9DB1758D, 0x39C0313D, 0x82BA5173, 0x5CDB3EA4, 0x99AA77A7, 0xD6943A64, 0xF7A3F25F, 0xE26F06B5, 0x1BAA2696, 0xFA9035DA
};

const uint32 BP512t1_gy[] = {
    0x5B534BD5, 0x95F5AF0F, 0xA2C89237, 0x6C84ACE1, 0xBB4E3019, 0xB71634C0, 0x1131159C, 0xAE03CEE9, 0xD9932184, 0xBEEF216B, 0xD71DF2DA, 0xDF86A627, 0x306ECFF9, 0x6DBB8BAC, 0xE198B61E, 0x00F8B332
};
#endif
/* const uint8_t aSecp224R1Oid[]         = {0x2B, 0x81, 0x04, 0x00, 0x21}; */
/* const uint8_t aSecp384R1Oid[]         = {0x2B, 0x81, 0x04, 0x00, 0x22}; */
/* const uint8_t aSecp521R1Oid[]         = {0x2B, 0x81, 0x04, 0x00, 0x23}; */
/* const uint8_t aBRAINPOOLP160R1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x01}; */
/* const uint8_t aBRAINPOOLP160T1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x02}; */
/* const uint8_t aBRAINPOOLP192R1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x03}; */
/* const uint8_t aBRAINPOOLP192T1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x04}; */
/* const uint8_t aBRAINPOOLP224R1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x05}; */
/* const uint8_t aBRAINPOOLP224T1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x06}; */
/* const uint8_t aBRAINPOOLP256R1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x07}; */
/* const uint8_t aBRAINPOOLP256T1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x08}; */
/* const uint8_t aBRAINPOOLP320R1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x09}; */
/* const uint8_t aBRAINPOOLP320T1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x0A}; */
/* const uint8_t aBRAINPOOLP384R1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x0B}; */
/* const uint8_t aBRAINPOOLP384T1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x0C}; */
/* const uint8_t aBRAINPOOLP512R1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x0D}; */
/* const uint8_t aBRAINPOOLP512T1_OID[9] = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01, 0x0E}; */

#if ((CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON))
const uint8 aSecp256R1Oid[]                   = {0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x03, 0x01, 0x07};
const uint8 aSecp224_384_521_R1OidPrefix[]    = {0x2B, 0x81, 0x04, 0x00};
const uint8 aBrainPoolOidPrefix[ ]            = {0x2B, 0x24, 0x03, 0x03, 0x02, 0x08, 0x01, 0x01};
#endif /* ((CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)||(CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)) */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_ProcessEccSignGenReq(void)
{
    Std_ReturnType                       eStatus = (Std_ReturnType)E_OK;
    HSM_ShaAlgType                       eHash = HSM_SHA_256;
    uint32                               u32HashLen;
    HSM_StatusType                       eRet           = HSM_STATUS_SUCCESS;
    const Crypto_KeyTypeDescriptionType *pKeyTypePriv   = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *pKeyTypeCurve  = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescPriv   = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescCurve  = NULL_PTR;
    Crypto_JobType                      *pStoredJob;
    HSM_Ln_RtCtxType *pLnRtCtx;

    uint32                  u32CoreId = Crypto_GetCoreID();
    HSM_Ln_EccSignType      tSign = {0};

    tSign.eInputType = HSM_ECC_VERIFY_INPUT_RAW_MESSAGE;

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_KEY, &pKeyTypePriv, &pKeyDescPriv);
    if (E_OK == eStatus)
    {
        eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_CURVETYPE, &pKeyTypeCurve, &pKeyDescCurve);
    }
    /* else do nothing */

    if (E_OK == eStatus)
    {
        eStatus = Crypto_LLD_GetHashAlgo(
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.secondaryFamily,
            &u32HashLen,
            &eHash);
    }
    /* else do nothing */

    tSign.eAlg = eHash;

    if (E_OK == eStatus)
    {
        if (9u == pKeyDescCurve->CryptoKeyElementSize)
        {
            eStatus = E_NOT_OK;
        }
        else if (8u == pKeyDescCurve->CryptoKeyElementSize)
        {
            if (0 == hsm_memcmp(pKeyTypeCurve->CryptoKeyElementDataPtr, &aSecp256R1Oid[0], 8u))
            {
                tSign.tSignParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP256R1;
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else if (5u == pKeyDescCurve->CryptoKeyElementSize)
        {
            if (0 == hsm_memcmp(pKeyTypeCurve->CryptoKeyElementDataPtr, &aSecp224_384_521_R1OidPrefix[0], 4u))
            {
                if (0x21u == pKeyTypeCurve->CryptoKeyElementDataPtr[4u])
                {
                    tSign.tSignParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP224R1;
                }
                else if (0x22u == pKeyTypeCurve->CryptoKeyElementDataPtr[4u])
                {
                    tSign.tSignParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP384R1;
                }
                else if (0x23u == pKeyTypeCurve->CryptoKeyElementDataPtr[4u])
                {
                    tSign.tSignParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP521R1;
                }
                else
                {
                    eStatus = E_NOT_OK;
                }
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }
    /* else do nothing */

    /* other ecc curve support to do */
    if (E_OK == eStatus)
    {
        tSign.tSignParm.eCurveDataFmt = HSM_DATA_FORMAT_4B;

        if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescPriv->u32CryptoStoreType)
        {
            tSign.tSignParm.u32PrivateKeyId   = 0u;
            tSign.tSignParm.ePrivateKeyFmt    = HSM_DATA_FORMAT_1B;
            tSign.tSignParm.pPrivate          = pKeyTypePriv->CryptoKeyElementDataPtr;
            tSign.tSignParm.u32PrivateByteCnt = pKeyDescPriv->CryptoKeyElementSize;
        }
        else
        {
            tSign.tSignParm.u32PrivateKeyId     = pKeyDescPriv->u32KeyIdForStore;
            tSign.tSignParm.ePrivateKeyFmt      = HSM_DATA_FORMAT_4B;
            tSign.tSignParm.pPrivate            = NULL_PTR;
            tSign.tSignParm.u32PrivateByteCnt   = 0u;
        }

        pStoredJob = (Crypto_JobType *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr;

        tSign.tSignParm.pData               = pStoredJob->jobPrimitiveInputOutput.inputPtr;
        tSign.tSignParm.u32DataByteCnt      = pStoredJob->jobPrimitiveInputOutput.inputLength;
        tSign.tSignParm.eDataFmt            = HSM_DATA_FORMAT_1B;

        tSign.tSignParm.pR                  = pStoredJob->jobPrimitiveInputOutput.outputPtr;
        tSign.tSignParm.u32RBufByteCnt      = (*pStoredJob->jobPrimitiveInputOutput.outputLengthPtr) >> 1u;
        tSign.tSignParm.pS                  = pStoredJob->jobPrimitiveInputOutput.outputPtr + tSign.tSignParm.u32RBufByteCnt;
        tSign.tSignParm.u32SBufByteCnt      = (*pStoredJob->jobPrimitiveInputOutput.outputLengthPtr) >> 1u;
        tSign.tSignParm.eRSDataFmt          = HSM_DATA_FORMAT_1B;

        Crypto_Prepare_Hsm();
        pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);

        if (HSM_STATUS_SUCCESS == HSM_Ln_EccSignSetupEnv(pLnRtCtx, pStoredJob->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength))
        {
            if (HSM_STATUS_SUCCESS == HSM_Ln_EccSign(pLnRtCtx, &tSign))
            {
                if (pStoredJob->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                {
                    if (0u != Crypto_WaitHsmAlgorithmFinish())
                    {
                        eRet = Crypto_GetHsmRet();
                        HSM_Ln_EccSignExitEnv(pLnRtCtx);
                    }
                    else
                    {
                        HSM_Ln_EccSignExitEnv(pLnRtCtx);
                        eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                        /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
                    }
                }
                else
                {
                    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_72();
                    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_72();
                }
            }
            else
            {
                HSM_Ln_EccSignExitEnv(pLnRtCtx);
                eRet = HSM_STATUS_ERROR;
            }
        }

        if (HSM_STATUS_SUCCESS != eRet)
        {
            eStatus = E_NOT_OK;
        }
        else
        {
            ;
        }
    }

    return eStatus;    
}
#endif /* CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON */
#endif

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_GetHashAlgo(Crypto_AlgorithmFamilyType family, uint32 *pu32Len, HSM_ShaAlgType *pAlg)
{
    Std_ReturnType eRet = E_OK;

    switch (family)
    {
        case CRYPTO_ALGOFAM_SHA1:
            *pAlg = HSM_SHA_160;
            *pu32Len = 20u;
            break;

        case CRYPTO_ALGOFAM_SHA2_224:
            *pAlg = HSM_SHA_224;
            *pu32Len = 28u;
            break;

        case CRYPTO_ALGOFAM_SHA2_256:
            *pAlg = HSM_SHA_256;
            *pu32Len = 32u;
            break;

        case CRYPTO_ALGOFAM_SHA2_384:
            *pAlg = HSM_SHA_384;
            *pu32Len = 48u;
            break;

        case CRYPTO_ALGOFAM_SHA2_512:
            *pAlg = HSM_SHA_512;
            *pu32Len = 64u;
            break;

        case CRYPTO_ALGOFAM_SHA2_512_224:
            *pAlg = HSM_SHA_512_224;
            *pu32Len = 28u;
            break;

        case CRYPTO_ALGOFAM_SHA2_512_256:
            *pAlg = HSM_SHA_512_256;
            *pu32Len = 32u;
            break;

        case CRYPTO_ALGOFAM_SM3:
            *pAlg = HSM_HASH_SM3;
            *pu32Len = 32u;
            break;

        default:
            eRet = E_NOT_OK;
            break;
    }


    return eRet;
}

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_ProcessRsaSignGenReq(void)
{
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;

    HSM_ShaAlgType eHash;
    uint32         u32HashLen;
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;
    const Crypto_KeyTypeDescriptionType *pKeyTypeD  = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *pKeyTypeN  = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescD  = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescN  = NULL_PTR;
    HSM_L1_PKCS8_PrivateKeyInfType       tKeyInf;
    uint32                               u32KeyNId;
    uint32                               u32KeyDId;
    uint32          u32CoreId = Crypto_GetCoreID();
    HSM_Ln_RtCtxType *pLnRtCtx;

    Crypto_LLD_memset_byte((uint8 *)&(tKeyInf), 0, sizeof(tKeyInf));

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_KEY, &pKeyTypeD, &pKeyDescD);
    if (E_OK == eStatus)
    {
        pKeyTypeN = pKeyTypeD;
        pKeyDescN = pKeyDescD;

        u32KeyNId = pKeyDescD->u32KeyIdForStore;
        u32KeyDId = u32KeyNId + 0x2u;

        if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescD->u32CryptoStoreType) /* key data store in Cortex-M7 */
        {
            if (CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8 == pKeyDescD->CryptoKeyElementFormat)
            {
                eRet = HSM_L1_PKCS8_GetPrivateKeyInfFromDer(pKeyTypeD->CryptoKeyElementDataPtr, &tKeyInf);
                if ((HSM_STATUS_SUCCESS == eRet) && (HSM_L1_PKCS8_RSA_PRIVATE_KEY == tKeyInf.eKeyType))
                {

                }
                else
                {
                    eStatus = E_NOT_OK;
                }
            }
            else if (CRYPTO_KE_FORMAT_BIN_RSA_PRIVATEKEY == pKeyDescD->CryptoKeyElementFormat)
            {
                eRet = HSM_L1_PKCS1_GetRsaPrivateKeyInfFromDer(pKeyTypeD->CryptoKeyElementDataPtr, &tKeyInf.tPrivateInfo.tRsaKeyInf);
                if (HSM_STATUS_SUCCESS == eRet)
                {
                    tKeyInf.eKeyType = HSM_L1_PKCS8_RSA_PRIVATE_KEY;
                }
                else
                {
                    eStatus = E_NOT_OK;
                }
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else
        {

        }
    }
    else
    {
        eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_RSA_KEY_E, &pKeyTypeD, &pKeyDescD);
        if (eStatus == E_OK)
        {
            eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_RSA_KEY_N, &pKeyTypeN, &pKeyDescN);
        }

        if (E_OK == eStatus)
        {
            tKeyInf.eKeyType                = HSM_L1_PKCS8_RSA_PRIVATE_KEY;
            tKeyInf.tPrivateInfo.tRsaKeyInf.pD           = pKeyTypeD->CryptoKeyElementDataPtr;
            tKeyInf.tPrivateInfo.tRsaKeyInf.u32DByteCnt  = pKeyDescD->CryptoKeyElementSize;
            tKeyInf.tPrivateInfo.tRsaKeyInf.pN           = pKeyTypeN->CryptoKeyElementDataPtr;
            tKeyInf.tPrivateInfo.tRsaKeyInf.u32NByteCnt  = pKeyDescN->CryptoKeyElementSize;

            u32KeyNId                       = pKeyDescN->u32KeyIdForStore;
            u32KeyDId                       = pKeyDescD->u32KeyIdForStore;
        }
    }

    if (E_OK == eStatus)
    {
        eStatus = Crypto_LLD_GetHashAlgo(
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.secondaryFamily,
            &u32HashLen,
            &eHash);
    }
    /* else do nothing */

    if (eStatus == E_OK)
    {
        if (CRYPTO_ALGOMODE_RSASSA_PSS == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            HSM_Ln_RsaSsaPssSignDataType tSign = {0};

            tSign.u32RsaBitCnt            = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;
            tSign.eHashType               = eHash;
            tSign.eInputFmt               = HSM_DATA_FORMAT_1B;
            tSign.eOutputFmt              = HSM_DATA_FORMAT_1B;
            tSign.pInputData              = (const hsm_uint8_t *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tSign.u32InputDataByteCount   = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tSign.pPrivateKey             = tKeyInf.tPrivateInfo.tRsaKeyInf.pD;
            tSign.u32PrivateKeyByteCnt    = tKeyInf.tPrivateInfo.tRsaKeyInf.u32DByteCnt;
            tSign.pKeyN                   = tKeyInf.tPrivateInfo.tRsaKeyInf.pN;
            tSign.u32KeyNByteCount        = tKeyInf.tPrivateInfo.tRsaKeyInf.u32NByteCnt;
            tSign.pResult                 = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
            tSign.u32ResultBufByteCnt     = *Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr;
            tSign.pResultByteCnt          = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr;
            tSign.bUsePseudoRand          = HSM_FALSE;

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescD->u32CryptoStoreType)
            {
                tSign.u32PrivateKeyId           = 0u;
            }
            else
            {
                tSign.u32PrivateKeyId           = u32KeyDId;
            }

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescN->u32CryptoStoreType)
            {
                tSign.u32KeyNId           = 0U;
            }
            else
            {
                tSign.u32KeyNId           = u32KeyNId;
            }

            Crypto_Prepare_Hsm();
            pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);

            if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPssSignSetupEnv(pLnRtCtx))
            {
                if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPssSignData(pLnRtCtx,&tSign,pLnRtCtx->u32OpLimitMs))
                {
                    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                    {
                        if (0u != Crypto_WaitHsmAlgorithmFinish())
                        {
                            eRet = Crypto_GetHsmRet();
                            HSM_Ln_RsaSsaPssSignExitEnv(pLnRtCtx);
                        }
                        else
                        {
                            HSM_Ln_RsaSsaPssSignExitEnv(pLnRtCtx);
                            eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                        /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
                        }
                    }
                    else
                    {
                        SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_57();
                        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_57();
                    }
                }
                else
                {
                    HSM_Ln_RsaSsaPssSignExitEnv(pLnRtCtx);
                    eRet = HSM_STATUS_ERROR;
                }
            }

            if (HSM_STATUS_SUCCESS != eRet)
            {
                eStatus = E_NOT_OK;
            }
            else
            {
                ;
            }
        }
        else if (CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            HSM_Ln_RsaSsaPkcs1V15SignDataType tSign = {0};

            tSign.u32RsaBitCnt            = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;
            tSign.eHashType               = eHash;
            tSign.eInputFmt               = HSM_DATA_FORMAT_1B;
            tSign.eOutputFmt              = HSM_DATA_FORMAT_1B;
            tSign.pInputData              = (const hsm_uint8_t *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tSign.u32InputDataByteCount   = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tSign.pPrivateKey             = tKeyInf.tPrivateInfo.tRsaKeyInf.pD;
            tSign.u32PrivateKeyByteCnt    = tKeyInf.tPrivateInfo.tRsaKeyInf.u32DByteCnt;
            tSign.pKeyN                   = tKeyInf.tPrivateInfo.tRsaKeyInf.pN;
            tSign.u32KeyNByteCount        = tKeyInf.tPrivateInfo.tRsaKeyInf.u32NByteCnt;
            tSign.pResult                 = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
            tSign.u32ResultBufByteCnt     = *Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr;
            tSign.pResultByteCnt          = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr;

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescD->u32CryptoStoreType)
            {
                tSign.u32PrivateKeyId           = 0u;
            }
            else
            {
                tSign.u32PrivateKeyId           = u32KeyDId;
            }

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescN->u32CryptoStoreType)
            {
                tSign.u32KeyNId           = 0U;
            }
            else
            {
                tSign.u32KeyNId           = u32KeyNId;
            }

            Crypto_Prepare_Hsm();
            pLnRtCtx = &(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx);

            if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPkcs1V15SignSetupEnv(pLnRtCtx))
            {
                if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPkcs1V15SignData(pLnRtCtx,&tSign,pLnRtCtx->u32OpLimitMs))
                {
                    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                    {
                        if (0u != Crypto_WaitHsmAlgorithmFinish())
                        {
                            eRet = Crypto_GetHsmRet();
                            HSM_Ln_RsaSsaPkcs1V15SignExitEnv(pLnRtCtx);
                        }
                        else
                        {
                            HSM_Ln_RsaSsaPkcs1V15SignExitEnv(pLnRtCtx);
                            eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                        /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
                        }
                    }
                    else
                    {
                        SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_58();
                        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_58();
                    }
                }
                else
                {
                    HSM_Ln_RsaSsaPkcs1V15SignExitEnv(pLnRtCtx);
                    eRet = HSM_STATUS_ERROR;
                }
            }

            if (HSM_STATUS_SUCCESS != eRet)
            {
                eStatus = E_NOT_OK;
            }
            else
            {
                ;
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }
    return eStatus;
}
#endif /* CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON */
#endif

/**
* @brief   The function Crypto_LLD_ProcessSignGenReq processes a SIGNATURE_GENERATE service request.
* @details The function is responsible of the sequence to proceed to a signature generation operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_ProcessSignGenReq(void)
{
    Std_ReturnType  eStatus   = (Std_ReturnType)E_NOT_OK;
    uint32          u32CoreId = Crypto_GetCoreID();

    if (CRYPTO_ALGOFAM_ECCNIST == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        eStatus = Crypto_LLD_ProcessEccSignGenReq(); 
    }
    else if (CRYPTO_ALGOFAM_RSA == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        eStatus = Crypto_LLD_ProcessRsaSignGenReq();
    }
    else
    {
        /* PRQA S 2013 */
    }

    return eStatus;
}
#endif /* CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_ProcessEccSignVeriReq(void)
{
    Std_ReturnType                       eStatus = (Std_ReturnType)E_OK;
    HSM_ShaAlgType                       eHash = HSM_SHA_256;
    uint32                               u32HashLen;
    HSM_StatusType                       eRet           = HSM_STATUS_SUCCESS;
    const Crypto_KeyTypeDescriptionType *pKeyTypePub    = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *pKeyTypeCurve  = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescPub    = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescCurve  = NULL_PTR;
    Crypto_JobType                      *pStoredJob;

    uint32                  u32CoreId = Crypto_GetCoreID();
    HSM_Ln_EccVerifyType    tVerify = {0};

    tVerify.eInputType = HSM_ECC_VERIFY_INPUT_RAW_MESSAGE;

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_KEY, &pKeyTypePub, &pKeyDescPub);
    if (E_OK == eStatus)
    {
        eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_CURVETYPE, &pKeyTypeCurve, &pKeyDescCurve);
    }
    /* else do nothing */

    if (E_OK == eStatus)
    {
        eStatus = Crypto_LLD_GetHashAlgo(
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.secondaryFamily,
            &u32HashLen,
            &eHash);
    }
    /* else do nothing */

    tVerify.eAlg = eHash;
    tVerify.pVerifyResult = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.verifyPtr;

    if (E_OK == eStatus)
    {
        if (9u == pKeyDescCurve->CryptoKeyElementSize)
        {
            /*PRQA S 2983 ++
            2983: This assignment is redundant. The value of this object is never subsequently used.
            REASON:This assignment is necessary and will be used in the subsequently operations */
            tVerify.tVerifyParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_MAX;
            /*PRQA S 2983 -- */

            if (0 == hsm_memcmp(pKeyTypeCurve->CryptoKeyElementDataPtr, &aBrainPoolOidPrefix[0], 8u))
            {
#if (CRYPTO_ENABLE_BRAINPOOL_CURVE_SUPPORT == STD_ON)
                if (0x1u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp160r1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP160r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP160r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP160r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP160r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP160r1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP160r1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP160r1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP160r1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP160r1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP160r1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP160r1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP160r1_gy);
                }
                else if (0x2u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp160t1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP160r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP160r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP160r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP160r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP160t1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP160t1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP160t1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP160t1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP160t1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP160t1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP160t1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP160t1_gy);
                }
                else if (0x3u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp192r1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP192r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP192r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP192r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP192r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP192r1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP192r1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP192r1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP192r1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP192r1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP192r1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP192r1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP192r1_gy);
                }
                else if (0x4u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp192t1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP192r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP192r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP192r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP192r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP192t1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP192t1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP192t1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP192t1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP192t1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP192t1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP192t1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP192t1_gy);
                }
                else if (0x5u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp224r1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP224r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP224r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP224r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP224r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP224r1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP224r1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP224r1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP224r1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP224r1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP224r1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP224r1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP224r1_gy);
                }
                else if (0x6u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp224t1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP224r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP224r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP224r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP224r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP224t1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP224t1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP224t1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP224t1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP224t1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP224t1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP224t1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP224t1_gy);
                }
                else if (0x7u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp256r1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP256r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP256r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP256r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP256r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP256r1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP256r1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP256r1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP256r1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP256r1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP256r1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP256r1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP256r1_gy);
                }
                else if (0x8u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp256t1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP256r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP256r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP256r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP256r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP256t1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP256t1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP256t1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP256t1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP256t1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP256t1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP256t1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP256t1_gy);
                }
                else if (0x9u == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp320r1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP320r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP320r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP320r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP320r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP320r1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP320r1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP320r1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP320r1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP320r1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP320r1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP320r1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP320r1_gy);
                }
                else if (0xAu == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp320t1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP320r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP320r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP320r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP320r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP320t1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP320t1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP320t1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP320t1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP320t1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP320t1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP320t1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP320t1_gy);
                }
                else if (0xBu == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp384r1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP384r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP384r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP384r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP384r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP384r1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP384r1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP384r1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP384r1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP384r1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP384r1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP384r1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP384r1_gy);
                }
                else if (0xCu == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp384t1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP384r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP384r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP384r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP384r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP384t1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP384t1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP384t1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP384t1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP384t1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP384t1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP384t1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP384t1_gy);
                }
                else if (0xDu == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp512r1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP512r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP512r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP512r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP512r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP512r1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP512r1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP512r1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP512r1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP512r1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP512r1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP512r1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP512r1_gy);
                }
                else if (0xEu == pKeyTypeCurve->CryptoKeyElementDataPtr[8u]) /* bp512t1 */
                {
                    tVerify.tVerifyParm.tCurve.pP           = (const hsm_uint8_t *)&(BP512r1t1_p[0u]);
                    tVerify.tVerifyParm.tCurve.u32PByteCnt  = sizeof(BP512r1t1_p);
                    tVerify.tVerifyParm.tCurve.pN           = (const hsm_uint8_t *)&(BP512r1t1_q[0u]);
                    tVerify.tVerifyParm.tCurve.u32NByteCnt  = sizeof(BP512r1t1_q);
                    tVerify.tVerifyParm.tCurve.pA           = (const hsm_uint8_t *)&(BP512t1_a[0u]);
                    tVerify.tVerifyParm.tCurve.u32AByteCnt  = sizeof(BP512t1_a);
                    tVerify.tVerifyParm.tCurve.pB           = (const hsm_uint8_t *)&(BP512t1_b[0u]);
                    tVerify.tVerifyParm.tCurve.u32BByteCnt  = sizeof(BP512t1_b);
                    tVerify.tVerifyParm.tCurve.pGx          = (const hsm_uint8_t *)&(BP512t1_gx[0u]);
                    tVerify.tVerifyParm.tCurve.u32GxByteCnt = sizeof(BP512t1_gx);
                    tVerify.tVerifyParm.tCurve.pGy          = (const hsm_uint8_t *)&(BP512t1_gy[0u]);
                    tVerify.tVerifyParm.tCurve.u32GyByteCnt = sizeof(BP512t1_gy);
                }
                else
#endif
                {
                    eStatus = E_NOT_OK;
                }
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else if (8u == pKeyDescCurve->CryptoKeyElementSize)
        {
            if (0 == hsm_memcmp(pKeyTypeCurve->CryptoKeyElementDataPtr, &aSecp256R1Oid[0], 8u))
            {
                tVerify.tVerifyParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP256R1;
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else if (5u == pKeyDescCurve->CryptoKeyElementSize)
        {
            if (0 == hsm_memcmp(pKeyTypeCurve->CryptoKeyElementDataPtr, &aSecp224_384_521_R1OidPrefix[0], 4u))
            {
                if (0x21u == pKeyTypeCurve->CryptoKeyElementDataPtr[4u])
                {
                    tVerify.tVerifyParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP224R1;
                }
                else if (0x22u == pKeyTypeCurve->CryptoKeyElementDataPtr[4u])
                {
                    tVerify.tVerifyParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP384R1;
                }
                else if (0x23u == pKeyTypeCurve->CryptoKeyElementDataPtr[4u])
                {
                    tVerify.tVerifyParm.u32EccCurve = HSM_DRV_ECC_CURVE_PRM_IDX_SECP521R1;
                }
                else
                {
                    eStatus = E_NOT_OK;
                }
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }
    /* else do nothing */

    /* other ecc curve support to do */

    if (E_OK == eStatus)
    {
        tVerify.tVerifyParm.eCurveDataFmt = HSM_DATA_FORMAT_4B;

        if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescPub->u32CryptoStoreType)
        {
            tVerify.tVerifyParm.u32PublicKeyId  = 0u;
            tVerify.tVerifyParm.pkGx            = pKeyTypePub->CryptoKeyElementDataPtr;
            tVerify.tVerifyParm.u32kGxByteCnt   = pKeyDescPub->CryptoKeyElementSize >> 1u;
            tVerify.tVerifyParm.pkGy            = pKeyTypePub->CryptoKeyElementDataPtr + tVerify.tVerifyParm.u32kGxByteCnt;
            tVerify.tVerifyParm.u32kGyByteCnt   = pKeyDescPub->CryptoKeyElementSize >> 1u;
            tVerify.tVerifyParm.ekGxyDataFmt    = HSM_DATA_FORMAT_1B;
        }
        else
        {
            tVerify.tVerifyParm.u32PublicKeyId  = pKeyDescPub->u32KeyIdForStore;
            tVerify.tVerifyParm.pkGx            = NULL_PTR;
            tVerify.tVerifyParm.u32kGxByteCnt   = 0u;
            tVerify.tVerifyParm.pkGy            = NULL_PTR;
            tVerify.tVerifyParm.u32kGyByteCnt   = 0u;
            tVerify.tVerifyParm.ekGxyDataFmt    = HSM_DATA_FORMAT_4B;
        }

        tVerify.tVerifyParm.pData               = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
        tVerify.tVerifyParm.u32DataByteCnt      = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
        tVerify.tVerifyParm.eDataFmt            = HSM_DATA_FORMAT_1B;

        tVerify.tVerifyParm.pR                  = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputPtr;
        tVerify.tVerifyParm.u32RByteCnt         = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputLength >> 1u;
        tVerify.tVerifyParm.eRDataFmt           = HSM_DATA_FORMAT_1B;

        tVerify.tVerifyParm.pS                  = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputPtr + tVerify.tVerifyParm.u32RByteCnt;
        tVerify.tVerifyParm.u32SByteCnt         = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputLength >> 1u;
        tVerify.tVerifyParm.eSDataFmt           = HSM_DATA_FORMAT_1B;

        Crypto_Prepare_Hsm();

        pStoredJob = (Crypto_JobType *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr;
        eRet = HSM_Ln_EccVerifySetupEnv((&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)),
                pStoredJob->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength);

        if (HSM_STATUS_SUCCESS == eRet)
        {
            if (HSM_STATUS_SUCCESS == HSM_Ln_EccVerify((&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)), &tVerify))
            {
                if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                {
                    if (0u != Crypto_WaitHsmAlgorithmFinish())
                    {
                        eRet = Crypto_GetHsmRet();
                        HSM_Ln_EccVerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    }
                    else
                    {
                        HSM_Ln_EccVerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                        /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif
                    }
                }
                else
                {
                    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_62();
                    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_62();
                }
            }
            else
            {
                HSM_Ln_EccVerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                eRet = HSM_STATUS_ERROR;
            }
        }

        if ((HSM_STATUS_SUCCESS != eRet)&&(HSM_STATUS_PASS != eRet))
        {
            eStatus = E_NOT_OK;
        }
        else
        {
            ;
        }
    }

    return eStatus;
}
#endif /* CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_ProcessRsaSignVeriReq(void)
{
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;

    HSM_ShaAlgType eHash;
    uint32         u32HashLen;
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;
    const Crypto_KeyTypeDescriptionType *pKeyTypeE  = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *pKeyTypeN  = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescE  = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescN  = NULL_PTR;
    HSM_L1_PublicKeyInfType              tKeyInf;
    uint32                               u32KeyEId  = 0u;
    uint32                               u32KeyNId  = 0u;
    Crypto_JobType                      *pStoredJob;
    uint32          u32CoreId = Crypto_GetCoreID();

    Crypto_LLD_memset_byte((uint8 *)&(tKeyInf), 0, sizeof(tKeyInf));

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_KEY, &pKeyTypeE, &pKeyDescE);
    if (eStatus == E_OK)
    {
        /*PRQA S 2983 ++
        2983: This assignment is redundant. The value of this object is never subsequently used.
        REASON:This assignment is necessary and will be used in the subsequently operations */
        pKeyTypeN = pKeyTypeE;
        /*PRQA S 2983 -- */
        pKeyDescN = pKeyDescE;

        u32KeyNId = pKeyDescE->u32KeyIdForStore;
        u32KeyEId = u32KeyNId + 0x2u;

        if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescE->u32CryptoStoreType) /* key data store in Cortex-M7 */
        {
            if (CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY == pKeyDescE->CryptoKeyElementFormat)
            {
                if (HSM_STATUS_SUCCESS == HSM_L1_SubjectPublicInfo_GetPublicKeyInfFromDer(pKeyTypeE->CryptoKeyElementDataPtr, &tKeyInf))
                {
                    if (HSM_L1_RSA_PUBLIC_KEY == tKeyInf.eKeyType)
                    {
                        ;
                    }
                    else
                    {
                        eStatus = E_NOT_OK;
                    }
                }
                else
                {
                    eStatus = E_NOT_OK;
                }
            }
            else if (CRYPTO_KE_FORMAT_BIN_RSA_PUBLICKEY == pKeyDescE->CryptoKeyElementFormat)
            {
                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS1_GetRsaPublicKeyInfFromDer(pKeyTypeE->CryptoKeyElementDataPtr, &tKeyInf.tPublicInf.tRsaKeyInf))
                {
                    /*PRQA S 2983 ++
                    2983: This assignment is redundant. The value of this object is never subsequently used.
                    REASON:This assignment is necessary and will be used in the subsequently operations */
                    tKeyInf.eKeyType = HSM_L1_RSA_PUBLIC_KEY;
                    /*PRQA S 2983 -- */
                }
                else
                {
                    eStatus = E_NOT_OK;
                }
            }
            else
            {
                eStatus = E_NOT_OK;
            }
        }
        else
        {
            ;
        }
    }
    else
    {
        eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_RSA_KEY_E, &pKeyTypeE, &pKeyDescE);
        if (eStatus == E_OK)
        {
            eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_RSA_KEY_N, &pKeyTypeN, &pKeyDescN);
        }

        if (E_OK == eStatus)
        {
            /*PRQA S 2983 ++
            2983: This assignment is redundant. The value of this object is never subsequently used.
            REASON:This assignment is necessary and will be used in the subsequently operations */
            tKeyInf.eKeyType                = HSM_L1_RSA_PUBLIC_KEY;
            /*PRQA S 2983 -- */
            tKeyInf.tPublicInf.tRsaKeyInf.pE           = pKeyTypeE->CryptoKeyElementDataPtr;
            tKeyInf.tPublicInf.tRsaKeyInf.u32EByteCnt  = pKeyDescE->CryptoKeyElementSize;
            tKeyInf.tPublicInf.tRsaKeyInf.pN           = pKeyTypeN->CryptoKeyElementDataPtr;
            tKeyInf.tPublicInf.tRsaKeyInf.u32NByteCnt  = pKeyDescN->CryptoKeyElementSize;

            u32KeyNId                       = pKeyDescN->u32KeyIdForStore;
            u32KeyEId                       = pKeyDescE->u32KeyIdForStore;
        }
        /* else do nothing */
    }

    if (E_OK == eStatus)
    {
        eStatus = Crypto_LLD_GetHashAlgo(
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.secondaryFamily,
            &u32HashLen,
            &eHash);
    }

    if (eStatus == E_OK)
    {
        if (CRYPTO_ALGOMODE_RSASSA_PSS == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            HSM_Ln_RsaSsaPssVerifyType tVerify = {0};

            tVerify.u32EmBitCnt             = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength - 1;
            tVerify.eMgfHashType            = eHash;
            tVerify.eHashType               = eHash;
            tVerify.u32SaltByteCount        = u32HashLen;
            tVerify.eInputDataFmt           = HSM_DATA_FORMAT_1B;
            tVerify.eInputType              = HSM_RSA_SSA_INPUT_RAW_MESSAGE;
            tVerify.pInputData              = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tVerify.u32InputDataByteCount   = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tVerify.eSignDataFmt            = HSM_DATA_FORMAT_1B;
            tVerify.pSignData               = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputPtr;
            tVerify.u32SignDataByteCount    = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputLength;

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescE->u32CryptoStoreType)
            {
                tVerify.u32KeyEId           = 0u;
                tVerify.ePublicKeyDataFmt   = HSM_DATA_FORMAT_1B;
            }
            else
            {
                tVerify.u32KeyEId           = u32KeyEId;
                tVerify.ePublicKeyDataFmt   = HSM_DATA_FORMAT_1B;
            }

            tVerify.pPublicKey              = (const uint8 *)tKeyInf.tPublicInf.tRsaKeyInf.pE; /* pKeyTypeE->CryptoKeyElementDataPtr; */
            tVerify.u32PublicKeyByteCnt     = tKeyInf.tPublicInf.tRsaKeyInf.u32EByteCnt; /* pKeyDescE->CryptoKeyElementSize; */

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescN->u32CryptoStoreType)
            {
                tVerify.u32KeyNId           = 0U;
                tVerify.eKeyNDataFmt        = HSM_DATA_FORMAT_1B;
            }
            else
            {
                tVerify.u32KeyNId           = u32KeyNId;
                tVerify.eKeyNDataFmt        = HSM_DATA_FORMAT_1B;
            }

            tVerify.pKeyN                   = (const uint8 *)tKeyInf.tPublicInf.tRsaKeyInf.pN; /*  pKeyTypeN->CryptoKeyElementDataPtr; */
            tVerify.u32KeyNByteCount        = tKeyInf.tPublicInf.tRsaKeyInf.u32NByteCnt; /*  pKeyDescN->CryptoKeyElementSize; */
            tVerify.pVerifyResult           = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.verifyPtr;

            Crypto_Prepare_Hsm();
            pStoredJob = (Crypto_JobType *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr;
            if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPssVerifySetupEnv((&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)), pStoredJob->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength))
            {
                if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPssVerify((&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)), &tVerify))
                {
                    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                    {
                        if (0u != Crypto_WaitHsmAlgorithmFinish())
                        {
                            eRet = Crypto_GetHsmRet();
                            HSM_Ln_RsaSsaPssVerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        }
                        else
                        {
                            HSM_Ln_RsaSsaPssVerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                            eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                            /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                            (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                        }
                    }
                    else
                    {
                        SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_61();
                        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_61();
                    }
                }
                else
                {
                    HSM_Ln_RsaSsaPssVerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_ERROR;
                }
            }

            if ((HSM_STATUS_SUCCESS != eRet)&&(HSM_STATUS_PASS != eRet))
            {
                eStatus = E_NOT_OK;
            }
            else
            {
                ;
            }
        }
        else if (CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            HSM_Ln_RsaSsaPkcs1v15VerifyType tVerify = {0};

            tVerify.u32EmByteCnt            = (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength + 7) >> 3u;
            tVerify.eHashType               = eHash;
            tVerify.eInputDataFmt           = HSM_DATA_FORMAT_1B;
            tVerify.pInputData              = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
            tVerify.u32InputDataByteCount   = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
            tVerify.eSignDataFmt            = HSM_DATA_FORMAT_1B;
            tVerify.pSignData               = (uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputPtr;
            tVerify.u32SignDataByteCount    = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputLength;

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescE->u32CryptoStoreType)
            {
                tVerify.u32KeyEId               = 0u;
                tVerify.ePublicKeyFmt           = HSM_DATA_FORMAT_1B;

            }
            else
            {
                tVerify.u32KeyEId               = u32KeyEId;
                tVerify.ePublicKeyFmt           = HSM_DATA_FORMAT_1B;
            }

            tVerify.pPublicKey              = (const uint8 *)tKeyInf.tPublicInf.tRsaKeyInf.pE; /*  pKeyTypeE->CryptoKeyElementDataPtr; */
            tVerify.u32PublicKeyByteCnt     = tKeyInf.tPublicInf.tRsaKeyInf.u32EByteCnt; /*  pKeyDescE->CryptoKeyElementSize; */

            tVerify.bUseInputDer            = HSM_FALSE;
            tVerify.pDer                    = NULL_PTR;
            tVerify.u32DerByteCount         = 0u;

            if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescN->u32CryptoStoreType)
            {
                tVerify.u32KeyNId               = 0U;
                tVerify.eKeyNFmt                = HSM_DATA_FORMAT_1B;
            }
            else
            {
                tVerify.u32KeyNId               = u32KeyNId;
                tVerify.eKeyNFmt                = HSM_DATA_FORMAT_1B;
            }

            tVerify.pKeyN                   = (const uint8 *)tKeyInf.tPublicInf.tRsaKeyInf.pN; /*  pKeyTypeN->CryptoKeyElementDataPtr; */
            tVerify.u32KeyNByteCount        = tKeyInf.tPublicInf.tRsaKeyInf.u32NByteCnt; /*  pKeyDescN->CryptoKeyElementSize; */
            tVerify.pVerifyResult           = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.verifyPtr;

            Crypto_Prepare_Hsm();
            pStoredJob = (Crypto_JobType *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr;
            if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPkcs1v15VerifySetupEnv((&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)), pStoredJob->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength))
            {
                if (HSM_STATUS_SUCCESS == HSM_Ln_RsaSsaPkcs1v15Verify((&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)), &tVerify))
                {
                    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                    {
                        if (0u != Crypto_WaitHsmAlgorithmFinish())
                        {
                            eRet = Crypto_GetHsmRet();
                            HSM_Ln_RsaSsaPkcs1v15VerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        }
                        else
                        {
                            HSM_Ln_RsaSsaPkcs1v15VerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                            eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                            /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                            (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                        }
                    }
                    else
                    {
                        SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_61();
                        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_61();
                    }
                }
                else
                {
                    HSM_Ln_RsaSsaPkcs1v15VerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_ERROR;
                }
            }

            if ((HSM_STATUS_SUCCESS != eRet)&&(HSM_STATUS_PASS != eRet))
            {
                eStatus = E_NOT_OK;
            }
            else
            {
                ;
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }
    return eStatus;
}
#endif /* CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)
const uint8 aSm2Oid[]                   = {0x2A, 0x81, 0x1C, 0xcf, 0x55, 0x01, 0x82, 0x2d};

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_ProcessSm2SignVeriReq(void)
{
    Std_ReturnType eStatus = (Std_ReturnType)E_OK;
    const Crypto_KeyTypeDescriptionType *pKeyTypePublicKey  = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *pKeyTypeUserId     = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *pKeyTypeCurve      = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescPublicKey  = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescUserId     = NULL_PTR;
    const Crypto_KeyElemDescType        *pKeyDescCurve      = NULL_PTR;

    HSM_Ln_Sm2VerifyType                tSm2VerifyCfg = {0};
    HSM_StatusType eRet = HSM_STATUS_SUCCESS;
    uint32          u32CoreId = Crypto_GetCoreID();

    Crypto_LLD_memset_byte((uint8 *)&(tSm2VerifyCfg), 0, sizeof(tSm2VerifyCfg));

    eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_CURVETYPE, &pKeyTypeCurve, &pKeyDescCurve);

    if (E_OK == eStatus)
    {
        if (0 == hsm_memcmp(pKeyTypeCurve->CryptoKeyElementDataPtr, &aSm2Oid[0], 8u))
        {
            eStatus = Crypto_LLD_GetKey(CRYPTO_KE_CIPHER_SM2_USERID, &pKeyTypeUserId, &pKeyDescUserId);

            if (eStatus == E_NOT_OK)
            {
                tSm2VerifyCfg.tVerifyParm.bUseDefaultID = HSM_TRUE;
                tSm2VerifyCfg.tVerifyParm.pInputData_ID = NULL_PTR;
                tSm2VerifyCfg.tVerifyParm.u32SM2InputIDByteCnt = 0u;
            }
            else
            {
                tSm2VerifyCfg.tVerifyParm.bUseDefaultID = HSM_FALSE;
                tSm2VerifyCfg.tVerifyParm.pInputData_ID = pKeyTypeUserId->CryptoKeyElementDataPtr;
                tSm2VerifyCfg.tVerifyParm.u32SM2InputIDByteCnt = pKeyDescUserId->CryptoKeyElementSize;
            }

            eStatus = Crypto_LLD_GetKey(CRYPTO_KE_SIGNATURE_KEY, &pKeyTypePublicKey, &pKeyDescPublicKey);
            if (eStatus == E_OK)
            {
                tSm2VerifyCfg.eInputType = HSM_SM2_VERIFY_INPUT_RAW_MESSAGE;
                tSm2VerifyCfg.pVerifyResult = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.verifyPtr;
                tSm2VerifyCfg.tVerifyParm.pData = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr;
                tSm2VerifyCfg.tVerifyParm.u32DataByteCnt = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength;
                tSm2VerifyCfg.tVerifyParm.eDataFmt = HSM_DATA_FORMAT_1B;
                tSm2VerifyCfg.tVerifyParm.pR = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputPtr;
                tSm2VerifyCfg.tVerifyParm.u32RByteCnt = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputLength >> 1u;
                tSm2VerifyCfg.tVerifyParm.pS = (const uint8 *)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputPtr + tSm2VerifyCfg.tVerifyParm.u32RByteCnt;
                tSm2VerifyCfg.tVerifyParm.u32SByteCnt = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryInputLength >> 1u;
                tSm2VerifyCfg.tVerifyParm.eRSDataFmt = HSM_DATA_FORMAT_1B;

                if (CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == pKeyDescPublicKey->u32CryptoStoreType)
                {
                    tSm2VerifyCfg.tVerifyParm.u32PublicKeyId  = 0u;
                    tSm2VerifyCfg.tVerifyParm.pkGx            = pKeyTypePublicKey->CryptoKeyElementDataPtr;
                    tSm2VerifyCfg.tVerifyParm.u32kGxByteCnt   = pKeyDescPublicKey->CryptoKeyElementSize >> 1u;
                    tSm2VerifyCfg.tVerifyParm.pkGy            = pKeyTypePublicKey->CryptoKeyElementDataPtr + tSm2VerifyCfg.tVerifyParm.u32kGxByteCnt;
                    tSm2VerifyCfg.tVerifyParm.u32kGyByteCnt   = pKeyDescPublicKey->CryptoKeyElementSize >> 1u;
                    tSm2VerifyCfg.tVerifyParm.ekGxyDataFmt    = HSM_DATA_FORMAT_1B;
                }
                else
                {
                    tSm2VerifyCfg.tVerifyParm.u32PublicKeyId  = pKeyDescPublicKey->u32KeyIdForStore;
                    tSm2VerifyCfg.tVerifyParm.pkGx            = NULL_PTR;
                    tSm2VerifyCfg.tVerifyParm.u32kGxByteCnt   = 32u;
                    tSm2VerifyCfg.tVerifyParm.pkGy            = NULL_PTR;
                    tSm2VerifyCfg.tVerifyParm.u32kGyByteCnt   = 32u;
                    tSm2VerifyCfg.tVerifyParm.ekGxyDataFmt    = HSM_DATA_FORMAT_4B;
                }

                Crypto_Prepare_Hsm();

                eRet = HSM_Ln_Sm2VerifySetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));

                if (HSM_STATUS_SUCCESS == eRet)
                {
                    if (HSM_STATUS_SUCCESS == HSM_Ln_Sm2Verify((&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)), &tSm2VerifyCfg))
                    {
                        if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
                        {
                            if (0u != Crypto_WaitHsmAlgorithmFinish())
                            {
                                eRet = Crypto_GetHsmRet();
                                HSM_Ln_Sm2VerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                            }
                            else
                            {
                                HSM_Ln_Sm2VerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                                eRet = HSM_STATUS_TIMEOUT_ERR;

        #if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                                /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                                (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
        #endif
                            }
                        }
                        else
                        {
                            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_56();
                            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_56();
                        }
                    }
                    else
                    {
                        HSM_Ln_Sm2VerifyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        eRet = HSM_STATUS_ERROR;
                    }
                }

                if ((HSM_STATUS_SUCCESS != eRet)&&(HSM_STATUS_PASS != eRet))
                {
                    eStatus = E_NOT_OK;
                }
                else
                {
                    /*Do nothing*/
                }
            }
            else
            {
                /*Do nothing*/
            }
        }
        else
        {
            eStatus = E_NOT_OK;
        }
    }

    return eStatus;
}
#endif /* CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessVerifySignatureReq processes a SIGNATURE_VERIFY service request.
* @details The function is responsible of the sequence to proceed to a signature verification operation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_ProcessVerifySignatureReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    uint32          u32CoreId   = Crypto_GetCoreID();

    if (CRYPTO_ALGOFAM_ECCNIST == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        eStatus = Crypto_LLD_ProcessEccSignVeriReq();
    }
    else if (CRYPTO_ALGOFAM_RSA == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        eStatus = Crypto_LLD_ProcessRsaSignVeriReq();
    }
    else if (CRYPTO_ALGOFAM_SM2 == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
        eStatus = Crypto_LLD_ProcessSm2SignVeriReq();
    }
    else
    {
        eStatus = E_NOT_OK;
    }

    return eStatus;
}
#endif /* CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The function Crypto_LLD_ProcessRngReq processes a RANDOM_GENERATE service request.
* @details The function is responsible of the sequence to proceed to a random number generation in HSM.
*
* @pre     The HSM is ready to receive a request (no ongoing operation)
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_RANDOM_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ProcessRngReq(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet        = HSM_STATUS_SUCCESS;
    uint32          u32CoreId   = Crypto_GetCoreID();
    HSM_Ln_RngType  tParamType = {0};

    tParamType.pResult          = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr;
    tParamType.u32ResultBufSize = *(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr);

    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode == CRYPTO_ALGOMODE_TRUE_RNG)
    {
#if (CRYPTO_FAST_TRNG_SAMPLE_SIZE < 64u)
    tParamType.u32TrngBytesEachTime = CRYPTO_FAST_TRNG_SAMPLE_SIZE;
    tParamType.eRngSrc.eFastTrngSrc = HSMCOM_FASTTRNG_SRC_NORMAL;
#else /* (CRYPTO_FAST_TRNG_SAMPLE_SIZE < 64u) */
    tParamType.u32TrngBytesEachTime = 64u;
#if (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM)
        tParamType.eRngSrc.eTrngSrc = HSMCOM_TRNG_SRC_ANY;
#else /* (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM) */
        tParamType.eRngSrc.eTrngSrc = HSMCOM_TRNG_SRC_1;
#endif /* (FC7XXX_HSM_SUBSYSTEM_TYPE == FC7300_HSM_SUBSYSTEM) */
#endif /* (CRYPTO_FAST_TRNG_SAMPLE_SIZE < 64u) */
    }
    else
    {
        tParamType.u32TrngBytesEachTime = 64u;
        tParamType.eRngSrc.eTrngSrc = HSMCOM_TRNG_SRC_SHIFTXOR;
    }

    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_RngSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_Rng(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tParamType))
        {
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_RngExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_RngExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* may CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK configure error */
                    (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
#endif

                }
            }
            else
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_54();
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 1;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_54();
            }
        }
        else
        {
            HSM_Ln_RngExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if (HSM_STATUS_SUCCESS != eRet)
    {
        eStatus = E_NOT_OK;
    }
    else
    {
        ;
    }

    return (Std_ReturnType)eStatus;
}
#endif /* CRYPTO_RANDOM_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)

/*PRQA S 2982,2983 ++
2982: This assignment is redundant. The value of this object is never used before being modified.
REASON:This assignment is necessary for flexibility of code reviewing
2983: This assignment is redundant. The value of this object is never subsequently used.
REASON:This assignment is necessary and will be used in the subsequently operations */
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_Key_LLD_KeyStore(uint32 cryptoKeyId)
{
    uint32 u32KeyElemIdxInList;
    uint32 counter;
    Std_ReturnType eRet = E_OK;
    HSM_Ln_PlainKeyImport tCfg = {0};
#if (CRYPTO_SHE_SUPPORT == STD_ON)       
    HSM_LN_UpdateSheKeyType tUpdateSheKeyCfg = {0};
    uint32 u32SheCipherProofIndex;
    const Crypto_KeyTypeDescriptionType *pSheCipherProofDesc;
#endif /* (CRYPTO_SHE_SUPPORT == STD_ON) */

    /* Find keyElementId */
    /* Parse list of keyelement of the keys.*/
    if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0U))
    {
        /* PRQA S 0771 ++ #Misra-C:2012 Rule-15.4 More than one 'break' statement has been used to terminate this iteration statement.
            Reason: The 'break' statements are under different conditions . */
        for (counter = 0UL; counter < Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.NumberCryptoKeyElement; counter++)
        {
            u32KeyElemIdxInList = Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[counter].CryptoKeyElement;

            if (Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementPersist == HSM_TRUE)
            {
                if ((Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32CryptoStoreType == CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX) ||
                    (Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32CryptoStoreType == CRYPTO_HSM_KEY_LOCATION_NVM_RAM_KEY_IDX) )
                {
                    if (Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore != 0u)
                    {
                        tCfg.pKeyData           = Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[counter].CryptoKeyElementDataPtr;
                        tCfg.eKeyDataFmt        = HSM_DATA_FORMAT_1B;
                        tCfg.u32KeyDataByteCnt  = Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementSize;
                        tCfg.u32KeyId           = Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore;

                        if (CRYPTO_RA_ALLOWED == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementReadAccess)
                        {
                            tCfg.eExportType = KEYMANAGER_KEY_EXPORT_PLAIN;
                        }
                        else if (CRYPTO_RA_ENCRYPTED == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementReadAccess)
                        {
                            tCfg.eExportType = KEYMANAGER_KEY_EXPORT_CIPHER;
                        }
                        else
                        {
                            tCfg.eExportType = KEYMANAGER_KEY_EXPORT_FORBIRD;
                        }

                        if (CRYPTO_KEY_ELEMENT_FAMILY_RSA_PRIVATE == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily) /* n, e */
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;

                            HSM_L1_PKCS8_PrivateKeyInfType tKeyInf;

                            if (CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8 == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS8_GetPrivateKeyInfFromDer(tCfg.pKeyData, &tKeyInf))
                                {
                                    if (HSM_L1_PKCS8_RSA_PRIVATE_KEY == tKeyInf.eKeyType)
                                    {
                                        tCfg.pKeyData          = tKeyInf.tPrivateInfo.tRsaKeyInf.pN;
                                        tCfg.u32KeyDataByteCnt = tKeyInf.tPrivateInfo.tRsaKeyInf.u32NByteCnt;
                                    }
                                    else
                                    {
                                        eRet = E_NOT_OK;
                                    }
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_RSA_PRIVATEKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS1_GetRsaPrivateKeyInfFromDer(tCfg.pKeyData, &tKeyInf.tPrivateInfo.tRsaKeyInf))
                                {
                                    tKeyInf.eKeyType = HSM_L1_PKCS8_RSA_PRIVATE_KEY;

                                    tCfg.pKeyData          = tKeyInf.tPrivateInfo.tRsaKeyInf.pN;
                                    tCfg.u32KeyDataByteCnt = tKeyInf.tPrivateInfo.tRsaKeyInf.u32NByteCnt;
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else
                            {
                                eRet = E_NOT_OK;
                            }

                            if (E_OK == eRet)
                            {
                                tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_RSA_N;

                                eRet = Crypto_LLD_UpdateKey(&tCfg);
                            }

                            if (E_OK == eRet)
                            {
                                tCfg.pKeyData           = tKeyInf.tPrivateInfo.tRsaKeyInf.pD;
                                tCfg.u32KeyDataByteCnt  = tKeyInf.tPrivateInfo.tRsaKeyInf.u32DByteCnt;
                                tCfg.eKeyUsage          = KEYMANAGER_USER_KEY_TYPE_RSA_E;

                                tCfg.u32KeyId += 0x2u;
                            }
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_RSA_PUBLIC == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily) /* n, e */
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;

                            HSM_L1_PublicKeyInfType tKeyInf;

                            if (CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_SubjectPublicInfo_GetPublicKeyInfFromDer(tCfg.pKeyData, &tKeyInf))
                                {
                                    if (HSM_L1_RSA_PUBLIC_KEY == tKeyInf.eKeyType)
                                    {
                                        tCfg.pKeyData          = tKeyInf.tPublicInf.tRsaKeyInf.pN;
                                        tCfg.u32KeyDataByteCnt = tKeyInf.tPublicInf.tRsaKeyInf.u32NByteCnt;
                                    }
                                    else
                                    {
                                        eRet = E_NOT_OK;
                                    }
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_RSA_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS1_GetRsaPublicKeyInfFromDer(tCfg.pKeyData, &tKeyInf.tPublicInf.tRsaKeyInf))
                                {
                                    tKeyInf.eKeyType = HSM_L1_RSA_PUBLIC_KEY;

                                    tCfg.pKeyData          = tKeyInf.tPublicInf.tRsaKeyInf.pN;
                                    tCfg.u32KeyDataByteCnt = tKeyInf.tPublicInf.tRsaKeyInf.u32NByteCnt;
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else
                            {
                                eRet = E_NOT_OK;
                            }

                            if (E_OK == eRet)
                            {
                                tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_RSA_N;

                                eRet = Crypto_LLD_UpdateKey(&tCfg);
                            }

                            if (E_OK == eRet)
                            {
                                tCfg.pKeyData          = tKeyInf.tPublicInf.tRsaKeyInf.pE;
                                tCfg.u32KeyDataByteCnt = tKeyInf.tPublicInf.tRsaKeyInf.u32EByteCnt;
                                tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_RSA_E;

                                tCfg.u32KeyId += 0x2u;
                            }
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_RSA_N == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily) /* n, e */
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_RSA_N;

                            if (CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8 == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                HSM_L1_PKCS8_PrivateKeyInfType tKeyInf;

                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS8_GetPrivateKeyInfFromDer(tCfg.pKeyData, &tKeyInf))
                                {
                                    if (HSM_L1_PKCS8_RSA_PRIVATE_KEY == tKeyInf.eKeyType)
                                    {
                                        tCfg.pKeyData          = tKeyInf.tPrivateInfo.tRsaKeyInf.pN;
                                        tCfg.u32KeyDataByteCnt = tKeyInf.tPrivateInfo.tRsaKeyInf.u32NByteCnt;
                                    }
                                    else
                                    {
                                        eRet = E_NOT_OK;
                                    }
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_RSA_PRIVATEKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                HSM_L1_PKCS8_PrivateKeyInfType tKeyInf;

                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS1_GetRsaPrivateKeyInfFromDer(tCfg.pKeyData, &tKeyInf.tPrivateInfo.tRsaKeyInf))
                                {
                                    tKeyInf.eKeyType = HSM_L1_PKCS8_RSA_PRIVATE_KEY;

                                    tCfg.pKeyData          = tKeyInf.tPrivateInfo.tRsaKeyInf.pN;
                                    tCfg.u32KeyDataByteCnt = tKeyInf.tPrivateInfo.tRsaKeyInf.u32NByteCnt;
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                HSM_L1_PublicKeyInfType tKeyInf;

                                if (HSM_STATUS_SUCCESS == HSM_L1_SubjectPublicInfo_GetPublicKeyInfFromDer(tCfg.pKeyData, &tKeyInf))
                                {
                                    if (HSM_L1_RSA_PUBLIC_KEY == tKeyInf.eKeyType)
                                    {
                                        tCfg.pKeyData          = tKeyInf.tPublicInf.tRsaKeyInf.pN;
                                        tCfg.u32KeyDataByteCnt = tKeyInf.tPublicInf.tRsaKeyInf.u32NByteCnt;
                                    }
                                    else
                                    {
                                        eRet = E_NOT_OK;
                                    }
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_RSA_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                HSM_L1_PublicKeyInfType tKeyInf;

                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS1_GetRsaPublicKeyInfFromDer(tCfg.pKeyData, &tKeyInf.tPublicInf.tRsaKeyInf))
                                {
                                    tKeyInf.eKeyType = HSM_L1_RSA_PUBLIC_KEY;

                                    tCfg.pKeyData          = tKeyInf.tPublicInf.tRsaKeyInf.pN;
                                    tCfg.u32KeyDataByteCnt = tKeyInf.tPublicInf.tRsaKeyInf.u32NByteCnt;
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_OCTET == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {}
                            else
                            {
                                eRet = E_NOT_OK;
                            }
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_RSA_D == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_RSA_E;

                            HSM_L1_PKCS8_PrivateKeyInfType tKeyInf;

                            if (CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8 == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS8_GetPrivateKeyInfFromDer(tCfg.pKeyData, &tKeyInf))
                                {
                                    if (HSM_L1_PKCS8_RSA_PRIVATE_KEY == tKeyInf.eKeyType)
                                    {
                                        tCfg.pKeyData          = tKeyInf.tPrivateInfo.tRsaKeyInf.pD;
                                        tCfg.u32KeyDataByteCnt = tKeyInf.tPrivateInfo.tRsaKeyInf.u32DByteCnt;
                                    }
                                    else
                                    {
                                        eRet = E_NOT_OK;
                                    }
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_RSA_PRIVATEKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS1_GetRsaPrivateKeyInfFromDer(tCfg.pKeyData, &tKeyInf.tPrivateInfo.tRsaKeyInf))
                                {
                                    tKeyInf.eKeyType = HSM_L1_PKCS8_RSA_PRIVATE_KEY;

                                    tCfg.pKeyData          = tKeyInf.tPrivateInfo.tRsaKeyInf.pD;
                                    tCfg.u32KeyDataByteCnt = tKeyInf.tPrivateInfo.tRsaKeyInf.u32DByteCnt;
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_OCTET == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {}
                            else
                            {
                                eRet = E_NOT_OK;
                            }
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_RSA_E == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_RSA_E;

                            HSM_L1_PublicKeyInfType tKeyInf;

                            if (CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_SubjectPublicInfo_GetPublicKeyInfFromDer(tCfg.pKeyData, &tKeyInf))
                                {
                                    if (HSM_L1_RSA_PUBLIC_KEY == tKeyInf.eKeyType)
                                    {
                                        tCfg.pKeyData          = tKeyInf.tPublicInf.tRsaKeyInf.pE;
                                        tCfg.u32KeyDataByteCnt = tKeyInf.tPublicInf.tRsaKeyInf.u32EByteCnt;
                                    }
                                    else
                                    {
                                        eRet = E_NOT_OK;
                                    }
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_RSA_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {
                                if (HSM_STATUS_SUCCESS == HSM_L1_PKCS1_GetRsaPublicKeyInfFromDer(tCfg.pKeyData, &tKeyInf.tPublicInf.tRsaKeyInf))
                                {
                                    tKeyInf.eKeyType = HSM_L1_RSA_PUBLIC_KEY;

                                    tCfg.pKeyData          = tKeyInf.tPublicInf.tRsaKeyInf.pE;
                                    tCfg.u32KeyDataByteCnt = tKeyInf.tPublicInf.tRsaKeyInf.u32EByteCnt;
                                }
                                else
                                {
                                    eRet = E_NOT_OK;
                                }
                            }
                            else if (CRYPTO_KE_FORMAT_BIN_OCTET == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat)
                            {}
                            else
                            {
                                eRet = E_NOT_OK;
                            }
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_ECC_PRIVATE == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_BN_LOADABLE;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_ECC_PRIVATE;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_ECC_PUBLIC == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_SPLIT_BN_LOADABLE;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_ECC_PUBLIC;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_SM2_PRIVATE == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_BN_LOADABLE;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_SM2_PRIVATE;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_SM2_PUBLIC == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_SPLIT_BN_LOADABLE;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_SM2_PUBLIC;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_SM4_KEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_SM4;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_SM4_IV == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_IV;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_AES_KEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_AES;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_AES_IV == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_IV;
                        }
                        else if (CRYPTO_KEY_ELEMENT_FAMILY_CMAC_KEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily)
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_CMAC_KEY;
                        }
                        else if ((CRYPTO_KEY_ELEMENT_FAMILY_MD5_MAC_KEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily) ||
                                 (CRYPTO_KEY_ELEMENT_FAMILY_SHA_MAC_KEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily) ||
                                 (CRYPTO_KEY_ELEMENT_FAMILY_SM3_MAC_KEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily))
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_HASHMAC_KEY;
                        }
                        else
                        {
                            tCfg.eKeyStoreFmt = HSM_LN_KEY_DATA_STORE_FMT_1B;
                            tCfg.eKeyUsage    = KEYMANAGER_USER_KEY_TYPE_NONE;
                        }

                        if (E_OK == eRet)
                        {
                            eRet = Crypto_LLD_UpdateKey(&tCfg);
                        }

                        if (E_OK != eRet)
                        {
                            break;
                        }
                    }
                    else
                    {
                        eRet = E_NOT_OK;
                        break;
                    }
                }
                else if ((Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32CryptoStoreType == CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX) )
                {
#if (CRYPTO_SHE_SUPPORT == STD_ON)                    
                    if((CRYPTO_KEYELEMENT_NOT_FOUND != Crypto_LLD_FindKeyElement(cryptoKeyId, CRYPTO_KE_CIPHER_PROOF, &u32SheCipherProofIndex)) &&
                        (CRYPTO_KE_CIPHER_KEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementId))
                    {
                        pSheCipherProofDesc = &(Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[u32SheCipherProofIndex]);

                        if(Crypto_CryptoKeyElementList_PC[pSheCipherProofDesc->CryptoKeyElement].CryptoKeyElementSize >= (SHE_M4_SIZE + SHE_M5_SIZE))
                        {
                            tUpdateSheKeyCfg.pM1M2M3 = Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[counter].CryptoKeyElementDataPtr;
                            tUpdateSheKeyCfg.pM4 = pSheCipherProofDesc->CryptoKeyElementDataPtr;
                            tUpdateSheKeyCfg.pM5 = pSheCipherProofDesc->CryptoKeyElementDataPtr + SHE_M4_SIZE;
                            tUpdateSheKeyCfg.u32M1M2M3ByteCnt = SHE_M1M2M3_SIZE;
                            tUpdateSheKeyCfg.u32M4BufSize = SHE_M4_SIZE;
                            tUpdateSheKeyCfg.u32M5BufSize = SHE_M5_SIZE;
                            tUpdateSheKeyCfg.u32KeyID = Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore;

                            if(CRYPTO_WA_DENIED != Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementWriteAccess)
                            {
                                tUpdateSheKeyCfg.bRevokeSupport = HSM_TRUE;
                            }
                            else
                            {
                                tUpdateSheKeyCfg.bRevokeSupport = HSM_FALSE;
                            }

                            eRet = Crypto_LLD_UpdateSheKey(&tUpdateSheKeyCfg);
                        }
                        else
                        {
                            eRet = E_NOT_OK;
                        }
                    }
                    else
                    {
                        eRet = E_NOT_OK;
                    }
                    break;
#else
                    eRet = E_NOT_OK;
#endif /* (CRYPTO_SHE_SUPPORT == STD_ON)   */
                }
                else
                {
                    /* else do nothing */
                }
            }
            /* else do nothing */
        }
        /* PRQA S 0771 -- */
    }

    return eRet;
}
/*PRQA S 2982,2983 --*/
#endif

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_UpdateKey(const HSM_Ln_PlainKeyImport *pCfg)
{
    HSM_StatusType          eRet = HSM_STATUS_SUCCESS;
    Std_ReturnType          eStatus = (Std_ReturnType)E_OK;
    uint32                  u32CoreId = Crypto_GetCoreID();

    if((CRYPTO_DRIVER_IDLE !=  Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus))
    {
        eStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        Crypto_Prepare_Hsm();

        if (HSM_STATUS_SUCCESS == HSM_Ln_UpdateKeySetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
        {
            if (HSM_STATUS_SUCCESS == HSM_Ln_UpdateKey(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), pCfg))
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_UpdateKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_UpdateKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;
                }
            }
            else
            {
                HSM_Ln_UpdateKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                eRet = HSM_STATUS_ERROR;
            }
        }
        else
        {
            eRet = HSM_STATUS_ERROR;
        }

        if (HSM_STATUS_SUCCESS != eRet)
        {
            eStatus = E_NOT_OK;
        }
        else
        {
            ;
        }
    }

    return eStatus;
}
#endif

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_SHE_SUPPORT == STD_ON)   
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_UpdateSheKey(const HSM_LN_UpdateSheKeyType *pCfg)
{
    HSM_StatusType          eRet = HSM_STATUS_SUCCESS;
    Std_ReturnType          eStatus = (Std_ReturnType)E_OK;
    uint32                  u32CoreId = Crypto_GetCoreID();

    if((CRYPTO_DRIVER_IDLE !=  Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus))
    {
        eStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        Crypto_Prepare_Hsm();

        if (HSM_STATUS_SUCCESS == HSM_Ln_UpdateSheKeySetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
        {
            if (HSM_STATUS_SUCCESS == HSM_Ln_UpdateSheKey(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), pCfg))
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_UpdateSheKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_UpdateSheKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;
                }
            }
            else
            {
                HSM_Ln_UpdateSheKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                eRet = HSM_STATUS_ERROR;
            }
        }
        else
        {
            eRet = HSM_STATUS_ERROR;
        }

        if (HSM_STATUS_SUCCESS != eRet)
        {
            eStatus = E_NOT_OK;
        }
        else
        {
            ;
        }
    }

    return eStatus;
}
#endif /* (CRYPTO_SHE_SUPPORT == STD_ON) */
#endif /* (CRYPTO_KEY_CONFIGURED == STD_ON) */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_RevokeKey(uint32 u32KeyId)
{
    HSM_StatusType          eRet = HSM_STATUS_SUCCESS;
    Std_ReturnType          eStatus = (Std_ReturnType)E_OK;
    uint32                  u32CoreId = Crypto_GetCoreID();

    if((CRYPTO_DRIVER_IDLE !=  Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus))
    {
        eStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        Crypto_Prepare_Hsm();

        if (HSM_STATUS_SUCCESS == HSM_Ln_RevokeKeySetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
        {
            if (HSM_STATUS_SUCCESS == HSM_Ln_RevokeKey(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), u32KeyId))
            {
                if (0u != Crypto_WaitHsmAlgorithmFinish())
                {
                    eRet = Crypto_GetHsmRet();
                    HSM_Ln_RevokeKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                }
                else
                {
                    HSM_Ln_RevokeKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_TIMEOUT_ERR;
                }
            }
            else
            {
                HSM_Ln_RevokeKeyExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                eRet = HSM_STATUS_ERROR;
            }
        }
        else
        {
            eRet = HSM_STATUS_ERROR;
        }

        if (HSM_STATUS_SUCCESS != eRet)
        {
            eStatus = E_NOT_OK;
        }
        else
        {
            ;
        }
    }
    
    return eStatus;
}
#endif

#if (CRYPTO_KEY_CONFIGURED == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_Key_LLD_KeyRevoke(uint32 cryptoKeyId)
{
    uint32 u32KeyElemIdxInList;
    uint32 counter;
    Std_ReturnType eRet = E_OK;

    /* Find keyElementId */
    /* Parse list of keyelement of the keys.*/
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
    if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0U))
    {
#endif
        for (counter = 0UL; counter < Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.NumberCryptoKeyElement; counter++)
        {
            u32KeyElemIdxInList = Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[counter].CryptoKeyElement;

            if (Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementPersist == HSM_TRUE)
            {
                if (Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32CryptoStoreType != CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX)
                {
                    if (Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore != 0u)
                    {
                        if ((CRYPTO_KEY_ELEMENT_FAMILY_RSA_PUBLIC == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily) ||
                            (CRYPTO_KEY_ELEMENT_FAMILY_RSA_PRIVATE == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].eKeyElementFamily))
                        {
                            if ((CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8 == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat) ||
                                (CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat) ||
                                (CRYPTO_KE_FORMAT_BIN_RSA_PRIVATEKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat) ||
                                (CRYPTO_KE_FORMAT_BIN_RSA_PUBLICKEY == Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementFormat))
                            {
                                eRet = Crypto_LLD_RevokeKey(Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore);
                                if (E_OK == eRet)
                                {
                                    eRet = Crypto_LLD_RevokeKey(Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore + 0x2u);
                                }
                            }
                            else
                            {
                                eRet = Crypto_LLD_RevokeKey(Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore);
                            }
                        }
                        else
                        {
                            eRet = Crypto_LLD_RevokeKey(Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].u32KeyIdForStore);
                        }

                    }
                    else
                    {
                        eRet = E_NOT_OK;
                    }
                }
                /* else do nothing */
            }
            /* else do nothing */
        }
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
    }
#endif

    return eRet;
}

#endif

#if (CRYPTO_KEY_CONFIGURED == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_ExportKey(uint32 cryptoKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr)
{
    uint32          u32KeyTypeIndex;
    uint32          u32KeyElementIndex;
    Std_ReturnType  eStatus = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet = HSM_STATUS_SUCCESS;
    uint32          u32CoreId = Crypto_GetCoreID();
    const Crypto_KeyElemDescType *KeyElementPtr = NULL_PTR;
    HSM_Ln_ExportUserKeyType tExportCfg = {0};

    if((CRYPTO_DRIVER_IDLE !=  Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus))
    {
        eStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0U))
        {
            u32KeyElementIndex = Crypto_LLD_FindKeyElement(cryptoKeyId, keyElementId, &u32KeyTypeIndex);

            if (u32KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
            {
                eStatus = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                KeyElementPtr = &Crypto_CryptoKeyElementList_PC[u32KeyElementIndex];

                if((KeyElementPtr->CryptoKeyElementPersist == HSM_TRUE) &&
                   ((KeyElementPtr->u32CryptoStoreType == CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX) || (KeyElementPtr->u32CryptoStoreType == CRYPTO_HSM_KEY_LOCATION_NVM_RAM_KEY_IDX)))
                {
                    if(KeyElementPtr->CryptoKeyElementReadAccess==CRYPTO_RA_ALLOWED)
                    {
                        tExportCfg.pDataAddr = resultPtr;
                        tExportCfg.pDataLength = resultLengthPtr;
                        tExportCfg.u32OutMemSize = *resultLengthPtr;
                        tExportCfg.u32KeyID = KeyElementPtr->u32KeyIdForStore;
                        tExportCfg.eEncryType = KEYMANAGER_ENDECRY_NONE;
                        tExportCfg.eAlgType = KEYMANAGER_ENDECRY_ALG_CTR;
                        tExportCfg.pIV = NULL_PTR;

                        if((CRYPTO_KEY_ELEMENT_FAMILY_ECC_PUBLIC == KeyElementPtr->eKeyElementFamily) ||
                           (CRYPTO_KEY_ELEMENT_FAMILY_SM2_PUBLIC == KeyElementPtr->eKeyElementFamily)
                        )
                        {
                            tExportCfg.eKeyExportFmt = HSM_LN_KEY_DATA_EXPORT_FMT_SPLIT_BN_LOADABLE;
                        }
                        else if((CRYPTO_KEY_ELEMENT_FAMILY_ECC_PRIVATE == KeyElementPtr->eKeyElementFamily) ||
                           (CRYPTO_KEY_ELEMENT_FAMILY_SM2_PRIVATE == KeyElementPtr->eKeyElementFamily)
                        )
                        {
                            tExportCfg.eKeyExportFmt = HSM_LN_KEY_DATA_EXPORT_FMT_BN_LOADABLE;
                        }
                        else
                        {
                            tExportCfg.eKeyExportFmt = HSM_LN_KEY_DATA_EXPORT_FMT_1B;
                        }

                        if(CRYPTO_KE_FORMAT_BIN_OCTET != KeyElementPtr->CryptoKeyElementFormat)
                        {
                            eStatus = (Std_ReturnType)E_NOT_OK;
                        }

                        if(E_OK == eStatus)
                        {
                            Crypto_Prepare_Hsm();

                            if (HSM_STATUS_SUCCESS == HSM_Ln_KeyExportSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
                            {
                                if (HSM_STATUS_SUCCESS == HSM_Ln_KeyExport(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tExportCfg))
                                {
                                    if (0u != Crypto_WaitHsmAlgorithmFinish())
                                    {
                                        eRet = Crypto_GetHsmRet();
                                        HSM_Ln_KeyExportExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                                    }
                                    else
                                    {
                                        HSM_Ln_KeyExportExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                                        eRet = HSM_STATUS_TIMEOUT_ERR;
                                    }
                                }
                                else
                                {
                                    HSM_Ln_KeyExportExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                                    eRet = HSM_STATUS_ERROR;
                                }
                            }
                            else
                            {
                                eRet = HSM_STATUS_ERROR;
                            }

                            if (HSM_STATUS_SUCCESS != eRet)
                            {
                                eStatus = E_NOT_OK;
                            }
                        }
                    }
                    else if(KeyElementPtr->CryptoKeyElementReadAccess==CRYPTO_RA_ENCRYPTED)
                    {
                        /* currently not supported*/
                        eStatus = (Std_ReturnType)E_NOT_OK;
                    }
                    else
                    {
                        eStatus = (Std_ReturnType)E_NOT_OK;
                    }
                }
            }
        }
    }

    return eStatus;
}

#endif
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#if (CRYPTO_CLEAN_DCACHE_CB_ENABLE == STD_ON)
extern void CryptoCallbackCleanDCache(void);
#endif

#if (CRYPTO_CLEAN_AND_FLUSH_DCACHE_CB_ENABLE == STD_ON)
extern void CryptoCallbackCleanAndFlushDcache(void);
#endif

/**
* @brief   The function Crypto_LLD_Init initializes the Crypto driver.
* @details The function checks if HSM is ready to receive request from the M3.
*
* @pre     The HSM init is not done there as crypto driver cannot be aware/part of the secure boot process.
*          Therefore, when calling init API it is assumed that :
*          - emulated register section has been properly initialized,
*          - HSM is up and running, and boot sequence has been executed.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType
* @retval         E_NOT_OK : The HSM is not ready to receive any request.
*                 E_OK :     The HSM is ready to receive requests.
*/
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_Init(void)
{
    Std_ReturnType      eStatus = (Std_ReturnType)E_OK;
    HSM_Ln_InitParmType tParam;
    uint32              u32CoreId = Crypto_GetCoreID();

    tParam.eTriggerSrc  = HSM_TRIGGER_SRC_ISR; /* the low level driver is driven by the isr of mb */
    tParam.pStopCb      = Crypto_LnAlgorithmStopCb;
    tParam.pSendCmdCb   = Crypto_SendCommandCb;
    tParam.pReadAckCb   = Crypto_GetAckStatCb;
    tParam.pCancelCmdCb = Crypto_CancelCmdCb;

#if (CRYPTO_CLEAN_DCACHE_CB_ENABLE == STD_ON)
#if (CRYPTO_CLEAN_DCACHE_CB_NOOP == STD_ON)
    tParam.pCleanDCache = NULL_PTR;
#else
    tParam.pCleanDCache = CryptoCallbackCleanDCache;
#endif
#else
    tParam.pCleanDCache = NULL_PTR;
#endif

#if (CRYPTO_CLEAN_AND_FLUSH_DCACHE_CB_ENABLE == STD_ON)
#if (CRYPTO_CLEAN_AND_FLUSH_DCACHE_CB_NOOP == STD_ON)
    tParam.pCleanAndFlushDcache = NULL_PTR;
#else
    tParam.pCleanAndFlushDcache = CryptoCallbackCleanAndFlushDcache;
#endif
#else
    tParam.pCleanAndFlushDcache = NULL_PTR;
#endif

    tParam.u32OpLimitMs = CRYPTO_ALGORITHM_TIMEOUT_MS;

    HSM_Ln_Init(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tParam);

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_KEY_SPACE_CHECK_DURING_INIT == STD_ON)
    if(u32CoreId == CRYPTO_KEY_SPACE_CHECK_CORE_INDEX)
    {
        eStatus = Crypto_LLD_KeySpaceInit();
    }
#endif /* (CRYPTO_KEY_SPACE_CHECK_DURING_INIT == STD_ON) */
#endif /* (CRYPTO_KEY_CONFIGURED == STD_ON) */

    return eStatus;
}

/**
* @brief   The function initializes key space.
* @details The function get key space status and try to fix critical errors.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : Get key space status fail or there are critical errors whitch cannot be fixed by tidyup operation.
*                 E_OK                           : Get key space status success, and there is no critical error, or the error has been fixed by tidyup operation.
*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#if (CRYPTO_KEY_SPACE_CHECK_DURING_INIT == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_LLD_KeySpaceInit(void)
{
    Std_ReturnType  eStatus = (Std_ReturnType)E_OK;
    HSM_StatusType  eRet = HSM_STATUS_SUCCESS;
    HSM_BoolType    bExistCriticalError = HSM_FALSE;
    uint32          u32CoreId = Crypto_GetCoreID();
    HSM_Ln_KeySpaceStatusType tLnKeySpaceStatus = {0};

    Crypto_Prepare_Hsm();

    if (HSM_STATUS_SUCCESS == HSM_Ln_KeySpaceGetStatusSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        if (HSM_STATUS_SUCCESS == HSM_Ln_KeySpaceGetStatus(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tLnKeySpaceStatus))
        {
            if (0u != Crypto_WaitHsmAlgorithmFinish())
            {
                eRet = Crypto_GetHsmRet();
                HSM_Ln_KeySpaceGetStatusExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            }
            else
            {
                HSM_Ln_KeySpaceGetStatusExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                eRet = HSM_STATUS_TIMEOUT_ERR;
            }
        }
        else
        {
            HSM_Ln_KeySpaceGetStatusExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
            eRet = HSM_STATUS_ERROR;
        }
    }
    else
    {
        eRet = HSM_STATUS_ERROR;
    }

    if(HSM_STATUS_SUCCESS == eRet)
    {
        bExistCriticalError = tLnKeySpaceStatus.bCriticalError;
        if(HSM_TRUE == bExistCriticalError)
        {
            /* try to tidy up key space */
            Crypto_Prepare_Hsm();
            if (HSM_STATUS_SUCCESS == HSM_Ln_KeySpaceTidyUpSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
            {
                if (HSM_STATUS_SUCCESS == HSM_Ln_KeySpaceTidyUp(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tLnKeySpaceStatus))
                {
                    if (0u != Crypto_WaitHsmAlgorithmFinish())
                    {
                        eRet = Crypto_GetHsmRet();
                        HSM_Ln_KeySpaceTidyUpExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    }
                    else
                    {
                        HSM_Ln_KeySpaceTidyUpExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        eRet = HSM_STATUS_TIMEOUT_ERR;
                    }
                }
                else
                {
                    HSM_Ln_KeySpaceTidyUpExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                    eRet = HSM_STATUS_ERROR;
                }
                 
                /* after tidy up, get key space status again */
                Crypto_Prepare_Hsm();
                if (HSM_STATUS_SUCCESS == HSM_Ln_KeySpaceGetStatusSetupEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
                {
                    if (HSM_STATUS_SUCCESS == HSM_Ln_KeySpaceGetStatus(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx), &tLnKeySpaceStatus))
                    {
                        if (0u != Crypto_WaitHsmAlgorithmFinish())
                        {
                            eRet = Crypto_GetHsmRet();
                            HSM_Ln_KeySpaceGetStatusExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        }
                        else
                        {
                            HSM_Ln_KeySpaceGetStatusExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                            eRet = HSM_STATUS_TIMEOUT_ERR;
                        }
                    }
                    else
                    {
                        HSM_Ln_KeySpaceGetStatusExitEnv(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx));
                        eRet = HSM_STATUS_ERROR;
                    }
                }
                else
                {
                    eRet = HSM_STATUS_ERROR;
                }

                if(HSM_STATUS_SUCCESS == eRet)
                {                
                    bExistCriticalError = tLnKeySpaceStatus.bCriticalError;
                }
            }
            else
            {
                eRet = HSM_STATUS_ERROR;
            }
        }
    }

    if((HSM_STATUS_SUCCESS != eRet) || (HSM_TRUE == bExistCriticalError))
    {
        eStatus = (Std_ReturnType)E_NOT_OK;
    }

    return eStatus;
}
#endif /* (CRYPTO_KEY_SPACE_CHECK_DURING_INIT == STD_ON) */
#endif /* (CRYPTO_KEY_CONFIGURED == STD_ON) */

/**
* @brief   The function Crypto_Key_LLD_CancelJob cancel request on command mailbox channel.
* @details The function send cancel request to the HSM by cancel command mailbox channel.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : Cancel operation success.
*                 E_OK                           : Cancel operation failed.
*/
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_CancelJob(void)
{
    uint32              u32CoreId = Crypto_GetCoreID();
    Std_ReturnType      eStatus = (Std_ReturnType)E_NOT_OK;

    if(HSM_STATUS_SUCCESS == HSM_Ln_Abort(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx)))
    {
        eStatus = E_OK;
    }

    return eStatus;
}

/**
* @brief   The function Crypto_LLD_ContextSave saves context for scatter processing.
* @details After saving the context, the job is ready to be restored.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : Save operation success.
*                 E_OK                           : Save operation failed.
*/
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ContextSave(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_NOT_OK;
    uint32          u32CoreId   = Crypto_GetCoreID();

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_65();

    Crypto_ServiceInfoType eCurrentService = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service;

    if(CRYPTO_MACGENERATE == eCurrentService)
    {
        if((*Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr) >= sizeof(HSM_Ln_ScatterCmacContextInfType))
        {
            if(HSM_STATUS_SUCCESS == HSM_Ln_ScatterCMacContextSave(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx),
                                                   (HSM_Ln_ScatterCmacContextInfType * )Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr))
            {
                eStatus = (Std_ReturnType)E_OK;
            }
            else
            {
                eStatus = (Std_ReturnType)E_NOT_OK;
            }
        }
        else
        {
            /* the output buffer size is too small */
            eStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    else if(CRYPTO_HASH == eCurrentService)
    {
        if((*Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr) >= sizeof(HSM_Ln_ScatterHashContextInfType))
        {
            if(HSM_STATUS_SUCCESS == HSM_Ln_ScatterHashContextSave(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx),
                                                   (HSM_Ln_ScatterHashContextInfType * )Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr))
            {
                eStatus = (Std_ReturnType)E_OK;
            }
            else
            {
                eStatus = (Std_ReturnType)E_NOT_OK;
            }
        }
        else
        {
            /* the output buffer size is too small */
            eStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    else
    {
        /* the service does not support context save */
        eStatus = (Std_ReturnType)E_NOT_OK;
    }

    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_65();

    return eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */

/**
* @brief   The function Crypto_LLD_ContextRestore restores context for scatter processing.
* @details After restoring the context, the job is ready for processing.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : Restore operation success.
*                 E_OK                           : Restore operation failed.
*/
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ContextRestore(void)
{
    Std_ReturnType  eStatus     = (Std_ReturnType)E_NOT_OK;
    uint32          u32CoreId   = Crypto_GetCoreID();

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_66();

    Crypto_ServiceInfoType eCurrentService = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service;

    if(CRYPTO_MACGENERATE == eCurrentService)
    {
        if(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength >= sizeof(HSM_Ln_ScatterCmacContextInfType))
        {
            if(HSM_STATUS_SUCCESS == HSM_Ln_ScatterCMacContextRestore(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx),
                                                   (const HSM_Ln_ScatterCmacContextInfType * )Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr))
            {
                eStatus = (Std_ReturnType)E_OK;
            }
            else
            {
                eStatus = (Std_ReturnType)E_NOT_OK;
            }
        }
        else
        {
            /* the input buffer size is too small */
            eStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    else if(CRYPTO_HASH == eCurrentService)
    {
        if(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength >= sizeof(HSM_Ln_ScatterHashContextInfType))
        {
            if(HSM_STATUS_SUCCESS == HSM_Ln_ScatterHashContextRestore(&(((Crypto_HsmRuntimeType *)Crypto_aCoreCtx[u32CoreId].pHsmCtx->pHsmRuntime)->tHsmDrvCtx),
                                                   (const HSM_Ln_ScatterHashContextInfType * )Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr))
            {
                eStatus = (Std_ReturnType)E_OK;
            }
            else
            {
                eStatus = (Std_ReturnType)E_NOT_OK;
            }
        }
        else
        {
            /* the input buffer size is too small */
            eStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    else
    {
        /* the service does not support context restore */
        eStatus = (Std_ReturnType)E_NOT_OK;
    }

    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_66();
    
    return eStatus;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */

// clang-format on
