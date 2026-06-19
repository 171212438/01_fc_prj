/**
*   @file    CDD_Sdadc.h
*   @version 1.5.1
*
*   @brief   AUTOSAR SDADC - hardware specific type definition
*   @details This file contains the SDADC AUTOSAR hardware specific type definition
*
*   @addtogroup SDADC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Sdadc
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
*   0.8.0       20/8/2024     QXW0084       N/A          SDADC Initial Version
==================================================================================================*/
#ifndef SDADC_H
#define SDADC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcal.h"
#include "CDD_Sdadc_Cfg.h"
#include "CDD_Sdadc_PBCfg.h"

/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/

#if SDADC_DEV_ERROR_DETECT == STD_ON

/* DET - Default Error Tracer ID's */
#define SDADC_E_NO_ERR                              ((uint8)0x00U)
#define SDADC_E_PARAM_CONFIG                        ((uint8)0x01U)
#define SDADC_E_ALREADY_INITIALIZED                 ((uint8)0x02U)
#define SDADC_E_UNINIT                              ((uint8)0x03U)
#define SDADC_E_BUSY                                ((uint8)0x04U)
#define SDADC_E_PARAM_CHANNEL                       ((uint8)0x05U)
#define SDADC_E_PARAM_POINTER                       ((uint8)0x06U)
#define SDADC_E_INV_LINEAR_BUFFER_CONFIG            ((uint8)0x07U)
#define SDADC_E_INV_CIRCULAR_BUFFER_CONFIG          ((uint8)0x08U)
#define SDADC_E_INVALID_BUFFER_CONFIG               ((uint8)0x09U)
#define SDADC_E_UNIDLE                              ((uint8)0x0AU)
#define SDADC_E_CARRIER_ALREADY_RUNNING             ((uint8)0x0BU)
#define SDADC_E_NOTIF_CAPABILITY                    ((uint8)0x0CU)
#define SDADC_E_SINGLE_ACCESSMODE_TIMESTAMP         ((uint8)0x0DU)
#define SDADC_E_CALIB_RUNNING                       ((uint8)0x0EU)
#define SDADC_E_INV_BUFFER_SIZE                     ((uint8)0x0FU)
#define SDADC_E_INVALID_BUFFER_POINTER              ((uint8)0x10U)
#define SDADC_E_CORE_ID                             ((uint8)0x11U)
#define SDADC_E_INV_INSTANCE                        ((uint8)0x12U)
#define SDADC_E_INV_ACCESS_MODE                     ((uint8)0x13U)
#define SDADC_E_CHANNEL_STATUS                      ((uint8)0x14U)

/*SID's for all APIs*/
#define SDADC_SID_INIT                              ((uint8)0x1AU)
#define SDADC_SID_DEINIT                            ((uint8)0x1BU)
#define SDADC_SID_START_MODULATION                  ((uint8)0x1CU)
#define SDADC_SID_STOP_MODULATION                   ((uint8)0x1DU)
#define SDADC_SID_READ_STREAM_RESULTS               ((uint8)0x1EU)
#define SDADC_SID_READ_RESULT                       ((uint8)0x1FU)
#define SDADC_SID_GET_STATUS                        ((uint8)0x20U)
#define SDADC_SID_SETUP_RESULT_BUFFER               ((uint8)0x21U)
#define SDADC_SID_START_CARRIER_SIGNAL              ((uint8)0x22U)
#define SDADC_SID_STOP_CARRIER_SIGNAL               ((uint8)0x23U)
#define SDADC_SID_ENABLE_NOTIFICATIONS              ((uint8)0x24U)
#define SDADC_SID_DISABLE_NOTIFICATIONS             ((uint8)0x25U)
#define SDADC_SID_GET_TIMESTAMP                     ((uint8)0x26U)
#define SDADC_SID_START_CALIBRATION                 ((uint8)0x27U)
#define SDADC_SID_GET_CALIBRATION_STATUS            ((uint8)0x28U)
#define SDADC_SID_ISR                               ((uint8)0x2AU)
#define SDADC_SID_TIMERISR                          ((uint8)0x2BU)
#define SDADC_SID_GET_VERSION_INFO                  ((uint8)0x2CU)
#define SDADC_SID_START_SW_CONVERSION               ((uint8)0x2DU)
#define SDADC_SID_STOP_SW_CONVERSION                ((uint8)0x2EU)
#define SDADC_SID_ENABLE_CHANNEL                    ((uint8)0x2FU)
#define SDADC_SID_DISABLE_CHANNEL                   ((uint8)0x30U)
#define SDADC_SID_SETPWMNEGTRIGGEROUTPUTENABLE      ((uint8)0x31U)
#define SDADC_SID_SETTSIGNTRIGGEROUTPUTENABLE       ((uint8)0x32U)
#define SDADC_SID_START_INTG_SW_CONVERSION          ((uint8)0x33U)
#define SDADC_SID_STOP_INTG_SW_CONVERSION           ((uint8)0x34U)
#define SDADC_SID_GET_GLOBAL_TIMESTAMP              ((uint8)0x35U)
#define SDADC_SID_START_SD_CAP                      ((uint8)0x36U)
#define SDADC_SID_GET_SD_CAP_STATUS                 ((uint8)0x37U)

