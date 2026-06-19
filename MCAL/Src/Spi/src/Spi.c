/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file   Spi.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Spi - driver API and development errors implemention.
 *   @details This file contains the Spi Autosar driver API and development errors implemention.
 *
 *   @addtogroup SPI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SPI
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
*   0.4.0       17/11/2023    QXW0071       N/A          Add workaround when enable CS Continuous
and sample on first edge.
*   0.5.0       01/16/2024    QXW0071       N/A          Optimize Code
*   0.6.0       02/28/2024    QXW0103       N/A          Add support for FC7240
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/* PRQA S 2071,5087 EOF
   REASON: Specify the segment where the data is placed
 */

/* PRQA S 2053 EOF
   This block comment appears to comment out source code.
   REASON: This is a normal usage
*/

/* PRQA S 3469 EOF
   This usage of a function-like macro looks like it could be replaced by an equivalent function
   call. REASON: Macros have higher execution efficiency
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Spi.h"
#include "Spi_FCSpi.h"
#include "SchM_Spi.h"
#include "Spi_version.h"
#if (SPI_DET_ENABLE == STD_ON)
#include "Det.h"
#endif

#if (SPI_DEM_ENABLE == STD_ON)
#include "Dem.h"
#endif

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef SPI_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined.(SPI) "
#elif (SPI_AR_RELEASE_MAJOR_VERSION != SPI_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched.(SPI) "
#endif

#ifndef SPI_AR_RELEASE_MINOR_VERSION
#error "Autosar release minor version is not defined.(SPI) "
#elif (SPI_AR_RELEASE_MINOR_VERSION != SPI_CFG_AR_RELEASE_MINOR_VERSION)
#error "Autosar release minor version is not matched.(SPI) "
#endif

#ifndef SPI_AR_RELEASE_REVISION_VERSION
#error "Autosar release revision version is not defined.(SPI) "
#elif (SPI_AR_RELEASE_REVISION_VERSION != SPI_CFG_AR_RELEASE_REVISION_VERSION)
#error "Autosar release revision version is not matched.(SPI) "
#endif

#ifndef SPI_SW_MAJOR_VERSION
#error "Software major version is not defined.(SPI) "
#elif (SPI_SW_MAJOR_VERSION != SPI_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched.(SPI) "
#endif

#ifndef SPI_SW_MINOR_VERSION
#error "Software minor version is not defined.(SPI) "
#elif (SPI_SW_MINOR_VERSION != SPI_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched.(SPI) "
#endif

#ifndef SPI_SW_PATCH_VERSION
#error "Software patch version is not defined.(SPI) "
#elif (SPI_SW_PATCH_VERSION != SPI_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched.(SPI) "
#endif

/*==============================================================================
*                                       LOCAL MACROS
==============================================================================*/

#define SPI_HW_BUSY_FLAG_U32 (0x1u)
#define SPI_HW_IDLE_FLAG_U32 (0x0u)

/*==============================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==============================================================================*/

/*==============================================================================
*                                      LOCAL CONSTANTS
==============================================================================*/

/*==============================================================================
*                                      LOCAL VARIABLES
==============================================================================*/
/*==============================================================================
*                                      GLOBAL VARIABLES
==============================================================================*/
#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"
/**
 * @brief          Global Configuration Pointer.
 * @details        Data structure containing the set of configuration parameters required for
 *                 initializing the Spi Driver and Spi HW Unit(s).
 *
 */
SPI_DATA_SECTION const Spi_ConfigType *Spi_apxSpiConfigPtr[SPI_MAX_PARTITIONS];
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"

#if (SPI_PRECOMPILE_SUPPORT == STD_ON)
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Spi_MemMap.h"

extern const Spi_ConfigType *const Spi_PBCfgVariantPredefined[SPI_MAX_PARTITIONS];

#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"
#endif /* SPI_PRECOMPILE_SUPPORT == STD_ON */

#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"
SPI_DATA_SECTION Spi_ChnJobSeqHwStateType g_SPI_tChnJobSeqHwState;
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_32
#include "Spi_MemMap.h"
/**
 * @note Array of used HW units per sequence:
 *         The element corresponding to a given sequence will have asserted the bits
 *         corresponding to the used HW units.
 */
#if (SPI_SYNC_DRIVER == STD_ON)
SPI_DATA_SECTION static uint32 s_SPI_aSeqUseHwInstBitMask[SPI_SEQUENCE_MAX_COUNT];
#endif
#define SPI_STOP_SEC_VAR_NO_INIT_32
#include "Spi_MemMap.h"

#define SPI_START_SEC_VAR_INIT_32
#include "Spi_MemMap.h"
/**
 * @brief      Spi Sync Transmit Running Virtual HWUnits Status.
 */

/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
SPI_DATA_SECTION static volatile uint32 Spi_aSyncVirHwBusyFlags[SPI_HW_MODULE_MAX_COUNT] = {
    SPI_HW_IDLE_FLAG_U32
};
/* PRQA S 0686-- */
#define SPI_STOP_SEC_VAR_INIT_32
#include "Spi_MemMap.h"

/*==============================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==============================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"

LOCAL_INLINE void           Spi_InitChannelsJobsSeqsState(uint8 SpiCoreID);
LOCAL_INLINE Std_ReturnType Spi_CheckInit(const Spi_ConfigType *ConfigPtr, uint8 SpiCoreID);

#if (SPI_DET_ENABLE == STD_ON)
LOCAL_INLINE Std_ReturnType Spi_InitCheckDemError(uint8 SpiCoreID, const Spi_ConfigType *ConfigPtr);
LOCAL_INLINE Std_ReturnType Spi_ChannelCheckValidity(const Spi_ChannelType Channel,
                                                     const uint8           FunctionId);

#if (SPI_ASYNC_DRIVER == STD_ON)
LOCAL_INLINE Std_ReturnType Spi_SequenceCheckValidity(const Spi_ChannelType Sequence,
                                                      const uint8           FunctionId);
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
LOCAL_INLINE Std_ReturnType Spi_SyncTransmitCheckDemReport(uint8            SpiCoreID,
                                                           Spi_SequenceType Sequence);
LOCAL_INLINE Std_ReturnType Spi_SynctransmitCheckJobsIsValid(const Spi_SeqCfgType *SequenceConfig,
                                                             uint8                 SpiCoreID);
#endif

#if (SPI_HW_STATUS_API == STD_ON)
LOCAL_INLINE Std_ReturnType Spi_HWUnitCheckValidity(const Spi_HWUnitType HWUnit,
                                                    const uint8          FunctionId);
#endif

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
SPI_TEXT_SECTION static Spi_StatusType Spi_GetAsyncStatus(void);
#endif

#endif

/*==============================================================================
*                                       LOCAL FUNCTIONS
==============================================================================*/

/*==============================================================================
*                                      AUTOSAR APIs
==============================================================================*/
/* PRQA S 1503 EOF #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user */
/**
 * @brief   Service for SPI initialization
 * @details This API initializes driver using the configuration pre-established
 *          ( when VariantPreCompile or VariantLinkTime is selected) or
 *          passed by parameter ConfigPtr (others).
 *
 *          - Service ID:         0x00
 *          - Sync or Async:      Synchronous
 *          - Reentrancy:         Non-Reentrant
 *
 * @param[in]     ConfigPtr      Pointer to configuration set,the data hold in the address
 *                               must be unchangable when use SPI driver.
 *
 * @implements Spi_Init_Activity
 */
SPI_TEXT_SECTION void Spi_Init(const Spi_ConfigType *ConfigPtr)
{
    Std_ReturnType u32SanityPass = (Std_ReturnType)E_OK;
    Spi_HWUnitType tVirHwUnit;
    uint8          SpiCoreID = GET_CPU_ID();

#if (SPI_ASYNC_DRIVER == STD_ON)
    sint8 s8Priority;
#endif

#if (SPI_DET_ENABLE == STD_ON)
    u32SanityPass = Spi_InitCheckDemError(SpiCoreID, ConfigPtr);
    if ((Std_ReturnType)E_OK == u32SanityPass)
    {
#endif /*(SPI_DET_ENABLE == STD_ON)*/

        u32SanityPass = Spi_CheckInit(ConfigPtr, SpiCoreID);

        if ((Std_ReturnType)E_OK == u32SanityPass)
        {
#if (SPI_PRECOMPILE_SUPPORT == STD_OFF)
            Spi_apxSpiConfigPtr[SpiCoreID] = ConfigPtr;
#else  /* (SPI_CONFIG_VARIANT == SPI_VARIANT_PRECOMPILE) */
        Spi_apxSpiConfigPtr[SpiCoreID] = Spi_PBCfgVariantPredefined[SpiCoreID];
#endif /* (SPI_PRECOMPILE_SUPPORT == STD_OFF) */
            /* Initiate Channels, Jobs, Sequences state */
            Spi_InitChannelsJobsSeqsState(SpiCoreID);

            /* initialize all physical HWUnits */
            for (tVirHwUnit = (Spi_HWUnitType)0; tVirHwUnit < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT;
                 tVirHwUnit++)
            {
                if ((NULL_PTR != Spi_apxSpiConfigPtr[SpiCoreID]->HWUnitConfig[tVirHwUnit].HwUnitCfg) &&
                    (SpiCoreID ==
                     Spi_apxSpiConfigPtr[SpiCoreID]->HWUnitConfig[tVirHwUnit].HwUnitCfg->SpiCoreUse))
                {
                    Spi_LL_DeInit(tVirHwUnit, SpiCoreID);
                    Spi_LL_Init(tVirHwUnit, SpiCoreID);

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_1)
                    /* handler uses interrupt mode only if LEVEL 1 is selected */
                    Spi_LL_IrqConfig(tVirHwUnit, SPI_INTERRUPT_MODE);
#elif (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
                    /* handler uses polling mode only if LEVEL 2 is selected */
                    Spi_LL_IrqConfig(tVirHwUnit, SPI_POLLING_MODE);
#endif

                    /* initialize the Job lists => no scheduled job for the unit */
                    for (s8Priority = 0; s8Priority < SPI_JOB_PRIORITY_LEVELS_COUNT; ++s8Priority)
                    {
                        g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tVirHwUnit]
                            .aSchedJobsFirstNode[s8Priority] = SPI_JOB_NULL;
                        g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tVirHwUnit]
                            .aSchedJobsLastNode[s8Priority] = SPI_JOB_NULL;
                    }
                    /* no scheduled job => s8MaxSchedJobPriority is -1 */
                    g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tVirHwUnit].s8MaxSchedJobPriority = -1;
#endif /* SPI_ASYNC_DRIVER == STD_ON */

                    g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tVirHwUnit].Status = SPI_IDLE;
                }
            }
        }
        else
        {
            /*Do nothing. Should not enter here*/
        }
