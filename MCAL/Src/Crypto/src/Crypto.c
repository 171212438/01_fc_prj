/**
 *   @file    Crypto.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - High level part of driver.
 *   @details This file contains the functions defined by AutoSAR.
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
#include "Mcal.h"
#include "Crypto_Level0Api.h"
#include "Crypto_Level1Api.h"
#include "Crypto_Level2Api.h"
#include "Crypto_LevelNApi.h"

#include "Crypto.h"
#include "Crypto_Cfg.h"

#include "Crypto_LLD.h"
#include "CryIf.h"
#include "SchM_Crypto.h"
#include "Crypto_KeyManagement.h"
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
/* [SWS_Crypto_00126] */
#include "Det.h"
#endif
#include "Crypto_Version.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Adc configuration header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION    != CRYPTO_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION    != CRYPTO_CFG_AR_RELEASE_MINOR_VERSION) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION != CRYPTO_CFG_AR_RELEASE_REVISION_VERSION) \
    )
#error "AutoSar Version Numbers of Crypto.h and Crypto_Cfg.h are different"
#endif

/* Check if current file and Adc configuration header file are of the same software version */
#if ((CRYPTO_SW_MAJOR_VERSION != CRYPTO_CFG_SW_MAJOR_VERSION) || \
     (CRYPTO_SW_MINOR_VERSION != CRYPTO_CFG_SW_MINOR_VERSION) || \
     (CRYPTO_SW_PATCH_VERSION != CRYPTO_CFG_SW_PATCH_VERSION) \
    )
#error "Software Version Numbers of Crypto.h and Crypto_Cfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/* BitField indicating What ProcessJob has to do in a single call */
#define CRYPTO_TASK_FOR_JOB_DONE            0x00U   /* Reset the BitField */
#define CRYPTO_TASK_FOR_JOB_START           0x01U   /* START action bitField indication */
#define CRYPTO_TASK_FOR_JOB_UPDATE          0x02U   /* UPDATE action bitField indication */
#define CRYPTO_TASK_FOR_JOB_FINISH          0x04U   /* FINISH action bitField indication */
#define CRYPTO_TASK_FOR_JOB_LAST_UPDATE     0x08U   /* FINISH with input data action bitField indication */
#define CRYPTO_TASK_FOR_JOB                 0x10U   /*  */
#define CRYPTO_TASK_FOR_JOB_SINGLECALL      0x1FU   /* concatenation of all actions */
#define CRYPTO_TASK_FOR_JOB_CONTEXTSAVE     0x20U   /* CONTEXT save operation*/
#define CRYPTO_TASK_FOR_JOB_CONTEXRESTORE   0x40U   /* CONTEXT restore operation*/
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/



/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
CRYPTO_TEXT_SECTION static Crypto_ServCapType   Crypto_CheckCapabilities(uint32 ServiceId, const Crypto_AlgorithmInfoType *const Algorithm);
#endif

CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_CheckJobParameter(const Crypto_JobType *job);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_CheckRequiredJobInputPtr(const Crypto_JobType *job);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_CheckSecondaryJobInputPtr(const Crypto_JobType *job);

#if TERTIARY_INPUTBUFFER_CHECK
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_CheckTertiaryJobInputPtr(const Crypto_JobType *job);
#endif

CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_CheckVerifyPtr(const Crypto_JobType *job);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_CheckJobOutputPtr(const Crypto_JobType *job);

#if SECOND_OUTBUFFER_CHECK
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_CheckSecondaryJobOutputPtr(const Crypto_JobType *job);
#endif

CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_ChkInputOptionalBufs(void);
CRYPTO_TEXT_SECTION static void                 Crypto_PrepareTaskForJob(void);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_ProcessSingleCall(void);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_ProcessStart(void);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_ProcessUpdate(void);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_ProcessFinish(void);

#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_ProcessContextSave(void);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_ProcessContextRestore(void);
#endif /* (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */

CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_SimpleProcessJob(Crypto_JobType *job);

#if CRYPTO_JOB_QUEUING == STD_ON
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_QueueJob(Crypto_JobType *job);
CRYPTO_TEXT_SECTION static Std_ReturnType       Crypto_RemovedJobFromQueue(const  Crypto_JobType *job);
#endif

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
/**
* @brief   The function Crypto_CheckCapabilities checks if the request is compliant with the HW capabilities.
* @details The function checks if HSM supports the requested ServiceId and algorithms.
*
* @param[in]      uint32 ServiceId                    : Type of requested service, based on Crypto_ServiceInfoType enumeration (Csm_Types.h).
* @param[in]      Crypto_AlgorithmInfoType *Algorithm : Pointer on the description of algorithm that is to be used when processing the request.
* @param[out]     None.
*
* @return         Crypto_ServCapType
* @retval         CRYPTO_SERVICE_NOT_SUPP : The request is beyond HW capabilities.
*                 CRYPTO_SERVICE_SUPP :     Request type and algorithm are supported by HW.
*/

CRYPTO_TEXT_SECTION static Crypto_ServCapType Crypto_CheckCapabilities(uint32 ServiceId, const Crypto_AlgorithmInfoType *const Algorithm)
{
    Crypto_ServCapType Capability = CRYPTO_SERVICE_NOT_SUPP;
    uint32 u32NbAlgo = 0UL;
    uint32 u32Counter = 0UL;
    const Crypto_AlgorithmInfoType *pAlgoInfo = NULL_PTR;

    if (ServiceId < CRYPTO_MAX_SERVICES)
    {
        pAlgoInfo = Crypto_ServiceCapabilities[ServiceId];
        if (NULL_PTR != pAlgoInfo)
        {
            u32NbAlgo = Crypto_NbAlgoSupported[ServiceId];
            for (u32Counter = 0UL; u32Counter < u32NbAlgo; u32Counter++)
            {
                if (pAlgoInfo[u32Counter].family != Algorithm->family)
                {
                    Capability = CRYPTO_SERVICE_NOT_SUPP;
                }
                else if (pAlgoInfo[u32Counter].secondaryFamily != Algorithm->secondaryFamily)
                {
                    Capability = CRYPTO_SERVICE_NOT_SUPP;
                }
                /* HASH and RNG are services without key, so there is no check */
                else if ((pAlgoInfo[u32Counter].keyLength != Algorithm->keyLength) &&
                         (ServiceId != (uint32)CRYPTO_HASH) && (ServiceId != (uint32)CRYPTO_RANDOMGENERATE))
                {
                    Capability = CRYPTO_SERVICE_NOT_SUPP;
                }
                else if (pAlgoInfo[u32Counter].mode != Algorithm->mode)
                {
                    Capability = CRYPTO_SERVICE_NOT_SUPP;
                }
                else
                {
                    Capability = CRYPTO_SERVICE_SUPP;
                }

                if (CRYPTO_SERVICE_SUPP == Capability)
                {
                    break;
                }
            }
        }
    }

    return Capability;
}
#endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON) */

