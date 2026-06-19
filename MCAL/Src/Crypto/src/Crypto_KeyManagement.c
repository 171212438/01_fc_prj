/**
 *   @file    Crypto_KeyManagement.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - High level part of Crypto driver.
 *   @details This file contains code of the functions defined by AutoSAR.
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

#ifdef __cplusplus
extern "C" {
#endif
/* [SWS_Crypto_00005] */
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Crypto.h"
#include "Crypto_KeyManagement.h"
#include "CryIf.h"
#include "Crypto_LLD.h"
#include "Crypto_Version.h"
#include "SchM_Crypto.h"

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"               /* include DET API */
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

/**
* @brief    CRYPTO driver key element search interface.
* @details  This interface returns the index of the searched KeyElement.
*
* @param[in]       cryptoKeyId       Holds the identifier of the key whose key element shall be searched.
* @param[in]       keyElementId      Holds the identifier of the key element which shall be searched.
* @param[in,out]   None.
*
* @return          uint32 Index of the searched KeyElement
* @retval          [0..Number of elements for the key type[ Index of the element in the key list
* @retval          CRYPTO_KEYELEMENT_NOT_FOUND if the element is not in the list.
*
* @api
*
*/
CRYPTO_TEXT_SECTION uint32 Crypto_LLD_FindKeyElement(uint32 cryptoKeyId, uint32 keyElementId, uint32 *pElemIdxInType)
{
    uint32 u32KeyElemIdxInList;
    uint32 u32Index = CRYPTO_KEYELEMENT_NOT_FOUND;
    uint32 counter;

    /* Find keyElementId */
    /* Parse list of keyelement of the keys.*/
    #if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
    if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0U))
    {
    #endif
        for (counter = 0UL; counter < Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.NumberCryptoKeyElement; counter++)
        {
            u32KeyElemIdxInList = Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[counter].CryptoKeyElement;

            if (Crypto_CryptoKeyElementList_PC[u32KeyElemIdxInList].CryptoKeyElementId == keyElementId)
            {
                u32Index = u32KeyElemIdxInList;
                break;
            }
        }

        if (pElemIdxInType != NULL_PTR)
        {
            *pElemIdxInType = counter;
        }
        #if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
    }
        #endif

    return u32Index;
}

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief    CRYPTO driver key setting interface.
* @details  This interface sets the given key element bytes to the key identified by cryptoKeyId.
*
* @param[in]       cryptoKeyId   Holds the identifier of the key whose key element shall be set.
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
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementSet(uint32 cryptoKeyId, uint32 keyElementId, const uint8 *keyPtr, uint32 keyLength)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    const Crypto_KeyElemDescType *KeyElementPtr = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *KeyTypePtr = NULL_PTR;
    /*     const Crypto_KeyElemDescType* KeyElementCurvePtr = NULL_PTR; */
    /*     uint8* KeyElementProofPtr = NULL_PTR; */
    uint32 KeyElementIndex;
    uint32 KeyTypeIndex;
    uint32 KeyElementLength;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

    uint32 u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10();
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00075] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTSET_ID, CRYPTO_E_UNINIT);
    }
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00076] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTSET_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (keyPtr == NULL_PTR)
    {
        /* [SWS_Crypto_00078] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTSET_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (keyLength == 0UL)
    {
        /* [SWS_Crypto_00079] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTSET_ID, CRYPTO_E_PARAM_VALUE);
    }
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
#endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00162] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTSET_ID, CRYPTO_E_PARAM_HANDLE);
    }
#else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
#if (CRYPTO_KEY_CONFIGURED == STD_OFF)
        Status = (Std_ReturnType)CRYPTO_E_KEY_NOT_AVAILABLE;
#else /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        /* Find keyElementId */
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0UL))
        {
#endif
            KeyElementIndex = Crypto_LLD_FindKeyElement(cryptoKeyId,  keyElementId,  &KeyTypeIndex);
            if (KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
            {
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
                /* [SWS_Crypto_00077] */
                (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                                      CRYPTO_KEY_ELEMENTSET_ID, CRYPTO_E_PARAM_HANDLE);
#endif
            }
            else
            {
                KeyElementPtr = &Crypto_CryptoKeyElementList_PC[KeyElementIndex];
                KeyTypePtr = &Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[KeyTypeIndex];
                /*Check size*/
                if ((keyLength < KeyElementPtr->CryptoKeyElementSize)
                    && (KeyElementPtr->CryptoKeyElemAllowPartialAccess == (boolean)FALSE))
                {
                    /* [SWS_Crypto_00146] */
                    Status = (Std_ReturnType)CRYPTO_E_KEY_SIZE_MISMATCH;
                }
                else
                {
                    /* Use the size of the key element since it is lower or equal to the key pointer */
                    /* Size of the key element allows to know the key size */
                    if (keyLength > KeyElementPtr->CryptoKeyElementSize)
                    {
                        KeyElementLength = KeyElementPtr->CryptoKeyElementSize;
                    }
                    else
                    {
                        KeyElementLength = keyLength;
                    }
                    if (KeyElementPtr->CryptoKeyElementWriteAccess > CRYPTO_WA_ENCRYPTED)
                    {
                        Status = (Std_ReturnType)CRYPTO_E_KEY_WRITE_FAIL;
                    }
                    else
                    {
                        switch (KeyElementPtr->CryptoKeyElementId)
                        {
                            case CRYPTO_KE_CIPHER_RSA_KEY_E:
                            case CRYPTO_KE_CIPHER_RSA_KEY_N:
                            /* Specific to Cipher AES */
                            case CRYPTO_KE_CIPHER_IV:
                            case CRYPTO_KE_CIPHER_2NDKEY:
                            /* To load key in protected format */
                            case CRYPTO_KE_CIPHER_KEY:
                            case CRYPTO_KE_SIGNATURE_CURVETYPE:
                            case CRYPTO_KE_CIPHER_SM2_USERID:
                                Crypto_LLD_memcpy_byte(KeyTypePtr->CryptoKeyElementDataPtr, keyPtr, KeyElementLength);
                                Status = (Std_ReturnType)E_OK;
                                break;
                            /* default can happend only if a non supported key element has been added to "preconfiguration" */
                            default:
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
                                /* [SWS_Crypto_00077] */
                                (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                                                      CRYPTO_KEY_ELEMENTSET_ID, CRYPTO_E_PARAM_HANDLE);
#endif
                                Status = (Std_ReturnType)E_NOT_OK;
                                break;
                        }
                    }
                }
            }
            #if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        }
            #endif
#endif /* CRYPTO_KEY_CONFIGURED == STD_OFF */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
#endif
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    if (Status == (Std_ReturnType)E_OK)
    {
        /*Set CryptoKey Id to InValid as update of key has been performed.*/
        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_KeyStatus[cryptoKeyId - 1U] = CRYPTO_KEY_NOT_VALID;
    }
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */

    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10();
    return Status;
}


/**
* @brief    CRYPTO driver key validation interface.
* @details  This interface sets the key state of the key identified by cryptoKeyId to valid.
*
* @param[in]       cryptoKeyId   Holds the identifier of the key which shall be set to valid.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:          Request successful
* @retval          E_NOT_OK:      Request Failed
*
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeySetValid(uint32 cryptoKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    uint32         u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    Status = Crypto_Key_LLD_KeyStore(cryptoKeyId);

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11();
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00196] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_VALIDSET_ID, CRYPTO_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00197] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_VALIDSET_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#endif
    else
    {
#endif
#if ((CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON))
        /* [SWS_Crypto_00197] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_VALIDSET_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#else /* (CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON) */
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
        /*Set CryptoKey Id to Valid*/
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0UL))
        {
#endif
            if (E_OK == Status)
            {
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_KeyStatus[cryptoKeyId - 1U] = CRYPTO_KEY_VALID;
            }
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        }
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
#endif
#else /* CRYPTO_KEY_CONFIGURED == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
#endif
#endif /* (CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11();
    return Status;
}

