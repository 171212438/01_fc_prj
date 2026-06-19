/**
*   @file    CDD_DMA.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dma - DMA driver header file.
*   @details DMA driver header file, containing the Autosar API specification and other variables
*              and functions that are exported by the DMA driver.
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
*   0.4.0       10/11/2023    QXW0099       N/A          Change function names
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/

#ifndef CDD_DMA_H
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define CDD_DMA_H
/* PRQA S 603, 602 -- */

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

#include "CDD_DMA_Cfg.h"
#include "Dma_Types.h"
#include "Common_Cfg.h"
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C))
#include "FC7300_Dma_Reg.h"
#elif (DEVICE_SERIES == FC7240F2MDSxxxxT1A)
#include "FC7240_Dma_Reg.h"
#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
#include "FC7300GT_Dma_Reg.h"
#else
#error "No valid platform selected!"
#endif

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: These macros are distinct */
#define DMA_VENDOR_ID                       174
#define DMA_MODULE_ID                       255
#define DMA_AR_RELEASE_MAJOR_VERSION        4
#define DMA_AR_RELEASE_MINOR_VERSION        6
#define DMA_AR_RELEASE_REVISION_VERSION     0
#define DMA_SW_MAJOR_VERSION                1
#define DMA_SW_MINOR_VERSION                5
#define DMA_SW_PATCH_VERSION                1
/* PRQA S 791 -- */
/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

/**
* @brief   InstanceId of this Dma driver
*
* */
#define DMA_INDEX(COREID)                     (Dma_Config.pDmaCoreConfig[COREID]->DmaInstanceNumber)

/**
* @brief   API service used with a channel out of range
*
* */
#define DMA_E_INVALID_CHANNEL_U8              ((uint8)0x0B)

/**
* @brief   API service used without module initialization
*
*
*/
#define DMA_E_UNINIT_U8                       ((uint8)0x0C)

/**
* @brief   API DMA_Dma_Init service called when the DMA driver and the Hardware
*          are already initialized
*
*
*/
#define DMA_E_ALREADY_INITIALIZED_U8          ((uint8)0x0D)

/**
* @brief   API Dma_GetVersionInfo is called and the parameter versioninfo is is invalid
*          ( e.g. NULL )
*
*
*/
#define DMA_E_PARAM_VINFO_U8                  ((uint8)0x0F)

/**
* @brief   API Dma_Init service called with wrong parameter
*
*
*/
#define DMA_E_PARAM_CONFIG_U8                 ((uint8)0x12U)

/**
* @brief   API Dma_Init service execution failed
*
*
*/
#define DMA_E_INIT_FAILED_U8                  ((uint8)0x13U)

/**
* @brief   API Dma_Init service called with wrong parameter
*
*
*/
#define DMA_E_PARAM_CONFIG_INVALID_ADDRESS_U8 ((uint8)0x14U)

/**
* @brief   API Dma_Init service called with wrong parameter
*
*
*/
#define DMA_E_PARAM_CONFIG_INVALID_SIZE_U8    ((uint8)0x15U)

/**
* @brief   API Dma_DeInit service execution failed
*
*
*/
#define DMA_E_DEINIT_FAILED_U8                ((uint8)0x16U)

/**
* @brief API service ID for Dma_GetVersionInfo function
* @details Parameters used when raising an error/exception
*/
#define DMA_GETVERSIONINFO_ID_U8              ((uint8)0x17U)


/**
* @brief   API DMA_ConfigInput service called with wrong
*                                      parameter regiserIndex
*
*/
#define DMA_E_INVALID_REGINDEX_U8             ((uint8)0x18U)

/**
* @brief   API DMA_ConfigInput service called with wrong
*                                      parameter selection
*
*/
#define DMA_E_INVALID_DMA_SEL_U8              ((uint8)0x19U)

/**
* @brief   API DMA_ConfigInput service called with wrong
*                                             parameter triger
*
*/
#define DMA_E_INVALID_DMA_TRIGGER_U8          ((uint8)0x1AU)

/**
* @brief   API DMA_ConfigInput service called when
*                                           register is locked
*
*/
#define DMA_E_DMA_LOCKED_U8                   ((uint8)0x1BU)

/**
* @brief   DMA driver not enabled in current partition or DMA
                    channel not assigned to current partition
*
*/
#define DMA_E_PARTITION_MAPPING               ((uint8)0x1CU)

/*
* @brief API service ID for Dma_Init function
* @details Parameters used when raising an error/exception
*
*/
#define DMA_INIT_ID_U8                        ((uint8)0x23U)

/**
* @brief API service ID for DMA_ConfigInput function
* @details Parameters used when raising an error/exception
*
*/
#define DMA_CONFIG_ID_U8                      ((uint8)0x54U)

/**
* @brief API service ID for DMA_TrgMuxConfigLock function
* @details Parameters used when raising an error/exception
*
*/
#define DMA_CONFIG_LOCK_U8                    ((uint8)0x55U)

/**
* @brief API service ID for Dma_DeInit function
* @details Parameters used when raising an error/exception
*
*/
#define DMA_DEINIT_ID_U8                      ((uint8)0x56U)

