/**
 *   @file    Sent_Hal.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD SENT - SENT Driver HAL layer source file.
 *   @details Contains functions for accessing SENT from the Sent driver perspective
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

#ifdef __cplusplus
extern "C"
{
#endif

/*==============================================================================================================
*                                        INCLUDE FILES
==============================================================================================================*/
#include "CDD_Sent.h"
#include "CDD_SENT_Cfg.h"
#include "Sent_HWA.h"
#include "Mcal.h"

/*==============================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==============================================================================================================*/

/*==============================================================================================================
*                                       LOCAL MACROS
==============================================================================================================*/

/*==============================================================================================================
*                                      LOCAL CONSTANTS
==============================================================================================================*/

#define SENT_START_SEC_CONST_UNSPECIFIED
#include "Sent_MemMap.h"

SENT_DATA_SECTION static SENT_Type *const aSent_Base[] = SENT_BASE_PTRS;

#define SENT_STOP_SEC_CONST_UNSPECIFIED
#include "Sent_MemMap.h"

#define SENT_START_SEC_CONST_8
#include "Sent_MemMap.h"

#define SENT_STOP_SEC_CONST_8
#include "Sent_MemMap.h"

#define SENT_START_SEC_CONST_32
#include "Sent_MemMap.h"

#define SENT_STOP_SEC_CONST_32
#include "Sent_MemMap.h"

/*==============================================================================================================
*                                      LOCAL VARIABLES
==============================================================================================================*/
#define SENT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

SENT_DATA_SECTION static const Sent_ConfigType *s_pSentHal_pConfigCurrent;

#define SENT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

/*==============================================================================================================
*                                      GLOBAL CONSTANTS
==============================================================================================================*/

/*==============================================================================================================
*                                      GLOBAL VARIABLES
==============================================================================================================*/
#define SENT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

SENT_DATA_SECTION Sent_FastMsgNotifactionType
    aFastMsgNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];

SENT_DATA_SECTION Sent_SlowMsgNotifactionType
    aSlowMsgNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];

SENT_DATA_SECTION Sent_FastErrorNotifactionType
    aFastErrNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];

SENT_DATA_SECTION Sent_SlowErrorNotifactionType
    aSlowErrNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];

#define SENT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

#define SENT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

#define SENT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

/*==============================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==============================================================================================================*/
#define SENT_START_SEC_CODE
#include "Sent_MemMap.h"

SENT_TEXT_SECTION static Sent_ReturnType Sent_AB_GetHwSentChannel(uint8  u8InstanceID,
                                                                  uint8  u8ChannelID,
                                                                  uint8 *pInstanceIndex,
                                                                  uint8 *pChannelIndex);

SENT_TEXT_SECTION static void Sent_LL_SPC_Init(SENT_Type *const          pSent,
                                               const uint8               u8Channel,
                                               const Sent_SpcConfigType *pChannelConfig);

SENT_TEXT_SECTION static void Sent_LL_Channel_DeInit(const uint8                   u8HwInstance,
                                                     const Sent_ChannelConfigType *pChannelConfig);

SENT_TEXT_SECTION static void Sent_ML_Channel_Init(const uint8                   u8HwInstance,
                                                   const Sent_ChannelConfigType *pChannelConfig);

SENT_TEXT_SECTION static void Sent_HL_Instance_Init(const Sent_InstanceConfigType *pInstanceConfig);

SENT_TEXT_SECTION static void Sent_HL_Instance_DeInit(const Sent_InstanceConfigType *pInstanceConfig);

SENT_TEXT_SECTION static void Sent_HL_GetFastMessage(const uint8 u8Instance, const uint8 u8Channel);

SENT_TEXT_SECTION static void Sent_HL_GetSlowMessage(const uint8 u8Instance, const uint8 u8Channel);

/*================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/
/**
 * @brief Get controller physical index from control id and channel id in EB
 *
 * @param[in]    u8InstanceID      The sent controller ID
 * @param[in]    u8ChannelID       The sent channel ID
 * @param[out]   pInstanceIndex    The pointer of sent controller physical index
 * @param[out]   pChannelIndex     The pointer of sent channel physical index
 *
 * @return void
 */
