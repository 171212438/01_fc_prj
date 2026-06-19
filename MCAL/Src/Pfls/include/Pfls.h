/**
 *   @file    Pfls.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Pfls - AUTOSAR Module Flash Driver.
 *   @details Include all external API declarations and definitions of all pre-compile parameters
 *
 *   @addtogroup Pfls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pfls
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
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
*   1.4.0       09/29/2025    QXW0054       N/A          Pfls Initial Version
==================================================================================================*/
#ifndef PFLS_H
#define PFLS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
                                         INCLUDE FILES
=================================================================================================*/
#include "Pfls_Cfg.h"
#include "Std_Types.h"
#include "Pfls_Types.h"

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/* AUTOSAR module instance identification */
#define PFLS_INSTANCE_ID           0U

/**
 * @brief          Development error codes (passed to DET).
 * @implements     DETERRORCODE_enumeration
 *
 * SWS_Pfls_00004
 */
#define PFLS_E_PARAM_CONFIG        0x01U /* API service called with wrong parameter */
#define PFLS_E_PARAM_ADDRESS       0x02U
#define PFLS_E_PARAM_LENGTH        0x03U
#define PFLS_E_PARAM_DATA          0x04U
#define PFLS_E_UNINIT              0x05U /* API service called without module initialization */
#define PFLS_E_BUSY                0x06U /* API service called while driver still busy */

/**
 * @brief          Runtime error codes (passed to DET).
 *
 */
/* [SWS_Pfls_91002 */
#define PFLS_E_ERASE_FAILED        0x01U /* Flash erase failed (HW) */
#define PFLS_E_WRITE_FAILED        0x02U /* Flash write failed (HW) */
#define PFLS_E_READ_FAILED         0x03U /* Flash read failed (HW) */
#define PFLS_E_COMPARE_FAILED      0x04U /* Flash compare failed (HW) */
#define PFLS_E_UNEXPECTED_FLASH_ID 0x05U /* Expected hardware ID not matched */
/* [SWS_Pfls_91001 */
#define PFLS_E_VERIFY_ERASE_FAILED 0x07U /* Erase verification (blank check) failed */
#define PFLS_E_VERIFY_WRITE_FAILED 0x08U /* Write verification (compare) failed */
#define PFLS_E_TIMEOUT             0x09U /* Timeout exceeded */
#define PFLS_E_PARAM_POINTER       0x0AU /* NULL_PTR passed */

/**
 * @brief          All service IDs (passed to DET).
 * @implements     SERVICEIDs_enumeration
 */
#define PFLS_INIT_ID               0x00U
#define PFLS_ERASE_ID              0x01U
#define PFLS_WRITE_ID              0x02U
#define PFLS_CANCEL_ID             0x03U
#define PFLS_GETSTATUS_ID          0x04U
#define PFLS_GETJOBRESULT_ID       0x05U
#define PFLS_MAINFUNCTION_ID       0x06U
#define PFLS_READ_ID               0x07U
#define PFLS_COMPARE_ID            0x08U
#define PFLS_SETMODE_ID            0x09U
#define PFLS_BLANK_CHECK_ID        0x0aU
#define PFLS_GETVERSIONINFO_ID     0x10U

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define PFLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"
/**
 * @brief Index of flash sector currently processed by a job
 * @details Used by all types of job
 */
extern volatile Pfls_SectorIndexType Pfls_u32JobSectorIt;
/**
    @brief Result of last flash hardware job
*/
extern volatile MemIf_JobResultType Pfls_eLLDJobResult;
/**
    @brief Type of current flash hardware job - used for asynchronous operating mode.
*/
extern Pfls_LLDJobType Pfls_eLLDJob;
#define PFLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"

#define PFLS_START_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"

#define PFLS_STOP_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"
/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

PFLS_TEXT_SECTION void Pfls_Init(const Pfls_ConfigType *pConfigPtr);

PFLS_TEXT_SECTION Std_ReturnType Pfls_Erase(Pfls_AddressType u32TargetAddress,
                                            Pfls_LengthType  u32Length);

PFLS_TEXT_SECTION Std_ReturnType Pfls_Write(Pfls_AddressType u32TargetAddress,
                                            const uint8     *pSourceAddressPtr,
                                            Pfls_LengthType  u32Length);

PFLS_TEXT_SECTION Std_ReturnType Pfls_Read(Pfls_AddressType u32SourceAddress,
                                           uint8           *pTargetAddressPtr,
                                           Pfls_LengthType  u32Length);

#if (PFLS_CANCEL_API == STD_ON)
PFLS_TEXT_SECTION void Pfls_Cancel(void);
#endif /* PFLS_CANCEL_API == STD_ON */

#if (PFLS_GET_STATUS_API == STD_ON)
PFLS_TEXT_SECTION MemIf_StatusType Pfls_GetStatus(void);
#endif /* PFLS_GET_STATUS_API == STD_ON */

#if (PFLS_GET_JOB_RESULT_API == STD_ON)
PFLS_TEXT_SECTION MemIf_JobResultType Pfls_GetJobResult(void);
#endif /* PFLS_GET_JOB_RESULT_API == STD_ON */

#if (PFLS_COMPARE_API == STD_ON)
PFLS_TEXT_SECTION Std_ReturnType Pfls_Compare(Pfls_AddressType u32SourceAddress,
                                              const uint8     *pTargetAddressPtr,
                                              Pfls_LengthType  u32Length);
#endif /* PFLS_COMPARE_API == STD_ON */

#if (PFLS_BLANK_CHECK_API == STD_ON)
PFLS_TEXT_SECTION Std_ReturnType Pfls_BlankCheck(Pfls_AddressType u32TargetAddress,
                                                 Pfls_LengthType  u32Length);
#endif /* PFLS_BLANK_CHECK_API == STD_ON */

#if (PFLS_SET_MODE_API == STD_ON)
PFLS_TEXT_SECTION void Pfls_SetMode(MemIf_ModeType eMode);
#endif /* PFLS_SET_MODE_API == STD_ON */

#if (PFLS_VERSION_INFO_API == STD_ON)
PFLS_TEXT_SECTION void Pfls_GetVersionInfo(Std_VersionInfoType *pVersionInfoPtr);
#endif /* PFLS_VERSION_INFO_API == STD_ON */

PFLS_TEXT_SECTION void Pfls_MainFunction(void);

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* PFLS_H */

/** @} */
