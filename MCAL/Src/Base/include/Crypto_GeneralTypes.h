/**
*   @file    Crypto_GeneralTypes.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CSM - Crypto general types header file.
*   @details This file contains Crypto type defines.
*
*   @addtogroup Crypto
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

#ifndef CRYPTO_GENERAL_TYPES_H
#define CRYPTO_GENERAL_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/* [SWS_Crypto_00010] */
#include "Std_Types.h"
#include "Rte_Csm_Type.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS - AUTOSAR
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS - NON-AUTOSAR
==================================================================================================*/

/*==================================================================================================
                                             CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/
/**
* @brief   Enumeration of Crypto_ResultType
* @details Csm module specific return values for use in Std_ReturnType that could occur on async.
*/
/* [SWS_Crypto_00043] */
typedef enum {
    CRYPTO_E_BUSY         = 0x02U,          /*The service request failed because the service is still busy*/
    CRYPTO_E_ENTROPY_EXHAUSTED =  0x04U,    /*The service request failed because the entropy of the random number generator is exhausted*/ 
    CRYPTO_E_KEY_READ_FAIL     =  0x06u,    /*The service request failed because read access was denied*/
    CRYPTO_E_KEY_WRITE_FAIL    =  0x07U,    /*The service request failed because the writing access failed*/
    CRYPTO_E_KEY_NOT_AVAILABLE =  0x08U,    /*The service request failed because at least one required key element is not available*/
    CRYPTO_E_KEY_NOT_VALID     =  0x09U,    /*The service request failed because the key is invalid*/
    CRYPTO_E_KEY_SIZE_MISMATCH =  0x0AU,    /*The service request failed because the key size does not match*/
    CRYPTO_E_JOB_CANCELED      =  0x0CU,    /*The service request failed because the Job has been canceled*/
    CRYPTO_E_KEY_EMPTY         =  0x0DU     /*The service request failed because of uninitialized source key element*/
} Crypto_ResultType;

