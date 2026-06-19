/**
 * @addtogroup CANIF
 * @{
 */

/**
 * @file CanIf_Types.h
 * @author Flagchip
 * @brief AUTOSAR CANIF - driver API and development errors implemention.
 * @version 0.3.0
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023 Flagchip Semiconductors Co., Ltd.
 *
 */
/*PRQA S 429, 3432 ++ #Misra-c:2012 Rule-20.7 - The macro arguments are not parenthesized to maintain compatibility with legacy 
            code and to avoid extensive changes that could introduce new defects. */
#ifndef CANIF_TYPES_H
#define CANIF_TYPES_H

/*******************************************************************************
*   Includes
*******************************************************************************/
#include "Can_GeneralTypes.h"
#include "CanIf_Cfg.h"
#include "CanIf_Version.h"
#include "EcuM_Cbk.h"


/*******************************************************************************
*   Typedef
*******************************************************************************/
#if (CAN_USE_LEGACY_CANIF_API == STD_ON)
typedef enum
{
    /*UNINIT mode. Default mode of the CAN Driver and all CAN controllers
    connected to one CAN network after power on. */
    CANIF_CS_UNINIT = 0,
    /*SLEEP mode. At least one of all CAN controllers connected to one CAN
    network are set into the SLEEP mode and can be woken up by request of the
    CAN Driver or by a network event (must be supported by CAN hardware) */
    CANIF_CS_SLEEP = 1,
    /*STARTED mode. All CAN controllers connected to one CAN network are started

    by the CAN Driver and in full-operational mode. */
    CANIF_CS_STARTED = 2,
    /*STOPPED mode. At least one of all CAN controllers connected to one CAN
    network is halted and does not operate on the network. */
    CANIF_CS_STOPPED = 3

} CanIf_ControllerModeType;
#endif

/*SWS_CANIF_00137*/
typedef enum
{

    CANIF_OFFLINE           = 0,
    CANIF_TX_OFFLINE_ACTIVE = 1,
    CANIF_TX_OFFLINE        = 2,
    CANIF_ONLINE            = 3
} CanIf_PduModeType ;


typedef enum
{

    EXTENDED_CAN,
    EXTENDED_FD_CAN,
    EXTENDED_NO_FD_CAN,
    STANDARD_CAN,
    STANDARD_FD_CAN,
    STANDARD_NO_FD_CAN
} CanIf_PduCanIdType ;




/*Return value of CAN L-PDU notification status.SWS_CANIF_00201*/
typedef enum
{
    /*No transmit or receive event occurred for the requested L-PDU.*/
    CANIF_NO_NOTIFICATION    = 0,
    /*The requested Rx/Tx CAN L-PDU was successfully transmitted or received.*/
    CANIF_TX_RX_NOTIFICATION = 1
} CanIf_NotifStatusType ;


#if(CANIF_CONFIG_VARIANTS != STD_CONFIG_VARIANTS_PRECOMPILE)
typedef P2FUNC(void, (TYPEDEF), (CanIf_User_ControllerBusOff_Type))
(
    uint8 (ControllerId)
);

typedef P2FUNC(void, (TYPEDEF), (CanIf_User_SetWakeupEvent_Type))
(
    EcuM_WakeupSourceType (sources)
);

typedef P2FUNC(void, (TYPEDEF), (CanIf_User_ValidateWakeupEvent_Type))
(
    EcuM_WakeupSourceType (sources)
);

typedef P2FUNC(void, (TYPEDEF), (CanIf_User_ControllerModeIndication_Type))
(
    uint8 (ControllerId),
    CanIf_ControllerModeType (ControllerMode)
);

typedef P2FUNC(void, (TYPEDEF), (CanIf_User_TrcvModeIndication_type))
(
    uint8 (TransceiverId),
    CanTrcv_TrcvModeType (TransceiverMode)
);

typedef P2FUNC(void, (TYPEDEF), (CanIf_User_CurrentIcomConfiguration_type))
(
    uint8 (ControllerId),
    IcomConfigIdType (ConfigurationId),
    IcomSwitch_ErrorType (Error)
);

