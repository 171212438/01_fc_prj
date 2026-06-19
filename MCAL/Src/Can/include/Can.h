/**
 *   @file    Can.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CAN - driver API and development errors implemention.
 *   @details AUTOSAR CAN - driver API and development errors implemention.
 *
 *   @addtogroup CAN
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion
register -Increase support for the second sampling point
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for FC7240
==================================================================================================*/
#ifndef CAN_H
#define CAN_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "ComStack_Types.h" /*[SWS_Can_00222]*/
#include "Can_Cfg.h"
#include "Can_GeneralTypes.h"
#include "Can_ControllerType.h"
#include "SchM_Can.h"
#if (CAN_TIMEOUT_AS_LOOP == STD_OFF)
#include "Os.h"
#endif
#include "Can_Version.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* SWS: SWS_Can_00104  The Can module shall be able to detect the following errors and exceptions
 * depending on its configuration (default/production) */
/* CAN Development Errors define */
/* API Service called with wrong parameter [SWS_Can_00104][SWS_Can_91019][SWS_Can_00026][SWS_Can_00091]*/
#define CAN_E_PARAM_POINTER       ((uint8)0x01U)
#define CAN_E_PARAM_HANDLE        ((uint8)0x02U)
#define CAN_E_PARAM_DATA_LENGTH   ((uint8)0x03U)
#define CAN_E_PARAM_CONTROLLER    ((uint8)0x04U)
/* API Service used without initialization */
#define CAN_E_UNINIT              ((uint8)0x05U)
/* Invalid transition for the current mode */
#define CAN_E_TRANSITION          ((uint8)0x06U)
/* Parameter Baudrate has an invalid value */
#define CAN_E_PARAM_BAUDRATE      ((uint8)0x07U)
/* Invalid ICOM Configuration Id */
#define CAN_E_ICOM_CONFIG_INVALID ((uint8)0x08U)
/* Invalid configuration set selection */
#define CAN_E_INIT_FAILED         ((uint8)0x09U)

/* CAN Runtime Errors */
#define CAN_E_DATALOST \
    ((uint8)0x01U) /* Receive CAN message is lost [SWS_Can_91020][SWDESG_CAN_187]*/
/* Non-ASR error defined to signal wrong resource request on specific partition */
#define CAN_E_INV_PARTITION                       ((uint8)0x02U)

/* AUTOSAR DET CAN SID */
#define CAN_DET_SID_INIT                          ((uint8)0x00U)
#define CAN_DET_SID_GET_VERSION_INFO              ((uint8)0x07U)
#define CAN_DET_SID_DEINIT                        ((uint8)0x10U)
#define CAN_DET_SID_SET_BAUDRATE                  ((uint8)0x0FU)
#define CAN_DET_SID_SET_CONTROLLER_MODE           ((uint8)0x03U)
#define CAN_DET_SID_DISABLE_CONTROLLER_INTERRUPTS ((uint8)0x04U)
#define CAN_DET_SID_ENABLE_CONTROLLER_INTERRUPTS  ((uint8)0x05U)
#define CAN_DET_SID_CBK_CHECK_WAKEUP              ((uint8)0x0BU)
#define CAN_DET_SID_GET_CONTROLLER_ERROR_STATE    ((uint8)0x11U)
#define CAN_DET_SID_GET_CONTROLLER_MODE           ((uint8)0x12U)
#define CAN_DET_SID_WRITE                         ((uint8)0x06U)
#define CAN_DET_SID_MAIN_FUNCTION_WRITE           ((uint8)0x01U)
#define CAN_DET_SID_MAIN_FUNCTION_READ            ((uint8)0x08U)
#define CAN_DET_SID_MAIN_FUNCTION_BUS_OFF         ((uint8)0x09U)
#define CAN_DET_SID_MAIN_FUNCTION_WAKEUP          ((uint8)0x0AU)
#define CAN_DET_SID_MAIN_FUNCTION_ERROR           ((uint8)0x0BU)
#define CAN_DET_SID_MAIN_FUNCTION_MODE            ((uint8)0x0CU)
#define CAN_DET_SID_ISR                           ((uint8)0x0DU)
#define CAN_DET_SID_TRANSMIT_ABORT                ((uint8)0x0EU)