/**
* @brief   Enumeration of the algorithm family.
* @details This enumeration is used to build the description of algorithm.
*/
typedef enum {
    CRYPTO_ALGOFAM_NOT_SET        = 0x00U,     /**@details Algorithm family is not set */
    CRYPTO_ALGOFAM_SHA1           = 0x01U,     /**@details SHA1 hash */
    CRYPTO_ALGOFAM_SHA2_224       = 0x02U,     /**@details SHA2-224 hash */
    CRYPTO_ALGOFAM_SHA2_256       = 0x03U,     /**@details SHA2-256 hash */
    CRYPTO_ALGOFAM_SHA2_384       = 0x04U,     /**@details SHA2-384 hash */
    CRYPTO_ALGOFAM_SHA2_512       = 0x05U,     /**@details SHA2-512 hash */
    CRYPTO_ALGOFAM_SHA2_512_224   = 0x06U,     /**@details SHA2-512/224 hash */
    CRYPTO_ALGOFAM_SHA2_512_256   = 0x07U,     /**@details SHA2-512/256 hash */
    CRYPTO_ALGOFAM_SHA3_224       = 0x08U,     /**@details SHA3-224 hash */
    CRYPTO_ALGOFAM_SHA3_256       = 0x09U,     /**@details SHA3-256 hash */
    CRYPTO_ALGOFAM_SHA3_384       = 0x0aU,     /**@details SHA3-384 hash */
    CRYPTO_ALGOFAM_SHA3_512       = 0x0bU,     /**@details SHA3-512 hash */
    CRYPTO_ALGOFAM_SHAKE128       = 0x0cU,     /**@details SHAKE128 hash */
    CRYPTO_ALGOFAM_SHAKE256       = 0x0dU,     /**@details SHAKE256 hash */
    CRYPTO_ALGOFAM_RIPEMD160      = 0x0eU,     /**@details RIPEMD hash */
    CRYPTO_ALGOFAM_BLAKE_1_256    = 0x0fU,     /**@details BLAKE-1-256 hash */
    CRYPTO_ALGOFAM_BLAKE_1_512    = 0x10U,     /**@details BLAKE-1-512 hash */
    CRYPTO_ALGOFAM_BLAKE_2s_256   = 0x11U,     /**@details BLAKE-2s-256 hash */
    CRYPTO_ALGOFAM_BLAKE_2s_512   = 0x12U,     /**@details BLAKE-2s-512 hash */
    CRYPTO_ALGOFAM_3DES           = 0x13U,     /**@details 3DES cipher */
    CRYPTO_ALGOFAM_AES            = 0x14U,     /**@details AES cipher */
    CRYPTO_ALGOFAM_CHACHA         = 0x15U,     /**@details ChaCha cipher */
    CRYPTO_ALGOFAM_RSA            = 0x16U,     /**@details RSA cipher */
    CRYPTO_ALGOFAM_ED25519        = 0x17U,     /**@details ED22518 elliptic curve */
    CRYPTO_ALGOFAM_BRAINPOOL      = 0x18U,     /**@details Brainpool elliptic curve*/
    CRYPTO_ALGOFAM_ECCNIST        = 0x19U,     /**@details NIST ECC elliptic curves */
    CRYPTO_ALGOFAM_SECURECOUNTER  = 0x1aU,     /**@details Secure Counter */
    CRYPTO_ALGOFAM_RNG            = 0x1bU,     /**@details Random Number Generator */
    CRYPTO_ALGOFAM_SIPHASH        = 0x1cU,     /**@details SipHash */
    CRYPTO_ALGOFAM_ECIES          = 0x1dU,     /**@details ECIES Cipher */
    CRYPTO_ALGOFAM_ECCANSI        = 0x1eU,
    CRYPTO_ALGOFAM_ECCSEC         = 0x1fU,
    CRYPTO_ALGOFAM_DRBG           = 0x20U,
    CRYPTO_ALGOFAM_FIPS186        = 0x21U,
    CRYPTO_ALGOFAM_PADDING_PKCS7  = 0x22U,
    CRYPTO_ALGOFAM_PADDING_ONEWITHZEROS = 0x23U,
    CRYPTO_ALGOFAM_PBKDF2         = 0x24U,
    CRYPTO_ALGOFAM_KDFX963        = 0x25U,
    CRYPTO_ALGOFAM_DH             = 0x26U,
    CRYPTO_ALGOFAM_SM2            = 0x27U,
    CRYPTO_ALGOFAM_EEA3           = 0x28U,
    CRYPTO_ALGOFAM_SM3            = 0x29U,
    CRYPTO_ALGOFAM_EIA3           = 0x2aU,
    CRYPTO_ALGOFAM_HKDF           = 0x2bU,
    CRYPTO_ALGOFAM_ECDSA          = 0x2cU,
    CRYPTO_ALGOFAM_POLY1305       = 0x2dU,
    CRYPTO_ALGOFAM_X25519         = 0x2eU,
    CRYPTO_ALGOFAM_ECDH           = 0x2fU,
    CRYPTO_ALGOFAM_CUSTOM         = 0xffU,     /**@details Custom algorithm family */
    CRYPTO_ALGOFAM_SM4            = 0x80U,     /**@details SM4 cipher */
    CRYPTO_ALGOFAM_MD5            = 0x81U,     /**@details MD5 hash */
    CRYPTO_ALGOFAM_ZERO_PADDING   = 0x82U,     /**@details Cipher zero padding */
} Crypto_AlgorithmFamilyType;

