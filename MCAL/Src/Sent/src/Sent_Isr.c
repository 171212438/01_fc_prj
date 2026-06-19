/**
*   @file    Sent_Isr.c
*   @version 1.5.1
*
*   @brief   AUTOSAR CDD SENT - SENT Driver ISR layer source file.
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
/* PRQA S 5087 EOF
 * This attribute syntax is a language extension.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h
 */

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Sent.h"
#include "Sent_HWA.h"
#include "Mcal.h"
#include "CDD_SENT_Cfg.h"
/*==================================================================================================
*                                       SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define SENT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Sent_MemMap.h"
#if ((defined(SENT_INSTANCE0_INT) && (SENT_INSTANCE0_INT == STD_ON)) || \
    (defined(SENT_INSTANCE1_INT) && (SENT_INSTANCE1_INT == STD_ON)))
SENT_DATA_SECTION static SENT_Type* const aSent_Base[] = SENT_BASE_PTRS;
#endif
#define SENT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Sent_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
extern const Sent_ConfigType *Sent_pConfig;

extern Sent_FastMsgNotifactionType aFastMsgNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];

extern Sent_SlowMsgNotifactionType aSlowMsgNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];

extern Sent_FastErrorNotifactionType aFastErrNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];

extern Sent_SlowErrorNotifactionType aSlowErrNotifcation[SENT_INSTANCE_COUNT][SENT_CHANNEL_COUNT];
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define SENT_START_SEC_CODE

/**
* @brief Include Memory mapping specification
*
*/
#include "Sent_MemMap.h"

/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
#if (defined(SENT_INSTANCE0_INT) && (SENT_INSTANCE0_INT == STD_ON))
SENT_TEXT_SECTION ISR(SENT_IsrSENT0_ALL);
#endif

#if (defined(SENT_INSTANCE1_INT) && (SENT_INSTANCE1_INT == STD_ON))
SENT_TEXT_SECTION ISR(SENT_IsrSENT1_ALL);
#endif

#define SENT_STOP_SEC_CODE

/**
* @brief Include Memory mapping specification
*
*/
#include "Sent_MemMap.h"
/*==================================================================================================
*                                      Global FUNCTIONS
==================================================================================================*/
#define SENT_START_SEC_CODE
/**
* @brief Include Memory mapping specification
*
*/
#include "Sent_MemMap.h"

#if ((defined(SENT_INSTANCE0_INT) && (SENT_INSTANCE0_INT == STD_ON)) || \
    (defined(SENT_INSTANCE1_INT) && (SENT_INSTANCE1_INT == STD_ON)))
