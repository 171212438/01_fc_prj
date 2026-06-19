/**
*   @file    EthIf.c
*   @version 1.5.1

*   @brief   AUTOSAR EthIf - driver API implemention.
*   @details This file contains the implementation of EthIf driver API.
*
*   @addtogroup ETH
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETHIF
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       10/07/2023    QXW0085       N/A          EthIf callback Initial Version
*   0.2.0       27/09/2023    QXW0085       N/A          N/A.
*   0.3.0       20/10/2023    QXW0085       N/A          N/A
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthIf.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/* PRQA S 3119 ++
   3119:This statement has no side-effect - it can be removed.
   1503:The function '%1S' is defined but is not used within this project.
   REASON: These are the stub functions of autosar standard APIs.
*/
void EthIf_RxIndication(uint8               CtrlIdx,
                        Eth_FrameType       FrameType,
                        boolean             IsBroadcast,
                        const uint8        *PhysAddrPtr,
                        const Eth_DataType *DataPtr,
                        uint16              LenByte)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)FrameType;
    (void)IsBroadcast;
    (void)PhysAddrPtr;
    (void)DataPtr;
    (void)LenByte;
}

void EthIf_TxConfirmation(uint8 CtrlIdx, Eth_BufIdxType BufIdx, Std_ReturnType Result)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)BufIdx;
    (void)Result;
}
void EthIf_CtrlModeIndication(uint8 CtrlIdx, Eth_ModeType CtrlMode)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)CtrlMode;
}

void EthIf_TrcvModeIndication(uint8 TrcvIdx, Eth_ModeType TrcvMode)
{
    /* Empty stub function */
    (void)TrcvIdx;
    (void)TrcvMode;
}

void EthIf_SleepIndication(uint8 TrcvIdx)
{
    /* Empty stub function */
    (void)TrcvIdx;
}
/* PRQA S 3119 -- */

#ifdef __cplusplus
}
#endif

/** @}*/
