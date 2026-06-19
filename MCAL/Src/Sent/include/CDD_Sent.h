/**
*   @file    CDD_SENT.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Sent - SENT driver header file.
*   @details SENT driver header file, containing the Autosar API specification and other variables
*              and functions that are exported by the SENT driver.
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

#ifndef CDD_SENT_H
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define CDD_SENT_H
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

#include "Std_Types.h"
#include "Sent_Reg.h"
#include "CDD_SENT_Cfg.h"
#include "SchM_Sent.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: These macros are distinct */
#define SENT_VENDOR_ID                       174
#define SENT_MODULE_ID                       255
#define SENT_AR_RELEASE_MAJOR_VERSION        4
#define SENT_AR_RELEASE_MINOR_VERSION        6
#define SENT_AR_RELEASE_REVISION_VERSION     0
#define SENT_SW_MAJOR_VERSION                1
#define SENT_SW_MINOR_VERSION                5
#define SENT_SW_PATCH_VERSION                1
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
* @brief   API SENT_Sent_DeInit service called when the SENT driver and the Hardware
*          are already uninitialized
*
*
*/
#define SENT_E_ALREADY_UNINITIALIZED_U8        ((uint8)0x0A)

/**
* @brief   API service used with a channel out of range
*
* */
#define SENT_E_INVALID_CHANNEL_U8              ((uint8)0x0B)

/**
* @brief   API service used without module initialization
*
*
*/
#define SENT_E_UNINIT_U8                       ((uint8)0x0C)

/**
* @brief   API SENT_Sent_Init service called when the SENT driver and the Hardware
*          are already initialized
*
*
*/
#define SENT_E_ALREADY_INITIALIZED_U8          ((uint8)0x0D)

/**
* @brief   API service called with wrong parameter
*
*
*/
#define SENT_E_PARAM_U8                        ((uint8)0x0E)

/**
* @brief   API Sent_Init service execution failed
*
*
*/
#define SENT_E_INIT_FAILED_U8                  ((uint8)0x0FU)

/**
* @brief API service called with wrong core ID
*
*
*/
#define SENT_E_PARTITION_MAPPING               ((uint8)0x10U)

/**
* @brief API service ID for Sent_Init function
* @details Parameters used when raising an error/exception
*
*/
#define SENT_INIT_ID_U8                        ((uint8)0x1U)

/**
* @brief API service ID for Sent_DeInit function
* @details Parameters used when raising an error/exception
*
*/
#define SENT_DEINIT_ID_U8                      ((uint8)0x2U)

/**
* @brief API service ID for Sent_GetVersionInfo function
* @details Parameters used when raising an error/exception
*
*/
#define SENT_GETVERSIONINFO_ID_U8              ((uint8)0x3U)

/**
* @brief API service ID for Sent_RequestSpcPulse function
* @details Parameters used when raising an error/exception
*
*/
#define SENT_REQUEST_SPC_ID_U8                 ((uint8)0x4U)

/**
* @brief API service ID for Sent_MainFunctionFastMessageRead function
* @details Parameters used when raising an error/exception
*
*/
#define SENT_FAST_MSG_READ_ID_U8               ((uint8)0x5U)

/**
* @brief API service ID for Sent_MainFunctionSlowMessageRead function
* @details Parameters used when raising an error/exception
*
*/
#define SENT_SLOW_MSG_READ_ID_U8               ((uint8)0x6U)
/*==================================================================================================
*                                              ENUMS
==================================================================================================*/


/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief SENT Status type
 *
 */
typedef enum
{
    SENT_UNINIT = 0U,   /*!< The SENT is not initialized */
    SENT_INITIALIZED    /*!< The SENT has been initialized */
}Sent_StatusType;

/**
 * @brief SENT Function Call Result
 *
 */