/**
* @brief   Enumeration of the algorithm mode.
* @details This enumeration is used to build the description of algorithm.
*/
typedef enum {
    CRYPTO_ALGOMODE_NOT_SET             = 0x00U,         /**@details Algorithm key is not set */
    CRYPTO_ALGOMODE_ECB                 = 0x01U,         /**@details Blockmode: Electronic Code Book */
    CRYPTO_ALGOMODE_CBC                 = 0x02U,         /**@details Blockmode: Cipher Block Chaining */
    CRYPTO_ALGOMODE_CFB                 = 0x03U,         /**@details Blockmode: Cipher Feedback Mode */
    CRYPTO_ALGOMODE_OFB                 = 0x04U,         /**@details Blockmode: Output Feedback Mode */
    CRYPTO_ALGOMODE_CTR                 = 0x05U,         /**@details Blockmode: Counter Modex */
    CRYPTO_ALGOMODE_GCM                 = 0x06U,         /**@details Blockmode: Galois/Counter Mode */
    CRYPTO_ALGOMODE_XTS                 = 0x07U,         /**@details XOR-encryption-based tweaked-codebook mode with ciphertext stealing */
    CRYPTO_ALGOMODE_RSAES_OAEP          = 0x08U,         /**@details RSA Optimal Asymmetric Encryption Padding */
    CRYPTO_ALGOMODE_RSAES_PKCS1_v1_5    = 0x09U,         /**@details RSA encryption/decryption with PKCS#1 v1.5 padding */
    CRYPTO_ALGOMODE_RSASSA_PSS          = 0x0aU,         /**@details RSA Probabilistic Signature Scheme */
    CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5   = 0x0bU,         /**@details RSA signature with PKCS#1 v1.5 */
    CRYPTO_ALGOMODE_8ROUNDS             = 0x0cU,         /**@details 8 rounds (e.g. ChaCha8) */
    CRYPTO_ALGOMODE_12ROUNDS            = 0x0dU,         /**@details 12 rounds (e.g. ChaCha12) */
    CRYPTO_ALGOMODE_20ROUNDS            = 0x0eU,         /**@details 20 rounds (e.g. ChaCha20) */
    CRYPTO_ALGOMODE_HMAC                = 0x0fU,         /**@details Hashed-based MAC */
    CRYPTO_ALGOMODE_CMAC                = 0x10U,         /**@details Cipher-based MAC */
    CRYPTO_ALGOMODE_GMAC                = 0x11U,         /**@details Galois MAC */
    CRYPTO_ALGOMODE_CTRDRBG             = 0x12U,         /**@details Counter-based Deterministic Random Bit Generator */
    CRYPTO_ALGOMODE_SIPHASH_2_4         = 0x13U,         /**@details Siphash-2-4 */
    CRYPTO_ALGOMODE_SIPHASH_4_8         = 0x14U,         /**@details Siphash-4-8 */
    CRYPTO_ALGOMODE_PXXXR1              = 0x15U,         /**@details ANSI R1 Curve */
    CRYPTO_ALGOMODE_CUSTOM              = 0xffU,         /**@details Custom algorithm mode */
    CRYPTO_ALGOMODE_TRUE_RNG            = 0x80U,
    CRYPTO_ALGOMODE_PSEUDO_RNG          = 0x81U,
} Crypto_AlgorithmModeType;

/**
* @brief   Enumeration which operation shall be performed.
* @details This enumeration is constructed from a bit mask, where the first bit indicates "Start", the second "Update" and the third "Finish".
*/
typedef enum {
    /**@details  Job is in the state "idle". This state is reached after Csm_Init() or when the "Finish" state is finished.*/
    CRYPTO_JOBSTATE_IDLE = 0x00U,
    /**@details  Job is in the state "active". There was already some input or there are intermediate results. This state is reached, when the "update" or "start" operation finishes.*/
    CRYPTO_JOBSTATE_ACTIVE = 0x01U,
} Crypto_JobStateType;