#endif /*End for SDADC_DEV_ERROR_DETECT */

/*******************************************************************************
**                      Global Type Definitions                               **
*******************************************************************************/

typedef uint8 Sdadc_InstanceType;

typedef uint32 Sdadc_SizeType;

typedef uint16 Sdadc_TimeStampType;

typedef uint32 Sdadc_ResultType;

typedef uint32 *Sdadc_ResultPtrType;

typedef uint8 Sdadc_SDCapResultType;

typedef uint8 *Sdadc_SDCapResultPtrType;

typedef uint8 Sdadc_ChannelType;
#define SDADC_ALL_CHANNEL                      ((Sdadc_ChannelType)0xFFU)

typedef void (*Sdadc_NotifyFnPtrType)(void);

typedef struct
{
    uint16 u16DataTrunc;
    Sdadc_TimeStampType u16TimeStamp;
    uint32 u32TimestampCnt;
} Sdadc_TimestampInfoType;

typedef struct
{
    uint32 u32TimeStampRes;
    uint32 u32ChannelRes[SDADC_MAX_CHANNEL_CNT];
} Sdadc_GlobalTimestampInfoType;

typedef uint8 Sdadc_CalibrationStatusType;
#define SDADC_CALIBRATION_NOT_STARTED    ((Sdadc_CalibrationStatusType)0U)
#define SDADC_CALIBRATION_RUNNING        ((Sdadc_CalibrationStatusType)1U)
#define SDADC_CALIBRATION_OFFSET_RUNNING ((Sdadc_CalibrationStatusType)2U)
#define SDADC_CALIBRATION_GAIN_RUNNING   ((Sdadc_CalibrationStatusType)3U)
#define SDADC_CALIBRATION_DONE           ((Sdadc_CalibrationStatusType)4U)
#define SDADC_CALIBRATION_ERROR          ((Sdadc_CalibrationStatusType)5U)

typedef uint8 Sdadc_ChannelStatusType;
#define SDADC_CHANNEL_IDLE                             ((Sdadc_ChannelStatusType)0x0U)
#define SDADC_CHANNEL_ACTIVCE                          ((Sdadc_ChannelStatusType)0x1U)
#define SDADC_CHANNEL_BUSY                             ((Sdadc_ChannelStatusType)0x2U)
#define SDADC_CHANNEL_RESULT_READY                     ((Sdadc_ChannelStatusType)0x3U)

typedef uint8 Sdadc_SignDelayCapStatusType;
#define SDADC_SD_CAP_IDLE                             ((Sdadc_SignDelayCapStatusType)0x0U)
#define SDADC_SD_CAP_ACTIVCE                          ((Sdadc_SignDelayCapStatusType)0x1U)
#define SDADC_SD_CAP_RESULT_READY                     ((Sdadc_SignDelayCapStatusType)0x2U)

