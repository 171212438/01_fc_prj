/**
 *   @file    CDD_SSI.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SSI - SSI driver header file.
 *   @details SSI driver header file, containing the Autosar API specification and other variables
 *              and functions that are exported by the SSI driver.
 *
 *   @addtogroup SSI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SSI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2025-2027 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       2025/03/18    Flagchip054   N/A           SSI Initial Version
==================================================================================================*/

#ifndef CDD_SSI_H
#define CDD_SSI_H

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
#include "Ssi_Reg.h"
#include "CDD_Ssi_Cfg.h"
#include "SchM_Ssi.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SSI_VENDOR_ID                   174
#define SSI_MODULE_ID                   255
#define SSI_AR_RELEASE_MAJOR_VERSION    4
#define SSI_AR_RELEASE_MINOR_VERSION    6
#define SSI_AR_RELEASE_REVISION_VERSION 0
#define SSI_SW_MAJOR_VERSION            1
#define SSI_SW_MINOR_VERSION            5
#define SSI_SW_PATCH_VERSION            1
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
 * @brief   API SSI_Ssi_DeInit service called when the SSI driver and the Hardware
 *          are already uninitialized
 *
 * @implements     FUNC_Ssi_00001
 */
#define SSI_E_ALREADY_UNINITIALIZED_U8  ((uint8)0x0A)

/**
 * @brief   API service used without module initialization
 *
 * @implements     FUNC_Ssi_00001
 */
#define SSI_E_UNINIT_U8                 ((uint8)0x0B)

/**
 * @brief   API service called with wrong parameter
 *
 * @implements     FUNC_Ssi_00001
 */
#define SSI_E_PARAM_U8                  ((uint8)0x0C)

/**
 * @brief   API SSI_Ssi_Init service called when the SSI driver and the Hardware
 *          are already initialized
 *
 * @implements     FUNC_Ssi_00001
 */
#define SSI_E_ALREADY_INITIALIZED_U8    ((uint8)0x0D)

/**
 * @brief   API SSI_Init service execution failed
 *
 * @implements     FUNC_Ssi_00001
 */
#define SSI_E_INIT_FAILED_U8            ((uint8)0x0EU)

/**
 * @brief API service called with wrong core ID
 *
 *
 */
#define SSI_E_PARTITION_MAPPING         ((uint8)0x0FU)

/**
 * @brief API service called with wrong core ID
 *
 * @implements     FUNC_Ssi_00001
 */
#define SSI_E_TIMEOUT_U8                ((uint8)0x10U)

/**
 * @brief API service ID for Ssi_Init function
 * @details Parameters used when raising an error/exception
 *
 */
#define SSI_INIT_ID_U8                  ((uint8)0x1U)

/**
 * @brief API service ID for Ssi_DeInit function
 * @details Parameters used when raising an error/exception
 *
 */
#define SSI_DEINIT_ID_U8                ((uint8)0x2U)

/**
 * @brief API service ID for Ssi_GetVersionInfo function
 * @details Parameters used when raising an error/exception
 *
 */
#define SSI_GETVERSIONINFO_ID_U8        ((uint8)0x3U)

/**
 * @brief API service ID for Ssi_RequestSpcPulse function
 * @details Parameters used when raising an error/exception
 *
 */
#define SSI_MSG_READ_ID_U8              ((uint8)0x4U)

#define SSI_NORMAL_BIT                  ((uint8)0x7U) /* Normal operation bit */
#define SSI_STOP_BIT                    ((uint8)0x6U) /* Stop condition bit */
#define SSI_TIMEOUT_ERR_BIT             ((uint8)0x5U) /* Timeout error bit */
#define SSI_PROTCOAL_ERR_BIT            ((uint8)0x4U) /* Protocol error bit */
#define SSI_PULSE_WIDTH_ERR_BIT         ((uint8)0x3U) /* Pulse width error bit */
#define SSI_INTERVAL_ERR_BIT            ((uint8)0x2U) /* Interval error bit */
#define SSI_DECODE_ERR_BIT              ((uint8)0x1U) /* Decode error bit */
#define SSI_SPC_RANGE_ERR_BIT           ((uint8)0x0U) /* SPC range error bit */
/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief SSI Status type
 *
 * @implements     FUNC_Ssi_00011
 *
 */
typedef enum
{
    SSI_UNINIT = 0U, /*!< The SSI is not initialized */
    SSI_INITIALIZED  /*!< The SSI has been initialized */
} Ssi_StatusType;

/**
 * @brief SSI Function Call Result
 *
 *
 * @implements     FUNC_Ssi_00010
 *
 */