/* Check the first input of job */
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobParameterOf1stInput(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    /*
             * The service request itself is valid.
             * Now check the consistency of its parameters.
             */
    switch (job->jobPrimitiveInfo->primitiveInfo->service)
    {
        /* Check mode for start mode and input Ptr for update mode */
        case CRYPTO_HASH:               /* Hash Service */
        case CRYPTO_MACGENERATE:        /* MAC Generation service */
        case CRYPTO_MACVERIFY:  /* MAC verification Service */
        case CRYPTO_ENCRYPT:  /* Encryption Service */
        case CRYPTO_DECRYPT:  /* Decryption Service */
        case CRYPTO_SIGNATUREGENERATE:  /* Signature generation Service */
        case CRYPTO_SIGNATUREVERIFY:  /* Signature verification Service */
            if ((0U == (uint8)job->jobPrimitiveInputOutput.mode) || ((uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT < (uint8)job->jobPrimitiveInputOutput.mode))
            {
                /* The received mode is invalid. */
                /* [SWS_Crypto_00071] */
                Status = (Std_ReturnType)E_NOT_OK;
            }

            if (((uint8)CRYPTO_OPERATIONMODE_UPDATE == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_UPDATE)) ||
                ((uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT)))
            {
                /* The request contains an update */
                /* [SWS_Crypto_00071] */
                if ((Std_ReturnType)E_NOT_OK == Crypto_CheckRequiredJobInputPtr(job))
                {
                    Status = (Std_ReturnType)E_NOT_OK;
                }
            }
            break;
        default:
            /* Unknown service have not been identified through capabilities  when DET is OFF */
            /* It is checked here in this case */
            #if (CRYPTO_DEV_ERROR_DETECT == STD_OFF)
            if (job->jobPrimitiveInfo->primitiveInfo->service != CRYPTO_RANDOMGENERATE)
            {
                Status = (Std_ReturnType)E_NOT_OK;
            }
            #endif
            break;
    }
    return Status;
}

/* Check the second input parameter */
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobParameterOf2ndInput(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    switch (job->jobPrimitiveInfo->primitiveInfo->service)
    {
        /* Check Secondary input Ptr for finish mode */
        case CRYPTO_MACVERIFY:  /* MAC verification Service */
        case CRYPTO_SIGNATUREVERIFY:  /* Signature verification Service */
            if ((uint8)CRYPTO_OPERATIONMODE_FINISH == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_FINISH))
            {
                /* The request contains a finish */
                /* [SWS_Crypto_00071] */
                if ((Std_ReturnType)E_NOT_OK == Crypto_CheckSecondaryJobInputPtr(job))
                {
                    Status = (Std_ReturnType)E_NOT_OK;
                }
            }
            break;

        default:
            /* Unknown service have been identified through capabilities */
            break;
    }
    return Status;
}

/* PRQA S 3206,2200,2212++ */
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobParameterOf3thInput(const Crypto_JobType *job) /* Check the third input parameter */
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    (void)job;
        /*if( (Std_ReturnType)E_NOT_OK == Crypto_CheckSecondaryJobOutputPtr( job ) )*/
    return Status;
}

/* PRQA S 3206,2200,2212-- */
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobParameterOfVerify(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    switch (job->jobPrimitiveInfo->primitiveInfo->service)
    {
        /* Check secondary input Ptr and verify Ptr for finish mode */
        case CRYPTO_MACVERIFY:  /* MAC verification Service */
        case CRYPTO_SIGNATUREVERIFY:  /* Signature verification Service */
            if ((uint8)CRYPTO_OPERATIONMODE_FINISH == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_FINISH))
            {
                /* The request contains a finish */
                if ((Std_ReturnType)E_NOT_OK == Crypto_CheckVerifyPtr(job))
                {
                    Status = (Std_ReturnType)E_NOT_OK;
                }
            }
            break;
        default:
            /* Unknown service have been identified through capabilities */
            break;
    }
    return Status;
}
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobParameterOf1stOutput(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    switch (job->jobPrimitiveInfo->primitiveInfo->service)
    {
        /* Check ouput Ptr for finish mode */
        case CRYPTO_HASH:               /* Hash Service */
        case CRYPTO_MACGENERATE:        /* MAC Generation service */
        case CRYPTO_ENCRYPT:  /* Encryption Service */
        case CRYPTO_DECRYPT:  /* Decryption Service */
        case CRYPTO_SIGNATUREGENERATE:  /* Signature generation Service */
        case CRYPTO_RANDOMGENERATE:  /* Random Number Generation Service */
            if (((uint8)CRYPTO_OPERATIONMODE_FINISH == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_FINISH)) ||
                ((uint8)CRYPTO_OPERATIONMODE_SAVE_CONTEXT == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_SAVE_CONTEXT)))
            {
                /* The request contains a finish or context save operation */
                if ((Std_ReturnType)E_NOT_OK == Crypto_CheckJobOutputPtr(job))
                {
                    Status = (Std_ReturnType)E_NOT_OK;
                }
            }
            break;
        case CRYPTO_MACVERIFY:
            if ((uint8)CRYPTO_OPERATIONMODE_SAVE_CONTEXT == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_SAVE_CONTEXT))
            {
                /* The request contains a finish or context save operation*/
                if ((Std_ReturnType)E_NOT_OK == Crypto_CheckJobOutputPtr(job))
                {
                    Status = (Std_ReturnType)E_NOT_OK;
                }
            }
            break;
        default:
            /* Unknown service have been identified through capabilities */
            break;
    }
    if (Status == (Std_ReturnType)E_OK)
    {
        switch (job->jobPrimitiveInfo->primitiveInfo->service)
        {
            /* Check ouput Ptr for update mode */
            case CRYPTO_ENCRYPT:  /* Encryption Service */
            case CRYPTO_DECRYPT:  /* Decryption Service */
                if ((uint8)CRYPTO_OPERATIONMODE_UPDATE == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_UPDATE))
                {
                    /* The request contains an update */
                    if ((Std_ReturnType)E_NOT_OK == Crypto_CheckJobOutputPtr(job))
                    {
                        Status = (Std_ReturnType)E_NOT_OK;
                    }
                }
                break;
            default:
                /* Unknown service have been identified through capabilities */
                break;
        }
    }
    return Status;
}
/* PRQA S 3206,2200,2212++ */
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobParameterOf2ndOutput(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    (void)job;
    /*if( (Std_ReturnType)E_NOT_OK == Crypto_CheckSecondaryJobOutputPtr( job ) )*/
    return Status;
}
/* PRQA S 3206,2200,2212-- */
/**
* @brief    Perform all the parameters check needed for Crypto_ProcessJob when DET is activated.
* @details  This routine checks all the parameters check needed for Crypto_ProcessJob when DET is activated:
*           - a valid address (not NULL)
*           - a valid size (not 0)
*
* @param[in]       Crypto_JobType job : The job containing the buffer to check.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType Status : E_OK : The checks are correctly passed.
*                                          E_NOT_OK : One or several checks failed.
*
* @api
*
*/
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobParameter(const Crypto_JobType *job)
{
    Std_ReturnType Status;
    /* [SWS_Crypto_00073] */
    /* [SWS_Crypto_00134] */
    Status = Crypto_CheckJobParameterOf1stInput(job);

    if (Status == (Std_ReturnType)E_OK)
    {
        Status = Crypto_CheckJobParameterOf2ndInput(job);
    }

    if (Status == (Std_ReturnType)E_OK)
    {
        Status = Crypto_CheckJobParameterOf3thInput(job);
    }

    if (Status == (Std_ReturnType)E_OK)
    {
        Status = Crypto_CheckJobParameterOfVerify(job);
    }

    /* [SWS_Crypto_00135] */
    if (Status == (Std_ReturnType)E_OK)
    {
        Status = Crypto_CheckJobParameterOf1stOutput(job);
    }

    if (Status == (Std_ReturnType)E_OK)
    {
        Status = Crypto_CheckJobParameterOf2ndOutput(job);
    }

    return Status;

}

/**
* @brief    Check the validity of a required input buffer parameters.
* @details  This routine checks if the input buffer corresponding to the job given in parameter has :
*           - a valid address (not NULL)
*           - a valid size (not 0)
*
* @param[in]       Crypto_JobType job : The job containing the buffer to check.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType Status : E_OK : The checks are correctly passed.
*                                          E_NOT_OK : One or several checks failed.
*
* @api
*
*/
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckRequiredJobInputPtr(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == job->jobPrimitiveInputOutput.inputPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
    }
    else if (0UL == job->jobPrimitiveInputOutput.inputLength)
    {
        /* [SWS_Crypto_00142] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_VALUE);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        /* Checks are passed. Return E_OK. */
        Status = (Std_ReturnType)E_OK;
    }
    return Status;
}

