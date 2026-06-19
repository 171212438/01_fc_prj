/**
*   @file    Can_Hal.h
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
                                                          -support for CANFD baud rate expansion register
                                                          -Increase support for the second sampling point
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for FC7240
                                                          -Change Tx and Rx function parameters
==================================================================================================*/
#ifndef CAN_HAL_H
#define CAN_HAL_H



#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/


#include "StdRegMacros.h"

#include "ComStack_Types.h" /*[SWS_Can_00222]*/
#include "Can_HwType.h"
#include "CanIf_Cbk.h"
#include "Can_GeneralTypes.h"
#include "Mcal.h"
#include "Can.h"
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                      CONTROLLER OPTIONS
==================================================================================================*/

/* Can Controller Parameter Mask */
#define CAN_CONTROLLER_CFG_BUSOFFSWREC_U32    ((uint32)0x00000001U)
#define CAN_CONTROLLER_CFG_LEGACY_FIFO_U32    ((uint32)0x00000002U)
#define CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32  ((uint32)0x00000004U)
#define CAN_CONTROLLER_CFG_IDAM_A_U32         ((uint32)0x00000008U)
#define CAN_CONTROLLER_CFG_IDAM_B_U32         ((uint32)0x00000010U)
#define CAN_CONTROLLER_CFG_IDAM_C_U32         ((uint32)0x00000020U)
#define CAN_CONTROLLER_CFG_IDAM_D_U32         ((uint32)0x00000040U)
#define CAN_CONTROLLER_CFG_WAKEUP_SRC_U32     ((uint32)0x00000080U)
#define CAN_CONTROLLER_CFG_LPRIO_EN_U32       ((uint32)0x00000100U)
#define CAN_CONTROLLER_CFG_OVER_EN_U32        ((uint32)0x00000200U)
#define CAN_CONTROLLER_CFG_WARN_EN_U32        ((uint32)0x00000400U)
#define CAN_CONTROLLER_CFG_RXPOL_EN_U32       ((uint32)0x00000800U)
#define CAN_CONTROLLER_CFG_TXPOL_EN_U32       ((uint32)0x00001000U)
#define CAN_CONTROLLER_CFG_BOPOL_EN_U32       ((uint32)0x00002000U)
#define CAN_CONTROLLER_CFG_WKPOL_EN_U32       ((uint32)0x00004000U)
#define CAN_CONTROLLER_CFG_WRNINT_EN_U32      ((uint32)0x00008000U)
#define CAN_CONTROLLER_CFG_WAKSUP_EN_U32      ((uint32)0x00020000U)
#define CAN_CONTROLLER_CFG_ERR_EN_U32         ((uint32)0x00040000U)
#define CAN_CONTROLLER_CFG_RXINT_EN_U32       ((uint32)0x00080000U)
#define CAN_CONTROLLER_CFG_TXINT_EN_U32       ((uint32)0x00100000U)
#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
#define CAN_CONTROLLER_CFG_BCC_EN_U32         ((uint32)0x00010000U)
#endif /* (CAN_BCC_SUPPORT_ENABLE == STD_ON) */
#define CAN_CONTROLLER_CFG_IDAM_MASK_U32      ((uint32)0x00000078U)


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
*                                           MACROS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL INLINE FUNCTIONS
==================================================================================================*/
#define CAN_START_SEC_CODE
#include "Can_MemMap.h"
#if (CAN_DEV_ERROR_DETECT == STD_ON)
/**
* @brief      This function reports an error to the Det module and records the failure in the local structure. [SWS_Can_91024][SWDESG_CAN_122][SWDESG_CAN_123]
* @details    This function reports an error to the Det module and records the failure in the local structure.
*
* @param[in]  u8ServiceId       The service id of the caller function
* @param[in]  u8ErrorId         The error id to be reported
*
* @return     void
*/
CAN_TEXT_SECTION LOCAL_INLINE void Can_ReportDetError
(
    uint8 u8ServiceId,
    uint8 u8ErrorId
)
{
    (void)Det_ReportError((uint16)CAN_MODULE_ID, (uint8)CAN_INSTANCE, (uint8)u8ServiceId, (uint8)u8ErrorId);
}


