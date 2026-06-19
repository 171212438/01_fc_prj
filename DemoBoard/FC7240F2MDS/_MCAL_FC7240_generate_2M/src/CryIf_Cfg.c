/**
*   @file    CryIf_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR CryIf - IpcIf configuration module interface
*   @details AUTOSAR IpcIf module interface.- Stub Version
*
*   @addtogroup IpcIF_MODULE
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
#include "Std_Types.h"
#include "CryIf_Cfg.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define CRYPTO_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref CryIf_CFG_C_REF_1 MISRA 2004 Required Rule 19.15, Repeated include file
* @violates @ref CryIf_CFG_C_REF_2 MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
*                            before '#include' MemMap.h
*/
#include "Crypto_MemMap.h"

/**
* @brief    List of extracted crypto driver object id 
* @details  For each crypto channel configured, collect and store in this array the crypto driver object id extracted from crypto driver object reference configured
*           This array is sorted in ascending order of crypto channel id configured, ie CryIf_CryptoObjectList_PC[0] contains crypto object id associated to crypto channel id 0
*           If set to 0, it means that reference provided is not found, so it will considered as id out of range by lower layer.
*/
/*Parse channels only if at least one channel has been configured*/

CRYPTO_DATA_SECTION const uint32 CryIf_CryptoObjectList_PC[CRYIF_MAXCHANNELS_CONFIGURED] =
{

    /* Crypto driver object Id associated to Crypto interface cahnnel Id 1 */
    (uint32)1u


,

    /* Crypto driver object Id associated to Crypto interface cahnnel Id 2 */
    (uint32)1u



};




/**
* @brief    List of extracted crypto key id 
* @details  For each crypto interface key configured, collect and store in this array the crypto key id extracted from crypto driver key reference configured
*           This array is sorted in ascending order of crypto interface configured, ie CryIf_CryptoKeyList_PC[0] contains crypto key id associated to crypto interface key id 0...
*           If set to 0, it means that reference provided is not found, so it will considered as id out of range by lower layer.
*/
/* Parse keys only if at least one key has been configured */

CRYPTO_DATA_SECTION const uint32 CryIf_CryptoKeyList_PC[CRYIF_MAXKEY_CONFIGURED] =
{
    /* Crypto Key Id associated to Crypto Interface Key Id 1 */    (uint32)1u
};

 

#define CRYPTO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref CryIf_CFG_C_REF_1 MISRA 2004 Required Rule 19.15, Repeated include file
* @violates @ref CryIf_CFG_C_REF_2 MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
*                            before '#include' MemMap.h
*/
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
           
/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/




#ifdef __cplusplus
}
#endif

/** @} */
