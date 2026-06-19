/**
 * @addtogroup CANIF
 * @{
 */

/**
 * @file CanIf_Cbk.h
 * @author Flagchip
 * @brief AUTOSAR CANIF - driver API and development errors implemention.
 * @version 0.3.0
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023 Flagchip Semiconductors Co., Ltd.
 *
 */

#ifndef CANIF_CBK_H
#define CANIF_CBK_H

/*******************************************************************************
*   Includes
*******************************************************************************/
#include "CanIf_Types.h"


#define CANIF_CBK_AR_RELEASE_MAJOR_VERSION (4)
#define CANIF_CBK_AR_RELEASE_MINOR_VERSION (6)


/*******************************************************************************
*   Callback Function Declaration
*******************************************************************************/

extern FUNC(void, CANIF_CODE) CanIf_TxConfirmation
(
    PduIdType CanTxPduId
);

extern FUNC(void, CANIF_CODE) CanIf_RxIndication
(
    P2CONST(Can_HwType, AUTOMATIC, CANIF_APPL_DATA) Mailbox,
    P2CONST(PduInfoType, AUTOMATIC, CANIF_APPL_DATA) PduInfoPtr
);


extern FUNC(void, CANIF_CODE) CanIf_ControllerBusOff
(
    uint8 ControllerId
);

#if(CANIF_PUBLIC_PN_SUPPORT == STD_ON)
extern FUNC(void, CANIF_CODE) CanIf_ConfirmPnAvailability
(
    uint8 TransceiverId
);

extern FUNC(void, CANIF_CODE) CanIf_ClearTrcvWufFlagIndication
(
    uint8 TransceiverId
);

extern FUNC(void, CANIF_CODE) CanIf_CheckTrcvWakeFlagIndication
(
    uint8 TransceiverId
);
#endif

extern FUNC(void, CANIF_CODE) CanIf_ControllerModeIndication
(
    uint8 ControllerId,
    Can_ControllerStateType ControllerMode
);

#if(CANIF_MAX_TRCV_NUM > 0)
extern FUNC(void, CANIF_CODE) CanIf_TrcvModeIndication
(
    uint8 TransceiverId,
    CanTrcv_TrcvModeType TransceiverMode
);
#endif


#if(STD_ON ==  CANIF_PUBLIC_ICOM_SUPPORT) /*SWS_CANIF_00876*/
extern FUNC(void, CANIF_CODE) CanIf_CurrentIcomConfiguration
(
    uint8 ControllerId,
    IcomConfigIdType ConfigurationId,
    IcomSwitch_ErrorType Error
);
#endif

#if(STD_ON ==  CANIF_TRIGGER_TRANSMIT_SUPPORT) /*SWS_CANIF_00884*/
#if(CANIF_MAX_TXTRIGGER_NUM > 0)
extern FUNC(Std_ReturnType, CANIF_CODE) CanIf_TriggerTransmit
(
    PduIdType TxPduId,
    P2VAR(PduInfoType, AUTOMATIC, CANIF_APPL_DATA) PduInfoPtr
);
#endif
#endif

#endif/* _CANIF_CBK_H_ */

/** @} */

