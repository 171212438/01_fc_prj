/**
 *   @file    CDD_Msc.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Msc - High level header of MSC driver.
 *   @details This file contains declarations of the functions defined by AutoSAR.
 *
 *   @addtogroup MSC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : MSC
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
*   0.6.0       09/11/2023    QXW0084       N/A          MSC Initial Version
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef MSC_H
#define MSC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "CDD_Msc_Cfg.h"
#include "CDD_Msc_PBCfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/** @brief      CDD_Msc.h MSC_VENDOR_ID definition */
#define MSC_VENDOR_ID 174
/** @brief      CDD_Msc.h MSC_MODULE_ID definition */
#define MSC_MODULE_ID 253

/** @brief      CDD_Msc.h MSC_AR_RELEASE_MAJOR_VERSION definition */
#define MSC_AR_RELEASE_MAJOR_VERSION 4
/** @brief      CDD_Msc.h MSC_AR_RELEASE_MINOR_VERSION definition */
#define MSC_AR_RELEASE_MINOR_VERSION 6
/** @brief      CDD_Msc.h MSC_AR_RELEASE_REVISION_VERSION definition */
#define MSC_AR_RELEASE_REVISION_VERSION 0
/** @brief      CDD_Msc.h MSC_SW_MAJOR_VERSION definition */
#define MSC_SW_MAJOR_VERSION 1
/** @brief      CDD_Msc.h MSC_SW_MINOR_VERSION definition */
#define MSC_SW_MINOR_VERSION 5
/** @brief      CDD_Msc.h MSC_SW_PATCH_VERSION definition */
#define MSC_SW_PATCH_VERSION 1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
#if (MSC_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief            MSC Instance ID
 */
#define MSC_INSTANCE_ID ((uint8)0x00)

/**
 * @brief            API service called with a NULL pointer
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_PARAM_VALUE (0x00)", when API Service is called
 *                   with an invalid value. In case of this error, the API service
 *                   shall return immediately without any further action,
 *                   beside reporting this development error.
 *
 * @api
 */
#define MSC_E_PARAM_VALUE ((uint8)0x00U)

/**
 * @brief            API service called with invalid configuration pointer
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_INVALID_POINTER (0x01)", when API Service is called
 *                   with invalid configuration pointer.
 *
 * @api
 */
#define MSC_E_INVALID_POINTER ((uint8)0x01U)

/**
 * @brief            API service used without module initialization
 * @details          The MSC Driver module shall report the development error "MSC_E_UNINIT (0x03)",
 *                   when the API Service is used without module initialization.
 *
 * @api
 */
#define MSC_E_UNINIT ((uint8)0x03U)

/**
 * @brief            Invalid state transition for the current state
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_STATE_TRANSITION (0x04)", when Invalid state transition
 *                   occurs from the current state.
 *
 * @api
 */
#define MSC_E_STATE_TRANSITION ((uint8)0x04U)

/**
 * @brief            API service called with a NULL pointer
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_CHANNEL_ACTIVE (0x05)", when API Service Msc_StartChannel is called
 *                   with module state MSC_CHANNEL_ACTIVE. In case of this error, the API service
 *                   shall return immediately without any further action,
 *                   beside reporting this development error.
 *
 * @api
 */
#define MSC_E_CHANNEL_ACTIVE ((uint8)0x05U)

/**
 * @brief            API service called with channel not started.
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_CHANNEL_NOT_STARTED (0x06)", when API Service Msc_StopChannel is called
 *                   with module state MSC_CHANNEL_IDLE. In case of this error, the API service
 *                   shall return immediately without any further action,
 *                   beside reporting this development error.
 *
 * @api
 */
#define MSC_E_CHANNEL_NOT_STARTED ((uint8)0x06U)

/**
 * @brief            API service used with an invalid or inactive channel parameter
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_INVALID_CHANNEL (0x07)", when API Service used with
 *                   an invalid or inactive channel parameter.
 *
 * @api
 */
#define MSC_E_INVALID_CHANNEL ((uint8)0x07U)
/**
 * @brief            API service called in a not allowed configuration
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_CONFIG_VALUE (0x08)", when API Service is called
 *                   in a not allowed configuration.
 *
 * @api
 */
