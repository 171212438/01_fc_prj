/**
*   @file    Qdt_Hal.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Qdt - Qdt driver Hal layer header file.
*   @details QDT driver hardware layer header file.
*
*   @addtogroup QDT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : QDT
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
*   0.1.0       2025/03/13    Flagchip073   N/A          QDT Initial Version
==================================================================================================*/

#ifndef _QDT_HAL_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define _QDT_HAL_H_
/* PRQA S 603, 602 -- */

#include "CDD_Qdt.h"

#define QDT_START_SEC_CODE
#include "Qdt_MemMap.h"

/**
 * @brief Initialize the qdt.
 *
 * @param[in]    pConfig          The pointer of qdt configuration structure
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
void QDT_Hal_Init(const QDT_ConfigType *pConfig, uint8 u8CurrentCore);

#if (QDT_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the qdt.
 *
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
void QDT_Hal_DeInit(uint8 u8CurrentCore);
#endif

/**
 * @brief Re-Start the measure.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_ReStartMeasurement(const uint8 u8LogicInstanceID, const uint8 u8LogicChannelID, uint8 u8CurrentCore);

/**
 * @brief Get the channel flag.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pSet                   The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetChannelFlag(const uint8 u8LogicInstanceID, const uint8 u8LogicChannelID, boolean *pSet, uint8 u8CurrentCore);

/**
 * @brief Clear the channel flag.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_ClearChannelFlag(const uint8 u8LogicInstanceID, const uint8 u8LogicChannelID, uint8 u8CurrentCore);

/**
 * @brief Get the channel flag.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetEdgeNumber(const uint8 u8LogicInstanceID, const uint8 u8LogicChannelID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the CV value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetCV(const uint8 u8LogicInstanceID, const uint8 u8LogicChannelID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the REVCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetREVCNT(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the REVCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetREVCNT_HOLD(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the POSCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetPOSCNT(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Reset the POS counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSCNT             The pointer of getting the POS counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType QDT_Hal_ResetPOSCNT(const uint8 u8LogicInstanceID, uint8 u8CurrentCore);

/**
 * @brief Get the POSCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetPOSCNT_HOLD(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the POSDCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetPOSDCNT(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the POSDCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetPOSDCNT_HOLD(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the LECNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetLECNT(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the LECNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetLECNT_HOLD(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the POSDTMRCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetPOSDTMRCNT(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the POSDTMRCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetPOSDTMRCNT_HOLD(const uint8 u8LogicInstanceID, uint32 *pValue, uint8 u8CurrentCore);

/**
 * @brief Get the speed value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pSpeed                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_ReturnType QDT_Hal_GetSpeed(const uint8 u8LogicInstanceID, float32 *pSpeed, uint8 u8CurrentCore);



#define QDT_STOP_SEC_CODE
#include "Qdt_MemMap.h"

/** @}*/

#endif /* _QDT_HAL_H_ */