/**
* @brief    CRYPTO driver key invalidation interface.
* @details  This interface sets the key state of the key identified by cryptoKeyId to invalid.
*
* @param[in]       cryptoKeyId   Holds the identifier of the key which shall be set to invalid.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:          Request successful
* @retval          E_NOT_OK:      Request Failed
*
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeySetInvalid (uint32 cryptoKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    uint32         u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    Status = Crypto_Key_LLD_KeyRevoke(cryptoKeyId);

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_63();
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00196] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_INVALIDSET_ID, CRYPTO_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00197] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_INVALIDSET_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#endif
    else
    {
#endif
#if ((CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON))
        /* [SWS_Crypto_00197] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_INVALIDSET_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#else /* (CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON) */
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
        /*Set CryptoKey Id to Valid*/
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0UL))
        {
#endif
            if (E_OK == Status)
            {
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_KeyStatus[cryptoKeyId - 1U] = CRYPTO_KEY_NOT_VALID;
            }
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        }
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
#endif
#else /* CRYPTO_KEY_CONFIGURED == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
#endif
#endif /* (CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_63();
    return Status;
}

/**
* @brief    CRYPTO driver get key status interface.
* @details  This interface sets the key state of the key identified by cryptoKeyId to invalid.
*
* @param[in]       cryptoKeyId   Holds the identifier of the key which shall be set to invalid.
* @param[in,out]   keyStatusPtr  Contains the pointer to the data where the status of the key shall be stored
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:          Request successful
* @retval          E_NOT_OK:      Request Failed
*
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyGetStatus(uint32 cryptoKeyId, Crypto_KeyStatusType* keyStatusPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    uint32         u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_60();
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00196] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_GETSTATUS_ID, CRYPTO_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00197] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_GETSTATUS_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (keyStatusPtr == NULL_PTR)
    {
        /* [SWS_Crypto_00234] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_GETSTATUS_ID, CRYPTO_E_PARAM_POINTER);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#endif
    else
    {
#endif
#if ((CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON))
        /* [SWS_Crypto_00197] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_GETSTATUS_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
#else /* (CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON) */
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
        /*Set CryptoKey Id to Valid*/
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0UL))
        {
#endif
            /*PRQA S 2995 ++
            2995: The result of this logical operation is always 'true'.
            REASON:Status can be E_OK or E_NOT_OK because of parameter checking or fucntion call.*/
            if (E_OK == Status)
            {
            /*PRQA S 2995 -- */
                *keyStatusPtr = (Crypto_KeyStatusType)(Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_KeyStatus[cryptoKeyId - 1U]);
            }
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        }
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
#endif
#else /* CRYPTO_KEY_CONFIGURED == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
#endif
#endif /* (CRYPTO_KEY_CONFIGURED == STD_OFF) && (CRYPTO_DEV_ERROR_DETECT == STD_ON) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_60();
    return Status;
}

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_KeyElementEasyGet(uint32 cryptoKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    const Crypto_KeyElemDescType *KeyElementPtr = NULL_PTR;
    const Crypto_KeyTypeDescriptionType *KeyTypePtr = NULL_PTR;
    uint32 KeyElementIndex;
    uint32 KeyTypeIndex;
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    /* Find keyElementId */
    KeyElementIndex = Crypto_LLD_FindKeyElement(cryptoKeyId,  keyElementId, &KeyTypeIndex);
    if (KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
    {
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_Crypto_00087] */
        (void)Det_ReportError((uint16) CRYPTO_MODULE_ID, (uint8) CRYPTO_INSTANCE_ID, \
                              (uint8) CRYPTO_KEY_ELEMENTGET_ID, (uint8) CRYPTO_E_PARAM_HANDLE);
        #endif
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        KeyElementPtr = &Crypto_CryptoKeyElementList_PC[KeyElementIndex];
        KeyTypePtr = &Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription.CryptoKeyElementList[KeyTypeIndex];

        /* [SWS_Crypto_00139] */
        if (KeyElementPtr->CryptoKeyElementReadAccess > CRYPTO_RA_ENCRYPTED)
        {
            Status = (Std_ReturnType)CRYPTO_E_KEY_READ_FAIL;
        }
        else
        {
            if(CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX == KeyElementPtr->u32CryptoStoreType)
            {
                switch (KeyElementPtr->CryptoKeyElementId)
                {
                    /* Specific to Cipher AES */
                    /* We just store but no copy! We consider that such data are defined by CSM and kept alive until Crypto stack is alive. */
                    case CRYPTO_KE_CIPHER_RSA_KEY_E:
                    case CRYPTO_KE_CIPHER_RSA_KEY_N:
                    /* Specific to Cipher AES */
                    case CRYPTO_KE_CIPHER_IV:
                    case CRYPTO_KE_CIPHER_2NDKEY:
                    /* To load key in protected format */
                    case CRYPTO_KE_CIPHER_KEY:
                    case CRYPTO_KE_SIGNATURE_CURVETYPE:
                    case CRYPTO_KE_CIPHER_SM2_USERID:
                        /* Check Size */
                        if (*resultLengthPtr < KeyElementPtr->CryptoKeyElementSize)
                        {
                            /* [SWS_Crypto_00195] */
                            Status = (Std_ReturnType)E_NOT_OK;
                        }
                        else
                        {
                            Crypto_LLD_memcpy_byte(resultPtr, KeyTypePtr->CryptoKeyElementDataPtr, KeyElementPtr->CryptoKeyElementSize);
                            *resultLengthPtr = KeyElementPtr->CryptoKeyElementSize;
                            Status = (Std_ReturnType)E_OK;
                        }
                        break;

                    /* default can happend only if a non supported key element has been added to "preconfiguration" */
                    default:
                        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
                        /* [SWS_Crypto_00077] */
                        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                                              CRYPTO_KEY_ELEMENTGET_ID, CRYPTO_E_PARAM_HANDLE);
                        #endif
                        Status = (Std_ReturnType)E_NOT_OK;
                        break;
                }/*end of switch*/
            }
            else
            {
                Status = (Std_ReturnType)E_OK;
            }
        }
    }
    return Status;
}
/**
* @brief    CRYPTO driver key element extraction interface.
* @details  This interface shall be used to get a key element of the key identified by the cryptoKeyId
*           and store the key element in the memory location pointed by the result pointer.
*
* @param[in]       cryptoKeyId     Holds the identifier of the key whose key element shall be returned.
* @param[in]       keyElementId    Holds the identifier of the key element which shall be returned.
* @param[in,out]   resultLengthPtr Holds a pointer to a memory location in which the length information is stored.
*                                  On calling this function this parameter shall contain the size of the buffer provided by resultPtr.
*                                  If the key element is configured to allow partial access, this parameter contains the amount of data
*                                  which should be read from the key element.
*                                  The size may not be equal to the size of the provided buffer anymore.
*                                  When the request has finished, the amount of data that has been stored shall be stored.
* @param[out]      resultPtr       Holds the pointer of the buffer for the returned key element
*
* @return          Std_ReturnType
* @retval          E_OK:                       Request successful
* @retval          E_NOT_OK:                   Request Failed
* @retval          CRYPTO_E_BUSY:              Request Failed, Crypto Driver Object is Busy
* @retval          CRYPTO_E_KEY_NOT_AVAILABLE: Request failed, the requested key element is not available
* @retval          CRYPTO_E_KEY_READ_FAIL:     Request failed because read access was denied
* @retval          CRYPTO_E_SMALL_BUFFER:      The provided buffer is too small to store the result
*
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementGet(uint32 cryptoKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    Status = Crypto_LLD_ExportKey(cryptoKeyId, keyElementId, resultPtr, resultLengthPtr);

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00085] */

        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTGET_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00086] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTGET_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (resultPtr == NULL_PTR)
    {
        /* [SWS_Crypto_00088] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTGET_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (resultLengthPtr == NULL_PTR)
    {
        /* [SWS_Crypto_00089] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTGET_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (*resultLengthPtr == (uint32)0x0UL)
    {
        /* [SWS_Crypto_00090] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTGET_ID, CRYPTO_E_PARAM_VALUE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON) */
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00086] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTGET_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        #if (CRYPTO_KEY_CONFIGURED == STD_OFF)
        Status = (Std_ReturnType)CRYPTO_E_KEY_NOT_AVAILABLE;
        #else /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0UL))
        {
        #endif
            /*All checks passed successfully.*/
            /*If Crypto_LLD_ExportKey returns E_OK, it means the ktarget key is nvm key */
            if(E_OK == Status)
            {
                Status = Crypto_KeyElementEasyGet(cryptoKeyId, keyElementId, resultPtr, resultLengthPtr);
            }
            #if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        }
            #endif
        #endif /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12();
    return Status;
}