/**
* @brief    Check the validity of secondary input buffer parameters.
* @details  This routine checks if the input buffer corresponding to the job given in parameter has
*           a valid size (not 0) if its address is valid (not NULL)
*
* @param[in]       Crypto_JobType job : The job containing the buffer to check.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType Status : E_OK : The checks are correctly passed.
*                                          E_NOT_OK : One or several checks failed.
*
* @api
*
*/

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckSecondaryJobInputPtr(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == job->jobPrimitiveInputOutput.secondaryInputPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
    }
    else if (0UL == job->jobPrimitiveInputOutput.secondaryInputLength)
    {
        /* [SWS_Crypto_00142] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_VALUE);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        /* Checks are passed. Return E_OK. */
        Status = (Std_ReturnType)E_OK;
    }
    return Status;
}

#if TERTIARY_INPUTBUFFER_CHECK
/**
* @brief    Check the validity of tertiary input buffer parameters.
* @details  This routine checks if the input buffer corresponding to the job given in parameter has
*           a valid size (not 0) if its address is valid (not NULL)
*
* @param[in]       Crypto_JobType job : The job containing the buffer to check.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType Status : E_OK : The checks are correctly passed.
*                                          E_NOT_OK : One or several checks failed.
*
* @api
*
*/
/* PRQA S 3219,2200,2212++ */
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckTertiaryJobInputPtr(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == job->jobPrimitiveInputOutput.tertiaryInputPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
    }
    else if (0UL == job->jobPrimitiveInputOutput.tertiaryInputLength)
    {
        /* [SWS_Crypto_00142] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_VALUE);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        /* Checks are passed. Return E_OK. */
        Status = (Std_ReturnType)E_OK;
    }
    return Status;
}
/* PRQA S 3219,2200,2212-- */
#endif

/**
* @brief    Check the validity of verification buffer parameter.
* @details  This routine checks if the verification buffer corresponding to the job given in parameter have :
*           - a valid address (not NULL)
*           - a valid size (not 0)
*
* @param[in]       Crypto_JobType job : The job containing the buffers to check.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType Status : E_OK : The checks are correctly passed.
*                                          E_NOT_OK : One or several checks failed.
*
* @api
*
*/
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckVerifyPtr(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == job->jobPrimitiveInputOutput.verifyPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        /* Checks are passed. Return E_OK. */
        Status = (Std_ReturnType)E_OK;
    }
    return Status;
}