#if (SPI_DET_ENABLE == STD_ON)
    }
#endif /*(SPI_DET_ENABLE == STD_ON)*/
}
/* PRQA S 2877 -- */

#if (SPI_DET_ENABLE == STD_ON)
/**
 * @brief   Check Dem report error in Init function.
 * @details Check Dem report error in Init function.
 *
 * @param[in]      SpiCoreID      ID of core
 * @return Std_ReturnType
 *
 *
 */
LOCAL_INLINE Std_ReturnType Spi_InitCheckDemError(uint8 SpiCoreID, const Spi_ConfigType *ConfigPtr)
{
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;

    if (NULL_PTR != Spi_apxSpiConfigPtr[SpiCoreID])
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_INIT_ID, SPI_E_ALREADY_INITIALIZED);
        CheckStatus = (Std_ReturnType)E_NOT_OK;
    }
#if (SPI_PRECOMPILE_SUPPORT == STD_OFF)
    else if (NULL_PTR == ConfigPtr)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_INIT_ID, SPI_E_PARAM_UNIT);
        CheckStatus = (Std_ReturnType)E_NOT_OK;
    }
#else  /* (SPI_CONFIG_VARIANT == SPI_VARIANT_PRECOMPILE) */
    else if (NULL_PTR != ConfigPtr)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_INIT_ID, SPI_E_PARAM_UNIT);
        CheckStatus = (Std_ReturnType)E_NOT_OK;
    }
#endif /*(SPI_PRECOMPILE_SUPPORT == STD_OFF)*/
    else
    {
        /* Do nothing */
    }

    return CheckStatus;
}
#endif

/**
 * @brief   This function checks parameters for initialization of SPI driver.
 * @details This function checks parameters for initialization of SPI driver.
 *
 * @param[in]     ConfigPtr       Specifies the pointer to the configuration set
 * @param[out]    CheckStatus      Specifies status of checking
 *               - E_OK: The parameters are valid
 *               - E_NOT_OK: The parameters are invalid
 *
 */
LOCAL_INLINE Std_ReturnType Spi_CheckInit(const Spi_ConfigType *ConfigPtr, uint8 SpiCoreID)
{
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;
#if (SPI_PRECOMPILE_SUPPORT == STD_OFF)
    uint32 Channel;
    uint32 Job;
    uint32 Sequence;
#endif

#if (SPI_PRECOMPILE_SUPPORT == STD_OFF)
    /* Configuration sizes must be checked for Post Build & Link Time configurations */
    Channel  = (uint32)(ConfigPtr->tSpiMaxValidChnl);
    Job      = (uint32)(ConfigPtr->tSpiMaxValidJob);
    Sequence = (uint32)(ConfigPtr->tSpiMaxValidSeq);

    if ((Channel >= SPI_CHANNEL_MAX_COUNT) || (Job >= SPI_JOB_MAX_COUNT) ||
        (Sequence >= SPI_SEQUENCE_MAX_COUNT))
    {
        CheckStatus = (Std_ReturnType)E_NOT_OK;
#if (SPI_DET_ENABLE == STD_ON)
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_INIT_ID, SPI_E_CONFIG_OUT_OF_RANGE);
#endif
    }
    if (SpiCoreID != ConfigPtr->SpiCoreUse)
    {
        CheckStatus = (Std_ReturnType)E_NOT_OK;
#if (SPI_DET_ENABLE == STD_ON)
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_INIT_ID, SPI_E_PARAM_CONFIG);
#endif
    }
#else /* (SPI_CONFIG_VARIANT == SPI_VARIANT_PRECOMPILE) */
    (void)ConfigPtr;
    if (NULL_PTR == Spi_PBCfgVariantPredefined[SpiCoreID])
    {
        CheckStatus = (Std_ReturnType)E_NOT_OK;
#if (SPI_DET_ENABLE == STD_ON)
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_INIT_ID, SPI_E_PARAM_POINTER);
#endif
    }
#endif /* (SPI_PRECOMPILE_SUPPORT == STD_OFF) */

    return CheckStatus;
}

/**
 * @brief   This function initiate channels, jobs, sequences state.
 * @details This function initiate channels, jobs, sequences state.
 *
 * @param[in]      SpiCoreID      ID of core
 * @return None
 *
 *
 */
LOCAL_INLINE void Spi_InitChannelsJobsSeqsState(uint8 SpiCoreID)
{
    uint32 Channel;
    uint32 Job;
    uint32 Sequence;
#if (STD_ON == SPI_SYNC_DRIVER)
#if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
    uint32 HWUnit;
#endif
#endif
    const Spi_ChnlCfgType *ChannelConfig;
    const Spi_JobCfgType  *JobConfig;
    const Spi_SeqCfgType  *SequenceConfig;

    for (Channel = 0u; Channel <= (uint32)(Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidChnl);
         Channel++)
    {
        ChannelConfig = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;
        /* Check which channel has assigned for current core */
        if ((NULL_PTR != ChannelConfig) && (SpiCoreID == ChannelConfig->SpiCoreUse))
        {
            /* Check if configured buffers are External (EB) */
            if (EB == ChannelConfig->eBufferType)
            {
                /* Initialize all buffers */
                ChannelConfig->pcChnlTxRxBuffer->pSpiTxBuf = NULL_PTR;
                ChannelConfig->pcChnlTxRxBuffer->pSpiRxBuf = NULL_PTR;

                /* byte cnt is zero for unconfigured external buffers EB */
                g_SPI_tChnJobSeqHwState.aChnlStats[Channel].tTransferByteCnt = (Spi_NumberOfDataType)0;
            }
            else
            {
                /* Setup channel length according to configuration */
                g_SPI_tChnJobSeqHwState.aChnlStats[Channel].tTransferByteCnt =
                    ChannelConfig->tChnlByteCnt;
            }
            g_SPI_tChnJobSeqHwState.aChnlStats[Channel].u8DefaultTransFlag =
                (uint8)SPI_CHANNEL_FLAG_TX_DEFAULT_U8;
        }
    }

    /* initialize job results */
    for (Job = 0u; Job <= (uint32)(Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidJob); Job++)
    {
        JobConfig = Spi_apxSpiConfigPtr[SpiCoreID]->JobConfig[Job].JobCfg;
        if ((NULL_PTR != JobConfig) && (SpiCoreID == JobConfig->SpiCoreUse))
        {
            g_SPI_tChnJobSeqHwState.aJobStats[Job].eJobResult = SPI_JOB_OK;
#if (STD_ON == SPI_ASYNC_DRIVER)
            /* mark the job as unlocked / not linked to a pending async sequence */
            g_SPI_tChnJobSeqHwState.aJobStats[Job].pAsyncCurSeqStat = NULL_PTR;
#endif
        }
    }

    for (Sequence = 0u; Sequence <= (uint32)(Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidSeq);
         Sequence++)
    {
        SequenceConfig = Spi_apxSpiConfigPtr[SpiCoreID]->SequenceConfig[Sequence].SequenceCfg;
        if ((NULL_PTR != SequenceConfig) && (SpiCoreID == SequenceConfig->SpiCoreUse))
        {
#if (STD_ON == SPI_ASYNC_DRIVER)
            SequenceConfig = Spi_apxSpiConfigPtr[SpiCoreID]->SequenceConfig[Sequence].SequenceCfg;
            (g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).pcSeqCfg = SequenceConfig;
#endif

            /* initialize sequence results */
            (g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).eSeqResult = SPI_SEQ_OK;

#if (STD_ON == SPI_SYNC_DRIVER)
#if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
            SequenceConfig = Spi_apxSpiConfigPtr[SpiCoreID]->SequenceConfig[Sequence].SequenceCfg;
            /* initialize the map of used HWUnits per sequence */
            s_SPI_aSeqUseHwInstBitMask[Sequence] = (uint32)0;

            for (Job = 0u; Job < SequenceConfig->tNumJobs; Job++)
            {
                HWUnit = Spi_apxSpiConfigPtr[SpiCoreID]
                             ->JobConfig[SequenceConfig->pcJobsArray[Job]]
                             .JobCfg->u32HWoffset;
                s_SPI_aSeqUseHwInstBitMask[Sequence] |= (uint32)((uint32)1 << HWUnit);
            }
#else  /* (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_OFF) */
            /* SPI135: Spi_SyncTransmit() must fail if an other sync transmission
                    is ongoing.*/
            /* mark all HW units as used by the sync transmission, in order to
                force the mutual exclusion of Spi_SyncTransmit() calls */

            s_SPI_aSeqUseHwInstBitMask[Sequence] = 0xFFFFFFFFU;
#endif /* (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_OFF) */
#endif /* (STD_ON == SPI_SYNC_DRIVER) */
        }
        else
        {
            /* Do nothing */
        }
    }
}

