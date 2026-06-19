/**
 *   @file    CDD_Ospi.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD Ospi - Complex driver header of Ospi module.
 *   @details This file contains the Ospi Autosar driver API and development errors definition.
 *
 *   @addtogroup OSPI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : OSPI
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
*   ---------   ----------    -----------   ----------   ---------------
*   0.1.0       14/09/2023    QXW0122       N/A          OSPI Initial Version
==================================================================================================*/

#ifndef CDD_OSPI_H
#define CDD_OSPI_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/*
 * @file           CDD_Ospi.h
 */
#include "Std_Types.h"
#include "Mcal.h"
#include "Ospi_Types.h"
#include "CDD_Ospi_Cfg.h"
#include "Ospi_Reg.h"
#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
#include "Dma_Types.h"
#endif

/*==================================================================================================
*                                      DEFINES
==================================================================================================*/

#define OSPI_LUT_SEQ(cmd0, pad0, op0, cmd1, pad1, op1)                                               \
    (OSPI_LUT_INSTR0_CMD_NAME(cmd0) | OSPI_LUT_INSTR0_PAD_NUM(pad0) | OSPI_LUT_INSTR0_DRV_CMD(op0) | \
     OSPI_LUT_INSTR1_CMD_NAME(cmd1) | OSPI_LUT_INSTR1_PAD_NUM(pad1) | OSPI_LUT_INSTR1_DRV_CMD(op1))

/*pad setting in OSPI*/
#define SINGLE_IO                    0x00
#define DUAL_IO                      0x01
#define QUAD_IO                      0x02
#define OCTAL_IO                     0x03

/*OSPI COMMAND SET*/
#define OSPI_CMD_STOP                0x0
#define OSPI_CFG_DRV                 0x1
#define OSPI_CFG_ADDR                0x2
#define OSPI_CMD_DUMMY               0x3
#define OSPI_CFG_MODE8               0x4
#define OSPI_CFG_MODE2               0x5
#define OSPI_CFG_MODE4               0x6
#define OSPI_READ_DRV                0x7
#define OSPI_WRITE_DRV               0x8
#define OSPI_CMD_END                 0x9
#define OSPI_CFG_ADDR_DDR            0xA
#define OSPI_CFG_MODE8_DDR           0xB
#define OSPI_CFG_MODE2_DDR           0xC
#define OSPI_CFG_MODE4_DDR           0xD
#define OSPI_READ_DRV_DDR            0xE
#define OSPI_WRITE_DRV_DDR           0xF
#define OSPI_CFG_DRV_DDR             0x11
#define OSPI_CFG_CADDR               0x12
#define OSPI_CFG_CADDR_DDR           0x13
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
/**
 * @{
 * @brief          Service ID (APIs) for Ospi_Init
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_INIT_ID                 ((uint8)0x00u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_GetStatus
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_GETSTATUS_ID            ((uint8)0x01u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_DeInit
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_DEINIT_ID               ((uint8)0x02u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_SetFlashAddress
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_SET_FLASH_ADDRESS_ID    ((uint8)0x03u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_UpdateLUT
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_UPDATE_LUT_ID           ((uint8)0x04u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_HyperBusSyncCommandRead
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_SYNC_READ_ID            ((uint8)0x05u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_HyperBusSyncCommandWrite
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_SYNC_WRITE_ID           ((uint8)0x06u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_SetTxFifoWatermark
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_SET_FIFO_TxWATERMARK_ID ((uint8)0x07u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_LLD_SetRxFifoWatermark
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_SET_FIFO_RxWATERMARK_ID ((uint8)0x08u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_DmaInit
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_CONFIG_DMA_ID           ((uint8)0x09u)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_EnableTxDma
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_ENABLE_TX_DMA_ID        ((uint8)0x0Au)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_EnableRxDma
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_ENABLE_RX_DMA_ID        ((uint8)0x0Bu)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_DisableTxDma
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_DISABLE_TX_DMA_ID       ((uint8)0x0Cu)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_DisableRxDma
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_DISABLE_RX_DMA_ID       ((uint8)0x0Du)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_HyperBusAsyncCommandDmaRead
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_ASYNC_DMA_READ_ID       ((uint8)0x0Eu)

/**
 * @{
 * @brief          Service ID (APIs) for Ospi_HyperBusAsyncCommandDmaWrite
 * @details        Parameters used when raising an error/exception.
 * @api
 */
