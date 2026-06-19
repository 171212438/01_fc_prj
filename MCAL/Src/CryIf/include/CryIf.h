/**
*   @file    CryIf.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CryIf - High level header of CRYIF driver.
*   @details This file contains declarations of the functions defined by AutoSAR.
*
*   @addtogroup CRYIF
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : HSM
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

#ifndef CRYIF_H
#define CRYIF_H

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section CryIf_H_REF_1
* Violates MISRA 2004 Required Rule 19.15, Repeated include files, Precautions shall be taken in
* order to prevent the contents of a header file being included twice This is not a violation since
* all header files are protected against multiple inclusions
*
* @section CryIf_H_REF_2
* Violates MISRA 2004 Required Rule 1.4, Identifier clash. Define name is required by the AUTOSAR
* specifications although it exceeds the max length of 31 characters
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Crypto_GeneralTypes.h"
#include "Rte_Csm_Type.h"
#include "Crypto_Types.h"
#include "CryIf_Cfg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/******************************Module instance identifiers************************/
#define CRYIF_INSTANCE_ID                           ((uint8)0x0U)

/********************************API identifiers**********************************/
/**
* @brief            API service ID of CryIf_Init()
* @details          This service ID is used to log an error that occured when calling CryIf_Init().
* @api
*/
#define CRYIF_INIT_ID                               ((uint8)0x00U)
/**
* @brief            API service ID of CryIf_GetVersionInfo()
* @details          This service ID is used to log an error that occured when calling CryIf_GetVersionInfo().
* @api
*/
#define CRYIF_GETVERSIONINFO_ID                     ((uint8)0x01U)
/**
* @brief            API service ID of CryIf_ProcessJob()
* @details          This service ID is used to log an error that occured when calling CryIf_ProcessJob().
* @api
*/
#define CRYIF_PROCESSJOB_ID                         ((uint8)0x03U)
/**
* @brief            API service ID of CryIf_KeyElementSet function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyElementSet().
* @api
*/
#define CRYIF_KEY_ELEMENTSET_ID                     ((uint8)0x04U)
/**
* @brief            API service ID of CryIf_KeySetValid function
* @details          This service ID is used to log an error that occured when calling CryIf_KeySetValid().
* @api
*/
#define CRYIF_KEY_SETVALID_ID                       ((uint8)0x05U)
/**
* @brief            API service ID of CryIf_KeyElementGet function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyElementGet().
* @api
*/
#define CRYIF_KEY_ELEMENTGET_ID                     ((uint8)0x06U)
/**
* @brief            API service ID of CryIf_KeyGenerate function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyGenerate().
* @api
*/
#define CRYIF_KEY_GENERATE_ID                       ((uint8)0x08U)
/**
* @brief            API service ID of CryIf_KeyDerive function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyDerive().
* @api
*/
#define CRYIF_KEY_DERIVE_ID                         ((uint8)0x09U)
/**
* @brief            API service ID of CryIf_KeyExchangeCalcPubVal function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyExchangeCalcPubVal().
* @api
*/
#define CRYIF_KEY_EXCHANGECALCPUB_ID                ((uint8)0x0AU)
/**
* @brief            API service ID of CryIf_KeyExchangeCalcSecret function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyExchangeCalcSecret().
* @api
*/
#define CRYIF_KEY_EXCHANGECALCSECRET_ID             ((uint8)0x0BU)
/**
* @brief            API service ID of CryIf_CertificateParse function
* @details          This service ID is used to log an error that occured when calling CryIf_CertificateParse().
* @api
*/
#define CRYIF_KEY_CERTIFICATEPARSE_ID               ((uint8)0x0CU)
/**
* @brief            API service ID of CryIf_MainFunction function
* @details          This service ID is used to log an error that occured when calling CryIf_MainFunction().
* @api
*/
#define CRYIF_MAINFUNCTION_ID                       ((uint8)0x0CU)
/**
* @brief            API service ID of CryIf_RandomSeed function
* @details          This service ID is used to log an error that occured when calling CryIf_RandomSeed().
* @api
*/
#define CRYIF_KEY_RANDOMSEED_ID                     ((uint8)0x07U)
/**
* @brief            API service ID of CryIf_CancelJob()
* @details          This service ID is used to log an error that occured when calling CryIf_CancelJob().
* @api
*/
#define CRYIF_CANCELJOB_ID                          ((uint8)0x0EU)
/**
* @brief            API service ID of CryIf_KeyElementCopy function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyElementCopy().
* @api
*/
#define CRYIF_KEY_ELEMENTCOPY_ID                    ((uint8)0x0FU)
/**
* @brief            API service ID of CryIf_KeyCopy function
* @details          This service ID is used to log an error that occured when calling CryIf_KeyCopy().
* @api
*/
#define CRYIF_KEY_COPY_ID                           ((uint8)0x10U)
/**
* @brief            API service ID of CryIf_CertificateVerify function
* @details          This service ID is used to log an error that occured when calling CryIf_CertificateVerify().
* @api
*/
#define CRYIF_KEY_CERTIFICATEVERIFY_ID              ((uint8)0x12U)
/**
* @brief            API service ID of CryIf_CallbackNotification function
* @details          This service ID is used to log an error that occured when calling CryIf_CallbackNotification().
* @api
*/
#define CRYIF_CALLBACK_NOTIFICATION_ID              ((uint8)0x0DU)

