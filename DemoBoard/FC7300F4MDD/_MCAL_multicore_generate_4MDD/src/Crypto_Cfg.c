/**
*   @file    Crypto_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Crypto - Pre-Compile configurations for Crypto driver.
*   @details Pre-Compile configuration file for Crypto driver.
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
#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Mcal.h"
#include "SpinLock.h"
#include "Crypto_Level0Api.h"
#include "Crypto_Level1Api.h"
#include "Crypto_Level2Api.h"
#include "Crypto_LevelNApi.h"
#include "Crypto.h"
#include "Crypto_Hsm.h"
#include "SchM_Crypto.h"
/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define CRYPTO_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crypto_MemMap.h"




#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_HashCapabilities[9] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_SHA1, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_SHA2_224, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_SHA2_256, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_SHA2_384, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_SHA2_512, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_SHA2_512_224, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_SHA2_512_256, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_SM3, CRYPTO_ALGOFAM_NOT_SET,1UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_MD5, CRYPTO_ALGOFAM_NOT_SET, 1UL, CRYPTO_ALGOMODE_NOT_SET},
};

CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_CipherEnCapabilities[20] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_ECB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_ECB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_ECB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_ECB},
};

CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_CipherDeCapabilities[20] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_ECB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_ECB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_ECB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CBC},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CTR},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CFB},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_OFB},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_ECB},
};

CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_MacGenerateCapabilities[13] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CMAC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CMAC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CMAC},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CMAC},
    {CRYPTO_ALGOFAM_SHA2_256, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_SHA1, CRYPTO_ALGOFAM_NOT_SET,160UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_SHA2_224, CRYPTO_ALGOFAM_NOT_SET,224UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_SHA2_384, CRYPTO_ALGOFAM_NOT_SET,384UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_SHA2_512, CRYPTO_ALGOFAM_NOT_SET,512UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_SHA2_512_224, CRYPTO_ALGOFAM_NOT_SET,512UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_SHA2_512_256, CRYPTO_ALGOFAM_NOT_SET,512UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_SM3, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_HMAC},
    {CRYPTO_ALGOFAM_MD5, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_HMAC},
};

CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_MacVerifyCapabilities[4] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,128UL, CRYPTO_ALGOMODE_CMAC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,192UL, CRYPTO_ALGOMODE_CMAC},
    {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_NOT_SET,256UL, CRYPTO_ALGOMODE_CMAC},
    {CRYPTO_ALGOFAM_SM4, CRYPTO_ALGOFAM_NOT_SET, 128UL, CRYPTO_ALGOMODE_CMAC},
};

CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_SignGenerateCapabilities[12] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,1024UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,2048UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,3072UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,4096UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,1024UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,2048UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,3072UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,4096UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_224,224UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_256,256UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_384,384UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_512,521UL, CRYPTO_ALGOMODE_NOT_SET},
};

CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_SignVerifyCapabilities[13] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_256,256UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_224,224UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_512,521UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_ECCNIST, CRYPTO_ALGOFAM_SHA2_384,384UL, CRYPTO_ALGOMODE_NOT_SET},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,1024UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,2048UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,3072UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,4096UL, CRYPTO_ALGOMODE_RSASSA_PSS},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,1024UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,2048UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,3072UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256,4096UL, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5},
    {CRYPTO_ALGOFAM_SM2, CRYPTO_ALGOFAM_SM3,256UL, CRYPTO_ALGOMODE_NOT_SET},
};

CRYPTO_DATA_SECTION STATIC const Crypto_AlgorithmInfoType Crypto_RngCapabilities[2] =
{
    /* family, secondFamily, keyLength, mode */
    {CRYPTO_ALGOFAM_RNG, CRYPTO_ALGOFAM_NOT_SET, 1UL, CRYPTO_ALGOMODE_TRUE_RNG},
    {CRYPTO_ALGOFAM_RNG, CRYPTO_ALGOFAM_NOT_SET, 1UL, CRYPTO_ALGOMODE_PSEUDO_RNG},
};

CRYPTO_DATA_SECTION const uint32 Crypto_NbAlgoSupported[CRYPTO_MAX_SERVICES] =
{
    9,   /* CryptoPrimitives_HSM_HASH_Algo_Number */
    13,   /* CryptoPrimitives_HSM_MAC_Gen_Algo_Number */
    4,   /* CryptoPrimitives_HSM_MAC_Ver_Algo_Number */
    20,   /* CryptoPrimitives_HSM_CIPHER_EN_Algo_Number */
    20,   /* CryptoPrimitives_HSM_CIPHER_DE_Algo_Number */
    0,
    0,
    12,   /* CryptoPrimitives_HSM_SIGN_Gen_Algo_Number */
    13,   /* CryptoPrimitives_HSM_SIGN_Ver_Algo_Number */
    0,
    0,
    2    /* CryptoPrimitives_HSM_RNG_Algo_Number */
};

/* [SWS_Crypto_00013] */
CRYPTO_DATA_SECTION const Crypto_AlgorithmInfoType* const Crypto_ServiceCapabilities[CRYPTO_MAX_SERVICES] =
{
    Crypto_HashCapabilities,       /** Hash Service */
    Crypto_MacGenerateCapabilities,        /** MacGenerate Service */
    Crypto_MacVerifyCapabilities,        /** MacVerify Service   */
    Crypto_CipherEnCapabilities,     /** Encrypt Service */
    Crypto_CipherDeCapabilities,     /** Decrypt Service */
    NULL_PTR, /** aaed encrypt service */
    NULL_PTR, /** aaed decrypt service */
    Crypto_SignGenerateCapabilities,       /** SignatureGenerate Service */
    Crypto_SignVerifyCapabilities,       /** SignatureVerify Service */
    NULL_PTR, /** None */
    NULL_PTR, /** None */
    Crypto_RngCapabilities,        /** RandomGenerate Service */
};
#endif  /* ( CRYPTO_DEV_ERROR_DETECT == STD_ON ) */



#define N_KEYS                       (80UL)
#define N_KEY_TYPES                  (80UL)
#define N_KEY_Elements                  (85UL)

/*Parse keys only if at least one key has been configured*/


