/**
 *   @file    Crypto.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - High level header of CRY driver.
 *   @details This file contains declarations of the functions defined by AutoSAR.
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

#ifndef CRYPTO_H
#define CRYPTO_H

#ifdef __cplusplus
extern "C"
{
#endif
/* [SWS_Crypto_00007] */
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/* [SWS_Crypto_00009] */
#include "Rte_Csm_Type.h"
#include "Crypto_GeneralTypes.h"
#include "Crypto_Types.h"
/* [SWS_Crypto_00009] */
#include "Crypto_Cfg.h"
#include "Crypto_Version.h"
#include "Mcal.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
/********************************API identifiers*************************/
#define Crypto_GetCoreID()               GET_CPU_ID()

#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
/**
* @brief            API service ID of Crypto_Init()
* @details          This service ID is used to log an error that occurred when calling Crypto_Init().
*
* @api
*/
#define CRYPTO_INIT_ID                               ((uint8)0x00U)
/**
* @brief            API service ID of Crypto_GetVersionInfo()
* @details          This service ID is used to log an error that occurred when calling Crypto_GetVersionInfo().
*
* @api
*/
#if (CRYPTO_VERSION_INFO_API == STD_ON)
#define CRYPTO_GETVERSIONINFO_ID                     ((uint8)0x01U)
#endif
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
/**
* @brief            API service ID of Crypto_ProcessJob()
* @details          This service ID is used to log an error that occurred when calling Crypto_ProcessJob().
*
* @api
*/
#if ( CRYPTO_DEV_ERROR_DETECT == STD_ON )
#define CRYPTO_PROCESSJOB_ID                         ((uint8)0x03U)
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
/**
* @brief            API service ID of Crypto_KeyElementSet function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyElementSet().
* @api
*/
#define CRYPTO_KEY_ELEMENTSET_ID                     ((uint8)0x04U)
/**
* @brief            API service ID of Crypto_KeySetValid function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeySetValid().
* @api
*/
#define CRYPTO_KEY_VALIDSET_ID                       ((uint8)0x05U)
/**
* @brief            API service ID of Crypto_KeySetInvalid function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeySetInvalid().
* @api
*/
#define CRYPTO_KEY_INVALIDSET_ID                     ((uint8)0x15U)

#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
/**
* @brief            API service ID of Crypto_KeyElementGet function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyElementGet().
* @api
*/
#if ( CRYPTO_DEV_ERROR_DETECT == STD_ON )
#define CRYPTO_KEY_ELEMENTGET_ID                     ((uint8)0x06U)
/**
* @brief            API service ID of Crypto_KeyElementsIdsGet function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyElementsIdsGet().
* @api
*/
#define CRYPTO_KEY_ELEMENTIDSGET_ID                  ((uint8)0x11U)
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
/**
* @brief            API service ID of Crypto_KeyGenerate function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyGenerate().
* @api
*/
#define CRYPTO_KEY_GENERATE_ID                       ((uint8)0x07U)
/**
* @brief            API service ID of Crypto_KeyDerive function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyDerive().
* @api
*/
#define CRYPTO_KEY_DERIVE_ID                         ((uint8)0x08U)
/**
* @brief            API service ID of Crypto_KeyExchangeCalcPubVal function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyExchangeCalcPubVal().
* @api
*/
#define CRYPTO_KEY_EXCHANGECALCPUB_ID                ((uint8)0x09U)
/**
* @brief            API service ID of Crypto_KeyExchangeCalcSecret function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyExchangeCalcSecret().
* @api
*/
#define CRYPTO_KEY_EXCHCALCSECRET_ID                 ((uint8)0x0AU)
/**
* @brief            API service ID of Crypto_CertificateParse function
* @details          This service ID is used to log an error that occurred when calling Crypto_CertificateParse().
* @api
*/
#define CRYPTO_KEY_CERTIFICATEPARSE_ID               ((uint8)0x0BU)
/**
* @brief            API service ID of Crypto_MainFunction function
* @details          This service ID is used to log an error that occurred when calling Crypto_MainFunction().
* @api
*/
#define CRYPTO_MAINFUNCTION_ID                       ((uint8)0x0CU)
/**
* @brief            API service ID of Crypto_RandomSeed function
* @details          This service ID is used to log an error that occurred when calling Crypto_RandomSeed().
* @api
*/
#define CRYPTO_KEY_RANDOMSEED_ID                     ((uint8)0x0DU)
/**
* @brief            API service ID of Crypto_CancelJob()
* @details          This service ID is used to log an error that occurred when calling Crypto_CancelJob().
*
* @api
*/
#define CRYPTO_CANCELJOB_ID                          ((uint8)0x0EU)
/**
* @brief            API service ID of Crypto_KeyElementCopy function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyElementCopy().
* @api
*/
#define CRYPTO_KEY_ELEMENTCOPY_ID                    ((uint8)0x0FU)
/**
* @brief            API service ID of Crypto_KeyCopy function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyCopy().
* @api
*/
#define CRYPTO_KEY_COPY_ID                           ((uint8)0x10U)
/**
* @brief            API service ID of Crypto_CertificateVerify function
* @details          This service ID is used to log an error that occurred when calling Crypto_CertificateVerify().
* @api
*/
#define CRYPTO_KEY_CERTIFICATEVERIFY_ID              ((uint8)0x12U)
/**
* @brief            API service ID of Crypto_KeyElementCopyPartial function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyElementCopyPartial().
* @api
*/
#define CRYPTO_KEY_ELEMENTCOPYPARTIAL_ID             ((uint8)0x13U)
/**
* @brief            API service ID of Crypto_KeyGetStatus function
* @details          This service ID is used to log an error that occurred when calling Crypto_KeyGetStatus().
* @api
*/
#define CRYPTO_KEY_GETSTATUS_ID              ((uint8)0x14U)