#define MSC_E_CONFIG_VALUE ((uint8)0x08U)
/**
 * @brief            API service used with an invalid or inactive rx index parameter
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_INVALID_RXINDEX (0x09)", when API Service used with
 *                   an invalid or inactive rxindex parameter.
 *
 * @api
 */
#define MSC_E_INVALID_RXINDEX ((uint8)0x09U)
/**
 * @brief            API service used while tx channel is in invalid status.
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_TX_BUSY (0x0A)", when API Service used while tx
 *                   channel is in invalid status.
 *
 * @api
 */
#define MSC_E_TX_BUSY ((uint8)0x0AU)
/**
 * @brief            API service used while rx channel is in invalid status.
 * @details          The MSC Driver module shall report the development error
 *                   "MSC_E_RX_BUSY (0x0B)", when API Service used while rx
 *                   channel is in invalid status.
 *
 * @api
 */
#define MSC_E_RX_BUSY ((uint8)0x0BU)

#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) || defined(__DOXYGEN__) */

/**
 * @brief            MSC driver states
 * @details          The MSC_UNINIT state indicates that the MSC driver has not been
 *                   initialized.
 *
 * @api
 */
#define MSC_UNINIT 0x01U

/**
 * @brief            MSC driver states
 * @details          The MSC_INIT state indicates that the MSC driver has been
 *                   initialized, making each available channel ready for service.
 *
 * @api
 */
#define MSC_INIT 0x02U

/**
 * @brief            MSC Channel states
 * @details          The individual channel has been initialized (using
 *                   at least one statically configured data set) and
 *                   is able to participate in the MSC cluster.
 */
#define MSC_CHANNEL_ACTIVE 0x03U

/**
 * @brief            MSC Channel states
 * @details          The individual channel is not ready to
 *                   proceess a frame.
 */
#define MSC_CHANNEL_IDLE 0x04U

/**
 * @brief          MSC Frame and Channel states operation.
 * @details        MSC operation states for a MSC channel or frame, as returned
 *                 by the API service Msc_GetTxStatus() and Msc_GetRxStatus().
 */
typedef enum
{
    MSC_E_OK = 0x00U,        /**< @brief Success Std_Type return code. */
    MSC_E_NOT_OK,            /**< @brief failure/error Std_Type return code. */
    MSC_CHANNEL_NOT_STARTED, /**< @brief Channel is not started. */
    MSC_TX_BUSY,             /**< @brief Command transmission in progress. */
    MSC_TX_OK,               /**< @brief Command transmission successful. */
    MSC_TX_ERROR,            /**< @brief Command transmission error. */
    MSC_RX_IDLE,             /**< @brief Waiting for data reception. */
    MSC_RX_BUSY,             /**< @brief Data reception in progress. */
    MSC_RX_OK,               /**< @brief Data reception successful. */
    MSC_RX_ERROR,            /**< @brief Data reception error. */
    MSC_RX_OVERFLOW,         /**< @brief Previous data overwritten by MSC current data reception. */
    MSC_RX_TIMEOUT,          /**< @brief Previous reception timeout by MSC current data reception. */
} Msc_StatusType;

/**
 * @brief
 * @details
 */
typedef enum
{
    MSC_RDR0       = 0x0U,
    MSC_RDR1       = 0x1U,
    MSC_RDR2       = 0x2U,
    MSC_RDR3       = 0x3U
} MSC_RDRxIndexType;

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define MSC_RDRx_COUNT 0x4U
/*==================================================================================================
                                             ENUMS
==================================================================================================*/
/**
 * @brief          API functions service IDs.
 * @details        Service IDs of the AUTOSAR MSC API.
 */
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3
    * Reason: Enumration is used*/