/**
 * @brief   This function de-initializes the SPI driver.
 * @details This function de-initializes the SPI driver using the
 *          pre-established configurations
 *          - Service ID:       0x01
 *          - Sync or Async:       Synchronous
 *          - Reentrancy:       Non-Reentrant
 *
 * @return Std_ReturnType
 * @retval E_OK       de-initialisation command has been accepted
 * @retval E_NOT_OK   de-initialisation command has not been accepted
 *
 * @pre  The driver needs to be initialized before calling Spi_DeInit()
 *       otherwise, the function Spi_DeInit() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 *
 * @implements Spi_DeInit_Activity
 */
SPI_TEXT_SECTION Std_ReturnType Spi_DeInit(void)
{
    Std_ReturnType eRet = (Std_ReturnType)E_OK;
    Spi_HWUnitType tVirHw;
    uint8          SpiCoreID = GET_CPU_ID();

#if (SPI_DET_ENABLE == STD_ON)
    /* If Development Error Detection is enabled, report error if not */
    /* initialized */
    if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID])
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_DEINIT_ID, SPI_E_UNINIT);
        eRet = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        /* Check if Spi Status is Busy */
        if (SPI_BUSY == Spi_GetStatus())
        {
            eRet = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* de-initialize all physical HWUnits */
            for (tVirHw = (Spi_HWUnitType)0; tVirHw < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT;
                 ++tVirHw)
            {
                if ((NULL_PTR != Spi_apxSpiConfigPtr[SpiCoreID]->HWUnitConfig[tVirHw].HwUnitCfg) &&
                    (SpiCoreID ==
                     Spi_apxSpiConfigPtr[SpiCoreID]->HWUnitConfig[tVirHw].HwUnitCfg->SpiCoreUse))
                {
                    Spi_LL_DeInit(tVirHw, SpiCoreID);
                    g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tVirHw].Status = SPI_UNINIT;
                }
                else
                {
                    /* Do nothing */
                }
            }
            /* reset configuration pointer */
            Spi_apxSpiConfigPtr[SpiCoreID] = NULL_PTR;
        }
    }

    return eRet;
}

#if (SPI_CHANNEL_IB_ALLOWED == STD_ON)
/**
 * @brief   write the given data into the buffer of a specific channel
 * @details This function writes the given data into the buffer of a specific channel.
 *          - Service ID:       0x02
 *          - Sync or Async:    Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      Channel             Channel ID
 * @param[in]      DataBufferPtr       Pointer to source data buffer, if NULL, use default data
 *
 * @return Std_ReturnType
 * @retval E_OK       Command has been accepted
 * @retval E_NOT_OK   Command has not been accepted
 *
 * @pre  The driver needs to be initialized before calling Spi_WriteIB()
 *       otherwise, the function Spi_WriteIB() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 * @pre  Pre-compile parameter SPI_CHANNEL_IB_ALLOWED shall be STD_ON.
 *
 * @implements Spi_WriteIB_Activity
 */
SPI_TEXT_SECTION Std_ReturnType Spi_WriteIB(Spi_ChannelType           Channel,
                                            const Spi_DataBufferType *DataBufferPtr)
{
    Std_ReturnType            Status = (Std_ReturnType)E_OK;
    uint16                    u16Index;
    const Spi_ChnlCfgType    *pcChnlCfg;
    Spi_DataBufferType       *pDataBufferDes;
    const Spi_DataBufferType *pcDataBufferSrc = NULL_PTR;

    uint8 SpiCoreID = GET_CPU_ID();

#if (SPI_DET_ENABLE == STD_ON)

    Status = Spi_ChannelCheckValidity(Channel, SPI_WRITEIB_ID);

    if ((Std_ReturnType)E_OK != Status)
    {
        /* Do nothing */
    }
    else
#endif
    {
        pcChnlCfg = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;

        /* exit early if this is the wrong buffer type */
        if (EB == pcChnlCfg->eBufferType)
        {
            Status = (Std_ReturnType)E_NOT_OK;
#if (SPI_DET_ENABLE == STD_ON)
            (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_WRITEIB_ID, SPI_E_PARAM_CHANNEL);
#endif /* SPI_DET_ENABLE == STD_ON */
        }
        else
        {
            SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_00();
            /* if DataBufferPtr is zero, then transmit default value */
            if (NULL_PTR != DataBufferPtr)
            {
                pDataBufferDes = pcChnlCfg->pcChnlTxRxBuffer->pSpiTxBuf;

                pcDataBufferSrc = DataBufferPtr;

                for (u16Index = 0u; u16Index < pcChnlCfg->tChnlByteCnt; u16Index++)
                {
                    *pDataBufferDes = *pcDataBufferSrc;
                    pDataBufferDes++;
                    pcDataBufferSrc++;
                }
                g_SPI_tChnJobSeqHwState.aChnlStats[Channel].u8DefaultTransFlag &=
                    (uint8)(~SPI_CHANNEL_FLAG_TX_DEFAULT_U8);
            }
            else
            {
                g_SPI_tChnJobSeqHwState.aChnlStats[Channel].u8DefaultTransFlag |=
                    (uint8)SPI_CHANNEL_FLAG_TX_DEFAULT_U8;
            }
            SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_00();
        }
    }

    return Status;
}
#endif /* SPI_CHANNEL_IB_ALLOWED == STD_ON */

#if (SPI_DET_ENABLE == STD_ON)
/**
 * @brief   This function check valid for input Channel.
 * @details This function check valid for input Channel.
 *
 * @param[in]      Channel              ID channel
 * @param[in]      FunctionId           Function Id to report error
 * @return Std_ReturnType
 * @retval E_OK      No error was reported
 * @retval E_NOT_OK  Error was reported
 *
 */
LOCAL_INLINE Std_ReturnType Spi_ChannelCheckValidity(const Spi_ChannelType Channel,
                                                     const uint8           FunctionId)
{
    Std_ReturnType Status    = (Std_ReturnType)E_OK;
    uint8          SpiCoreID = GET_CPU_ID();

    if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID])
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* Channel ID - Valid channels range is from 0 to SpiMaxChannel*/
    else if (Channel > Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidChnl)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_CHANNEL);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* Check core has assigned for this channel */
    else if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_CONFIG);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (SpiCoreID !=
             Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg->SpiCoreUse)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_CONFIG);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /* Do nothing */
    }

    return Status;
}
#endif /* (SPI_DET_ENABLE == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_DET_ENABLE == STD_ON)
/**
 * @brief   This function check valid for input Sequence.
 * @details This function check valid for input Sequence.
 *
 * @param[in]      Sequence              ID Sequence
 * @param[in]      FunctionId           Function Id to report error
 * @return Std_ReturnType
 * @retval E_OK      No error was reported
 * @retval E_NOT_OK  Error was reported
 *
 */
LOCAL_INLINE Std_ReturnType Spi_SequenceCheckValidity(const Spi_ChannelType Sequence,
                                                      const uint8           FunctionId)
{
    Std_ReturnType Status    = (Std_ReturnType)E_OK;
    uint8          SpiCoreID = GET_CPU_ID();

    if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID])
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (Sequence > (Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidSeq))
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_SEQ);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID]->SequenceConfig[Sequence].SequenceCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_CONFIG);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (SpiCoreID !=
             Spi_apxSpiConfigPtr[SpiCoreID]->SequenceConfig[Sequence].SequenceCfg->SpiCoreUse)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_CONFIG);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /* Do nothing */
    }

    return Status;
}
#endif /* (SPI_DET_ENABLE == STD_ON) */
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function triggers the asynchronous transmission for the given sequence.
 * @details This function triggers the asynchronous transmission for the given sequence.
 *          - Service ID:       0x03
 *          - Sync or Async:       Asynchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      Sequence            Sequence ID
 *
 * @return Std_ReturnType
 * @retval E_OK       Transmission command has been accepted
 * @retval E_NOT_OK   Transmission command has not been accepted
 *
 * @pre  The driver needs to be initialized before calling Spi_AsyncTransmit()
 *       otherwise, the function Spi_AsyncTransmit() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 * @pre  Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL_1 or SPI_LEVEL_2.
 *
 * @implements Spi_AsyncTransmit_Activity
 */
SPI_TEXT_SECTION Std_ReturnType Spi_AsyncTransmit(Spi_SequenceType Sequence)
{
    Std_ReturnType        Status = (Std_ReturnType)E_OK;
    Spi_JobType           tJobIdx;
    const Spi_SeqCfgType *pcSeqCfg;
    const Spi_JobCfgType *pcJobCfg;

    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];
    Spi_SeqStateType     *pCurrentSeqState;
    const Spi_JobType    *pFirstJob;

#if (SPI_DET_ENABLE == STD_ON)
#if (SPI_CHANNEL_EB_ALLOWED == STD_ON)
    Spi_ChannelType tChnlIdx;