/**
* @brief    Check the validity of output buffer parameters.
* @details  This routine checks if the output buffer corresponding to the job given in parameter have :
*           - a valid address (not NULL)
*           - a valid size (not 0)
*
* @param[in]       Crypto_JobType job : The job containing the buffers to check.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType Status : E_OK : The checks are correctly passed.
*                                          E_NOT_OK : One or several checks failed.
*
* @api
*
*/
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckJobOutputPtr(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    /* [SWS_Crypto_00071] */
    if (NULL_PTR == job->jobPrimitiveInputOutput.outputPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* [SWS_Crypto_00071] */
    else if (NULL_PTR == job->jobPrimitiveInputOutput.outputLengthPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* [SWS_Crypto_00071] */
    else if (0UL == *(job->jobPrimitiveInputOutput.outputLengthPtr))
    {
        /* [SWS_Crypto_00142] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_VALUE);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /* Checks are passed. Return E_OK. */
        Status = (Std_ReturnType)E_OK;
    }
    return Status;
}

#if SECOND_OUTBUFFER_CHECK
/**
* @brief    Check the validity of secondaryOutput buffer parameters.
* @details  This routine checks if the secondaryOutput buffer corresponding to the job given in parameter have :
*           - a valid address (not NULL)
*           - a valid size (not 0)
*
* @param[in]       Crypto_JobType job : The job containing the buffers to check.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          Std_ReturnType Status : E_OK : The checks are correctly passed.
*                                          E_NOT_OK : One or several checks failed.
*
* @api
*
*/
/* PRQA S 3219,2200,2212++ */
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_CheckSecondaryJobOutputPtr(const Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    /* [SWS_Crypto_00071] */
    if (NULL_PTR == job->jobPrimitiveInputOutput.secondaryOutputPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* [SWS_Crypto_00071] */
    else if (NULL_PTR == job->jobPrimitiveInputOutput.secondaryOutputLengthPtr)
    {
        /* [SWS_Crypto_00070] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* [SWS_Crypto_00071] */
    else if (0UL == *(job->jobPrimitiveInputOutput.secondaryOutputLengthPtr))
    {
        /* [SWS_Crypto_00142] */
        #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_VALUE);
        #endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /* Checks are passed. Return E_OK. */
        Status = (Std_ReturnType)E_OK;
    }
    return Status;
}
#endif
/* PRQA S 3219,2200,2212-- */
/**
* @brief   The function Crypto_ChkInputOptionalBufs checks if the input data are present to execute the request.
* @details The function is responsible of ensuring the validity of optional input buffers for FINISH mode.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : Some parameters are not present.
*                 E_OK                           : All parameters are valid and request can be processed.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_ChkInputOptionalBufs(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    uint32  u32CoreId = Crypto_GetCoreID();

    /* for FINISH the input buffer is optional. Check if valid. */
    if (NULL_PTR == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr)
    {
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (0UL == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength)
    {
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /* opmode is FINISH and input buffer is OK. Let the request go. */
        Status = (Std_ReturnType)E_OK;
    }

    return Status;
}

/**
* @brief   The function Crypto_PrepareTaskForJob set the needed task for a requested job.
* @details The function Crypto_PrepareTaskForJob set the needed task for a requested job.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         None
*/
CRYPTO_TEXT_SECTION static void  Crypto_PrepareTaskForJob(void) /* now there is no job, just reset the context */
{
    uint32 u32CoreId;

    u32CoreId = Crypto_GetCoreID();


    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = CRYPTO_TASK_FOR_JOB;

    if (CRYPTO_RANDOMGENERATE == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service)
    {
        /*
         * As per AUTOSAR specification, RANDOMGENERATE expect only an output pointer, and only with FI mode
         * In case of PRNG, HSM can generate a random using a seed. If a seed is requested, UPDATE is added to
         * the Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess
         */
        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess |= CRYPTO_TASK_FOR_JOB_FINISH;

        if ((CRYPTO_ALGOFAM_RNG == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.secondaryFamily) &&
            (NULL_PTR != Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputPtr) &&
            (16U == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.inputLength)) /* require 16bytes seed */
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess  |= CRYPTO_TASK_FOR_JOB_UPDATE;
        }
    }
    else /* if not random generate, just refer to the parameter mode */
    {
        if ((uint8)CRYPTO_OPERATIONMODE_START == ((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_START))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess |=  CRYPTO_TASK_FOR_JOB_START;
        }

        if ((uint8)CRYPTO_OPERATIONMODE_UPDATE == ((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_UPDATE))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess |= CRYPTO_TASK_FOR_JOB_UPDATE;
        }

        if ((uint8)CRYPTO_OPERATIONMODE_FINISH == ((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_FINISH))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess |= CRYPTO_TASK_FOR_JOB_FINISH;
            if ((Std_ReturnType)E_OK == Crypto_ChkInputOptionalBufs()) /* if the mode is finish, and the input data present, set it as last update */
            {
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess  |= CRYPTO_TASK_FOR_JOB_LAST_UPDATE;
            }
        }

        if ((uint8)CRYPTO_OPERATIONMODE_SAVE_CONTEXT == ((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_SAVE_CONTEXT))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess |= CRYPTO_TASK_FOR_JOB_CONTEXTSAVE;
        }

        if ((uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT == ((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess |= CRYPTO_TASK_FOR_JOB_CONTEXRESTORE;
        }
    }
}

#if (CRYPTO_USER_ASYNC_CB_NOTIF_ENABLE == STD_ON)
extern void CryptoAsyncCallbackNotification(const Crypto_JobType *job, Std_ReturnType result);
#endif

/**
* @brief   The function Crypto_ScheduleJob processes the current job.
* @details The function is responsible of determining what operation should be executed for the job regarding the current driver status.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         None
*/

CRYPTO_TEXT_SECTION  void Crypto_ScheduleJob(void)
{
    /* flag the new request as started. */
    uint32 u32ExitAfterHsmOp = 0u;
    uint32 u32ExitCurrentLoop = 0u;
    uint32 u32CoreId;
    Crypto_JobType * pStoredJob;
    u32CoreId = Crypto_GetCoreID();

    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer = 0U;
    Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobState = CRYPTO_JOBSTATE_ACTIVE;
    Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_RegisteredSvcResultsProcessFunc = NULL_PTR;

    /* It is the only service where SUF is not needed, so no check on mode here */
    while ((Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess != CRYPTO_TASK_FOR_JOB_DONE) &&
            (E_OK == Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus))/* the current task has left operation need to schedule */
    {
        if (CRYPTO_TASK_FOR_JOB_SINGLECALL == Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess)
        {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00();
            /* Special action "all in one". Actually, all SINGLECALL requests can be done with */
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = CRYPTO_TASK_FOR_JOB_DONE;
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_BUSY;
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00();
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_ProcessSingleCall();
        }
        else if (CRYPTO_TASK_FOR_JOB_START == (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess & CRYPTO_TASK_FOR_JOB_START))
        {
            /* Store SUF actions to perform, but clear START flag since this action is done */
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess & (CRYPTO_TASK_FOR_JOB_UPDATE | CRYPTO_TASK_FOR_JOB_LAST_UPDATE | CRYPTO_TASK_FOR_JOB_FINISH));
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_WAITING_FOR_INPUT;
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_ProcessStart();
        }
        else if (CRYPTO_TASK_FOR_JOB_UPDATE == (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess & CRYPTO_TASK_FOR_JOB_UPDATE))
        {
            /* Clear UPDATE flag since this action is done */
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess  & (CRYPTO_TASK_FOR_JOB_LAST_UPDATE | CRYPTO_TASK_FOR_JOB_FINISH));
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_ProcessUpdate();
        }
        else if (CRYPTO_TASK_FOR_JOB_LAST_UPDATE == (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess & CRYPTO_TASK_FOR_JOB_LAST_UPDATE))
        {
            /* Clear UPDATE flag since this action is done */
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess  & (CRYPTO_TASK_FOR_JOB_FINISH));
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_ProcessUpdate();
        }
        else if (CRYPTO_TASK_FOR_JOB_FINISH == (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess & CRYPTO_TASK_FOR_JOB_FINISH))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = CRYPTO_TASK_FOR_JOB_DONE;
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_ProcessFinish();
        }
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)
        else if (CRYPTO_TASK_FOR_JOB_CONTEXTSAVE == (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess & CRYPTO_TASK_FOR_JOB_CONTEXTSAVE))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = CRYPTO_TASK_FOR_JOB_DONE;
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_ProcessContextSave();
        }
        else if(CRYPTO_TASK_FOR_JOB_CONTEXRESTORE == (Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess & CRYPTO_TASK_FOR_JOB_CONTEXRESTORE))
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = CRYPTO_TASK_FOR_JOB_DONE;
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_ProcessContextRestore();
        }
#endif /* (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
        else
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_DriverSULFProcess = CRYPTO_TASK_FOR_JOB_DONE;
        }

        if (E_OK != Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus)
        {
            u32ExitCurrentLoop = 1u;
        }
        else
        {
            if (1U == Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_WaitingForHSMAnswer)
            {
                u32ExitAfterHsmOp = 1u;
                u32ExitCurrentLoop = 1u;
            }
            else
            {
                /*Do nothing */
            }
        }

        if(1u == u32ExitCurrentLoop)
        {
            break;
        }
        else
        {
            /*Do nothing */
        }
    }

    if (0u == u32ExitAfterHsmOp)
    {
        /* An error has been detected */
        if (E_NOT_OK == Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus)
        {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01();
            /* Clear the job to allow another job processing */
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobState = CRYPTO_JOBSTATE_IDLE;
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_IDLE;
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01();
            if (CRYPTO_PROCESSING_ASYNC == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType)
            {
                /* [SWS_Crypto_00028] */ 
                pStoredJob = (Crypto_JobType *)(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr);
#if (CRYPTO_USER_ASYNC_CB_NOTIF_ENABLE == STD_ON)
#if (CRYPTO_USER_ASYNC_CB_NOTIF_NOOP == STD_OFF)
                CryptoAsyncCallbackNotification(pStoredJob, Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus);
#endif
#else
                /* [SWS_Csm_01053] Call CryIf_CallbackNotification in all cases. CSM will do the check of callbackUpdateNotification parameter. */
                CryIf_CallbackNotification(pStoredJob, Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus);
#endif
            }
        }
        /* All processing required by the job are done */
        else
        {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02();
            if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_CancelProcessingJob == CRYPTO_JOB_TO_BE_CANCELED)
            {
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_CancelProcessingJob = CRYPTO_NO_JOB_TO_CANCEL;
                Crypto_ClearOuputBufs();
                /* Clear the job to allow another job processing */
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobState = CRYPTO_JOBSTATE_IDLE;
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_IDLE;
            }
            else
            {
                if ((uint8)CRYPTO_OPERATIONMODE_FINISH == ((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_FINISH))
                {
                    Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_FINALIZING;
                }
                else
                {
                    Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_WAITING_FOR_INPUT;
                }
            }
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02();
            if (CRYPTO_PROCESSING_ASYNC == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->processingType)
            {
                pStoredJob = (Crypto_JobType *)(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr);
#if (CRYPTO_USER_ASYNC_CB_NOTIF_ENABLE == STD_ON)
#if (CRYPTO_USER_ASYNC_CB_NOTIF_NOOP == STD_OFF)
                CryptoAsyncCallbackNotification(pStoredJob, Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus);
#endif

#else
                /* [SWS_Csm_01053] Call CryIf_CallbackNotification in all cases. CSM will do the check of callbackUpdateNotification parameter. */
                CryIf_CallbackNotification(pStoredJob, Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus);
#endif
            }
            if (((uint8)CRYPTO_OPERATIONMODE_FINISH == ((uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_FINISH)) ||
                ((uint8)CRYPTO_OPERATIONMODE_SAVE_CONTEXT == (uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode)    )
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03();
                /* Clear the job to allow another job processing */
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobState = CRYPTO_JOBSTATE_IDLE;
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_IDLE;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03();
            }
            else if(((uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT == (uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode) ||
                    ((uint8)CRYPTO_OPERATIONMODE_UPDATE == (uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode) ||
                    ((uint8)CRYPTO_OPERATIONMODE_STREAMSTART == (uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode) ||
                    ((uint8)CRYPTO_OPERATIONMODE_START == (uint8)Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.mode))
            {
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_69();
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobState = CRYPTO_JOBSTATE_IDLE;
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_WAITING_FOR_INPUT;
                SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_69();
            }
            else
            {
                /* Do nothing  */
            }
        }
    }
}

/**
* @brief   The function Crypto_ProcessSingleCall processes the current job.
* @details The function is responsible of determining what operation should be executed for the job regarding the current driver status.
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
/* [SWS_Crypto_00026] */ 

CRYPTO_TEXT_SECTION
static Std_ReturnType Crypto_ProcessSingleCall(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    uint32 u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_BUSY;

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    switch (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service)
    {
        /* [FUNC_Crypto_0007] */ 
        /* Hash Service */
        case CRYPTO_HASH:
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
            Status = Crypto_LLD_ProcessHashReq(NULL_PTR);
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_HASH_SERVICE_ENABLE == STD_ON */
            break;
        /* [FUNC_Crypto_0004] */ 
        /* MAC Generation service */
        case CRYPTO_MACGENERATE:
#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)
            Status = Crypto_LLD_ProcessMacGenReq();
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON */
            break;
        /* [FUNC_Crypto_0005] */ 
        /* MAC verification Service */
        case CRYPTO_MACVERIFY:
#if (CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON)
            Status = Crypto_LLD_ProcessMacVerifReq();
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE == STD_ON */
            break;
        /* [FUNC_Crypto_0002] */ 
        /* Encryption Service */
        case CRYPTO_ENCRYPT:
#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
            Status = Crypto_LLD_ProcessCipherReq();
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */
            break;
        /* [FUNC_Crypto_0002] */ 
        /* Decryption Service */
        case CRYPTO_DECRYPT:
#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)  
            Status = Crypto_LLD_ProcessDecryptReq();
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */
            break;
        /* Signature generation Service */
        case CRYPTO_SIGNATUREGENERATE:
#if (CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON)  
            Status = Crypto_LLD_ProcessSignGenReq();
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE == STD_ON */
            break;
        /* default is used for the last possible configuration: */
        /* Possible values for "service" are checked by Crypto_CheckCapabilities or Crypto_CheckJobParameter*/
        /* CRYPTO_RANDOMGENERATE is managed internally in any case as FINISH in Crypto_PrepareTaskForJob */
        /* Signature verification Service */
        default: /* case CRYPTO_SIGNATUREVERIFY: */
#if (CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON)  
        /* [FUNC_Crypto_0006] */ 
            Status = Crypto_LLD_ProcessVerifySignatureReq();
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE == STD_ON */
            break;
    }
#else /* CRYPTO_KEY_CONFIGURED == STD_ON */
    /* servives available without KEY_CONFIGURED are filtered by Crypto_ProcessJob */
    /* No key are configured, the only service supported here is HASH (RANDOMGENERATE is supported via Crypto_ProcessFinish */
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
    Status = Crypto_LLD_ProcessHashReq(NULL_PTR);
#else
            Status = E_NOT_OK;
#endif/* CRYPTO_HASH_SERVICE_ENABLE == STD_ON */
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

    return Status;
}

/**
* @brief   The function Crypto_ProcessStart processes the current job.
* @details The function is responsible of determining what operation should be executed for the job regarding the current driver status.
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

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_ProcessStart(void)
{
    Std_ReturnType Status =  (Std_ReturnType)E_OK;
    uint32 u32CoreId;
    u32CoreId = Crypto_GetCoreID();
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)
    Crypto_ServiceInfoType eCurrentService = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service;
#endif /* (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
    Crypto_AlgorithmModeType eCurrentMode = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode;

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    if (CRYPTO_ALGOMODE_ECB == eCurrentMode)
    {
        /* Nothing to do here */
    }
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)
    else if(CRYPTO_MACGENERATE == eCurrentService)
    {
#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)
        Status = Crypto_LLD_ProcessScatterMacStartReq(); 
#else
        Status = E_NOT_OK;
#endif /* (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON) */
    }
#endif /* (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
    else
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    {
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)        
        if(CRYPTO_HASH == eCurrentService)
        {
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
            Status = Crypto_LLD_ProcessScatterHashStartReq(NULL_PTR);
#else
            Status = E_NOT_OK;
#endif /* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */
        }
        else
#endif /* (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
    }

    return Status;
}

