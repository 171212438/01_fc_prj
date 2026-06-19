/**
*   @file    Cryif_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Cryif - Pre-Compile configurations for Cryif driver.
*   @details Pre-Compile configuration file for Cryif driver.
*
*   @addtogroup Cryif
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
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
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
extern "C"
{
#endif


/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "CryIf.h"
#if (CRYIF_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#include "Csm.h"
#include "Crypto.h"
#include "CryIf_Version.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Adc configuration header file are of the same Autosar version */
#if ((CRYIF_AR_RELEASE_MAJOR_VERSION    != CRYIF_AR_REL_MAJ_VER_CFG) || \
(CRYIF_AR_RELEASE_MINOR_VERSION    != CRYIF_AR_REL_MIN_VER_CFG) || \
(CRYIF_AR_RELEASE_REVISION_VERSION != CRYIF_AR_REL_REV_VER_CFG) \
)
#error "AutoSar Version Numbers of CryIf.h and CryIf_Cfg.h are different"
#endif

/* Check if current file and Adc configuration header file are of the same software version */
#if ((CRYIF_SW_MAJOR_VERSION != CRYIF_SW_MAJOR_VERSION_CFG) || \
(CRYIF_SW_MINOR_VERSION != CRYIF_SW_MINOR_VERSION_CFG) || \
(CRYIF_SW_PATCH_VERSION != CRYIF_SW_PATCH_VERSION_CFG) \
)
#error "Software Version Numbers of CryIf.h and CryIf_Cfg.h are different"
#endif

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
typedef enum
{
    CRYIF_DRIVER_UNINIT = 0x00u,
    CRYIF_DRIVER_IDLE
} CryIf_DriverStatusType;

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


#define CRYPTO_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Crypto_MemMap.h"
/* @details Represents the current phase of crypto interface initialization.*/
CRYPTO_DATA_SECTION CryIf_DriverStatusType CryIf_DriverStatus;
#define CRYPTO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Crypto_MemMap.h"



#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                     GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief    CRYIF driver callback function.
* @details  This routine notifies the CRYIF about the completion of the request with the result of the cryptographic operation.
*
* @param[in]       job           Points to the completed job's information structure. It contains a callbackID to identify which job is finished.
* @param[in]       result        Contains the result of the cryptographic operation.
* @param[in,out]   None
* @param[out]      None.
*
* @return          void
*
* @api
* @req             SWS_CryIf_91013
*/
/* As per RfC 80159 Pointer to Crypto_JobType as an argument in APIs should be mentioned with 'const' qualifier */
CRYPTO_TEXT_SECTION void CryIf_CallbackNotification(const Crypto_JobType *job, Std_ReturnType result)
{
    Crypto_ResultType CsmResult;
    #if( CRYIF_DEV_ERROR_DETECT == STD_ON )
    /* @req SWS_CryIf_00107: module not initialized */
    if (CRYIF_DRIVER_UNINIT == CryIf_DriverStatus)
    {
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_CALLBACK_NOTIFICATION_ID, \
                        CRYIF_E_UNINIT);
    }
    /* @req SWS_CryIf_00108: job pointer invalid */
    else if (NULL_PTR == job)
    {
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_CALLBACK_NOTIFICATION_ID, \
                        CRYIF_E_PARAM_POINTER);
    }
    else
    #endif /* CRYIF_DEV_ERROR_DETECT == STD_ON */
    {
        /*As type of error differ, needs to map value between Crypto_ResultType and Std_ReturnType */
        switch (result)
        {
            case E_OK:
                CsmResult = (Crypto_ResultType)E_OK;
                break;
            case E_BUSY:                 /* 0x02 */
                CsmResult = CRYPTO_E_BUSY;
                break;
            case E_ENTROPY_EXHAUSTED:   /* 0x04 */
                CsmResult = CRYPTO_E_ENTROPY_EXHAUSTED;
                break;
            case E_KEY_READ_FAIL:        /* 0x06 */
                CsmResult = CRYPTO_E_KEY_READ_FAIL;
                break;
            case E_KEY_WRITE_FAIL:       /* 0x07 */
                CsmResult = CRYPTO_E_KEY_READ_FAIL;
                break;    
            case E_KEY_NOT_AVAILABLE:    /* 0x08 */
                CsmResult = CRYPTO_E_KEY_NOT_AVAILABLE;
                break;
            case E_KEY_NOT_VALID:        /* 0x09 */
                CsmResult = CRYPTO_E_KEY_NOT_VALID;
                break;
            case E_KEY_SIZE_MISMATCH:    /* 0x0A */
                CsmResult = CRYPTO_E_KEY_NOT_VALID;
                break; 
            case E_JOB_CANCELED:         /* 0x0C */
                CsmResult = CRYPTO_E_JOB_CANCELED;
                break;
            case E_KEY_EMPTY:         /* 0x0D */
                CsmResult = CRYPTO_E_KEY_EMPTY;
                break;
            default:
                /*Not expected value! */
                CsmResult = (Crypto_ResultType)E_NOT_OK;
                break;
        }
        /* @req SWS_CryIf_00109 */
        Csm_CallbackNotification(job, CsmResult);
    }
}