#endif /* SPI_CHANNEL_EB_ALLOWED == STD_ON */

    Status = Spi_SequenceCheckValidity(Sequence, SPI_ASYNCTRANSMIT_ID);
    if (E_OK == Status)
    {
        pcSeqCfg = pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg;
        /* check for empty sequence */

        if (0u == pcSeqCfg->tNumJobs)
        {
            (void)Det_ReportError((uint16)SPI_MODULE_ID,
                                  (uint8)0,
                                  SPI_ASYNCTRANSMIT_ID,
                                  SPI_E_SEQ_EMPTY);
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Empty */
        }

        for (tJobIdx = 0u; tJobIdx < pcSeqCfg->tNumJobs; ++tJobIdx)
        {
            pcJobCfg = pCurrentCoreCfg->JobConfig[pcSeqCfg->pcJobsArray[tJobIdx]].JobCfg;

            /* check for empty jobs */
            if (0u == pcJobCfg->tChnlCntOfJob)
            {
                (void)Det_ReportError((uint16)SPI_MODULE_ID,
                                      (uint8)0,
                                      SPI_ASYNCTRANSMIT_ID,
                                      SPI_E_JOB_EMPTY);
                Status = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                /* Empty */
            }

            if (SPI_HW_UNIT_ASYNC_U8 !=
                pCurrentCoreCfg->HWUnitConfig[pcJobCfg->tVirHwUnitIdx].HwUnitCfg->u8SyncOrAsync)
            {
                /* HwUnit is not prearranged for dedicated Asynchronous
                   transmission */
                (void)Det_ReportError((uint16)SPI_MODULE_ID,
                                      (uint8)0,
                                      SPI_ASYNCTRANSMIT_ID,
                                      SPI_E_PARAM_UNIT);
                Status = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                /* Empty */
            }
#if (SPI_CHANNEL_EB_ALLOWED == STD_ON)
            if ((Std_ReturnType)E_OK == Status)
            {
                /* Check if all EBs have been setup */
                for (tChnlIdx = (Spi_ChannelType)0; tChnlIdx < pcJobCfg->tChnlCntOfJob; ++tChnlIdx)
                {
                    if (EB == pCurrentCoreCfg->ChannelConfig[pcJobCfg->pcChnlsArray[tChnlIdx]]
                                  .ChannelCfg->eBufferType)
                    {
                        /* Length is 0 for unconfigured ext. buffers */
                        if (0U ==
                            g_SPI_tChnJobSeqHwState.aChnlStats[pcJobCfg->pcChnlsArray[tChnlIdx]]
                                .tTransferByteCnt)
                        {
                            /* An used EB not initialized  */
                            (void)Det_ReportError((uint16)SPI_MODULE_ID,
                                                  (uint8)0,
                                                  SPI_ASYNCTRANSMIT_ID,
                                                  SPI_E_PARAM_EB_UNIT);
                            Status = (Std_ReturnType)E_NOT_OK;
                            break;
                        }
                        else
                        {
                            /* Empty */
                        }
                    }
                    else
                    {
                        /* Empty */
                    }
                }
            }
            else
            {
                /* Empty */
            }
#endif /* SPI_CHANNEL_EB_ALLOWED == STD_ON */

            if ((Std_ReturnType)E_OK != Status)
            {
                /* break */
                break;
            }
            else
            {
                /* Empty */
            }
        }
    }

    if ((Std_ReturnType)E_OK != Status)
    {
        /* Empty */
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        pcSeqCfg = pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg;

        SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_01();

        Status = Spi_LinkJobsToSequence(Sequence, pcSeqCfg);

        SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_01();
        if ((Std_ReturnType)E_OK == Status)
        {
            pCurrentSeqState = &g_SPI_tChnJobSeqHwState.aSeqStats[Sequence];
            pFirstJob        = &pcSeqCfg->pcJobsArray[0];

            pCurrentSeqState->eSeqResult = SPI_SEQ_PENDING;

            /* init job related information */
            pCurrentSeqState->tLeftJobs = pcSeqCfg->tNumJobs - 1u;

            pCurrentSeqState->pcCurJobIdxPointer = pFirstJob;
            for (tJobIdx = 0u; tJobIdx < pcSeqCfg->tNumJobs; tJobIdx++)
            {
                g_SPI_tChnJobSeqHwState.aJobStats[pcSeqCfg->pcJobsArray[tJobIdx]].eJobResult =
                    SPI_JOB_QUEUED;
            }
            /* Schedule transmission of the first job */
            pcJobCfg = pCurrentCoreCfg->JobConfig[*pFirstJob].JobCfg;

            SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_02();
            Spi_ScheduleJobsOnHwUnit(
                &g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[pcJobCfg->tVirHwUnitIdx],
                *pFirstJob,
                pcJobCfg);
            SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_02();
        }
        else
        {
#if (SPI_DET_ENABLE == STD_ON)
            (void)Det_ReportRuntimeError((uint16)SPI_MODULE_ID,
                                         (uint8)0U,
                                         SPI_ASYNCTRANSMIT_ID,
                                         SPI_E_SEQ_PENDING);
#endif /* SPI_DET_ENABLE == STD_ON */
        }
    }

    return Status;
}
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function is called after a Job has been executed.
 * @details The function calls Job and Sequence end notifications and schedules
 *          the next job of the sequence or on the liberated HW Unit.
 *
 * @param[in]    pcJobCfg   The just transmited job pointer.
 *
 * @pre  Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL_1 or SPI_LEVEL_2.
 *
 * @implements Spi_JobTransferFinished_Activity
 */
SPI_TEXT_SECTION void Spi_AfterOneJobTransferDone(const Spi_JobCfgType *pcJobCfg)
{
    Spi_HWUnitType           tVirHwUnit   = pcJobCfg->tVirHwUnitIdx;
    Spi_HwScheduleQueueType *pHWUnitQueue = &g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tVirHwUnit];
    Spi_JobStateType        *pJobState    = pcJobCfg->pJobState;
    Spi_SeqStateType        *pSeqStat;
    const Spi_SeqCfgType    *pcSeqCfg;
    const Spi_JobType       *pcJob;
    Spi_JobType              Job;
    const Spi_JobCfgType    *pNextJob;

    uint8 SpiCoreID = GET_CPU_ID();

    SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_03();
    if (SPI_JOB_OK != pJobState->eJobResult)
    {
        /* set job result OK */
        pJobState->eJobResult = SPI_JOB_OK;

        SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_03();

        pSeqStat = pJobState->pAsyncCurSeqStat;
        pcSeqCfg = pSeqStat->pcSeqCfg;
        /* unlink the job from its sequence */
        pJobState->pAsyncCurSeqStat = NULL_PTR;

        /* Perform job EndNotification (if there is one) */
        if (NULL_PTR != pcJobCfg->pfnJobEndNotify)
        {
            pcJobCfg->pfnJobEndNotify();
        }
        else
        {
            /* Empty */
        }

#if (SPI_CANCEL_API == STD_ON)
        /* Check if current sequence has been cancelled */
        if (SPI_SEQ_CANCELLED == pSeqStat->eSeqResult)
        {
            /* unlock jobs */
            SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_04();
            Spi_UnlinkRemainJobsInSeq(pSeqStat->tLeftJobs, pcSeqCfg);
            SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_04();

            if (NULL_PTR != pcSeqCfg->pfnSeqEndNotify)
            {
                pcSeqCfg->pfnSeqEndNotify();
            }
            else
            {
                /* Empty */
            }
            SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_05();
            Spi_StartFirstJobScheduleNext(pHWUnitQueue);
            SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_05();
        }
        else
#endif /* SPI_CANCEL_API == STD_ON */

        {
            /* Check if this job is the last one */
            if (0u == pSeqStat->tLeftJobs)
            {
                /* Reset sequence state */
                pSeqStat->eSeqResult = SPI_SEQ_OK;

                /* SeqEndNotification */
                if (NULL_PTR != pcSeqCfg->pfnSeqEndNotify)
                {
                    pcSeqCfg->pfnSeqEndNotify();
                }
                else
                {
                    /* Empty */
                }
                SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_06();
                Spi_StartFirstJobScheduleNext(pHWUnitQueue);
                SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_06();
            }
            else
            {
                /* advance to the next job */

                pSeqStat->pcCurJobIdxPointer++;
                pcJob = pSeqStat->pcCurJobIdxPointer;
                Job   = *pcJob;
                pSeqStat->tLeftJobs--;
                pNextJob = Spi_apxSpiConfigPtr[SpiCoreID]->JobConfig[Job].JobCfg;
                if (tVirHwUnit != pNextJob->tVirHwUnitIdx)
                {
                    /* schedule the next job on the new FCSPI unit */
                    SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_07();
                    Spi_ScheduleJobsOnHwUnit(
                        &g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[pNextJob->tVirHwUnitIdx],
                        Job,
                        pNextJob);
                    SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_07();
                    /* transmit the next scheduled job on the current FCSPI unit */
                    SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_08();
                    Spi_StartFirstJobScheduleNext(pHWUnitQueue);
                    SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_08();
                }
                else
                {
                    /* the next job uses the same FCSPI unit */

#if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
                    if (((uint8)FALSE) != pcSeqCfg->u8Interruptible)
                    {
                        /* if the sequence is interruptible,
                        then schedule the next job */
                        /* FCSPI is marked as BUSY => the new job is scheduled only */
                        SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_09();
                        Spi_ScheduleJobsOnHwUnit(pHWUnitQueue, Job, pNextJob);
                        SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_09();

                        /* run the first eligible job */
                        SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_10();
                        Spi_StartFirstJobScheduleNext(pHWUnitQueue);
                        SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_10();
                    }
                    else
#endif /* SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON */

                    {
                        /* non-interruptible sequence =>
                        start transmission without scheduling */
                        /* mark the job as pending */
                        g_SPI_tChnJobSeqHwState.aJobStats[Job].eJobResult = SPI_JOB_PENDING;
                        Spi_LL_JobTransfer(pNextJob);
                    }
                }
            }
        }
    }
    else
    {
        SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_03();
    }
}
#endif /* SPI_ASYNC_DRIVER == STD_ON */

#if (SPI_CHANNEL_IB_ALLOWED == STD_ON)
/**
 * @brief   This function reads the data from the buffer of a channel and puts at the memory location.
 * @details This function reads the data from the buffer of a specific channel
 *          and puts at the specified memory location.
 *          - Service ID:       0x04
 *          - Sync or Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 *
 * @param[in]      Channel             Channel ID
 * @param[in,out]  DataBufferPointer       Pointer to the memory location that will
 *                                     be written with the data in the internal
 *                                     buffer
 *
 * @return Std_ReturnType
 * @retval E_OK      read command has been accepted
 * @retval E_NOT_OK  read command has not been accepted
 *
 * @pre  The driver needs to be initialized before calling Spi_ReadIB()
 *       otherwise, the function Spi_ReadIB() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 * @pre  Pre-compile parameter SPI_CHANNEL_IB_ALLOWED shall be STD_ON.
 *
 * @implements Spi_ReadIB_Activity
 */