/**
* @brief   The function Crypto_ProcessUpdate processes the current job.
* @details The function is responsible of determining what operation should be executed for the job regarding the current driver status.
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

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_ProcessUpdate(void)
{
    VAR( Std_ReturnType, AUTOMATIC ) Status = (Std_ReturnType)E_OK;
    uint32 u32CoreId;
    u32CoreId = Crypto_GetCoreID();
    Crypto_ServiceInfoType eCurrentService = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service;
    Crypto_AlgorithmModeType eCurrentMode = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode;

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    if ((CRYPTO_ENCRYPT == eCurrentService) && (CRYPTO_ALGOMODE_ECB == eCurrentMode))
    {
#if (CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON)
        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_BUSY;
        Status = Crypto_LLD_ProcessCipherReq();
#else
        Status = E_NOT_OK;
#endif /* CRYPTO_ENCRYPTION_SERVICE_ENABLE == STD_ON */
    }
    else if ((CRYPTO_DECRYPT == eCurrentService) && (CRYPTO_ALGOMODE_ECB == eCurrentMode))
    {
#if (CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON)
        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_BUSY;
        Status = Crypto_LLD_ProcessDecryptReq();
#else
        Status = E_NOT_OK;
#endif /* CRYPTO_DECRYPTION_SERVICE_ENABLE == STD_ON */
    }
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)    
    else if(CRYPTO_MACGENERATE == eCurrentService)
    {
#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)
        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_BUSY;
        Status = Crypto_LLD_ProcessScatterMacUpdateReq();
#else
        Status = E_NOT_OK;
#endif /* (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON) */
    }
#endif /* (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
    else
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    {
        if (CRYPTO_RANDOMGENERATE == eCurrentService)
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = E_OK;
        }
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)          
        else if(CRYPTO_HASH == eCurrentService)
        {
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_BUSY;
            Status = Crypto_LLD_ProcessScatterHashUpdateReq();
#else
            Status = E_NOT_OK;        
#endif /* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */
        }
#endif /* (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
    }  
    return Status;
}

/**
* @brief   The function Crypto_ProcessFinish processes the current job.
* @details The function is responsible of determining what operation should be executed for the job regarding the current driver status.
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

CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_ProcessFinish(void)
{
    VAR( Std_ReturnType, AUTOMATIC ) Status = (Std_ReturnType)E_OK;
    uint32 u32CoreId;
    u32CoreId = Crypto_GetCoreID();
    Crypto_ServiceInfoType eCurrentService = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service;
    Crypto_AlgorithmModeType eCurrentMode = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->algorithm.mode;

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    if (CRYPTO_ALGOMODE_ECB == eCurrentMode)
    {
        /* The request was the last one to process. */
        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_FINALIZING;
    }
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)    
    else if(CRYPTO_MACGENERATE == eCurrentService)
    {
#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)
        Status = Crypto_LLD_ProcessScatterMacFinishReq();
#else
        Status = E_NOT_OK;
#endif /* (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON) */
    }
#endif /*(CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
    else
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    {
        if (CRYPTO_RANDOMGENERATE == eCurrentService)
        {
#if (CRYPTO_RANDOM_SERVICE_ENABLE == STD_ON)
            /* [FUNC_Crypto_0001] */ 
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_BUSY;
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = Crypto_LLD_ProcessRngReq();
#else
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = E_NOT_OK;
#endif /* CRYPTO_RANDOM_SERVICE_ENABLE == STD_ON */
        }
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)  
        else if(CRYPTO_HASH == eCurrentService)
        {
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
            Status = Crypto_LLD_ProcessScatterHashFinishReq();
#else
            Status = E_NOT_OK;
#endif /* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */      
        }
#endif /*(CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
    }

    return Status;
}