/**
* @brief    CRYIF driver initialization function.
* @details  This routine CryIf_Init() shall initialize the global variables and data structures of the CRYIF including flags and buffers.
*
* @param[in]       None.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          void
*
* @api
* @req             SWS_CryIf_91000
*/
CRYPTO_TEXT_SECTION void CryIf_Init(void)
{
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CRYIF_DRIVER_IDLE == CryIf_DriverStatus)
    {
        /* @req SWS_CryIf_00014 */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_INIT_ID, CRYIF_E_INIT_FAILED);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00015 */
        CryIf_DriverStatus = CRYIF_DRIVER_IDLE;
    }
}

/**
* @brief    CRYIF driver version information function.
* @details  This routine returns the version information of this module.
*
* @param[in]   versioninfo      Pointer to where to store the version information of this module.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          void
*
* @api
* @req             SWS_CryIf_91001
*/
CRYPTO_TEXT_SECTION void CryIf_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
    #if( CRYIF_DEV_ERROR_DETECT == STD_ON )
    /* @req SWS_CryIf_00016 not implemented as in contradiction with BSW
    if( CRYIF_DRIVER_UNINIT == CryIf_DriverStatus )
    {
        Det_ReportError( CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_GETVERSIONINFO_ID, \
                         CRYPTO_E_UNINIT );
    }
    */
    /* @req SWS_CryIf_00017 */
    if (NULL_PTR == pVersioninfo)
    {
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_GETVERSIONINFO_ID, \
                        CRYIF_E_PARAM_POINTER);
    }
    else
    {
    #endif /* CRYIF_DEV_ERROR_DETECT == STD_ON */

        (pVersioninfo)->vendorID         = (uint16)CRYIF_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint8)CRYIF_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)CRYIF_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)CRYIF_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)CRYIF_SW_PATCH_VERSION;
        #if( CRYIF_DEV_ERROR_DETECT == STD_ON )
    }
        #endif /* CRYIF_DEV_ERROR_DETECT == STD_ON */
}
/**
* @brief    CRYIF driver job processing function.
* @details  This interface dispatches the received jobs to the configured crypto driver object.
*           Sync or Async, depends on the configuration
*
* @param[in]       channelId     Holds the identifier of the crypto channel.
* @param[in,out]   job           Pointer to the configuration of the job. Contains structures with user and primitive relevant information.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK: Request successful
* @retval          E_NOT_OK: Request Failed
* @retval          CRYPTO_E_BUSY: Request Failed, Crypro Driver Object is Busy
* @retval          CRYPTO_E_KEY_NOT_VALID, Request failed, the key is not valid
* @retval          CRYPTO_E_KEY_SIZE_MISMATCH, Request failed, a key element has the wrong size.
* @retval          CRYPTO_E_QUEUE_FULL: Request failed, the queue is full
* @retval          CRYPTO_E_JOB_CANCELED: The service request failed because the synchronous Job has been canceled.
*
* @api
* @req             SWS_CryIf_91003
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_ProcessJob(uint32 channelId, Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    uint32 CDObjectId = 0x0U;
    #if( CRYIF_DEV_ERROR_DETECT == STD_ON )
    if (CRYIF_DRIVER_UNINIT == CryIf_DriverStatus)
    {
        /* @req SWS_CryIf_00027: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_PROCESSJOB_ID, \
                        CRYIF_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if ((channelId > CRYIF_MAXCHANNELS_CONFIGURED)  || (channelId == 0x00))
    {
        /* @req SWS_CryIf_00028: channelId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_PROCESSJOB_ID, \
                        CRYIF_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == job)
    {
        /* @req SWS_CryIf_00029: job pointer invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_PROCESSJOB_ID, \
                        CRYIF_E_PARAM_POINTER);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    #endif
    {
        /*Get object id associated to channel Id*/
        CDObjectId = CryIf_CryptoObjectList_PC[channelId - 1];
        /*Update CryptoKeyId into job structure*/
        job->cryptoKeyId = CryIf_CryptoKeyList_PC[job->jobPrimitiveInfo->cryIfKeyId - 1];
        /* @req SWS_CryIf_00044 */
        Status = Crypto_ProcessJob(CDObjectId, job);
    }
    return Status;
}