typedef enum
{
    SSI_OK = 0U, /**< SSI_OK     Call Correctly */
    SSI_NOT_OK,  /**< SSI_NOT_OK Call Error return  */
} Ssi_ReturnType;

/**
 * @brief SSI Protocol Mode Type
 *
 * This enumeration defines the different protocol modes supported by the SSI driver.
 * Each mode specifies a particular protocol configuration for the SSI communication.
 *
 * @enum Ssi_ProtocolModeType
 *
 * @implements     FUNC_Ssi_00006
 *
 */
typedef enum
{
    SSI_NORMAL = 0x0U, /**< Normal protocol mode */
    SSI_PWM    = 0x1U, /**< PWM protocol mode */
    SSI_AK     = 0x2U, /**< AK protocol mode */
    SSI_GPWM   = 0x3U  /**< GPWM protocol mode */
} Ssi_ProtocolModeType;

/**
 * @brief SSI Channel Selection Type
 *
 * This enumeration defines the different channel selection modes supported by the SSI driver.
 * Each mode specifies a particular channel configuration for the SSI communication.
 *
 * @enum Ssi_ChnnlSelType
 *
 * @implements     FUNC_Ssi_00007
 *
 */
typedef enum
{
    SSI_INTERNAL_CMP = 0x0U, /**< Internal comparator mode */
    SSI_DIGITAL_PAD  = 0x1U, /**< Digital pad mode */
    SSI_ONCHIP_CMP   = 0x2U, /**< On-chip comparator mode */
    SSI_TRGSEL       = 0x3U  /**< Trigger select mode */
} Ssi_ChnnlSelType;

/**
 * @brief SSI Resistance Selection Type
 *
 * This enumeration defines the different resistance selection modes supported by the SSI driver.
 * Each mode specifies a particular resistance configuration for the SSI communication.
 *
 * @enum Ssi_ResSelType
 *
 * @implements     FUNC_Ssi_00008
 *
 */
typedef enum
{
    SSI_RES_50OHM = 0x0U, /**< 50 Ohm resistance mode */
    SSI_RES_30OHM = 0x1U  /**< 30 Ohm resistance mode */
} Ssi_ResSelType;

/**
 * @brief SSI Channel Switch Type
 *
 * This enumeration defines the different channel switch modes supported by the SSI driver.
 * Each mode specifies a particular channel switching configuration for the SSI communication.
 *
 * @enum Ssi_ChnnlSwitchType
 *
 * @implements     FUNC_Ssi_00009
 *
 */
typedef enum
{
    SSI_INM_VLD = 0x0U, /**< INM mode valid */
    SSI_INH_VLD = 0x1U  /**< INH mode valid */
} Ssi_ChnnlSwitchType;

/**
 * @brief Structure for message buffer.
 *
 * This structure contains the necessary information for handling messages in the SSI driver.
 * It includes sub-index, status, protocol type, and data fields.
 *
 * @struct Ssi_DataInfType
 *
 * @implements     FUNC_Ssi_00005 FUNC_Ssi_00041
 *
 */
typedef struct
{
    uint8  u8Subidx;  /**< Sub-index of the message */
    uint8  u8Status;  /**< Status of the message */
    uint8  u8Prot;    /**< Protocol type of the message */
    uint32 U32Whlval; /**< Message Wheel value */
    uint32 u32Date1;  /**< Message data1 value */
    uint32 u32Date2;  /**< Message data2 value */
} Ssi_MessageDataType;

/**
 * @brief This type shall be chosen in order to implement slow message received callback function
 * prototype.
 *
 * @implements FUNC_Ssi_00038
 */
typedef void (*Ssi_NotifactionType)(Ssi_MessageDataType *pMsg);

/**
 * @brief Structure to configure the SSI sub-instance.
 *
 * This structure contains the configuration parameters for a single SSI sub-instance.
 * It includes various settings such as sub-instance ID, hardware ID, protocol mode, channel
 * selection, resistance selection, channel switch, and notification function.
 *
 * @struct Ssi_SubInstanceConfigType
 *
 * @implements     FUNC_Ssi_00004
 *
 */
typedef struct
{
    uint8                u8SubInstanceLogicId; /**< Logical ID of the sub-instance */
    uint8                u8SubInstanceHwId;    /**< Hardware ID of the sub-instance */
    uint8                u8GpwmToc;            /**< The general PWM timeout counter. */
    boolean              bSubInstanceEn;       /**< Sub-instance enable flag */
    boolean              bInterruptEn;         /**< Interrupt enable flag */
    boolean              bFilterEn;            /**< Filter enable flag */
    boolean              bIntCmpEn;            /**< Internal comparison enable flag */
    boolean              bWindowsRangeCheck;   /**< Windows range check enable flag */
    boolean              bGpwmInv;             /**< Invert the general PWM input enable flag */
    Ssi_ProtocolModeType eProtocolMode;        /**< Protocol mode selection */
    Ssi_ChnnlSelType     eChnlSelect;          /**< Channel selection mode */
    Ssi_ResSelType       eResSelect;           /**< Resistance selection mode */
    Ssi_ChnnlSwitchType  eChnlSwitch;          /**< Channel switch mode */
    /* FUNC_Ssi_00037 */
    Ssi_NotifactionType pNotification; /**< Notification function pointer */
    uint32              u32FiltWidth;  /**< Filter width */
} Ssi_SubinstanceConfigType;

