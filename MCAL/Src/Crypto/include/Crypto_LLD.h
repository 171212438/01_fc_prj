/**
 *   @file    Crypto_LLD.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - Low level header file for CRY driver.
 *   @details This file contains declarations of the low level functions defined for CRY driver.
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

#ifndef CRYPTO_LLD_H
#define CRYPTO_LLD_H

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
/* API structures and configuration flags */
#include "Crypto.h"


#include "Crypto_Level0Api.h"
#include "Crypto_Level1Api.h"
#include "Crypto_Level2Api.h"
#include "Crypto_LevelNApi.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#define CRYPTO_AES_ECB_CBC_BLOCK_SIZE       (128UL)
#define CRYPTO_KEYELEMENT_NOT_FOUND         (0xFFFFFFFFUL)
#endif

#define TYPE_CONVERT(from_type, to_type, data) ((to_type)(data))

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
typedef struct
{
    const uint8 *ptr; /* address of data */
    uint32 size;                     /* size of data */
} Crypto_PtrSizeType;
#endif


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

CRYPTO_TEXT_SECTION  Std_ReturnType  Crypto_LLD_Init(void);
CRYPTO_TEXT_SECTION void Crypto_LLD_Delay(uint32 ms);
CRYPTO_TEXT_SECTION void Crypto_LLD_memset_byte(uint8 *destination, uint8 value, uint32 num);
/************************** Service request processing *************************/
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ProcessHashReq(const HSM_Ln_HashMacCfgType *pMacCfg);
CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ProcessScatterHashStartReq(const HSM_Ln_HashMacCfgType *pMacCfg);
CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ProcessScatterHashUpdateReq(void);
CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ProcessScatterHashFinishReq(void);
#endif /* CRYPTO_HASH_SERVICE_ENABLE */
#if (CRYPTO_KEY_CONFIGURED == STD_ON)

#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessMacGenReq(void);
#endif /* CRYPTO_MAC_GENERATION_SERVICE_ENABLE */

#if (CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessMacVerifReq(void);
#endif /* CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE */

#if ((CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON) || (CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON))
CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ProcessScatterMacStartReq(void);
CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ProcessScatterMacUpdateReq(void);
CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ProcessScatterMacFinishReq(void);
#endif

#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessCipherReq(void);
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE */

#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessDecryptReq(void);
#endif /* CRYPTO_DECRYPTION_SERVICE_ENABLE */

#if (CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessSignGenReq(void);
#endif /* CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE */

#if (CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessVerifySignatureReq(void);
#endif /* CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE */

#endif /* (CRYPTO_KEY_CONFIGURED == STD_ON) */
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessSeedPrngReq(void);

#if (CRYPTO_RANDOM_SERVICE_ENABLE == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType   Crypto_LLD_ProcessRngReq(void);
#endif /* CRYPTO_RANDOM_SERVICE_ENABLE == STD_ON */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
CRYPTO_TEXT_SECTION  Std_ReturnType         Crypto_LLD_LoadClearAESKey(const uint8 *keyPtr, uint32 KeySize);

CRYPTO_TEXT_SECTION  Std_ReturnType         Crypto_LLD_LoadAESKey(uint32 KeyHsmId, const uint8 *keyPtr, uint32 KeySize, uint8 *const KeyElementProofPtr);
/* RSA Key FUNCTIONS */
CRYPTO_TEXT_SECTION  Std_ReturnType         Crypto_LLD_LoadClearRSAKey(const uint8 *keyPtr);

CRYPTO_TEXT_SECTION  Std_ReturnType         Crypto_LLD_LoadRSAKey(const uint8 *keyPtr, uint32 KeySize, uint8 *const KeyElementProofPtr);

CRYPTO_TEXT_SECTION  Std_ReturnType         Crypto_LLD_LoadClearECCKey(const uint8 *keyPtr, uint32 KeySize, Crypto_AlgorithmFamilyType CryptoAlgorithmFamily,
                                                                       uint32 CryptoAlgoKeySize);

CRYPTO_TEXT_SECTION  Std_ReturnType         Crypto_LLD_LoadECCKey(const uint8 *keyPtr, uint32 KeySize, uint8 *const KeyElementProofPtr,
                                                                  Crypto_AlgorithmFamilyType CryptoAlgorithmFamily, uint32 CryptoAlgoKeySize);

CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ExtractRSAPrivateKey(uint32 KeyHsmId, uint8 *const keyPtr, uint32 *const KeySize, uint8 *const KeyElementProofPtr);

CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ExtractRSAPublicKey(uint32 KeyHsmId, uint8 *const keyPtr, uint32 *const KeySize);

CRYPTO_TEXT_SECTION  Std_ReturnType Crypto_LLD_ExtractRamKey(Crypto_KeyElementFamilyType KeyFamily, uint8 *resultPtr, uint32 KeySize);
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */


#if (CRYPTO_KEY_CONFIGURED == STD_ON)
CRYPTO_TEXT_SECTION void           Crypto_LLD_memcpy_byte(uint8 *destination, const uint8 *source, uint32 num);
CRYPTO_TEXT_SECTION uint32         Crypto_LLD_FindKeyElement(uint32 cryptoKeyId,  uint32 keyElementId, uint32 *pElemIdxInType);
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_UpdateKey(const HSM_Ln_PlainKeyImport *pCfg);
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_LLD_UpdateSheKey(const HSM_LN_UpdateSheKeyType *pCfg);
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ExportKey(uint32 cryptoKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr);
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_Key_LLD_KeyStore(uint32 cryptoKeyId);
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_RevokeKey(uint32 u32KeyId);
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_Key_LLD_KeyRevoke(uint32 cryptoKeyId);

#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_CancelJob(void);
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ContextSave(void);
CRYPTO_TEXT_SECTION Std_ReturnType  Crypto_LLD_ContextRestore(void);

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CRYPTO_LLD_H */

/** @} */

// clang-format on
