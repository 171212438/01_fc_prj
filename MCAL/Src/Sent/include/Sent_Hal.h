/**
*   @file    Sent_Hal.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Sent - Sent driver Hal layer header file.
*   @details SENT driver hardware layer header file.
*
*   @addtogroup SENT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SENT
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
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       2023/11/01    Flagchip073   N/A          SENT Initial Version
*   0.2.0       2023/11/12    Flagchip073   N/A          SENT Multicore Version
*   0.3.0       2023/11/20    Flagchip073   N/A          Add more SENT comments
*   0.4.0       2023/11/23    Flagchip073   N/A          Add SCHM files for SENT
==================================================================================================*/

#ifndef _SENT_HAL_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define _SENT_HAL_H_
/* PRQA S 603, 602 -- */

#include "CDD_Sent.h"

#define SENT_START_SEC_CODE
#include "Sent_MemMap.h"

/**
 * @brief Initialize the sent.
 *
 * @param[in]    pConfig          The pointer of sent configuration structure
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
void Sent_Hal_Init(const Sent_ConfigType *pConfig, uint8 u8CurrentCore);

#if (SENT_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the sent.
 *
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
void Sent_Hal_DeInit(uint8 u8CurrentCore);
#endif

/**
 * @brief Initialize the sent.
 *
 * @param[in]    u8LogicInstanceID      The sent controller ID
 * @param[in]    u8LogicChannelID       The sent channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 */
Sent_ReturnType SENT_Hal_RequestSPCPulse(const uint8 u8LogicInstanceID, const uint8 u8LogicChannelID, uint8 u8CurrentCore);

/**
 * @brief Main function for polling the fast message.
 *
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 */
void SENT_Hal_MainFunctionFastMsgRead(uint8 u8CurrentCore);

/**
 * @brief Main function for polling the slow message.
 *
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 */
void SENT_Hal_MainFunctionSlowMsgRead(uint8 u8CurrentCore);

#define SENT_STOP_SEC_CODE
#include "Sent_MemMap.h"

/** @}*/

#endif /* _SENT_HAL_H_ */
