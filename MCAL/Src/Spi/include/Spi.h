/**
*   @file    Spi.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Spi - driver API and development errors implemention.
*   @details This file contains the Spi Autosar driver API and development errors implemention.
*
*   @addtogroup Spi
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Spi
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
*   0.1.0       14/07/2023    QXW0071       N/A          SPI Initial Version
*   0.2.0       03/10/2023    QXW0071       N/A          Add support for multi-core
*   0.3.0       19/10/2023    QXW0071       N/A          Optimize code to comply with Misra-C rules
*   0.4.0       17/11/2023    QXW0071       N/A          Add workaround when enable CS Continuous and sample on first edge.
*   0.5.0       01/16/2024    QXW0071       N/A          Optimize Code
*   0.6.0       02/28/2024    QXW0103       N/A          Add support for FC7240
==================================================================================================*/

#ifndef SPI_H
#define SPI_H

#ifdef __cplusplus
extern "C"
{
#endif


/*==============================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==============================================================================*/

#include "Std_Types.h"
#include "Mcal.h"
#include "Spi_Cfg.h"
#if (SPI_DMA_USED == STD_ON)
#include "Dma_Types.h"
#endif

#include "Platform_Types.h"
#include "StdRegMacros.h"

/*==============================================================================
*                                          CONSTANTS
==============================================================================*/


/*==============================================================================
*                                      DEFINES AND MACROS
==============================================================================*/
/**
* @brief Indicates the HW unit is configured as Sync mode.
*
*/
#define SPI_HW_UNIT_SYNC_U8        ((uint8)1)
/**
* @brief Indicates the HW unit is configured as Async  mode.
*
*/
#define SPI_HW_UNIT_ASYNC_U8       ((uint8)0)

/* Error Values */
/**
* @brief API service called with wrong parameter.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_PARAM_CHANNEL       ((uint8)0x0Au)
/**
* @brief API service called with wrong parameter.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_PARAM_JOB           ((uint8)0x0Bu)
/**
* @brief API service called with wrong parameter.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_PARAM_SEQ           ((uint8)0x0Cu)
/**
* @brief API service called with wrong parameter.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_PARAM_LENGTH        ((uint8)0x0Du)
/**
* @brief API service called with wrong parameter.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_PARAM_UNIT          ((uint8)0x0Eu)
/**
* @brief API service called with wrong resource assigned.
*
*/
/** @implements Spi_ErrorCodes_define  */
#define SPI_E_PARAM_CONFIG        ((uint8)0x0Fu)
/**
* @brief API service used without module initialization.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_UNINIT              ((uint8)0x1Au)
/**
* @brief Services called in a wrong sequence.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_SEQ_PENDING         ((uint8)0x2Au)
/**
* @brief Synchronous transmission service called at wrong time.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_SEQ_IN_PROCESS      ((uint8)0x3Au)
/**
* @brief API SPI_Init service called while the SPI driver has already been initialized.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_ALREADY_INITIALIZED ((uint8)0x4Au)

/**
* @brief   The number of sequences, jobs or channels exceeds precompile time sizes.
* @details The number of sequences, jobs or channels in the configuration
*          exceeds precompile time related sizes:
*          SPI_SEQUENCE_MAX_COUNT, SPI_JOB_MAX_COUNT or SPI_CHANNEL_MAX_COUNT.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_CONFIG_OUT_OF_RANGE ((uint8)0x5Au)

/**
* @brief   When a sequence contains uninitialized external buffers.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_PARAM_EB_UNIT       ((uint8)0x5Bu)

/**
* @brief   No job in sequence.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_SEQ_EMPTY           ((uint8)0x5Cu)

/**
* @brief   No channel in job.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_JOB_EMPTY           ((uint8)0x5Du)
/**
* @brief   If the parameter versioninfo is NULL_PTR.
*
* @implements Spi_ErrorCodes_define
*/
#define SPI_E_PARAM_POINTER           ((uint8)0x10u)


/* bit mask */
/**
* @brief   Flag indicates sending default data.
*
*/
#define SPI_CHNL_SEND_DEFAULT_FLAG_U8 ((uint8) 0x1)
/**
* @brief   Flag indicates discarding Rx data.
*
*/
#define SPI_CHNL_IGNORE_RX_FLAG_U8    ((uint8) 0x2)


    /* Service IDs */
/**
* @brief API service ID for SPI Init function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_INIT_ID              ((uint8) 0x00u)
/**
* @brief API service ID for SPI DeInit function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_DEINIT_ID            ((uint8) 0x01u)
/**
* @brief API service ID for SPI write IB function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_WRITEIB_ID           ((uint8) 0x02u)
/**
* @brief API service ID for SPI async transmit function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_ASYNCTRANSMIT_ID     ((uint8) 0x03u)
/**
* @brief API service ID for SPI read IB function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_READIB_ID            ((uint8) 0x04u)
/**
* @brief API service ID for SPI setup EB function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_SETUPEB_ID           ((uint8) 0x05u)
/**
* @brief API service ID for SPI get status function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_GETSTATUS_ID         ((uint8) 0x06u)
/**
* @brief API service ID for SPI get job result function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_GETJOBRESULT_ID      ((uint8) 0x07u)
/**
* @brief API service ID for SPI get sequence result function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_GETSEQUENCERESULT_ID ((uint8) 0x08u)
/**
* @brief API service ID for SPI get version info function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_GETVERSIONINFO_ID    ((uint8) 0x09u)
/**
* @brief API service ID for SPI sync transmit function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_SYNCTRANSMIT_ID      ((uint8) 0x0Au)
/**
* @brief API service ID for SPI get hwunit status function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_GETHWUNITSTATUS_ID   ((uint8) 0x0Bu)
/**
* @brief API service ID for SPI cancel function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_CANCEL_ID            ((uint8) 0x0Cu)
/**
* @brief API service ID for SPI set async mode function.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_SETASYNCMODE_ID      ((uint8) 0x0Du)
/**
* @brief API service ID for SPI main function
* @details Parameters used when raising an error or exception
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_MAINFUNCTION_HANDLING_ID  ((uint8)0x10u)
/**
* @brief API service ID for SPI set HW Unit async mode.
* @details Parameters used when raising an error or exception.
*
* @implements Spi_ServiceIds_Define
*/
#define SPI_SETHWUNITASYNCMODE_ID  ((uint8)0x80u)

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
* @brief   The number of allowed job priority levels (0..3).
* @details The Priority has to be sint8.
*
*/
#define SPI_JOB_PRIORITY_LEVELS_COUNT    (4)
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
* @brief  Values used to denote NULL indexes.
*/
#if (SPI_MORE_THAN_256_SEQ_JOB_CHAN_SUPPORT == STD_ON)
#define SPI_JOB_NULL            ((Spi_JobType)(0xFFFFFFFFU))
#else
#define SPI_JOB_NULL            ((Spi_JobType)(0xFFFFU))
#endif /* (SPI_MORE_THAN_256_SEQ_JOB_CHAN_SUPPORT == STD_ON) */
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

/**
* @brief   Flag indicates sending default data.
*
*/
#define SPI_CHANNEL_FLAG_TX_DEFAULT_U8 ((uint8) 0x01u)
/**
* @brief   Flag indicates discarding Rx data.
*
*/
#define SPI_CHANNEL_FLAG_RX_DISCARD_U8 ((uint8) 0x02u)

/*==============================================================================
*                                            ENUMS
==============================================================================*/
/**
* @brief   This type defines a range of specific status for SPI Driver.
*
* @implements Spi_StatusType_enumeration
*/
typedef enum {
    SPI_UNINIT = 0,          /**< @brief  Not initialized or not usable. */
    SPI_IDLE,                /**< @brief  Not currently transmitting any jobs. */
    SPI_BUSY                 /**< @brief  Is performing a SPI Job(transmit). */
} Spi_StatusType;

/**
* @brief   This type defines a range of specific Jobs status for SPI Driver.
*
* @implements Spi_JobResultType_enumeration
*/
typedef enum {
    SPI_JOB_OK = 0,     /**< @brief  The last transmission of the Job has been finished successfully. */
    SPI_JOB_PENDING,    /**< @brief  The SPI handler/Driver is performing a SPI Job. */
    SPI_JOB_FAILED,     /**< @brief  The last transmission of the Job has failed. */
    SPI_JOB_QUEUED      /**< @brief  An asynchronous transmit Job has been accepted, while actual
                                     transmission for this Job has not started yet. */
} Spi_JobResultType;

/**
* @brief   This type defines a range of specific Sequences status for SPI Driver.
*
* @implements Spi_SeqResultType_enumeration
*/
typedef enum {
    SPI_SEQ_OK = 0, /**< @brief  The last transmission of the Sequence has been finished successfully. */
    SPI_SEQ_PENDING,         /**< @brief  The SPI handler/Driver is performing a SPI Sequence. */
    SPI_SEQ_FAILED,          /**< @brief  The last transmission of the Sequence has failed. */
    SPI_SEQ_CANCELLED   /**< @brief  The last transmission of the Sequence has been cancelled by the user. */
} Spi_SeqResultType;


/**
* @brief   Specifies the asynchronous mechanism mode for SPI buses handled asynchronously in Level 2
* @details #if (SPI_LEVEL_2 == SPI_LEVEL_DELIVERED)
*            Specifies the asynchronous mechanism mode for SPI buses handled
*            asynchronously in LEVEL 2. SPI150: This type is available or not
*           according to the pre compile time parameter:
*            SPI_LEVEL_DELIVERED. This is only relevant for LEVEL 2.
*
* @implements Spi_AsyncModeType_enumeration
*/
typedef enum {
    /**< @brief  The asynchronous mechanism is ensured by polling, so interrupts
       related to SPI buses handled asynchronously are disabled. */
    SPI_POLLING_MODE = 0,
    /**< @brief  The asynchronous mechanism is ensured by interrupt, so interrupts
       related to SPI buses handled asynchronously are enabled. */
    SPI_INTERRUPT_MODE
} Spi_AsyncModeType;


/**
* @brief   Specifies the operation mode (Master or Slave).
*
* @implements Spi_ModeType_enumeration
*/
typedef enum {
    SPI_MASTER = 0,             /**< @brief  SPI Hardware selected as MASTER. */
    SPI_SLAVE                   /**< @brief  SPI Hardware selected as SLAVE. */
} Spi_MasterSlaveModeType;

/**
* @brief   The enumeration containing the designated values for buffer types (internal or external).
*
*/
typedef enum {
    IB = 0,    /**< @brief Internal buffer */
    EB         /**< @brief External buffer */
} SPI_IbEbBufferType;

/*==============================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==============================================================================*/

/*---------------------------------------------------------------------------
*                 SPI Driver AUTOSAR Related Type Definitions
-----------------------------------------------------------------------------*/

/**
* @brief   Type of application data buffer elements.
*/
 /**
* @implements Spi_DataBufferType_typedef
*/
typedef uint8 Spi_DataBufferType;

/**
* @brief   Type for defining the number of data elements of the type Spi_DataBufferType.
* @details Type for defining the number of data elements of the type Spi_DataBufferType
*          to send or receive by Channel.
*
* @implements Spi_NumberOfDataType_typedef
*/
typedef uint16 Spi_NumberOfDataType;

#if (SPI_MORE_THAN_256_SEQ_JOB_CHAN_SUPPORT == STD_ON)

/**
* @brief   Specifies the identification (ID) for a Channel.
*
* @implements Spi_ChannelType_typedef
*/
typedef uint32 Spi_ChannelType;

/**
* @brief   Specifies the identification (ID) for a Job.
*
* @implements Spi_JobType_typedef
*/
typedef uint32 Spi_JobType;

/**
* @brief   Specifies the identification (ID) for a sequence of jobs.
*
* @implements Spi_SequenceType_typedef
*/
typedef uint32 Spi_SequenceType;
#else

/**
* @brief   Specifies the identification (ID) for a Channel.
*
* @implements Spi_ChannelType_typedef
*/
typedef uint8 Spi_ChannelType;

/**
* @brief   Specifies the identification (ID) for a Job.
*
* @implements Spi_JobType_typedef.
*/
typedef uint16 Spi_JobType;

/**
* @brief   Specifies the identification (ID) for a sequence of jobs.
*
* @implements Spi_SequenceType_typedef.
*/
typedef uint8 Spi_SequenceType;
#endif

/**
* @brief     Specifies the identification(ID) for a SPI Hardware microcontroller peripheral (unit).
* @details  This type specifies the identification (ID) for a SPI
*            Hardware microcontroller peripheral unit.
*
* @implements Spi_HWUnitType_typedef
*/
typedef uint8 Spi_HWUnitType;

/**
* @brief     Contains the ID of an external device.
* @details  This contains the identification (ID) of the external device for which
*            there's a collection of particular settings
*
*/
typedef uint8 Spi_ExternalDeviceType;

typedef void (*Spi_PFnNotifyType) (void);



/**
* @brief Internal structure used to manage the channel attributes for FCSPI IPV.
*/
typedef struct 
{
    uint32 SpiCoreUse;                   /**< @brief CoreID used */
    uint32 u32ChnlTRCTRL;               /**< @brief  Channel attributes for CMD in TCR register. */
    uint32 u32ChnlFIFOWTM;              /**< @brief  Channel attributes for FIFO control in FCR register. */
    uint8  u8ChnlBufAccessLength;       /**< @brief  Channel attributes for data width. */
} Spi_ChnlAttrsType;

/**
* @brief   This structure holds the channel attributes configuration.
*/
typedef struct
{
    const Spi_ChnlAttrsType  *ChannelAttrsCfg;               /**< @brief Point to ExternalDevice configuration. */
} Spi_ChannelsAttrsType;

/**
* @brief Internal structure used to manage the FCSPI unit attributes.
*/
typedef struct 
{
    uint32 SpiCoreUse;         /**< @brief CoreID used */
    uint32 u32TR_CTRL;        /**< @brief  Device attributes for TCRs. */
    uint32 u32CLK_CFG;        /**< @brief  Device configuration for timing in CCR. */
    uint32 u32CFGR1;          /**< @brief  Device CS idle setting. */
} Spi_DeviceAttrType;

/**
* @brief   This structure holds the External devices configuration.
*/
typedef struct
{
    const Spi_DeviceAttrType  *DeviceAttrsCfg;               /**< @brief Point to ExternalDevice configuration. */
} Spi_ExDevicesAttrsType;


/**
* @brief   This structure contains all the needed data to configure one SPI Sequence.
*
* @implements Spi_SequenceConfigType_struct
*/
typedef struct {
    Spi_JobType          tNumJobs;               /**< @brief  Count of jobs in this sequence. */
    uint32               SpiCoreUse;             /**< @brief CoreID used */
    const Spi_JobType    *pcJobsArray;           /**< @brief  Job index list. */
    Spi_PFnNotifyType    pfnSeqEndNotify;        /**< @brief  Sequence end notification handler. */
    uint8                u8Interruptible;        /**< @brief  Boolean indicating if the Sequence is interruptible or not. */
} Spi_SeqCfgType;

/**
* @brief   This structure contains Sequence configuration.
*/
typedef struct
{
    const Spi_SeqCfgType   *SequenceCfg;    /**< @brief Point to Sequence configuration. */
} Spi_SeqsCfgType;

/**
* @brief   Internal structure used to manage the sequence state.
*
* @implements Spi_SequenceStateType_struct
*/
typedef struct {
    Spi_SeqResultType        eSeqResult;                 /**< @brief  Seq Result. */
#if (SPI_ASYNC_DRIVER == STD_ON)
    const Spi_SeqCfgType    *pcSeqCfg;                   /**< @brief  Pointer to the configuration. */
    const Spi_JobType       *pcCurJobIdxPointer;         /**< @brief  Position in JobIndexList to the job in transmission of an async sequence. */
    Spi_JobType              tLeftJobs;                  /**< @brief  Number of jobs in a pending async sequence, not yet transmitted. */
#endif
} Spi_SeqStateType;

/**
* @brief   Internal structure used to manage the job state.
*
*/
typedef struct {
    Spi_JobResultType           eJobResult;                      /**< @brief  Job Result. */

#if (SPI_ASYNC_DRIVER == STD_ON)
    Spi_SeqStateType           *pAsyncCurSeqStat;                /**< @brief state info of the async sequence that job belong to */
    Spi_JobType                 tAsyncNextWaitSchedJobIdx;       /**< @brief  the next async job waiting to be scheduled to transmit */
#endif
} Spi_JobStateType;

/**
* @brief the structure containing all parameters needed to completely define a Job.
*
* @implements Spi_JobConfigType_struct
**/
typedef struct {
    Spi_ChannelType                tChnlCntOfJob;                 /**< @brief Number of channels in the job. */
    const Spi_ChannelType         *pcChnlsArray;                  /**< @brief Channel index list. */
    Spi_PFnNotifyType              pfnJobEndNotify;               /**< @brief Job end notification. */
    Spi_PFnNotifyType              pfStartNotification;           /**< @brief Job start notification. */
    sint8                          s8Priority;                    /**< @brief Priority. */
    uint32                         SpiCoreUse;                    /**< @brief CoreID used */
    Spi_JobStateType              *pJobState;                     /**< @brief Implementation specific field referencing the channel internal state. */
    Spi_HWUnitType                 tVirHwUnitIdx;                 /**< @brief CSIBx. */
    uint32                         u32HWoffset;                   /**< @brief HW Unit offset. */
    Spi_ExternalDeviceType         tExternalDev;                  /**< @brief tExternalDev. */
    const Spi_ExDevicesAttrsType  *pcDeviceAttrs;                 /**< @brief Implementation specific field: cached LLD device attributes. */

#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
    boolean                        WorkaroundNeeded;             /**< @brief If this job is CONT = 1 and SCK_PHA = 1 */
#endif

} Spi_JobCfgType;

/**
* @brief   This is the structure containing Job configuration.
*/
typedef struct
{
    const Spi_JobCfgType *JobCfg;              /**< @brief Point to Job configuration. */
} Spi_JobsCfgType;

/**
* @brief   IB/EB Tx & Rx Buffer address
*
*/
typedef struct
{
    Spi_DataBufferType *pSpiTxBuf;        /**< @brief  Tx buffer pointer, const buf for EB, changeable for IB. */
    Spi_DataBufferType *pSpiRxBuf;        /**< @brief  Rx buffer pointer. */
} Spi_ChannelbufferType;

/**
* @brief   Internal structure used to manage the channel state.
*
*/
typedef struct {
    uint8 u8DefaultTransFlag;                             /**< @brief  Default Transmit Enabled. */
    Spi_NumberOfDataType tTransferByteCnt;                /**< @brief  Actual Transfer size for EB. */
} Spi_ChannelStateType;

/**
* @brief   The structure contains the channel configuration parameters.
*
* @implements Spi_ChnlCfgType_struct
*/
typedef struct {
    SPI_IbEbBufferType      eBufferType;                  /**< @brief  Buffer Type IB/EB. */
    uint32                  u32DefaultTransData;          /**< @brief  Default Transmit Value. */
    Spi_NumberOfDataType    tChnlByteCnt;                 /**< @brief  Data length. */
    Spi_ChannelbufferType   *pcChnlTxRxBuffer;            /**< @brief  Buffer Descriptor. */
    uint32                   SpiCoreUse;                  /**< @brief CoreID assigned */
    Spi_ChannelStateType    *pChannelState;               /**< @brief  Implementation specific field referencing the channel internal state. */
} Spi_ChnlCfgType;

/**
* @brief   The structure contains the channel configuration.
*/
typedef struct
{
    const Spi_ChnlCfgType *ChannelCfg;   /**< @brief Point to Channel configuration. */
} Spi_ChannelsCfgType;

/*---------------------------------------------------------------------------
*             SPI Driver Low Level Implementation Specific Type Definitions
-----------------------------------------------------------------------------*/

/**
* @brief   This structure holds the hw configuration parameters.
*
* @implements Spi_HWUnitConfigType_struct
*/
typedef struct
{

    uint8                   u8HwInstIdx;          /**< @brief  SPI hardware module index of chip. */
    uint32                  SpiCoreUse;           /**< @brief  CoreID assigned */
    Spi_MasterSlaveModeType eSpiHwUnitMode;       /**< @brief  Slave Mode or Master mode  */
    uint8                   u8SyncOrAsync;        /**< @brief  Indicates if the HW unit is configured as Sync or Async. */

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_DMA_USED == STD_ON)
    boolean                 bUseDma;            /**< @brief  Boolean flag indicating if DMA will be used or not for this FCSPI unit. */
    uint8                   u8TxDmaChannel;       /**< @brief  Master TX DMA channel - enabled by the FCSPI TX source. */
    uint8                   u8RxDmaChannel;       /**< @brief  RX DMA channel - enabled by the FCSPI RX source. */
    Dma_InstanceType        eDmaInstance;        /**< @brief  Used Dma instance. */
#endif
#endif
} Spi_HwUnitCfgType;