#endif


typedef P2FUNC(void, (TYPEDEF), (CanIf_User_RxIndicationType))
(
    PduIdType (CanUserRxPduId),
    P2CONST(PduInfoType, (AUTOMATIC), (CANIF_APPL_DATA)) (PduInfoPtr)
);

typedef P2FUNC(void, (TYPEDEF), (CanIf_User_TxConfirmationType))
(
    PduIdType (CanUserTxPduId)
);


typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_User_TriggerTransmitType))
(
    PduIdType (TxPduId),
    P2VAR(PduInfoType, (AUTOMATIC), (CANIF_APPL_DATA)) (PduInfoPtr)
);



typedef struct
{
    uint8                   CanIfCtrlIdRef;  /*CANIF625_Conf */
    boolean                 isFullCanType; /*CANIF626_Conf*/
    Can_HwHandleType        HthIdSymRef;   /*CANIF627_Conf*/
#if(STD_ON == CANIF_PUBLIC_TX_BUFFERING)
    PduIdType               FirstBufIndexHth;
    PduIdType               TxBufSize;
#endif
} CanIf_HthCfgType;


/* config pdu structs types */
typedef struct
{
    /* CANIF591_Conf CanIfTxPduId is contained in this struct */
    Can_IdType              CanId;                 /* CANIF592_Conf CANIF590_Conf*/
    CanIf_PduCanIdType      CanIdType;        /* CANIF590_Conf */
    uint8                   Length;                /* CANIF594_Conf DLC */
#if(STD_ON == CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API)
    boolean                 TxPduReadNotifyStatus; /* CANIF589_Conf*/
    PduIdType               TxNotifyIndex;
#endif
#if (STD_ON == CANIF_PUBLIC_SETDYNAMICTXID_API)
    boolean                 isDynPduType;          /* CANIF593_Conf */
    PduIdType               DynPduIndex;
#endif

#if(STD_ON == CANIF_PUBLIC_TX_BUFFERING)
    PduIdType               TxBufIndex;
    P2VAR(uint8, (AUTOMATIC), (CANIF_APPL_DATA)) (dataBuf);
#endif

#if(STD_ON == CANIF_PUBLIC_PN_SUPPORT)
    boolean                    isPnFilterPdu;         /*CANIF773_Conf*/
#endif
#if(STD_ON == CANIF_TRIGGER_TRANSMIT_SUPPORT)
    boolean                 isTriggerPdu;
    uint8                   TriggerTransmit;
#endif

    Can_HwHandleType        HthRef;
    uint8                    TxConfirmation;        /* CANIF527_Conf */
    PduIdType                PduRef;                /* CANIF603_Conf handle for uplayyer module */
} CanIf_TxPduCfgType;


#if(STD_ON == CANIF_HRH_RANGE_FILTER_SUPPORT)
typedef struct
{
    /*CANIF745_Conf*/
    Can_IdType                      LowerCanId;
    /*CANIF744_Conf*/
    Can_IdType                      UpperCanId;
} CanIf_RxPduCanIdRangeCfgType;
#endif


typedef struct
{
    uint8                   CanIfCtrlIdRef;  /*CANIF625_Conf */
    boolean                 isFullCanType; /*CANIF626_Conf*/
    Can_HwHandleType        HrhIdSymRef;   /*CANIF627_Conf*/
#if(CANIF_FILTER_TYPE_INDEX == CANIF_PRIVATE_SOFTWARE_FILTER_TYPE)
    PduIdType               FirstRxPduIdInHrh;
#endif
} CanIf_HrhCfgType;