/**
* @brief    CRYPTO driver key element copy interface.
* @details  This interface copies a key element to another key element in the same crypto driver.
*
* @param[in]       cryptoKeyId        Holds the identifier of the key whose key element shall be the source element.
* @param[in]       keyElementId       Holds the identifier of the key element which shall be the source for the copy operation.
* @param[in]       targetCrypto_KeyId  Holds the identifier of the key whose key element shall be the destination element.
* @param[in]       targetKeyElementId Holds the identifier of the key element which shall be the destination for the copy operation.
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
* @note            Not supported by driver/HSM.
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementCopy(uint32 cryptoKeyId, uint32 keyElementId, uint32 targetCrypto_KeyId, uint32 targetKeyElementId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    /*     P2CONST (Crypto_KeyElemDescType, AUTOMATIC, CRYPTO_APPL_CONST) KeyOriginElementPtr = NULL_PTR;
        P2CONST (Crypto_KeyElemDescType, AUTOMATIC, CRYPTO_APPL_CONST) KeyTargetElementPtr = NULL_PTR;  */
    uint32 KeyElementIndex;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_13();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00149] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPY_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00150] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPY_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if ((targetCrypto_KeyId > CRYPTO_MAXKEY_CONFIGURED) || (targetCrypto_KeyId == 0UL))
    {
        /* [SWS_Crypto_00151] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPY_ID, CRYPTO_E_PARAM_HANDLE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00149] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPY_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        #if (CRYPTO_KEY_CONFIGURED == STD_OFF)
        Status = (Std_ReturnType)CRYPTO_E_KEY_NOT_AVAILABLE;
        #else /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        /*All checks passed successfully.*/
        /* Find keyElementId */
        KeyElementIndex = Crypto_LLD_FindKeyElement(cryptoKeyId, keyElementId, NULL_PTR);
        if (KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
        {
           /* [SWS_Crypto_00152] */
            #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
            (void)Det_ReportError((uint16) CRYPTO_MODULE_ID, (uint8) CRYPTO_INSTANCE_ID, \
                                  (uint8) CRYPTO_KEY_ELEMENTCOPY_ID, (uint8) CRYPTO_E_PARAM_HANDLE);
            #endif
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /*             KeyOriginElementPtr = &Crypto_CryptoKeyElementList_PC[KeyElementIndex]; */

            /* Find targetKeyElementId */
            KeyElementIndex = Crypto_LLD_FindKeyElement(targetCrypto_KeyId, targetKeyElementId, NULL_PTR);
            if (KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
            {
                #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
                /* [SWS_Crypto_00153]  */
                (void)Det_ReportError((uint16) CRYPTO_MODULE_ID, (uint8) CRYPTO_INSTANCE_ID, \
                                      (uint8) CRYPTO_KEY_ELEMENTCOPY_ID, (uint8) CRYPTO_E_PARAM_HANDLE);
                #endif
                Status = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                /*                  KeyTargetElementPtr = &Crypto_CryptoKeyElementList_PC[KeyElementIndex]; */
                Status = (Std_ReturnType)E_NOT_OK;
            }
        }
        #endif /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_13();
    return (Std_ReturnType) Status;
}

/**
* @brief    CRYPTO driver key element copy interface.
* @details  This interface copies a key element to another key element in the same crypto driver, and allows to copy just a part of the source key element into the destination
*
* @param[in]       cryptoKeyId        Holds the identifier of the key whose key element shall be the source element.
* @param[in]       keyElementId       Holds the identifier of the key element which shall be the source for the copy operation.
* @param[in]       keyElementSourceOffset     This is the offset of the of the source key element indicating the start index of the copy operation.
* @param[in]       keyElementTargetOffset     This is the offset of the of the target key element indicating the start index of the copy operation.
* @param[in]       keyElementCopyLength       Specifies the number of bytes that shall be copied.
* @param[in]       targetCrypto_KeyId  Holds the identifier of the key whose key element shall be the destination element.
* @param[in]       targetKeyElementId Holds the identifier of the key element which shall be the destination for the copy operation.
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
* @retval          CRYPTO_E_KEY_EMPTY:         Request Request failed because of uninitialized source key element.
*
* @note            Not supported by driver/HSM.
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementCopyPartial(uint32 cryptoKeyId, uint32 keyElementId, uint32 keyElementSourceOffset,
                                                                uint32 keyElementTargetOffset, uint32 keyElementCopyLength,uint32 targetCrypto_KeyId, uint32 targetKeyElementId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    /*     P2CONST (Crypto_KeyElemDescType, AUTOMATIC, CRYPTO_APPL_CONST) KeyOriginElementPtr = NULL_PTR;
        P2CONST (Crypto_KeyElemDescType, AUTOMATIC, CRYPTO_APPL_CONST) KeyTargetElementPtr = NULL_PTR;  */
    uint32 KeyElementIndex;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_59();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00149] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPYPARTIAL_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00150] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPYPARTIAL_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if ((targetCrypto_KeyId > CRYPTO_MAXKEY_CONFIGURED) || (targetCrypto_KeyId == 0UL))
    {
        /* [SWS_Crypto_00151] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPYPARTIAL_ID, CRYPTO_E_PARAM_HANDLE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00149] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTCOPYPARTIAL_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        #if (CRYPTO_KEY_CONFIGURED == STD_OFF)
        Status = (Std_ReturnType)CRYPTO_E_KEY_NOT_AVAILABLE;
        #else /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        /*All checks passed successfully.*/
        /* Find keyElementId */
        KeyElementIndex = Crypto_LLD_FindKeyElement(cryptoKeyId, keyElementId, NULL_PTR);
        if (KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
        {
           /* [SWS_Crypto_00152] */
            #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
            (void)Det_ReportError((uint16) CRYPTO_MODULE_ID, (uint8) CRYPTO_INSTANCE_ID, \
                                  (uint8) CRYPTO_KEY_ELEMENTCOPYPARTIAL_ID, (uint8) CRYPTO_E_PARAM_HANDLE);
            #endif
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /*             KeyOriginElementPtr = &Crypto_CryptoKeyElementList_PC[KeyElementIndex]; */

            /* Find targetKeyElementId */
            KeyElementIndex = Crypto_LLD_FindKeyElement(targetCrypto_KeyId, targetKeyElementId, NULL_PTR);
            if (KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
            {
                #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
               /* [SWS_Crypto_00153] */
                (void)Det_ReportError((uint16) CRYPTO_MODULE_ID, (uint8) CRYPTO_INSTANCE_ID, \
                                      (uint8) CRYPTO_KEY_ELEMENTCOPYPARTIAL_ID, (uint8) CRYPTO_E_PARAM_HANDLE);
                #endif
                Status = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                Status = (Std_ReturnType)E_NOT_OK;
            }
        }
        #endif /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_59();

    (void)keyElementSourceOffset;
    (void)keyElementTargetOffset;
    (void)keyElementCopyLength;
    return (Std_ReturnType) Status;
}

/**
* @brief    CRYPTO driver key copy interface.
* @details  This interface copies a key with all its elements to another key in the same crypto driver.
*
* @param[in]       cryptoKeyId        Holds the identifier of the key whose key element shall be the source element.
* @param[in]       targetCrypto_KeyId  Holds the identifier of the key whose key element shall be the destination element.
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
*
*/
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyCopy(uint32 cryptoKeyId, uint32 targetCrypto_KeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_14();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00156] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_COPY_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00157] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_COPY_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if ((targetCrypto_KeyId > CRYPTO_MAXKEY_CONFIGURED) || (targetCrypto_KeyId == 0UL))
    {
        /* [SWS_Crypto_00158] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_COPY_ID, CRYPTO_E_PARAM_HANDLE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00157] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_COPY_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        /*All checks passed successfully.*/
        Status = (Std_ReturnType)E_NOT_OK;

        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_14();
    return (Std_ReturnType) Status;
}

/**
* @brief    CRYPTO driver key element ids extraction interface.
* @details  This interface is used to retrieve information which key elements are available in a given key.
*
* @param[in]       cryptoKeyId             Holds the identifier of the key whose available element ids shall be exported.
* @param[in]       keyElementIdsLengthPtr  Holds a pointer to the memory location in which the number of key elements in the given key is stored.
*                                          On calling this function, this parameter shall contain the size of the buffer provided by keyElementIdsPtr.
*                                          When the request has finished, the actual number of key elements shall be stored.
* @param[in,out]   None.
* @param[out]      keyElementIdsPtr        Contains the pointer to the array where the ids of the key elements shall be stored.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyElementIdsGet(uint32 cryptoKeyId, uint32 *keyElementIdsPtr, uint32 *keyElementIdsLengthPtr) /* PRQA S 1503 */
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    Crypto_KeyDescriptionType   KeyType;
    uint32                      NbKeyElements;
    uint32                      counter;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_15();
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00161] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTIDSGET_ID, CRYPTO_E_UNINIT);
    }
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00162] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTIDSGET_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (keyElementIdsPtr == NULL_PTR)
    {
        /* [SWS_Crypto_xxxxx] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTIDSGET_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (keyElementIdsLengthPtr == NULL_PTR)
    {
        /* [SWS_Crypto_xxxxx] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTIDSGET_ID, CRYPTO_E_PARAM_POINTER);
    }
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
#endif  /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00162] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_ELEMENTIDSGET_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        #if (CRYPTO_KEY_CONFIGURED == STD_ON)
        /*All checks passed successfully.*/
        /* Retrieve the number of key elements allocated in the buffer and check if it fits with the number of elements inside the crypto key */
        NbKeyElements = *keyElementIdsLengthPtr;
        #if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        if ((cryptoKeyId <= CRYPTO_MAXKEY_CONFIGURED) && (cryptoKeyId != 0UL))
        {
        #endif
            KeyType = Crypto_CryptoKeyList_PC[cryptoKeyId - 1U].CryptoKeyDescription;
            if (NbKeyElements < KeyType.NumberCryptoKeyElement)
            {
                /* [SWS_Crypto_00195] */
                Status = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                for (counter = 0UL; counter < KeyType.NumberCryptoKeyElement; counter++)
                {
                    keyElementIdsPtr[counter] = Crypto_CryptoKeyElementList_PC[KeyType.CryptoKeyElementList[counter].CryptoKeyElement].CryptoKeyElementId;
                }
                *keyElementIdsLengthPtr = counter;
                Status = (Std_ReturnType)E_OK;
            }
#if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
        }
#endif
#else /* CRYPTO_KEY_CONFIGURED == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
#endif
#endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */

    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_15();
    return (Std_ReturnType)Status;
}

