/**
*   @file    EthSwt.c
*   @version 1.5.1

*   @brief   AUTOSAR EthSwt - driver API implemention.
*   @details This file contains the implementation of EthSwt driver API.
*
*   @addtogroup ETHSWT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETHSWT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2025 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.3.0       06/07/2025    QXW0085       N/A          EthSwt Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif



/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthSwt.h"





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
void EthSwt_EthTxAdaptBufferLength(uint16* LengthPtr)
{
    /* Empty stub function */
    (void)LengthPtr;
}

Std_ReturnType EthSwt_EthTxPrepareFrame
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx,
    uint8** DataPtr,
    uint16* LengthPtr
)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)BufIdx;
    (void)DataPtr;
    (void)LengthPtr;
    return E_OK;
}

Std_ReturnType EthSwt_EthTxProcessFrame
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx,
    uint8** DataPtr,
    uint16* LengthPtr
)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)BufIdx;
    (void)DataPtr;
    (void)LengthPtr;
    return E_OK;
}

Std_ReturnType EthSwt_EthTxFinishedIndication
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx
)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)BufIdx;
    return E_OK;
}

Std_ReturnType EthSwt_EthRxProcessFrame
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx,
    uint8** DataPtr,
    uint16* LengthPtr,
    boolean* IsMgmtFrameOnlyPtr
)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)BufIdx;
    (void)DataPtr;
    (void)LengthPtr;
    (void)IsMgmtFrameOnlyPtr;
    return E_OK;
}

Std_ReturnType EthSwt_EthRxFinishedIndication
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx
)
{
    /* Empty stub function */
    (void)CtrlIdx;
    (void)BufIdx;
    return E_OK;
}
/* PRQA S 3119 -- */

#ifdef __cplusplus
}
#endif


/** @}*/