SENT_TEXT_SECTION static Sent_ReturnType Sent_AB_GetHwSentChannel(uint8  u8InstanceID,
                                                                  uint8  u8ChannelID,
                                                                  uint8 *pInstanceIndex,
                                                                  uint8 *pChannelIndex)
{
    uint8                    u8Index1, u8Index2;
    Sent_InstanceConfigType *pSentInstance = NULL_PTR;
    Sent_ReturnType          eRet          = SENT_NOT_OK;

    for (u8Index1 = 0U; u8Index1 < s_pSentHal_pConfigCurrent->u8InstanceCount; u8Index1++)
    {
        if (u8InstanceID ==
            s_pSentHal_pConfigCurrent->pSentInstanceCfg[u8Index1]->u8InstanceLogicIndex)
        {
            pSentInstance = s_pSentHal_pConfigCurrent->pSentInstanceCfg[u8Index1];
            *pInstanceIndex = s_pSentHal_pConfigCurrent->pSentInstanceCfg[u8Index1]->u8InstanceHwIndex;
            for (u8Index2 = 0U; u8Index2 < pSentInstance->u8ChannelCount; u8Index2++)
            {
                if (u8ChannelID == pSentInstance->pSentChannelCfg[u8Index2]->u8ChannelLogicId)
                {
                    *pChannelIndex = pSentInstance->pSentChannelCfg[u8Index2]->u8ChannelHwId;
                    eRet           = SENT_OK;
                    break;
                }
            }
            break;
        }
    }

    return eRet;
}

/**
 * @brief Initialize the SPC mode configuration.
 *
 * @param[in]    pSent             The Pointer of the CAN instance register structure
 * @param[in]    u8ChannelID       The sent channel physical index
 * @param[in]    pChannelConfig    The pointer of sent SPC configuration structure
 *
 * @return void
 */
SENT_TEXT_SECTION static void Sent_LL_SPC_Init(SENT_Type *const          pSent,
                                               const uint8               u8Channel,
                                               const Sent_SpcConfigType *pChannelConfig)
{
    SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_05();
    {
        SENT_HWA_DisableChannelSPCMode(pSent, (uint8)u8Channel);
        SENT_HWA_SetChannelSPCTickBase(pSent,
                                       (uint8)u8Channel,
                                       (SENT_SPCTickType)(pChannelConfig->eSpcTickBase));
        SENT_HWA_SetChannelSPCTriggerMethod(pSent,
                                            (uint8)u8Channel,
                                            (SENT_SPCTriggerType)(pChannelConfig->eSpcTrigger));
        SENT_HWA_SetChannelSPCPulseDelay(pSent, (uint8)u8Channel, pChannelConfig->u8PulseDelay);
        SENT_HWA_SetChannelSPCPulseWidth(pSent, (uint8)u8Channel, pChannelConfig->u8PulseWidth);
        if (TRUE == pChannelConfig->bCalDiagEn)
        {
            SENT_HWA_EnableChannelCalibrationDiag(pSent, (uint8)u8Channel);
        }
        else
        {
            SENT_HWA_DisableChannelCalibrationDiag(pSent, (uint8)u8Channel);
        }
        if (TRUE == pChannelConfig->bSpcModeEn)
        {
            SENT_HWA_EnableChannelSPCMode(pSent, (uint8)u8Channel);
        }
        else
        {
            SENT_HWA_DisableChannelSPCMode(pSent, (uint8)u8Channel);
        }
    }
    SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_05();
}

/**
 * @brief Initialize the SPC mode configuration.
 *
 * @param[in]    pSent             The Pointer of the CAN instance register structure
 * @param[in]    u8ChannelID       The sent channel physical index
 * @param[in]    pChannelConfig    The pointer of sent SPC configuration structure
 *
 * @return void
 */
SENT_TEXT_SECTION static void Sent_LL_Channel_DeInit(const uint8                   u8HwInstance,
                                                     const Sent_ChannelConfigType *pChannelConfig)
{
    uint8      u8Channel;
    SENT_Type *pSent;

    u8Channel = pChannelConfig->u8ChannelHwId;
    pSent     = (SENT_Type *)aSent_Base[u8HwInstance];

    SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_06();
    {
        SENT_HWA_DisableChannelReceive(pSent, u8Channel);
        SENT_HWA_SetChannelCtrlReg(pSent, u8Channel, 0x00000104U);
        SENT_HWA_ClearChannelIntStatus(pSent, u8Channel);
    }
    SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_06();
}