/**
* @brief API service ID for Dma_StartChannel function
* @details Parameters used when raising an error/exception
* */
#define DMA_START_CH_ID_U8                    ((uint8)0x57U)

/**
* @brief API service ID for Dma_SetInnerLinkChannel function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_INNER_CH_ID_U8                ((uint8)0x58U)

/**
* @brief API service ID for Dma_SetOuterLinkChannel function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_OUTER_CH_ID_U8                ((uint8)0x59U)

/**
* @brief API service ID for Dma_SetChannelPriority function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_PRIORITY_ID_U8                ((uint8)0x5AU)

/**
* @brief API service ID for Dma_SetChannelLoopOffsetAndNBYTES function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_INNER_ATTR_ID_U8              ((uint8)0x5BU)

/**
* @brief API service ID for Dma_CheckIfTransferCompleted function
* @details Parameters used when raising an error/exception
* */
#define DMA_TRANSF_COMPLETE_ID_U8             ((uint8)0x5CU)

/**
* @brief API service ID for Dma_CheckIfTransferActive function
* @details Parameters used when raising an error/exception
* */
#define DMA_TRANSF_ACTIVE_ID_U8               ((uint8)0x5DU)

/**
* @brief API service ID for Dma_SetCfgSaddr function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_SADDR_ID_U8                   ((uint8)0x5EU)

/**
* @brief API service ID for Dma_SetCfgSoff function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_SOFF_ID_U8                    ((uint8)0x5FU)

/**
* @brief API service ID for Dma_SetCfgDlast function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_DLAST_ID_U8                   ((uint8)0x60U)

/**
* @brief API service ID for Dma_SetCfgDoff function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_DOFF_ID_U8                    ((uint8)0x61U)

/**
* @brief API service ID for Dma_SetCfgSlast function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_SLAST_ID_U8                   ((uint8)0x62U)

/**
* @brief API service ID for Dma_SetCfgSModuloAndSize function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_SMOD_SIZE_ID_U8                ((uint8)0x63U)

/**
* @brief API service ID for Dma_EnableHWRequest function
* @details Parameters used when raising an error/exception
* */
#define DMA_EN_HW_REQ_ID_U8                   ((uint8)0x64U)

/**
* @brief API service ID for Dma_DisableHWRequest function
* @details Parameters used when raising an error/exception
* */
#define DMA_DIS_HW_REQ_ID_U8                  ((uint8)0x65U)

/**
* @brief API service ID for Dma_SetCfgCompleteInterrupt function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_DONE_INT_ID_U8                ((uint8)0x66U)

/**
* @brief API service ID for Dma_ClearDoneFlag function
* @details Parameters used when raising an error/exception
* */
#define DMA_CLR_DONE_FLAG_ID_U8               ((uint8)0x67U)

/**
* @brief API service ID for Dma_GetBeginOuterLoopCounter function
* @details Parameters used when raising an error/exception
* */
#define DMA_GET_BEGIN_COUNTER_ID_U8           ((uint8)0x68U)

/**
* @brief API service ID for Dma_GetCurrentOuterLoopCounter function
* @details Parameters used when raising an error/exception
* */
#define DMA_GET_CURRENT_COUNTER_ID_U8         ((uint8)0x69U)

/**
* @brief API service ID for Dma_UpdateOuterLoopCounter function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_OUTER_COUNTER_ID_U8           ((uint8)0x6AU)

/**
* @brief API service ID for Dma_CalculateSrcChannelLastOffset function
* @details Parameters used when raising an error/exception
* */
#define DMA_CAL_SRC_LAST_OFFSET_ID_U8         ((uint8)0x6BU)

/**
* @brief API service ID for Dma_CalculateDesChannelLastOffset function
* @details Parameters used when raising an error/exception
* */
#define DMA_CAL_DES_LAST_OFFSET_ID_U8         ((uint8)0x6CU)

/**
* @brief API service ID for DMA_UpdateChannelConfigSet function
* @details Parameters used when raising an error/exception
* */
#define DMA_CAL_UPDATE_CONFIGSET_ID_U8        ((uint8)0x6DU)

/**
* @brief API service ID for Dma_CancelTransfer function
* @details Parameters used when raising an error/exception
* */
#define DMA_CANCEL_TRANSFER_ID_U8             ((uint8)0x6EU)

/**
* @brief API service ID for Dma_ErrorCancelTransfer function
* @details Parameters used when raising an error/exception
* */
#define DMA_ERR_CANCEL_TRANSFER_ID_U8         ((uint8)0x6FU)

/**
* @brief API service ID for Dma_Halt function
* @details Parameters used when raising an error/exception
* */
#define DMA_HALT_ID_U8                        ((uint8)0x70U)

/**
* @brief API service ID for Dma_Resume function
* @details Parameters used when raising an error/exception
* */
#define DMA_RESUME_ID_U8                      ((uint8)0x71U)