/**
* @brief   The function Crypto_ProcessContextSave processes the current job.
* @details The function is responsible of determining what operation should be executed for the job regarding the current driver status.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_ProcessContextSave(void)
{
    VAR( Std_ReturnType, AUTOMATIC ) Status = (Std_ReturnType)E_OK;
    uint32 u32CoreId;
    u32CoreId = Crypto_GetCoreID();
    Crypto_ServiceInfoType eCurrentService = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service;

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    if(CRYPTO_MACGENERATE == eCurrentService)
    {
#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)
        Status = E_OK;
#else
        Status = E_NOT_OK;
#endif
    }
    else
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    {
        if(CRYPTO_HASH == eCurrentService)
        {
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
            Status = E_OK;
#else
            Status = E_NOT_OK;
#endif/* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */
        }
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
    }

    if(E_OK == Status)
    {
        Status = Crypto_LLD_ContextSave();
        if(E_OK == Status)
        {
            /* after successfully save current context, clean up env */
            Status = Crypto_LLD_CancelJob();
        }
    }

    return Status; 
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */
/**
* @brief   The function Crypto_ProcessContextRestore processes the current job.
* @details The function is responsible of determining what operation should be executed for the job regarding the current driver status.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
#if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON)
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_ProcessContextRestore(void)
{
    VAR( Std_ReturnType, AUTOMATIC ) Status = (Std_ReturnType)E_OK;
    uint32 u32CoreId;
    u32CoreId = Crypto_GetCoreID();
    Crypto_ServiceInfoType eCurrentService = Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInfo->primitiveInfo->service;

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    if(CRYPTO_MACGENERATE == eCurrentService)
    {
#if (CRYPTO_MAC_GENERATION_SERVICE_ENABLE == STD_ON)
        Status = E_OK;
#else
        Status = E_NOT_OK;
#endif
    }
    else
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
    {
        if(CRYPTO_HASH == eCurrentService)
        {
#if (CRYPTO_HASH_SERVICE_ENABLE == STD_ON)
            Status = E_OK;
#else
            Status = E_NOT_OK;
#endif/* (CRYPTO_HASH_SERVICE_ENABLE == STD_ON) */
        }
        else
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
    }

    if(E_OK == Status)
    {
        Status = Crypto_LLD_ContextRestore();
    }

    return Status;
}
#endif /* #if (CRYPTO_PRIMITIVE_SUPPORT_CONTEXT == STD_ON) */

#if CRYPTO_JOB_QUEUING == STD_ON
/**
* @brief   The function Crypto_QueueJob queues a job in the corresponding job queue.
* @details The function is responsible of queuing a job at the right place in corresponding job queue.
*
* @param[in]      Crypto_JobType *  job.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : The request parameters are inconsistent.
*                 E_OK                           : Request accepted and sent to the HSM.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_QueueJob(Crypto_JobType *job)
{
#if (CRYPTO_MAX_QUEUE_SIZE != 1)
    uint32         offset;
#endif
    uint32         u32CoreId;
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    u32CoreId = Crypto_GetCoreID();

    if (NULL_PTR == Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[0UL])
    {
        /* JobQueue is empty */
        /* [SWS_Crypto_00033] */
        Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[0UL] = job;
    }

#if (CRYPTO_MAX_QUEUE_SIZE != 1)
    else if (NULL_PTR != Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[CRYPTO_MAX_QUEUE_SIZE - 1U])
#else /* (CRYPTO_MAX_QUEUE_SIZE == 1) */
    else
#endif /* (CRYPTO_MAX_QUEUE_SIZE == 1) */
    {
        /* JobQueue is full */
        /* [SWS_Crypto_00032] */
        Status = (Std_ReturnType)CRYPTO_E_BUSY;
    }

#if (CRYPTO_MAX_QUEUE_SIZE != 1)
    else
    {
        /* JobQueue is not empty */
        /* Rank the items by priority */
        /* [SWS_Crypto_00030] */

        for (offset = (CRYPTO_MAX_QUEUE_SIZE - 1U); offset > 0UL; offset--)
        {

            /* Search for registered jobs in the queue */
            if (NULL_PTR != Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset - 1U])
            {
                /* The higher the job priority value, the higher the job's priority. */
                if (job->jobPriority > Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset - 1U]->jobPriority)
                {
                    /* job prior to Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset] - shift the item */
                    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset] = Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset - 1U];
                }
                else
                {
                    /* We shifted all lower priority elements now, we can insert the new request here. */
                    /* [SWS_Crypto_00033] */
                    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset] = job;
                    break;
                }
            }
        }

        if (0UL == offset)
        {
            /* [SWS_Crypto_00033] */
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[0U] = job;
        }

    }
#endif /* (CRYPTO_MAX_QUEUE_SIZE != 1) */

    return Status;
}

/**
* @brief   The function Crypto_RemovedJobFromQueue removes the job from the corresponding job queue.
* @details The function is responsible of searching the requested job and extract it from job queue.
*
* @param[in]      Crypto_JobType *  job.
* @param[out]     None.
*
* @return         Std_ReturnType.
* @retval         E_NOT_OK                       : job has not been found.
*                 E_OK                           : job has been found and removed from the queue.
*/
CRYPTO_TEXT_SECTION static Std_ReturnType   Crypto_RemovedJobFromQueue(const Crypto_JobType *job)
{
    uint32 offset;
    uint8  shift = 0U;
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    uint32 u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    for (offset = 0U; offset < (CRYPTO_MAX_QUEUE_SIZE); offset++)
    {
        /* Don't touch the items in queue before finding the job to cancel */
        if (job == Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset])
        {
            shift = 1U;
            Status = E_OK;
        }
        /* job to cancel has been found, shift lower-priority elements of one position */
        if (shift == 1U)
        {
            if (offset == (CRYPTO_MAX_QUEUE_SIZE - 1U))
            {
                /* Erase last parameter */
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset] = NULL_PTR;
            }
            else
            {
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset] = Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset + 1U];
            }
        }
    }

    return Status;
}
#endif

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief   The function Crypto_ClearOuputBufs clear the output buffers.
* @details The function is responsible of clearing the output buffers, in case of cancel typically.
*
* @param[in]      None.
* @param[out]     None.
*
* @return         None.
*/
CRYPTO_TEXT_SECTION void Crypto_ClearOuputBufs(void)
{
    uint32 i;

    uint32 u32CoreId = Crypto_GetCoreID();

    if (NULL_PTR != Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr)
    {
        for (i = 0UL ; i < ((uint32)(*(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputLengthPtr))); i++)
        {
            (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.outputPtr)[i] = 0U;
        }
    }

    if (NULL_PTR != Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryOutputPtr)
    {
        for (i = 0 ; i < (*(Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryOutputLengthPtr)); i++)
        {
            (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobPrimitiveInputOutput.secondaryOutputPtr)[i] = 0U;
        }
    }
}

/**
* @brief    CRYPTO driver initialization function.
* @details  This routine initializes the CRYPTO Driver.
*           The intention of this function is to configure HW according to settings defined in EPC file.
*
* @param[in]       None.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          void
*
* @api
*
*/
/* [SWS_Crypto_91000] */
CRYPTO_TEXT_SECTION void Crypto_Init(const Crypto_ConfigType* configPtr)
{
    uint32         u32CoreId;
    Std_ReturnType Status;
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    uint32 CurrentIdx;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#if (CRYPTO_JOB_QUEUING==STD_ON)
    uint32 offset;
#endif

    u32CoreId = Crypto_GetCoreID();

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04();
    /* Check whether the CRYPTO driver is in CRYPTO_DRIVER_UNINIT state */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus != CRYTO_DRIVER_BUFFER_READY)
    {
        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04();
        /* CRYPTO driver has been already initialized */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, (uint8)CRYPTO_INIT_ID, \
                              (uint8)CRYPTO_E_STATE_TRANSITION);
    }
    else
    {
#endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON) */

#if (CRYPTO_JOB_QUEUING==STD_ON)
        /* Initialize the JobQueues */
        for (offset = 0UL; offset < CRYPTO_MAX_QUEUE_SIZE; offset++)
        {
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[offset] = NULL_PTR;
        }
#endif

        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04();
        Status = Crypto_LLD_Init();
        if ((Std_ReturnType)E_OK == Status)
        {
            SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_05();
            /* Set all keys to invalid */
            /* Implementation choice: Up to CSM to validate the keys after init if the keys are already stored at init. */
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
            for (CurrentIdx = 0UL; CurrentIdx < (uint32)CRYPTO_MAXKEY_CONFIGURED; CurrentIdx++)
            {
                /* [SWS_Crypto_00039] */
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_KeyStatus[CurrentIdx] = CRYPTO_KEY_NOT_VALID;
            }
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */
            /* [SWS_Crypto_00019] */
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_IDLE;
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_05();
        }
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        else
        {
            (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_INIT_ID, CRYPTO_E_INIT_FAILED);
        }
    }