SPI_TEXT_SECTION Std_ReturnType Spi_ReadIB(Spi_ChannelType     Channel,
                                           Spi_DataBufferType *DataBufferPointer)
{
    Std_ReturnType         Status = (Std_ReturnType)E_OK;
    Spi_NumberOfDataType   Index;
    const Spi_ChnlCfgType *pcChnlCfg;
    /* PRQA S 3678 ++ #Misra Rule 8.13: A pointer should point to a const-qualified type whenever
     * possible Reason: The object referenced by pDataBufferSrc is not const */
    Spi_DataBufferType *pDataBufferSrc;
    /* PRQA S 3678 -- */
    Spi_DataBufferType *pDataBufferDes;
    uint8               SpiCoreID = GET_CPU_ID();

#if (SPI_DET_ENABLE == STD_ON)
    /* not init */
    if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID])
    {
        Status = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_READIB_ID, SPI_E_UNINIT);
    }
    else if (Channel > Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidChnl) /* channel index error */
    {
        Status = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_READIB_ID, SPI_E_PARAM_CHANNEL);
    }
    else if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg)
    {
        Status = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_READIB_ID, SPI_E_PARAM_CONFIG);
    }
    else if (EB == Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg->eBufferType)
    {
        Status = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_READIB_ID, SPI_E_PARAM_CHANNEL);
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        pcChnlCfg = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;

        if (EB == pcChnlCfg->eBufferType)
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else if (NULL_PTR == DataBufferPointer)
        {
            Status = (Std_ReturnType)E_NOT_OK;
#if (SPI_DET_ENABLE == STD_ON)
            (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_READIB_ID, SPI_E_PARAM_CHANNEL);
#endif /* SPI_DET_ENABLE == STD_ON */
        }
        else
        {
            /* Copy Rx buffer to IB buffer */
            pDataBufferSrc = pcChnlCfg->pcChnlTxRxBuffer->pSpiRxBuf;
            pDataBufferDes = DataBufferPointer;
            for (Index = 0u; Index < pcChnlCfg->tChnlByteCnt; Index++)
            {
                *pDataBufferDes = *pDataBufferSrc;
                pDataBufferDes++;
                pDataBufferSrc++;
            }
        }
    }

    return Status;
}
#endif /* SPI_CHANNEL_IB_ALLOWED == STD_ON */

#if (SPI_CHANNEL_EB_ALLOWED == STD_ON)
/**
 * @brief   This function setup an external buffer to be used by a specific channel.
 * @details This function setup an external buffer to be used by a specific channel.
 *          - Service ID:       0x05
 *          - Sync or Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      Channel             Channel ID
 * @param[in]      SrcDataBufferPtr    Pointer to the memory location that will hold
 *                                     the transmitted data
 * @param[in]      Length              Length of the data in the external buffer
 * @param[out]     DesDataBufferPtr    Pointer to the memory location that will hold
 *                                     the received data
 *
 * @return Std_ReturnType
 * @retval E_OK      Setup command has been accepted
 * @retval E_NOT_OK  Setup command has not been accepted
 *
 * @pre  The driver needs to be initialized before calling Spi_SetupEB()
 *       otherwise, the function Spi_SetupEB() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 * @pre  Pre-compile parameter SPI_CHANNEL_EB_ALLOWED shall be STD_ON.
 *
 * @implements Spi_SetupEB_Activity
 */
SPI_TEXT_SECTION Std_ReturnType Spi_SetupEB(Spi_ChannelType           Channel,
                                            const Spi_DataBufferType *SrcDataBufferPtr,
                                            Spi_DataBufferType       *DesDataBufferPtr,
                                            Spi_NumberOfDataType      Length)
{
    Std_ReturnType         tStatus         = (Std_ReturnType)E_OK;
    uint8                  SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType  *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];
    Spi_ChannelbufferType *pChnlTxRxBuffer;
    Spi_ChannelStateType  *pCurrnetChannelState;

#if (SPI_DET_ENABLE == STD_ON)
    if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID])
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SETUPEB_ID, SPI_E_UNINIT);
        tStatus = (Std_ReturnType)E_NOT_OK;
    }
    else if (Channel > Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidChnl)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SETUPEB_ID, SPI_E_PARAM_CHANNEL);
        tStatus = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SETUPEB_ID, SPI_E_PARAM_CONFIG);
        tStatus = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0u == Length) ||
             (Length >
              Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg->tChnlByteCnt))
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SETUPEB_ID, SPI_E_PARAM_LENGTH);
        tStatus = (Std_ReturnType)E_NOT_OK;
    }
    else if (IB == Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg->eBufferType)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SETUPEB_ID, SPI_E_PARAM_CHANNEL);
        tStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */
    {
        pChnlTxRxBuffer = pCurrentCoreCfg->ChannelConfig[Channel].ChannelCfg->pcChnlTxRxBuffer;

        /* PRQA S 311 ++ #Misra-C:2012 Rule-11.8 A cast shall not remove any const or volatile
         * qualification from the type pointed to by a pointer Reason: A point const should be
         * performed here unavoidably.*/
        pChnlTxRxBuffer->pSpiTxBuf = (Spi_DataBufferType *)SrcDataBufferPtr;
        /* PRQA S 0311 -- */
        pChnlTxRxBuffer->pSpiRxBuf = DesDataBufferPtr;

        pCurrnetChannelState = &g_SPI_tChnJobSeqHwState.aChnlStats[Channel];

        pCurrnetChannelState->tTransferByteCnt = Length;

        /* if source data pointer is zero, transmit default value */
        if (NULL_PTR != SrcDataBufferPtr)
        {
            pCurrnetChannelState->u8DefaultTransFlag &= (~SPI_CHANNEL_FLAG_TX_DEFAULT_U8);
        }
        else
        {
            pCurrnetChannelState->u8DefaultTransFlag |= SPI_CHANNEL_FLAG_TX_DEFAULT_U8;
        }

        /* if destination data pointer is zero, discard receiving data */
        if (NULL_PTR != DesDataBufferPtr)
        {
            pCurrnetChannelState->u8DefaultTransFlag &= (~SPI_CHANNEL_FLAG_RX_DISCARD_U8);
        }
        else
        {
            pCurrnetChannelState->u8DefaultTransFlag |= SPI_CHANNEL_FLAG_RX_DISCARD_U8;
        }
    }

    return tStatus;
}
#endif /* SPI_CHANNEL_EB_ALLOWED == STD_ON */

/**
 * @brief   This function returns the status of the SPI driver.
 * @details This function returns the status of the SPI driver.
 *          - Service ID:       0x06
 *          - Sync or Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return Spi_StatusType
 * @retval SPI_UNINIT  The driver is un-initialized
 * @retval SPI_IDLE    The driver has no pending transfers
 * @retval SPI_BUSY    The driver is busy
 *
 * @pre  The driver needs to be initialized before calling Spi_GetStatus()
 *       otherwise, the function Spi_GetStatus() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 *
 * @implements Spi_GetStatus_Activity
 */
/* PRQA S  1505 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit Reason: The function does not have
 * external linkage */
SPI_TEXT_SECTION Spi_StatusType Spi_GetStatus(void)
{
    Spi_StatusType        eRet = SPI_IDLE;
    Spi_HWUnitType        tHwUnit;
    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

    if (NULL_PTR == pCurrentCoreCfg)
    {
#if (SPI_DET_ENABLE == STD_ON)
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_GETSTATUS_ID, SPI_E_UNINIT);
#endif /* SPI_DET_ENABLE == STD_ON */
        eRet = SPI_UNINIT;
    }
    else
    {
        /* PRQA S 2877 ++ #Misra Dir-4.1:Run-time failures shall be minimized
         * Reason: SPI_HW_MODULE_MAX_COUNT is decided by user */
        /*if any hw module is busy, the driver should be busy */
        for (tHwUnit = 0u; tHwUnit < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT; ++tHwUnit)
        {
            if ((NULL_PTR != pCurrentCoreCfg->HWUnitConfig[tHwUnit].HwUnitCfg) &&
                (SpiCoreID == pCurrentCoreCfg->HWUnitConfig[tHwUnit].HwUnitCfg->SpiCoreUse))
            {
                if (SPI_HW_BUSY_FLAG_U32 == Spi_aSyncVirHwBusyFlags[tHwUnit])
                {
                    eRet = SPI_BUSY;
                    break;
                }
            }
        }
        /* check for busy hw in async transmissions*/
        if (SPI_BUSY != eRet)
        {
            /* Note: Checking for IsSync attribute for hw is not really needed
                 It is preferable to skip this check in order to have a more compact code
            */
            for (tHwUnit = 0u; tHwUnit < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT; ++tHwUnit)
            {
                if ((NULL_PTR != pCurrentCoreCfg->HWUnitConfig[tHwUnit].HwUnitCfg) &&
                    (SpiCoreID == pCurrentCoreCfg->HWUnitConfig[tHwUnit].HwUnitCfg->SpiCoreUse))
                {
                    if (SPI_BUSY == g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tHwUnit].Status)
                    {
                        eRet = SPI_BUSY;
                        break;
                    }
                }
            }
        }
    }
    /* PRQA S 2877 -- */

    return eRet;
}
/* PRQA S 1505 -- */

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/**
 * @brief   This function returns the status of the SPI driver related to async HW Units.
 * @details Return SPI_BUSY if at least one async HW unit is busy.
 *
 * @return  Spi_StatusType
 * @retval  SPI_UNINIT       The Driver is uninitialized
 * @retval  SPI_IDLE         The Driver has no on-going transfer
 * @retval  SPI_BUSY         The Driver is busy
 *
 * @pre     Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL_2.
 */