typedef uint8 Sdadc_ChannelReloadType;
#define SDADC_CHANNEL_NOT_RELOAD_CFG ((Sdadc_ChannelReloadType)0x0U)
#define SDADC_CHANNEL_RELOAD_CFG     ((Sdadc_ChannelReloadType)0x1U)

/*Configuration option for SDADC Channel Access Mode*/
#define SDADC_SINGLE_READ           (0x0U)
#define SDADC_CIRCULAR_BUFFER       (0x1U)
#define SDADC_STREAM_LINEAR_BUFFER  (0x2U)

/**
 * @brief            SDADC driver states
 * @details          The SDADC_UNINIT state indicates that the SDADC driver has not been
 *                   initialized.
 *
 * @api
 */
#define SDADC_UNINIT 0x01U

/**
 * @brief            SDADC driver states
 * @details          The SDADC_INIT state indicates that the SDADC driver has been
 *                   initialized, making each available channel ready for service.
 *
 * @api
 */
#define SDADC_INIT 0x02U

#define SDADC_MA_STARTED 0x01U

#define SDADC_MA_STOPPED 0x02U

#define CDD_SDADC_START_SEC_CODE
#include "Sdadc_MemMap.h"
/**
 * @brief          Initializes the SDADC driver and its instances.
 * @details        This function initializes the SDADC driver and its instances based on the provided configuration.
 *                 It checks the driver state, validates the configuration pointer, and initializes each SDADC instance
 *                 and its channels. The function also sets the initial state of the driver and its components.
 *
 * @param[in]      ConfigPtr   Pointer to the configuration structure for the SDADC driver.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1A.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00001
 */
CDD_SDADC_TEXT_SECTION void Sdadc_Init(const Sdadc_ConfigType *const ConfigPtr);

/**
 * @brief          De-initializes the SDADC driver and its instances.
 * @details        This function de-initializes the SDADC driver and its instances. It checks the driver state,
 *                 validates the configuration pointer, and de-initializes each SDADC instance and its channels.
 *                 The function also resets the state of the driver and its components to their initial state.
 *
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1B.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00002
 */
CDD_SDADC_TEXT_SECTION void Sdadc_DeInit(void);