typedef struct
{
    /* CANIF597_Conf CanIfRxPduId is contained in this struct */
    Can_IdType                    CanId;          /* CANIF598_Conf */
    Can_IdType                    CanIdMask;
    CanIf_PduCanIdType            CanIdType; /* CANIF596_Conf */
    uint8                         Length;         /* CANIF599_Conf */
#if (STD_ON == CANIF_PUBLIC_READRXPDU_DATA_API)
    boolean                       RxPduReadData;  /* CANIF600_Conf */
    PduIdType                     RxBufIndex;
    P2VAR(uint8, (AUTOMATIC), (CANIF_APPL_DATA)) (dataBuf);
#endif
#if(STD_ON == CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API)
    boolean                       RxPduReadNotifyStatus; /* CANIF595_Conf */
    PduIdType                     RxNotifyIndex;
#endif
#if(CANIF_FILTER_TYPE_INDEX == CANIF_PRIVATE_SOFTWARE_FILTER_TYPE)
    PduIdType                     NextPduId;      /*  */
#endif
#if(STD_ON == CANIF_HRH_RANGE_FILTER_SUPPORT)
    CONSTP2CONST(CanIf_RxPduCanIdRangeCfgType, (TYPEDEF), (CANIF_CONST)) (IdRange);
#endif
#if(STD_ON == CANIF_PRIVATE_DLC_CHECK)
    boolean                       needDlcCheck;
#endif
    uint8                         RxIndication;   /* CANIF529_Conf  */
    PduIdType                     PduRef;          /* CANIF601_Conf handle for uplayyer module */
    Can_HwHandleType              HrhRef;         /* CANIF602_Conf  */
} CanIf_RxPduCfgType;


#if(CANIF_FILTER_TYPE_TABLE == CANIF_PRIVATE_SOFTWARE_FILTER_TYPE)
typedef uint8 CanIf_ContrllerPduIndexCfgType;
typedef P2VAR(uint8, (AUTOMATIC), (CANIF_APPL_DATA)) (CanIf_RxPduTableCfgType);
#endif


/*SWS_CANIF_00378*/

typedef P2FUNC(Can_ReturnType, (TYPEDEF), (CanIf_CanWriteType))
(
    Can_HwHandleType (Hth),
    P2CONST(Can_PduType, (AUTOMATIC), (CANIF_APPL_DATA)) (PduInfo)
);

typedef P2FUNC(Can_ReturnType, (TYPEDEF), (CanIf_CanSetControllerModeType))
(
    uint8 (Controller),
    Can_ControllerStateType (Transition)
);

typedef P2FUNC(Can_ReturnType, (TYPEDEF), (CanIf_CanCheckWakeupType))
(
    uint8 (Controller)
);

#if(STD_ON == CANIF_SET_BAUDRATE_API)
typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_CanChangeBaudrateType))
(
    uint8 (Controller),
    const uint16 (Baudrate)
);
#endif

typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_CanSetIComConfigrationType))
(
    uint8 (Controller),
    IcomConfigIdType (ConfigurationId)
);



typedef struct
{
    /* CANIF647_Conf CANIF_CTRL_ID is contained in this struct */
    boolean                       isWakeupSupport;   /* CANIF637_Conf, 0 means no wakeup support */
#if(STD_ON == CANIF_PUBLIC_MULTIPLE_DRV_SUPPORT)
    uint8                         CanDrvIndex;
    uint8                         CanCtrlIdRef;      /* CANIF636_Conf, each canDrv start from 0 */
#endif
} CanIf_CtrlCfgType;


typedef struct
{
    /* CANIF654_Conf CANIF_TRCV_ID is contained in this struct */
    boolean                       isWakeupSupport;   /* CANIF606_Conf, 0 means no wakeup support  */
#if(STD_ON == CANIF_PUBLIC_MULTIPLE_TRCVDRV_SUPPORT)
    uint8                          TrcvDrvIndex;
    uint8                         CanTrcvRef ;       /* CANIF605_Conf */
#endif
} CanIf_TrcvCfgType;