SPI_TEXT_SECTION static Spi_StatusType Spi_GetAsyncStatus(void)
{

    Spi_StatusType           eRet = SPI_IDLE;
    Spi_HWUnitType           tHWUnit;
    uint8                    SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType    *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];
    const Spi_HwUnitCfgType *pCurrentCoreCfgHWUnitConfig;

    if (NULL_PTR == pCurrentCoreCfg)
    {
        eRet = SPI_UNINIT;
    }
    else
    {
        /* PRQA S 2877 ++ #Misra Dir-4.1:Run-time failures shall be minimized
         * Reason: SPI_HW_MODULE_MAX_COUNT is decided by user */
        for (tHWUnit = (Spi_HWUnitType)0; tHWUnit < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT; ++tHWUnit)
        {
            pCurrentCoreCfgHWUnitConfig = pCurrentCoreCfg->HWUnitConfig[tHWUnit].HwUnitCfg;

            if ((NULL_PTR != pCurrentCoreCfgHWUnitConfig) &&
                (SpiCoreID == pCurrentCoreCfgHWUnitConfig->SpiCoreUse))
            {
                if ((SPI_BUSY == g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tHWUnit].Status) &&
                    (SPI_HW_UNIT_ASYNC_U8 == pCurrentCoreCfgHWUnitConfig->u8SyncOrAsync))
                {
                    eRet = SPI_BUSY;
                    break;
                }
                else
                {
                    /* Empty */
                }
            }
        }
        /* PRQA S 2877 -- */
    }
    return eRet;
}
#endif /* SPI_LEVEL_DELIVERED == SPI_LEVEL_2 */

/**
 * @brief   This function is used to request the status of a specific job.
 * @details This function is used to request the status of a specific job.
 *          - Service ID:       0x07
 *          - Sync or Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      Job                 Job ID
 *
 * @return Spi_JobResultType
 * @retval SPI_JOB_OK        The job ended successfully
 * @retval SPI_JOB_PENDING   The job is pending
 * @retval SPI_JOB_FAILED    The job has failed
 *
 * @pre  The driver needs to be initialized before calling Spi_GetJobResult()
 *       otherwise, the function Spi_GetJobResult() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 *
 * @implements Spi_GetJobResult_Activity
 */

SPI_TEXT_SECTION Spi_JobResultType Spi_GetJobResult(Spi_JobType Job)
{
    Spi_JobResultType     JobResult;
    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

#if (SPI_DET_ENABLE == STD_ON)
    /* not initialized */
    if (NULL_PTR == pCurrentCoreCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_GETJOBRESULT_ID, SPI_E_UNINIT);
        JobResult = SPI_JOB_FAILED;
    }
    /* Job Valid Range - from 0 to tSpiMaxValidJob*/
    else if (Job > pCurrentCoreCfg->tSpiMaxValidJob)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_GETJOBRESULT_ID, SPI_E_PARAM_JOB);
        JobResult = SPI_JOB_FAILED;
    }
    else if (NULL_PTR == pCurrentCoreCfg->JobConfig[Job].JobCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_GETJOBRESULT_ID, SPI_E_PARAM_CONFIG);
        JobResult = SPI_JOB_FAILED;
    }
    else if (SpiCoreID != pCurrentCoreCfg->JobConfig[Job].JobCfg->SpiCoreUse)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_GETJOBRESULT_ID, SPI_E_PARAM_CONFIG);
        JobResult = SPI_JOB_FAILED;
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        JobResult = g_SPI_tChnJobSeqHwState.aJobStats[Job].eJobResult;
    }

    return JobResult;
}

/**
 * @brief   This service returns the last transmission result of the specified Sequence.
 * @details This service returns the last transmission result of the specified Sequence.
 *          - Service ID:       0x08
 *          - Sync or Async:    Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      Sequence     Sequence ID. An invalid sequence ID will return an undefined result.
 *
 * @return Spi_SeqResultType
 * @retval SPI_SEQ_OK       The sequence ended successfully
 * @retval SPI_SEQ_PENDING  The sequence is pending
 * @retval SPI_SEQ_FAILED   The sequence has failed
 *
 * @pre  The driver needs to be initialized before calling Spi_GetSequenceResult()
 *       otherwise, the function Spi_GetSequenceResult() shall raise the development
 *       error if SPI_DET_ENABLE is STD_ON.
 *
 * @implements Spi_GetSequenceResult_Activity
 */
SPI_TEXT_SECTION Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence)
{
    Spi_SeqResultType     SequenceResult;
    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

#if (SPI_DET_ENABLE == STD_ON)
    if (NULL_PTR == pCurrentCoreCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_GETSEQUENCERESULT_ID, SPI_E_UNINIT);
        SequenceResult = SPI_SEQ_FAILED;
    }
    else if (Sequence > pCurrentCoreCfg->tSpiMaxValidSeq)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID,
                              (uint8)0,
                              SPI_GETSEQUENCERESULT_ID,
                              SPI_E_PARAM_SEQ);
        SequenceResult = SPI_SEQ_FAILED;
    }
    else if (NULL_PTR == pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID,
                              (uint8)0,
                              SPI_GETSEQUENCERESULT_ID,
                              SPI_E_PARAM_CONFIG);
        SequenceResult = SPI_SEQ_FAILED;
    }
    else if (SpiCoreID != pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg->SpiCoreUse)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID,
                              (uint8)0,
                              SPI_GETSEQUENCERESULT_ID,
                              SPI_E_PARAM_CONFIG);
        SequenceResult = SPI_SEQ_FAILED;
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        SequenceResult = g_SPI_tChnJobSeqHwState.aSeqStats[Sequence].eSeqResult;
    }

    return SequenceResult;
}

#if (SPI_GET_VERSION_INFO_API_SUPPORT == STD_ON)

/**
 * @brief   return the version information of this SPI driver module.
 * @details This function returns the version information of this module.
 *          - Service ID:       0x09
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in,out]    versioninfo      Pointer to where to store the version information of this module.
 *
 * @pre  Pre-compile parameter SPI_GET_VERSION_INFO_API_SUPPORT shall be STD_ON.
 *
 * @implements Spi_GetVersionInfo_Activity
 */

SPI_TEXT_SECTION void Spi_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (SPI_DET_ENABLE == STD_ON)
    if (NULL_PTR == versioninfo)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID,
                              (uint8)0,
                              SPI_GETVERSIONINFO_ID,
                              SPI_E_PARAM_POINTER);
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        versioninfo->sw_major_version = (uint8)SPI_SW_MAJOR_VERSION;
        versioninfo->sw_minor_version = (uint8)SPI_SW_MINOR_VERSION;
        versioninfo->sw_patch_version = (uint8)SPI_SW_PATCH_VERSION;

        versioninfo->vendorID = (uint16)SPI_VENDOR_ID;
        versioninfo->moduleID = (uint16)SPI_MODULE_ID;
    }
}
#endif /* SPI_GET_VERSION_INFO_API_SUPPORT == STD_ON */

#if (SPI_SYNC_DRIVER == STD_ON)
/**
 * @brief   Service to transmit data of sequence on the SPI bus synchronously.
 * @details Service to transmit data of sequence on the SPI bus synchronously.
 *          - Service ID:       0x0a
 *          - Sync or Async:    Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      Sequence            Sequence ID
 *
 * @return Std_ReturnType
 * @retval E_OK      Transmission command has been accepted
 * @retval E_NOT_OK  Transmission command has not been accepted
 *
 * @pre  The driver needs to be initialized before calling Spi_SyncTransmit().
 * @pre  Pre-compile parameter SPI_SYNC_DRIVER shall be STD_ON
 *
 */
SPI_TEXT_SECTION Std_ReturnType Spi_SyncTransmit(Spi_SequenceType Sequence)
{
    Std_ReturnType        Status = (Std_ReturnType)E_OK;
    Spi_HWUnitType        tVirHw;
    Spi_JobType           tJobIdx;
    const Spi_SeqCfgType *pcSeqCfg;

    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

#if (SPI_DET_ENABLE == STD_ON)

    Status = Spi_SyncTransmitCheckDemReport(SpiCoreID, Sequence);
    if ((Std_ReturnType)E_NOT_OK != Status)
    {
        pcSeqCfg = pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg;
        /* Check the validation of Job */
        Status = Spi_SynctransmitCheckJobsIsValid(pcSeqCfg, SpiCoreID);
    }
    else
    {
        /* Empty */
    }

    if ((Std_ReturnType)E_NOT_OK == Status)
    {
        /* Empty */
    }
    else

#endif /* SPI_DET_ENABLE == STD_ON */

    {
        pcSeqCfg = pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg;

        SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_11();
        /* PRQA S 2877 ++ #Misra Dir-4.1:Run-time failures shall be minimized
         * Reason: SPI_HW_MODULE_MAX_COUNT is decided by user */
        /* Make sure that SPI HW instances used in this sequence is available (not being occupied by
         * other sequence already) */
        for (tVirHw = 0u; tVirHw < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT; ++tVirHw)
        {
            if ((NULL_PTR != pCurrentCoreCfg->HWUnitConfig[tVirHw].HwUnitCfg) &&
                (0u != ((Spi_aSyncVirHwBusyFlags[tVirHw]
                         << pCurrentCoreCfg->HWUnitConfig[tVirHw].HwUnitCfg->u8HwInstIdx) &
                        s_SPI_aSeqUseHwInstBitMask[Sequence])))
            {
                Status = (Std_ReturnType)E_NOT_OK;
#if (SPI_DET_ENABLE == STD_ON)
                (void)Det_ReportRuntimeError((uint16)SPI_MODULE_ID,
                                             (uint8)0U,
                                             SPI_SYNCTRANSMIT_ID,
                                             SPI_E_SEQ_IN_PROCESS);
#endif /* SPI_DET_ENABLE == STD_ON */
                break;
            }
            else
            {
                /* Empty */
            }
        }
        /* PRQA S 2877 -- */
        if ((Std_ReturnType)E_NOT_OK != Status)
        {
            (g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).eSeqResult = SPI_SEQ_PENDING;

            /* update the state of logic hw units to busy */
            for (tJobIdx = 0u; tJobIdx < pcSeqCfg->tNumJobs; ++tJobIdx)
            {
                Spi_aSyncVirHwBusyFlags[pCurrentCoreCfg->JobConfig[pcSeqCfg->pcJobsArray[tJobIdx]]
                                            .JobCfg->tVirHwUnitIdx] = SPI_HW_BUSY_FLAG_U32;
            }

            SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_11();

            Status = Spi_LL_SyncTransfer(Sequence, SpiCoreID);

            SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_12();

            if ((Std_ReturnType)E_OK == Status)
            {
                /* Set the sequence as OK */
                (g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).eSeqResult = SPI_SEQ_OK;
            }
            else
            {
                /* Set the sequence as FAILED */
                (g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).eSeqResult = SPI_SEQ_FAILED;
            }

            /* set used HW units as idle */
            for (tJobIdx = 0u; tJobIdx < pcSeqCfg->tNumJobs; ++tJobIdx)
            {
                Spi_aSyncVirHwBusyFlags[pCurrentCoreCfg->JobConfig[pcSeqCfg->pcJobsArray[tJobIdx]]
                                            .JobCfg->tVirHwUnitIdx] = SPI_HW_IDLE_FLAG_U32;
            }

            SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_12();
        }
        else
        {
            SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_11();
        }
    }

    return Status;
}
#endif /* SPI_SYNC_DRIVER == STD_ON */