/**
 * @brief Structure to configure the SSI instance.
 *
 * This structure contains the configuration parameters for a single SSI instance.
 * It includes various settings such as instance ID, hardware ID, sub-instance count, divider clock,
 * controller enable flag, and pointers to sub-instance configurations.
 *
 * @struct SSI_InstanceConfigType
 *
 * @implements     FUNC_Ssi_00003
 *
 */
typedef struct
{
    uint8                       u8InstanceLogicIndex; /**< Logical index of the instance */
    uint8                       u8InstanceHwIndex;    /**< Hardware index of the instance */
    uint8                       u8SubInstanceCount;   /**< Number of sub-instances */
    uint8                       u8DivClock;           /**< divider clock setting */
    uint8                       u8RefWidth;           /**< PWM Reference Pulse Width */
    uint8                       u8AkIeth; /**< AK Protocol Interval Error Threshold Configuration */
    uint8                       u8AkPeth; /**< AK Protocol Period Error Threshold Configuration */
    uint8                       u8PwmPeth; /**< PWM Protocol Period Error Threshold Configuration */
    boolean                     bControllerEn;               /**< Controller enable flag */
    uint32                      u32LowGlobalCounterWindows;  /**< Low global window value */
    uint32                      u32HighGlobalCounterWindows; /**< High global window value */
    Ssi_SubinstanceConfigType **pSSISubInstanceCfg; /**< Pointer to an array of sub-instance
                                                       configurations */
} Ssi_InstanceConfigType;

/**
 * @brief Data structure containing the set of configuration parameters required for initializing
 * the SSI instance(s) and channel(s).
 *
 * @implements     FUNC_Ssi_00002
 */
typedef struct
{
    uint8 u8InstanceCount;                    /*!< The counter of the used SSI instance */
    Ssi_InstanceConfigType **pSSIInstanceCfg; /*!< The Pointer array of the SSI_InstanceConfigType */
    boolean *SSI_CoresMappingPtr;    /*!< The Pointer array of the core mapping, if true, means the
                                        current core need to manage at least one ssi instance */
    uint32 *SSI_CtrlCoresMappingPtr; /*!< The Pointer array of the controller mapping, the value
                                        indicate which core should manage the ssi instance */
} Ssi_ConfigType;
/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define SSI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ssi_MemMap.h"

extern const Ssi_ConfigType SsiConfig;

#define SSI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ssi_MemMap.h"

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#define SSI_START_SEC_CODE
#include "Ssi_MemMap.h"

/**
 * @brief        Function that initializes the SSI module.
 * @details      This function sets the SSICR register with the value of "pConfigPtr" and set
 *               the channel's priority, ECP and DPA
 *
 * @param[in]    pConfigPtr - pointer to SSI configuration structure
 *
 * @return       void
 *
 */
void Ssi_Init(const Ssi_ConfigType *pConfigPtr);

#if (SSI_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the SSI driver.
 * @details        This service is a non reentrant function.
 *                 Returns all underlying hardware to a state comparable to their
 *                 power on reset state, and de-initialize the SSI driver.
 *
 * @return         void
 * @implements     SSI_DeInit_Activity
 */
void Ssi_DeInit(void);
#endif /* (SSI_DEINIT_API == STD_ON) */

#if (SSI_GET_VERSION_INFO_API == STD_ON)
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
 * @implements SSI_GetVersionInfo_Activity
 *
 */
SSI_TEXT_SECTION void Ssi_GetVersionInfo(Std_VersionInfoType *pVersioninfo);
#endif /* (SSI_GET_VERSION_INFO_API == STD_ON) */

/**
 * @brief   This function performs the polling of reading fast message when FastMsgReadType is set
 * to Polling.
 * @details If FastMsgReadType is set to Polling, should call this API in period.
 *
 * @return void
 *
 * @api
 *
 * @implements SSI_MainFunctionFastMessageRead_Activity
 *
 */
void Ssi_MainFunctionMessageRead(void);

#define SSI_STOP_SEC_CODE
#include "Ssi_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* SSI_H */
/** @} */