typedef enum
{
    MSC_INIT_ID                = (uint8)0x00U, /**< @brief Msc_Init()ID.*/
    MSC_START_CHANNEL_ID       = (uint8)0x01U, /**< @brief Msc_StartChannel() ID.*/
    MSC_SET_DATA_FRAME_ID      = (uint8)0x02U, /**< @brief Msc_SetDataFrame() ID.*/
    MSC_SEND_DATA_FRAME_ID     = (uint8)0x03U, /**< @brief Msc_SendDataFrame() ID.*/
    MSC_STOP_CHANNEL_ID        = (uint8)0x04U, /**< @brief Msc_StopChannel() ID.*/
    MSC_SEND_COMMAND_FRAME_ID  = (uint8)0x05U, /**< @brief Msc_SendCommandFrame() ID.*/
    MSC_GET_TX_STATUS_ID       = (uint8)0x06U, /**< @brief Msc_GetTxStatus() ID.*/
    MSC_GET_RX_STATUS_ID       = (uint8)0x07U, /**< @brief Msc_GetRxStatus() ID.*/
    MSC_GET_RX_16BIT_STATUS_ID = (uint8)0x08U, /**< @brief Msc_GetRxStatus16BitFrame() ID.*/
    MSC_SWITCH_SDI_ID          = (uint8)0x09U, /**< @brief Msc_SwitchSDIChannel() ID.*/
    MSC_SWITCH_EN_ID           = (uint8)0x0AU, /**< @brief Msc_SwitchEN() ID.*/
    MSC_GETVERSIONINFO_ID      = (uint8)0x0BU, /**< @brief Msc_GetVersionInfo() ID.*/
    MSC_DE_INIT_ID             = (uint8)0x0FU, /**< @brief Msc_Init()ID.*/
} Msc_APIFunctionIdsType;
/* PRQA S 1535 -- */
/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define CDD_MSC_START_SEC_CODE
#include "Msc_MemMap.h"

/**
 * @brief   Initializes the MSC module.
 * @details This function performs software initialization of MSC
 *          driver:
 *          - Set MSC channel state machine of all available MSC
 *            channels to MSC_CHANNEL_IDLE
 *          - Set driver state machine to MSC_INIT.
 *
 * @param[in] Config        Pointer to MSC driver configuration set.
 *
 * @return  void
 *
 * @api
 *
 *
 * @note    CDD MSC Service ID: 0x00.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_Init(const Msc_ConfigType *Config);

/**
 * @brief   DeInitializes the MSC module.
 * @details This function performs software De-initialization of MSC
 *          driver:
 *          - Set driver state machine to MSC_DEINIT.
 *
 * @return  void
 *
 * @api
 *
 *
 * @note    CDD MSC Service ID: 0x0F.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_DeInit(void);

/**
 * @brief   Start to transmit serialized PWM.
 * @details This function is responsible of starting transmission
 *          of serialized PMW on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_IDLE state.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x01.
 * @note    Synchronous, Reentrant for different channels.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_StartChannel(uint8 Channel);

/**
 * @brief   Set a Data on the MSC bus.
 * @details This function is responsible to set Data on the MSC channel before transmission.
 *
 * @param[in] Channel MSC channel to be initialized.
 * @param[in] Msc_DataBufferPtr Pointer to data to be transmitter in the data frame.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the input pointer is null or
 *                          the length is null or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state or configuration
 *                          is not MSC_TX_TRIGGER_CONTINUOUS.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x02.
 * @note    Synchronous, Non Reentrant.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 const *Msc_DataBufferPtr);

/**
 * @brief   Send a Data on the MSC bus.
 * @details This function is responsible to send Data on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 * @param[in] Msc_DataBufferPtr Pointer to data to be transmitter in the data frame.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the input pointer is null or
 *                          the length is null or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state or configuration
 *                          is not MSC_TX_TRIGGER_SINGLE.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x03.
 * @note    Synchronous, Non Reentrant.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SendDataFrame(uint8 Channel, uint32 const *Msc_DataBufferPtr);

/**
 * @brief   Stop transmitting serialized PWM.
 * @details This function is responsible to stop transmission
 *          of serialized PMW on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x04.
 * @note    Synchronous, Reentrant for different channels.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_StopChannel(uint8 Channel);

/**
 * @brief   Send a command on the MSC bus.
 * @details This function is responsible to send command on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 * @param[in] Msc_CommandBufferPtr Pointer to command to be transmitter in the command frame.
 * @param[in] Msc_CommandBufferBitLength length in bits of the command frame.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the input pointer is null or
 *                          the length is null or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x05.
 * @note    Synchronous, Non Reentrant.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SendCommandFrame(uint8 Channel, uint32  const *Msc_CommandBufferPtr, uint8 Msc_CommandBufferBitLength);

/**
 * @brief   Get the status of the command transmission on the MSC bus.
 * @details This function is responsible to give the transmission status
 *          of a command on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 *
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval MSC_TX_BUSY      MSC command transmission in progress.
 * @retval MSC_TX_OK        MSC command transmission successful.
 * @retval MSC_TX_ERROR     MSC command transmission error.
 * @retval MSC_CHANNEL_NOT_STARTED channel is in state MSC_CHANNEL_IDLE.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x06.
 * @note    Synchronous, Reentrant for different channels.
 *
 */
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_GetTxStatus(uint8 Channel);