/**
* @brief    CRYPTO driver internal seed state generation interface.
* @details  This function generates the internal seed state using the provided entropy source.
*           Furthermore, this function can be used to update the seed state with new entropy.
*
* @param[in]       cryptoKeyId    Holds the identifier of the key for which a new seed shall be generated.
* @param[in]       entropyPtr     Holds a pointer to the memory location which contains the data to feed the entropy.
* @param[in]       entropyLength  Contains the length of the entropy in bytes.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
*
* @api
* @note            Not supported by driver/HSM.
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_RandomSeed(uint32 cryptoKeyId, const uint8 *SeedPtr, uint32 SeedLength)
{
    /* HSM service doesn't use an external seed but use internal one to generate keys */
    /* Crypto_RandomSeed is not used an retuns always E_NOT_OK. This is an implementation choise */

    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_16();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00128] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_RANDOMSEED_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00129] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_RANDOMSEED_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (SeedPtr == NULL_PTR)
    {
        /* [SWS_Crypto_00130] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_RANDOMSEED_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (SeedLength == 0UL)
    {
        /* [SWS_Crypto_00131] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_RANDOMSEED_ID, CRYPTO_E_PARAM_VALUE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00129] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_RANDOMSEED_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        /*All checks passed successfully.*/
        /* This feature is not supported by the current version of the HSM */
        Status = (Std_ReturnType)E_NOT_OK;
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_16();
    return (Std_ReturnType)Status;
}

