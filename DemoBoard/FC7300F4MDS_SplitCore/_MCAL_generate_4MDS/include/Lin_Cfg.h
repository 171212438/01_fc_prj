/**
*   @file    Lin_Cfg.h
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
*   PLATFORM             : Flagchip FC7xxx
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
*   0.1.0       15/06/2023    QXW0095       N/A          LIN Initial Version
*   0.2.0       27/09/2023    QXW0095       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0095       N/A          Optimize the static code
*   0.4.0       20/11/2023    QXW0095       N/A          Optimize the static code
*   0.6.0       18/03/2024    QXW0122       N/A          Add support for FC7240
*   0.7.0       16/04/2024    QXW0122       N/A          Add Lin slave mode
*   0.8.0       01/08/2024    QXW0122       N/A          Add timeout detection & Add FIFO support
==================================================================================================*/

#ifndef LIN_CFG_H
#define LIN_CFG_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
 * @file           Lin_Cfg.h
 */
#define LIN_CFG_VENDOR_ID                    174
#define LIN_CFG_MODULE_ID                    82
#define LIN_CFG_AR_RELEASE_MAJOR_VERSION     4
#define LIN_CFG_AR_RELEASE_MINOR_VERSION     6
#define LIN_CFG_AR_RELEASE_REVISION_VERSION  0
#define LIN_CFG_SW_MAJOR_VERSION             1
#define LIN_CFG_SW_MINOR_VERSION             5
#define LIN_CFG_SW_PATCH_VERSION             1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/**
* @brief   Lin Master Node Used
*/
#define LIN_MASTER_NODE_USED  (STD_ON) /* Used Master Node */

/**
* @brief   Total number of available hardware FCUART channels.
*/
#define  LIN_INSTANCE_COUNT 18U

/**
* @brief   Support for the configration of Length Delimiter for LIN Break Send Out
*/
#define  LIN_BRKD_SUPPORT (STD_ON)

/**
* @brief   Number of Channels configured.
*/
#define LIN_INSTANCE_CONFIG 2U

/**
* @brief   Total number of available hardware lin channels.
*/
#define LIN_FCUART_MAX_MODULES 8U

/**
* @brief   Max data length of the LIN SDU buffer to be returned.
*/
#define LIN_MAX_DATA_LENGTH  8U

/**
* @brief   Number of loops before returning LIN_E_TIMEOUT.
*/
#define  LIN_TIMEOUT_TIMES ((uint32)1000U)

/**
* @brief   Provides the ability to turn on and off FIFO functionality.
*/
#define LIN_DEV_FIFO_SUPPORT      (STD_OFF)

/**
* @brief   Switches the Development Error Detection and Notification ON or OFF.
*/
#define LIN_DEV_ERROR_DETECT      (STD_OFF)

/**
* @brief          Support for version info API.
* @details        Switches the Lin_GetVersionInfo() API ON or OFF.
*/
#define LIN_VERSION_INFO_API      (STD_OFF)

/**
* @brief        The number of partions of the Lin driver.
*/

#define LIN_PARTIONS_NB     ((uint32)2U)

/**
 * @brief    Init variable driver status
 */
#define LIN_DRIVER_STATUS_UNINIT_ARRAY  {LIN_UNINIT, LIN_UNINIT}

/**
 * @brief    Init variable Lin_ConfigPtr
 */
#define LIN_CONFIGPTR_UNINIT_ARRAY {NULL_PTR, NULL_PTR}

/**
* @brief    Init variable Lin_FCUart_pConfig
*/
#define LIN_CORE_CONFIGPTR_UINIT_ARRAY {NULL_PTR, NULL_PTR}

/**
* @brief    Init Lin channel hardware map variable
*/
#define LIN_CHMAP_UNINT_ARRAY {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}

/**
* @brief     All CoreIDs are supported by LIN driver.
*/

#define LIN_FCUART_ECUCPARTITION_0_CORE_ID ((uint32)0U)
                
#define LIN_FCUART_ECUCPARTITION_1_CORE_ID ((uint32)1U)
                
#define LIN_FCUART_UNALLOCATEDPAR_CORE_ID ((uint32)0U)

/**
 * @brief          Multicore is enabled or not
 */
#define LIN_MULTICORE_SUPPORT (STD_ON) /* Multicore is enabled */