/**
* @brief    CRYIF driver job cancelling function.
* @details  This interface dispatches the job cancellation function to the configured crypto driver object.
*           Sync or Async, depends on the configuration
*
* @param[in]       channelId     Holds the identifier of the crypto channel.
* @param[in,out]   job           Pointer to the configuration of the job. Contains structures with job and primitive relevant information.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK: Request successful, job has been removed
* @retval          E_NOT_OK: Request Failed, job couldn't be removed
*
* @api
* @req             SWS_CryIf_91014
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_CancelJob(uint32 channelId, Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    uint32 CDObjectId = 0x0U;
    #if( CRYIF_DEV_ERROR_DETECT == STD_ON )
    if (CRYIF_DRIVER_UNINIT == CryIf_DriverStatus)
    {
        /* @req SWS_CryIf_00129:  module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_CANCELJOB_ID, \
                        CRYIF_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if ((channelId > CRYIF_MAXCHANNELS_CONFIGURED)  || (channelId == 0x00))
    {
        /* @req SWS_CryIf_00130: channelId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_CANCELJOB_ID, \
                        CRYIF_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == job)
    {
        /* @req SWS_CryIf_00131: job pointer invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, CRYIF_CANCELJOB_ID, \
                        CRYIF_E_PARAM_POINTER);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    #endif
    {
        /*Get object id associated to channel Id*/
        CDObjectId = CryIf_CryptoObjectList_PC[channelId - 1];
        /*Update CryptoKeyId into job structure*/
        job->cryptoKeyId = CryIf_CryptoKeyList_PC[job->jobPrimitiveInfo->cryIfKeyId - 1];
        /* @req SWS_CryIf_00132 */
        Status = Crypto_CancelJob(CDObjectId, job);
    }
    return Status;
}

/**
* @brief    CRYIF driver key setting interface.
* @details  This function shall dispatch the set key element function to the configured crypto driver object.
*
* @param[in]       cryIfKeyId    Holds the identifier of the key whose key element shall be set.
* @param[in]       keyElementId  Holds the identifier of the key element which shall be set.
* @param[in]       keyPtr        Holds the pointer to the key data which shall be set as key element.
* @param[in]       keyLength     Contains the length of the key element in bytes.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                       Request successful
* @retval          E_NOT_OK:                   Request Failed
* @retval          CRYPTO_E_BUSY:              Request Failed, Crypto Driver Object is Busy
* @retval          CRYPTO_E_KEY_WRITE_FAIL:    Request failed because write access was denied
* @retval          CRYPTO_E_KEY_NOT_AVAILABLE: Request failed because the key is not available.
* @retval          CRYPTO_E_KEY_SIZE_MISMATCH: Request failed, key element size does not match size of provided data.
*
* @api
* @req             SWS_CryIf_91004
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyElementSet(uint32 cryIfKeyId,      uint32 keyElementId, const uint8 *keyPtr, uint32 keyLength)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00049: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTSET_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00050: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTSET_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if (keyPtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00052: keyPtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTSET_ID, CRYIF_E_PARAM_POINTER);
    }
    else if (keyLength == 0)
    {
        /* @req SWS_CryIf_00053: keyLength invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTSET_ID, CRYIF_E_PARAM_VALUE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00055 */
        Status = Crypto_KeyElementSet(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], \
                                      keyElementId, keyPtr, keyLength);
    }
    return Status;
}