CRYPTO_DATA_SECTION const Crypto_KeyElemDescType Crypto_CryptoKeyElementList_PC[CRYPTO_MAXKEYELEMENT_CONFIGURED] =
{

    /* KeyElement CryptoKeyElement_AES128_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES128_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        16U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_AES_IV */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_IV,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        16U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_AES192_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES192_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        24U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_AES256_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES256_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        32U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },







    /* KeyElement CryptoKeyElement_ECC224_PUBLIC_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC224_PUBLIC_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        56U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_OID_5Bytes */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_OID_5Bytes,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        5U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_ECC256_PUBLIC_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC256_PUBLIC_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_OID_8Bytes */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_OID_8Bytes,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        8U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_ECC521_PUBLIC_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC521_PUBLIC_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        132U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_ECC384_PUBLIC_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC384_PUBLIC_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        96U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_RSA1024_E */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_E,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        3U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA1024_N */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_N,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        128U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA2048_E */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_E,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        3U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA2048_N */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_N,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        256U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA3072_N */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_N,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        384U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA3072_E */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_E,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        3U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA4096_N */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_N,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        512U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA4096_E */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_E,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        3U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA1024_Public_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_Public_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        162U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA2048_Public_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_Public_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        294U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA3072_Public_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_Public_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        422U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA4096_Public_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_Public_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        550U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_AES128_BCK */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES128_BCK,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        16U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX,
        0U,       

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_AES192_BCK */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES192_BCK,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        24U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX,
        0U,       

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_AES256_BCK */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES256_BCK,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        32U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX,
        0U,       

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },









    /* KeyElement CryptoKeyElement_RSA1024_D */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_D,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        128U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_RSA2048_D */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_D,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        256U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },





    /* KeyElement CryptoKeyElement_RSA3072_D */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_D,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        384U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA4096_D */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_D,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        512U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_RSA1024_Private_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_Private_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        700U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA2048_Private_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_Private_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        1300U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA3072_Private_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_Private_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        1800U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_RSA4096_Private_Der */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_Private_Der,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        2400U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_AES_KEY_KeySpace */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_KEY_KeySpace,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        32U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (256 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_AES_KEY,                        /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_CMAC_KEY_KeySpace */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_CMAC_KEY_KeySpace,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        32U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (512 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_CMAC_KEY,                      /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_ECC_PUBLIC_KeySpace224 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace224,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        56U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (1792 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PUBLIC,                  /* CryptoKeyFamily */        

    },




    /* KeyElement CryptoKeyElement_RSA_D_KeySpace4096 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace4096,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        512U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (1280 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_D,                            /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_N_KeySpace4096 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace4096,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        512U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (1536 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_N,                            /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_E_KeySpace */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_E_KeySpace,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        3U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (1024 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_E,                                /* CryptoKeyFamily */        

    },




    /* KeyElement CryptoKeyElement_RSA_D_KeySpace3072 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace3072,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        384U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (2048 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_D,                            /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_N_KeySpace3072 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace3072,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        384U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (5120 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_N,                            /* CryptoKeyFamily */        

    },





    /* KeyElement CryptoKeyElement_RSA_D_KeySpace2048 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace2048,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        256U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (2304 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_D,                            /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_N_KeySpace2048 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace2048,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        256U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (5376 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_N,                            /* CryptoKeyFamily */        

    },





    /* KeyElement CryptoKeyElement_RSA_D_KeySpace1024 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace1024,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        128U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (4096 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_D,                            /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_N_KeySpace1024 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace1024,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        128U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (5632 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_N,                            /* CryptoKeyFamily */        

    },





    /* KeyElement CryptoKeyElement_ECC_PUBLIC_KeySpace256 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace256,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (4352 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PUBLIC,                  /* CryptoKeyFamily */        

    },




    /* KeyElement CryptoKeyElement_ECC_PUBLIC_KeySpace384 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace384,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        96U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (4608 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PUBLIC,                  /* CryptoKeyFamily */        

    },




    /* KeyElement CryptoKeyElement_ECC_PUBLIC_KeySpace521 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace521,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        132U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (4864 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PUBLIC,                  /* CryptoKeyFamily */        

    },




    /* KeyElement CryptoKeyElement_RSA_PUBLIC_Der1024 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der1024,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        162U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (5888 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PUBLIC,                  /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_PRIVATE_Der1024 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der1024,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        700U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (8448 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PRIVATE,                /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_PUBLIC_Der2048 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der2048,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        294U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (6144 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PUBLIC,                  /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_PRIVATE_Der2048 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der2048,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        1300U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (8704 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PRIVATE,                /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_PUBLIC_Der3072 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der3072,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        422U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (6400 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PUBLIC,                  /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_PRIVATE_Der3072 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der3072,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        1800U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (8960 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PRIVATE,                /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_PUBLIC_Der4096 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der4096,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        550U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (8192 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PUBLIC,                  /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_RSA_PRIVATE_Der4096 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der4096,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        2400U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (9216 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_RSA_PRIVATE,                /* CryptoKeyFamily */        

    },



    /* KeyElement CryptoKeyElement_SM2_PUBLIC */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_PUBLIC,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_SM2_USERID */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_USERID,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        128U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_SM2_OID */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_OID,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        8U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },





    /* KeyElement CryptoKeyElement_SM2_PUBLIC_KeySpace */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_PUBLIC_KeySpace,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (9472 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_SM2_PUBLIC,                  /* CryptoKeyFamily */        

    },







    /* KeyElement CryptoKeyElement__RSA_PUBLIC */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement__RSA_PUBLIC,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_RSA_PUBLICKEY,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        550U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_OID_9Bytes */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_OID_9Bytes,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        9U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_HMAC128 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC128,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        16U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_HMAC160 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC160,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        20U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_HMAC224 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC224,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        28U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_HMAC256 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC256,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        32U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_HMAC384 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC384,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        48U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_HMAC512 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC512,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_Update_She_Bank0_Master_Ecu_Key_M1M2M3 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_Update_She_Bank0_Master_Ecu_Key_M1M2M3,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX,
        130,  

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_SHE_M4M5 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_SHE_M4M5,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        48U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_She_Bank0_Master_Ecu_Key */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_She_Bank0_Master_Ecu_Key,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        16U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX,
        130,  

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_Update_She_Bank0_Key1 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_Update_She_Bank0_Key1,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX,
        136,  

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_She_Bank0_Key1 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_She_Bank0_Key1,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        16U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX,
        136,  

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },



    /* KeyElement CryptoKeyElement_Update_She_Bank0_Key2 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_Update_She_Bank0_Key2,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        64U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX,
        138,  

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_She_Bank0_Key2 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_She_Bank0_Key2,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        16U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX,
        138,  

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_ECC224_PRIVATE_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC224_PRIVATE_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        28U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_ECC256_PRIVATE_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC256_PRIVATE_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        32U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_ECC384_PRIVATE_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC384_PRIVATE_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        48U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_ECC521_PRIVATE_KEY */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC521_PRIVATE_KEY,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)FALSE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)FALSE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        66U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX,
        0U,

        CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET,                           /* CryptoKeyFamily */

    },




    /* KeyElement CryptoKeyElement_ECC_PRIVATE_KeySpace224 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace224,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        28U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (9728 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PRIVATE,                /* CryptoKeyFamily */        

    },




    /* KeyElement CryptoKeyElement_ECC_PRIVATE_KeySpace256 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace256,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        32U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (9984 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PRIVATE,                /* CryptoKeyFamily */        

    },




    /* KeyElement CryptoKeyElement_ECC_PRIVATE_KeySpace384 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace384,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        48U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (10240 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PRIVATE,                /* CryptoKeyFamily */        

    },





    /* KeyElement CryptoKeyElement_ECC_PRIVATE_KeySpace521 */
    {
        CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace521,    /* Key element Id */
        CRYPTO_KE_FORMAT_BIN_OCTET,                     /* Key family */
        (boolean)TRUE,                             /* Key element Partial Access */
        1,                                              /* Init value of key element */
        (boolean)TRUE,                                  /* Indicate if this key element can be stored in NVM */
        CRYPTO_RA_ALLOWED,                           /* Read access */
        CRYPTO_WA_ALLOWED,                           /* Write Access */
        66U,                                             /* Max size of key */

        CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX,   /* key space of hsm */
        (10496 << 8u) | 0x0u, /* the lsb bit is 0 when set to nvm key in key space */

        CRYPTO_KEY_ELEMENT_FAMILY_ECC_PRIVATE,                /* CryptoKeyFamily */        

    },


};
#define CRYPTO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Crypto_MemMap.h"

/* Define data area for KeyElements used by the keys configured */