/**
* @brief          FCUART Instance of ISR.
* @details        define FCUART Instance of ISR,
*/
#define LIN_FCUART_6_ISR_USED
#define LIN_FCUART_2_ISR_USED

/**
* @brief          Link Lin channels symbolic names with Lin channel IDs.
* @details        Link Lin channels symbolic names with Lin channel IDs.
*
* @api
*/
/* [SWS_Lin_00225] */
#define FCUART_6    6U
#define FCUART_2    2U

/**
* @brief          Symbolic names for configured channels.
* @details        Symbolic names for configured channels.
*/
#define LinConf_LinChannel_LinChannel_0         0
#define LinConf_LinChannel_LinChannel_1         1

/**
 * @brief        Switches the LinIf APIs to follow ASR R4.3.1
 *
 */
#define LIN_USE_LEGACY_LINIF_API    STD_OFF

/**
* @brief   Switches the Production Error Detection and Notification OFF
*/


#define LIN_DISABLE_DEM_REPORT_ERROR_STATUS   (STD_ON) /* Disable Production Error Detection */

#define LIN_PRECOMPILE_SUPPORT (STD_OFF)



#define LIN_GLOBAL_WAKEUP_SUPPORT (STD_OFF) /* Support wakeup detection */


/**
* @brief          None EcuMWakeUpSource was referred when LinChannelWakeupSupport is disable
*/
#define LIN_NONE_ECUM_WAKEUP_SOURCE_REF (uint32)0U
 
/**
* @brief Macro which shows if at least one slave is present in the configuration
*/
#define LIN_HAS_SLAVE_NODE     (STD_ON) 

/**
* @brief   Enable/Disable timeout feature.
*/
#define LIN_FRAME_TIMEOUT_DISABLE        (STD_ON)


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief          LIN break delimiter type.
* @details        This is the type of the break delimiter for the Lin module.
*/
typedef enum
{
    LEN_DELIMITER_1BIT = 0x00,
    LEN_DELIMITER_2BITS = 0x01
}Lin_BreakDelimiterType;

/**
 * @brief Define type of LIN Node event State.
 *
 */
typedef enum
{
    LIN_NODE_STATE_UNINIT                 = 0x00U,    /**< @brief Uninitialized state */
    LIN_NODE_STATE_IDLE                   = 0x01U,    /**< @brief Idle state */
    LIN_NODE_STATE_RECV_SYNC              = 0x02U,    /**< @brief Receive the synchronization byte state */
    LIN_NODE_STATE_RECV_PID               = 0x03U,    /**< @brief Receive PID state */
    LIN_NODE_STATE_RECV_DATA              = 0x04U,    /**< @brief Receive data state */
    LIN_NODE_STATE_RECV_DATA_COMPLETED    = 0x05U,    /**< @brief Receive data completed state */
    LIN_NODE_STATE_SEND_DATA              = 0x06U,    /**< @brief Send data state */
    LIN_NODE_STATE_SEND_DATA_COMPLETED    = 0x07U     /**< @brief Send data completed state */
} Lin_NodeEventStateType;

/**
 * @brief Enum containing the events related to a ID
 *
 * @details This enum defines types for an enumerating event related to an Identifier.
 *
 * @implements Lin_EventIdType_enum
 *
 *
 */
typedef enum
{
    LIN_NO_EVENT                = 0x00U,    /**< @brief No event */
    LIN_SYNC_ERROR              = 0x01U,    /**< @brief Sync byte received with errors */
    LIN_RECV_HEADER_OK          = 0x02U,    /**< @brief PID byte received ok */
    LIN_PID_ERROR               = 0x03U,    /**< @brief PID byte received with errors */
    LIN_FRAME_ERROR             = 0x04U,    /**< @brief Frame transfer has errors */
    LIN_READBACK_ERROR          = 0x05U,    /**< @brief Readback error */
    LIN_CHECKSUM_ERROR_EVENT    = 0x06U,    /**< @brief Checksum error */
    LIN_TX_COMPLETED            = 0x07U,    /**< @brief Tx completed */
    LIN_RX_COMPLETED            = 0x08U,    /**< @brief Rx completed */
    LIN_RX_OVERRUN_ERROR        = 0x09U,    /**< @brief Rx overrun error */
    LIN_RX_TIMEOUT_ERROR        = 0x0AU,    /**< @brief Timeout error */
    LIN_NOISY_ERROR             = 0x0BU,    /**< @brief Noise error */
    LIN_FIFO_ERROR              = 0x0CU     /**< @brief Receiver Buffer Underflow or Transmitter Buffer Overflow error */
} Lin_EventIdType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Runtime state of the LIN driver.
 *
 */