/**
 * @brief   Get the status of a reception on the MSC bus.
 * @details This function is responsible to give the reception status
 *          of the MSC channel.
 *          If the reception of a response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 * @param[in] Channel       MSC channel to be checked.
 *
 * @param[out] RxDataBufferPtr   RxDataBufferPtr pointer to pointer to a shadow
 *                          buffer or memory mapped MSC Hardware
 *                          receive buffer where the current SDU is
 *                          stored.
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval MSC_RX_IDLE      MSC waiting for data reception.
 * @retval MSC_RX_BUSY      MSC command reception in progress.
 * @retval MSC_RX_OK        MSC command reception successful.
 * @retval MSC_RX_ERROR     MSC command reception error.
 * @retval MSC_CHANNEL_NOT_STARTED MSC channel is in state MSC_CHANNEL_IDLE.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x07.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_GetRxStatus(uint8 Channel, uint16 **RxDataBufferPtr);

/**
 * @brief   Get the status of a reception on the MSC bus.
 * @details This function is responsible to give the reception status
 *          of the MSC channel.
 *          If the reception of a response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 * @param[in] Channel       MSC channel to be checked.
 * @param[in] RxIndex       MSC RxIndex to be checked.
 *
 * @param[out] RxDataBufferPtr   RxDataBufferPtr pointer to pointer to a shadow
 *                          buffer or memory mapped MSC Hardware
 *                          receive buffer where the current SDU is
 *                          stored.
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval MSC_RX_IDLE      MSC waiting for data reception.
 * @retval MSC_RX_BUSY      MSC command reception in progress.
 * @retval MSC_RX_OK        MSC command reception successful.
 * @retval MSC_RX_ERROR     MSC command reception error.
 * @retval MSC_CHANNEL_NOT_STARTED MSC channel is in state MSC_CHANNEL_IDLE.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x08.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_GetRxStatus16BitFrame(uint8 Channel, MSC_RDRxIndexType RxIndex, uint16 **RxDataBufferPtr, uint8 *LogicAddr);

/**
 * @brief   Set the SDI channel.
 * @details This function is responsible to set the reception channel
 *          of the MSC channel.
 *
 * @param[in] Channel       MSC channel to be checked.
 * @param[in] SDIChannel    Rx channel to be set.
 *
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval E_OK             SDI channel has been set successfully.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x09.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);

/**
 * @brief   Set the EN channel.
 * @details This function is responsible to set the EN channel
 *          of the MSC channel.
 *
 * @param[in] Channel       MSC channel to be checked.
 * @param[in] ENx           ENC ENH ENL channel to be set.
 * @param[in] ENn           EN0 EN1 EN2 EN3 to be set.
 *
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval E_OK             EN channel has been set successfully.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x0A.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SwitchEN(uint8 Channel, Msc_ENxType Enx, Msc_ENxActiveType ENn);

#if (MSC_VERSION_INFO_API == STD_ON)
/**
 * @brief   Returns the version information of this module.
 * @details The version information includes:
 *
 *          - Two bytes for the Vendor ID
 *          - Two bytes for the Module ID
 *          - One byte  for the Instance ID
 *          - Three bytes version number. The numbering shall be vendor
 *            specific: it consists of:
 *
 *             - The major, the minor and the patch version number of
 *               the module;
 *             - The AUTOSAR specification version number shall not
 *               be included. The AUTOSAR specification version number is
 *               checked during compile time and therefore not required
 *               in this API.
 *
 * @param[in,out] versioninfo   Pointer for storing the version information
 *                              of this module.
 *
 * @return                  void.
 *
 * @api
 *
 * @pre            Preconditions as text description. Optional tag.
 *
 *
 * @note    Autosar Service ID: 0x0B.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif /* #if MSC_VERSION_INFO_API == STD_ON */

#define CDD_MSC_STOP_SEC_CODE

#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_MSC_H */

/** @} */