/**
 * @brief          Starts the modulation for the specified SDADC instance.
 * @details        This function starts the modulation for the specified SDADC instance. It checks the driver state,
 *                 validates the instance ID, and ensures that the instance is properly configured for the current core.
 *                 If the modulation is successfully started, the function updates the modulation status and reports
 *                 the result to the DEM (Diagnostic Event Manager) if enabled.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance to start modulation for.
 * @return         Std_ReturnType  Returns E_OK if the modulation was successfully started, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1C.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00003
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartModulation(const Sdadc_InstanceType InstanceId);

/**
 * @brief          Stops the modulation for the specified SDADC instance.
 * @details        This function stops the modulation for the specified SDADC instance. It checks the driver state,
 *                 validates the instance ID, and ensures that the instance is properly configured for the current core.
 *                 If the modulation is successfully stopped, the function updates the modulation status and resets
 *                 the channel status to idle.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance to stop modulation for.
 * @return         Std_ReturnType  Returns E_OK if the modulation was successfully stopped, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1D.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00004
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopModulation(const Sdadc_InstanceType InstanceId);

/**
 * @brief          Enables the specified SDADC channel.
 * @details        This function enables the specified SDADC channel. It checks the driver state, validates the instance ID,
 *                 and ensures that the channel is properly configured for the current core. If the channel is successfully
 *                 enabled, the function updates the channel status to active.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to enable.
 * @param[in]      ConfigReload Specifies whether the channel configuration should be reloaded.
 * @return         Std_ReturnType  Returns E_OK if the channel was successfully enabled, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x2F.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00005
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_EnableChannel(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId, const Sdadc_ChannelReloadType ConfigReload);

/**
 * @brief          Disables the specified SDADC channel.
 * @details        This function disables the specified SDADC channel. It checks the driver state, validates the instance ID,
 *                 and ensures that the channel is properly configured for the current core. If the channel is successfully
 *                 disabled, the function updates the channel status to idle.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to disable.
 * @return         Std_ReturnType  Returns E_OK if the channel was successfully disabled, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x30.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00006
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DisableChannel(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Starts the software conversion for the specified SDADC channel.
 * @details        This function starts the software conversion for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the channel is successfully started, the function triggers the software conversion.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to start the software conversion for.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x2D.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00007
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelSWConversion(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Stops the software conversion for the specified SDADC channel.
 * @details        This function stops the software conversion for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the channel is successfully stopped, the function updates the channel status to idle.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to stop the software conversion for.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x2E.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00008
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelSWConversion(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Starts the integration software conversion for the specified SDADC channel.
 * @details        This function starts the integration software conversion for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the channel is successfully started, the function triggers the integration software conversion.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to start the integration software conversion for.
 * @return         Std_ReturnType  Returns E_OK if the operation is successful, otherwise returns an error code.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x33.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00009
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelIntgSWConversion(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Stops the integration software conversion for the specified SDADC channel.
 * @details        This function stops the integration software conversion for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the channel is successfully stopped, the function updates the channel status to idle.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to stop the integration software conversion for.
 * @return         Std_ReturnType  Returns E_OK if the operation is successful, otherwise returns an error code.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x34.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00010
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelIntgSWConversion(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Reads the stream results from the specified SDADC channel.
 * @details        This function reads the stream results from the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the channel is successfully read, the function updates the channel status to active.
 *
 * @param[in]      InstanceId       The ID of the SDADC instance.
 * @param[in]      ChannelId        The ID of the SDADC channel to read the stream results from.
 * @param[out]     ResultBufferPtr  Pointer to the buffer where the stream results will be stored.
 * @return         Sdadc_SizeType   Returns the number of results read from the stream.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1E.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00009
 */
CDD_SDADC_TEXT_SECTION Sdadc_SizeType Sdadc_ReadStreamResults(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId, Sdadc_ResultType *const ResultBufferPtr);

/**
 * @brief          Reads the result from the specified SDADC channel.
 * @details        This function reads the result from the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the channel is successfully read, the function updates the channel status to active.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to read the result from.
 * @param[out]     ResultPtr    Pointer to where the result will be stored.
 * @return         Std_ReturnType  Returns E_OK if the result was successfully read, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1F.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00010
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadResult(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId, Sdadc_ResultType *const ResultPtr);

/**
 * @brief          Returns the status of the specified SDADC channel.
 * @details        This function returns the current status of the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 The function returns the status of the channel, which can be one of the following:
 *                 - SDADC_CHANNEL_IDLE: The channel is idle and not performing any operation.
 *                 - SDADC_CHANNEL_ACTIVE: The channel is active and performing a conversion.
 *                 - SDADC_CHANNEL_RESULT_READY: The channel has completed a conversion and the result is ready to be read.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to get the status for.
 * @return         Sdadc_ChannelStatusType  Returns the current status of the specified SDADC channel.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x20.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00011
 */
