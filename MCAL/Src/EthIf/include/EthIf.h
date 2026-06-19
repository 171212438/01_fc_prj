/**
*   @file    EthIf.h
*   @implements      EthIf.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - driver API and definition header file.
*   @details This file contains the implementation of EthIf API and definition.
*
*   @addtogroup ETHIF
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETH
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
*   0.1.0       10/07/2023    QXW0085       N/A          EthIf callback Initial
Version
*   0.2.0       27/09/2023    QXW0085       N/A          N/A
*   0.3.0       20/10/2023    QXW0085       N/A          N/A
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
==================================================================================================*/

#ifndef ETHIF_H
#define ETHIF_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_GeneralTypes.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/**
 * @brief    Services defined in AUROSAR EthernetInterface module.
 */

void EthIf_RxIndication(uint8               CtrlIdx,
                        Eth_FrameType       FrameType,
                        boolean             IsBroadcast,
                        const uint8        *PhysAddrPtr,
                        const Eth_DataType *DataPtr,
                        uint16              LenByte);

void EthIf_TxConfirmation(uint8 CtrlIdx, Eth_BufIdxType BufIdx, Std_ReturnType Result);

void EthIf_CtrlModeIndication(uint8 CtrlIdx, Eth_ModeType CtrlMode);

void EthIf_TrcvModeIndication(uint8 TrcvIdx, Eth_ModeType TrcvMode);

void EthIf_SleepIndication(uint8 TrcvIdx);

#ifdef __cplusplus
}
#endif

#endif /*ETHIF_H*/

/** @} */