CAN_TEXT_SECTION LOCAL_INLINE void Can_ReportRuntimeDetError
(
    uint8 u8ServiceId,
    uint8 u8ErrorId
)
{
    (void)Det_ReportRuntimeError((uint16)CAN_MODULE_ID, (uint8)CAN_INSTANCE, u8ServiceId, u8ErrorId); /*[SWDESG_CAN_124]*/
}
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_START_SEC_CODE
#include "Can_MemMap.h"


/**
 * @brief Initial All Can Controller and Message Buffer with current configuration
 *
 * @param pConfigCurrent Current Configuration generated by EB
 */
CAN_TEXT_SECTION void Can_Hal_Init(const Can_ConfigType *pConfigCurrent, uint8 u8CurrentCore);

/**
 * @brief This function de-initializes the module.
 *
 */
CAN_TEXT_SECTION void Can_Hal_DeInit(uint8 u8CurrentCore);

/**
 * @brief Check controller if it is started
 *
 * @param u8ControllerId Controller ID
 * @return E_OK means started
 */
CAN_TEXT_SECTION Std_ReturnType Can_Hal_CheckControllerStarted(uint8 u8ControllerId);


/**
 * @brief Set Controller Mode
 *
 * @param u8ControllerId Controller Id
 * @param Transition Transition value to request new CAN controller state
 * @param canif_notification_required if notify to CanIf
 * @return E_OK means set correctly
 */
CAN_TEXT_SECTION Can_ReturnType Can_Hal_SetControllerMode(uint8 u8ControllerId, Can_ControllerStateType Transition, boolean canif_notification_required, uint8 u8CurrentCore);


/**
 * @brief Disable Can Controller Interrupt
 *
 * @param u8ControllerId Controller id
 */
CAN_TEXT_SECTION void Can_Hal_DisableControllerInterrupts(uint8 u8ControllerId, uint8 u8CurrentCore);

/**
 * @brief Enable Can Controller Interrupt
 *
 * @param u8ControllerId Controller id
 */
CAN_TEXT_SECTION void Can_Hal_EnableControllerInterrupts(uint8 u8ControllerId, uint8 u8CurrentCore);

/**
 * @brief This function checks if a wakeup has occurred for the given controller
 *
 * @param u8ControllerId Controller to be checked for a wakeup.
 * @return E_OK: API call has been accepted; E_NOT_OK: API call has not been accepted
 */
CAN_TEXT_SECTION Std_ReturnType CanHal_CheckWakeup(uint8 u8ControllerId, uint8 u8CurrentCore);


/**
 * @brief This service obtains the error state of the CAN controller.
 *
 * @param u8ControllerId Controller to be checked for a wakeup.
 * @param ErrorStatePtr Pointer to a memory location, where the error state of the CAN controller will be stored.
 * @return E_OK: Error state request has been accepted; E_NOT_OK: Error state request has not been accepted.
 */
CAN_TEXT_SECTION Std_ReturnType CanHal_GetControllerErrorState( uint8 u8ControllerId, Can_ErrorStateType* ErrorStatePtr, uint8 u8CurrentCore);

/**
 * @brief This service reports about the current status of the requested CAN controller
 *
 * @param u8ControllerId CAN controller for which the status shall be requested.
 * @param ControllerModePtr Pointer to a memory location, where the current mode of the CAN controller will be stored.
 * @return E_OK: Controller mode request has been accepted; E_NOT_OK: Controller mode request has not been accepted
 */
CAN_TEXT_SECTION Std_ReturnType CanHal_GetControllerMode( uint8 u8ControllerId, Can_ControllerStateType* ControllerModePtr, uint8 u8CurrentCore );

/**
 * @brief Write Can Message to Hardware object
 *
 * @param hth Hardware object id
 * @param PduInfo point to write message
 * @return E_OK means write correctly
 */
CAN_TEXT_SECTION Can_ReturnType Can_Hal_Write(Can_HwHandleType hth, const Can_PduType *PduInfo, uint8 u8CurrentCore);

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/**
 * @brief Abort Written Can Message in Hardware object
 *
 * @param hth Hardware object id
 * @return E_OK means write correctly
 */
CAN_TEXT_SECTION Can_ReturnType Can_Hal_TransmitAbort(Can_HwHandleType hth, uint8 u8CurrentCore);
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */

#if (CAN_SET_BAUDRATE_API == STD_ON)
/**
 * @brief Set can baudrate with controller id and baudrate configuration id in EB
 *
 * @param u8ControllerId controller id
 * @param BaudrateConfigID baudrate configuration in EB
 * @return E_OK means set correctly
 */