/**
* @brief    CRYPTO driver key generation interface.
* @details  This function generates new key material store it in the key identified by cryptoKeyId.
*
* @param[in]       cryptoKeyId    Holds the identifier of the key which is to be updated with the generated value.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @note            Not supported by driver/HSM.
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyGenerate(uint32 cryptoKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    uint32 KeyElementIndex;
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_17();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00094] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_GENERATE_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00095] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_GENERATE_ID, CRYPTO_E_PARAM_HANDLE);
    }
    #endif
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00095] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_GENERATE_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */

        #if (CRYPTO_KEY_CONFIGURED == STD_OFF)
        /* This line code is just there to remove MISRA-2004 Rule14.10. */
        Status = (Std_ReturnType)E_NOT_OK;
        #else /* CRYPTO_KEY_CONFIGURED == STD_OFF */
        /* Find keyElementId : in our case keyElement to be found is always CRYPTO_KE_KEYGENERATE_KEY */
        KeyElementIndex = Crypto_LLD_FindKeyElement(cryptoKeyId, CRYPTO_KE_KEYGENERATE_KEY, NULL_PTR);
        if (KeyElementIndex == CRYPTO_KEYELEMENT_NOT_FOUND)
        {
            /* No det error required. */
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
        #endif /* CRYPTO_KEY_CONFIGURED == STD_OFF */

        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_17();
    return (Std_ReturnType)Status;
}