typedef enum
{
    SENT_OK = 0U,/**< SENT_OK     Call Correctly                                                                   */
    SENT_NOT_OK, /**< SENT_NOT_OK Call Error return                                                                */
    SENT_BUSY    /**< SENT_BUSY   Transmit request could not be processed because no transmit object was available */
} Sent_ReturnType;

/**
 * @brief SENT nibble data mode control. Refer to SENT SAE J2716 2010 for detail protocol definition
 *
 */
typedef enum
{
    SENT_DATA_NIBBLE_MODE_A    = 0x0U,   /*!< Frame format A */
    SENT_DATA_NIBBLE_MODE_H1   = 0x1U,   /*!< Frame format H1 */
    SENT_DATA_NIBBLE_MODE_H2   = 0x2U,   /*!< Frame format H2 */
    SENT_DATA_NIBBLE_MODE_H3   = 0x3U,   /*!< Frame format H3 */
    SENT_DATA_NIBBLE_MODE_H4   = 0x4U,   /*!< Frame format H4 */
    SENT_DATA_NIBBLE_MODE_H5   = 0x5U,   /*!< Frame format H5 */
    SENT_DATA_NIBBLE_MODE_H6   = 0x6U,   /*!< Frame format H6 */
    SENT_DATA_NIBBLE_MODE_H7   = 0x7U    /*!< Frame format H7 */
} Sent_DataNibbleModeType;

/**
 * @brief SENT calibration valid type
 *
 */
typedef enum
{
    SENT_CALIBRATION_VALID_DISABLE         = 0x0U,   /*!< The successive calibration pulses diagnostic will be disabled */
    SENT_CALIBRATION_VALID_WITHIN_20       = 0x1U,   /*!< The difference of received calibration pulse and receiver configuration is within 20%, the message is deemed to be valid */
    SENT_CALIBRATION_VALID_FROM_20_TO_25   = 0x2U,   /*!< The difference of received calibration pulse and receiver configuration is more than 20% but less than 25%, the message is deemed to be valid */
} Sent_CalibrationValidType;

/**
 * @brief SENT Successive calibration pulses diagnostic option
 *
 */
typedef enum
{
    SENT_CALIBRATION_PULSE_DIAG_OPTION2       = 0x0U,   /*!< Option 2 i.e. Low Latency Option as per SAE Specification */
    SENT_CALIBRATION_PULSE_DIAG_OPTION1       = 0x1U,   /*!< Option 1 i.e. Preferred but High Latency Option as per SAE Specification */
} Sent_CalDiagOptionType;

/**
 * @brief Determines how long the bus idle flag will assert when SENT bus is idle
 *
 */
typedef enum
{
    SENT_IDLE_COUNT_FLAG_DISABLE           = 0x0U,   /*!< The bus idle flag will never assert */
    SENT_IDLE_COUNT_FLAG_254_TICKS         = 0x1U,   /*!< The bus is idle for more than 127*2 ticks, then the bus idle flag will assert */
    SENT_IDLE_COUNT_FLAG_508_TICKS         = 0x2U,   /*!< The bus is idle for more than 254*2 ticks, then the bus idle flag will assert */
    SENT_IDLE_COUNT_FLAG_1016_TICKS        = 0x4U,   /*!< The bus is idle for more than 508*2 ticks, then the bus idle flag will assert */
    SENT_IDLE_COUNT_FLAG_2032_TICKS        = 0x8U,   /*!< The bus is idle for more than 1016*2 ticks, then the bus idle flag will assert */
} Sent_IdleCountType;

/**
 * @brief SENT Slow message type.
 *
 */
typedef enum
{
    SENT_SERIAL_MESSAGE_SHORT                = 0x0U,   /*!< short serial data message */
    SENT_SERIAL_MESSAGE_ENHANCE_12DATA_8ID   = 0x1U,   /*!< enhanced serial data message with 12-bit data and 8-bit ID */
    SENT_SERIAL_MESSAGE_ENHANCE_16DATA_4ID   = 0x2U,   /*!< enhanced serial data message with 16-bit data and 4-bit ID */
} Sent_SerialMessageType;