#define OSPI_ASYNC_DMA_WRITE_ID      ((uint8)0x0Fu)
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @{
 * @brief          Service ID (APIs) for Det reporting
 * @details        Ospi_Init service called while the OSPI driver has already been initialized
 * @api
 */
#define OSPI_E_ALREADY_INITIALIZED   ((uint8)0x01u)

/**
 * @{
 * @brief          Service ID (APIs) for Det reporting
 * @details        Ospi_Init service used without module initialization
 * @api
 */
#define OSPI_E_UNINIT                ((uint8)0x02u)

/**
 * @{
 * @brief          Service ID (APIs) for Det reporting
 * @details        Ospi_Init service In Post Build Config pointer is NULL
 * @api
 */
#define OSPI_E_PARAM_POINTER         ((uint8)0x03u)

/**
 * @{
 * @brief          Service ID (APIs) for Det reporting
 * @details        The input is not within the scope of the parameter function
 * @api
 */
#define OSPI_E_PARAM_OUTRANGE        ((uint8)0x04u)

/**
 * @brief            OSPI Instance ID
 *
 */
#define OSPI_INSTANCE_ID             ((uint8)0x00u)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief          OSPI UNIT status.
 * @details        States that defines the controllers.
 *
 */
typedef enum
{
    OSPI_UNINIT,
    OSPI_IDLE,
    OSPI_HYPERBUS_INIT,
    OSPI_ERROR,
    OSPI_SUCCESS,
    OSPI_TXDMANONECMDDONE,
    OSPI_TIMEOUT,
    OSPI_BUSY,
    OSPI_BUSY_TX = 0x30,
    OSPI_BUSY_RX = 0x31,
} Ospi_StatusType;

/**
 * @brief          OSPI command type
 * @details        The current command is read or write
 *
 */
typedef enum
{
    OSPI_COMMAND_DMAINIT,
    OSPI_COMMAND_READ,  /* /!< OSPI operation: Read */
    OSPI_COMMAND_WRITE, /* /!< OSPI operation: Write */
} Ospi_CommandType;

/*==================================================================================================
*                                    STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

typedef void(Ospi_NotifyType)(void);

/**
 * @brief          The structure holds the Device configuration parameters.
 * @details        The structure holds the Device configuration parameters.
 *
 */
typedef struct
{
    boolean              bDdrEn;
    OSPI_DqsSrcSelType   OSPIDqsSrcSelType;
    OSPI_ClockDivideType OSPIClockDivideType;
    OSPI_ClockMuxType    OSPIClockMuxType;
    OSPI_EndianType      OSPIEndianType;

    uint32 FlashAddress;
    uint32 FlashTopAddress;
    uint8  FlashColAddressSpace;
    uint8  WordAddressable;
    uint32 OspiTimeout;
    uint8  CsHoldTime;
    uint8  CsSetupTime;
    uint8  DelayLine;

#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
    Dma_InstanceType eOspiTxDmaInstance; /**< DMA instance associated with the Ospi*/
    uint8            u8OspiTxDmaChannel; /**< DMA channel used for transmit data*/
    Dma_InstanceType eOspiRxDmaInstance; /**< DMA instance associated with the Ospi*/
    uint8            u8OspiRxDmaChannel; /**< DMA channel used for receive data*/
    uint8            OspiTxWatermark;
    uint8            OspiRxWatermark;
#endif

    Ospi_NotifyType *Ospi_TransferCompleteNotification;
    Ospi_NotifyType *Ospi_TransferErrorNotification;
} Ospi_DeviceConfig;

/**
 * @brief          This is the top level structure containing all the needed static parameters for
 * the Ospi Handler/Driver.
 * @details        This is the top level structure containing all the needed parameters for the Ospi
 * Handler/Driver.
 */
/*
 * @implements
 */
typedef struct
{
    /**< @brief Array of LLD OSPI device instances. */
    const Ospi_DeviceConfig *DeviceConfig;
    /**
     * @brief OSPI Driver DEM Error: OSPI_E_HARDWARE_ERROR
     *
     */
#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF)
    Mcal_DemErrorType OSPI_DEM_E_BUSY_Cfg;              /**< @brief Contains enablement of specific
                                                             error report and value assigned
                                                             by Dem as OSPI_DEM_E_BUSY and   */
    Mcal_DemErrorType OSPI_DEM_E_TO_FIFO_THRESHOLD_Cfg; /**< @brief Contains enablement of specific
                                                error report and value assigned
                                                by Dem as OSPI_DEM_E_TO_FIFO_THRESHOLD and   */
    Mcal_DemErrorType OSPI_DEM_E_TIMEOUT_Cfg;           /**< @brief Contains enablement of specific
                                                          error report and value assigned
                                                          by Dem as OSPI_DEM_E_TIMEOUT and   */
#endif
} Ospi_ConfigType;

/*==================================================================================================
                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define OSPI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

OSPI_DATA_SECTION extern const Ospi_ConfigType *OspiConfigPtr;

#define OSPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

#define OSPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ospi_MemMap.h"

OSPI_CFG_EXTERN_DECLARATIONS

#define OSPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ospi_MemMap.h"

/*==================================================================================================
                                FUNCTION PROTOTYPES
==================================================================================================*/

#define OSPI_START_SEC_CODE
#include "Ospi_MemMap.h"

OSPI_TEXT_SECTION void Ospi_Init(const Ospi_ConfigType *pConfigPtr);

OSPI_TEXT_SECTION void Ospi_DeInit(void);

OSPI_TEXT_SECTION Ospi_StatusType Ospi_GetStatus(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_SetFlashAddress(uint32 FlashAddress);

OSPI_TEXT_SECTION Std_ReturnType Ospi_UpdateLUT(uint32 index, const uint32 *cmd, uint32 count);

OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusSyncCommandRead(uint8   u8SeqId,
                                                              uint32 *pBuf,
                                                              uint32  u32Size);

OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusSyncCommandWrite(uint8         u8SeqId,
                                                               const uint32 *pBuf,
                                                               uint32        u32Size);

#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
OSPI_TEXT_SECTION void Ospi_DmaInit(const uint32 *writeBuf, uint32 *readBuf, uint16 testsize);

OSPI_TEXT_SECTION Std_ReturnType Ospi_EnableTxDma(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_EnableRxDma(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_DisableTxDma(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_DisableRxDma(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_SetTxFifoWatermark(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_SetRxFifoWatermark(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusAsyncCommandDmaRead(uint8 u8SeqId, uint32 dataSize);

OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusAsyncCommandDmaWrite(uint8 u8SeqId, uint32 dataSize);

OSPI_TEXT_SECTION void OSPI_DMATxIsr(void);

OSPI_TEXT_SECTION void OSPI_DMARxIsr(void);
#endif /*OSPI_DMA_HANDLING_ALLOWED == STD_ON*/

OSPI_TEXT_SECTION void Ospi_IsrTransferError(void);

OSPI_TEXT_SECTION void Ospi_IsrTransferComplete(void);

#define OSPI_STOP_SEC_CODE
#include "Ospi_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_OSPI_H */

/** @} */
