/**
 *   @file    Crypto_Hsm.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crypto - CRYPTO SAR IP header file.
 *   @details CRYPTO hardware driver API.
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

#ifndef CRYPTO_HSM_H
#define CRYPTO_HSM_H

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

typedef struct {
    HSM_Ln_RtCtxType    tHsmDrvCtx;
    uint32              u32CoreHsmCtxLocked;
} Crypto_HsmRuntimeType;

CRYPTO_TEXT_SECTION uint32         Crypto_Hsm_FinishCheck(void);
CRYPTO_TEXT_SECTION HSM_StatusType Crypto_SendCmdSync(HSM_CmdType *ptCmd);
CRYPTO_TEXT_SECTION void           Crypto_LnAlgorithmStopCb(void *pLnCtx, HSM_BoolType bErrorHappen, HSM_StatusType eRet);
CRYPTO_TEXT_SECTION HSM_StatusType Crypto_SendCommandCb(HSM_CmdType *ptCmd);
CRYPTO_TEXT_SECTION HSM_StatusType Crypto_GetAckStatCb(void);
CRYPTO_TEXT_SECTION HSM_StatusType Crypto_CancelCmdCb(void);
CRYPTO_TEXT_SECTION HSM_StatusType Crypto_SendCmdSync(HSM_CmdType *ptCmd);
CRYPTO_TEXT_SECTION Std_ReturnType Crypto_SetRuntimeBuffer(void *pRuntime);



#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CRYPTO_MBOX_LLD_H */

/** @} */

// clang-format on