CDD_SDADC_TEXT_SECTION Sdadc_ChannelStatusType Sdadc_GetStatus(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Retrieves the timestamp information for the specified SDADC channel.
 * @details        This function retrieves the timestamp information for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the timestamp is successfully retrieved, the function returns the timestamp information.
 *
 * @param[in]      InstanceId       The ID of the SDADC instance.
 * @param[in]      ChannelId        The ID of the SDADC channel to retrieve the timestamp for.
 * @param[out]     pTimestampInfo   Pointer to where the timestamp information will be stored.
 * @return         Std_ReturnType   Returns E_OK if the timestamp was successfully retrieved, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x26.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00012
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetTimestamp(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId, Sdadc_TimestampInfoType *pTimestampInfo);


/**
 * @brief          Sets up the result buffer for the specified SDADC channel.
 * @details        This function sets up the result buffer for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the buffer is successfully set up, the function updates the channel's buffer pointers and size.
 *
 * @param[in]      InstanceId       The ID of the SDADC instance.
 * @param[in]      ChannelId        The ID of the SDADC channel to set up the result buffer for.
 * @param[in]      DataBufferPtr    Pointer to the buffer where the results will be stored.
 * @param[in]      Size             The size of the buffer.
 * @return         Std_ReturnType   Returns E_OK if the buffer was successfully set up, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x21.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00013
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetupResultBuffer(const Sdadc_InstanceType      InstanceId,
                                                              const Sdadc_ChannelType       ChannelId,
                                                              const Sdadc_ResultType *const DataBufferPtr,
                                                              const Sdadc_SizeType          Size);

/**
 * @brief          Starts the carrier signal for the specified SDADC instance.
 * @details        This function starts the carrier signal for the specified SDADC instance. It checks the driver state,
 *                 validates the instance ID, and ensures that the instance is properly configured for the current core.
 *                 If the carrier signal is successfully started, the function updates the instance's carrier signal status.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @return         Std_ReturnType  Returns E_OK if the carrier signal was successfully started, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x22.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00014
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCarrierSignal(const Sdadc_InstanceType InstanceId);

/**
 * @brief          Stops the carrier signal for the specified SDADC instance.
 * @details        This function stops the carrier signal for the specified SDADC instance. It checks the driver state,
 *                 validates the instance ID, and ensures that the instance is properly configured for the current core.
 *                 If the carrier signal is successfully stopped, the function updates the instance's carrier signal status.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @return         Std_ReturnType  Returns E_OK if the carrier signal was successfully stopped, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x23.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00015
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopCarrierSignal(const Sdadc_InstanceType InstanceId);

/**
 * @brief          Enables notifications for the specified SDADC channel.
 * @details        This function enables notifications for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If notifications are successfully enabled, the function updates the channel's notification status.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to enable notifications for.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x24.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00016
 */
CDD_SDADC_TEXT_SECTION void Sdadc_EnableNotifications(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Disables notifications for the specified SDADC channel.
 * @details        This function disables notifications for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If notifications are successfully disabled, the function updates the channel's notification status.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to disable notifications for.
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x25.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00017
 */
CDD_SDADC_TEXT_SECTION void Sdadc_DisableNotifications(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);

/**
 * @brief          Enables or disables the PWM negative trigger output for a specific SDADC instance.
 * @details        This function configures the PWM negative trigger output enable state for a given SDADC instance.
 *                 It checks the driver state, validates the instance ID, and sets the PWM negative trigger output enable state.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      u8Enable     Enable or disable the PWM negative trigger output (1: Enable, 0: Disable).
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x31.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00018
 */
CDD_SDADC_TEXT_SECTION void Sdadc_SetPwmNegTriggerOutputEnable(const Sdadc_InstanceType InstanceId, uint8 u8Enable);

/**
 * @brief          Enables or disables the TSign trigger output for a specific SDADC instance and channel.
 * @details        This function configures the TSign trigger output enable state for a given SDADC instance and channel.
 *                 It checks the driver state, validates the instance and channel IDs, and sets the TSign trigger output enable state.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel.
 * @param[in]      u8Enable     Enable or disable the TSign trigger output (1: Enable, 0: Disable).
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x32.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00019
 */
CDD_SDADC_TEXT_SECTION void Sdadc_SetTSignTriggerOutputEnable(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId, uint8 u8Enable);

#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
/**
 * @brief          Retrieves the global timestamp information for the specified SDADC instance.
 * @details        This function retrieves the global timestamp information for the specified SDADC instance.
 *
 * @param[in]      InstanceId       The ID of the SDADC instance.
 * @param[out]     pTimestampInfo   Pointer to the structure where the global timestamp information will be stored.
 * @return         Std_ReturnType   Returns E_OK if the global timestamp was successfully retrieved, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x29.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetGlobalTimestamp(const Sdadc_InstanceType       InstanceId,
                                                               Sdadc_GlobalTimestampInfoType *pTimestampInfo);
#endif

#if (STD_ON == SDADC_CALIBRATION_FEATURE)
/**
 * @brief          Starts the calibration process for a specific SDADC instance and channel.
 * @details        This function initiates the calibration process for a given SDADC instance and channel.
 *                 It checks the driver state, validates the instance and channel IDs, and starts the calibration process.
 *                 The function also sets the calibration status to running if the calibration starts successfully.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel.
 * @param[in]      u8SingleEnd  Indicates if the calibration is for a single-ended channel (1: Single-ended, 0: Differential).
 * @return         Std_ReturnType  Returns E_OK if the calibration starts successfully, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x27.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00020
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCalibration(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId, uint8 u8SingleEnd);

/**
 * @brief          Retrieves the calibration status for a specific SDADC instance and channel.
 * @details        This function retrieves the calibration status for a given SDADC instance and channel.
 *                 It checks the driver state, validates the instance and channel IDs, and returns the calibration status.
 *                 If the calibration is done, it also retrieves the calibration data.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel.
 * @param[out]     pCalibInfo   Pointer to the structure where the calibration data will be stored.
 * @return         Sdadc_CalibrationStatusType  Returns the calibration status (e.g., SDADC_CALIBRATION_RUNNING, SDADC_CALIBRATION_DONE).
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x28.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_Sdadc_00021
 */
CDD_SDADC_TEXT_SECTION Sdadc_CalibrationStatusType Sdadc_GetCalibrationStatus(const Sdadc_InstanceType    InstanceId,
                                                                              const Sdadc_ChannelType     ChannelId,
                                                                              Sdadc_ChannelCalibInfoType *pCalibInfo);

#endif

/**
 * @brief          Starts the sign delay capture for the specified SDADC channel.
 * @details        This function starts the sign delay capture for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 If the sign delay capture is successfully started, the function updates the channel's status and buffer pointers.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to start the sign delay capture for.
 * @param[out]     ResultBuffer Pointer to the buffer where the sign delay capture results will be stored.
 * @param[in]      BufferSize   The size of the buffer.
 * @return         Std_ReturnType  Returns E_OK if the sign delay capture was successfully started, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x36.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartSignDelayCapture(const Sdadc_InstanceType InstanceId,
                                                                  const Sdadc_ChannelType  ChannelId,
                                                                  Sdadc_SDCapResultPtrType ResultBuffer,
                                                                  Sdadc_SizeType           BufferSize);

/**
 * @brief          Retrieves the status of the sign delay capture for the specified SDADC channel.
 * @details        This function retrieves the status of the sign delay capture for the specified SDADC channel. It checks the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for the current core.
 *                 The function returns the status of the sign delay capture, which can be one of the following:
 *                 - SDADC_SD_CAP_IDLE: The sign delay capture is idle and not performing any operation.
 *                 - SDADC_SD_CAP_ACTIVE: The sign delay capture is active and performing a capture.
 *                 - SDADC_SD_CAP_RESULT_READY: The sign delay capture has completed and the result is ready to be read.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to get the status for.
 * @return         Sdadc_SignDelayCapStatusType  Returns the current status of the sign delay capture.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x37.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements
 */
CDD_SDADC_TEXT_SECTION Sdadc_SignDelayCapStatusType Sdadc_GetSignDelayCapStatus(const Sdadc_InstanceType InstanceId, const Sdadc_ChannelType ChannelId);


#if (SDADC_VERSION_INFO_API == STD_ON)
/**
 * @brief          Returns the version information of this module.
 * @details        Returns the version information of this module.
 *
 * @param[out]     versioninfo    Pointer to where to store the version
 *                                 information of this module.
 * @return         void
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x0A.
 * @note           Synchronous.
 * @note           Reentrant function.
 * @implements
 */
CDD_SDADC_TEXT_SECTION void Sdadc_GetVersionInfo(Std_VersionInfoType *const versioninfo);
#endif


#define CDD_SDADC_STOP_SEC_CODE
#include "Sdadc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* SDADC_H */

/** @} */
