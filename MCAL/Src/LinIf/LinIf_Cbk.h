/**
 *   @file    LinIf_Cbk.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR LinIf - AUTOSAR LinIf_Cbk module interface.
 *   @details AUTOSAR LinIf_Cbk module interface.
 *            This file contains sample code only. It is not part of the production code deliverables.
 *
 *   @addtogroup LINIF
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : LIN
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
==================================================================================================*/

#ifndef LINIF_CBK_H
#define LINIF_CBK_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                        INCLUDE FILES
==================================================================================================*/
#include "EcuM.h"

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
void LinIf_WakeupConfirmation(EcuM_WakeupSourceType WakeupSource);

void LinIf_LinErrorIndication(NetworkHandleType Channel, Lin_SlaveErrorType ErrorStatus);

Std_ReturnType LinIf_HeaderIndication(NetworkHandleType Channel, Lin_PduType *PduPtr);

void LinIf_RxIndication(NetworkHandleType Channel, uint8 *Lin_SduPtr);

void LinIf_TxConfirmation(NetworkHandleType Channel);

#ifdef __cplusplus
}
#endif

#endif /* LINIF_CBK_H */

/** @} */