/**
* @brief   This structure holds the PhyUnit configuration.
*/
typedef struct
{
    const Spi_HwUnitCfgType * HwUnitCfg;        /**< @brief Point to PhyUnit configuration. */
} Spi_HwUnitsConfigType;

/**
* @brief   This structure holds the hw scheduling queue.
* @details For asynchronous transmissions, this structure holds the hw scheduling queue .
*          For sync transmissions, only hw Status is managed.
*
*/
typedef struct {
#if (SPI_ASYNC_DRIVER == STD_ON)
    sint8       s8MaxSchedJobPriority;                                     /**< @brief the highest priority of all the job list */
    Spi_JobType aSchedJobsFirstNode[SPI_JOB_PRIORITY_LEVELS_COUNT];        /**< @brief array of job id in queue to be scheduled, header node for each priority level. */
    Spi_JobType aSchedJobsLastNode[SPI_JOB_PRIORITY_LEVELS_COUNT];         /**< @brief array of job id in queue to be scheduled, tail node for each priority level. */
#endif
    Spi_StatusType Status;                                                 /**< @brief FCSPI state. */
} Spi_HwScheduleQueueType;


/**
* @brief   This structure holds the state of each Channel/Job/Sequence/HwUnit.
*
*/
/* PRQA S 1039 ++ #Misra Rule-1.2:Language extensions should not be used
*                [E]Treating array of length one as potentially flexible member
*  Reason: the length of array is decided by user */
typedef struct {
    Spi_SeqStateType           aSeqStats[SPI_SEQUENCE_MAX_COUNT];            /**< @brief  Sequences state array. */
    Spi_JobStateType           aJobStats[SPI_JOB_MAX_COUNT];                 /**< @brief  Jobs state array. */
    Spi_ChannelStateType       aChnlStats[SPI_CHANNEL_MAX_COUNT];            /**< @brief  Channels state array. */
    Spi_HwScheduleQueueType    aHwUnitSchedQueue[SPI_HW_MODULE_MAX_COUNT];   /**< @brief  Hardware scheduling queue. */
} Spi_ChnJobSeqHwStateType;
/* PRQA S 1039 -- */
/*---------------------------------------------------------------------------
*             SPI Driver Configuration Main Structure
-----------------------------------------------------------------------------*/
/**
* @brief   This is the top level structure containing all the
*          needed parameters for the SPI Handler Driver.
*
* @implements Spi_ConfigType_struct
*/
typedef struct {
    uint16                          u16MaxExternalDevice;             /**< @brief  Number of external devices defined in the configuration. */
    Spi_ChannelType                 tSpiMaxValidChnl;                 /**< @brief  Number of channels defined in the configuration. */
    Spi_JobType                     tSpiMaxValidJob;                  /**< @brief  Number of jobs defined in the configuration. */
    Spi_SequenceType                tSpiMaxValidSeq;                  /**< @brief  Number of sequences defined in the configuration. */
    uint32                          SpiCoreUse;                       /**< @brief CoreID used */
    const Spi_ChannelsCfgType      *ChannelConfig;                  /**< @brief  Pointer to Array of channels defined in the configuration. */
    const Spi_JobsCfgType          *JobConfig;                   /**< @brief  Pointer to Array of jobs defined in the configuration. */
    const Spi_SeqsCfgType          *SequenceConfig;                  /**< @brief  Pointer to Array of sequences defined in the configuration. */
    const Spi_ChannelsAttrsType    *ChannelAttrsConfig;               /**< @brief  Channel & FCSPI HW module attributes. */
    const Spi_ExDevicesAttrsType   *ExDeviceConfig;
    const Spi_HwUnitsConfigType    *HWUnitConfig;              /**< @brief  Pointer to Array of LLD FCSPI device instances. */
    /**
     * @brief SPI Driver DEM Error: SPI_E_HARDWARE_ERROR
     *
     */
#if (SPI_DEM_ENABLE == STD_ON)
    const Mcal_DemErrorType Spi_E_Hardware_ErrorCfg;          /**< @brief  SPI hardware error Dem structure. */
    const Mcal_DemErrorType Spi_E_Timeout_ErrorCfg;           /**< @brief  SPI Timeout error Dem structure. */
#endif

} Spi_ConfigType;