#endif
    /* [SWS_Crypto_00215] */
    /* The Configuration pointer configPtr shall always have a null pointer value */
    (void)configPtr;
}

/**
* @brief    CRYPTO driver version information function.
* @details  This routine returns the version information of this module.
*
* @param[in]       versioninfo      Pointer to where to store the version information of this module.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          void
*
* @api
*/
/* [SWS_Crypto_91001] */

#if (CRYPTO_VERSION_INFO_API == STD_ON)

CRYPTO_TEXT_SECTION void Crypto_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
    /* [SWS_Crypto_00047] */
    if (NULL_PTR == pVersioninfo)
    {
        Det_ReportError((uint16) CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_GETVERSIONINFO_ID, \
                        CRYPTO_E_PARAM_POINTER);
    }
    else
    {
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        (pVersioninfo)->vendorID         = (uint16)CRYPTO_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint16)CRYPTO_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)CRYPTO_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)CRYPTO_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)CRYPTO_SW_PATCH_VERSION;
#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
    }
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
}
#endif /* CRYPTO_VERSION_INFO_API == STD_ON */

/**
* @brief    CRYPTO driver job processing function.
* @details  This routine performs the crypto primitive, that is configured in the job parameter.
*
* @param[in,out]   job           Pointer to the configuration of the job. Contains structures with job and primitive relevant information
*                                but also pointer to result buffers.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK: Request successful
* @retval          E_NOT_OK: Request Failed
* @retval          CRYPTO_E_BUSY: Request Failed, Crypro Driver Object is Busy
* @retval          CRYPTO_E_KEY_NOT_VALID, Request failed, the key is not valid
* @retval          CRYPTO_E_KEY_SIZE_MISMATCH, Request failed, a key element has the wrong size.
* @retval          CRYPTO_E_QUEUE_FULL: Request failed, the queue is full
* @retval          CRYPTO_E_ENTROPY_EXHAUSTION: Request failed, the entropy is exhausted
* @retval          CRYPTO_E_SMALL_BUFFER: The provided buffer is too small to store the result
* @retval          CRYPTO_E_COUNTER_OVERFLOW: The counter is overflowed.
* @retval          CRYPTO_E_JOB_CANCELED: The service request failed because the synchronous job has been cancelled.
*
* @api
*
*/
CRYPTO_TEXT_SECTION static Std_ReturnType Crypto_SimpleProcessJob(Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    uint32         u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    switch (job->jobPrimitiveInfo->primitiveInfo->service)
    {
        case CRYPTO_HASH:
        case CRYPTO_RANDOMGENERATE:
            break;
        default: /* except the hash and random, others require key */
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
            /* [SWS_Crypto_00072] */
            if (job->cryptoKeyId > CRYPTO_MAXKEY_CONFIGURED)
            {
                /* implementation choice */
                Status = (Std_ReturnType)E_NOT_OK;
            }
            else if (job->cryptoKeyId == 0U)
            {
                /* implementation choice */
                Status = (Std_ReturnType)E_NOT_OK;
            }
            /* [SWS_Crypto_00039] */
            else if (CRYPTO_KEY_VALID != Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_KeyStatus[job->cryptoKeyId - 1U])
            {
                Status = (Std_ReturnType)CRYPTO_E_KEY_NOT_VALID;
            }
            else
            {
                /* Checks are passed. Return E_OK. */
                Status = (Std_ReturnType)E_OK;
            }
#else /* (CRYPTO_KEY_CONFIGURED == STD_ON) */
            Status = (Std_ReturnType)CRYPTO_E_KEY_NOT_VALID;
#endif /* (CRYPTO_KEY_CONFIGURED == STD_ON) */
            break;
    }

    if ((Std_ReturnType)E_OK == Status) /* if get key succeed or no need */
    {
        SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_06();
        /* [SWS_Crypto_00014] */
        if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus != CRYPTO_DRIVER_IDLE) /* current crypto driver is doing sth */
        {
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_06();
            /* A job is currently registered in the crypto driver 0. */
            /* [SWS_Crypto_00121] */
            if (job == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr) /* the job is been processed now */
            {
                /* The job request is a new request about job currently being processed. */
                SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_07();
                if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus == CRYPTO_DRIVER_BUSY)
                {
                    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_07();
                    Status = (Std_ReturnType)CRYPTO_E_BUSY;
                }
                else /* CRYPTO_DRIVER_FINALIZING */
                {
                    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_07();
                    /* Reset the current job */
                    /* Store in local variable the task to do (START UPDATE FINISH). */
                    Crypto_PrepareTaskForJob();

                    /* We have at least an UPDATE, input pointers are valid and to be processed */
                    /* [SWS_Crypto_00031] */
                    /* [SWS_Crypto_00017] */

                    Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = (Std_ReturnType) E_OK;
                    Crypto_ScheduleJob();
                    Status = Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus;
                }
            }
            else
            {
#if( CRYPTO_JOB_QUEUING == STD_ON )
                /* A START request is received while the driver has another job active */
                /* [SWS_Crypto_00121] */
                if ((CRYPTO_PROCESSING_ASYNC == job->jobPrimitiveInfo->processingType) &&
                    ((uint8)CRYPTO_OPERATIONMODE_START == ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_START)))
                {
                    /* [SWS_Crypto_00029] */
                    /* [SWS_Crypto_00033] */
                    Status = Crypto_QueueJob(job);
                }
                else
#endif
                {
                    /* [SWS_Crypto_00034] */
                    /* the job is synchronous and driver is currently busy, reject the job */
                    Status = (Std_ReturnType)CRYPTO_E_BUSY;
                }
            }
        }
        else /* the cryptodriver is idle */
        {
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_06();
            /* The crypto driver 0 is IDLE */
            /* Ordering of In case of SINGLECALL or STREAMSTART we have at least an UPDATE, input pointers are valid and to be processed */
            if (((uint8)CRYPTO_OPERATIONMODE_START != ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_START)) &&
                ((uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT != ((uint8)job->jobPrimitiveInputOutput.mode & (uint8)CRYPTO_OPERATIONMODE_RESTORE_CONTEXT)) )
            {
                /* If CDO was IDLE, we need a start */
                /* [SWS_Crypto_00118] */
                Status = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                /* We got a start, Store the new job */
                Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr = job;
                /* Store in local variable the task to do (START UPDATE FINISH). */
                Crypto_PrepareTaskForJob();

                /* We have at least an UPDATE, input pointers are valid and to be processed */
                /* [SWS_Crypto_00031] */
                Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = (Std_ReturnType) E_OK;
                Crypto_ScheduleJob();
                Status = Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus;
            }
        }
    }
    return Status;
}
/**
* @brief    CRYPTO driver job processing function.
* @details  This routine performs the crypto primitive, that is configured in the job parameter.
*
* @param[in]       objectId      Holds the identifier of the Crypto Driver Object.
* @param[in,out]   job           Pointer to the configuration of the job. Contains structures with job and primitive relevant information
*                                but also pointer to result buffers.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK: Request successful
* @retval          E_NOT_OK: Request Failed
* @retval          CRYPTO_E_BUSY: Request Failed, Crypro Driver Object is Busy
* @retval          CRYPTO_E_KEY_NOT_VALID, Request failed, the key is not valid
* @retval          CRYPTO_E_KEY_SIZE_MISMATCH, Request failed, a key element has the wrong size.
* @retval          CRYPTO_E_QUEUE_FULL: Request failed, the queue is full
* @retval          CRYPTO_E_ENTROPY_EXHAUSTION: Request failed, the entropy is exhausted
* @retval          CRYPTO_E_SMALL_BUFFER: The provided buffer is too small to store the result
* @retval          CRYPTO_E_COUNTER_OVERFLOW: The counter is overflowed.
* @retval          CRYPTO_E_JOB_CANCELED: The service request failed because the synchronous job has been cancelled.
*
* @api
*/
/* [SWS_Crypto_91003] */

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_ProcessJob(uint32 objectId, Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    #if (CRYPTO_DEV_ERROR_DETECT == STD_ON)   
    uint32              u32CoreId = Crypto_GetCoreID();
    #endif /* (CRYPTO_DEV_ERROR_DETECT == STD_ON)  */
    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_08();

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
    if (CRYTO_DRIVER_BUFFER_READY >= Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus)
    {
        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_08();
        /* [SWS_Crypto_00057] */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (CRYPTO_NB_MAX_DRV_OBJ < objectId)
    {
        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_08();
        /* [SWS_Crypto_00058] */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == job)
    {
        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_08();
        /* [SWS_Crypto_00059] */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_POINTER);
        Status = (Std_ReturnType)E_NOT_OK;
    }

    else if (CRYPTO_SERVICE_NOT_SUPP == Crypto_CheckCapabilities((uint32)job->jobPrimitiveInfo->primitiveInfo->service,
                                                                 &job->jobPrimitiveInfo->primitiveInfo->algorithm))
    {
        SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_08();
        /* [SWS_Crypto_00064] */
        /* [SWS_Crypto_00067] */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_PROCESSJOB_ID, CRYPTO_E_PARAM_HANDLE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */
        if ((Std_ReturnType)E_NOT_OK == Crypto_CheckJobParameter(job))
        {
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_08();
            Status = (Std_ReturnType)E_NOT_OK;
            /* [SWS_Crypto_00025] */
            job->jobState = CRYPTO_JOBSTATE_IDLE;
        }
        else
        {
            SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_08();
            Status = Crypto_SimpleProcessJob(job);
        }
    return Status;
}

/**
* @brief    CRYPTO driver job cancelling function.
* @details  This interface removes the provided job from the queue and cancels the processing of the job if possible.
*
* @param[in]       objectId      Holds the identifier of the Crypto Driver Object.
* @param[in,out]   job           Pointer to the configuration of the job. Contains structures with job and primitive relevant information.
* @param[out]      None.
*
* @return          Std_ReturnType
* @retval          E_OK: Request successful, job has been removed
* @retval          E_NOT_OK: Request Failed, job couldn't be removed
* @retval          CRYPTO_E_JOB_CANCELED;: The job has been cancelled but is still processed. No results will be returned to the application.
*
* @api
*
*/

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_CancelJob(uint32 objectId, Crypto_JobType *job)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    uint32         u32CoreId;

    u32CoreId = Crypto_GetCoreID();

    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_09();

#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )

    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus <= CRYTO_DRIVER_BUFFER_READY)
    {
        /* [SWS_Crypto_00123] */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_CANCELJOB_ID, CRYPTO_E_UNINIT);
    }
    else if (CRYPTO_NB_MAX_DRV_OBJ < objectId)
    {
        /* [SWS_Crypto_00124] */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_CANCELJOB_ID, CRYPTO_E_PARAM_HANDLE);
    }
    else if (NULL_PTR == job)
    {
        /* [SWS_Crypto_00125] */
        (void)Det_ReportError((uint16)CRYPTO_MODULE_ID, CRYPTO_INSTANCE_ID, CRYPTO_CANCELJOB_ID, CRYPTO_E_PARAM_POINTER);
    }
    else
    {
#endif
#if( CRYPTO_JOB_QUEUING == STD_ON )
        /* [SWS_Crypto_00143] */
        Status = Crypto_RemovedJobFromQueue(job);
        /* Job not found in the queue */
        if (Status == E_NOT_OK)
        {
#endif
            /* [SWS_Crypto_00143] */
            /* If no errors are detected by Crypto Driver and the driver is able to cancel the job immediately,
            * the service Crypto_CancelJob() shall remove the job from the queue and cancel the job in the hardware.
            If the cancellation is successful E_OK shall be returned, otherwise it shall return E_NOT_OK. */

            if ((Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus != CRYPTO_DRIVER_IDLE) &&
                (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr == job))
            {
                /* [SWS_Crypto_00143] */
                /* 2 states are possible when a job is registered :
                * CRYPTO_DRIVER_BUSY : A HW operation is ongoing, so HSM has to be notified for cancellation
                * CRYPTO_DRIVER_WAITING_FOR_INPUT : HSM is already idle, only driver has to be reset. */
                if (CRYPTO_DRIVER_BUSY == Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus)
                {
                    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_09();
                    Status = Crypto_LLD_CancelJob();
                    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_09();
                    if(Status == E_OK)
                    {
                        /* [SWS_Crypto_00122] */
                        Crypto_ClearOuputBufs();
                        /* The ongoing operation has been cancelled */
                        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobState = CRYPTO_JOBSTATE_IDLE;
                        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_IDLE;
                    }
                    else
                    {
                        Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_CancelProcessingJob = CRYPTO_JOB_TO_BE_CANCELED;
                        Status = CRYPTO_E_JOB_CANCELED;
                    }
                }
                else
                {
                    /* [SWS_Crypto_00122] */
                    Crypto_ClearOuputBufs();
                    /* The ongoing (but not actively processing) operation has been cancelled */
                    Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr->jobState = CRYPTO_JOBSTATE_IDLE;
                    Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus = CRYPTO_DRIVER_IDLE;
                    Status = E_OK;
                }
            }
#if( CRYPTO_JOB_QUEUING == STD_ON )
        }
#endif
#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
    }
