/**
*   @file    Can_ControllerType.h
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
                                                          -Add MB length
==================================================================================================*/
#ifndef CAN_CONTROLLER_TYPE_H
#define CAN_CONTROLLER_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Can_Cfg.h"
#include "Can_GeneralTypes.h"

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Can MB Hardware Object Type
 *
 */
typedef enum
{
    CAN_RECEIVE = 0U,/**< CAN_RECEIVE  Received MB */
    CAN_TRANSMIT     /**< CAN_TRANSMIT Transmit MB */
} Can_HwObjType;

/**
 * @brief CAN ID type [SWDESG_CAN_185][SWDESG_CAN_186]
 *
 */
typedef enum
{
    CAN_EXTENDED = 0U,/**< CAN_EXTENDED  Extended ID                   */
    CAN_STANDARD,     /**< CAN_STANDARD  Standard ID                   */
    CAN_MIXED         /**< CAN_MIXED     Both Standard and Extended ID */
} Can_IdTypeType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


typedef void (*Can_PCallBackType)(void);

#if (CAN_FD_MODE_ENABLE == STD_ON)
/**
 * @brief Can FD Configuration
 *
 */
typedef struct
{
    const uint32 u32CanFdEN;               /**< Can FD Enable         */
    const uint32 u32CanFdBaud;             /**< Can FD Baudrate       */
    const uint32 u32CanFdPreSeg;           /**< FD pre seg Register value  */
    const uint32 u32CanFdEDCbtReg;         /**< FD EDCBT Register value  */

    const uint32 u32CanControllerTDCOFF;   /**< TDCOFF value          */

    const uint32 u32CanControllerTxBRS;    /**< Enable BRS            */

#if ((CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || \
     (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON))
    const uint32 u32CanFdCTRL2Reg;         /**< CTRL2 Register value  */
#endif

} Can_ControllerFdConfigType;
#endif


/**
 * @brief
 *
 */
typedef struct
{
    const uint32 u32EncbtReg;                      /**< ENCBT register value        */
    const uint8  u8TASD;                           /**< TASD value                */
    const uint16 u16CtrlPrescaler;                 /**< Prescaler in CTRL         */

    const uint16 u16ControllerBaud;                /**< Baudrate                  */
#if (CAN_FD_MODE_ENABLE == STD_ON)
    const Can_ControllerFdConfigType ControllerFD; /**< FD settings               */
#endif

#if (CAN_SET_BAUDRATE_API == STD_ON)
    const uint16 u16ControllerBaudRateConfigID;    /**< Baudrate Configuration ID */
#endif
} Can_ControllerBaudrateConfigType;

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/**
 * @brief Legacy Rx FIFO Configuration
 *
 */
typedef struct
{
    const uint32 u32TableId;          /**< ID for Legacy Rx FIFO   */
    const uint32 u32TableFilterMask;  /**< Mask for Legacy Rx FIFO */
} Can_RxLegacyFiFoTableIdConfigType;

#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
typedef uint32 Can_RxEnhancedFiFoTableIdConfigType;
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */


/**
 * @brief Message Buffer Configuration
 *
 */
typedef struct
{
    uint16         u16IdMaskIndex;              /**< Id Mask Table Index                    */
    const uint8    u8ControllerId;              /**< Controller ID configured in EB         */
    Can_IdTypeType eIdType;                     /**< Can ID Type, Standard, Extended, Mixed */
    Can_HwObjType  eMBType;                     /**< Message Buffer Type, Transmit, Receive */
    uint32         mbMessageId;                /**< CAN ID                                 */
    const uint8    u8LocalPriority;             /**< Can ID Priority                        */
    uint32         u32HWObjID;                  /**< MB Logical Index configured in EB      */
    uint32         u32HWObjIDArrayIndex;        /**< All MB Index for All Controllers       */
    #if (CAN_FD_MODE_ENABLE == STD_ON)
    uint8          u8FdPaddingValue;            /**< Can FD Pad value                      */
    #endif

    const uint8    u8CanMainFuncRWPeriodRef;    /**< Multi-Polling Id                      */
    const uint16   u16MBOffsetAddr;             /**< MB Offset in Current Can              */
    const uint8    u8MBPayloadLength;           /**< MB Data Length                        */
    const uint8    u8HWMBIndex;                 /**< MB Index In Current Can               */
    const boolean  bInterruptEn;                /**< MB interrupt enable */

    #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
    const boolean CanTriggerTransmitEnable;   /**< Trigger transmit enable               */
    #endif
} Can_MBConfigObjectType;

/**
 * @brief Can Controller Instance Configuration
 *
 */