/*==============================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==============================================================================*/

#define   SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"
SPI_DATA_SECTION extern const Spi_ConfigType *Spi_apxSpiConfigPtr[SPI_MAX_PARTITIONS];
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"




#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"
/**
* @brief Spi State
*/
SPI_DATA_SECTION extern Spi_ChnJobSeqHwStateType g_SPI_tChnJobSeqHwState;
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"





#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"
 #if (SPI_PRECOMPILE_SUPPORT == STD_ON)
SPI_DATA_SECTION extern const Spi_ConfigType g_SPI_ctInitPrmsPBCfgForPreCompileLinkTime;
#else
SPI_CONF_PB
#endif
#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"





/*==============================================================================
*                                    FUNCTION PROTOTYPES
==============================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"

SPI_TEXT_SECTION void                Spi_Init(const Spi_ConfigType *ConfigPtr);
SPI_TEXT_SECTION Std_ReturnType      Spi_DeInit(void);
SPI_TEXT_SECTION Spi_StatusType      Spi_GetStatus(void);
SPI_TEXT_SECTION Spi_JobResultType   Spi_GetJobResult(Spi_JobType Job);
SPI_TEXT_SECTION Spi_SeqResultType   Spi_GetSequenceResult(Spi_SequenceType Sequence);

#if (SPI_ASYNC_DRIVER == STD_ON)
SPI_TEXT_SECTION Std_ReturnType Spi_AsyncTransmit(Spi_SequenceType Sequence);
SPI_TEXT_SECTION void           Spi_MainFunction_Handling(void);
SPI_TEXT_SECTION void Spi_AfterOneJobTransferDone(const Spi_JobCfgType *pcJobCfg);
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_GET_VERSION_INFO_API_SUPPORT == STD_ON)
SPI_TEXT_SECTION void           Spi_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif /* (SPI_GET_VERSION_INFO_API_SUPPORT == STD_ON) */