/**********************************Error Codes***************************/
/**
* @brief            Driver not initialized
* @details          API request called before initialisation of CRYIF module.
* @api
*/
#define CRYIF_E_UNINIT        (0x00U)
/**
* @brief            Driver initialization failure
* @details          Initialisation of CRYIF module failed.
* @api
*/
#define CRYIF_E_INIT_FAILED   (0x01U)
/**
* @brief            Wrong parameter (pointer)
* @details          API request called with invalid parameter (Null pointer).
* @api
*/
#define CRYIF_E_PARAM_POINTER (0x02U)
/**
* @brief            Wrong parameter (out of range)
* @details          API request called with invalid parameter (out of range).
* @api
*/
#define CRYIF_E_PARAM_HANDLE  (0x03U)
/**
* @brief            Wrong parameter (invalid)
* @details          API request called with invalid parameter (invalid value).
* @api
*/
#define CRYIF_E_PARAM_VALUE   (0x04U)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"
/* @details Represents the configuration data of CryIf . */
CRYPTO_DATA_SECTION extern const uint32 CryIf_CryptoKeyList_PC[CRYIF_MAXKEY_CONFIGURED];
CRYPTO_DATA_SECTION extern const uint32 CryIf_CryptoObjectList_PC[CRYIF_MAXCHANNELS_CONFIGURED];
#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"
/* Key General Interface */
CRYPTO_TEXT_SECTION void CryIf_Init(void);
CRYPTO_TEXT_SECTION void CryIf_GetVersionInfo(Std_VersionInfoType *pVersioninfo);

/* Key Job Interface */
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_ProcessJob(uint32 channelId, Crypto_JobType *job);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_CancelJob(uint32 channelId, Crypto_JobType *job);

/* Key Management Interface */
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyElementSet(uint32 cryIfKeyId, uint32  keyElementId, const uint8 *keyPtr, uint32 keyLength);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeySetValid(uint32 cryIfKeyId);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyElementGet(uint32 cryIfKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyElementCopy(uint32 cryIfKeyId, uint32 keyElementId, uint32 targetCryIfKeyId, uint32 targetKeyElementId);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyCopy(uint32 cryIfKeyId, uint32 targetCryIfKeyId);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_RandomSeed(uint32 cryIfKeyId, const uint8 *seedPtr, uint32 seedLength);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyGenerate(uint32 cryIfKeyId);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyDerive(uint32 cryIfKeyId,       uint32 targetCryIfKeyId);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyExchangeCalcPubVal(uint32 cryIfKeyId, uint8 *publicValuePtr, uint32 *publicValueLengthPtr);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyExchangeCalcSecret(uint32 cryIfKeyId, const uint8 *partnerPublicValuePtr, uint32 partnerPublicValueLength);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_CertificateParse(uint32 cryIfKeyId);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_CertificateVerify(uint32 cryIfKeyId, uint32 verifycryIfKeyId, Crypto_VerifyResultType *verifyPtr);
/* As per RfC 80159 Pointer to Crypto_JobType as an argument in APIs should be mentioned with 'const' qualifier */
CRYPTO_TEXT_SECTION void CryIf_CallbackNotification(const Crypto_JobType *job,     Std_ReturnType result);
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_ProcessJob(uint32 channelId, Crypto_JobType *job);
#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CRYIF_H */

/** @} */