#if((STD_ON == CANIF_TRCV_WAKEUP_SUPPORT) || (STD_ON == CANIF_CTRL_WAKEUP_SUPPORT))
/* used in checkwakeup and wakeup validation
   trcv wakeup must related 1 Ctrl Wakeup this is used in validation
   may not support 1 Trcv connect to muti Ctrls, or 1 Ctrl connect to muti Trcvs
   only support single trcv with single Ctrl case
*/
typedef struct
{
    EcuM_WakeupSourceType         Source;            /* Wakeup Source from EcuM*/
    uint8                          CanIfCtrlIndex;    /* Ctrl Index: used in both type */
#if(STD_ON == CANIF_TRCV_WAKEUP_SUPPORT)
    uint8                         CanIfTrcvIndex;    /* Trcv Index: used only when src is Trcv type*/
    boolean                       isCtrlWakeupType;  /* Trcv WakeSrc or Ctrl WakeSrc*/
#endif
} CanIf_WakeupCfgType;
#endif



/*SWS_CANIF_00144 523*/
typedef struct
{
    PduIdType   NumOfRxPdu;          /*CANIF621_Conf*/
    PduIdType   NumOfTxPdu;          /*CANIF622_Conf  CANIF623_Conf*/
    Can_HwHandleType  NumOfHrh;
    Can_HwHandleType  NumOfHth;

#if (STD_ON == CANIF_PUBLIC_READRXPDU_DATA_API)
    PduIdType    NumOfRxBuf;
#endif
#if (STD_ON == CANIF_PUBLIC_TX_BUFFERING)
    PduIdType   NumOfTxBuf;
#endif
#if (STD_ON == CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API)
    PduIdType   NumOfTxNotify;
#endif
#if (STD_ON == CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API)
    PduIdType    NumOfRxNotify;
#endif
#if (STD_ON == CANIF_PUBLIC_SETDYNAMICTXID_API)
    PduIdType    NumOfDynTxPdu;
#endif

    CONSTP2CONST(CanIf_TxPduCfgType, (TYPEDEF), (CANIF_CONST)) (TxPduCfg);
    CONSTP2CONST(CanIf_RxPduCfgType, (TYPEDEF), (CANIF_CONST)) (RxPduCfg);
    CONSTP2CONST(CanIf_HthCfgType, (TYPEDEF), (CANIF_CONST)) (HthCfg);
    CONSTP2CONST(CanIf_HrhCfgType, (TYPEDEF), (CANIF_CONST)) (HrhCfg);
} CanIf_ConfigType;




#if(CANIF_MAX_TRCV_NUM > 0)
/* Function types for trcv Drv */
typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_TrcvSetOpModeType))
(
    uint8 (Transceiver),
    CanTrcv_TrcvModeType (OpMode)
);
typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_TrcvGetOpModeType))
(
    uint8 (Transceiver),
    P2VAR( CanTrcv_TrcvModeType, (AUTOMATIC), (CANIF_APPL_DATA) ) (OpMode)
);
typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_TrcvGetBusWuRType))
(
    uint8 (Transceiver),
    P2VAR(CanTrcv_TrcvWakeupReasonType, (AUTOMATIC), (CANIF_APPL_DATA) ) (Reason)
);
typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_TrcvSetWuModeType))
(
    uint8 (Transceiver),
    CanTrcv_TrcvWakeupModeType (TrcvWakeupMode)
);

typedef P2FUNC( Std_ReturnType, (TYPEDEF), (CanIf_CBWakeupByBusType))
(
    uint8 (Transceiver)
);

typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_TrcvCheckWakeupType))
(
    uint8 (Transceiver)
);


#if(CANIF_PUBLIC_PN_SUPPORT == STD_ON)
typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_ClearTrcvWufFlagType))
(
    uint8 (Transceiver)
);
typedef P2FUNC(Std_ReturnType, (TYPEDEF), (CanIf_CheckTrcvWakeFlagType))
(
    uint8 (Transceiver)
);

typedef P2FUNC(void, (TYPEDEF), (CanIf_TrcvPnIndType))
(
    uint8 (Transceiver)
);

#endif /* CANIF_PUBLIC_PN_SUPPORT == STD_ON */

#endif /* CANIF_MAX_TRCV_NUM > 0 */

#endif/* _CANIF_TYPE_H_  */

/** @} */
/*  PRQA S 429, 3432 -- */