CAN_TEXT_SECTION Std_ReturnType Can_Hal_SetBaudrate(uint8 u8ControllerId, const uint16 BaudrateConfigID, uint8 u8CurrentCore);

#endif /* (CAN_SET_BAUDRATE_API == STD_ON) */



/**
 * @brief clear bus off error status
 *
 * @param u8ControllerId Controller id
 */
CAN_TEXT_SECTION void Can_Hal_ProcessBusOff(const uint8 u8ControllerId);

#if (CAN_BUSOFFPOLL_SUPPORTED == STD_ON)


/**
 * @brief Polling All Controller Bus off status
 *
 * @param u8CurrentCore core id
 */
CAN_TEXT_SECTION void Can_Hal_BusOffPoll(uint8 u8CurrentCore);

#endif /* (CAN_BUSOFFPOLL_SUPPORTED == STD_ON) */

#if (CAN_ERROR_POLLING_ENABLE == STD_ON)

/**
 * @brief Polling status
 *
 * @param u8CurrentCore core id
 */
CAN_TEXT_SECTION void Can_Hal_ErrorPoll(uint8 u8CurrentCore);
#endif

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)

/**
 * @brief Process transmit interrupt
 *
 * @param u8ControllerId Controller id
 * @param u32CanAddr  Can Address
 */
CAN_TEXT_SECTION void Can_Hal_ProcessTx(const uint8 u8ControllerId, uint32 u32CanAddr);

#endif /* (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_TXPOLL_SUPPORTED == STD_ON)

/**
 * @brief Polling check if write successfully and indicate to CanIf
 *
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionWritePoll(uint8 u8CurrentCore);

#ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE
#if (CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON)

/**
 * @brief Multi-Polling for diffreent thread with thread id, used in multi-core process( Different MainRwmainFunction set in EB )
 *
 * @param writepoll thread id
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionMultipleWritePoll(uint8 writepoll, uint8 u8CurrentCore);

#endif  /* #if (CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON) */
#endif  /* #ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE */
#endif /* (CAN_TXPOLL_SUPPORTED == STD_ON) */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)

/**
 * @brief Process Receive Interrupt
 *
 * @param u8ControllerId Controller id
 * @param u32CanAddr  Can address
 */
CAN_TEXT_SECTION void Can_Hal_ProcessRx(const uint8 u8ControllerId, uint32 u32CanAddr);

#endif /* (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */



#if (CAN_RXPOLL_SUPPORTED == STD_ON)

/**
 * @brief Polling Check If received Message and Indicate to CanIf
 *
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionReadPoll(uint8 u8CurrentCore);

#ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE

#if (CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON)
/**
 * @brief Multi-Polling for diffreent thread with thread id, used in multi-core process ( Different MainRwmainFunction set in EB )
 *
 * @param readpoll
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionMultipleReadPoll(uint8 readpoll, uint8 u8CurrentCore);

#endif /* #if (CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON) */
#endif /* #ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE */
#endif /* (CAN_RXPOLL_SUPPORTED == STD_ON) */


/**
 * @brief Polling Check MCR Mode
 *
 */
CAN_TEXT_SECTION void Can_Hal_ModePoll(uint8 u8CurrentCore);

#ifdef CAN_WAKEUPPOLL_SUPPORTED
#if (CAN_WAKEUPPOLL_SUPPORTED  == STD_ON)
/**
 * @brief Polling Wakeup
 *
 */
CAN_TEXT_SECTION void Can_Hal_WakeupPoll(uint8 u8CurrentCore);

#endif /* (CAN_WAKEUPPOLL_SUPPORTED  == STD_ON) */
#endif

/**
 * @brief Check if the HW CAN instance support CANFD mode.
 *
 * @param u8controller Can Controller Id
 */
boolean Can_Hal_CheckCanFdSupport(const uint8 u8controller);

/**
 * @brief Get the Can rx error counter
 *
 * @param u8controller Can Controller Id
 * @return uint8 Rx error counter
 */
uint8 Can_Hal_GetControllerRxErrorCounter(uint8 u8ControllerId);

/**
 * @brief Get the Can tx error counter
 *
 * @param u8controller Can Controller Id
 * @return uint8 Tx error counter
 */
uint8 Can_Hal_GetControllerTxErrorCounter(uint8 u8ControllerId);

#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CAN_HAL_H */
/** @} */