/**
 * @brief SENT trigger type in SPC mode
 *
 */
typedef enum
{
    SENT_SPC_SOFTWARE_TRIGGER               = 0x0U,   /*!< SPC pulse triggered by software method */
    SENT_SPC_EXTERNAL_TRIGGER               = 0x1U,   /*!< SPC pulse triggered by external trigger */
} Sent_SpcTriggerType;

/**
 * @brief Select the tick base in SPC mode
 *
 */
typedef enum
{
    SENT_SPC_TICK_BASE_PRE_MSG         = 0x0U,   /*!< Previous received message tick base */
    SENT_SPC_TICK_BASE_CONFIGURED      = 0x1U,   /*!< SENT configured tick base */
} Sent_SpcTickBaseType;

/**
 * @brief Structure for fast message buffer.
 *
 */
typedef struct
{
    uint8  u8CRC;             /*!< Receied fast message CRC data. */
    uint8  u8SC;              /*!< Fast message status communication nibble value. */
    uint32 u32Timestamp;      /*!< Fast message timestamp value. */
    uint32 u32Data;           /*!< Received fast message data nibble. */
} Sent_FastMessageDataType;

/**
 * @brief Structure for slow message buffer.
 *
 */
typedef struct
{
    Sent_SerialMessageType eMsgType;      /*!< Slow message type. */
    uint8  u8CRC;                         /*!< Slow message crc data. */
    uint8  u8ID;                          /*!< Slow message ID. */
    uint16 u16Data;                       /*!< Slow message data. */
    uint32 u32Timestamp;                  /*!< Slow message timestamp value. */
} Sent_SlowMessageDataType;

/**
 * @brief This type shall be chosen in order to implement fast message error callback function prototype.
 */
typedef void (*Sent_FastMsgNotifactionType)(Sent_FastMessageDataType *pMsg);

/**
 * @brief This type shall be chosen in order to implement slow message error callback function prototype.
 */
typedef void (*Sent_SlowMsgNotifactionType)(Sent_SlowMessageDataType *pMsg);

/**
 * @brief This type shall be chosen in order to implement fast message received callback function prototype.
 */
typedef void (*Sent_FastErrorNotifactionType)(uint32 u32Status);

/**
 * @brief This type shall be chosen in order to implement slow message received callback function prototype.
 */
typedef void (*Sent_SlowErrorNotifactionType)(uint32 u32Status);

/**
 * @brief structure to configure the SENT channel SPC.
 *
 */
typedef struct
{
    boolean                     bSpcModeEn;           /*!< Enable SPC mode. */
    boolean                     bCalDiagEn;           /*!< Enable Calibration diagnosis. */
    uint8                     u8PulseWidth;           /*!< Configure the width of the SPC pulse. */
    uint8                     u8PulseDelay;           /*!< Configure the delay between SPC-trigger assert and finally generate a SPC pulse. */
    Sent_SpcTickBaseType        eSpcTickBase;         /*!< Select the tick base of SPC */
    Sent_SpcTriggerType         eSpcTrigger;          /*!< Select the SPC pulse trigger type. */
} Sent_SpcConfigType;

/**
 * @brief structure to configure the SENT channel.
 *
 */