#if (SPI_CHANNEL_IB_ALLOWED == STD_ON)
SPI_TEXT_SECTION Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr);
SPI_TEXT_SECTION Std_ReturnType Spi_ReadIB(Spi_ChannelType Channel, Spi_DataBufferType *DataBufferPointer);
#endif /* (SPI_CHANNEL_IB_ALLOWED == STD_ON) */


#if (SPI_CHANNEL_EB_ALLOWED == STD_ON)
SPI_TEXT_SECTION Std_ReturnType Spi_SetupEB(Spi_ChannelType Channel, const Spi_DataBufferType *SrcDataBufferPtr, Spi_DataBufferType *DesDataBufferPtr, Spi_NumberOfDataType Length);
#endif /* (SPI_CHANNEL_EB_ALLOWED == STD_ON) */


#if (SPI_SYNC_DRIVER == STD_ON)
SPI_TEXT_SECTION Std_ReturnType Spi_SyncTransmit(Spi_SequenceType Sequence);
#endif

#if (SPI_HW_STATUS_API == STD_ON)
SPI_TEXT_SECTION Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit); /* AUTOSAR */
#endif

#if (SPI_CANCEL_API == STD_ON)
SPI_TEXT_SECTION void           Spi_Cancel(Spi_SequenceType Sequence);
#endif