/**
* @brief    CRYIF driver key validation interface.
* @details  This function shall dispatch the set key valid function to the configured crypto driver object.
*
* @param[in]       cryIfKeyId     Holds the identifier of the key which shall be set to valid.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:          Request successful
* @retval          E_NOT_OK:      Request Failed
* @retval          CRYPTO_E_BUSY: Request Failed, Crypto Driver Object is Busy
*
* @api
* @req             SWS_CryIf_91005
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeySetValid(uint32 cryIfKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00056: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_SETVALID_ID, CRYIF_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00057: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_SETVALID_ID, CRYIF_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    #endif
    {
        Status = Crypto_KeySetValid(CryIf_CryptoKeyList_PC[cryIfKeyId - 1]);
    }
    return Status;
}

/**
* @brief    CRYIF driver key element extraction interface.
* @details  This function shall dispatch the get key element function to the configured crypto driver object..
*
* @param[in]       cryIfKeyId      Holds the identifier of the key whose key element shall be returned.
* @param[in]       KeyElementId    Holds the identifier of the key element which shall be returned.
* @param[in,out]   ResultLengthPtr Holds a pointer to a memory location in which the length information is stored.
*                                  On calling this function this parameter shall contain the size of the buffer provided by ResultPtr.
*                                  If the key element is configured to allow partial access, this parameter contains the amount of data
*                                  which should be read from the key element.
*                                  The size may not be equal to the size of the provided buffer anymore.
*                                  When the request has finished, the amount of data that has been stored shall be stored.
* @param[out]      ResultPtr       Holds the pointer of the buffer for the returned key element
*
* @return          Std_ReturnType
* @retval          E_OK:                       Request successful
* @retval          E_NOT_OK:                   Request Failed
* @retval          CRYPTO_E_BUSY:              Request Failed, Crypto Driver Object is Busy
* @retval          CRYPTO_E_KEY_NOT_AVAILABLE: Request failed, the requested key element is not available
* @retval          CRYPTO_E_KEY_READ_FAIL:     Request failed because read access was denied
*
* @api
* @req             SWS_CryIf_91006
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyElementGet(uint32 cryIfKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00059: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTGET_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00060: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTGET_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if (resultPtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00062: resultPtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTGET_ID, CRYIF_E_PARAM_POINTER);
    }
    else if (resultLengthPtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00063: resultLengthPtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTGET_ID, CRYIF_E_PARAM_POINTER);
    }
    else if (*resultLengthPtr == 0)
    {
        /* @req SWS_CryIf_00064: resultLength invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTGET_ID, CRYIF_E_PARAM_VALUE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00065 */
        Status = Crypto_KeyElementGet(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], \
                                      keyElementId, resultPtr, resultLengthPtr);
    }
    return Status;
}