typedef struct
{
    uint8                          u8ChannelLogicId;        /*!< The Channel ID */
    uint8                          u8ChannelHwId;           /*!< The Channel physical index */
    uint8                          u8DataNibbleNumber;      /*!< The received data number will be configured value plus 1, 0 and value bigger than 5 is forbidden. */
    uint8                          u8DigitalFilterCount;    /*!< The input signal needs keep stable for (filt_cnt<<2)* function_clk cycles to pass through the digital filter. */
    uint16                         u16TickScaler;           /*!< The value plus 1 is used to divide the function clock to tick clock. */
    boolean                        bFastMessageFifoEn;      /*!< Enable Channel FIFO function. */
    boolean                        bTickCompensateEn;       /*!< Enable the tick period compensate function. */
    boolean                        bUseAlternativeCrc;      /*!< Use alternative 4-bit CRC algorithm instead of SAE CRC algorithm. */
    boolean                        bFastMsgCRCCheckEn;      /*!< Enable Fast message CRC check.  */
    boolean                        bFastMsgCRCAugEn;        /*!< Augmentation is selected for Fast Message CRC calculation. */
    boolean                        bFastMsgDataChangeEn;    /*!< If enabled, the SENT will only assert the fast message ready flag when received data has changed compared with previous data */
    boolean                        bFastMsgCRCWithSCEn;     /*!< If enabled, the crc calculation will includes S&C nibble. */
    boolean                        bSlowMsgCRCAugEn;        /*!< Augmentation is selected for Short Serial Message CRC calculation. */
    boolean                        bPausePulseEn;           /*!< If enabled, a pause pulse will be appended at the end of a frame. */
    boolean                        bSlowDmaEn;              /*!< Enable the Slow message DMA feature. */
    boolean                        bFastDmaEn;              /*!< Enable the Fast message DMA feature. */
    boolean                        bFastInterruptEn;        /*!< Enable the Fast message Interrupt feature. */
    boolean                        bSlowInterruptEn;        /*!< Enable the Slow message Interrupt feature. */
    boolean                        bChannelEn;              /*!< Enable the SENT Channel. */
    Sent_CalDiagOptionType         eCalDiagOption;          /*!< Successive calibration pulses diagnostic option. */
    Sent_DataNibbleModeType        eDataNibbleMode;         /*!< Refer to SENT SAE J2716 2010 for detail protocol definition. */
    Sent_CalibrationValidType      eCalValid;               /*!< Select valid Calibration pulse range */
    Sent_IdleCountType             eIdleCount;              /*!< Select how long the bus idle flag will assert when bus is idle */
    Sent_FastErrorNotifactionType  pFastErrNotification;    /*!< Fast message error notification */
    Sent_SlowErrorNotifactionType  pSlowErrNotification;    /*!< Slow message error notification */
    Sent_FastMsgNotifactionType    pFastMsgNotification;    /*!< Fast message Receive notification */
    Sent_SlowMsgNotifactionType    pSlowMsgNotification;    /*!< Slow message Receive notification */
    Sent_SpcConfigType            *pSpcModeCfg;             /*!< The Pointer of the Sent_SpcConfigType */
} Sent_ChannelConfigType;

/**
 * @brief structure to configure the SENT instance.
 *
 */
typedef struct
{
    uint8                      u8InstanceLogicIndex;     /*!< The controller ID */
    uint8                      u8InstanceHwIndex;        /*!< The controller physical index */
    boolean                    bControllerEn;            /*!< Sent Controller Activation */
    boolean                    bFifoOverflowEn;          /*!< Fast message FIFO overflow interrupt enable */
    boolean                    bDebugModeEn;             /*!< If enable, the SENT will keep running under debug mode. */
    boolean                    bAutoClearReadyFlag;      /*!< When enabled after data ready read of received data, crc and timestamp register will prevent the assert of data overflow flag. */
    uint8                      u8WaterMark;              /*!< When Fast message DMA request is enabled, the request will asserts if data number in FIFO is more than watermark */
    uint8                      u8Prescaller;             /*!< This value is used to divide the function clock to count the timestamp */
    uint8                      u8ChannelCount;           /*!< The counter of channel used */
    Sent_ChannelConfigType    **pSentChannelCfg;         /*!< The Pointer array of the Sent_ChannelConfigType */
} Sent_InstanceConfigType;


/**
 * @brief Data structure containing the set of configuration parameters required for initializing the Sent instance(s) and channel(s).
 *
 */