typedef struct
{
    volatile Lin_EventIdType         CurrentEventId;
    volatile Lin_NodeEventStateType  CurrentNodeState;   /**< Current node state */
    volatile Lin_NodeEventStateType  PreviousNodeState;  /**< Previous node state */
    uint8                            CurrentPid;         /**< Current PID */
} Lin_StateStructType;

/**
* @brief          LIN channel configuration type structure.
* @details        This is the type of the external data for configuring HW one LIN Channel.
*/
typedef struct
{
    uint8 u8LinChannelID;                         /**< Lin Channel ID */
    uint8 u8HwModule;                             /**< Lin HW channel */
    uint8 u8LinWakeUpSup;                         /**< Identifies the Lin channel support wake up */
    uint32 LinChannelWakeUpSrc;                   /**< Identifies the wake up source */
    uint32 ChannelCoreId;                         /**< Lin Channel ID */
} Lin_ChannelType;

/**
 * @brief LIN Driver callback function type
 * @implements Lin_CallbackType_pointer
 */
typedef void (*Lin_CallbackType)(uint8 u8Channel, Lin_StateStructType *StateStruct);

/**
* @brief          LIN core configuration type structure.
* @details        This is the type of the external data for configuring Lin core.
*/
typedef struct
{
    const Lin_ChannelType *pLinChannel;    /**< Pointer to Lin channel configure */
    Lin_BreakDelimiterType eLinBreakDelimiterLen;             /**< Lin break delimiter length */
    uint32 u32LinBaudRate;                                    /**< Baudrate value*/
    uint32 u32LinBaudRateDivisor;                             /**< Baud clock divisor*/
    uint8 u32LinBaudOverSamplingRatio;                        /**< Over sampling ratio*/
    uint16 u16LinBaudWaitCount;            /**< Lin wait count of change baudrate */
    boolean NodeFunction;                  /**< Lin node function as Master or Slave */
    Lin_CallbackType Callback;             /**< Lin Callback function to invoke after receiving a byte or transmitting a byte. */
    Lin_StateStructType *pLin_StateArray;  /**< Lin runtime state. */
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
    uint32 HeaderTimeoutValue;                              /**< Header timeout duration(in bit time) converted to micro seconds. */
    uint32 ResponseTimeoutValue;                            /**< Response timeout duration(in bit time) for 1 byte converted to micro seconds. */
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
} Lin_CoreConfigType;

/**
* @brief          LIN driver configuration type structure.
* @details        This is the type of the pointer to the external data Lin Channels.
*/
/* [SWS_Lin_00227] */
typedef struct
{
    uint32 LinPartionCoreId;            /**< Partition core id is assigned for this configuration */
    const Lin_CoreConfigType *pLin_CoreConfig[LIN_INSTANCE_CONFIG];    /**< Pointer to core configuration */
} Lin_ConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"



#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"
/*==================================================================================================
*                                  EXTERNAL CONSTANTS
==================================================================================================*/
#define LIN_START_SEC_CONST_8
#include "Lin_MemMap.h"

LIN_DATA_SECTION extern const uint8 Lin_HwToChannel[LIN_INSTANCE_COUNT];

#define LIN_STOP_SEC_CONST_8
#include "Lin_MemMap.h"

#define LIN_START_SEC_CONST_UNSPECIFIED
#include "Lin_MemMap.h"


LIN_DATA_SECTION extern const Lin_ChannelType Lin_LinChannel_0_PC;

LIN_DATA_SECTION extern const Lin_ChannelType Lin_LinChannel_1_PC;

#define LIN_STOP_SEC_CONST_UNSPECIFIED
#include "Lin_MemMap.h"

#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

LIN_DATA_SECTION extern const Lin_ConfigType Lin_Config_EcucPartition_0;
LIN_DATA_SECTION extern const Lin_ConfigType Lin_Config_EcucPartition_1;

#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
LIN_DATA_SECTION extern const Mcal_DemErrorType Lin_E_TimeoutCfg;
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */

#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* _LIN_CFG_H_ */

/** @} */