/**
 * @brief Initialize the sent channel configuration.
 *
 * @param[in]    u8HwInstance      The sent controller physical index
 * @param[in]    pChannelConfig    The pointer of sent channel configuration structure
 *
 * @return void
 */
SENT_TEXT_SECTION static void Sent_ML_Channel_Init(const uint8                   u8HwInstance,
                                                   const Sent_ChannelConfigType *pChannelConfig)
{
    uint8      u8Channel;
    SENT_Type *pSent;

    u8Channel = pChannelConfig->u8ChannelHwId;
    pSent     = (SENT_Type *)aSent_Base[u8HwInstance];
    if (TRUE == pChannelConfig->bChannelEn)
    {
        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_02();
        {
            SENT_HWA_DisableChannelReceive(pSent, (uint8)u8Channel);

            SENT_HWA_SetChannelIdleCount(pSent, (uint8)u8Channel, (uint8)pChannelConfig->eIdleCount);
            SENT_HWA_SetChannelDigitalFilterCount(pSent,
                                                  (uint8)u8Channel,
                                                  pChannelConfig->u8DigitalFilterCount);
            SENT_HWA_SetChannelNibbleNumber(pSent,
                                            (uint8)u8Channel,
                                            pChannelConfig->u8DataNibbleNumber);
            SENT_HWA_SetChannelPreScaler(pSent,
                                         (uint8)u8Channel,
                                         (uint16)pChannelConfig->u16TickScaler);
            SENT_HWA_SetChannelNibbleDataMode(
                pSent,
                (uint8)u8Channel,
                (SENT_NibbleDataModeType)(pChannelConfig->eDataNibbleMode));
            SENT_HWA_EnableChannelPausePulse(pSent, (uint8)u8Channel, pChannelConfig->bPausePulseEn);
            SENT_HWA_EnableChannelCompensate(pSent,
                                             (uint8)u8Channel,
                                             pChannelConfig->bTickCompensateEn);
            SENT_HWA_EnableChannelFIFO(pSent,
                                       (uint8)u8Channel,
                                       TRUE == pChannelConfig->bFastMessageFifoEn);
            SENT_HWA_EnableChannelFastMessageAugmentation(pSent,
                                                          (uint8)u8Channel,
                                                          pChannelConfig->bFastMsgCRCAugEn);
            SENT_HWA_EnableChannelFastMessageCRCCheck(pSent,
                                                      (uint8)u8Channel,
                                                      pChannelConfig->bFastMsgCRCCheckEn);
            SENT_HWA_EnableChannelFastMessageCRCWithSC(pSent,
                                                       (uint8)u8Channel,
                                                       pChannelConfig->bFastMsgCRCWithSCEn);
            SENT_HWA_EnableChannelFastMessageDataChange(pSent,
                                                        (uint8)u8Channel,
                                                        pChannelConfig->bFastMsgDataChangeEn);
            SENT_HWA_EnableChannelSlowMessageAugmentation(pSent,
                                                          (uint8)u8Channel,
                                                          pChannelConfig->bSlowMsgCRCAugEn);
            SENT_HWA_EnableChannelAltCRC(pSent, (uint8)u8Channel, pChannelConfig->bUseAlternativeCrc);

            if (SENT_CALIBRATION_PULSE_DIAG_OPTION1 != pChannelConfig->eCalDiagOption)
            {
                SENT_HWA_DisableChannelSPCOption1(pSent, (uint8)u8Channel);
            }
            else
            {
                SENT_HWA_EnableChannelSPCOption1(pSent, (uint8)u8Channel);
            }

            if (SENT_CALIBRATION_VALID_WITHIN_20 == pChannelConfig->eCalValid)
            {
                SENT_HWA_DisableChannelCalValid20To25(pSent, (uint8)u8Channel);
                SENT_HWA_EnableChannelCalValidDiagnostic(pSent, (uint8)u8Channel);
            }
            else if (SENT_CALIBRATION_VALID_FROM_20_TO_25 == pChannelConfig->eCalValid)
            {
                SENT_HWA_EnableChannelCalValid20To25(pSent, (uint8)u8Channel);
                SENT_HWA_EnableChannelCalValidDiagnostic(pSent, (uint8)u8Channel);
            }
            else
            {
                SENT_HWA_DisableChannelCalValid20To25(pSent, (uint8)u8Channel);
                SENT_HWA_DisableChannelCalValidDiagnostic(pSent, (uint8)u8Channel);
            }

            if (NULL_PTR != pChannelConfig->pFastErrNotification)
            {
                SENT_HWA_EnableChannelFastErrorInterrupt(pSent, (uint8)u8Channel);
            }
            else
            {
                SENT_HWA_DisableChannelFastErrorInterrupt(pSent, (uint8)u8Channel);
            }
            aFastErrNotifcation[u8HwInstance][u8Channel] = pChannelConfig->pFastErrNotification;

            if (NULL_PTR != pChannelConfig->pSlowErrNotification)
            {
                SENT_HWA_EnableChannelSlowErrorInterrupt(pSent, (uint8)u8Channel);
            }
            else
            {
                SENT_HWA_DisableChannelSlowErrorInterrupt(pSent, (uint8)u8Channel);
            }
            aSlowErrNotifcation[u8HwInstance][u8Channel] = pChannelConfig->pSlowErrNotification;

            if ((NULL_PTR != pChannelConfig->pFastMsgNotification) &&
                (TRUE == pChannelConfig->bFastInterruptEn))
            {
                SENT_HWA_EnableChannelFastMessageInterrupt(pSent, (uint8)u8Channel);
            }
            else
            {
                SENT_HWA_DisableChannelFastMessageInterrupt(pSent, (uint8)u8Channel);
            }
            aFastMsgNotifcation[u8HwInstance][u8Channel] = pChannelConfig->pFastMsgNotification;

            if ((NULL_PTR != pChannelConfig->pSlowMsgNotification) &&
                (TRUE == pChannelConfig->bSlowInterruptEn))
            {
                SENT_HWA_EnableChannelSlowMessageInterrupt(pSent, (uint8)u8Channel);
            }
            else
            {
                SENT_HWA_DisableChannelSlowMessageInterrupt(pSent, (uint8)u8Channel);
            }
            aSlowMsgNotifcation[u8HwInstance][u8Channel] = pChannelConfig->pSlowMsgNotification;
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_02();

        Sent_LL_SPC_Init(pSent, u8Channel, pChannelConfig->pSpcModeCfg);

        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_03();
        {
            SENT_HWA_EnableChannelReceive(pSent, (uint8)u8Channel);
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_03();
    }
    else
    {
        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_04();
        {
            SENT_HWA_DisableChannelReceive(pSent, (uint8)u8Channel);
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_04();
    }
}

/**
 * @brief Initialize the sent instance configuration.
 *
 * @param[in]    pInstanceConfig    The pointer of sent instance configuration structure
 *
 * @return void
 */
SENT_TEXT_SECTION static void Sent_HL_Instance_Init(const Sent_InstanceConfigType *pInstanceConfig)
{
    uint8      u8Index, u8HwInstance;
    SENT_Type *pSent;

    u8HwInstance = pInstanceConfig->u8InstanceHwIndex;
    pSent        = (SENT_Type *)aSent_Base[u8HwInstance];

    if (TRUE == pInstanceConfig->bControllerEn)
    {
        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_00();
        {
            SENT_HWA_SetGlobalPreScaler(pSent, pInstanceConfig->u8Prescaller);
            SENT_HWA_SetDMAWaterMark(pSent, pInstanceConfig->u8WaterMark);
            if (TRUE == pInstanceConfig->bDebugModeEn)
            {
                SENT_HWA_EnableDebugMode(pSent);
            }
            else
            {
                SENT_HWA_DisableDebugMode(pSent);
            }
            if (TRUE == pInstanceConfig->bAutoClearReadyFlag)
            {
                SENT_HWA_EnableDataOverflowFlagFastClear(pSent);
            }
            else
            {
                SENT_HWA_DisableDataOverflowFlagFastClear(pSent);
            }
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_00();

        for (u8Index = 0U; u8Index < pInstanceConfig->u8ChannelCount; u8Index++)
        {
            Sent_ML_Channel_Init(u8HwInstance, pInstanceConfig->pSentChannelCfg[u8Index]);
        }

        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_01();
        {
            SENT_HWA_EnableGlobal(pSent);
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_01();
    }
    else
    {
        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_01();
        {
            SENT_HWA_DisableGlobal(pSent);
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_01();
    }
}

/**
 * @brief De-Initialize the sent instance configuration.
 *
 * @param[in]    pInstanceConfig    The pointer of sent instance configuration structure
 *
 * @return void
 */
SENT_TEXT_SECTION static void Sent_HL_Instance_DeInit(const Sent_InstanceConfigType *pInstanceConfig)
{
    uint8      u8Index, u8HwInstance;
    SENT_Type *pSent;

    u8HwInstance = pInstanceConfig->u8InstanceHwIndex;
    pSent        = (SENT_Type *)aSent_Base[u8HwInstance];

    for (u8Index = 0U; u8Index < pInstanceConfig->u8ChannelCount; u8Index++)
    {
        Sent_LL_Channel_DeInit(u8HwInstance, pInstanceConfig->pSentChannelCfg[u8Index]);
    }

    SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_05();
    {
        SENT_HWA_DisableGlobal(pSent);
    }
    SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_05();
}

/**
 * @brief Get the sent fast message
 *
 * @param[in]    u8InstanceID      The sent controller ID
 * @param[in]    u8ChannelID       The sent channel ID
 *
 * @return void
 */
SENT_TEXT_SECTION static void Sent_HL_GetFastMessage(const uint8 u8Instance, const uint8 u8Channel)
{
    uint8                    u8DataShift, u8HwInstance, u8HwChannel;
    SENT_Type               *pSent;
    Sent_ReturnType          eRet;
    Sent_FastMessageDataType tMsg = { 0U };

    SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_09();
    {
        eRet = Sent_AB_GetHwSentChannel(u8Instance, u8Channel, &u8HwInstance, &u8HwChannel);
    }
    SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_09();

    if (SENT_OK == eRet)
    {
        pSent = (SENT_Type *)aSent_Base[u8HwInstance];

        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_10();
        {
            if (TRUE == SENT_HWA_GetFastMessageReadyFlag(pSent, u8HwChannel))
            {
                tMsg.u8CRC        = SENT_HWA_GetChannelFastMessageCRCNibble(pSent, u8HwChannel);
                tMsg.u8SC         = SENT_HWA_GetChannelFastMessageStatusNibble(pSent, u8HwChannel);
                tMsg.u32Timestamp = SENT_HWA_GetChannelFastMessageTimeStamp(pSent, u8HwChannel);
                u8DataShift  = (5U - SENT_HWA_GetChannelNibbleNumber(pSent, u8HwChannel)) << 2U;
                tMsg.u32Data = SENT_HWA_GetChannelDataNibble(pSent, u8HwChannel) >>
                               (SENT_CHN_FDATA_DATA6_SHIFT + u8DataShift);
                aFastMsgNotifcation[u8HwInstance][u8HwChannel](&tMsg);
            }
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_10();
    }
}

/**
 * @brief Get the sent slow message
 *
 * @param[in]    u8InstanceID      The sent controller ID
 * @param[in]    u8ChannelID       The sent channel ID
 *
 * @return void
 */
SENT_TEXT_SECTION static void Sent_HL_GetSlowMessage(const uint8 u8Instance, const uint8 u8Channel)
{
    uint8                    u8HwInstance, u8HwChannel;
    SENT_Type               *pSent;
    Sent_ReturnType          eRet;
    Sent_SlowMessageDataType tMsg;

    SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_11();
    {
        eRet = Sent_AB_GetHwSentChannel(u8Instance, u8Channel, &u8HwInstance, &u8HwChannel);
    }
    SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_11();

    if (SENT_OK == eRet)
    {
        pSent = (SENT_Type *)aSent_Base[u8HwInstance];

        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_12();
        {
            if (TRUE == SENT_HWA_GetSlowMessageReadyFlag(pSent, u8HwChannel))
            {
                tMsg.eMsgType =
                    (Sent_SerialMessageType)SENT_HWA_GetChannelSLowMessageType(pSent, u8HwChannel);
                tMsg.u32Timestamp = SENT_HWA_GetChannelSlowMessageTimeStamp(pSent, u8HwChannel);
                if (SENT_SERIAL_MESSAGE_SHORT == tMsg.eMsgType)
                {
                    tMsg.u8CRC   = SENT_HWA_GetChannelBit2CRC(pSent, u8HwChannel) & 0xFU;
                    tMsg.u16Data = SENT_HWA_GetChannelBit2DATA(pSent, u8HwChannel) & 0xFFU;
                    tMsg.u8ID    = (uint8)(SENT_HWA_GetChannelBit2DATA(pSent, u8HwChannel) >> 8U);
                }
                else if (SENT_SERIAL_MESSAGE_ENHANCE_12DATA_8ID == tMsg.eMsgType)
                {
                    tMsg.u8CRC   = SENT_HWA_GetChannelBit2CRC(pSent, u8HwChannel);
                    tMsg.u16Data = SENT_HWA_GetChannelBit2DATA(pSent, u8HwChannel);
                    tMsg.u8ID =
                        (SENT_HWA_GetChannelBit3EnhancedID7_4_OR_ID3_0(pSent, u8HwChannel) << 4U) |
                        SENT_HWA_GetChannelBit3EnhancedID3_0_OR_DATA15_12(pSent, u8HwChannel);
                }
                else if (SENT_SERIAL_MESSAGE_ENHANCE_16DATA_4ID == tMsg.eMsgType)
                {
                    tMsg.u8CRC = SENT_HWA_GetChannelBit2CRC(pSent, u8HwChannel);
                    tMsg.u16Data =
                        ((uint16)SENT_HWA_GetChannelBit3EnhancedID3_0_OR_DATA15_12(pSent, u8HwChannel)
                         << 12U) |
                        SENT_HWA_GetChannelBit2DATA(pSent, u8HwChannel);
                    tMsg.u8ID = SENT_HWA_GetChannelBit3EnhancedID7_4_OR_ID3_0(pSent, u8HwChannel);
                }
                else
                {
                    /* no way to reach here */
                    eRet = SENT_NOT_OK;
                }
                if (SENT_OK == eRet)
                {
                    aSlowMsgNotifcation[u8HwInstance][u8HwChannel](&tMsg);
                }
            }
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_12();
    }
}

/*================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/
/**
 * @brief Initialize the sent.
 *
 * @param[in]    pConfig          The pointer of sent configuration structure
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
SENT_TEXT_SECTION void Sent_Hal_Init(const Sent_ConfigType *pConfig, uint8 u8CurrentCore)
{
    uint8 u8CtrlIndex;

    /* Loop through all Sent controllers configured based SentControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < pConfig->u8InstanceCount; u8CtrlIndex++)
    {
#if (SENT_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == pConfig->Sent_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* SENT_SUPPORT_MULTICORE */
            Sent_HL_Instance_Init(pConfig->pSentInstanceCfg[u8CtrlIndex]);
            s_pSentHal_pConfigCurrent = pConfig;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* SENT_SUPPORT_MULTICORE */
    }
}

#if (SENT_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the sent.
 *
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
SENT_TEXT_SECTION void Sent_Hal_DeInit(uint8 u8CurrentCore)
{
    uint8 u8CtrlIndex;

    /* Loop through all Sent controllers configured based SentControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < s_pSentHal_pConfigCurrent->u8InstanceCount; u8CtrlIndex++)
    {
#if (SENT_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == s_pSentHal_pConfigCurrent->Sent_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* SENT_SUPPORT_MULTICORE */

            Sent_HL_Instance_DeInit(s_pSentHal_pConfigCurrent->pSentInstanceCfg[u8CtrlIndex]);

#if (SENT_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* SENT_SUPPORT_MULTICORE */
    }
    /* s_pSentHal_pConfigCurrent = NULL_PTR; */
}
#endif /* SENT_DEINIT_API */

/**
 * @brief Initialize the sent.
 *
 * @param[in]    u8LogicInstanceID      The sent controller ID
 * @param[in]    u8LogicChannelID       The sent channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 */
SENT_TEXT_SECTION Sent_ReturnType SENT_Hal_RequestSPCPulse(const uint8 u8LogicInstanceID,
                                                           const uint8 u8LogicChannelID,
                                                           uint8       u8CurrentCore)
{
    SENT_Type      *pSent;
    uint8           u8Instance, u8Channel;
    Sent_ReturnType eRet = SENT_NOT_OK;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pSentHal_pConfigCurrent->Sent_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* SENT_SUPPORT_MULTICORE */

        SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_07();
        {
            eRet = Sent_AB_GetHwSentChannel(u8LogicInstanceID,
                                            u8LogicChannelID,
                                            &u8Instance,
                                            &u8Channel);
        }
        SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_07();

        if (eRet == SENT_OK)
        {
            pSent = (SENT_Type *)aSent_Base[u8Instance];

            SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_08();
            {
                SENT_HWA_StartChannelSPC(pSent, u8Channel);
            }
            SchM_Exit_Sent_SENT_EXCLUSIVE_AREA_08();
        }

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* SENT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Main function for polling the fast message.
 *
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 */
SENT_TEXT_SECTION void SENT_Hal_MainFunctionFastMsgRead(uint8 u8CurrentCore)
{
    uint8                    u8CtrlIndex, u8ChannelIndex;
    Sent_InstanceConfigType *pInstanceCfg;

    /* Loop through all Sent controllers configured based SentControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < s_pSentHal_pConfigCurrent->u8InstanceCount; u8CtrlIndex++)
    {
#if (SENT_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == s_pSentHal_pConfigCurrent->Sent_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* SENT_SUPPORT_MULTICORE */
            pInstanceCfg = s_pSentHal_pConfigCurrent->pSentInstanceCfg[u8CtrlIndex];
            for (u8ChannelIndex = 0U; u8ChannelIndex < pInstanceCfg->u8ChannelCount; u8ChannelIndex++)
            {
                if (FALSE == pInstanceCfg->pSentChannelCfg[u8ChannelIndex]->bFastInterruptEn)
                {
                    Sent_HL_GetFastMessage(
                        pInstanceCfg->u8InstanceLogicIndex,
                        pInstanceCfg->pSentChannelCfg[u8ChannelIndex]->u8ChannelLogicId);
                }
            }

#if (SENT_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* SENT_SUPPORT_MULTICORE */
    }
}

/**
 * @brief Main function for polling the slow message.
 *
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 */
SENT_TEXT_SECTION void SENT_Hal_MainFunctionSlowMsgRead(uint8 u8CurrentCore)
{
    uint8                    u8CtrlIndex, u8ChannelIndex;
    Sent_InstanceConfigType *pInstanceCfg;

    /* Loop through all Sent controllers configured based SentControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < s_pSentHal_pConfigCurrent->u8InstanceCount; u8CtrlIndex++)
    {
#if (SENT_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == s_pSentHal_pConfigCurrent->Sent_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* SENT_SUPPORT_MULTICORE */
            pInstanceCfg = s_pSentHal_pConfigCurrent->pSentInstanceCfg[u8CtrlIndex];
            for (u8ChannelIndex = 0U; u8ChannelIndex < pInstanceCfg->u8ChannelCount; u8ChannelIndex++)
            {
                if (FALSE == pInstanceCfg->pSentChannelCfg[u8ChannelIndex]->bSlowInterruptEn)
                {
                    Sent_HL_GetSlowMessage(
                        pInstanceCfg->u8InstanceLogicIndex,
                        pInstanceCfg->pSentChannelCfg[u8ChannelIndex]->u8ChannelLogicId);
                }
            }

#if (SENT_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* SENT_SUPPORT_MULTICORE */
    }
}

#define SENT_STOP_SEC_CODE
#include "Sent_MemMap.h"

#ifdef __cplusplus
}
#endif