/**
* @brief   Enumeration of the kind of the service.
* @details NA. Any others services can be added.
*/
typedef enum {
    /**@details Hash Service */
    CRYPTO_HASH = 0x00U,
    /**@details MacGenerate Service */
    CRYPTO_MACGENERATE = 0x01U,
    /**@details MacVerify Service   */
    CRYPTO_MACVERIFY = 0x02U,
    /**@details Encrypt Service */
    CRYPTO_ENCRYPT = 0x03U,
    /**@details Decrypt Service */
    CRYPTO_DECRYPT = 0x04U,
    /**@details AEADEncrypt Service */
    CRYPTO_AEADENCRYPT = 0x05U,
    /**@details AEADDecrypt Service */
    CRYPTO_AEADDECRYPT = 0x06U,
    /**@details SignatureGenerate Service */
    CRYPTO_SIGNATUREGENERATE = 0x07U,
    /**@details SignatureVerify Service */
    CRYPTO_SIGNATUREVERIFY = 0x08U,
    /**@details SecureCounterIncrement Service */
    CRYPTO_SECCOUNTERINCREMENT = 0x09U,
    /**@details SecureCounterDecrement Service */
    CRYPTO_SECCOUNTERREAD = 0x0AU,
    /**@details RandomGenerate Service */
    CRYPTO_RANDOMGENERATE = 0x0BU,
    /**@details RandomSeed Service */
    CRYPTO_RANDOMSEED = 0x0CU,
    /**@details KeyGenerate Service */
    CRYPTO_KEYGENERATE = 0x0DU,
    /**@details KeyDerive Service */
    CRYPTO_KEYDERIVE = 0x0e,
    /**@details Key Service ExchangeCalcPubVal Service*/
    CRYPTO_KEYEXCHANGECALCPUBVAL = 0x0f,
    /**@details Key Service ExchangeCalcSecret Service*/
    CRYPTO_KEYEXCHANGECALCSECRET = 0x10,
    /**@details KeySetValid Service */
    CRYPTO_KEYSETVALID = 0x13,
    /**@details KeySetInvalid Service */
    CRYPTO_KEYSETINVALID = 0x14
} Crypto_ServiceInfoType;

/**
* @brief   Enumeration of the processing type.
* @details This enumeration describes how job must be processed.
*/
typedef enum {
    /**@details Asynchronous job processing */
    CRYPTO_PROCESSING_ASYNC = 0x00U,
    /**@details Synchronous job processing */
    CRYPTO_PROCESSING_SYNC = 0x01U
} Crypto_ProcessingType;

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief    Structure which determines the exact algorithm.
* @details  Not every algorithm needs to specify all fields. AUTOSAR shall only allow valid combinations.
*/
typedef struct
{
    /** @brief   The family of the algorithm  */
    Crypto_AlgorithmFamilyType  family;
    /** @brief   The secondary family of the algorithm.  */
    Crypto_AlgorithmFamilyType secondaryFamily;
    /** @brief   The key length in bits to be used with that algorithm. */
    uint32 keyLength;
    /** @brief   The operation mode to be used with that algorithm. */
    Crypto_AlgorithmModeType mode;
} Crypto_AlgorithmInfoType;

/**
* @brief    Structure which contains input and output information depending on the job and the crypto primitive..
* @details  This structure is used in run-time
*/
typedef struct
{
    /** @brief   Pointer to the input data.  */
    const uint8  *inputPtr;
    /** @brief   Contains the input length in bytes.  */
    uint32 inputLength;
    /** @brief   Pointer to the secondary input data (for MacVerify, SignatureVerify). */
    const uint8 *secondaryInputPtr;
    /** @brief   Contains the secondary input length in bytes.. */
    uint32 secondaryInputLength;
    /** @brief   Pointer to the tertiary input data (for MacVerify, SignatureVerify). */
    const uint8 *tertiaryInputPtr;
    /** @brief   Contains the tertiary input length in bytes.. */
    uint32 tertiaryInputLength;
    /** @brief   Pointer to the output data.  */
    uint8  *outputPtr;
    /** @brief   Holds a pointer to a memory location containing the output length in bytes.  */
    uint32 *outputLengthPtr;
    /** @brief   Pointer to the secondary output data. */
    uint8 *secondaryOutputPtr;
    /** @brief   Holds a pointer to a memory location containing the secondary output length in bytes. */
    uint32 *secondaryOutputLengthPtr;
    /** @brief   Output pointer to a memory location holding a Crypto_VerifyResultType. */
    Crypto_VerifyResultType *verifyPtr;
    /** @brief   Indicator of the mode(s)/operation(s) to be performed. */
    Crypto_OperationModeType mode;
    /** @brief   Holds the CryIf key id for key operation services. */
    uint32 cryIfKeyId;
    /** @brief   Holds the target CryIf key id for key operation services.*/
    uint32 targetCryIfKeyId;
} Crypto_JobPrimitiveInputOutputType;

