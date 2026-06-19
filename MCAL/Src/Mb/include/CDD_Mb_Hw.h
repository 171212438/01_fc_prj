/**
 *   @file    CDD_Mb_Hw.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mailbox - Mailbox SAR IP header file.
 *   @details Mailbox hardware driver API.
 *
 *   @addtogroup Mailbox
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Mailbox
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
*   0.2.0       09/09/2023    QXW0070       N/A          Mailbox Initial Version
*   0.4.0       09/11/2023    QXW0070       N/A          Isolate CDD_Mb_Irq.c and HWA
*   0.6.0       15/03/2024    QXW0070       N/A          Move Mb_HL_GetCoreIndex from CDD_Mb_Hw.h
*                                                        to CDD_Mb_Hw.c
==================================================================================================*/
#ifndef CDD_MB_HW_H
#define CDD_MB_HW_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mb_Reg.h"
#include "Common_Cfg.h"
#include "CDD_Mb_Cfg.h"
#include "CDD_Mb_Types.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if MAX_CORE_NUM != 4U
#define Mb_HL_Core2MbIndex(c) ((uint32)(c))
#define Mb_HL_Mb2CoreIndex(m) ((uint32)(m))
#else
#define Mb_HL_Core2MbIndex(c) ((uint32)((c) == 3U ? 4U : (c)))
#define Mb_HL_Mb2CoreIndex(m) ((uint32)((m) == 4U ? 3U : (m)))
#endif
/**
 *   @brief Mailbox hardware channel unused
 */
#define MB_HW_UNUSED 0xFFU
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"

MB_TEXT_SECTION void Mb_HL_Init(uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag);
#if (MB_DEINIT_API == STD_ON)
MB_TEXT_SECTION void Mb_HL_DeInit(void);
#endif
MB_TEXT_SECTION Std_ReturnType      Mb_HL_SendData(uint32 u32HwChannel,
                                                   uint32 u32DstCore,
                                                   uint32 u32Data0,
                                                   uint32 u32Data1);
MB_TEXT_SECTION Std_ReturnType      Mb_HL_DoneChannel(uint32 u32HwChannel);
MB_TEXT_SECTION Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel);
MB_TEXT_SECTION void                Mb_HL_ForceUnlockChannel(uint32 u32HwChannel);
MB_TEXT_SECTION uint32              Mb_HL_GetIntrFlag(uint32 u32CoreIndex, uint32 u32Mask);
MB_TEXT_SECTION uint32              Mb_HL_GetChannelMasterCoreIndex(uint32 u32HwChannel);
MB_TEXT_SECTION void Mb_HL_GetChannelData(uint32 u32HwChannel, uint32 *pData0, uint32 *pData1);
#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* ADC_HW_H */

/** @} */