#endif
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_09();
    return Status;
}

/**
* @brief    CRYPTO driver main function.
* @details  If asynchronous job processing is configured and there are job queues, the function is called cyclically to process queued jobs.
*
* @param[in]       None.
* @param[in,out]   None.
* @param[out]      None.
*
* @return          void
*
* @api
*/
/* [SWS_Crypto_00029] */
/* [SWS_Crypto_91012] */
/* PRQA S 1503,2200,2212++ */
CRYPTO_TEXT_SECTION void Crypto_MainFunction(void)
{
#if CRYPTO_JOB_QUEUING == STD_ON
    uint32         u32CoreId;

    u32CoreId = Crypto_GetCoreID();
    /* [SWS_Crypto_00014] */
    MCAL_DATA_SYNC_BARRIER();
    MCAL_DATA_MEMORY_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();

    if (Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_DriverStatus == CRYPTO_DRIVER_IDLE)
    {
        /* The CDO is IDLE and the queue is not empty */
        if (NULL_PTR != Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[0UL])
        {
            Crypto_aCoreCtx[u32CoreId].pMcalInitedCtx->Crypto_StoredJobPtr = Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[0UL];
            /* Remove the job from the queue */
            Crypto_RemovedJobFromQueue(Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobQueue[0UL]);
            /* Store in local variable the task to do (START UPDATE FINISH). */
            Crypto_PrepareTaskForJob();

            /* We have at least an UPDATE, input pointers are valid and to be processed */
            /* [SWS_Crypto_00031] */
            Crypto_aCoreCtx[u32CoreId].pMcalUninitedCtx->Crypto_JobProcessingTaskStatus = (Std_ReturnType) E_OK;
            Crypto_ScheduleJob();

        }
    }
#endif /* CRYPTO_JOB_QUEUING == STD_ON */
}
/* PRQA S 1503,2200,2212-- */

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"
#ifdef __cplusplus
}
#endif
/** @} */

// clang-format on
