/**
 *   @file    Rte_Csm_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Csm - RTE CSM Types header file.
 *   @details This file contains Crypto type defines.
 *
 *   @addtogroup Crypto
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

#ifndef RTE_CSM_TYPES_H
#define RTE_CSM_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS - AUTOSAR
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS - NON-AUTOSAR
==================================================================================================*/

/*==================================================================================================
                                             CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/**
* @brief   Enumeration which operation shall be performed.
* @details This enumeration is constructed from a bit mask, where the first bit indicates "Start", the second "Update" and the third "Finish".
*/
typedef enum {
    /**@details Operation Mode is "Start". The job's state shall be reset, i.e. previous input data and intermediate results shall be deleted. */
    CRYPTO_OPERATIONMODE_START = 0x01U,
    /**@details Operation Mode is "Update". Used to calculate intermediate results. */
    CRYPTO_OPERATIONMODE_UPDATE = 0x02U,
    /**@details Operation Mode is "Stream Start". Mixture of "Start" and "Update". Used for streaming.*/
    CRYPTO_OPERATIONMODE_STREAMSTART = 0x03U,
    /**@details Operation Mode is "Finish". The calculations shall be finalized. */
    CRYPTO_OPERATIONMODE_FINISH = 0x04U,
    /**@details Operation Mode is "Single Call". Mixture of "Start", "Update" and "Finish".*/
    CRYPTO_OPERATIONMODE_SINGLECALL = 0x07U,
    /**@details Operation mode is "Save workspace context". Context data shall be provided by the crypto driver to the application". */
    CRYPTO_OPERATIONMODE_SAVE_CONTEXT = 0x08U,
     /**@details Operation mode is "Restore workspace context". Application provides the context data that was previously stored and the crypto driver shall restore the internal workspace. */
    CRYPTO_OPERATIONMODE_RESTORE_CONTEXT = 0x10U
} Crypto_OperationModeType;

/**
* @brief   Enumeration of the result type of verification operations..
*/
typedef enum {
    /**@details The result of the verification is "true",
        i.e. the two compared elements are identical. This return code shall be given as value "0" */
    CRYPTO_E_VER_OK = 0x00U,
    /**@details The result of the verification is "false",
        i.e. the two compared elements are not identical. This return code shall be given as value "1". */
    CRYPTO_E_VER_NOT_OK = 0x01U
} Crypto_VerifyResultType;

/**
* @brief   Enumeration of the status type of key .
*/
typedef enum {
    /**@details The status of the key is invalid */
    CRYPTO_KEYSTATUS_INVALID = 0x00U,
    /**@details The status of the key is valid */
    CRYPTO_KEYSTATUS_VALID = 0x01U
} Crypto_KeyStatusType;

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                      GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* #ifndef RTE_CSM_TYPES_H */
/** @} */

// clang-format on