/**
* @brief API service ID for Dma_SetCfgDaddr function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_DADDR_ID_U8                   ((uint8)0x72U)

/**
* @brief API service ID for Dma_SetCfgDModuloAndSize function
* @details Parameters used when raising an error/exception
* */
#define DMA_SET_DMOD_SIZE_ID_U8               ((uint8)0x73U)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/


/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#define DMA_START_SEC_VAR_INIT_UNSPECIFIED
#include "Dma_MemMap.h"

extern const Dma_ConfigType *Dma_pConfig[DMA_ECUC_PARTITIONS_MAX];

#if (DMA_INSTANCE_COUNT == 1)
extern DMA_DATA_SECTION uint8 Dma_au8DumoUsedStatus[DMA_DUMO_COUNT];
#endif

#define DMA_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Dma_MemMap.h"

#  define DMA_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#  include "Dma_MemMap.h"

extern DMA_DATA_SECTION Dma_DriverStateType Dma_DriverStatus[DMA_ECUC_PARTITIONS_MAX];

#  define DMA_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#  include "Dma_MemMap.h"

#if (DMA_INSTANCE_COUNT == 2)
#  define DMA_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#  include "Dma_MemMap.h"

extern DMA_DATA_SECTION uint8 Dma_au8DumoUsedStatus[DMA_INSTANCE_COUNT][DMA_DUMO_COUNT];

#  define DMA_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#  include "Dma_MemMap.h"
#endif /* DMA_INSTANCE_COUNT == 2 */

#define DMA_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dma_MemMap.h"

extern const Dma_ConfigType Dma_Config;

#define DMA_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dma_MemMap.h"

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#define DMA_START_SEC_CODE
#include "Dma_MemMap.h"

extern void Dma_Init(const Dma_ConfigType *pConfigPtr);

#if (DMA_DEINIT_API == STD_ON)
extern void Dma_DeInit(void);
#endif

#if (DMA_GET_VERSION_INFO_API == STD_ON)
extern void Dma_GetVersionInfo(Std_VersionInfoType *pVersioninfo);
#endif

#if (DMA_CANCEL_TransferAPI == STD_ON)
extern Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance);
#endif

#if (DMA_ERROR_CANCEL_TransferAPI == STD_ON)
extern Std_ReturnType Dma_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance);
#endif

#if (DMA_HALT_API == STD_ON)
extern void Dma_Halt(const Dma_InstanceType eDma_Instance);

extern void Dma_Resume(const Dma_InstanceType eDma_Instance);
#endif

DMA_TEXT_SECTION extern Std_ReturnType Dma_ConfigChannel(Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const Dma_ChannelType *pChannelConfig);

DMA_TEXT_SECTION extern void Dma_StartChannel(Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_SetInnerLinkChannel(Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel);

DMA_TEXT_SECTION extern Std_ReturnType Dma_SetOuterLinkChannel(Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel,
                                                               const Dma_ChannelType *pChannelConfig);

DMA_TEXT_SECTION extern void Dma_SetChannelPriority(Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const uint8 u8Dma_Priority);

DMA_TEXT_SECTION extern boolean Dma_SetChannelLoopOffsetAndNBYTES(Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel, const Dma_ChannelType *PConfig);

DMA_TEXT_SECTION extern boolean Dma_CheckIfTransferCompleted(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern boolean Dma_CheckIfTransferActive(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_SetCfgSlast(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, sint32 s32Slast);

DMA_TEXT_SECTION extern void Dma_SetCfgSaddr(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, uint32 u32Saddr);

DMA_TEXT_SECTION extern void Dma_SetCfgSoff(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, sint16 s16Soff);

DMA_TEXT_SECTION extern void Dma_SetCfgDlast(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, sint32 s32Dlast);

DMA_TEXT_SECTION extern void Dma_SetCfgDaddr(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, uint32 u32Daddr);

DMA_TEXT_SECTION extern void Dma_SetCfgDoff(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, sint16 s16Doff);

DMA_TEXT_SECTION extern void Dma_SetCfgSModuloAndSize(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, uint8 u8SModulo, Dma_TranSizeType eSSize);

DMA_TEXT_SECTION extern void Dma_SetCfgDModuloAndSize(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, uint8 u8DModulo, Dma_TranSizeType eDSize);

DMA_TEXT_SECTION extern void Dma_EnableHwRequest(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_DisableHwRequest(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_SetCfgCompleteInterrupt(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, boolean bEnable);

DMA_TEXT_SECTION extern void Dma_ClearDoneFlag(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern uint16 Dma_GetBeginOuterLoopCounter(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern uint16 Dma_GetCurrentOuterLoopCounter(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel);

DMA_TEXT_SECTION extern void Dma_UpdateOuterLoopCounter(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, uint16 u16Counter);

DMA_TEXT_SECTION extern Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType *PConfig, sint32 *s32SrcLastOffset);

DMA_TEXT_SECTION extern Std_ReturnType Dma_CalculateDesChannelLastOffset(const Dma_ChannelType *PConfig, sint32 *s32DestLastOffset);

#define DMA_STOP_SEC_CODE
#include "Dma_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif  /* DMA_H */
/** @} */