#if (SPI_SYNC_DRIVER == STD_ON)
#if (SPI_DET_ENABLE == STD_ON)
/**
 * @brief   This function check the initialization of driver and sequence ID is compatible in
 * Synchronous mode.
 * @details This function check the initialization of driver and sequence ID is compatible in
 * Synchronous mode.
 *
 * @param[in]      SpiCoreID      CoreID
 * @param[in]      Sequence          Sequence ID
 * @return Std_ReturnType
 * @retval E_OK      No error was reported
 * @retval E_NOT_OK  Error was reported
 *
 *
 */
LOCAL_INLINE Std_ReturnType Spi_SyncTransmitCheckDemReport(uint8 SpiCoreID, Spi_SequenceType Sequence)
{
    Std_ReturnType        Status          = (Std_ReturnType)E_OK;
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

    /* initialized */
    if (NULL_PTR == pCurrentCoreCfg)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SYNCTRANSMIT_ID, SPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* Sequence Valid Range */
    else if (Sequence > pCurrentCoreCfg->tSpiMaxValidSeq)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SYNCTRANSMIT_ID, SPI_E_PARAM_SEQ);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    /* Verify the core has assigned for sequence */
    else if (NULL_PTR == pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SYNCTRANSMIT_ID, SPI_E_PARAM_CONFIG);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (SpiCoreID != pCurrentCoreCfg->SequenceConfig[Sequence].SequenceCfg->SpiCoreUse)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SYNCTRANSMIT_ID, SPI_E_PARAM_CONFIG);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /*Do nothing */
    }
    return Status;
}
#endif
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
#if (SPI_DET_ENABLE == STD_ON)
/**
 * @brief   This function will check validation of jobs in a sequence in Synchronous mode.
 * @details This function will check validation of jobs in a sequence in Synchronous mode.
 *
 * @param[in]      SequenceConfig     The sequence configuration
 * @param[in]      SpiCoreID         ID of Core
 *
 * @retval E_OK      No invalid configuration was found.
 * @retval E_NOT_OK  The HWUnit which are assigning to the job is Async mode Or the buffer of
 * channel is EB so Lenght is 0.
 *
 * @pre  This function will be called by Spi_Synctransmit()
 * @pre  Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL0 or SPI_LEVEL2
 */
LOCAL_INLINE Std_ReturnType Spi_SynctransmitCheckJobsIsValid(const Spi_SeqCfgType *SequenceConfig,
                                                             uint8                 SpiCoreID)
{
    Spi_JobType           NumJobsInSequence;
    Spi_JobType           Job;
    Spi_JobType           JobIndex;
    Spi_ChannelType       tChnlIdx;
    Spi_HWUnitType        HWUnit;
    const Spi_JobCfgType *JobConfig;
    Std_ReturnType        Status = (Std_ReturnType)E_OK;
    uint8                 u8SyncOrAsync;
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

    /* Get the number of jobs in the sequence */
    NumJobsInSequence = SequenceConfig->tNumJobs;
    for (JobIndex = 0u; JobIndex < NumJobsInSequence; JobIndex++)
    {
        /* Get the job id */
        Job       = SequenceConfig->pcJobsArray[JobIndex];
        JobConfig = pCurrentCoreCfg->JobConfig[Job].JobCfg;
        /* Logical Spi HWUnit */
        HWUnit        = JobConfig->tVirHwUnitIdx;
        u8SyncOrAsync = pCurrentCoreCfg->HWUnitConfig[HWUnit].HwUnitCfg->u8SyncOrAsync;
        if (SPI_HW_UNIT_ASYNC_U8 == u8SyncOrAsync)
        {
            /* HwUnit is not prearranged for dedicated Synchronous
               transmission */
            (void)Det_ReportError((uint16)SPI_MODULE_ID,
                                  (uint8)0,
                                  SPI_SYNCTRANSMIT_ID,
                                  SPI_E_PARAM_UNIT);
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Do nothing */
        }
#if (SPI_CHANNEL_EB_ALLOWED == STD_ON)
        if ((Std_ReturnType)E_OK == Status)
        {
            /* chk whether all EB setup */
            for (tChnlIdx = (Spi_ChannelType)0; tChnlIdx < JobConfig->tChnlCntOfJob; ++tChnlIdx)
            {
                if (EB == pCurrentCoreCfg->ChannelConfig[JobConfig->pcChnlsArray[tChnlIdx]]
                              .ChannelCfg->eBufferType)
                {
                    /* channel length 0 for unconfigured EB */
                    if ((Spi_NumberOfDataType)0 ==
                        g_SPI_tChnJobSeqHwState.aChnlStats[JobConfig->pcChnlsArray[tChnlIdx]]
                            .tTransferByteCnt)
                    {
                        /* An used EB not initialized  */
                        (void)Det_ReportError((uint16)SPI_MODULE_ID,
                                              (uint8)0,
                                              SPI_SYNCTRANSMIT_ID,
                                              SPI_E_PARAM_EB_UNIT);
                        Status = (Std_ReturnType)E_NOT_OK;
                        break;
                    }
                    else
                    {
                        /* Empty */
                    }
                }
                else
                {
                    /* Empty */
                }
            }
        }
        else
        {
            /* Do nothing */
        }
#endif /* (SPI_CHANNEL_EB_ALLOWED == STD_ON) */
        if ((Std_ReturnType)E_NOT_OK == Status)
        {
            /* break */
            break;
        }
        else
        {
            /* Do nothing */
        }
    }
    return Status;
}

#endif /*#if (SPI_SYNC_DRIVER == STD_ON)*/
#endif /*#if (SPI_DET_ENABLE == STD_ON)*/

#if (SPI_HW_STATUS_API == STD_ON)
/**
 * @brief   This function is used to request the status of a specific SPI peripheral unit.
 * @details This function is used to request the status of a specific SPI peripheral unit.
 *          - Service ID:       0x0b
 *          - Sync or Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      HWUnit              Virtual Hw unit index(the index of Hw unit in EB 'SpiHwUnit'
 * tab ,not the actual Hw unit instance)
 *
 * @return Spi_StatusType
 * @retval SPI_UNINIT  The peripheral is un-initialized
 * @retval SPI_IDLE    The peripheral is in idle state
 * @retval SPI_BUSY    The peripheral is busy
 *
 * @pre  The driver needs to be initialized before calling Spi_GetHWUnitStatus()
 *       otherwise, the function Spi_GetHWUnitStatus() shall raise the development
 *       error if SPI_DET_ENABLE is STD_ON.
 * @pre  SPI_HW_STATUS_API == STD_ON
 *
 * @implements Spi_GetHWUnitStatus_Activity
 */

SPI_TEXT_SECTION Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit)
{
    Spi_StatusType Status = SPI_UNINIT;

#if (SPI_DET_ENABLE == STD_ON)
    if (E_OK == Spi_HWUnitCheckValidity(HWUnit, SPI_GETHWUNITSTATUS_ID))
    {

#endif /* SPI_DET_ENABLE == STD_ON */
        Status = g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[HWUnit].Status;
#if (SPI_DET_ENABLE == STD_ON)
    }
    else
    {
        /* Something error */
    }
#endif /* SPI_DET_ENABLE == STD_ON */

    return Status;
}
#endif /* SPI_HW_STATUS_API == STD_ON */

#if (SPI_DET_ENABLE == STD_ON)
#if (SPI_HW_STATUS_API == STD_ON)
/**
 * @brief   This function check valid of HWUnit input
 *
 * @param[in]     HWUnit         The hardware Peripheral
 * @param[in]     FunctionId     The Function Id to report error
 * @param[out]    Std_ReturnType
 * @retval E_OK      No error was reported
 * @retval E_NOT_OK  Error was reported
 *
 */
LOCAL_INLINE Std_ReturnType Spi_HWUnitCheckValidity(const Spi_HWUnitType HWUnit,
                                                    const uint8          FunctionId)
{
    Std_ReturnType        Status          = (Std_ReturnType)E_NOT_OK;
    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

    if (NULL_PTR == pCurrentCoreCfg)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_UNINIT);
    }
    else if (HWUnit >= SPI_HW_MODULE_MAX_COUNT)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_UNIT);
    }
    /* Check core has assigned for sequence */
    else if (NULL_PTR == pCurrentCoreCfg->HWUnitConfig[HWUnit].HwUnitCfg)
    {
        /* Call Det_ReportError for wrong core */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_CONFIG);
    }
    else if (SpiCoreID != pCurrentCoreCfg->HWUnitConfig[HWUnit].HwUnitCfg->SpiCoreUse)
    {
        /* Call Det_ReportError for wrong core */
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, FunctionId, SPI_E_PARAM_CONFIG);
    }
    else
    {
        Status = (Std_ReturnType)E_OK;
    }

    return Status;
}
#endif /* (SPI_HW_STATUS_API == STD_ON) */
#endif /* (SPI_DET_ENABLE == STD_ON) */