typedef struct
{
    uint8                      u8InstanceCount;             /*!< The counter of the used Sent instance */
    Sent_InstanceConfigType  **pSentInstanceCfg;            /*!< The Pointer array of the Sent_InstanceConfigType */
    boolean*                   Sent_CoresMappingPtr;        /*!< The Pointer array of the core mapping, if true, means the current core need to manage at least one sent instance */
    uint32*                    Sent_CtrlCoresMappingPtr;    /*!< The Pointer array of the controller mapping, the value indicate which core should manage the sent instance */
} Sent_ConfigType;
/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define SENT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Sent_MemMap.h"

extern const Sent_ConfigType SentConfig;

#define SENT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Sent_MemMap.h"

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#define SENT_START_SEC_CODE
#include "Sent_MemMap.h"

/**
* @brief        Function that initializes the SENT module.
* @details      This function sets the SENTCR register with the value of "pConfigPtr" and set
*               the channel's priority, ECP and DPA
*
* @param[in]    pConfigPtr - pointer to SENT configuration structure
*
* @return       void
*
*/
void Sent_Init(const Sent_ConfigType *pConfigPtr);

#if (SENT_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the SENT driver.
 * @details        This service is a non reentrant function.
 *                 Returns all underlying hardware to a state comparable to their
 *                 power on reset state, and de-initialize the SENT driver.
 *
 * @return         void
 * @implements     SENT_DeInit_Activity
 */
void Sent_DeInit(void);
#endif/* (SENT_DEINIT_API == STD_ON) */

#if (SENT_GET_VERSION_INFO_API == STD_ON)
/**
 * @brief   This service returns the version information of this module.
 * @details This  service is Non reentrant and returns the version information of this module.
 *          The version information includes:
 *          - Module Id
 *          - Vendor Id
 *          - Vendor specific version numbers
 *          If source code for caller and callee of this function is available this function should
 *          be realized as a macro. The macro should be defined in the modules header file.
 *
 * @param[out]    pVersioninfo      Pointer to location to store version info
 *
 * @return void
 *
 * @api
 *
 * @implements SENT_GetVersionInfo_Activity
 *
 */
SENT_TEXT_SECTION void Sent_GetVersionInfo(Std_VersionInfoType *pVersioninfo);
#endif /* (SENT_GET_VERSION_INFO_API == STD_ON) */

/**
 * @brief   This service request the SPC pulse.
 * @details The transmission occurs depending on an SPC Pulse (a synchronization signal) from the receiver module, and the SPC
 *          Pulse is implemented as a low pulse. When the sensor receives the coordination signal from SOC and then it starts
 *          transmitting the messages.
 *
 * @param[in]    u8ControllerID      The sent controller index
 * @param[in]    u8ChannelID         The sent channel index
 *
 * @return void
 *
 * @api
 *
 * @implements Sent_RequestSpcPulse_Activity
 *
 */
void Sent_RequestSpcPulse(uint8 u8ControllerID, uint8 u8ChannelID);

/**
 * @brief   This function performs the polling of reading fast message when FastMsgReadType is set to Polling.
 * @details If FastMsgReadType is set to Polling, should call this API in period.
 *
 * @return void
 *
 * @api
 *
 * @implements Sent_MainFunctionFastMessageRead_Activity
 *
 */
void Sent_MainFunctionFastMessageRead(void);

/**
 * @brief   This function performs the polling of reading Slow message when SlowMsgReadType is set to Polling.
 * @details If SlowMsgReadType is set to Polling, should call this API in period.
 *
 * @return void
 *
 * @api
 *
 * @implements Sent_MainFunctionSlowMessageRead_Activity
 *
 */
void Sent_MainFunctionSlowMessageRead(void);

#define SENT_STOP_SEC_CODE
#include "Sent_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif  /* SENT_H */
/** @} */

