/**
*     @file    CDD_TrgSel.h
*
*     @version 1.5.1
*
*     @brief   AUTOSAR TrgSel - TRGSEL driver header file.
*     @details TRGSEL driver header file, containing the Autosar API specification and other variables
*              and functions that are exported by the TRGSEL driver.
*
*     @addtogroup TRGSEL
*     @{
*/
/*==================================================================================================
*   PERIPHERAL           : Trgsel
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
*
*     Copyright 2020-2023 Flagchip Semiconductor, Inc.
*     All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       17/09/2022    QXW0087       N/A          Trgsel Initial Version
*   0.2.0       15/03/2023    QXW0087       N/A          Refactor of Trgsel Driver
*   0.3.0       12/10/2023    QXW0103       N/A          Add Multicore Support，Delete Unused Drivers
*   0.4.0       13/11/2023    QXW0103       N/A          Fix Bugs, Add Default config
*   0.5.0       16/01/2024    QXW0103       N/A          Fix Bugs, Optimize Code
*   0.6.0       18/03/2024    QXW0103       N/A          Add Support For FC7240
==================================================================================================*/

#ifndef CDD_TRGSEL_H
#define CDD_TRGSEL_H

#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "Std_Types.h"
#include "CDD_TrgSel_Cfg.h"
#include "TrgSel_Types.h"
#include "Common_Cfg.h"
#include "TrgSel_Version.h"

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/


/**
* @brief   API service used without module initialization
*
*
*/
#define TRGSEL_E_UNINIT_U8                       ((uint8)0x0C)

/**
* @brief   API service called when the TrgSel driver and the Hardware
*          are already initialized
*
*
*/
#define TRGSEL_E_ALREADY_INITIALIZED_U8          ((uint8)0x0D)

/**
* @brief   API TrgSel_GetVersionInfo is called and the parameter versioninfo is is invalid
*          ( e.g. NULL )
*
*
*/
#define TRGSEL_E_PARAM_VINFO_U8                  ((uint8)0x0F)

/**
* @brief   API TrgSel_Init service called with wrong parameter
*
*
*/
#define TRGSEL_E_INIT_FAILED_U8                  ((uint8)0x13U)


/**
* @brief API service ID for TrgSel_GetVersionInfo function
* @details Parameters used when raising an error/exception
*/
#define TRGSEL_GETVERSIONINFO_ID_U8              ((uint8)0x17U)


/**
* @brief   API TrgSel_ConfigInput service called with wrong
*                                      parameter regiserIndex
*
*/
#define TRGSEL_E_INVALID_REGINDEX_U8             ((uint8)0x18U)

/**
* @brief   API TrgSel_ConfigInput service called with wrong
*                                      parameter selection
*
*/
#define TRGSEL_E_INVALID_TRGSEL_SEL_U8           ((uint8)0x19U)

/**
* @brief   API TrgSel_ConfigInput service called when
*                                           register is locked
*
*/
#define TRGSEL_E_TRGSEL_LOCKED_U8                ((uint8)0x1BU)

/*
* @brief API service ID for TrgSel_Init function
* @details Parameters used when raising an error/exception
*
*/
#define TRGSEL_INIT_ID_U8                       ((uint8)0x23U)

/**
* @brief API service ID for TrgSel_ConfigInput function
* @details Parameters used when raising an error/exception
*
*/
#define TRGSEL_TRGSEL_CONFIG_ID_U8              ((uint8)0x54U)

/**
* @brief API service ID for TrgSel_TrgMuxConfigLock function
* @details Parameters used when raising an error/exception
*
*/
#define TRGSEL_TRGSEL_CONFIG_LOCK_U8            ((uint8)0x55U)

/**
* @brief API service ID for TrgSel_DeInit function
* @details Parameters used when raising an error/exception
*
*/
#define TRGSEL_DEINIT_ID_U8                     ((uint8)0x56U)


/*==================================================================================================
*                                              ENUMS
==================================================================================================*/


/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
* @brief      TrgSel high level configuration structure
*
*/
typedef struct
{
    /** @brief Pointer to the GTMCFG configuration */
    const TrgSel_OutputRegType    *pTrgSel0_Config;
    const TrgSel_OutputRegType    *pTrgSel1_Config;
    const TrgSel_OutputRegType    *pTrgSel2_Config;
    const TrgSel_OutputRegType    *pTrgSel3_Config;
#ifdef TRGSEL_FC7240_SUPPORT
    const TrgSel_OutputRegType    *pTrgSel4_Config;
    const TrgSel_OutputRegType    *pTrgSel5_Config;
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
    const TrgSel_OutputRegType    *pTrgSel4_Config;
    const TrgSel_OutputRegType    *pTrgSel5_Config;
    const TrgSel_OutputRegType    *pTrgSel6_Config;
    const TrgSel_OutputRegType    *pTrgSel7_Config;
    const TrgSel_OutputRegType    *pTrgSel8_Config;
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))*/
} TrgSel_ConfigType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define TRGSEL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "TrgSel_MemMap.h"


#define TRGSEL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "TrgSel_MemMap.h"

#define TRGSEL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "TrgSel_MemMap.h"
#if (TRGSEL_PRECOMPILE_SUPPORT == STD_OFF)
TRGSEL_DATA_SECTION   TRGSEL_CONF_PB
#else
TRGSEL_DATA_SECTION extern const TrgSel_ConfigType TrgSel_Config;
#endif
#define TRGSEL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "TrgSel_MemMap.h"
#define TRGSEL_START_SEC_VAR_INIT_UNSPECIFIED
#include "TrgSel_MemMap.h"

#define TRGSEL_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "TrgSel_MemMap.h"
/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#define TRGSEL_START_SEC_CODE
#include "TrgSel_MemMap.h"
TRGSEL_TEXT_SECTION void TrgSel_Init(const TrgSel_ConfigType *ConfigPtr);
#if (TRGSEL_DEINIT_API == STD_ON)
TRGSEL_TEXT_SECTION void TrgSel_DeInit(void);
#endif

#if (TRGSEL_GET_VERSION_INFO_API == STD_ON)
TRGSEL_TEXT_SECTION void TrgSel_GetVersionInfo(Std_VersionInfoType *pVersioninfo);
#endif

#if (TRGSEL_CONFIG_TRGSEL_API == STD_ON)
TRGSEL_TEXT_SECTION void TrgSel_ConfigInput(TrgSel_OutputType TriggerOutput, TrgSel_SourceType TriggerSource);
TRGSEL_TEXT_SECTION void TrgSel_EnableLock(TrgSel_OutputType TriggerOutput);
#endif

#define TRGSEL_STOP_SEC_CODE
#include "TrgSel_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif  /* TRGSEL_H */
/** @} */

