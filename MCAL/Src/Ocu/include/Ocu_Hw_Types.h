/**
 *   @file    Ocu_Hw_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - Hw driver header file.
 *   @details Hw driver defines which need to be exported to external application.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU, TPU, EFTU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add
                                                         Tpu support(only available on FC7240)
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
*   1.4.1       09/12/2025    QXW0099       N/A          Change to SOMC mode
==================================================================================================*/
/* PRQA S 3630 EOF
   3630:The implementation of this struct/union type should be hidden.
   REASON: These structures are needed.
*/
#ifndef OCU_HW_TYPES_H
#define OCU_HW_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Ocu_Types.h"
#include "Ocu_Eftu_Tom_Types.h"
#include "Ocu_Ftu_Types.h"
#include "Ocu_Tpu_Types.h"

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       PLATFORM SPECIFIC DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief OCU Hardware module type
 *
 */
typedef enum
{
    OCU_HW_FTU_0,
    OCU_HW_FTU_1,
    OCU_HW_FTU_2,
    OCU_HW_FTU_3,
    OCU_HW_FTU_4,
    OCU_HW_FTU_5,
    OCU_HW_FTU_6,
    OCU_HW_FTU_7,
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1B))
    OCU_HW_FTU_8,
    OCU_HW_FTU_9,
    OCU_HW_FTU_10,
    OCU_HW_FTU_11,
#endif

#if (OCU_HAVE_TPU == STD_ON)
    OCU_HW_TPU_0,
#endif

#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    OCU_HW_EFTU_0_TOM_0,
    OCU_HW_EFTU_0_TOM_1,
    OCU_HW_EFTU_1_TOM_0,
    OCU_HW_EFTU_1_TOM_1,
    OCU_HW_EFTU_2_TOM_0,
    OCU_HW_EFTU_2_TOM_1,
#endif

} Ocu_HwType;

#define OCU_HW_FTU_START (OCU_HW_FTU_0)
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1B))
#define OCU_HW_FTU_END (OCU_HW_FTU_11)
#else
#define OCU_HW_FTU_END (OCU_HW_FTU_7)
#endif

#if (OCU_HAVE_TPU == STD_ON)
#define OCU_HW_TPU_START (OCU_HW_TPU_0)
#define OCU_HW_TPU_END   (OCU_HW_TPU_0)
#endif

#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
#define OCU_HW_EFTU_START (OCU_HW_EFTU_0_TOM_0)
#define OCU_HW_EFTU_END   (OCU_HW_EFTU_2_TOM_1)
#endif

/**
 * @brief   Hardware specific configuration structure
 *
 */
typedef struct
{
    const Ocu_FtuConfigType *const pFtuConfig; /* pointer to the configured channels for Ftu */
#if (OCU_HAVE_TPU == STD_ON)
    const Ocu_TpuConfigType *const pTpuConfig; /* pointer to the configured channels for Tpu */
#endif

#if (OCU_HAVE_EFTU == STD_ON)
    const Ocu_eFtuConfigType *const peFtuConfig; /* pointer to the configured channels for Tpu */
#endif

} Ocu_HwConfigType;

/**
 * @brief Ocu channel config type
 *
 */
typedef struct
{
#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
    const Ocu_NotifyType pfOcuChannelNotification; /* Pointer to channel notification function */
#endif
    boolean                 bOcuOutputPinUsed;   /** Output Pin is Used*/
    const Ocu_PinStateType  eDefaultPinState;    /** Default Pin state of channel*/
    const Ocu_PinActionType eOutputPinAction;    /** Pin action*/
    const uint8             u8HwChannel;         /** Assigned channel id*/
    const uint8             u8HwModule;          /** Assigned module id*/
    const Ocu_ValueType     u32DefaultThreshold; /** Compare match threshold*/
    const Ocu_HwType        eOcuHwType;          /** Hardware module type of channel*/
    Ocu_TimeBaseSel_Type    eTimeBase;           /** TBU cnt select */
} Ocu_ChannelConfigType;

/**
 * @brief This type contains initialization data of Ocu driver.
 *
 */
typedef struct
{
    const Ocu_ChannelType nNumChannels; /* Number of OCU channels (configured in tresos plugin builder)*/
    const Ocu_ChannelConfigType (*pOcuChannelsConfig)[]; /* Pointer to the OCU channel configuration */
    const Ocu_HwConfigType HwConfig; /* Combined IP specific configuration structure */
#ifdef OCU_DOWNCOUNTING_SUPPORTED
#if (OCU_DOWNCOUNTING_SUPPORTED == STD_ON)
    const Ocu_CountDirectionType eCountDir; /* Counting direction */
#endif
#endif
#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
    const Ocu_ChannelType (
        *HwToLogicChannelMap)[]; /* Index table to translate HW channels to logical used
                                    to process interrupts for notifications */
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
    const uint8 *OcuChannelPartitionMappingPtr; /* Multicore channel partion map table*/
#endif
} Ocu_ConfigType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* OCU_HW_TYPES_H */

/** @} */