/**
* @brief    CRYPTO driver key derivation interface.
* @details  This function derives a new key by using the key elements in the given key identified by the cryptoKeyId.
*           The given key contains the key elements for the password, salt.
*           The derived key is stored in the key element with the id 1 of the key identified by targetCrypto_KeyId.
*           The number of iterations is given in the key element CRYPTO_KE_KEYDERIVATION_ITERATIONS.
*
* @param[in]       cryptoKeyId        Holds the identifier of the key which is used for key derivation.
* @param[in]       targetCrypto_KeyId  Holds the identifier of the key which is used to store the derived key.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @note            Not supported by driver/HSM.
*
*/
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyDerive(uint32 cryptoKeyId, uint32 targetCrypto_KeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_18();
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00097] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_DERIVE_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00098] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_DERIVE_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if ((targetCrypto_KeyId > CRYPTO_MAXKEY_CONFIGURED) || (targetCrypto_KeyId == 0UL))
    {
        /* [SWS_Crypto_00180] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_DERIVE_ID, CRYPTO_E_PARAM_HANDLE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00098] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_DERIVE_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        /* This feature is not supported by the current version of the HSM */
        Status = (Std_ReturnType)E_NOT_OK;
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_18();
    return (Std_ReturnType)Status;
}

/**
* @brief    CRYPTO driver public key computation function.
* @details  This function calculates the public value for the key exchange and stores the public key in the memory location
*           pointed by the public value pointer.
*
* @param[in]       cryptoKeyId             Holds the identifier of the key which shall be used for the key exchange protocol.
* @param[in,out]   publicValueLengthPtr    Holds a pointer to the memory location in which the public value length information is stored.
*                                          On calling this function, this parameter shall contain the size of the buffer provided by publicValuePtr.
*                                          When the request has finished, the actual length of the returned value shall be stored.
* @param[out]      publicValuePtr          Contains the pointer to the data where the public value shall be stored.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
* @retval          CRYPTO_E_SMALL_BUFFER:  The provided buffer is too small to store the result
*
* @api
* @note            Not supported by driver/HSM.
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyExchangeCalcPubVal(uint32 cryptoKeyId, uint8 *publicValuePtr, uint32 *publicValueLengthPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_19();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00103] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHANGECALCPUB_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00104] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHANGECALCPUB_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (publicValuePtr == NULL_PTR)
    {
        /* [SWS_Crypto_00105] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHANGECALCPUB_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (publicValueLengthPtr == NULL_PTR)
    {
        /* [SWS_Crypto_00106] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHANGECALCPUB_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (*publicValueLengthPtr == 0UL)
    {
        /* [SWS_Crypto_00107] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHANGECALCPUB_ID, CRYPTO_E_PARAM_VALUE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00104] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHANGECALCPUB_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        *publicValueLengthPtr = 0UL;
        *publicValuePtr = 0U;
        Status = (Std_ReturnType)E_NOT_OK;
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_19();
    return (Std_ReturnType)Status;

}

/**
* @brief    CRYPTO driver secret key computation function.
* @details  This function calculates the shared secret key for the key exchange with the key material of the key identified by the cryptoKeyId
*           and the partner public key. The shared secret key is stored as a key element in the same key.
*
* @param[in]       cryptoKeyId               Holds the identifier of the key which shall be used for the key exchange protocol.
* @param[in]       partnerPublicValuePtr     Holds the pointer to the memory location which contains the partner's public value.
* @param[in]       partnerPublicValueLength  Contains the length of the partner's public value in bytes.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
* @retval          CRYPTO_E_SMALL_BUFFER:  The provided buffer is too small to store the result
*
* @api
* @note            Not supported by driver/HSM.
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_KeyExchangeCalcSecret(uint32 cryptoKeyId, const uint8 *partnerPublicValuePtr, uint32 partnerPublicValueLength)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_20();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00111] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHCALCSECRET_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00112] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHCALCSECRET_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (partnerPublicValuePtr == NULL_PTR)
    {
        /* [SWS_Crypto_00113] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHCALCSECRET_ID, CRYPTO_E_PARAM_POINTER);
    }
    else if (partnerPublicValueLength == 0UL)
    {
        /* [SWS_Crypto_00115] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHCALCSECRET_ID, CRYPTO_E_PARAM_VALUE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00112] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_EXCHCALCSECRET_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        /* This feature is not supported by the current version of the HSM */
        /* Calculate the shared secret key for the key exchange and store it as key element in cryptoKeyId */
        Status = (Std_ReturnType)E_NOT_OK;
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_20();
    return (Std_ReturnType)Status;

}

