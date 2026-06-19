/**
*   @file    Pfls_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Pfls - AUTOSAR Module Flash Driver
*   @details Definitions of all pre-compile configuration parameters
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
*   0.1.0       20/06/2023    QXW0054       N/A          Pfls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Pfls increases hardware operation mutex
==================================================================================================*/

#ifndef PFLS_CFG_H
#define PFLS_CFG_H

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Mcal.h"
#include "MemIf_Types.h"
#include "Pfls_Types.h"
#include "Pfls_Flash_Types.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

#define PFLS_CFG_AR_RELEASE_MAJOR_VERSION        4
#define PFLS_CFG_AR_RELEASE_MINOR_VERSION        6
#define PFLS_CFG_AR_RELEASE_REVISION_VERSION     0
#define PFLS_CFG_SW_MAJOR_VERSION                1
#define PFLS_CFG_SW_MINOR_VERSION                5
#define PFLS_CFG_SW_PATCH_VERSION                1
#define PFLS_CFG_VENDOR_ID                       174


/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define PFLS_MCU_TYPE_FC7300F4MDS    (STD_OFF)

#define PFLS_MCU_TYPE_FC7300F4MDD    (STD_OFF)

#define PFLS_MCU_TYPE_FC7300F8MDQ    (STD_OFF)

#define PFLS_MCU_TYPE_FC7300         (STD_ON)

#define PFLS_MCU_TYPE_FC7240         (STD_OFF)

/* Compile switch to enable and disable the Pfls_Cancel function */
#define PFLS_CANCEL_API              (STD_ON)

/* Compile switch to enable and disable the Pfls_Compare function */
#define PFLS_COMPARE_API             (STD_OFF)

/* Compile switch to enable and disable the Pfls_BlankCheck function */
#define PFLS_BLANK_CHECK_API         (STD_OFF)

/* Pre-processor switch to enable and disable development error detection */
#define PFLS_DEV_ERROR_DETECT        (STD_ON)

/* Pre-processor switch to enable and disable runtime error detection */
#define PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS    (STD_OFF)

/* Compile switch to enable and disable the Pfls_GetJobResult function */
#define PFLS_GET_JOB_RESULT_API      (STD_ON)

/* Compile switch to enable and disable the Pfls_GetStatus function */
#define PFLS_GET_STATUS_API          (STD_ON)

/* Compile switch to enable and disable the Pfls_SetMode function */
#define PFLS_SET_MODE_API            (STD_ON)

/* Pre-processor switch to enable / disable the API to read out the modules version information */
#define PFLS_VERSION_INFO_API        (STD_OFF)

/* Pre-processor switch to enable / disable the write verify check */
#define PFLS_WRITE_VERIFY_CHECK      (STD_OFF)

/* Pre-processor switch to enable / disable the erase blank check */
#define PFLS_ERASE_VERIFY_CHECK       (STD_OFF)

/* Timeout handling enabled */
#define PFLS_TIMEOUT_HANDLING        (STD_OFF)

/* Pre-processor switch to disable ECC events for Date flash read access */
#define PFLS_DATA_ERROR_SUPRESSION   (STD_OFF)

/* The contents of an erased flash memory cell */
#define PFLS_ERASED_VALUE            (0xffffffffU)

/* Pfls Driver Index */
#define PFLS_DRIVER_INDEX            (0U)


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          Pfls Config Type
* @details        Pfls module initialization data structure
* @implements     Pfls_ConfigType_typedef
* 
* SWS_Pfls_00368
*/
typedef struct
{
    /**
    * @brief pointer to job end notification function
    */
    /* SWS_Pfls_00109 */
    Pfls_JobEndNotificationPtrType jobEndNotificationPtr;
    /**
    * @brief pointer to job error notification function
    */
    /* SWS_Pfls_00109 */
    Pfls_JobErrorNotificationPtrType jobErrorNotificationPtr;
    /**
    * @brief default PFLS device mode after initialization (MEMIF_MODE_FAST, MEMIF_MODE_SLOW)
    */
    MemIf_ModeType eDefaultMode;
    /**
    * @brief max number of bytes to read in one cycle of Pfls_MainFunction (fast mode)
    */
    Pfls_LengthType u32MaxReadFastMode;
    /**
    * @brief max number of bytes to read in one cycle of  Pfls_MainFunction (normal mode)
    */
    Pfls_LengthType u32MaxReadNormalMode;
    /**
    * @brief max number of bytes to write in one cycle of Pfls_MainFunction (fast mode)
    */
    Pfls_LengthType u32MaxWriteFastMode;
    /**
    * @brief max number of bytes to write in one cycle of  Pfls_MainFunction (normal mode)
    */
    Pfls_LengthType u32MaxWriteNormalMode;
    /**
    * @brief total data flash size
    */
    Pfls_LengthType u32TotalSize;

} Pfls_ConfigType;


/*==================================================================================================
                                 GLOBAL CONSTANT DECLARATIONS
==================================================================================================*/
#define P_FLASH_BASE_ADDR         0x1000000U

#define P_FLASH_SECTOR_SIZE       0x2000
#define P_FLASH_PAGE_SIZE         0x10U
#define P_FLASH_MAX_WRITE_SIZE    0x80U

#define PFLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pfls_MemMap.h"

#define PFLS_PRECOMPILE_SUPPORT
/* Declaration of pre-compile configuration set structure */

extern const Pfls_ConfigType Pfls_Config;

#define PFLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* PFLS_CFG_H */

/** @} */