/**
*   @brief   This function process the interrupt.
*   @details This function process the SENT interrupt
*
*   @param[in] u8Instance        Hardware SENT instance.
*
*
*/
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
SENT_TEXT_SECTION static void Sent_ProcessInterrupt(uint8 u8Instance)
{
    uint8 u8Channel;
    uint32 u32ChannelStatus, u32ChannelSlowStatus, u32ChannelFastStatus;
    SENT_Type *pSent  = aSent_Base[u8Instance];

    for(u8Channel = 0U; u8Channel < SENT_CHANNEL_COUNT; u8Channel++)
    {
        if(TRUE == SENT_HWA_GetChannelReceive(pSent, u8Channel))
        {
            if(TRUE == SENT_HWA_GetFastMessageReadyFlag(pSent, u8Channel))
            {
                SENT_HWA_ClearFastMessageReadyFlag(pSent, u8Channel);
                if(NULL_PTR != aFastMsgNotifcation[u8Instance][u8Channel])
                {
                    uint8 u8DataShift;
                    Sent_FastMessageDataType tFastMsg;

                    tFastMsg.u8CRC  = SENT_HWA_GetChannelFastMessageCRCNibble(pSent, u8Channel);
                    tFastMsg.u8SC = SENT_HWA_GetChannelFastMessageStatusNibble(pSent, u8Channel);
                    tFastMsg.u32Timestamp = SENT_HWA_GetChannelFastMessageTimeStamp(pSent, u8Channel);
                    u8DataShift = (5U - SENT_HWA_GetChannelNibbleNumber(pSent, u8Channel)) << 2U;
                    tFastMsg.u32Data = SENT_HWA_GetChannelDataNibble(pSent, u8Channel) >> (SENT_CHN_FDATA_DATA6_SHIFT + u8DataShift);

                    aFastMsgNotifcation[u8Instance][u8Channel](&tFastMsg);
                }
            }
            if(TRUE == SENT_HWA_GetSlowMessageReadyFlag(pSent, u8Channel))
            {
                SENT_HWA_ClearSlowMessageReadyFlag(pSent, u8Channel);
                if(NULL_PTR != aSlowMsgNotifcation[u8Instance][u8Channel])
                {
                    Sent_SlowMessageDataType tSlowMsg;

                    tSlowMsg.eMsgType = (Sent_SerialMessageType)SENT_HWA_GetChannelSLowMessageType(pSent, u8Channel);
                    tSlowMsg.u32Timestamp = SENT_HWA_GetChannelSlowMessageTimeStamp(pSent, u8Channel);
                    if(SENT_SERIAL_MESSAGE_SHORT == tSlowMsg.eMsgType)
                    {
                        tSlowMsg.u8CRC  = SENT_HWA_GetChannelBit2CRC(pSent, u8Channel) & 0xFU;
                        tSlowMsg.u16Data = SENT_HWA_GetChannelBit2DATA(pSent, u8Channel) & 0xFFU;
                        tSlowMsg.u8ID = (uint8)(SENT_HWA_GetChannelBit2DATA(pSent, u8Channel) >> 8U);
                    }
                    else if(SENT_SERIAL_MESSAGE_ENHANCE_12DATA_8ID == tSlowMsg.eMsgType)
                    {
                        tSlowMsg.u8CRC  = SENT_HWA_GetChannelBit2CRC(pSent, u8Channel);
                        tSlowMsg.u16Data = SENT_HWA_GetChannelBit2DATA(pSent, u8Channel);
                        tSlowMsg.u8ID = (SENT_HWA_GetChannelBit3EnhancedID7_4_OR_ID3_0(pSent, u8Channel) << 4U) | SENT_HWA_GetChannelBit3EnhancedID3_0_OR_DATA15_12(pSent, u8Channel);
                    }
                    else if(SENT_SERIAL_MESSAGE_ENHANCE_16DATA_4ID == tSlowMsg.eMsgType)
                    {
                        tSlowMsg.u8CRC  = SENT_HWA_GetChannelBit2CRC(pSent, u8Channel);
                        tSlowMsg.u16Data = ((uint16)SENT_HWA_GetChannelBit3EnhancedID3_0_OR_DATA15_12(pSent, u8Channel) << 12U) | (uint16)SENT_HWA_GetChannelBit2DATA(pSent, u8Channel);
                        tSlowMsg.u8ID = SENT_HWA_GetChannelBit3EnhancedID7_4_OR_ID3_0(pSent, u8Channel);
                    }
                    else
                    {
                        /* do nothing */
                    }
                    aSlowMsgNotifcation[u8Instance][u8Channel](&tSlowMsg);
                }
            }
            u32ChannelStatus = SENT_HWA_GetChannelStatus(pSent, u8Channel) & ~(SENT_CHN_STAT_BUS_IDLE_MASK);
            u32ChannelSlowStatus = u32ChannelStatus & (SENT_CHN_STAT_S_OVFL_MASK | SENT_CHN_STAT_S_CRC_ERR_MASK);
            u32ChannelFastStatus = u32ChannelStatus & ~(SENT_CHN_STAT_S_OVFL_MASK | SENT_CHN_STAT_S_CRC_ERR_MASK);
            if(0U != u32ChannelSlowStatus)
            {
                SENT_HWA_ClearChannelStatus(pSent, u8Channel, u32ChannelSlowStatus);
                if(NULL_PTR != aSlowErrNotifcation[u8Instance][u8Channel])
                {
                    aSlowErrNotifcation[u8Instance][u8Channel](u32ChannelSlowStatus);
                }
            }

            if(0U != u32ChannelFastStatus)
            {
                SENT_HWA_ClearChannelStatus(pSent, u8Channel, u32ChannelFastStatus);
                if(NULL_PTR != aFastErrNotifcation[u8Instance][u8Channel])
                {
                    aFastErrNotifcation[u8Instance][u8Channel](u32ChannelFastStatus);
                }
            }
        }
    }
}
/* PRQA S 3006 -- */
#endif

#if (defined(SENT_INSTANCE0_INT) && (SENT_INSTANCE0_INT == STD_ON))
/**
*   @brief   This function process the interrupt SENT0.
*   @details This function process the SENT0 interrup
*   @isr
*   @implements  SENTInterfaceNo_Isr_Activity
*
*/
SENT_TEXT_SECTION ISR(SENT_IsrSENT0_ALL)
{
#if (SENT_SUPPORT_MULTICORE == STD_ON)
    uint8    u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if(u8CurrentCore == Sent_pConfig->Sent_CtrlCoresMappingPtr[SENT_INSTANCE0_CONTROLLER_ID])
    {
#endif
        Sent_ProcessInterrupt(0U);
        EXIT_INTERRUPT();
#if (SENT_SUPPORT_MULTICORE == STD_ON)
    }
#endif
}
#endif

#if (defined(SENT_INSTANCE1_INT) && (SENT_INSTANCE1_INT == STD_ON))
/**
*   @brief   This function process the interrupt SENT1.
*   @details This function process the SENT1 interrup
*   @isr
*   @implements  SENTInterfaceNo_Isr_Activity
*
*/
SENT_TEXT_SECTION ISR(SENT_IsrSENT1_ALL)
{
#if (SENT_SUPPORT_MULTICORE == STD_ON)
    uint8    u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if(u8CurrentCore == Sent_pConfig->Sent_CtrlCoresMappingPtr[SENT_INSTANCE1_CONTROLLER_ID])
    {
#endif
        Sent_ProcessInterrupt(1U);
        EXIT_INTERRUPT();
#if (SENT_SUPPORT_MULTICORE == STD_ON)
    }
#endif
}
#endif

#define SENT_STOP_SEC_CODE
/**
* @brief Include Memory mapping specification
*
*/
#include "Sent_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