typedef struct
{
    const uint8                                   u8MaxMBCnt;                        /**< Max Message Buffer Number In Current Can           */
    const uint8                                   u8MaxBaudCnt;                      /**< No. of BaudRate configured for current controller  */
    const uint8                                   u8DefaultBaudIndex;                /**< Default BaudRate configured                        */
    const Can_ControllerBaudrateConfigType* const pControllerBaudCfgsPtr;            /**< Baudrate Configuration array
                         */
    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))

    const uint16* const                           pFifoHrhList;                      /**< Fifo RX HRH List Point                             */
    const uint8                                   u8FifoHrhListLen;                  /**< Fifo RX HRH List Length                            */

    #endif

    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)

    const uint8                                   u8StandardFilterNum;                       /**< Defines the number of standard ID filter elements used during the Enhanced Rx FIFO matching process. */
    const uint8                                   u8ExtendedFilterNum;                       /**< Defines the number of extended ID filter elements used during the Enhanced Rx FIFO matching process. */
    const uint8                                   u8Watermark;                               /**< Defines the minimum number of CAN messages stored in the Enhanced RX FIFO.                           */
    const Can_PCallBackType                       Can_EnhancedRxFifoOverflowNotification;    /**< Pointer to RxFifo Overflow notification function   */
    const Can_PCallBackType                       Can_EnhancedRxFifoWarningNotification;     /**< Pointer to RxFifo Warning notification function    */
    const boolean                                 bEnhancedFifoInterruptEn;                  /**< Enable or disable fifo interrupt.                  */
    const uint8                                   u8EnhancedCanMainFuncRWPeriodRef;          /**< Multi-Polling Id                                   */
    #endif  /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */

    #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

    const uint32                                  u32RxFifoGlobalMask;                     /**< Legacy Rx Fifo Global Mask value                   */
    const uint8                                   u8RxFiFoUsedMb;                          /**< Number of MBs used by Rx Fifo                      */
    const Can_PCallBackType                       Can_LegacyRxFifoOverflowNotification;    /**< Pointer to RxFifo Overflow notification function   */
    const Can_PCallBackType                       Can_LegacyRxFifoWarningNotification;     /**< Pointer to RxFifo Warning notification function    */
    const boolean                                 bLegacyFifoInterruptEn;                  /**< Enable or disable fifo interrupt.                  */
    const uint8                                   u8LegacyCanMainFuncRWPeriodRef;          /**< Multi-Polling Id                                   */
#endif  /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
    const boolean                                 bSupportFD;                        /**< The CAN instance support CANFD mode or not          */
#if (CAN_FD_MODE_ENABLE == STD_ON)
    const uint32                                  u32MBBlockSize;                    /**< Message Buffer Data Size for RAM regions            */
#endif
    const uint32                                  u32MBLentgh;                       /**< Message Buffer Length for one                       */

    const uint32                                  u32Options;                        /**< Controller Options                                  */
} Can_ControlerInstanceType;

/**
 * @brief Message Buffer Container
 *
 */
typedef struct
{
    const Can_MBConfigObjectType* const pMsgBufCfgsPtr;    /**< Message Buffer Array   */
    const uint16                        u16MsgBufCfgCnt;   /**< Message Buffer Count   */
} Can_MBConfigContainerType;

/**
 * @brief Can Controller Container
 *
 */
typedef struct
{
    const Can_ControlerInstanceType* const pInstanceCfgsPtr;   /**< Controller Instance Array   */
    const uint16                           u16InstanceCfgCnt;  /**< Controller Instance Count   */
} Can_ControllerConfigContainerType;

/**
 * @brief Can Controller hardware Instance Structure
 *
 */
typedef struct
{

    #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
    const uint32 u32ECUMWakeupSourceId;                 /**< ID source Wakeup of EcuM                                                                                  */
    #endif

    const uint8             u8CanIndex;                 /**< Can Index                                                                                                 */
    const uint32            u32ControlReg;              /**< CTRL Register value                                                                                       */

    const Can_PCallBackType Can_ErrorNotification;      /**< Pointer to Error interrupt notification function (ESR[ERR_INT]).                                          */
#if (CAN_FD_MODE_ENABLE == STD_ON)
    const Can_PCallBackType Can_ErrorFDNotification;    /**< Pointer to Error interrupt notification function (ESR[ERRFAST_INT]).                                      */
#endif /* CAN_FD_MODE_ENABLE == STD_ON */

    const uint8 u8NumberOfMB;                           /**< Number of message Buffers available for FlexCan unit.                                                     */
    const uint32 u32Options;                            /**< BusOff Sw Recovery, RXFifo En, IDAM Type,  Event Trigger Mode TxProcessing/RxProcessing/BusoffProcessing. */
} CanHal_ControlerInstanceType;

/**
 * @brief Can Controller Hardware Instance Configuration
 *
 */
typedef struct
{
    uint8                               u8ControllerCount;     /**< Controller Instance Count            */
    const CanHal_ControlerInstanceType* pControllerInstances;  /**< Controller Instance Array            */
    /*Maximum Object IDs configured */
    uint32                              u32CanObjCount;        /**< Can Hardware Object Count            */
} CanHal_ConfigType;

#ifdef __cplusplus
}
#endif

#endif /* CAN_CONTROLLER_TYPE_H */
