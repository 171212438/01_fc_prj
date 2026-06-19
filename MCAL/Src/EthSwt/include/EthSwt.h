/**
*   @file    EthSwt.h
*   @implements      EthSwt.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR EthSwt - driver API and definition header file.
*   @details This file contains the implementation of EthSwt API and definition.
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

#ifndef ETHSWT_H
#define ETHSWT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_GeneralTypes.h"


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/**
* @brief    Services defined in AUROSAR EthernetSwitch module.
*/

void EthSwt_EthTxAdaptBufferLength(uint16* LengthPtr);

Std_ReturnType EthSwt_EthTxPrepareFrame
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx,
    uint8** DataPtr,
    uint16* LengthPtr
);

Std_ReturnType EthSwt_EthTxProcessFrame
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx,
    uint8** DataPtr,
    uint16* LengthPtr
);

Std_ReturnType EthSwt_EthTxFinishedIndication
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx
);

Std_ReturnType EthSwt_EthRxProcessFrame
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx,
    uint8** DataPtr,
    uint16* LengthPtr,
    boolean* IsMgmtFrameOnlyPtr
);

Std_ReturnType EthSwt_EthRxFinishedIndication
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx
);

#ifdef __cplusplus
}
#endif

#endif /*ETHSWT_H*/

/** @} */
