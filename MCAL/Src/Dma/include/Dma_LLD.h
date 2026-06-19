/**
*   @file    Dma_LLD.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dma - DMA driver low level layer header file.
*   @details DMA driver low level layer header file.
*
*   @addtogroup DMA
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DMA
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       07/06/2023    QXW0099       N/A          DMA Initial Version
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Multicore Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       10/11/2023    QXW0099       N/A          Fix channel config error
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/

#ifndef CDD_LLD_DMA_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define CDD_LLD_DMA_H
/* PRQA S 0602 -- */
/* PRQA S 0603 -- */
#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "Std_Types.h"
#include "Dma_Types.h"


/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

#if (DMA_CORE_HAVE_TCM_BACKDOOR == STD_ON)
#define DTCM_ADDRESS_START              0x20000000UL
#define DTCM_ADDRESS_STOP               0x2001FFFFUL
#define DTCM0_BACKDOOR                  0x02000000UL
#define DTCM1_BACKDOOR                  0x02100000UL
#define DTCM2_BACKDOOR                  0x02200000UL

#define ITCM_ADDRESS_START              0x00000000UL
#define ITCM_ADDRESS_STOP               0x0000FFFFUL
#define ITCM0_BACKDOOR                  0x24000000UL
#define ITCM1_BACKDOOR                  0x24100000UL
#define ITCM2_BACKDOOR                  0x24200000UL
#endif

#if (DMA_MCU_HAVE_SMP == STD_ON)
#define DTCM3_BACKDOOR                  0x02300000UL
#define ITCM3_BACKDOOR                  0x24300000UL

#define DTCM0_ADDRESS_START_SMP         0x20000000UL
#define DTCM0_ADDRESS_STOP_SMP          0x2001FFFFUL
#define DTCM1_ADDRESS_START_SMP         0x20020000UL
#define DTCM1_ADDRESS_STOP_SMP          0x2003FFFFUL
#define DTCM2_ADDRESS_START_SMP         0x20040000UL
#define DTCM2_ADDRESS_STOP_SMP          0x2005FFFFUL
#define DTCM3_ADDRESS_START_SMP         0x20060000UL
#define DTCM3_ADDRESS_STOP_SMP          0x2006FFFFUL

#define ITCM0_ADDRESS_START_SMP         0x00000000UL
#define ITCM0_ADDRESS_STOP_SMP          0x0000FFFFUL
#define ITCM1_ADDRESS_START_SMP         0x00010000UL
#define ITCM1_ADDRESS_STOP_SMP          0x0001FFFFUL
#define ITCM2_ADDRESS_START_SMP         0x00020000UL
#define ITCM2_ADDRESS_STOP_SMP          0x0002FFFFUL
#define ITCM3_ADDRESS_START_SMP         0x00030000UL
#define ITCM3_ADDRESS_STOP_SMP          0x00037FFFUL
#endif

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/


/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/
#define DMA_START_SEC_CODE
#include "Dma_MemMap.h"

DMA_TEXT_SECTION extern void Dma_LLD_Init(Dma_InstanceType eDma_Instance, const Dma_ConfigType *pConfig);

DMA_TEXT_SECTION extern void Dma_LLD_DeInit(const Dma_InstanceType eDma_Instance);

DMA_TEXT_SECTION extern Std_ReturnType Dma_LLD_CancelTransfer(const Dma_InstanceType eDma_Instance);

DMA_TEXT_SECTION extern Std_ReturnType Dma_LLD_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance);

DMA_TEXT_SECTION extern void Dma_LLD_Halt(const Dma_InstanceType eDma_Instance);

DMA_TEXT_SECTION extern void Dma_LLD_Resume(const Dma_InstanceType eDma_Instance);

DMA_TEXT_SECTION extern Std_ReturnType Dma_LLD_InitChannelConfig(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const Dma_ChannelType *pChannelConfig);

DMA_TEXT_SECTION extern void Dma_LLD_StartChannel(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_LLD_SetInnerLinkChannel(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel);

DMA_TEXT_SECTION extern Std_ReturnType Dma_LLD_SetOuterLinkChannel(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel,
                                                                   const Dma_ChannelType *pChannelConfig);

DMA_TEXT_SECTION extern void Dma_LLD_SetChannelPriority(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Dma_Priority);

DMA_TEXT_SECTION extern boolean Dma_LLD_SetChannelLoopOffsetAndNBYTES(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const Dma_ChannelType *PConfig);

DMA_TEXT_SECTION extern boolean Dma_LLD_CheckIfCompleteFlag(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern boolean Dma_LLD_CheckIfActiveFlag(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_LLD_SetSADDR(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint32 u32Addr);

DMA_TEXT_SECTION extern void Dma_LLD_SetSOFF(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const sint16 s16Off);

DMA_TEXT_SECTION extern void Dma_LLD_SetDLAST(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const sint32 s32Last);

DMA_TEXT_SECTION extern void Dma_LLD_SetDADDR(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint32 u32Addr);

DMA_TEXT_SECTION extern void Dma_LLD_SetDOFF(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const sint16 s16Off);

DMA_TEXT_SECTION extern void Dma_LLD_SetSLAST(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const sint32 s32Last);

DMA_TEXT_SECTION extern void Dma_LLD_SetSModuloAndSize(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Mod, const Dma_TranSizeType eSSize);

DMA_TEXT_SECTION extern void Dma_LLD_SetDModuloAndSize(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Mod, const Dma_TranSizeType eDSize);

DMA_TEXT_SECTION extern void Dma_LLD_EnableHWRequest(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_LLD_DisableHWRequest(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_LLD_SetCompleteInt(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, boolean bEn);

DMA_TEXT_SECTION extern void Dma_LLD_ClearDoneFlag(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern uint16 Dma_LLD_GetBeginOuterLoopCounter(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern uint16 Dma_LLD_GetCurrentOuterLoopCounter(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_LLD_UpdateOuterLoopCounter(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint16 u16Counter);

DMA_TEXT_SECTION extern Std_ReturnType Dma_LLD_CalculateSrcLastOffset(const Dma_ChannelType *pChannelConfig, sint32 *s32SrcLastOffset);

DMA_TEXT_SECTION extern Std_ReturnType Dma_LLD_CalculateDesLastOffset(const Dma_ChannelType *pChannelConfig, sint32 *s32DestLastOffset);

#define DMA_STOP_SEC_CODE
#include "Dma_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif  /* DMA_H */
/** @} */