#define CAN_DET_SID_GET_RX_ERROR_COUNTER          ((uint8)0x30U)
#define CAN_DET_SID_GET_TX_ERROR_COUNTER          ((uint8)0x31U)
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Can controller initial status
 *
 */
typedef enum
{
    CAN_UNINIT = 0U, /**< CAN_UNINIT not initialed    */
    CAN_READY        /**< CAN_READY  really initialed */
} Can_StatusType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief This is the type of the external data structure containing the overall initialization data
 * for the CAN driver and SFR settings affecting all controllers. Furthermore it contains pointers
 * to controller configuration structures. The contents of the initialization data structure are CAN
 * hardware specific. [SWS_Can_00413][SWDESG_CAN_190]
 *
 */
typedef struct
{
    const Can_IdType *const pFilterMasks; /**< CAN ID Filter Array                         */
    const Can_MBConfigContainerType tMBCfgContainer; /**< CAN Hardware Object Configuration container */
    const Can_ControllerConfigContainerType tControllerContainer; /**< CAN Controller Configuration
                                                                     container      */
    const CanHal_ConfigType tHwCfgContainer; /**< CAN Hardware register configuration         */

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
    const Can_RxLegacyFiFoTableIdConfigType *const pRxLegacyFiFoTableIdConfig; /**< CAN Legacy Rx FIFO
                                                                                  Configuration */
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    const Can_RxEnhancedFiFoTableIdConfigType *const
        pRxEnhancedFiFoTableIdConfig; /**< CAN Legacy Rx FIFO Configuration            */
#endif                                /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */

    /* The index of the first HTH configured */
    const Can_HwHandleType u16CanFirstHTHIndex; /**< CAN First Hardware transmit handler index   */
    const Can_HwHandleType u16CanFifoHrhCount;  /**<  The fifo object count   */
    const boolean         *Can_CoresMappingPtr;
    const uint32          *Can_CtrlCoresMappingPtr;
} Can_ConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#define CAN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_MemMap.h"

extern const Can_ConfigType Can_Config;

#define CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define CAN_START_SEC_CODE
#include "Can_MemMap.h"
/*[SWS_Can_00244]*/

/**
 * @brief This function initializes the module.
 *
 * @param Config Pointer to driver configuration.
 */
CAN_TEXT_SECTION void Can_Init(const Can_ConfigType *Config);

#if (CAN_VERSION_INFO_API == STD_ON)
/**
 * @brief This function returns the version information of this module.
 *
 * @param Versioninfo Pointer to where to store the version information of this module
 */
CAN_TEXT_SECTION void Can_GetVersionInfo(Std_VersionInfoType *Versioninfo);
#endif

/**
 * @brief This function de-initializes the module.
 *
 */
CAN_TEXT_SECTION void Can_DeInit(void);

#if (CAN_SET_BAUDRATE_API == STD_ON)
/**
 * @brief This service shall set the baud rate configuration of the CAN controller. Depending on
 * necessary baud rate modifications the controller might have to reset
 *
 * @param Controller CAN controller, whose baud rate shall be set
 * @param BaudRateConfigID references a baud rate configuration by ID (see
 * CanControllerBaudRateConfigID)
 * @return E_OK: Service request accepted, setting of (new) baud rate started; E_NOT_OK: Service
 * request not accepted
 */
CAN_TEXT_SECTION Std_ReturnType Can_SetBaudrate(uint8 Controller, const uint16 BaudRateConfigID);
#endif

/**
 * @brief This function performs software triggered state transitions of the CAN controller State
 * machine.
 *
 * @param Controller CAN controller for which the status shall be changed
 * @param Transition Transition value to request new CAN controller state
 * @return E_OK: request accepted; E_NOT_OK: request not accepted, a development error occurred
 */
CAN_TEXT_SECTION Std_ReturnType Can_SetControllerMode(uint8                   Controller,
                                                      Can_ControllerStateType Transition);

/**
 * @brief This function disables all interrupts for this CAN controller.
 *
 * @param Controller CAN controller for which interrupts shall be disabled.
 */
CAN_TEXT_SECTION void Can_DisableControllerInterrupts(uint8 Controller);

