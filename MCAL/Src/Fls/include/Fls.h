/**
 *   @file    Fls.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
 *   @details Include all external API declarations and definitions of all pre-compile parameters
 *
 *   @addtogroup Fls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fls
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
*   0.1.0       20/06/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/
#ifndef FLS_H
#define FLS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
                                         INCLUDE FILES
=================================================================================================*/
#include "Fls_Cfg.h"
#include "Std_Types.h"
#include "Fls_Types.h"

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/* AUTOSAR module instance identification */
#define FLS_INSTANCE_ID           0U

/**
 * @brief          Development error codes (passed to DET).
 * @implements     DETERRORCODE_enumeration
 *
 * SWS_Fls_00004
 */
#define FLS_E_PARAM_CONFIG        0x01U /* API service called with wrong parameter */
#define FLS_E_PARAM_ADDRESS       0x02U
#define FLS_E_PARAM_LENGTH        0x03U
#define FLS_E_PARAM_DATA          0x04U
#define FLS_E_UNINIT              0x05U /* API service called without module initialization */
#define FLS_E_BUSY                0x06U /* API service called while driver still busy */

/**
 * @brief          Runtime error codes (passed to DET).
 *
 */
/* [SWS_Fls_91002 */
#define FLS_E_ERASE_FAILED        0x01U /* Flash erase failed (HW) */
#define FLS_E_WRITE_FAILED        0x02U /* Flash write failed (HW) */
#define FLS_E_READ_FAILED         0x03U /* Flash read failed (HW) */
#define FLS_E_COMPARE_FAILED      0x04U /* Flash compare failed (HW) */
#define FLS_E_UNEXPECTED_FLASH_ID 0x05U /* Expected hardware ID not matched */
/* [SWS_Fls_91001 */
#define FLS_E_VERIFY_ERASE_FAILED 0x07U /* Erase verification (blank check) failed */
#define FLS_E_VERIFY_WRITE_FAILED 0x08U /* Write verification (compare) failed */
#define FLS_E_TIMEOUT             0x09U /* Timeout exceeded */
#define FLS_E_PARAM_POINTER       0x0AU /* NULL_PTR passed */

/**
 * @brief          All service IDs (passed to DET).
 * @implements     SERVICEIDs_enumeration
 */
#define FLS_INIT_ID               0x00U
#define FLS_ERASE_ID              0x01U
#define FLS_WRITE_ID              0x02U
#define FLS_CANCEL_ID             0x03U
#define FLS_GETSTATUS_ID          0x04U
#define FLS_GETJOBRESULT_ID       0x05U
#define FLS_MAINFUNCTION_ID       0x06U
#define FLS_READ_ID               0x07U
#define FLS_COMPARE_ID            0x08U
#define FLS_SETMODE_ID            0x09U
#define FLS_BLANK_CHECK_ID        0x0aU
#define FLS_GETVERSIONINFO_ID     0x10U

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define FLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"
/**
 * @brief Index of flash sector currently processed by a job
 * @details Used by all types of job
 */
extern volatile Fls_SectorIndexType Fls_u32JobSectorIt;
/**
    @brief Result of last flash hardware job
*/
extern volatile MemIf_JobResultType Fls_eLLDJobResult;
/**
    @brief Type of current flash hardware job - used for asynchronous operating mode.
*/
extern Fls_LLDJobType Fls_eLLDJob;
#define FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"

#define FLS_START_SEC_VAR_INIT_8
#include "Fls_MemMap.h"

#define FLS_STOP_SEC_VAR_INIT_8
#include "Fls_MemMap.h"
/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

FLS_TEXT_SECTION void Fls_Init(const Fls_ConfigType *pConfigPtr);

FLS_TEXT_SECTION Std_ReturnType Fls_Erase(Fls_AddressType u32TargetAddress, Fls_LengthType u32Length);

FLS_TEXT_SECTION Std_ReturnType Fls_Write(Fls_AddressType u32TargetAddress,
                                          const uint8    *pSourceAddressPtr,
                                          Fls_LengthType  u32Length);

FLS_TEXT_SECTION Std_ReturnType Fls_Read(Fls_AddressType u32SourceAddress,
                                         uint8          *pTargetAddressPtr,
                                         Fls_LengthType  u32Length);

#if (FLS_CANCEL_API == STD_ON)
FLS_TEXT_SECTION void Fls_Cancel(void);
#endif /* FLS_CANCEL_API == STD_ON */

#if (FLS_GET_STATUS_API == STD_ON)
FLS_TEXT_SECTION MemIf_StatusType Fls_GetStatus(void);
#endif /* FLS_GET_STATUS_API == STD_ON */

#if (FLS_GET_JOB_RESULT_API == STD_ON)
FLS_TEXT_SECTION MemIf_JobResultType Fls_GetJobResult(void);
#endif /* FLS_GET_JOB_RESULT_API == STD_ON */

#if (FLS_COMPARE_API == STD_ON)
FLS_TEXT_SECTION Std_ReturnType Fls_Compare(Fls_AddressType u32SourceAddress,
                                            const uint8    *pTargetAddressPtr,
                                            Fls_LengthType  u32Length);
#endif /* FLS_COMPARE_API == STD_ON */

#if (FLS_BLANK_CHECK_API == STD_ON)
FLS_TEXT_SECTION Std_ReturnType Fls_BlankCheck(Fls_AddressType u32TargetAddress,
                                               Fls_LengthType  u32Length);
#endif /* FLS_BLANK_CHECK_API == STD_ON */

#if (FLS_SET_MODE_API == STD_ON)
FLS_TEXT_SECTION void Fls_SetMode(MemIf_ModeType eMode);
#endif /* FLS_SET_MODE_API == STD_ON */

#if (FLS_VERSION_INFO_API == STD_ON)
FLS_TEXT_SECTION void Fls_GetVersionInfo(Std_VersionInfoType *pVersionInfoPtr);
#endif /* FLS_VERSION_INFO_API == STD_ON */

FLS_TEXT_SECTION void Fls_MainFunction(void);

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* FLS_H */

/** @} */
