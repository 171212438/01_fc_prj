/**
*   @file    Fls_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver
*   @details Definitions of all pre-compile configuration parameters
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

#ifndef FLS_CFG_H
#define FLS_CFG_H

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Mcal.h"
#include "MemIf_Types.h"
#include "Fls_Types.h"
#include "Fls_Flash_Types.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

#define FLS_CFG_AR_RELEASE_MAJOR_VERSION        4
#define FLS_CFG_AR_RELEASE_MINOR_VERSION        6
#define FLS_CFG_AR_RELEASE_REVISION_VERSION     0
#define FLS_CFG_SW_MAJOR_VERSION                1
#define FLS_CFG_SW_MINOR_VERSION                5
#define FLS_CFG_SW_PATCH_VERSION                1
#define FLS_CFG_VENDOR_ID                       174


/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define FLS_MCU_TYPE_FC7300F4MDS    (STD_ON)

#define FLS_MCU_TYPE_FC7300F4MDD    (STD_OFF)

#define FLS_MCU_TYPE_FC7300F8MDQ    (STD_OFF)

#define FLS_MCU_TYPE_FC7300         (STD_OFF)

#define FLS_MCU_TYPE_FC7240         (STD_OFF)

/* STD_ON: Flash access code loaded on job start / unloaded on job end or error */
#define FLS_AC_LOAD_ON_JOB_START    (STD_OFF)

/* Compile switch to enable and disable the Fls_Cancel function */
#define FLS_CANCEL_API              (STD_ON)

/* Compile switch to enable and disable the Fls_Compare function */
#define FLS_COMPARE_API             (STD_OFF)

/* Compile switch to enable and disable the Fls_BlankCheck function */
#define FLS_BLANK_CHECK_API         (STD_OFF)

/* Pre-processor switch to enable and disable development error detection */
#define FLS_DEV_ERROR_DETECT        (STD_ON)

/* Pre-processor switch to enable and disable runtime error detection */
#define FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS    (STD_OFF)

/* Compile switch to enable and disable the Fls_GetJobResult function */
#define FLS_GET_JOB_RESULT_API      (STD_ON)

/* Compile switch to enable and disable the Fls_GetStatus function */
#define FLS_GET_STATUS_API          (STD_ON)

/* Compile switch to enable and disable the Fls_SetMode function */
#define FLS_SET_MODE_API            (STD_ON)

/* Pre-processor switch to enable / disable the API to use interrupts for erase and write jobs */
#define FLS_USE_INTERRUPTS          (STD_OFF)

/* Pre-processor switch to enable / disable the API to read out the modules version information */
#define FLS_VERSION_INFO_API        (STD_OFF)

/* Pre-processor switch to enable / disable the write verify check */
#define FLS_WRITE_VERIFY_CHECK      (STD_OFF)

/* Pre-processor switch to enable / disable the erase blank check */
#define FLS_ERASE_VERIFY_CHECK       (STD_OFF)

/* Timeout handling enabled */
#define FLS_TIMEOUT_HANDLING        (STD_OFF)

/* Pre-processor switch to disable ECC events for Date flash read access */
#define FLS_DATA_ERROR_SUPRESSION   (STD_OFF)

/* Number of bytes in RAM needed for the erase flash access code */
#define FLS_AC_SIZE_ERASE           (0U)

/* Number of bytes in RAM needed for the write flash access code */
#define FLS_AC_SIZE_WRITE           (0U)

/* The contents of an erased flash memory cell */
#define FLS_ERASED_VALUE            (0xffffffffU)

/* Fls Driver Index */
#define FLS_DRIVER_INDEX            (0U)


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          Fls Config Type
* @details        Fls module initialization data structure
* @implements     Fls_ConfigType_typedef
* 
* SWS_Fls_00368
*/
typedef struct
{
    /**
    * @brief pointer to job end notification function
    */
    /* SWS_Fls_00109 */
    Fls_JobEndNotificationPtrType jobEndNotificationPtr;
    /**
    * @brief pointer to job error notification function
    */
    /* SWS_Fls_00109 */
    Fls_JobErrorNotificationPtrType jobErrorNotificationPtr;
    /**
    * @brief default FLS device mode after initialization (MEMIF_MODE_FAST, MEMIF_MODE_SLOW)
    */
    MemIf_ModeType eDefaultMode;
    /**
    * @brief max number of bytes to read in one cycle of Fls_MainFunction (fast mode)
    */
    Fls_LengthType u32MaxReadFastMode;
    /**
    * @brief max number of bytes to read in one cycle of  Fls_MainFunction (normal mode)
    */
    Fls_LengthType u32MaxReadNormalMode;
    /**
    * @brief max number of bytes to write in one cycle of Fls_MainFunction (fast mode)
    */
    Fls_LengthType u32MaxWriteFastMode;
    /**
    * @brief max number of bytes to write in one cycle of  Fls_MainFunction (normal mode)
    */
    Fls_LengthType u32MaxWriteNormalMode;
    /**
    * @brief total data flash size
    */
    Fls_LengthType u32TotalSize;

} Fls_ConfigType;


/*==================================================================================================
                                 GLOBAL CONSTANT DECLARATIONS
==================================================================================================*/
#define D_FLASH_BASE_ADDR         0x4000000U
#define D_FLASH_SECTOR_SIZE       0x800U
#define D_FLASH_PAGE_SIZE         0x8U
#define D_FLASH_MAX_WRITE_SIZE    0x80U

#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"

#define FLS_PRECOMPILE_SUPPORT
/* Declaration of pre-compile configuration set structure */

extern const Fls_ConfigType Fls_Config;

#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* FLS_CFG_H */

/** @} */