#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */

/**************************** Development Error Codes*************************/
#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
/* [SWS_Crypto_00040] */
/**
* @brief            Driver not initialized
* @details          API request called before initialization of Crypto Driver.
*
* @api
*/
#define CRYPTO_E_UNINIT        (0x00U)
/**
* @brief            Driver initialization failure
* @details          Initiation of Crypto Driver failed.
*
* @api
*/
#define CRYPTO_E_INIT_FAILED   (0x01U)
/**
* @brief            Wrong parameter (pointer)
* @details          API request called with invalid parameter (Null pointer).
*
* @api
*/
#define CRYPTO_E_PARAM_POINTER (0x02U)
/**
* @brief            Wrong parameter (out of range)
* @details          API request called with invalid parameter (out of range).
*
* @api
*/
#define CRYPTO_E_PARAM_HANDLE  (0x04U)
/**
* @brief            Wrong parameter (invalid)
* @details          API request called with invalid parameter (invalid value).
*
* @api
*/
#define CRYPTO_E_PARAM_VALUE   (0x05U)
/**
* @brief            Wrong parameter (invalid)
* @details          API request called with invalid parameter (invalid value).
*
* @api
*/
#define CRYPTO_E_STATE_TRANSITION   (0x06U)

/**
* @brief            Wrong version of the HSM firmware (invalid)
* @details          HSM firmware version is not compatible with the CRYPTO driver version.
*
* @api
*/
#define CRYPTO_E_FIRMWARE_VERSION   (0x07U)
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */

/* @implements   DCRYPTO01621 */


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* [SWS_Crypto_00215] */
typedef uint32 Crypto_ConfigType;
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


#define SECOND_OUTBUFFER_CHECK      0
#define TERTIARY_INPUTBUFFER_CHECK  0
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"
CRYPTO_TEXT_SECTION void Crypto_ClearOuputBufs(void);
CRYPTO_TEXT_SECTION void Crypto_Init(const Crypto_ConfigType *configPtr);

#if (CRYPTO_VERSION_INFO_API == STD_ON)
CRYPTO_TEXT_SECTION void Crypto_GetVersionInfo(Std_VersionInfoType *pVersioninfo);
#endif /* CRYPTO_VERSION_INFO_API == STD_ON */

CRYPTO_TEXT_SECTION void Crypto_ScheduleJob(void);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_ProcessJob(uint32 objectId, Crypto_JobType *job);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_CancelJob(uint32 objectId, Crypto_JobType *job);

CRYPTO_TEXT_SECTION void Crypto_MainFunction(void);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementSet(uint32 cryptoKeyId, uint32 keyElementId, const uint8 *keyPtr, uint32 keyLength);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeySetValid(uint32 cryptoKeyId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeySetInvalid (uint32 cryptoKeyId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementGet(uint32 cryptoKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementCopy(uint32 cryptoKeyId, uint32 keyElementId, uint32 targetCrypto_KeyId, uint32 targetKeyElementId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyCopy(uint32 cryptoKeyId, uint32 targetCrypto_KeyId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementCopyPartial(uint32 cryptoKeyId, uint32 keyElementId, uint32 keyElementSourceOffset,
                                                                uint32 keyElementTargetOffset, uint32 keyElementCopyLength,uint32 targetCrypto_KeyId, uint32 targetKeyElementId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementIdsGet(uint32 cryptoKeyId, uint32 *keyElementIdsPtr, uint32 *keyElementIdsLengthPtr);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_RandomSeed(uint32 cryptoKeyId, const uint8 *SeedPtr, uint32 SeedLength);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyGenerate(uint32 cryptoKeyId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyDerive(uint32 cryptoKeyId, uint32 targetCrypto_KeyId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyExchangeCalcPubVal(uint32 cryptoKeyId, uint8 *publicValuePtr, uint32 *publicValueLengthPtr);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyExchangeCalcSecret(uint32 cryptoKeyId, const uint8 *partnerPublicValuePtr, uint32 partnerPublicValueLength);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_CertificateParse(uint32 cryptoKeyId);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_CertificateVerify(uint32 cryptoKeyId, uint32 verifyCrypto_KeyId, Crypto_VerifyResultType *verifyPtr);

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyGetStatus(uint32 cryptoKeyId, Crypto_KeyStatusType* keyStatusPtr);

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CRYPTO_H */

/** @} */

// clang-format on