/**
* @brief    CRYPTO driver certificate parsing function.
* @details  Parses the certificate data stored in the key element CRYPTO_KE_CERT_DATA and fills
*           the key elements CRYPTO_KE_CERT_SIGNEDDATA, CRYPTO_KE_CERT_PARSEDPUBLICKEY and CRYPTO_KE_CERT_SIGNATURE.
*
* @param[in]       cryptoKeyId             Holds the identifier of the key which shall be parsed.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @note            Not supported by driver/HSM.
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_CertificateParse(uint32 cryptoKeyId)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_21();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00168] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_CERTIFICATEPARSE_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00169] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_CERTIFICATEPARSE_ID, CRYPTO_E_PARAM_HANDLE);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00169] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_CERTIFICATEPARSE_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        /* [SWS_Crypto_00170] */
        /*parses the certificate which is stored in the certificate data element.
        fills at least the key elements CRYPTO_KE_CERT_SIGNEDDATA, CRYPTO_KE_CERT_PARSEDPUBLICKEY and CRYPTO_KE_CERT_SIGNATURE with the corresponding data */

        Status = (Std_ReturnType)E_NOT_OK;
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_21();
    return (Std_ReturnType)Status;
}

/**
* @brief    CRYPTO driver certificate verification function.
* @details  Verifies the certificate stored in the key referenced by cryptoValidateKeyId with the certificate stored
*           in the key referenced by cryptoKeyId.
*
* @param[in]       cryptoKeyId             Holds the identifier of the key which shall be used to validate the certificate.
* @param[in]       verifyCrypto_KeyId       Holds the identifier of the key contain.
* @param[in,out]   None.
* @param[out]      verifyPtr               Holds a pointer to the memory location which will contain the result of the certificate verification.
*
* @return          Std_ReturnType
* @retval          E_OK:                   Request successful
* @retval          E_NOT_OK:               Request Failed
* @retval          CRYPTO_E_BUSY:          Request Failed, Crypto Driver Object is Busy
*
* @api
* @note            Not supported by driver/HSM.
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_CertificateVerify(uint32 cryptoKeyId, uint32 verifyCrypto_KeyId, Crypto_VerifyResultType *verifyPtr)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */
    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_22();

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00172] */
        (void) Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                               CRYPTO_KEY_CERTIFICATEVERIFY_ID, CRYPTO_E_UNINIT);
    }
    #if (CRYPTO_KEY_CONFIGURED == STD_ON)
    else if ((cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED) || (cryptoKeyId == 0UL))
    {
        /* [SWS_Crypto_00173] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_CERTIFICATEVERIFY_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if ((verifyCrypto_KeyId > CRYPTO_MAXKEY_CONFIGURED) || (verifyCrypto_KeyId == 0UL))
    {
        /* [SWS_Crypto_00174] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_CERTIFICATEVERIFY_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (verifyPtr == NULL_PTR)
    {
        /* [SWS_Crypto_00175] */
        (void)Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                              CRYPTO_KEY_CERTIFICATEVERIFY_ID, CRYPTO_E_PARAM_POINTER);
    }
    #endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    else
    {
    #endif
        #if ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF))
        /* [SWS_Crypto_00173] */
        Det_ReportError(CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, \
                        CRYPTO_KEY_CERTIFICATEVERIFY_ID, CRYPTO_E_PARAM_HANDLE);
    }
        #else /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
        /* This feature is not supported by the current version of the HSM */
        /* [SWS_Crypto_00177] */
        /*
         *   Uses the key element CRYPTO_KE_CERT_PARSEDPUBLICKEY of the key referenced by cryptoKeyId to do a signature verification.
         *   The data to check are contained in the key element CRYPTO_KE_CERT_SIGNEDDATA and the signature is located in the key element CRYPTO_KE_CERT_SIGNATURE
         *   shall be available in the key referenced by verifyCryptoKeyId.
         */
        *verifyPtr = CRYPTO_E_VER_NOT_OK;
        Status = (Std_ReturnType)E_NOT_OK;
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    }
        #endif
        #endif /* ((CRYPTO_DEV_ERROR_DETECT == STD_ON) && (CRYPTO_KEY_CONFIGURED == STD_OFF)) */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_22();
    return (Std_ReturnType)Status;
}

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#endif

#ifdef __cplusplus
}
#endif

// clang-format on