/**
* @brief    CRYIF driver key element copy interface.
* @details  This function shall copy a key elements from one key to a target key.
*
* @param[in]       cryIfKeyId         Holds the identifier of the key whose key element shall be the source element.
* @param[in]       KeyElementId       Holds the identifier of the key element which shall be the source for the copy operation.
* @param[in]       targetCryIfKeyId   Holds the identifier of the key whose key element shall be the destination element.
* @param[in]       targetKeyElementId Holds the identifier of the key element which shall be the destination for the copy operation.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                       Request successful
* @retval          E_NOT_OK:                   Request Failed
* @retval          CRYPTO_E_BUSY:              Request Failed, Crypto Driver Object is Busy
* @retval          CRYPTO_E_KEY_NOT_AVAILABLE: Request failed, the requested key element is not available
* @retval          CRYPTO_E_KEY_EXTRACT_DENIED: Request failed, not allowed to extract key element
* @retval          CRYPTO_E_KEY_READ_FAIL:     Request failed, not allowed to extract key element
* @retval          CRYPTO_E_KEY_WRITE_FAIL:    Request failed, not allowed to write key element.
* @retval          CRYPTO_E_KEY_SIZE_MISMATCH: Request failed, key element sizes are not compatible.
*
* @api
* @req             SWS_CryIf_91015
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyElementCopy(uint32 cryIfKeyId, uint32 keyElementId, uint32 targetCryIfKeyId, uint32 targetKeyElementId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00110: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTCOPY_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00111: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTCOPY_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if ((targetCryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (targetCryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00112: targetCryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_ELEMENTCOPY_ID, CRYIF_E_PARAM_HANDLE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00113 */
        Status = Crypto_KeyElementCopy(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], keyElementId, \
                                       CryIf_CryptoKeyList_PC[targetCryIfKeyId - 1], targetKeyElementId);
        /* @req SWS_CryIf_00114: Note that we do not support the fact to manage several crypto drivers in such use case.*/
        /* @req SWS_CryIf_00115: In the case that CRYPTO_E_KEY_SIZE_MISMATCH is returned, it is specified to raise det error. Not done here!
             => BZ ticket opened on autosar to remove such requirement that is in contradiction with SWS_CryIf_91015 */
    }
    return Status;
}

/**
* @brief    CRYIF driver key copy interface.
* @details  This function shall copy all key elements from the source key to a target key.
*
* @param[in]       cryIfKeyId        Holds the identifier of the key whose key element shall be the source element.
* @param[in]       targetCryIfKeyId  Holds the identifier of the key whose key element shall be the destination element.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                       Request successful
* @retval          E_NOT_OK:                   Request Failed
* @retval          CRYPTO_E_BUSY:              Request Failed, Crypto Driver Object is Busy
* @retval          CRYPTO_E_KEY_NOT_AVAILABLE: Request failed, the requested key element is not available
* @retval          CRYPTO_E_KEY_READ_FAIL:     Request failed, not allowed to extract key element
* @retval          CRYPTO_E_KEY_WRITE_FAIL:    Request failed, not allowed to write key element.
* @retval          CRYPTO_E_KEY_SIZE_MISMATCH: Request failed, key element sizes are not compatible.
*
* @api
* @req             SWS_CryIf_91016
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyCopy(uint32 cryIfKeyId, uint32 targetCryIfKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00116: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_COPY_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00117: targetCryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_COPY_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if ((targetCryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (targetCryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00118: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_COPY_ID, CRYIF_E_PARAM_HANDLE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00119 */
        Status = Crypto_KeyCopy(CryIf_CryptoKeyList_PC[cryIfKeyId - 1],  \
                                CryIf_CryptoKeyList_PC[targetCryIfKeyId - 1]);
        /* @req SWS_CryIf_00120: Note that we do not support the fact to manage several crypto drivers in such use case.*/
        /* @req SWS_CryIf_00121: In the case that CRYPTO_E_KEY_SIZE_MISMATCH is returned, it is specified to raise det error. Not done here!
             => BZ ticket opened on autosar to remove such requirement that is in contradiction with SWS_CryIf_91015 */
    }
    return Status;
}