#if (SPI_LEVEL_2 == SPI_LEVEL_DELIVERED)
SPI_TEXT_SECTION Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode);
#endif

#if ((SPI_LEVEL_2 == SPI_LEVEL_DELIVERED) && (SPI_HWUNIT_ASYNC_MODE == STD_ON))
SPI_TEXT_SECTION Std_ReturnType SPI_SetHwAsyncMode(Spi_HWUnitType tHwUnit, Spi_AsyncModeType AsyncMode);
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)

#if defined(FCSPI_0_ENABLED) && (FCSPI_0_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_0_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI0_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI0_DMATxIsr(void);
#endif
#if (FCSPI_0_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI0_FifoIsr(void);
#endif
#endif

#if defined(FCSPI_1_ENABLED) && (FCSPI_1_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_1_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI1_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI1_DMATxIsr(void);
#endif
#if (FCSPI_1_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI1_FifoIsr(void);
#endif
#endif

#if defined(FCSPI_2_ENABLED) && (FCSPI_2_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_2_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI2_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI2_DMATxIsr(void);
#endif
#if (FCSPI_2_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI2_FifoIsr(void);
#endif
#endif

#if defined(FCSPI_3_ENABLED) && (FCSPI_3_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_3_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI3_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI3_DMATxIsr(void);
#endif
#if (FCSPI_3_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI3_FifoIsr(void);
#endif
#endif

#if defined(FCSPI_4_ENABLED) && (FCSPI_4_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_4_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI4_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI4_DMATxIsr(void);
#endif
#if (FCSPI_4_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI4_FifoIsr(void);
#endif
#endif

#if defined(FCSPI_5_ENABLED) && (FCSPI_5_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_5_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI5_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI5_DMATxIsr(void);
#endif
#if (FCSPI_5_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI5_FifoIsr(void);
#endif
#endif

#if defined(FCSPI_6_ENABLED) && (FCSPI_6_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_6_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI6_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI6_DMATxIsr(void);
#endif
#if (FCSPI_6_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI6_FifoIsr(void);
#endif
#endif

#if defined(FCSPI_7_ENABLED) && (FCSPI_7_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_7_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI7_DMARxIsr(void);
SPI_TEXT_SECTION void SPI_FCSPI7_DMATxIsr(void);
#endif
#if (FCSPI_7_MODE == SPI_MODE_ASYNC_FIFO)
SPI_TEXT_SECTION void SPI_FCSPI7_FifoIsr(void);
#endif
#endif

#endif /* SPI_ASYNC_DRIVER == STD_ON */

#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* SPI_H */

/** @} */