/**
* @brief   Structure which contains basic information about the crypto primitive.
* @details TBD
*/
typedef struct
{
    /** @brief   Contains the result length in bytes.  */
    const uint32 resultLength;
    /** @brief   Contains the enum of the used service, e.g. Encrypt.  */
    const Crypto_ServiceInfoType service;
    /** @brief   Contains the information of the used algorithm.  */
    const Crypto_AlgorithmInfoType algorithm;
} Crypto_PrimitiveInfoType;

/**
* @brief    Structure which contains further information, which depends on the job and the crypto primitive.
* @details
*/
typedef struct
{
    /** @brief   Identifier of the callback function, to be called, if the configured service finished.  */
    const uint32 callbackId;
    /** @brief   Pointer to a structure containing further configuration of the crypto primitives.  */
    const Crypto_PrimitiveInfoType* primitiveInfo;
    /** @brief   Identifier of a secure counter. */
    const uint32 secureCounterId;
    /** @brief   Identifier of the CryIf key. */
    const uint32 cryIfKeyId;
    /** @brief   Determines the synchronous or asynchronous behavior. */
    const Crypto_ProcessingType processingType;
    /** @brief   Indicates, whether the callback function shall be called, if the UPDATE operation has finished. */
    const boolean callbackUpdateNotification;
} Crypto_JobPrimitiveInfoType;

/**
* @brief    Structure which holds the identifiers of the keys and key elements which shall be used as input and output for a job and 
*           a bit structure which indicates which buffers shall be redirected to those key elements..
* @details
*/
typedef struct
{
    /** @brief   Bit structure which indicates which buffer shall be redirected to a keyelement. Values from Crypto_InputOutputRedirectionConfigType can be used and combined with unary OR operation. */
    uint8 redirectionConfig;
    /** @brief   Identifier of the key which shall be used as input. */
    uint32 inputKeyId;
    /** @brief   Identifier of the key element which shall be used as input. */
    uint32 inputKeyElementId;
    /** @brief   Identifier of the key which shall be used as secondary in. */
    uint32 secondaryInputKeyId;
    /** @brief   Identifier of the key element which shall be used as secondary input. */
    uint32 secondaryInputKeyElementId;
    /** @brief   Identifier of the key which shall be used as tertiary input. */
    uint32 tertiaryInputKeyId;
        /** @brief   Identifier of the key element which shall be used as tertiary input. */
    uint32 tertiaryInputKeyElementId;
    /** @brief   Identifier of the key which shall be used as output. */
    uint32 outputKeyId;
    /** @brief   Identifier of the key element which shall be used as output. */
    uint32 outputKeyElementId;
    /** @brief   Identifier of the key which shall be used as secondary output. */
    uint32 secondaryOutputKeyId;
    /** @brief   Identifier of the key element which shall be used as secondary output. */
    uint32  secondaryOutputKeyElementId;
} Crypto_JobRedirectionInfoType;

/**
* @brief   The structure contains the initialization data for the crypto job.
* @details TBD
*/
typedef struct
{
    /** @brief   Identifier for the job structure.  */
    const uint32 jobId;
    /** @brief   Determines the current job state.  */
    Crypto_JobStateType jobState;
    /** @brief   Structure containing input and output information depending on the job and the crypto primitive. */
    Crypto_JobPrimitiveInputOutputType jobPrimitiveInputOutput;
    /** @brief   Pointer to a structure containing further information, which depends on the job and the crypto primitive. */
    const Crypto_JobPrimitiveInfoType *jobPrimitiveInfo;
    /** @brief   Pointer to a structure containing further information, which depends on the job and the crypto primitive. */
    uint32 cryptoKeyId;
    /** @brief   Pointer to a structure containing further information on the usage of keys as input and output for jobs. */
    Crypto_JobRedirectionInfoType *jobRedirectionInfoRef;
    /** @brief   Target identifier of the Crypto Driver key. The identifier shall be written by the Crypto Interface.*/
    uint32 targetCryptoKeyId;
    /** @brief   Specifies the importance of the job (the higher, the more important). */
    const uint32 jobPriority;
} Crypto_JobType;


/*==================================================================================================
                                      GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* #ifndef CRYPTO_GENERAL_TYPES_H */
/** @} */