/**
* @brief    CRYIF driver internal seed state generation interface.
* @details  This function shall dispatch the random seed function to the configured crypto driver object.
*           Sync or Async, depends on the configuration
*
* @param[in]       cryIfKeyId    Holds the identifier of the key for which a new seed shall be generated.
* @param[in]       seedPtr       Holds a pointer to the memory location which contains the data to feed the seed.
* @param[in]       seedLength    Contains the length of the seed in bytes.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
*
* @api
* @req             SWS_CryIf_91007
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_RandomSeed(uint32 cryIfKeyId, const uint8 *seedPtr, uint32 seedLength)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00068: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_RANDOMSEED_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00069: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_RANDOMSEED_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if (seedPtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00070: seedPtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_RANDOMSEED_ID, CRYIF_E_PARAM_POINTER);
    }
    else if (seedLength == 0)
    {
        /* @req SWS_CryIf_00071: seedLength invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_RANDOMSEED_ID, CRYIF_E_PARAM_VALUE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00072 */
        Status = Crypto_RandomSeed(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], \
                                   seedPtr, seedLength);
    }
    return Status;
}

/**
* @brief    CRYIF driver key generation interface.
* @details  This function shall dispatch the key generate function to the configured crypto driver object.
*           Sync or Async, depends on the configuration
*
* @param[in]       cryIfKeyId    Holds the identifier of the key which is to be updated with the generated value.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @req             SWS_CryIf_91008
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyGenerate(uint32 cryIfKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00073: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_GENERATE_ID, CRYIF_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00074: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_GENERATE_ID, CRYIF_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00075 */
        Status = Crypto_KeyGenerate(CryIf_CryptoKeyList_PC[cryIfKeyId - 1]);
    }
    return Status;
}

/**
* @brief    CRYIF driver key derivation interface.
* @details  This function shall dispatch the key derive function to the configured crypto driver object.
*
* @param[in]       cryIfKeyId        Holds the identifier of the key which is used for key derivation.
* @param[in]       targetCryIfKeyId  Holds the identifier of the key which is used to store the derived key.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
*
* @api
* @req             SWS_CryIf_91009
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyDerive(uint32 cryIfKeyId, uint32 targetCryIfKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00076: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_DERIVE_ID, CRYIF_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00077: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_DERIVE_ID, CRYIF_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if ((targetCryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (targetCryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00122: targetCryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_DERIVE_ID, CRYIF_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00081 */
        Status = Crypto_KeyDerive(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], \
                                  CryIf_CryptoKeyList_PC[targetCryIfKeyId - 1]);
    }
    return Status;
}

/**
* @brief    CRYIF driver public key computation function.
* @details  This function shall dispatch the key exchange public value calculation function to the configured crypto driver object.
*
* @param[in]       cryIfKeyId              Holds the identifier of the key which shall be used for the key exchange protocol.
* @param[in,out]   publicValueLengthPtr    Holds a pointer to the memory location in which the public value length information is stored.
*                                          On calling this function, this parameter shall contain the size of the buffer provided by publicValuePtr.
*                                          When the request has finished, the actual length of the returned value shall be stored.
* @param[out]      publicValuePtr          Contains the pointer to the data where the public value shall be stored.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @req             SWS_CryIf_91010
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyExchangeCalcPubVal(uint32 cryIfKeyId, uint8 *publicValuePtr, uint32 *publicValueLengthPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00082: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCPUB_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00083: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCPUB_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if (publicValuePtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00084: publicValuePtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCPUB_ID, CRYIF_E_PARAM_POINTER);
    }
    else if (publicValueLengthPtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00085: publicValueLengthPtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCPUB_ID, CRYIF_E_PARAM_POINTER);
    }
    else if (*publicValueLengthPtr == 0)
    {
        /* @req SWS_CryIf_00086: resultLength invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCPUB_ID, CRYIF_E_PARAM_VALUE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00087 */
        Status = Crypto_KeyExchangeCalcPubVal(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], \
                                              publicValuePtr, publicValueLengthPtr);
    }
    return Status;
}

