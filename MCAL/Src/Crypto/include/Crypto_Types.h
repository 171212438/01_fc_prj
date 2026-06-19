/**
 *   @file    Crypto_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CRYPTO - Crypto Types header file.
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
// clang-format off

#ifndef CRYPTO_TYPES_H
#define CRYPTO_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

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
/* The Crypto Stack API uses the following extension to Std_ReturnType */
#define E_BUSY         0x02U         /*The service request failed because the service is still busy*/
#define E_ENTROPY_EXHAUSTED 0x04U    /*The service request failed because the entropy of the random number generator is exhausted*/
#define E_KEY_READ_FAIL     0x06u    /*The service request failed because read access was denied*/
#define E_KEY_WRITE_FAIL    0x07U    /*The service request failed because the writing access failed*/
#define E_KEY_NOT_AVAILABLE 0x08U    /*The service request failed because at least one required key element is not available*/
#define E_KEY_NOT_VALID     0x09U    /*The service request failed because the key is invalid*/
#define E_KEY_SIZE_MISMATCH 0x0AU    /*The service request failed because the key size does not match*/
#define E_JOB_CANCELED      0x0CU    /*The service request failed because the Job has been canceled*/
#define E_KEY_EMPTY         0x0DU    /*The service request failed because of uninitialized source key element*/

/*Key for mac service */
#define CRYPTO_KE_MAC_KEY               1U
#define CRYPTO_KE_MAC_PROOF             2U
#define CRYPTO_KE_KEYGENERATE_SEED      16U
/*Key for signature service */
#define CRYPTO_KE_SIGNATURE_KEY         1U
#define CRYPTO_KE_SIGNATURE_CURVETYPE   29U
/*Random service */
#define CRYPTO_KE_RANDOM_SEED_STATE     3U
#define CRYPTO_KE_RANDOM_ALGORITHM      4U
/*Key for cipher service */
#define CRYPTO_KE_CIPHER_KEY            1U

#define CRYPTO_KE_CIPHER_IV             5U
#define CRYPTO_KE_CIPHER_PROOF          6U
#define CRYPTO_KE_CIPHER_2NDKEY         7U

/*Key exchange */
#define CRYPTO_KE_KEYEXCHANGE_BASE          8U
#define CRYPTO_KE_KEYEXCHANGE_PRIVKEY       9U
#define CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY     10U
#define CYRPTO_KE_KEYEXCHANGE_SHAREDVALUE   1U
#define CRYPTO_KE_KEYEXCHANGE_ALGORITHM     12U
#define CRYPTO_KE_KEYEXCHANGE_CURVETYPE     29U
/*Key derivation */
#define CRYPTO_KE_KEYDERIVATION_PASSWORD    1U
#define CRYPTO_KE_KEYDERIVATION_SALT        13U
#define CRYPTO_KE_KEYDERIVATION_ITERATIONS  14U
#define CRYPTO_KE_KEYDERIVATION_ALGORITHM   15U
#define CRYPTO_KE_KEYDERIVATION_CURVETYPE   29U

/*Key generate */
#define CRYPTO_KE_KEYGENERATE_KEY           1U
#define CRYPTO_KE_KEYGENERATE_SEED          16U
#define CRYPTO_KE_KEYGENERATE_ALGORITHM     17U
#define CRYPTO_KE_KEYGENERATE_CURVETYPE     29U

/* Rsa custom */
#define CRYPTO_KE_CIPHER_RSA_KEY_E      1000U
#define CRYPTO_KE_CIPHER_RSA_KEY_N      1001U

/* Sm2 custom */
#define CRYPTO_KE_CIPHER_SM2_USERID     1002U
/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                      GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* #ifndef CRYPTO_TYPES_H */
/** @} */

// clang-format on
