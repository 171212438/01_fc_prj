/**
 *   @file    Csm.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Csm - Pre-Compile configurations for Csm driver.
 *   @details Pre-Compile configuration file for Csm driver.
 *
 *   @addtogroup Csm
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

#include "Crypto_Cfg.h"
#if (CRYPTO_USER_ASYNC_CB_NOTIF_ENABLE == STD_OFF)
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

#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

CRYPTO_TEXT_SECTION void Csm_CallbackNotification(const Crypto_JobType *job, Crypto_ResultType result)  //PRQA S 3206
{
    (void)job;
    (void)result;
}

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif
/** @} */

// clang-format on