/* Generate 80 crypto  keys */
/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct.
 * Reason: These Identifiers have the same first 30 characters,but they are differrent in follow characters.Modern compiler will recognize the difference. */
            
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_0_CryptoKeyType_AES128_ENDECRYPT_CryptoKeyElement_AES128_KEY[16UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_0_CryptoKeyType_AES128_ENDECRYPT_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_1_CryptoKeyType_AES192_ENDECRYPT_CryptoKeyElement_AES192_KEY[24UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_1_CryptoKeyType_AES192_ENDECRYPT_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_2_CryptoKeyType_AES256_ENDECRYPT_CryptoKeyElement_AES256_KEY[32UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_2_CryptoKeyType_AES256_ENDECRYPT_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_3_CryptoKeyType_AES128_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES128_KEY[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_4_CryptoKeyType_AES192_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES192_KEY[24UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_5_CryptoKeyType_AES256_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES256_KEY[32UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_6_CryptoKeyType_ECC224_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC224_PUBLIC_KEY[56UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_6_CryptoKeyType_ECC224_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_7_CryptoKeyType_ECC256_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC256_PUBLIC_KEY[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_7_CryptoKeyType_ECC256_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_8Bytes[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_8_CryptoKeyType_ECC521_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC521_PUBLIC_KEY[132UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_8_CryptoKeyType_ECC521_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_9_CryptoKeyType_ECC384_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC384_PUBLIC_KEY[96UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_9_CryptoKeyType_ECC384_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_10_CryptoKeyType_RSA1024_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA1024_E[3UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_10_CryptoKeyType_RSA1024_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA1024_N[128UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_11_CryptoKeyType_RSA2048_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA2048_E[3UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_11_CryptoKeyType_RSA2048_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA2048_N[256UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_12_CryptoKeyType_RSA3072_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA3072_N[384UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_12_CryptoKeyType_RSA3072_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA3072_E[3UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_13_CryptoKeyType_RSA4096_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA4096_N[512UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_13_CryptoKeyType_RSA4096_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA4096_E[3UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_14_CryptoKeyType_RSA1024_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA1024_Public_Der[162UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_15_CryptoKeyType_RSA2048_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA2048_Public_Der[294UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_16_CryptoKeyType_RSA3072_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA3072_Public_Der[422UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_17_CryptoKeyType_RSA4096_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA4096_Public_Der[550UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_18_CryptoKeyType_AES128_BCK_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES128_BCK[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_19_CryptoKeyType_AES192_BCK_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES192_BCK[24UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_20_CryptoKeyType_AES256_BCK_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES256_BCK[32UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_21_CryptoKeyType_AES128_BCK_ENDECRYPT_CryptoKeyElement_AES128_BCK[16UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_21_CryptoKeyType_AES128_BCK_ENDECRYPT_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_22_CryptoKeyType_AES192_BCK_ENDECRYPT_CryptoKeyElement_AES192_BCK[24UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_22_CryptoKeyType_AES192_BCK_ENDECRYPT_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_23_CryptoKeyType_AES256_BCK_ENDECRYPT_CryptoKeyElement_AES256_BCK[32UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_23_CryptoKeyType_AES256_BCK_ENDECRYPT_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_24_CryptoKeyType_RSA1024_SIGANATURE_GENERATION_CryptoKeyElement_RSA1024_D[128UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_24_CryptoKeyType_RSA1024_SIGANATURE_GENERATION_CryptoKeyElement_RSA1024_N[128UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_25_CryptoKeyType_RSA2048_SIGANATURE_GENERATION_CryptoKeyElement_RSA2048_D[256UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_25_CryptoKeyType_RSA2048_SIGANATURE_GENERATION_CryptoKeyElement_RSA2048_N[256UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_26_CryptoKeyType_RSA3072_SIGANATURE_GENERATION_CryptoKeyElement_RSA3072_N[384UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_26_CryptoKeyType_RSA3072_SIGANATURE_GENERATION_CryptoKeyElement_RSA3072_D[384UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_27_CryptoKeyType_RSA4096_SIGANATURE_GENERATION_CryptoKeyElement_RSA4096_D[512UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_27_CryptoKeyType_RSA4096_SIGANATURE_GENERATION_CryptoKeyElement_RSA4096_N[512UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_28_CryptoKeyType_RSA1024_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA1024_Private_Der[700UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_29_CryptoKeyType_RSA2048_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA2048_Private_Der[1300UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_30_CryptoKeyType_RSA3072_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA3072_Private_Der[1800UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_31_CryptoKeyType_RSA4096_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA4096_Private_Der[2400UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_32_CryptoKeyType_KeySace_AES_ENDRYPT_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_32_CryptoKeyType_KeySace_AES_ENDRYPT_CryptoKeyElement_AES_KEY_KeySpace[32UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_33_CryptoKeyType_KeySpace_CMAC_CryptoKeyElement_CMAC_KEY_KeySpace[32UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_34_CryptoKeyType_KeySpace_ECC224_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace224[56UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_34_CryptoKeyType_KeySpace_ECC224_PublicKey_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_35_CryptoKeyType_KeySpace_RSA4096_PrivateKey_CryptoKeyElement_RSA_D_KeySpace4096[512UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_35_CryptoKeyType_KeySpace_RSA4096_PrivateKey_CryptoKeyElement_RSA_N_KeySpace4096[512UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_36_CryptoKeyType_KeySpace_RSA4096_PublicKey_CryptoKeyElement_RSA_E_KeySpace[3UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_36_CryptoKeyType_KeySpace_RSA4096_PublicKey_CryptoKeyElement_RSA_N_KeySpace4096[512UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_37_CryptoKeyType_KeySpace_RSA3072_PrivateKey_CryptoKeyElement_RSA_D_KeySpace3072[384UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_37_CryptoKeyType_KeySpace_RSA3072_PrivateKey_CryptoKeyElement_RSA_N_KeySpace3072[384UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_38_CryptoKeyType_KeySpace_RSA3072_PublicKey_CryptoKeyElement_RSA_E_KeySpace[3UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_38_CryptoKeyType_KeySpace_RSA3072_PublicKey_CryptoKeyElement_RSA_N_KeySpace3072[384UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_39_CryptoKeyType_KeySpace_RSA2048_PrivateKey_CryptoKeyElement_RSA_D_KeySpace2048[256UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_39_CryptoKeyType_KeySpace_RSA2048_PrivateKey_CryptoKeyElement_RSA_N_KeySpace2048[256UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_40_CryptoKeyType_KeySpace_RSA2048_PublicKey_CryptoKeyElement_RSA_E_KeySpace[3UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_40_CryptoKeyType_KeySpace_RSA2048_PublicKey_CryptoKeyElement_RSA_N_KeySpace2048[256UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_41_CryptoKeyType_KeySpace_RSA1024_PrivateKey_CryptoKeyElement_RSA_D_KeySpace1024[128UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_41_CryptoKeyType_KeySpace_RSA1024_PrivateKey_CryptoKeyElement_RSA_N_KeySpace1024[128UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_42_CryptoKeyType_KeySpace_RSA1024_PublicKey_CryptoKeyElement_RSA_E_KeySpace[3UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_42_CryptoKeyType_KeySpace_RSA1024_PublicKey_CryptoKeyElement_RSA_N_KeySpace1024[128UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_43_CryptoKeyType_KeySpace_ECC256_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace256[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_43_CryptoKeyType_KeySpace_ECC256_PublicKey_CryptoKeyElement_OID_8Bytes[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_44_CryptoKeyType_KeySpace_ECC384_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace384[96UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_44_CryptoKeyType_KeySpace_ECC384_PublicKey_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_45_CryptoKeyType_KeySpace_ECC521_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace521[132UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_45_CryptoKeyType_KeySpace_ECC521_PublicKey_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_46_CryptoKeyType_KeySpace_RSA1024_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der1024[162UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_47_CryptoKeyType_KeySpace_RSA1024_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der1024[700UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_48_CryptoKeyType_KeySpace_RSA2048_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der2048[294UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_49_CryptoKeyType_KeySpace_RSA2048_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der2048[1300UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_50_CryptoKeyType_KeySpace_RSA3072_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der3072[422UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_51_CryptoKeyType_KeySpace_RSA3072_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der3072[1800UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_52_CryptoKeyType_KeySpace_RSA4096_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der4096[550UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_53_CryptoKeyType_KeySpace_RSA4096_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der4096[2400UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_54_CryptoKeyType_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_54_CryptoKeyType_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_USERID[128UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_54_CryptoKeyType_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_55_CryptoKeyType_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_55_CryptoKeyType_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_56_CryptoKeyType_KeySpace_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC_KeySpace[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_56_CryptoKeyType_KeySpace_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_USERID[128UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_56_CryptoKeyType_KeySpace_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_57_CryptoKeyType_KeySpace_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC_KeySpace[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_57_CryptoKeyType_KeySpace_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_58_CryptoKeyType_RSA_Public_SIGANATURE_VERIFICATION_CryptoKeyElement__RSA_PUBLIC[550UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_59_CryptoKeyType_BrainPool_SIGNATURE_VERIFICATION_CryptoKeyElement_ECC256_PUBLIC_KEY[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_59_CryptoKeyType_BrainPool_SIGNATURE_VERIFICATION_CryptoKeyElement_OID_9Bytes[9UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_60_CryptoKeyType_HMAC128_MAC_GENERATION_CryptoKeyElement_HMAC128[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_61_CryptoKeyType_HMAC160_MAC_GENERATION_CryptoKeyElement_HMAC160[20UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_62_CryptoKeyType_HMAC224_MAC_GENERATION_CryptoKeyElement_HMAC224[28UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_63_CryptoKeyType_HMAC256_MAC_GENERATION_CryptoKeyElement_HMAC256[32UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_64_CryptoKeyType_HMAC384_MAC_GENERATION_CryptoKeyElement_HMAC384[48UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_65_CryptoKeyType_HMAC512_MAC_GENERATION_CryptoKeyElement_HMAC512[64UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_66_CryptoKeyType_Update_She_Bank0_Master_Ecu_Key_CryptoKeyElement_Update_She_Bank0_Master_Ecu_Key_M1M2M3[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_66_CryptoKeyType_Update_She_Bank0_Master_Ecu_Key_CryptoKeyElement_SHE_M4M5[48UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_67_CryptoKeyType_She_Bank0_Master_Ecu_Key_CryptoKeyElement_She_Bank0_Master_Ecu_Key[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_68_CryptoKeyType_Update_She_Bank0_Key1_CryptoKeyElement_Update_She_Bank0_Key1[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_68_CryptoKeyType_Update_She_Bank0_Key1_CryptoKeyElement_SHE_M4M5[48UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_69_CryptoKeyType_She_Bank0_Key1_CryptoKeyElement_She_Bank0_Key1[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_70_CryptoKeyType_Update_She_Bank0_Key2_CryptoKeyElement_Update_She_Bank0_Key2[64UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_70_CryptoKeyType_Update_She_Bank0_Key2_CryptoKeyElement_SHE_M4M5[48UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_71_CryptoKeyType_She_Bank0_Key2_CryptoKeyElement_She_Bank0_Key2[16UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_71_CryptoKeyType_She_Bank0_Key2_CryptoKeyElement_AES_IV[16UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_72_CryptoKeyType_ECC224_SIGANATURE_GENERATION_CryptoKeyElement_ECC224_PRIVATE_KEY[28UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_72_CryptoKeyType_ECC224_SIGANATURE_GENERATION_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_73_CryptoKeyType_ECC256_SIGANATURE_GENERATION_CryptoKeyElement_ECC256_PRIVATE_KEY[32UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_73_CryptoKeyType_ECC256_SIGANATURE_GENERATION_CryptoKeyElement_OID_8Bytes[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_74_CryptoKeyType_ECC384_SIGANATURE_GENERATION_CryptoKeyElement_ECC384_PRIVATE_KEY[48UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_74_CryptoKeyType_ECC384_SIGANATURE_GENERATION_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_75_CryptoKeyType_ECC521_SIGANATURE_GENERATION_CryptoKeyElement_ECC521_PRIVATE_KEY[66UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_75_CryptoKeyType_ECC521_SIGANATURE_GENERATION_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_76_CryptoKeyType_KeySpace_ECC224_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace224[28UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_76_CryptoKeyType_KeySpace_ECC224_PrivateKey_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_77_CryptoKeyType_KeySpace_ECC256_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace256[32UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_77_CryptoKeyType_KeySpace_ECC256_PrivateKey_CryptoKeyElement_OID_8Bytes[8UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_78_CryptoKeyType_KeySpace_ECC384_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace384[48UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_78_CryptoKeyType_KeySpace_ECC384_PrivateKey_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                        
                                                                                
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_79_CryptoKeyType_KeySpace_ECC521_PrivateKey_CryptoKeyElement_OID_5Bytes[5UL] __attribute__((aligned(4U)));
                                                            
                
CRYPTO_DATA_SECTION STATIC uint8 Crypto_KeyElement_CryptoKey_79_CryptoKeyType_KeySpace_ECC521_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace521[66UL] __attribute__((aligned(4U)));
                                            /* PRQA S 0779 -- */
#define CRYPTO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Crypto_MemMap.h"


#define CRYPTO_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crypto_MemMap.h"

/* Store KeyElements used by the keys configured */
            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_0_CryptoKeyType_PC [2]=
{
                                                            
    {
        0UL,

        &Crypto_KeyElement_CryptoKey_0_CryptoKeyType_AES128_ENDECRYPT_CryptoKeyElement_AES128_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_0_CryptoKeyType_AES128_ENDECRYPT_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_1_CryptoKeyType_PC [2]=
{
                                                            
    {
        2UL,

        &Crypto_KeyElement_CryptoKey_1_CryptoKeyType_AES192_ENDECRYPT_CryptoKeyElement_AES192_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_1_CryptoKeyType_AES192_ENDECRYPT_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_2_CryptoKeyType_PC [2]=
{
                                                            
    {
        3UL,

        &Crypto_KeyElement_CryptoKey_2_CryptoKeyType_AES256_ENDECRYPT_CryptoKeyElement_AES256_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_2_CryptoKeyType_AES256_ENDECRYPT_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_3_CryptoKeyType_PC [1]=
{
                                                            
    {
        0UL,

        &Crypto_KeyElement_CryptoKey_3_CryptoKeyType_AES128_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES128_KEY[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_4_CryptoKeyType_PC [1]=
{
                                                            
    {
        2UL,

        &Crypto_KeyElement_CryptoKey_4_CryptoKeyType_AES192_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES192_KEY[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_5_CryptoKeyType_PC [1]=
{
                                                            
    {
        3UL,

        &Crypto_KeyElement_CryptoKey_5_CryptoKeyType_AES256_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES256_KEY[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_6_CryptoKeyType_PC [2]=
{
                                                            
    {
        4UL,

        &Crypto_KeyElement_CryptoKey_6_CryptoKeyType_ECC224_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC224_PUBLIC_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_6_CryptoKeyType_ECC224_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_7_CryptoKeyType_PC [2]=
{
                                                            
    {
        6UL,

        &Crypto_KeyElement_CryptoKey_7_CryptoKeyType_ECC256_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC256_PUBLIC_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        7UL,

        &Crypto_KeyElement_CryptoKey_7_CryptoKeyType_ECC256_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_8Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_8_CryptoKeyType_PC [2]=
{
                                                            
    {
        8UL,

        &Crypto_KeyElement_CryptoKey_8_CryptoKeyType_ECC521_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC521_PUBLIC_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_8_CryptoKeyType_ECC521_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_9_CryptoKeyType_PC [2]=
{
                                                            
    {
        9UL,

        &Crypto_KeyElement_CryptoKey_9_CryptoKeyType_ECC384_SIGANATURE_VERIFICATION_CryptoKeyElement_ECC384_PUBLIC_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_9_CryptoKeyType_ECC384_SIGANATURE_VERIFICATION_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_10_CryptoKeyType_PC [2]=
{
                                                            
    {
        10UL,

        &Crypto_KeyElement_CryptoKey_10_CryptoKeyType_RSA1024_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA1024_E[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        11UL,

        &Crypto_KeyElement_CryptoKey_10_CryptoKeyType_RSA1024_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA1024_N[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_11_CryptoKeyType_PC [2]=
{
                                                            
    {
        12UL,

        &Crypto_KeyElement_CryptoKey_11_CryptoKeyType_RSA2048_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA2048_E[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        13UL,

        &Crypto_KeyElement_CryptoKey_11_CryptoKeyType_RSA2048_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA2048_N[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_12_CryptoKeyType_PC [2]=
{
                                                            
    {
        14UL,

        &Crypto_KeyElement_CryptoKey_12_CryptoKeyType_RSA3072_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA3072_N[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        15UL,

        &Crypto_KeyElement_CryptoKey_12_CryptoKeyType_RSA3072_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA3072_E[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_13_CryptoKeyType_PC [2]=
{
                                                            
    {
        16UL,

        &Crypto_KeyElement_CryptoKey_13_CryptoKeyType_RSA4096_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA4096_N[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        17UL,

        &Crypto_KeyElement_CryptoKey_13_CryptoKeyType_RSA4096_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA4096_E[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_14_CryptoKeyType_PC [1]=
{
                                                            
    {
        18UL,

        &Crypto_KeyElement_CryptoKey_14_CryptoKeyType_RSA1024_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA1024_Public_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_15_CryptoKeyType_PC [1]=
{
                                                            
    {
        19UL,

        &Crypto_KeyElement_CryptoKey_15_CryptoKeyType_RSA2048_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA2048_Public_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_16_CryptoKeyType_PC [1]=
{
                                                            
    {
        20UL,

        &Crypto_KeyElement_CryptoKey_16_CryptoKeyType_RSA3072_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA3072_Public_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_17_CryptoKeyType_PC [1]=
{
                                                            
    {
        21UL,

        &Crypto_KeyElement_CryptoKey_17_CryptoKeyType_RSA4096_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA4096_Public_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_18_CryptoKeyType_PC [1]=
{
                                                            
    {
        22UL,

        &Crypto_KeyElement_CryptoKey_18_CryptoKeyType_AES128_BCK_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES128_BCK[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_19_CryptoKeyType_PC [1]=
{
                                                            
    {
        23UL,

        &Crypto_KeyElement_CryptoKey_19_CryptoKeyType_AES192_BCK_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES192_BCK[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_20_CryptoKeyType_PC [1]=
{
                                                            
    {
        24UL,

        &Crypto_KeyElement_CryptoKey_20_CryptoKeyType_AES256_BCK_MAC_GENERATION_VERIFICATION_CryptoKeyElement_AES256_BCK[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_21_CryptoKeyType_PC [2]=
{
                                                            
    {
        22UL,

        &Crypto_KeyElement_CryptoKey_21_CryptoKeyType_AES128_BCK_ENDECRYPT_CryptoKeyElement_AES128_BCK[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_21_CryptoKeyType_AES128_BCK_ENDECRYPT_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_22_CryptoKeyType_PC [2]=
{
                                                            
    {
        23UL,

        &Crypto_KeyElement_CryptoKey_22_CryptoKeyType_AES192_BCK_ENDECRYPT_CryptoKeyElement_AES192_BCK[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_22_CryptoKeyType_AES192_BCK_ENDECRYPT_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_23_CryptoKeyType_PC [2]=
{
                                                            
    {
        24UL,

        &Crypto_KeyElement_CryptoKey_23_CryptoKeyType_AES256_BCK_ENDECRYPT_CryptoKeyElement_AES256_BCK[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_23_CryptoKeyType_AES256_BCK_ENDECRYPT_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_24_CryptoKeyType_PC [2]=
{
                                                            
    {
        25UL,

        &Crypto_KeyElement_CryptoKey_24_CryptoKeyType_RSA1024_SIGANATURE_GENERATION_CryptoKeyElement_RSA1024_D[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        11UL,

        &Crypto_KeyElement_CryptoKey_24_CryptoKeyType_RSA1024_SIGANATURE_GENERATION_CryptoKeyElement_RSA1024_N[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_25_CryptoKeyType_PC [2]=
{
                                                            
    {
        26UL,

        &Crypto_KeyElement_CryptoKey_25_CryptoKeyType_RSA2048_SIGANATURE_GENERATION_CryptoKeyElement_RSA2048_D[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        13UL,

        &Crypto_KeyElement_CryptoKey_25_CryptoKeyType_RSA2048_SIGANATURE_GENERATION_CryptoKeyElement_RSA2048_N[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_26_CryptoKeyType_PC [2]=
{
                                                            
    {
        14UL,

        &Crypto_KeyElement_CryptoKey_26_CryptoKeyType_RSA3072_SIGANATURE_GENERATION_CryptoKeyElement_RSA3072_N[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        27UL,

        &Crypto_KeyElement_CryptoKey_26_CryptoKeyType_RSA3072_SIGANATURE_GENERATION_CryptoKeyElement_RSA3072_D[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_27_CryptoKeyType_PC [2]=
{
                                                            
    {
        28UL,

        &Crypto_KeyElement_CryptoKey_27_CryptoKeyType_RSA4096_SIGANATURE_GENERATION_CryptoKeyElement_RSA4096_D[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        16UL,

        &Crypto_KeyElement_CryptoKey_27_CryptoKeyType_RSA4096_SIGANATURE_GENERATION_CryptoKeyElement_RSA4096_N[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_28_CryptoKeyType_PC [1]=
{
                                                            
    {
        29UL,

        &Crypto_KeyElement_CryptoKey_28_CryptoKeyType_RSA1024_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA1024_Private_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_29_CryptoKeyType_PC [1]=
{
                                                            
    {
        30UL,

        &Crypto_KeyElement_CryptoKey_29_CryptoKeyType_RSA2048_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA2048_Private_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_30_CryptoKeyType_PC [1]=
{
                                                            
    {
        31UL,

        &Crypto_KeyElement_CryptoKey_30_CryptoKeyType_RSA3072_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA3072_Private_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_31_CryptoKeyType_PC [1]=
{
                                                            
    {
        32UL,

        &Crypto_KeyElement_CryptoKey_31_CryptoKeyType_RSA4096_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA4096_Private_Der[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_32_CryptoKeyType_PC [2]=
{
                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_32_CryptoKeyType_KeySace_AES_ENDRYPT_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        33UL,

        &Crypto_KeyElement_CryptoKey_32_CryptoKeyType_KeySace_AES_ENDRYPT_CryptoKeyElement_AES_KEY_KeySpace[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_33_CryptoKeyType_PC [1]=
{
                                                            
    {
        34UL,

        &Crypto_KeyElement_CryptoKey_33_CryptoKeyType_KeySpace_CMAC_CryptoKeyElement_CMAC_KEY_KeySpace[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_34_CryptoKeyType_PC [2]=
{
                                                            
    {
        35UL,

        &Crypto_KeyElement_CryptoKey_34_CryptoKeyType_KeySpace_ECC224_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace224[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_34_CryptoKeyType_KeySpace_ECC224_PublicKey_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_35_CryptoKeyType_PC [2]=
{
                                                            
    {
        36UL,

        &Crypto_KeyElement_CryptoKey_35_CryptoKeyType_KeySpace_RSA4096_PrivateKey_CryptoKeyElement_RSA_D_KeySpace4096[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        37UL,

        &Crypto_KeyElement_CryptoKey_35_CryptoKeyType_KeySpace_RSA4096_PrivateKey_CryptoKeyElement_RSA_N_KeySpace4096[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_36_CryptoKeyType_PC [2]=
{
                                                            
    {
        38UL,

        &Crypto_KeyElement_CryptoKey_36_CryptoKeyType_KeySpace_RSA4096_PublicKey_CryptoKeyElement_RSA_E_KeySpace[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        37UL,

        &Crypto_KeyElement_CryptoKey_36_CryptoKeyType_KeySpace_RSA4096_PublicKey_CryptoKeyElement_RSA_N_KeySpace4096[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_37_CryptoKeyType_PC [2]=
{
                                                            
    {
        39UL,

        &Crypto_KeyElement_CryptoKey_37_CryptoKeyType_KeySpace_RSA3072_PrivateKey_CryptoKeyElement_RSA_D_KeySpace3072[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        40UL,

        &Crypto_KeyElement_CryptoKey_37_CryptoKeyType_KeySpace_RSA3072_PrivateKey_CryptoKeyElement_RSA_N_KeySpace3072[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_38_CryptoKeyType_PC [2]=
{
                                                            
    {
        38UL,

        &Crypto_KeyElement_CryptoKey_38_CryptoKeyType_KeySpace_RSA3072_PublicKey_CryptoKeyElement_RSA_E_KeySpace[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        40UL,

        &Crypto_KeyElement_CryptoKey_38_CryptoKeyType_KeySpace_RSA3072_PublicKey_CryptoKeyElement_RSA_N_KeySpace3072[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_39_CryptoKeyType_PC [2]=
{
                                                            
    {
        41UL,

        &Crypto_KeyElement_CryptoKey_39_CryptoKeyType_KeySpace_RSA2048_PrivateKey_CryptoKeyElement_RSA_D_KeySpace2048[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        42UL,

        &Crypto_KeyElement_CryptoKey_39_CryptoKeyType_KeySpace_RSA2048_PrivateKey_CryptoKeyElement_RSA_N_KeySpace2048[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_40_CryptoKeyType_PC [2]=
{
                                                            
    {
        38UL,

        &Crypto_KeyElement_CryptoKey_40_CryptoKeyType_KeySpace_RSA2048_PublicKey_CryptoKeyElement_RSA_E_KeySpace[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        42UL,

        &Crypto_KeyElement_CryptoKey_40_CryptoKeyType_KeySpace_RSA2048_PublicKey_CryptoKeyElement_RSA_N_KeySpace2048[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_41_CryptoKeyType_PC [2]=
{
                                                            
    {
        43UL,

        &Crypto_KeyElement_CryptoKey_41_CryptoKeyType_KeySpace_RSA1024_PrivateKey_CryptoKeyElement_RSA_D_KeySpace1024[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        44UL,

        &Crypto_KeyElement_CryptoKey_41_CryptoKeyType_KeySpace_RSA1024_PrivateKey_CryptoKeyElement_RSA_N_KeySpace1024[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_42_CryptoKeyType_PC [2]=
{
                                                            
    {
        38UL,

        &Crypto_KeyElement_CryptoKey_42_CryptoKeyType_KeySpace_RSA1024_PublicKey_CryptoKeyElement_RSA_E_KeySpace[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        44UL,

        &Crypto_KeyElement_CryptoKey_42_CryptoKeyType_KeySpace_RSA1024_PublicKey_CryptoKeyElement_RSA_N_KeySpace1024[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_43_CryptoKeyType_PC [2]=
{
                                                            
    {
        45UL,

        &Crypto_KeyElement_CryptoKey_43_CryptoKeyType_KeySpace_ECC256_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace256[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        7UL,

        &Crypto_KeyElement_CryptoKey_43_CryptoKeyType_KeySpace_ECC256_PublicKey_CryptoKeyElement_OID_8Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_44_CryptoKeyType_PC [2]=
{
                                                            
    {
        46UL,

        &Crypto_KeyElement_CryptoKey_44_CryptoKeyType_KeySpace_ECC384_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace384[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_44_CryptoKeyType_KeySpace_ECC384_PublicKey_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_45_CryptoKeyType_PC [2]=
{
                                                            
    {
        47UL,

        &Crypto_KeyElement_CryptoKey_45_CryptoKeyType_KeySpace_ECC521_PublicKey_CryptoKeyElement_ECC_PUBLIC_KeySpace521[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_45_CryptoKeyType_KeySpace_ECC521_PublicKey_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_46_CryptoKeyType_PC [1]=
{
                                                            
    {
        48UL,

        &Crypto_KeyElement_CryptoKey_46_CryptoKeyType_KeySpace_RSA1024_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der1024[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_47_CryptoKeyType_PC [1]=
{
                                                            
    {
        49UL,

        &Crypto_KeyElement_CryptoKey_47_CryptoKeyType_KeySpace_RSA1024_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der1024[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_48_CryptoKeyType_PC [1]=
{
                                                            
    {
        50UL,

        &Crypto_KeyElement_CryptoKey_48_CryptoKeyType_KeySpace_RSA2048_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der2048[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_49_CryptoKeyType_PC [1]=
{
                                                            
    {
        51UL,

        &Crypto_KeyElement_CryptoKey_49_CryptoKeyType_KeySpace_RSA2048_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der2048[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_50_CryptoKeyType_PC [1]=
{
                                                            
    {
        52UL,

        &Crypto_KeyElement_CryptoKey_50_CryptoKeyType_KeySpace_RSA3072_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der3072[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_51_CryptoKeyType_PC [1]=
{
                                                            
    {
        53UL,

        &Crypto_KeyElement_CryptoKey_51_CryptoKeyType_KeySpace_RSA3072_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der3072[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_52_CryptoKeyType_PC [1]=
{
                                                            
    {
        54UL,

        &Crypto_KeyElement_CryptoKey_52_CryptoKeyType_KeySpace_RSA4096_Public_Der_SIGANATURE_VERIFICATION_CryptoKeyElement_RSA_PUBLIC_Der4096[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_53_CryptoKeyType_PC [1]=
{
                                                            
    {
        55UL,

        &Crypto_KeyElement_CryptoKey_53_CryptoKeyType_KeySpace_RSA4096_Private_Der_SIGANATURE_GENERATION_CryptoKeyElement_RSA_PRIVATE_Der4096[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_54_CryptoKeyType_PC [3]=
{
                                                            
    {
        56UL,

        &Crypto_KeyElement_CryptoKey_54_CryptoKeyType_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        57UL,

        &Crypto_KeyElement_CryptoKey_54_CryptoKeyType_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_USERID[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        58UL,

        &Crypto_KeyElement_CryptoKey_54_CryptoKeyType_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_55_CryptoKeyType_PC [2]=
{
                                                            
    {
        56UL,

        &Crypto_KeyElement_CryptoKey_55_CryptoKeyType_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        58UL,

        &Crypto_KeyElement_CryptoKey_55_CryptoKeyType_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_56_CryptoKeyType_PC [3]=
{
                                                            
    {
        59UL,

        &Crypto_KeyElement_CryptoKey_56_CryptoKeyType_KeySpace_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC_KeySpace[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        57UL,

        &Crypto_KeyElement_CryptoKey_56_CryptoKeyType_KeySpace_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_USERID[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        58UL,

        &Crypto_KeyElement_CryptoKey_56_CryptoKeyType_KeySpace_SM2_WITH_USERID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_57_CryptoKeyType_PC [2]=
{
                                                            
    {
        59UL,

        &Crypto_KeyElement_CryptoKey_57_CryptoKeyType_KeySpace_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_PUBLIC_KeySpace[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        58UL,

        &Crypto_KeyElement_CryptoKey_57_CryptoKeyType_KeySpace_SM2_WITH_DEFAULTID_SIGNATURE_VERIFICATION_CryptoKeyElement_SM2_OID[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_58_CryptoKeyType_PC [1]=
{
                                                            
    {
        60UL,

        &Crypto_KeyElement_CryptoKey_58_CryptoKeyType_RSA_Public_SIGANATURE_VERIFICATION_CryptoKeyElement__RSA_PUBLIC[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_59_CryptoKeyType_PC [2]=
{
                                                            
    {
        6UL,

        &Crypto_KeyElement_CryptoKey_59_CryptoKeyType_BrainPool_SIGNATURE_VERIFICATION_CryptoKeyElement_ECC256_PUBLIC_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        61UL,

        &Crypto_KeyElement_CryptoKey_59_CryptoKeyType_BrainPool_SIGNATURE_VERIFICATION_CryptoKeyElement_OID_9Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_60_CryptoKeyType_PC [1]=
{
                                                            
    {
        62UL,

        &Crypto_KeyElement_CryptoKey_60_CryptoKeyType_HMAC128_MAC_GENERATION_CryptoKeyElement_HMAC128[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_61_CryptoKeyType_PC [1]=
{
                                                            
    {
        63UL,

        &Crypto_KeyElement_CryptoKey_61_CryptoKeyType_HMAC160_MAC_GENERATION_CryptoKeyElement_HMAC160[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_62_CryptoKeyType_PC [1]=
{
                                                            
    {
        64UL,

        &Crypto_KeyElement_CryptoKey_62_CryptoKeyType_HMAC224_MAC_GENERATION_CryptoKeyElement_HMAC224[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_63_CryptoKeyType_PC [1]=
{
                                                            
    {
        65UL,

        &Crypto_KeyElement_CryptoKey_63_CryptoKeyType_HMAC256_MAC_GENERATION_CryptoKeyElement_HMAC256[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_64_CryptoKeyType_PC [1]=
{
                                                            
    {
        66UL,

        &Crypto_KeyElement_CryptoKey_64_CryptoKeyType_HMAC384_MAC_GENERATION_CryptoKeyElement_HMAC384[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_65_CryptoKeyType_PC [1]=
{
                                                            
    {
        67UL,

        &Crypto_KeyElement_CryptoKey_65_CryptoKeyType_HMAC512_MAC_GENERATION_CryptoKeyElement_HMAC512[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_66_CryptoKeyType_PC [2]=
{
                                                            
    {
        68UL,

        &Crypto_KeyElement_CryptoKey_66_CryptoKeyType_Update_She_Bank0_Master_Ecu_Key_CryptoKeyElement_Update_She_Bank0_Master_Ecu_Key_M1M2M3[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        69UL,

        &Crypto_KeyElement_CryptoKey_66_CryptoKeyType_Update_She_Bank0_Master_Ecu_Key_CryptoKeyElement_SHE_M4M5[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_67_CryptoKeyType_PC [1]=
{
                                                            
    {
        70UL,

        &Crypto_KeyElement_CryptoKey_67_CryptoKeyType_She_Bank0_Master_Ecu_Key_CryptoKeyElement_She_Bank0_Master_Ecu_Key[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_68_CryptoKeyType_PC [2]=
{
                                                            
    {
        71UL,

        &Crypto_KeyElement_CryptoKey_68_CryptoKeyType_Update_She_Bank0_Key1_CryptoKeyElement_Update_She_Bank0_Key1[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        69UL,

        &Crypto_KeyElement_CryptoKey_68_CryptoKeyType_Update_She_Bank0_Key1_CryptoKeyElement_SHE_M4M5[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_69_CryptoKeyType_PC [1]=
{
                                                            
    {
        72UL,

        &Crypto_KeyElement_CryptoKey_69_CryptoKeyType_She_Bank0_Key1_CryptoKeyElement_She_Bank0_Key1[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_70_CryptoKeyType_PC [2]=
{
                                                            
    {
        73UL,

        &Crypto_KeyElement_CryptoKey_70_CryptoKeyType_Update_She_Bank0_Key2_CryptoKeyElement_Update_She_Bank0_Key2[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        69UL,

        &Crypto_KeyElement_CryptoKey_70_CryptoKeyType_Update_She_Bank0_Key2_CryptoKeyElement_SHE_M4M5[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_71_CryptoKeyType_PC [2]=
{
                                                            
    {
        74UL,

        &Crypto_KeyElement_CryptoKey_71_CryptoKeyType_She_Bank0_Key2_CryptoKeyElement_She_Bank0_Key2[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        1UL,

        &Crypto_KeyElement_CryptoKey_71_CryptoKeyType_She_Bank0_Key2_CryptoKeyElement_AES_IV[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_72_CryptoKeyType_PC [2]=
{
                                                            
    {
        75UL,

        &Crypto_KeyElement_CryptoKey_72_CryptoKeyType_ECC224_SIGANATURE_GENERATION_CryptoKeyElement_ECC224_PRIVATE_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_72_CryptoKeyType_ECC224_SIGANATURE_GENERATION_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_73_CryptoKeyType_PC [2]=
{
                                                            
    {
        76UL,

        &Crypto_KeyElement_CryptoKey_73_CryptoKeyType_ECC256_SIGANATURE_GENERATION_CryptoKeyElement_ECC256_PRIVATE_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        7UL,

        &Crypto_KeyElement_CryptoKey_73_CryptoKeyType_ECC256_SIGANATURE_GENERATION_CryptoKeyElement_OID_8Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_74_CryptoKeyType_PC [2]=
{
                                                            
    {
        77UL,

        &Crypto_KeyElement_CryptoKey_74_CryptoKeyType_ECC384_SIGANATURE_GENERATION_CryptoKeyElement_ECC384_PRIVATE_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_74_CryptoKeyType_ECC384_SIGANATURE_GENERATION_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_75_CryptoKeyType_PC [2]=
{
                                                            
    {
        78UL,

        &Crypto_KeyElement_CryptoKey_75_CryptoKeyType_ECC521_SIGANATURE_GENERATION_CryptoKeyElement_ECC521_PRIVATE_KEY[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_75_CryptoKeyType_ECC521_SIGANATURE_GENERATION_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_76_CryptoKeyType_PC [2]=
{
                                                            
    {
        79UL,

        &Crypto_KeyElement_CryptoKey_76_CryptoKeyType_KeySpace_ECC224_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace224[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_76_CryptoKeyType_KeySpace_ECC224_PrivateKey_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_77_CryptoKeyType_PC [2]=
{
                                                            
    {
        80UL,

        &Crypto_KeyElement_CryptoKey_77_CryptoKeyType_KeySpace_ECC256_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace256[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        7UL,

        &Crypto_KeyElement_CryptoKey_77_CryptoKeyType_KeySpace_ECC256_PrivateKey_CryptoKeyElement_OID_8Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_78_CryptoKeyType_PC [2]=
{
                                                            
    {
        81UL,

        &Crypto_KeyElement_CryptoKey_78_CryptoKeyType_KeySpace_ECC384_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace384[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_78_CryptoKeyType_KeySpace_ECC384_PrivateKey_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    }
                            
};

                            
                                    

CRYPTO_DATA_SECTION STATIC const Crypto_KeyTypeDescriptionType CryptoKey_79_CryptoKeyType_PC [2]=
{
                                                            
    {
        5UL,

        &Crypto_KeyElement_CryptoKey_79_CryptoKeyType_KeySpace_ECC521_PrivateKey_CryptoKeyElement_OID_5Bytes[0]   /*  Buffer to store value of key element */

    },
                                                                            
    {
        82UL,

        &Crypto_KeyElement_CryptoKey_79_CryptoKeyType_KeySpace_ECC521_PrivateKey_CryptoKeyElement_ECC_PRIVATE_KeySpace521[0]   /*  Buffer to store value of key element */

    }
                            
};

                

/* List of keys configured */
CRYPTO_DATA_SECTION const Crypto_KeyType Crypto_CryptoKeyList_PC[CRYPTO_MAXKEY_CONFIGURED] =
{
    /*In this case, we re-order crypto key according to the CryptoKeyIds provided by user*/
    {
        CryptoConf_CryptoKey_CryptoKey_0,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_0_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_1,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_1_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_2,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_2_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_3,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_3_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_4,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_4_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_5,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_5_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_6,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_6_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_7,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_7_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_8,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_8_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_9,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_9_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_10,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_10_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_11,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_11_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_12,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_12_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_13,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_13_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_14,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_14_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_15,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_15_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_16,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_16_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_17,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_17_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_18,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_18_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_19,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_19_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_20,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_20_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_21,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_21_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_22,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_22_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_23,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_23_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_24,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_24_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_25,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_25_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_26,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_26_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_27,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_27_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_28,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_28_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_29,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_29_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_30,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_30_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_31,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_31_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_32,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_ALGO_AES,                        /* CryptoKeyFamily */        
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_32_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_33,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_33_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_34,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_34_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_35,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_35_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_36,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_36_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_37,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_37_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_38,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_38_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_39,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_39_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_40,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_40_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_41,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_41_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_42,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_42_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_43,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_43_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_44,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_44_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_45,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_45_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_46,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_46_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_47,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_47_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_48,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_48_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_49,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_49_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_50,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_50_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_51,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_51_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_52,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_52_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_53,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_53_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_54,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_ALGO_SM2,                /* CryptoKeyFamily */        
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            3U,                                   /* Number of crypto key elements */
            &CryptoKey_54_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_55,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_ALGO_SM2,                /* CryptoKeyFamily */        
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_55_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_56,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_ALGO_SM2,                /* CryptoKeyFamily */        
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            3U,                                   /* Number of crypto key elements */
            &CryptoKey_56_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_57,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_ALGO_SM2,                /* CryptoKeyFamily */        
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_57_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_58,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_ALGO_RSA,                                /* CryptoKeyFamily */        
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_58_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_59,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_59_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_60,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_60_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_61,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_61_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_62,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_62_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_63,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_63_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_64,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_64_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_65,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_65_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_66,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_66_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_67,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_67_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_68,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_68_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_69,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            1U,                                   /* Number of crypto key elements */
            &CryptoKey_69_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_70,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_70_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_71,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_71_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_72,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_72_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_73,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_73_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_74,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_74_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_75,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_75_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_76,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_76_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_77,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_77_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_78,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_78_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    },

    {
        CryptoConf_CryptoKey_CryptoKey_79,         /* Id of crypto key */
                                                                    
        CRYPTO_KEY_FAMILY_NOT_SET,                           /* CryptoKeyFamily */
        1U,                                          /* Number of iterations to be performed during derivation */
        {
            2U,                                   /* Number of crypto key elements */
            &CryptoKey_79_CryptoKeyType_PC[0],     /* List of Key elements */
        }
    }

};

 /* End of key parsing configuration*/

#define CRYPTO_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Crypto_MemMap.h"

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/











    
                            




#define  CRYPTO_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

CRYPTO_DATA_SECTION volatile Crypto_CoreMailboxCtxInfType Crypto_aMailboxInfCtx[CRYPTO_CHIP_MBCHANNEL_CNT+1] = { /* plus 1 for dummy usage */

    {
        0u,
        0u,
    },

    {
        0u,
        0u,
    },

    {
        0u,
        0u,
    },

    {
        0u,
        0u,
    },

    {
        0u,
        0u,
    },

    {
        0u,
        0u,
    },

    {
        0u,
        0u,
    },

};

#define CRYPTO_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

/* if user set the buffer, just place it in the sram, for check not repeat */

/* Not support set hsm runtime buffer */

#define  CRYPTO_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"


CRYPTO_DATA_SECTION volatile Crypto_HsmRuntimeType Crypto_aCore0McalHsmRuntime;



#define  CRYPTO_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

#define  CRYPTO_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

CRYPTO_DATA_SECTION volatile Crypto_CoreHsmCtxInfType Crypto_aCoreHsmCtx[CRYPTO_CHIP_CORE_CNT] = {

    {
        (void *)(&Crypto_aCore0McalHsmRuntime),
        HSM_STATUS_ERROR,
        0u,
    },

    {
        NULL_PTR,
        HSM_STATUS_ERROR,
        0u,
    },

};

CRYPTO_DATA_SECTION volatile Crypto_CoreMcalInitedCtxInfType Crypto_aCoreMcalInitedCtx[CRYPTO_CHIP_CORE_CNT] = {

    {
        CRYTO_DRIVER_BUFFER_READY,
        CRYPTO_NO_JOB_TO_CANCEL,
        NULL_PTR,
        NULL_PTR,
    },

    {
        CRYTO_DRIVER_BUFFER_READY,
        CRYPTO_NO_JOB_TO_CANCEL,
        NULL_PTR,
        NULL_PTR,
    },

};

#define CRYPTO_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"





#define CRYPTO_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

CRYPTO_DATA_SECTION volatile Crypto_CoreMcalUninitedCtxInfType Crypto_aCoreMcalUninitedCtx[CRYPTO_CHIP_CORE_CNT];

#define CRYPTO_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"

CRYPTO_DATA_SECTION const Crypto_CoreCtxInfType Crypto_aCoreCtx[CRYPTO_CHIP_CORE_CNT] = {

    {
        ((uint8)( 1 )) | (((uint8)( 1 )) << 1u),
        ((uint8)( 4 )),
        ((uint8)( 5 )),
        ((uint8)( 0 )) | (((uint8)( 0 )) << 1u),

        &Crypto_aMailboxInfCtx[ 4 ],
        &Crypto_aMailboxInfCtx[ 5 ],
        &Crypto_aCoreHsmCtx[0],
        &Crypto_aCoreMcalUninitedCtx[0],
        &Crypto_aCoreMcalInitedCtx[0],
    },
    {
        ((uint8)( 0 )) | (((uint8)( 0 )) << 1u),
        ((uint8)( 6 )),
        ((uint8)( 6 )),
        ((uint8)( 1 )) | (((uint8)( 1 )) << 1u),

        &Crypto_aMailboxInfCtx[ 6 ],
        &Crypto_aMailboxInfCtx[ 6 ],
        &Crypto_aCoreHsmCtx[1],
        &Crypto_aCoreMcalUninitedCtx[1],
        &Crypto_aCoreMcalInitedCtx[1],
    },
};

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_GetSpinLock(uint32 *pLock)
{
    Std_ReturnType eSucc = E_OK;
    /* PRQA S 2905 ++
                Constant: Positive integer value truncated by cast to a smaller unsigned type.
                REASON: The actual timeout period may vary depending on the MCU frequency.
        */
    uint32 u32Timeout = CRYPTO_SPINLOCK_TRY_MAX_CNT;
    /* PRQA S 2905 -- */
    while ((0U < u32Timeout) && (E_OK != SpinLock_Acquire(pLock)))
    {
        u32Timeout--;
    }

    if (0U == u32Timeout)
    {
        eSucc = E_NOT_OK;
    }
    return eSucc;
}

/**
* @brief          Release the spin lock of the mailbox
*
* @return         void
*
*/
CRYPTO_TEXT_SECTION void Crypto_ReleaseSpinLock(uint32 *pLock)
{
    SpinLock_Release(pLock);
}

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"



/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/


/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

    
#define CRYPTO_ITCM_START_ADDR  0x0u
#define CRYPTO_ITCM_END_ADDR    0x2FFFFu
#define CRYPTO_DTCM_START_ADDR  0x20000000u
#define CRYPTO_DTCM_END_ADDR    0x2006FFFFu
    


#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_SetRuntimeBuffer(void *pRuntime) /* Crypto_HsmRuntimeType */
{
    Std_ReturnType eRet;


    eRet = E_OK;


    return eRet;
}

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

/*#endif*/ /* defined(CRYPTO_PRECOMPILE_SUPPORT) */

#ifdef __cplusplus
}
#endif

/** @} */