/**
 * @brief This function enables all allowed interrupts.
 *
 * @param Controller CAN controller for which interrupts shall be re-enabled
 */
CAN_TEXT_SECTION void Can_EnableControllerInterrupts(uint8 Controller);

#ifdef CAN_ENABLE_WAKEUP_SUPPORT
#if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
/**
 * @brief This function checks if a wakeup has occurred for the given controller
 *
 * @param Controller Controller to be checked for a wakeup.
 * @return E_OK: API call has been accepted; E_NOT_OK: API call has not been accepted
 */
CAN_TEXT_SECTION Std_ReturnType Can_CheckWakeup(uint8 Controller);
#endif
#endif
/**
 * @brief This service obtains the error state of the CAN controller.
 *
 * @param ControllerId Abstracted CanIf ControllerId which is assigned to a CAN controller, which is
 * requested for ErrorState.
 * @param ErrorStatePtr Pointer to a memory location, where the error state of the CAN controller
 * will be stored.
 * @return E_OK: Error state request has been accepted; E_NOT_OK: Error state request has not been
 * accepted.
 */
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerErrorState(uint8               ControllerId,
                                                            Can_ErrorStateType *ErrorStatePtr);

/**
 * @brief This service reports about the current status of the requested CAN controller
 *
 * @param Controller CAN controller for which the status shall be requested.
 * @param ControllerModePtr Pointer to a memory location, where the current mode of the CAN
 * controller will be stored.
 * @return E_OK: Controller mode request has been accepted; E_NOT_OK: Controller mode request has
 * not been accepted
 */
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerMode(uint8                    Controller,
                                                      Can_ControllerStateType *ControllerModePtr);

/**
 * @brief This function is called by CanIf to pass a CAN message to CanDrv for transmission.
 *
 * @param Hth information which HW-transmit handle shall be used for transmit. Implicitly this is
 * also the information about the controller to use because the Hth numbers are unique inside one
 * hardware unit.
 * @param PduInfo Pointer to SDU user memory, Data Length and Identifier.
 * @return E_OK: Write command has been accepted E_NOT_OK: development error occurred CAN_BUSY: No
 * TX hardware buffer available or pre-emptive call of Can_Write that can't be implemented
 * re-entrant (see Can_ReturnType)
 */
CAN_TEXT_SECTION Std_ReturnType Can_Write(Can_HwHandleType Hth, const Can_PduType *PduInfo);

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/**
 * @brief This function is called by CanIf to abort message transmitting for current hardware
 * transmit handle
 *
 * @param Hth information which HW-transmit handle shall be used for transmit. Implicitly this is
 * also the information about the controller to use because the Hth numbers are unique inside one
 * hardware unit.
 * @return E_OK: Abort command has been accepted E_NOT_OK: development error occurred
 */
CAN_TEXT_SECTION Std_ReturnType Can_TransmitAbort(Can_HwHandleType Hth);
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */
/**
 * @brief          This service returns the Rx error counter for a CAN controller.
 *
 *
 * @param[in]      Controller: CAN controller, whose current Rx error counter shall be acquired.
 * @param[out]     RxErrorCounterPtr: Pointer to a memory location, where the current Rx error
 * counter of the CAN controller will be stored.
 * @return         Std_ReturnType
 * @retval         E_OK  Rx error counter available.
 * @retval         E_NOT_OK  Wrong Controller, or Rx error counter not available.
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerRxErrorCounter(uint8  ControllerId,
                                                                uint8 *RxErrorCounterPtr);
/* PRQA S 1503 --*/

/**
 * @brief          This service returns the Tx error counter for a CAN controller.
 *
 *
 * @param[in]      Controller: CAN controller, whose current Tx error counter shall be acquired.
 * @param[out]     TxErrorCounterPtr: Pointer to a memory location, where the current Tx error
 * counter of the CAN controller will be stored.
 * @return         Std_ReturnType
 * @retval         E_OK  Rx error counter available.
 * @retval         E_NOT_OK  Wrong Controller, or Rx error counter not available.
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerTxErrorCounter(uint8  ControllerId,
                                                                uint8 *TxErrorCounterPtr);
/* PRQA S 1503 --*/

#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*CAN_H*/

/** @} */