#if (SPI_CANCEL_API == STD_ON)
/**
 * @brief   This function is used to request the cancelation of the given sequence.
 * @details This function is used to request the cancelation of the given sequence.
 *          - Service ID:       0x0c
 *          - Sync or Async:       Asynchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]      Sequence            Sequence ID
 *
 * @pre  The driver needs to be initialized before calling Spi_Cancel()
 *       otherwise, the function Spi_Cancel() shall raise the development error
 *       if SPI_DET_ENABLE is STD_ON.
 * @pre  Pre-compile parameter SPI_CANCEL_API shall be STD_ON
 * @post  The SPI Handler Driver is not responsible on external devices damages or
 *       undefined state due to cancelling a sequence transmission.
 *
 * @implements Spi_Cancel_Activity
 */
SPI_TEXT_SECTION void Spi_Cancel(Spi_SequenceType Sequence)
{
    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

#if (SPI_DET_ENABLE == STD_ON)
    if (NULL_PTR == pCurrentCoreCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_CANCEL_ID, SPI_E_UNINIT);
    }
    /* Sequence Valid Range  from 0 to tSpiMaxValidSeq*/
    else if (Sequence > pCurrentCoreCfg->tSpiMaxValidSeq)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_CANCEL_ID, SPI_E_PARAM_SEQ);
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        /* Set sequence state to Cancel */
        (g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).eSeqResult = SPI_SEQ_CANCELLED;

        /* immediately stop seq for slave */
#if (STD_ON == SPI_SLAVE_MODE_SUPPORT)
        Spi_LL_SlaveModeCancel(Sequence);
#endif /* STD_ON == SPI_SLAVE_MODE_SUPPORT */
    }
}
#endif /* SPI_CANCEL_API == STD_ON */

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/**
 * @brief   This function specifies the asynchronous mode for the SPI busses handled asynchronously.
 * @details This function specifies the asynchronous mode for the SPI busses
 *          handled asynchronously.
 *          - Service ID:       0x0d
 *          - Sync or Async:       Synchronous
 *          - Reentrancy:       Non-Reentrant
 *
 * @param[in]      AsyncMode    This parameter specifies the asynchronous
 *                              operating mode :SPI_POLLING_MODE or
 *                              SPI_INTERRUPT_MODE
 *
 * @return Std_ReturnType
 * @retval E_OK      The command ended successfully
 * @retval E_NOT_OK  The command has failed
 *
 * @pre  The driver needs to be initialized before calling Spi_SetAsyncMode()
 *       otherwise, the function Spi_SetAsyncMode() shall raise the development
 *       error if SPI_DET_ENABLE is STD_ON.
 * @pre  Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL_2
 *
 * @implements Spi_SetAsyncMode_Activity
 */
SPI_TEXT_SECTION Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)
{
    Spi_HWUnitType           tHwUnit;
    Std_ReturnType           Status          = (Std_ReturnType)E_OK;
    uint8                    SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType    *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];
    const Spi_HwUnitCfgType *pCurrentHwUnitCfg;

#if (SPI_DET_ENABLE == STD_ON)
    /* If Development Error Detection is enabled, report error if not */
    /* initialized */
    if (NULL_PTR == pCurrentCoreCfg)
    {
        (void)Det_ReportError((uint16)SPI_MODULE_ID, (uint8)0, SPI_SETASYNCMODE_ID, SPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* SPI_DET_ENABLE == STD_ON */

    {
        if (SPI_BUSY == Spi_GetAsyncStatus())
        {
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* PRQA S 2877 ++ #Misra Dir-4.1:Run-time failures shall be minimized
             * Reason: SPI_HW_MODULE_MAX_COUNT is decided by user */
            /* set the async mode for each HW Unit */
            for (tHwUnit = 0u; tHwUnit < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT; ++tHwUnit)
            {
                pCurrentHwUnitCfg = pCurrentCoreCfg->HWUnitConfig[tHwUnit].HwUnitCfg;

                if ((NULL_PTR != pCurrentHwUnitCfg) && (SpiCoreID == pCurrentHwUnitCfg->SpiCoreUse) &&
                    (SPI_HW_UNIT_ASYNC_U8 == pCurrentHwUnitCfg->u8SyncOrAsync))
                {
                    Spi_LL_IrqConfig(tHwUnit, AsyncMode);
                }
                /* PRQA S 2877 -- */
            }
        }
    }

    return Status;
}
#endif /* SPI_LEVEL_DELIVERED == SPI_LEVEL_2 */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function shall asynchronously poll SPI interrupts and call ISR if appropriate.
 * @details This function shall asynchronously poll SPI interrupts and call
 *          ISR if appropriate.
 *          - Service ID:       0x10
 *
 * @pre  Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL_1 or SPI_LEVEL_2.
 *
 * @implements Spi_MainFunction_Handling_Activity
 */
SPI_TEXT_SECTION void Spi_MainFunction_Handling(void)
{
    Spi_HWUnitType        tVirHwUnit;
    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

    if (NULL_PTR != pCurrentCoreCfg)
    {
        /* PRQA S 2877 ++ #Misra Dir-4.1:Run-time failures shall be minimized
         * Reason: SPI_HW_MODULE_MAX_COUNT is decided by user */
        for (tVirHwUnit = 0u; tVirHwUnit < (Spi_HWUnitType)SPI_HW_MODULE_MAX_COUNT; ++tVirHwUnit)
        {
            if ((NULL_PTR != pCurrentCoreCfg->HWUnitConfig[tVirHwUnit].HwUnitCfg) &&
                (SpiCoreID == pCurrentCoreCfg->HWUnitConfig[tVirHwUnit].HwUnitCfg->SpiCoreUse))
            {
                if (SPI_BUSY == g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tVirHwUnit].Status)
                {
                    Spi_LL_IrqPoll(tVirHwUnit);
                }
            }
        }
        /* PRQA S 2877 -- */
    }
}
#endif /* SPI_ASYNC_DRIVER == STD_ON */

/*==============================================================================
*                                      non-AUTOSAR APIs
==============================================================================*/
#if ((SPI_LEVEL_DELIVERED == SPI_LEVEL_2) && (SPI_HWUNIT_ASYNC_MODE == STD_ON))
/**
 * @brief   This function specifies the asynchronous mode for a given HWUnit.
 * @details This function specifies the asynchronous mode for the SPI busses
 *          handled asynchronously.
 *          For synchronous HW units, the function has no impact.
 *          The function will fail in two cases:
 *          - driver not initialised (SPI_E_UNINIT reported by DET)
 *          - a sequence transmission is pending the the asynchronous HW unit
 *            (SPI_E_SEQ_PENDING reported by DET)
 *
 * @param[in]      tHwUnit       The ID of the hardware to be configured
 * @param[in]      AsyncMode    This parameter specifies the asynchronous
 *                              operating mode :SPI_POLLING_MODE or
 *                              SPI_INTERRUPT_MODE
 *
 * @return Std_ReturnType
 * @retval E_OK       The command ended successfully
 * @retval E_NOT_OK   The command has failed
 *
 * @pre  Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL_2 and
 *       SPI_HWUNIT_ASYNC_MODE should be on STD_ON
 *
 * @implements Spi_SetHWUnitAsyncMode_Activity
 */
SPI_TEXT_SECTION Std_ReturnType SPI_SetHwAsyncMode(Spi_HWUnitType tHwUnit, Spi_AsyncModeType AsyncMode)
{
    Std_ReturnType        Status          = (Std_ReturnType)E_OK;
    uint8                 SpiCoreID       = GET_CPU_ID();
    const Spi_ConfigType *pCurrentCoreCfg = Spi_apxSpiConfigPtr[SpiCoreID];

#if ((SPI_DET_ENABLE == STD_ON) && (SPI_CANCEL_API == STD_ON))
    /* If Development Error Detection is enabled, report error if not */
    /* initialized */
    Status = Spi_HWUnitCheckValidity(tHwUnit, SPI_SETHWUNITASYNCMODE_ID);
    if (E_OK != Status)
    {
        /* Do nothing */
    }
    else
#endif /* (SPI_DET_ENABLE == STD_ON) && (SPI_CANCEL_API == STD_ON) */
    {
        if (SPI_HW_UNIT_ASYNC_U8 != pCurrentCoreCfg->HWUnitConfig[tHwUnit].HwUnitCfg->u8SyncOrAsync)
        {
            /* return E_NOT_OK if hw is Sync */
            Status = (Std_ReturnType)E_NOT_OK;
        }
        else if (SPI_BUSY == g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[tHwUnit].Status)
        {
            /* return E_NOT_OK if hw is Async and Busy */
            Status = (Std_ReturnType)E_NOT_OK;

#if (SPI_DET_ENABLE == STD_ON)
            (void)Det_ReportRuntimeError((uint16)SPI_MODULE_ID,
                                         (uint8)0U,
                                         SPI_SYNCTRANSMIT_ID,
                                         SPI_E_SEQ_PENDING);
#endif /* SPI_DET_ENABLE == STD_ON */
        }
        else
        {
            /* set the async mode & activate/deactivate the interrupts for the HW Unit */
            Spi_LL_IrqConfig(tHwUnit, AsyncMode);
        }
    }

    return Status;
}
#endif /* SPI_LEVEL_DELIVERED == SPI_LEVEL_2 && SPI_HWUNIT_ASYNC_MODE == STD_ON */

#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