/**
* @brief    CRYIF driver secret key computation function.
* @details  This function shall dispatch the key exchange common shared secret calculation function to the configured crypto driver object.
*
* @param[in]       cryIfKeyId               Holds the identifier of the key which shall be used for the key exchange protocol.
* @param[in]       partnerPublicValuePtr     Holds the pointer to the memory location which contains the partner's public value.
* @param[in]       partnerPublicValueLength  Contains the length of the partner's public value in bytes.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @req             SWS_CryIf_91011
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_KeyExchangeCalcSecret(uint32 cryIfKeyId, const uint8 *partnerPublicValuePtr, uint32 partnerPublicValueLength)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00090: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCSECRET_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00091: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCSECRET_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if (partnerPublicValuePtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00092: partnerPublicValuePtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCSECRET_ID, CRYIF_E_PARAM_POINTER);
    }
    else if (partnerPublicValueLength == 0)
    {
        /* @req SWS_CryIf_00094: partnerPublicValuePtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_EXCHANGECALCSECRET_ID, CRYIF_E_PARAM_VALUE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00095 */
        Status = Crypto_KeyExchangeCalcSecret(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], \
                                              partnerPublicValuePtr, partnerPublicValueLength);
    }
    return Status;
}

/**
* @brief    CRYIF driver certificate parsing function.
* @details  Parses the certificate data stored in the key element CRYPTO_KE_CERT_DATA and fills
*           the key elements CRYPTO_KE_CERT_SIGNEDDATA, CRYPTO_KE_CERT_PARSEDPUBLICKEY and CRYPTO_KE_CERT_SIGNATURE.
*
* @param[in]       cryIfKeyId              Holds the identifier of the key which shall be parsed.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @req             SWS_CryIf_91012
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_CertificateParse(uint32 cryIfKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00098: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_CERTIFICATEPARSE_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00099: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_CERTIFICATEPARSE_ID, CRYIF_E_PARAM_HANDLE);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00104 */
        Status = Crypto_CertificateParse(CryIf_CryptoKeyList_PC[cryIfKeyId - 1]);
    }
    return Status;
}

/**
* @brief    CRYIF driver certificate verification function.
* @details  Verifies the certificate stored in the key referenced by verifyCryIfKeyId with the certificate stored in the key referenced by cryIfKeyId.
*
* @param[in]       cryIfKeyId              Holds the identifier of the key which shall be used to validate the certificate.
* @param[in]       verifycryIfKeyId        Holds the identifier of the key contain.
* @param[in,out]   None.
* @param[out]      verifyPtr               Holds a pointer to the memory location which will contain the result of the certificate verification.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
*
* @api
* @req             SWS_CryIf_91017
*/
CRYPTO_TEXT_SECTION Std_ReturnType CryIf_CertificateVerify(uint32 cryIfKeyId, uint32 verifycryIfKeyId, Crypto_VerifyResultType *verifyPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYIF_DEV_ERROR_DETECT == STD_ON)
    if (CryIf_DriverStatus == CRYIF_DRIVER_UNINIT)
    {
        /* @req SWS_CryIf_00123: module not initialized */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_CERTIFICATEVERIFY_ID, CRYIF_E_UNINIT);
    }
    else if ((cryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (cryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00124: cryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_CERTIFICATEVERIFY_ID, CRYIF_E_PARAM_HANDLE);
    }
    else if ((verifycryIfKeyId > CRYIF_MAXKEY_CONFIGURED) || (verifycryIfKeyId == (0x00)))
    {
        /* @req SWS_CryIf_00125: verifycryIfKeyId out of range */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_CERTIFICATEVERIFY_ID, CRYIF_E_PARAM_HANDLE);
    }
    /* @req SWS_CryIf_00126: not checked as we do not support several crypto driver */
    else if (verifyPtr == NULL_PTR)
    {
        /* @req SWS_CryIf_00127: partnerPublicValuePtr invalid */
        Det_ReportError(CRYIF_MODULE_ID, CRYIF_INSTANCE_ID, \
                        CRYIF_KEY_CERTIFICATEVERIFY_ID, CRYIF_E_PARAM_POINTER);
    }
    else
    #endif
    {
        /* @req SWS_CryIf_00128 */
        Status = Crypto_CertificateVerify(CryIf_CryptoKeyList_PC[cryIfKeyId - 1], \
                                          CryIf_CryptoKeyList_PC[verifycryIfKeyId - 1], verifyPtr);
    }
    return Status;
}

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
