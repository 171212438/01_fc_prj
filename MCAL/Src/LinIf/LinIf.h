/**
 *   @file    Linif.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR LinIf - AUTOSAR LinIf module interface.
 *   @details AUTOSAR LinIf module interface.
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

#ifndef LIN_IF_H
#define LIN_IF_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "ComStack_Types.h"
#include "Lin_GeneralTypes.h"
#include "EcuM.h"

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define LINIF_WAKEUP_SUPPORT (STD_ON)
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
Std_ReturnType LinIf_CheckWakeup(EcuM_WakeupSourceType WakeupSource);

Std_ReturnType LinIf_HeaderIndication(NetworkHandleType Channel, Lin_PduType *PduPtr);

void LinIf_RxIndication(NetworkHandleType Channel, uint8 *Lin_SduPtr);

void LinIf_TxConfirmation(NetworkHandleType Channel);

void LinIf_LinErrorIndication(NetworkHandleType Channel, Lin_SlaveErrorType ErrorStatus);

#ifdef __cplusplus
}
#endif

#endif /* LIN_IF_H */

/** @} */
