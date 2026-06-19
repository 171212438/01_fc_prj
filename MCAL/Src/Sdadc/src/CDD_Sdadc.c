/**
 *   @file    CDD_Sdadc.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SDSDADC - hardware specific type definition
 *   @details This file contains the SDSDADC AUTOSAR hardware specific type definition
 *
 *   @addtogroup SDSDADC
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
*   0.8.0       20/8/2024     QXW0084       N/A          SDSDADC Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Sdadc.h"
#include "CDD_Sdadc_Hw.h"
#include "CDD_Sdadc_LLD.h"
#include "CDD_Sdadc_Version.h"
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#if (SDADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif
#include "SchM_Sdadc.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Sdadc configuration header file are of the same Autosar version */
#if ((SDADC_AR_RELEASE_MAJOR_VERSION != SDADC_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (SDADC_AR_RELEASE_MINOR_VERSION != SDADC_CFG_AR_RELEASE_MINOR_VERSION) || \
     (SDADC_AR_RELEASE_REVISION_VERSION != SDADC_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Sdadc.h and Sdadc_Cfg.h are different"
#endif

/* Check if current file and Sdadc configuration header file are of the same software version */
#if ((SDADC_SW_MAJOR_VERSION != SDADC_CFG_SW_MAJOR_VERSION) || \
     (SDADC_SW_MINOR_VERSION != SDADC_CFG_SW_MINOR_VERSION) || \
     (SDADC_SW_PATCH_VERSION != SDADC_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of Sdadc.h and Sdadc_Cfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define CDD_SDADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

/**
 * @brief          Global configuration pointer.
 * @details        Pointer to the configuration structure.
 */
CDD_SDADC_DATA_SECTION const Sdadc_ConfigType *Sdadc_CfgPtr[SDADC_MAX_CORES] = SDADC_CFG_PTR_INIT_ARRAY;

#define CDD_SDADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_INIT_8
#include "Sdadc_MemMap.h"

/**
 * @brief          SDADC driver status variable.
 * @details        SDADC driver state machine.
 */
/* [FUNC_SDADC_00255] [SWDSG_SDADC_00273] [FUNC_SDADC_00266] [SWDSG_SDADC_00284] */
CDD_SDADC_DATA_SECTION uint8 Sdadc_DrvStatus[SDADC_MAX_CORES] = SDADC_UNINIT_ARRAY;

#define CDD_SDADC_STOP_SEC_VAR_INIT_8
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION Sdadc_ChannelMDataType
    Sdadc_ChannelMData[SDADC_INSTANCE_CNT][SDADC_MAX_CHANNEL_CNT];

CDD_SDADC_DATA_SECTION Sdadc_ChannelSDCAPDataType
    Sdadc_ChannelSDCAPData[SDADC_INSTANCE_CNT][SDADC_MAX_CHANNEL_CNT];

CDD_SDADC_DATA_SECTION uint8 Sdadc_MAStatus[SDADC_INSTANCE_CNT];

#define CDD_SDADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define CDD_SDADC_START_SEC_CODE
#include "Sdadc_MemMap.h"

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ChannelPtrCheck(const Sdadc_InstanceType InstanceId,
                                                            uint32                   CoreId,
                                                            uint8                    ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_InstanceCoreCheck(const Sdadc_InstanceType InstanceId,
                                                              uint32                   CoreId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_InstancePtrCheck(const Sdadc_InstanceType InstanceId,
                                                             uint32                   CoreId);
/* [FUNC_SDADC_00265] [SWDSG_SDADC_00283] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadResultBufferCheck(const Sdadc_InstanceType InstanceId,
                                                                  const Sdadc_ChannelType ChannelId,
                                                                  Sdadc_ResultType *const ResultPtr);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadStreamResultBufferCheck(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    Sdadc_ResultType *const  ResultBufferPtr);
/* DetCheck functions declarations */
/* [FUNC_SDADC_00270] [SWDSG_SDADC_00288] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DeInitDetCheck(uint32 CoreId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartModulationDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopModulationDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_EnableChannelDetCheck(uint32 CoreId,
                                                                  const Sdadc_InstanceType InstanceId,
                                                                  const Sdadc_ChannelType ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DisableChannelDetCheck(uint32 CoreId,
                                                                   const Sdadc_InstanceType InstanceId,
                                                                   const Sdadc_ChannelType ChannelId);
/* [FUNC_SDADC_00259] [SWDSG_SDADC_00277] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelIntgSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelIntgSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadStreamResultsDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    /* [FUNC_SDADC_00258] [SWDSG_SDADC_00276] */
    Sdadc_ResultType *const ResultBufferPtr);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadResultDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    /* [FUNC_SDADC_00257] [SWDSG_SDADC_00275] */
    Sdadc_ResultType *const ResultPtr);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetStatusDetCheck(uint32                   CoreId,
                                                              const Sdadc_InstanceType InstanceId,
                                                              const Sdadc_ChannelType  ChannelId);
/* [FUNC_SDADC_00256] [SWDSG_SDADC_00274] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetTimestampDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    Sdadc_TimestampInfoType *pTimestampInfo);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetupResultBufferDetCheck(
    uint32                        CoreId,
    const Sdadc_InstanceType      InstanceId,
    const Sdadc_ChannelType       ChannelId,
    const Sdadc_ResultType *const DataBufferPtr);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCarrierSignalDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopCarrierSignalDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_EnableNotificationsDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DisableNotificationsDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetPwmNegTriggerOutputEnableDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId);
/* [FUNC_SDADC_00227] [SWDSG_SDADC_00242] [FUNC_SDADC_00228] [SWDSG_SDADC_00243] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetTSignTriggerOutputEnableDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
/* [FUNC_SDADC_00229] [SWDSG_SDADC_00244] [SWDSG_SDADC_00255] [SWDSG_SDADC_00256] [SWDSG_SDADC_00257] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCalibrationDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetCalibrationStatusDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
#endif
#if (SDADC_GLOBAL_TS_SUPPORT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetGlobalTimestampDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId);
#endif
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartSignDelayCaptureDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetSignDelayCapStatusDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId);
#endif
#define CDD_SDADC_STOP_SEC_CODE
#include "Sdadc_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/**
 * @note put all SDADC code into defined section
 */
#define CDD_SDADC_START_SEC_CODE
#include "Sdadc_MemMap.h"
/**
 * @brief          Initializes the SDADC driver and its instances.
 * @details        This function initializes the SDADC driver and its instances based on the
 * provided configuration. It checks the driver state, validates the configuration pointer, and
 * initializes each SDADC instance and its channels. The function also sets the initial state of the
 * driver and its components.
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
/* [FUNC_SDADC_00279] [SWDSG_SDADC_00297] [SWDSG_SDADC_00305] */
CDD_SDADC_TEXT_SECTION void Sdadc_Init(const Sdadc_ConfigType *const ConfigPtr)
{
    uint32 CoreId = SDADC_GetCoreID();
    uint8  SDADC_InsLoop;
    /* Check whether the SDADC driver is in SDADC_UNINIT state */
    if (Sdadc_DrvStatus[CoreId] != SDADC_UNINIT)
    {
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
        /* SDADC driver has been already initialized */
        /* [FUNC_SDADC_00002] [SWDSG_SDADC_00003] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_INIT,
                              (uint8)SDADC_E_ALREADY_INITIALIZED);
#endif /* (SDADC_DEV_ERROR_DETECT == STD_ON) */
    }
#if (SDADC_PRECOMPILE_SUPPORT == STD_ON)
    else if (NULL_PTR != ConfigPtr)
    {
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        /* [FUNC_SDADC_00004] [SWDSG_SDADC_00005] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_INIT,
                              (uint8)SDADC_E_PARAM_CONFIG);
#endif /* (SDADC_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (NULL_PTR == Sdadc_ConfigPredefine[CoreId])
    {
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_INIT,
                              (uint8)SDADC_E_PARAM_POINTER);
#endif /* (SDADC_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (Sdadc_ConfigPredefine[CoreId]->u16PartionCoreId != CoreId)
    /* [FUNC_SDADC_00225] [SWDSG_SDADC_00240] */
    {
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_INIT,
                              (uint8)SDADC_E_CORE_ID);
#endif /* (SDADC_DEV_ERROR_DETECT == STD_ON) */
    }
#else
    else if (NULL_PTR == ConfigPtr)
    {
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        /* [FUNC_SDADC_00003] [SWDSG_SDADC_00004] [FUNC_SDADC_00116] [SWDSG_SDADC_00131] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_INIT,
                              (uint8)SDADC_E_PARAM_POINTER);
#endif /* (SDADC_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (ConfigPtr->u16PartionCoreId != CoreId)
    /* [FUNC_SDADC_00226] [SWDSG_SDADC_00241] */
    {
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        /* [FUNC_SDADC_00005] [SWDSG_SDADC_00006] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_INIT,
                              (uint8)SDADC_E_CORE_ID);
#endif /* (SDADC_DEV_ERROR_DETECT == STD_ON) */
    }
#endif
    else
    {
#if (SDADC_PRECOMPILE_SUPPORT == STD_ON)
        Sdadc_CfgPtr[CoreId] = Sdadc_ConfigPredefine[CoreId];
#else
        Sdadc_CfgPtr[CoreId] = ConfigPtr;
#endif
        /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
               Reason:  In different chip, SDADC Has different quantities.*/
        /* [FUNC_SDADC_00006] [SWDSG_SDADC_00007] */
        for (SDADC_InsLoop = (uint8)0U; SDADC_InsLoop < SDADC_INSTANCE_CNT; SDADC_InsLoop++)
        /* PRQA S 2877 -- */
        {
            const Sdadc_HwConfigType *pInstanceCfg =
                Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[SDADC_InsLoop];
            if ((pInstanceCfg != NULL_PTR) && (pInstanceCfg->CoreId == CoreId))
            {
                Sdadc_LLD_InitInstance(pInstanceCfg);
                for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
                {
                    if (pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
                    {
                        /* [FUNC_SDADC_00007] [SWDSG_SDADC_00008]  [FUNC_SDADC_00312]
                         * [SWDSG_SDADC_00013] */
                        Sdadc_LLD_EnableChannelNotification(
                            pInstanceCfg->HWInstanceId,
                            pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop]->u8HwChannelId,
                            1U);
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
                        /* [FUNC_SDADC_00010] [SWDSG_SDADC_00011] */
                        Sdadc_LLD_SetCalibrationStatus(
                            pInstanceCfg->HWInstanceId,
                            pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop]->u8HwChannelId,
                            SDADC_CALIBRATION_NOT_STARTED);
#endif
                    }
                    else
                    {
                        /* Noting to do */
                    }
                    SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_08();
                    /* [FUNC_SDADC_00008] [SWDSG_SDADC_00009] */
                    Sdadc_ChannelMData[SDADC_InsLoop][Sdadc_ChLoop].Sdadc_ChannelStatus =
                        SDADC_CHANNEL_IDLE;
                    /* [FUNC_SDADC_00009] [SWDSG_SDADC_00010] */
                    Sdadc_ChannelMData[SDADC_InsLoop][Sdadc_ChLoop].Sdadc_ChannelBufferPtr = NULL_PTR;
                    Sdadc_ChannelMData[SDADC_InsLoop][Sdadc_ChLoop].Sdadc_ChannelBufferSize = 0U;
                    Sdadc_ChannelMData[SDADC_InsLoop][Sdadc_ChLoop].Sdadc_ChannelBufferFull = 0U;
                    SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_08();
                }
                Sdadc_MAStatus[SDADC_InsLoop] = SDADC_MA_STOPPED;
            }
            else
            {
                /* Noting to do */
            }
        }
        /* Update SDADC driver status to SDADC_INIT */
        /* [FUNC_SDADC_00011] [SWDSG_SDADC_00012] */
        Sdadc_DrvStatus[CoreId] = SDADC_INIT;
    }
    return; /* Exit function with no return */
}

/**
 * @brief          De-initializes the SDADC driver and its instances.
 * @details        This function de-initializes the SDADC driver and its instances. It checks the
 * driver state, validates the configuration pointer, and de-initializes each SDADC instance and its
 * channels. The function also resets the state of the driver and its components to their initial
 * state.
 *
 * @return         void
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1B.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00012
 */
/* [FUNC_SDADC_00012] [SWDSG_SDADC_00015] */
CDD_SDADC_TEXT_SECTION void Sdadc_DeInit(void)
{
    uint32 CoreId = SDADC_GetCoreID();

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_DeInitDetCheck(CoreId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
        Reason:  In different chip, SDADC Has different quantities.*/
        for (uint8 SDADC_InsLoop = (uint8)0U; SDADC_InsLoop < SDADC_INSTANCE_CNT; SDADC_InsLoop++)
        /* PRQA S 2877 -- */
        {
            const Sdadc_HwConfigType *pInstanceCfg =
                Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[SDADC_InsLoop];

            /* [FUNC_SDADC_00314] [SWDSG_SDADC_00023] */
            if ((pInstanceCfg != NULL_PTR) && (pInstanceCfg->CoreId == CoreId))
            {
                Sdadc_LLD_DeInitInstance(pInstanceCfg);
                SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_09();
                for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
                {
                    if (pInstanceCfg[SDADC_InsLoop].paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
                    {
                        /* [FUNC_SDADC_00313] [SWDSG_SDADC_00014] */
                        Sdadc_LLD_EnableChannelNotification(
                            pInstanceCfg->HWInstanceId,
                            pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop]->u8HwChannelId,
                            0U);
                    }
                    else
                    {
                        /* Noting to do */
                    }
                    Sdadc_ChannelMData[SDADC_InsLoop][Sdadc_ChLoop].Sdadc_ChannelStatus =
                        SDADC_CHANNEL_IDLE;
                }
                SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_09();
                /* [FUNC_SDADC_00268] [SWDSG_SDADC_00286] */
                Sdadc_MAStatus[SDADC_InsLoop] = SDADC_MA_STOPPED;
            }
        }
        /* Update SDADC driver status to SDADC_INIT */
        /* [FUNC_SDADC_00269] [SWDSG_SDADC_00287] */
        Sdadc_DrvStatus[CoreId] = SDADC_UNINIT;
    }
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DeInitDetCheck(uint32 CoreId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        /* SDADC driver has been already initialized */
        /* [FUNC_SDADC_00013] [SWDSG_SDADC_00016] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DEINIT,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (Sdadc_CfgPtr[CoreId] == NULL_PTR)
    {
        /* SDADC driver has been already initialized */
        /* [FUNC_SDADC_00014] [SWDSG_SDADC_00017] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DEINIT,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_CfgPtr[CoreId]->u16PartionCoreId != CoreId)
    {
        /* Invalid pointer */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DEINIT,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Starts the modulation for the specified SDADC instance.
 * @details        This function starts the modulation for the specified SDADC instance. It checks
 * the driver state, validates the instance ID, and ensures that the instance is properly configured
 * for the current core. If the modulation is successfully started, the function updates the
 * modulation status and reports the result to the DEM (Diagnostic Event Manager) if enabled.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance to start modulation for.
 * @return         Std_ReturnType  Returns E_OK if the modulation was successfully started,
 * otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1C.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00020
 */
/* [FUNC_SDADC_00020] [SWDSG_SDADC_00024] [FUNC_SDADC_00316] [SWDSG_SDADC_00036] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartModulation(const Sdadc_InstanceType InstanceId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

/* [FUNC_SDADC_00025] [SWDSG_SDADC_00029] */
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StartModulationDetCheck(CoreId, InstanceId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        /* [FUNC_SDADC_00218] [SWDSG_SDADC_00233] */
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        /* [FUNC_SDADC_00315] [SWDSG_SDADC_00035] */
        Ret = Sdadc_LLD_StartModulation(pHwConfig);
        if (Ret == E_NOT_OK)
        {
            /* [FUNC_SDADC_00027] [SWDSG_SDADC_00031] */
            Sdadc_MAStatus[InstanceId] = SDADC_MA_STOPPED;
#if (SDADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            /* [FUNC_SDADC_00028] [SWDSG_SDADC_00032] */
            (void)Dem_SetEventStatus((Dem_EventIdType)SDADC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_FAILED);
#endif
        }
        else
        {
            /* [FUNC_SDADC_00026] [SWDSG_SDADC_00030] [FUNC_SDADC_00219] [SWDSG_SDADC_00234] */
            Sdadc_MAStatus[InstanceId] = SDADC_MA_STARTED;
#if (SDADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            /* [FUNC_SDADC_00029] [SWDSG_SDADC_00033] */
            (void)Dem_SetEventStatus((Dem_EventIdType)SDADC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_PASSED);
#endif
        }
        /* [FUNC_SDADC_00030] [SWDSG_SDADC_00034] */
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartModulationDetCheck(uint32 CoreId,
                                                                    const Sdadc_InstanceType InstanceId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00021] [SWDSG_SDADC_00025]  [FUNC_SDADC_00032] [SWDSG_SDADC_00038]
     * [FUNC_SDADC_00041] [SWDSG_SDADC_00048] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        /* [FUNC_SDADC_00176] [SWDSG_SDADC_00191] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_MODULATION,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00022] [SWDSG_SDADC_00026] [FUNC_SDADC_00042] [SWDSG_SDADC_00049]
     * [FUNC_SDADC_00177] [SWDSG_SDADC_00192] */
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    /* [FUNC_SDADC_00185] [SWDSG_SDADC_00200] [FUNC_SDADC_00215] [SWDSG_SDADC_00230] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_MODULATION,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00044] [SWDSG_SDADC_00051]  [FUNC_SDADC_00178] [SWDSG_SDADC_00193] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    /* [FUNC_SDADC_00023] [SWDSG_SDADC_00027] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_MODULATION,
                              (uint8)SDADC_E_PARAM_POINTER);
        /* [FUNC_SDADC_00186] [SWDSG_SDADC_00201] [FUNC_SDADC_00216] [SWDSG_SDADC_00231] */
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00043] [SWDSG_SDADC_00050] [FUNC_SDADC_00179] [SWDSG_SDADC_00194] */
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        /* [FUNC_SDADC_00024] [SWDSG_SDADC_00028] [FUNC_SDADC_00187] [SWDSG_SDADC_00202]
         * [FUNC_SDADC_00217] [SWDSG_SDADC_00232] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_MODULATION,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00045] [SWDSG_SDADC_00052] */
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Stops the modulation for the specified SDADC instance.
 * @details        This function stops the modulation for the specified SDADC instance. It checks
 * the driver state, validates the instance ID, and ensures that the instance is properly configured
 * for the current core. If the modulation is successfully stopped, the function updates the
 * modulation status and resets the channel status to idle.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance to stop modulation for.
 * @return         Std_ReturnType  Returns E_OK if the modulation was successfully stopped,
 * otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1D.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00031
 */
/* [FUNC_SDADC_00031] [SWDSG_SDADC_00037] [FUNC_SDADC_00183] [SWDSG_SDADC_00198] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopModulation(const Sdadc_InstanceType InstanceId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StopModulationDetCheck(CoreId, InstanceId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        /* [FUNC_SDADC_00188] [SWDSG_SDADC_00203] [FUNC_SDADC_00189] [SWDSG_SDADC_00204] */
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        Ret = Sdadc_LLD_StopModulation(Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]);
        SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_10();
        for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
        {
            if (pHwConfig->paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
            {
                /* [FUNC_SDADC_00038] [SWDSG_SDADC_00044] */
                Sdadc_ChannelMData[InstanceId][Sdadc_ChLoop].Sdadc_ChannelStatus = SDADC_CHANNEL_IDLE;
            }
            else
            {
                /* Noting to do */
            }
        }
        SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_10();
        /* [FUNC_SDADC_00037] [SWDSG_SDADC_00043] */
        Sdadc_MAStatus[InstanceId] = SDADC_MA_STOPPED;
        /* [FUNC_SDADC_00039] [SWDSG_SDADC_00045] */
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
/* [FUNC_SDADC_00036] [SWDSG_SDADC_00042] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopModulationDetCheck(uint32 CoreId,
                                                                   const Sdadc_InstanceType InstanceId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00112] [SWDSG_SDADC_00127] [FUNC_SDADC_00128] [SWDSG_SDADC_00143]
     * [FUNC_SDADC_00317] [SWDSG_SDADC_00046] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_MODULATION,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00113] [SWDSG_SDADC_00128] [FUNC_SDADC_00129] [SWDSG_SDADC_00144] */
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        /* [FUNC_SDADC_00033] [SWDSG_SDADC_00039] [FUNC_SDADC_00143] [SWDSG_SDADC_00158]
         * [FUNC_SDADC_00242] [SWDSG_SDADC_00260] [FUNC_SDADC_00288] [SWDSG_SDADC_00308] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_MODULATION,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00114] [SWDSG_SDADC_00129] [FUNC_SDADC_00130] [SWDSG_SDADC_00145] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        /* [FUNC_SDADC_00034] [SWDSG_SDADC_00040] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_MODULATION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00115] [SWDSG_SDADC_00130] [FUNC_SDADC_00131] [SWDSG_SDADC_00146] */
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        /* [FUNC_SDADC_00035] [SWDSG_SDADC_00041] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_MODULATION,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00117] [SWDSG_SDADC_00132] [FUNC_SDADC_00132] [SWDSG_SDADC_00147] */
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Enables the specified SDADC channel.
 * @details        This function enables the specified SDADC channel. It checks the driver state,
 * validates the instance ID, and ensures that the channel is properly configured for the current
 * core. If the channel is successfully enabled, the function updates the channel status to active.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to enable.
 * @param[in]      ConfigReload Specifies whether the channel configuration should be reloaded.
 * @return         Std_ReturnType  Returns E_OK if the channel was successfully enabled, otherwise
 * E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x2F.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00040
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_EnableChannel(const Sdadc_InstanceType InstanceId,
                                                          const Sdadc_ChannelType  ChannelId,
                                                          const Sdadc_ChannelReloadType ConfigReload)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_EnableChannelDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];

        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            /* [FUNC_SDADC_00048] [SWDSG_SDADC_00055] [FUNC_SDADC_00198] [SWDSG_SDADC_00213]
             * [FUNC_SDADC_00199] [SWDSG_SDADC_00214] */
            Ret = Sdadc_LLD_EnableAllChannel(pHwConfig, 1U, ConfigReload);
            if (Ret == E_OK)
            {
                /* [FUNC_SDADC_00052] [SWDSG_SDADC_00059] */
                for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
                {
                    if (pHwConfig->paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
                    {
                        /* [FUNC_SDADC_00040] [SWDSG_SDADC_00047] [SWDSG_SDADC_00065]
                         * [FUNC_SDADC_00047] [SWDSG_SDADC_00054] [FUNC_SDADC_00049]
                         * [SWDSG_SDADC_00056] [FUNC_SDADC_00201] [SWDSG_SDADC_00216]
                         * [FUNC_SDADC_00320] [SWDSG_SDADC_00064] */
                        Sdadc_ChannelMData[InstanceId][Sdadc_ChLoop].Sdadc_ChannelStatus =
                            SDADC_CHANNEL_ACTIVCE;
                    }
                    else
                    {
                        /* Noting to do */
                    }
                }
            }
        }
        else
        {
            /* [FUNC_SDADC_00200] [SWDSG_SDADC_00215] */
            Ret =
                /* [FUNC_SDADC_00053] [SWDSG_SDADC_00060] */
                Sdadc_LLD_EnableChannel(pHwConfig,
                                        pHwConfig->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                                        1U,
                                        pHwConfig->paSdadcChannelCfg[ChannelId]->u8AccessMode,
                                        ConfigReload);
            /* [FUNC_SDADC_00318] [SWDSG_SDADC_00061] [SWDSG_SDADC_00062] */
            Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus = SDADC_CHANNEL_ACTIVCE;
        }

#if (SDADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if (Ret == E_NOT_OK)
        {
            /* [FUNC_SDADC_00050] [SWDSG_SDADC_00057] */
            (void)Dem_SetEventStatus((Dem_EventIdType)SDADC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_FAILED);
        }
        else
        {
            /* [FUNC_SDADC_00051] [SWDSG_SDADC_00058] */
            (void)Dem_SetEventStatus((Dem_EventIdType)SDADC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_PASSED);
        }
#endif
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_EnableChannelDetCheck(uint32 CoreId,
                                                                  const Sdadc_InstanceType InstanceId,
                                                                  const Sdadc_ChannelType ChannelId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00192] [SWDSG_SDADC_00207] [FUNC_SDADC_00230] [SWDSG_SDADC_00245] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_CHANNEL,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00193] [SWDSG_SDADC_00208] [FUNC_SDADC_00231] [SWDSG_SDADC_00246] */
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_CHANNEL,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00194] [SWDSG_SDADC_00209] */
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        /* [FUNC_SDADC_00144] [SWDSG_SDADC_00159] */
        /* [FUNC_SDADC_00232] [SWDSG_SDADC_00247] */
        /* [FUNC_SDADC_00243] [SWDSG_SDADC_00261] */
        /* [FUNC_SDADC_00289] [SWDSG_SDADC_00309] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_CHANNEL,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00195] [SWDSG_SDADC_00210] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        /* [FUNC_SDADC_00145] [SWDSG_SDADC_00160] */
        /* [FUNC_SDADC_00197] [SWDSG_SDADC_00212] */
        /* [FUNC_SDADC_00244] [SWDSG_SDADC_00262] */
        /* [FUNC_SDADC_00290] [SWDSG_SDADC_00310] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_CHANNEL,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00196] [SWDSG_SDADC_00211] */
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    /* [FUNC_SDADC_00146] [SWDSG_SDADC_00161] */
    {
        /* [FUNC_SDADC_00245] [SWDSG_SDADC_00263] */
        /* [FUNC_SDADC_00291] [SWDSG_SDADC_00311] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_CHANNEL,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
              NULL_PTR))
    /* [FUNC_SDADC_00147] [SWDSG_SDADC_00162] */
    {
        /* [FUNC_SDADC_00046] [SWDSG_SDADC_00053] */
        /* [FUNC_SDADC_00292] [SWDSG_SDADC_00312] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_CHANNEL,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Disables the specified SDADC channel.
 * @details        This function disables the specified SDADC channel. It checks the driver state,
 * validates the instance ID, and ensures that the channel is properly configured for the current
 * core. If the channel is successfully disabled, the function updates the channel status to idle.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to disable.
 * @return         Std_ReturnType  Returns E_OK if the channel was successfully disabled, otherwise
 * E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x30.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00054
 */
/* [FUNC_SDADC_00054] [SWDSG_SDADC_00066] [SWDSG_SDADC_00067] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DisableChannel(const Sdadc_InstanceType InstanceId,
                                                           const Sdadc_ChannelType  ChannelId)
/* [FUNC_SDADC_00061] [SWDSG_SDADC_00074] */
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_OK;

/* [FUNC_SDADC_00066] [SWDSG_SDADC_00079] */
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_DisableChannelDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    /* [FUNC_SDADC_00209] [SWDSG_SDADC_00224] */
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];

        /* [FUNC_SDADC_00062] [SWDSG_SDADC_00075] */
        /* [FUNC_SDADC_00210] [SWDSG_SDADC_00225] */
        /* [FUNC_SDADC_00321] [SWDSG_SDADC_00080] */
        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            Sdadc_LLD_EnableAllChannel(pHwConfig, 0U, 0U);
            for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
            {
                if (pHwConfig->paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
                {
                    /* [FUNC_SDADC_00063] [SWDSG_SDADC_00076] */
                    Sdadc_ChannelMData[InstanceId][Sdadc_ChLoop].Sdadc_ChannelStatus =
                        SDADC_CHANNEL_IDLE;
                }
            }
        }
        else
        {
            /* [FUNC_SDADC_00211] [SWDSG_SDADC_00226] */
            Sdadc_LLD_EnableChannel(pHwConfig,
                                    pHwConfig->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                                    0U,
                                    pHwConfig->paSdadcChannelCfg[ChannelId]->u8AccessMode,
                                    0U);
            Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus = SDADC_CHANNEL_IDLE;
        }
        /* [FUNC_SDADC_00064] [SWDSG_SDADC_00077] */
        /* [FUNC_SDADC_00065] [SWDSG_SDADC_00078] */
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DisableChannelDetCheck(uint32 CoreId,
                                                                   const Sdadc_InstanceType InstanceId,
                                                                   const Sdadc_ChannelType ChannelId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00055] [SWDSG_SDADC_00068] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    /* [FUNC_SDADC_00203] [SWDSG_SDADC_00218] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_CHANNEL,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00056] [SWDSG_SDADC_00069] */
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_CHANNEL,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00057] [SWDSG_SDADC_00070] */
    /* [FUNC_SDADC_00204] [SWDSG_SDADC_00219] */
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_CHANNEL,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00058] [SWDSG_SDADC_00071] */
    /* [FUNC_SDADC_00206] [SWDSG_SDADC_00221] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_CHANNEL,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_CHANNEL,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             ((Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]) ==
              NULL_PTR))
    {
        /* [FUNC_SDADC_00246] [SWDSG_SDADC_00264] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_CHANNEL,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}

#endif

/**
 * @brief          Starts the software conversion for the specified SDADC channel.
 * @details        This function starts the software conversion for the specified SDADC channel. It
 * checks the driver state, validates the instance ID, and ensures that the channel is properly
 * configured for the current core. If the channel is successfully started, the function triggers
 * the software conversion.
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
 * @implements     SWS_SDADC_00067
 */
/* [FUNC_SDADC_00067] [SWDSG_SDADC_00081] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelSWConversion(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StartChannelSWConversionDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        /* [FUNC_SDADC_00075] [SWDSG_SDADC_00089] */
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            /* [FUNC_SDADC_00076] [SWDSG_SDADC_00090] */
            Sdadc_LLD_SetChannelSWTrigger(pHwConfig->HWInstanceId, SDADC_ALL_HW_CHANNEL, 1);
        }
        else
        {
            Sdadc_LLD_SetChannelSWTrigger(pHwConfig->HWInstanceId,
                                          pHwConfig->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                                          1);
        }
        /* [FUNC_SDADC_00077] [SWDSG_SDADC_00091] */
        Ret = E_OK;
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00068] [SWDSG_SDADC_00082] */
    /* [FUNC_SDADC_00222] [SWDSG_SDADC_00237] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SW_CONVERSION,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00069] [SWDSG_SDADC_00083] */
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SW_CONVERSION,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00070] [SWDSG_SDADC_00084] */
    /* [FUNC_SDADC_00223] [SWDSG_SDADC_00238] */
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00071] [SWDSG_SDADC_00085] */
    /* [FUNC_SDADC_00224] [SWDSG_SDADC_00239] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00072] [SWDSG_SDADC_00086] */
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SW_CONVERSION,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             ((Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]) ==
              NULL_PTR))
    /* [FUNC_SDADC_00073] [SWDSG_SDADC_00087] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus == SDADC_CHANNEL_IDLE))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SW_CONVERSION,
                              (uint8)SDADC_E_CHANNEL_STATUS);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Stops the software conversion for the specified SDADC channel.
 * @details        This function stops the software conversion for the specified SDADC channel. It
 * checks the driver state, validates the instance ID, and ensures that the channel is properly
 * configured for the current core. If the channel is successfully stopped, the function updates the
 * channel status to idle.
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
 * @implements     SWS_SDADC_00078
 */
/* [FUNC_SDADC_00078] [SWDSG_SDADC_00092] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelSWConversion(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StopChannelSWConversionDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        /* [FUNC_SDADC_00087] [SWDSG_SDADC_00101] */
        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            /* [FUNC_SDADC_00086] [SWDSG_SDADC_00100] */
            /* [FUNC_SDADC_00108] [SWDSG_SDADC_00123] */
            /* [FUNC_SDADC_00109] [SWDSG_SDADC_00124] */
            Sdadc_LLD_SetChannelSWTrigger(pHwConfig->HWInstanceId, SDADC_ALL_HW_CHANNEL, 0);
        }
        else
        {
            Sdadc_LLD_SetChannelSWTrigger(pHwConfig->HWInstanceId,
                                          pHwConfig->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                                          0);
        }
        /* [FUNC_SDADC_00100] [SWDSG_SDADC_00115] */
        Ret = E_OK;
    }
    /* [FUNC_SDADC_00088] [SWDSG_SDADC_00102] */
    /* [FUNC_SDADC_00110] [SWDSG_SDADC_00125] */
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00101] [SWDSG_SDADC_00116] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        /* [FUNC_SDADC_00079] [SWDSG_SDADC_00093] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_SW_CONVERSION,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    /* [FUNC_SDADC_00080] [SWDSG_SDADC_00094] */
    /* [FUNC_SDADC_00319] [SWDSG_SDADC_00063] */
    {
        /* [FUNC_SDADC_00102] [SWDSG_SDADC_00117] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_SW_CONVERSION,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        /* [FUNC_SDADC_00081] [SWDSG_SDADC_00095] */
        /* [FUNC_SDADC_00103] [SWDSG_SDADC_00118] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        /* [FUNC_SDADC_00082] [SWDSG_SDADC_00096] */
        /* [FUNC_SDADC_00104] [SWDSG_SDADC_00119] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    /* [FUNC_SDADC_00059] [SWDSG_SDADC_00072] */
    /* [FUNC_SDADC_00083] [SWDSG_SDADC_00097] */
    {
        /* [FUNC_SDADC_00105] [SWDSG_SDADC_00120] */
        /* [FUNC_SDADC_00207] [SWDSG_SDADC_00222] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_SW_CONVERSION,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             ((Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]) ==
              NULL_PTR))
    {
        /* [FUNC_SDADC_00084] [SWDSG_SDADC_00098] */
        /* [FUNC_SDADC_00106] [SWDSG_SDADC_00121] */
        /* [FUNC_SDADC_00208] [SWDSG_SDADC_00223] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus == SDADC_CHANNEL_IDLE))
    {
        /* [FUNC_SDADC_00074] [SWDSG_SDADC_00088] */
        /* [FUNC_SDADC_00085] [SWDSG_SDADC_00099] */
        /* [FUNC_SDADC_00107] [SWDSG_SDADC_00122] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_SW_CONVERSION,
                              (uint8)SDADC_E_CHANNEL_STATUS);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Starts the integration software conversion for the specified SDADC channel.
 * @details        This function starts the integration software conversion for the specified SDADC
 * channel. It checks the driver state, validates the instance ID, and ensures that the channel is
 * properly configured for the current core. If the channel is successfully started, the function
 * triggers the integration software conversion.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to start the integration software
 * conversion for.
 * @return         Std_ReturnType  Returns E_OK if the operation is successful, otherwise returns an
 * error code.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x33.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00089
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelIntgSWConversion(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

/* [FUNC_SDADC_00089] [SWDSG_SDADC_00103] */
/* [FUNC_SDADC_00322] [SWDSG_SDADC_00114] */
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StartChannelIntgSWConversionDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        /* [FUNC_SDADC_00097] [SWDSG_SDADC_00111] */
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            /* [FUNC_SDADC_00098] [SWDSG_SDADC_00112] */
            Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId, SDADC_ALL_HW_CHANNEL, 1);
        }
        else
        {
            Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId,
                                       pHwConfig->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                                       1);
        }
        /* [FUNC_SDADC_00099] [SWDSG_SDADC_00113] */
        Ret = E_OK;
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartChannelIntgSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    /* [FUNC_SDADC_00090] [SWDSG_SDADC_00104] */
    /* [FUNC_SDADC_00093] [SWDSG_SDADC_00107] */
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        /* [FUNC_SDADC_00091] [SWDSG_SDADC_00105] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        /* [FUNC_SDADC_00092] [SWDSG_SDADC_00106] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        /* [FUNC_SDADC_00094] [SWDSG_SDADC_00108] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             ((Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]) ==
              NULL_PTR))
    {
        /* [FUNC_SDADC_00060] [SWDSG_SDADC_00073] */
        /* [FUNC_SDADC_00095] [SWDSG_SDADC_00109] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00237] [SWDSG_SDADC_00252] */
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus == SDADC_CHANNEL_IDLE))
    {
        /* [FUNC_SDADC_00096] [SWDSG_SDADC_00110] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_CHANNEL_STATUS);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}

#endif

/**
 * @brief          Stops the integration software conversion for the specified SDADC channel.
 * @details        This function stops the integration software conversion for the specified SDADC
 * channel. It checks the driver state, validates the instance ID, and ensures that the channel is
 * properly configured for the current core. If the channel is successfully stopped, the function
 * updates the channel status to idle.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to stop the integration software
 * conversion for.
 * @return         Std_ReturnType  Returns E_OK if the operation is successful, otherwise returns an
 * error code.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x34.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00100
 */
/* [FUNC_SDADC_00162] [SWDSG_SDADC_00177] */
/* [FUNC_SDADC_00191] [SWDSG_SDADC_00206] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelIntgSWConversion(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

/* [FUNC_SDADC_00236] [SWDSG_SDADC_00251] */
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StopChannelIntgSWConversionDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    /* [FUNC_SDADC_00190] [SWDSG_SDADC_00205] */
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId, SDADC_ALL_HW_CHANNEL, 0);
        }
        else
        {
            Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId,
                                       pHwConfig->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                                       0);
        }
        /* [FUNC_SDADC_00238] [SWDSG_SDADC_00253] */
        Ret = E_OK;
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopChannelIntgSWConversionDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00163] [SWDSG_SDADC_00178] */
    /* [FUNC_SDADC_00241] [SWDSG_SDADC_00259] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        /* [FUNC_SDADC_00214] [SWDSG_SDADC_00229] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00164] [SWDSG_SDADC_00179] */
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00202] [SWDSG_SDADC_00217] */
    /* [FUNC_SDADC_00205] [SWDSG_SDADC_00220] */
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00165] [SWDSG_SDADC_00180] */
    /* [FUNC_SDADC_00167] [SWDSG_SDADC_00182] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00168] [SWDSG_SDADC_00183] */
    /* [FUNC_SDADC_00234] [SWDSG_SDADC_00249] */
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00169] [SWDSG_SDADC_00184] */
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
              NULL_PTR))
    /* [FUNC_SDADC_00235] [SWDSG_SDADC_00250] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00212] [SWDSG_SDADC_00227] */
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus == SDADC_CHANNEL_IDLE))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_INTG_SW_CONVERSION,
                              (uint8)SDADC_E_CHANNEL_STATUS);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Reads the stream results from the specified SDADC channel.
 * @details        This function reads the stream results from the specified SDADC channel. It
 * checks the driver state, validates the instance ID, and ensures that the channel is properly
 * configured for the current core. If the channel is successfully read, the function updates the
 * channel status to active.
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
 * @implements     SWS_SDADC_00111
 */
/* [FUNC_SDADC_00111] [SWDSG_SDADC_00126] */
CDD_SDADC_TEXT_SECTION Sdadc_SizeType Sdadc_ReadStreamResults(const Sdadc_InstanceType InstanceId,
                                                              const Sdadc_ChannelType  ChannelId,
                                                              Sdadc_ResultType *const ResultBufferPtr)
{
    /* [FUNC_SDADC_00121] [SWDSG_SDADC_00136] */
    uint32         CoreId    = SDADC_GetCoreID();
    Sdadc_SizeType BufferCnt = 0;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_ReadStreamResultsDetCheck(CoreId, InstanceId, ChannelId, ResultBufferPtr) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        const Sdadc_ChannelConfigType *pChannelCfg   = pHwConfig->paSdadcChannelCfg[ChannelId];
        Sdadc_ChannelMDataType        *pChannelMdata = &Sdadc_ChannelMData[InstanceId][ChannelId];
        Sdadc_ResultType              *BufferPtr     = ResultBufferPtr;

        /* [FUNC_SDADC_00122] [SWDSG_SDADC_00137] */
        if (pChannelMdata->Sdadc_ChannelStatus != SDADC_CHANNEL_RESULT_READY)
        {
            BufferCnt = 0;
        }
        else
        {
            /* [FUNC_SDADC_00119] [SWDSG_SDADC_00134] */
            if (pChannelCfg->u8AccessMode == SDADC_STREAM_LINEAR_BUFFER)
            {
                SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_11();
                BufferCnt = Sdadc_LLD_LinearBufferCnt(pChannelMdata);
                if (ResultBufferPtr != pChannelMdata->Sdadc_ChannelBufferPtr)
                /* [FUNC_SDADC_00123] [SWDSG_SDADC_00138] */
                {
                    for (uint32 i = 0; i < BufferCnt; i++)
                    {
                        *BufferPtr = *(pChannelMdata->Sdadc_ChannelBufferPtr + i);
                        BufferPtr++;
                    }
                }
                /* [FUNC_SDADC_00124] [SWDSG_SDADC_00139] */
                pChannelMdata->Sdadc_ChannelBufferWPtr = pChannelMdata->Sdadc_ChannelBufferPtr;
                pChannelMdata->Sdadc_ChannelBufferRPtr = pChannelMdata->Sdadc_ChannelBufferPtr;
                pChannelMdata->Sdadc_ChannelBufferFull = 0;
                /* [FUNC_SDADC_00120] [SWDSG_SDADC_00135] */
                pChannelMdata->Sdadc_ChannelStatus = SDADC_CHANNEL_ACTIVCE;
                SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_11();
            }
            else
            {
                SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_13();
                /* [FUNC_SDADC_00125] [SWDSG_SDADC_00140] */
                BufferCnt = Sdadc_LLD_RingBufferCnt(pChannelMdata);
                for (uint32 i = 0; i < BufferCnt; i++)
                {
                    (void)Sdadc_LLD_RingBufferRead(pChannelMdata, BufferPtr);
                    BufferPtr++;
                }
                pChannelMdata->Sdadc_ChannelStatus = SDADC_CHANNEL_ACTIVCE;
                SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_13();
            }
        }
    }
    /* [FUNC_SDADC_00126] [SWDSG_SDADC_00141] */
    return BufferCnt;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadStreamResultsDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    Sdadc_ResultType *const  ResultBufferPtr)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        /* [FUNC_SDADC_00118] [SWDSG_SDADC_00133] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00166] [SWDSG_SDADC_00181] */
    else if (Sdadc_ReadStreamResultBufferCheck(InstanceId, ChannelId, ResultBufferPtr) == E_NOT_OK)
    {
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Reads the result from the specified SDADC channel.
 * @details        This function reads the result from the specified SDADC channel. It checks the
 * driver state, validates the instance ID, and ensures that the channel is properly configured for
 * the current core. If the channel is successfully read, the function updates the channel status to
 * active.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to read the result from.
 * @param[out]     ResultPtr    Pointer to where the result will be stored.
 * @return         Std_ReturnType  Returns E_OK if the result was successfully read, otherwise
 * E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x1F.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00127
 */
/* [FUNC_SDADC_00127] [SWDSG_SDADC_00142] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadResult(const Sdadc_InstanceType InstanceId,
                                                       const Sdadc_ChannelType  ChannelId,
                                                       Sdadc_ResultType *const  ResultPtr)
{
    /* [FUNC_SDADC_00136] [SWDSG_SDADC_00151] */
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_ReadResultDetCheck(CoreId, InstanceId, ChannelId, ResultPtr) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        const Sdadc_ChannelConfigType *pChannelCfg   = pHwConfig->paSdadcChannelCfg[ChannelId];
        Sdadc_ChannelMDataType        *pChannelMdata = &Sdadc_ChannelMData[InstanceId][ChannelId];

        /* [FUNC_SDADC_00137] [SWDSG_SDADC_00152] */
        if (pChannelMdata->Sdadc_ChannelStatus != SDADC_CHANNEL_RESULT_READY)
        {
            if ((pChannelCfg->u8COCIntSupress != 0u) &&
                (Sdadc_LLD_COCCheckAndClear(pHwConfig, pChannelCfg->u8HwChannelId) != 0U))
            {
                SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_14();
                Ret = Sdadc_LLD_SingleRead(pHwConfig, pChannelCfg->u8HwChannelId, ResultPtr);
                pChannelMdata->Sdadc_ChannelStatus = SDADC_CHANNEL_ACTIVCE;
                SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_14();
            }
            else
            {
                *ResultPtr = 0;
            }
        }
        else
        {
            /* [FUNC_SDADC_00138] [SWDSG_SDADC_00153] */
            if (pChannelCfg->u8AccessMode == SDADC_SINGLE_READ)
            {
                SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_14();
                Ret = Sdadc_LLD_SingleRead(pHwConfig, pChannelCfg->u8HwChannelId, ResultPtr);
                pChannelMdata->Sdadc_ChannelStatus = SDADC_CHANNEL_ACTIVCE;
                SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_14();
            }
            /* [FUNC_SDADC_00135] [SWDSG_SDADC_00150] */
            else
            {
                /* [FUNC_SDADC_00139] [SWDSG_SDADC_00154] */
                SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_15();
                Ret = Sdadc_LLD_RingBufferRead(pChannelMdata, ResultPtr);
                if (Sdadc_LLD_RingBufferCnt(pChannelMdata) == 0)
                {
                    pChannelMdata->Sdadc_ChannelStatus = SDADC_CHANNEL_ACTIVCE;
                }
                SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_15();
            }
        }
    }
    /* [FUNC_SDADC_00140] [SWDSG_SDADC_00155] */
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadResultDetCheck(uint32                   CoreId,
                                                               const Sdadc_InstanceType InstanceId,
                                                               const Sdadc_ChannelType  ChannelId,
                                                               Sdadc_ResultType *const  ResultPtr)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00134] [SWDSG_SDADC_00149] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    /* [FUNC_SDADC_00133] [SWDSG_SDADC_00148] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_ReadResultBufferCheck(InstanceId, ChannelId, ResultPtr) == E_NOT_OK)
    {
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Returns the status of the specified SDADC channel.
 * @details        This function returns the current status of the specified SDADC channel. It checks
the driver state,
 *                 validates the instance ID, and ensures that the channel is properly configured for
the current core.
 *                 The function returns the status of the channel, which can be one of the following:
 *                 - SDADC_CHANNEL_IDLE: The channel is idle and not performing any operation.
 *                 - SDADC_CHANNEL_ACTIVE: The channel is active and performing a conversion.
 *                 - SDADC_CHANNEL_RESULT_READY: The channel has completed a conversion and the result
is ready to be read.
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
 * @implements     SWS_SDADC_00141
 */
/* [FUNC_SDADC_00141] [SWDSG_SDADC_00156] */
/* [FUNC_SDADC_00247] [SWDSG_SDADC_00265] */
/* [FUNC_SDADC_00149] [SWDSG_SDADC_00164] */
CDD_SDADC_TEXT_SECTION Sdadc_ChannelStatusType Sdadc_GetStatus(const Sdadc_InstanceType InstanceId,
                                                               const Sdadc_ChannelType  ChannelId)
{
    uint32                  CoreId = SDADC_GetCoreID();
    Sdadc_ChannelStatusType Status = SDADC_CHANNEL_IDLE;

    /* [FUNC_SDADC_00148] [SWDSG_SDADC_00163] */
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_GetStatusDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        const Sdadc_ChannelConfigType *pChannelCfg = pHwConfig->paSdadcChannelCfg[ChannelId];

        /* [FUNC_SDADC_00248] [SWDSG_SDADC_00266] */
        if (pChannelCfg->u8COCIntSupress != 0u)
        {
            if (Sdadc_LLD_COCCheckAndClear(pHwConfig, pChannelCfg->u8HwChannelId) != 0U)
            {
                Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus =
                    SDADC_CHANNEL_RESULT_READY;
                Status = SDADC_CHANNEL_RESULT_READY;
            }
            else
            {
                /* Noting to do */
            }
        }
        else
        {
            Status = Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus;
        }
    }
    return Status;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetStatusDetCheck(uint32                   CoreId,
                                                              const Sdadc_InstanceType InstanceId,
                                                              const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00142] [SWDSG_SDADC_00157] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    /* [FUNC_SDADC_00301] [SWDSG_SDADC_00321] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_STATUS,
                              (uint8)SDADC_E_UNINIT);
        /* [FUNC_SDADC_00151] [SWDSG_SDADC_00166] */
        /* [FUNC_SDADC_00280] [SWDSG_SDADC_00298] */
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00152] [SWDSG_SDADC_00167] */
    /* [FUNC_SDADC_00281] [SWDSG_SDADC_00299] */
    /* [FUNC_SDADC_00302] [SWDSG_SDADC_00322] */
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_STATUS,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00153] [SWDSG_SDADC_00168] */
    /* [FUNC_SDADC_00303] [SWDSG_SDADC_00323] */
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_STATUS,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00154] [SWDSG_SDADC_00169] */
    /* [FUNC_SDADC_00304] [SWDSG_SDADC_00324] */
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    /* [FUNC_SDADC_00282] [SWDSG_SDADC_00300] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_STATUS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00155] [SWDSG_SDADC_00170] */
    /* [FUNC_SDADC_00283] [SWDSG_SDADC_00301] */
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_STATUS,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
             NULL_PTR)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_STATUS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Retrieves the timestamp information for the specified SDADC channel.
 * @details        This function retrieves the timestamp information for the specified SDADC
 * channel. It checks the driver state, validates the instance ID, and ensures that the channel is
 * properly configured for the current core. If the timestamp is successfully retrieved, the
 * function returns the timestamp information.
 *
 * @param[in]      InstanceId       The ID of the SDADC instance.
 * @param[in]      ChannelId        The ID of the SDADC channel to retrieve the timestamp for.
 * @param[out]     pTimestampInfo   Pointer to where the timestamp information will be stored.
 * @return         Std_ReturnType   Returns E_OK if the timestamp was successfully retrieved,
 * otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x26.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00150
 */
/* [FUNC_SDADC_00150] [SWDSG_SDADC_00165] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetTimestamp(const Sdadc_InstanceType InstanceId,
                                                         const Sdadc_ChannelType  ChannelId,
                                                         Sdadc_TimestampInfoType *pTimestampInfo)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

    /* [FUNC_SDADC_00323] [SWDSG_SDADC_00304] */
    /* [FUNC_SDADC_00324] [nan] */
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_GetTimestampDetCheck(CoreId, InstanceId, ChannelId, pTimestampInfo) != E_OK)
    {
        /* Nothing to do */
        /* [FUNC_SDADC_00159] [SWDSG_SDADC_00174] */
    }
    else
#endif
    /* [FUNC_SDADC_00284] [SWDSG_SDADC_00302] */
    {
        /* [FUNC_SDADC_00157] [SWDSG_SDADC_00172] */
        /* [FUNC_SDADC_00160] [SWDSG_SDADC_00175] */
        /* [FUNC_SDADC_00285] [SWDSG_SDADC_00303] */
        if (Sdadc_LLD_GetTimestamp(
                Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId],
                Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                /* [FUNC_SDADC_00158] [SWDSG_SDADC_00173] */
                pTimestampInfo) == E_OK)
        {
            Ret = E_OK;
        }
        else
        {
            /* Noting to do */
        }
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetTimestampDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    Sdadc_TimestampInfoType *pTimestampInfo)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_TIMESTAMP,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_TIMESTAMP,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_TIMESTAMP,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_TIMESTAMP,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_TIMESTAMP,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
             NULL_PTR)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_TIMESTAMP,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (pTimestampInfo == NULL_PTR)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_TIMESTAMP,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Sets up the result buffer for the specified SDADC channel.
 * @details        This function sets up the result buffer for the specified SDADC channel. It
 * checks the driver state, validates the instance ID, and ensures that the channel is properly
 * configured for the current core. If the buffer is successfully set up, the function updates the
 * channel's buffer pointers and size.
 *
 * @param[in]      InstanceId       The ID of the SDADC instance.
 * @param[in]      ChannelId        The ID of the SDADC channel to set up the result buffer for.
 * @param[in]      DataBufferPtr    Pointer to the buffer where the results will be stored.
 * @param[in]      Size             The size of the buffer.
 * @return         Std_ReturnType   Returns E_OK if the buffer was successfully set up, otherwise
 * E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x21.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00162
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetupResultBuffer(
    const Sdadc_InstanceType      InstanceId,
    const Sdadc_ChannelType       ChannelId,
    const Sdadc_ResultType *const DataBufferPtr,
    const Sdadc_SizeType          Size)
{
    Std_ReturnType Ret = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    uint32 CoreId = SDADC_GetCoreID();

    if (Sdadc_SetupResultBufferDetCheck(CoreId, InstanceId, ChannelId, DataBufferPtr) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        /* [FUNC_SDADC_00172] [SWDSG_SDADC_00187] */
        SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_16();
        Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelBufferPtr =
            (Sdadc_ResultPtrType)DataBufferPtr;
        Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelBufferSize = Size;
        Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelBufferWPtr =
            (Sdadc_ResultPtrType)DataBufferPtr;
        Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelBufferRPtr =
            (Sdadc_ResultPtrType)DataBufferPtr;
        SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_16();
        /* [FUNC_SDADC_00173] [SWDSG_SDADC_00188] */
        Ret = E_OK;
        /* [FUNC_SDADC_00174] [SWDSG_SDADC_00189] */
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetupResultBufferDetCheck(
    uint32                        CoreId,
    const Sdadc_InstanceType      InstanceId,
    const Sdadc_ChannelType       ChannelId,
    const Sdadc_ResultType *const DataBufferPtr)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00233] [SWDSG_SDADC_00248] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (DataBufferPtr == NULL_PTR)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_INVALID_BUFFER_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
             NULL_PTR)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    /* [FUNC_SDADC_00161] [SWDSG_SDADC_00176] */
    else if (
        Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]->u8AccessMode ==
        SDADC_SINGLE_READ)
    {
        /* [FUNC_SDADC_00170] [SWDSG_SDADC_00185] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_INV_ACCESS_MODE);
        result = E_NOT_OK;
    }
    else if (Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus != SDADC_CHANNEL_IDLE)
    {
        /* [FUNC_SDADC_00171] [SWDSG_SDADC_00186] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETUP_RESULT_BUFFER,
                              (uint8)SDADC_E_CHANNEL_STATUS);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Starts the carrier signal for the specified SDADC instance.
 * @details        This function starts the carrier signal for the specified SDADC instance. It
 * checks the driver state, validates the instance ID, and ensures that the instance is properly
 * configured for the current core. If the carrier signal is successfully started, the function
 * updates the instance's carrier signal status.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @return         Std_ReturnType  Returns E_OK if the carrier signal was successfully started,
 * otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x22.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00175
 */
/* [FUNC_SDADC_00175] [SWDSG_SDADC_00190] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCarrierSignal(const Sdadc_InstanceType InstanceId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StartCarrierSignalDetCheck(CoreId, InstanceId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    /* [FUNC_SDADC_00180] [SWDSG_SDADC_00195] */
    {
        Sdadc_LLD_SetCarrierSignal(Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId], 1U);
        /* [FUNC_SDADC_00181] [SWDSG_SDADC_00196] */
        Ret = E_OK;
    }
    /* [FUNC_SDADC_00182] [SWDSG_SDADC_00197] */
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCarrierSignalDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CARRIER_SIGNAL,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CARRIER_SIGNAL,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CARRIER_SIGNAL,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CARRIER_SIGNAL,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Stops the carrier signal for the specified SDADC instance.
 * @details        This function stops the carrier signal for the specified SDADC instance. It
 * checks the driver state, validates the instance ID, and ensures that the instance is properly
 * configured for the current core. If the carrier signal is successfully stopped, the function
 * updates the instance's carrier signal status.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @return         Std_ReturnType  Returns E_OK if the carrier signal was successfully stopped,
 * otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x23.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00183
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopCarrierSignal(const Sdadc_InstanceType InstanceId)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StopCarrierSignalDetCheck(CoreId, InstanceId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        Sdadc_LLD_SetCarrierSignal(Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId], 0U);
        Ret = E_OK;
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StopCarrierSignalDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId)
{
    Std_ReturnType result = E_OK;

    /* [FUNC_SDADC_00221] [SWDSG_SDADC_00236] */
    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        /* [FUNC_SDADC_00184] [SWDSG_SDADC_00199] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_CARRIER_SIGNAL,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_CARRIER_SIGNAL,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_CARRIER_SIGNAL,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_STOP_CARRIER_SIGNAL,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Enables notifications for the specified SDADC channel.
 * @details        This function enables notifications for the specified SDADC channel. It checks
 * the driver state, validates the instance ID, and ensures that the channel is properly configured
 * for the current core. If notifications are successfully enabled, the function updates the
 * channel's notification status.
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
 * @implements     SWS_SDADC_00191
 */
CDD_SDADC_TEXT_SECTION void Sdadc_EnableNotifications(const Sdadc_InstanceType InstanceId,
                                                      const Sdadc_ChannelType  ChannelId)
{
    uint32 CoreId = SDADC_GetCoreID();

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_EnableNotificationsDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pInstanceCfg = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
            {
                if (pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
                {
                    Sdadc_LLD_EnableChannelNotification(
                        pInstanceCfg->HWInstanceId,
                        pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop]->u8HwChannelId,
                        1U);
                }
            }
        }
        else
        {
            Sdadc_LLD_EnableChannelNotification(
                pInstanceCfg->HWInstanceId,
                pInstanceCfg->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                1U);
        }
    }
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_EnableNotificationsDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_ChannelPtrCheck(InstanceId, CoreId, ChannelId) == E_NOT_OK))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_ENABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Disables notifications for the specified SDADC channel.
 * @details        This function disables notifications for the specified SDADC channel. It checks
 * the driver state, validates the instance ID, and ensures that the channel is properly configured
 * for the current core. If notifications are successfully disabled, the function updates the
 * channel's notification status.
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
 * @implements     SWS_SDADC_00202
 */
CDD_SDADC_TEXT_SECTION void Sdadc_DisableNotifications(const Sdadc_InstanceType InstanceId,
                                                       const Sdadc_ChannelType  ChannelId)
{
    uint32 CoreId = SDADC_GetCoreID();

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_DisableNotificationsDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pInstanceCfg = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        if (ChannelId == SDADC_ALL_CHANNEL)
        {
            for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
            {
                if (pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
                {
                    Sdadc_LLD_EnableChannelNotification(
                        pInstanceCfg->HWInstanceId,
                        pInstanceCfg->paSdadcChannelCfg[Sdadc_ChLoop]->u8HwChannelId,
                        0U);
                }
            }
        }
        else
        {
            Sdadc_LLD_EnableChannelNotification(
                pInstanceCfg->HWInstanceId,
                pInstanceCfg->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                0U);
        }
    }
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_DisableNotificationsDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if ((ChannelId != SDADC_ALL_CHANNEL) &&
             (Sdadc_ChannelPtrCheck(InstanceId, CoreId, ChannelId) == E_NOT_OK))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_DISABLE_NOTIFICATIONS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Enables or disables the PWM negative trigger output for a specific SDADC instance.
 * @details        This function configures the PWM negative trigger output enable state for a given
 * SDADC instance. It checks the driver state, validates the instance ID, and sets the PWM negative
 * trigger output enable state.
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
 * @implements     SWS_SDADC_00213
 */
CDD_SDADC_TEXT_SECTION void Sdadc_SetPwmNegTriggerOutputEnable(const Sdadc_InstanceType InstanceId,
                                                               uint8                    u8Enable)
{
    uint32 CoreId = SDADC_GetCoreID();

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_SetPwmNegTriggerOutputEnableDetCheck(CoreId, InstanceId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pInstanceCfg = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        Sdadc_LLD_SetPwmNegTriggerOutputEnable(pInstanceCfg->HWInstanceId, u8Enable);
    }
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetPwmNegTriggerOutputEnableDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETPWMNEGTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETPWMNEGTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETPWMNEGTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETPWMNEGTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Enables or disables the TSign trigger output for a specific SDADC instance and
 * channel.
 * @details        This function configures the TSign trigger output enable state for a given SDADC
 * instance and channel. It checks the driver state, validates the instance and channel IDs, and
 * sets the TSign trigger output enable state.
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
 * @implements     SWS_SDADC_00220
 */
CDD_SDADC_TEXT_SECTION void Sdadc_SetTSignTriggerOutputEnable(const Sdadc_InstanceType InstanceId,
                                                              const Sdadc_ChannelType  ChannelId,
                                                              uint8                    u8Enable)
{
    uint32 CoreId = SDADC_GetCoreID();

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_SetTSignTriggerOutputEnableDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pInstanceCfg = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        Sdadc_LLD_SetTSignTriggerOutputEnable(pInstanceCfg->HWInstanceId,
                                              pInstanceCfg->paSdadcChannelCfg[ChannelId]->u8HwChannelId,
                                              u8Enable);
    }
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_SetTSignTriggerOutputEnableDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETTSIGNTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETTSIGNTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETTSIGNTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETTSIGNTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETTSIGNTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_ChannelPtrCheck(InstanceId, CoreId, ChannelId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_SETTSIGNTRIGGEROUTPUTENABLE,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

#if (SDADC_CALIBRATION_FEATURE == STD_ON)
/**
 * @brief          Starts the calibration process for a specific SDADC instance and channel.
 * @details        This function initiates the calibration process for a given SDADC instance and
 * channel. It checks the driver state, validates the instance and channel IDs, and starts the
 * calibration process. The function also sets the calibration status to running if the calibration
 * starts successfully.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel.
 * @param[in]      u8SingleEnd  Indicates if the calibration is for a single-ended channel (1:
 * Single-ended, 0: Differential).
 * @return         Std_ReturnType  Returns E_OK if the calibration starts successfully, otherwise
 * E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x27.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00229
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCalibration(const Sdadc_InstanceType InstanceId,
                                                             const Sdadc_ChannelType  ChannelId,
                                                             uint8                    u8SingleEnd)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StartCalibrationDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        const Sdadc_ChannelConfigType *pChannelCfg = pHwConfig->paSdadcChannelCfg[ChannelId];

        if ((Sdadc_MAStatus[InstanceId] == SDADC_MA_STARTED) &&
            (Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelStatus == SDADC_CHANNEL_IDLE))
        /* [FUNC_SDADC_00239] [SWDSG_SDADC_00254] */
        {
            ret = Sdadc_LLD_StartCalibration(pHwConfig, pChannelCfg, u8SingleEnd);
        }
        else
        {
            /* Noting to do */
        }
    }
    return ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartCalibrationDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CALIBRATION,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CALIBRATION,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CALIBRATION,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CALIBRATION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CALIBRATION,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_ChannelPtrCheck(InstanceId, CoreId, ChannelId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_CALIBRATION,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Retrieves the calibration status for a specific SDADC instance and channel.
 * @details        This function retrieves the calibration status for a given SDADC instance and
 * channel. It checks the driver state, validates the instance and channel IDs, and returns the
 * calibration status. If the calibration is done, it also retrieves the calibration data.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel.
 * @param[out]     pCalibInfo   Pointer to the structure where the calibration data will be stored.
 * @return         Sdadc_CalibrationStatusType  Returns the calibration status (e.g.,
 * SDADC_CALIBRATION_RUNNING, SDADC_CALIBRATION_DONE).
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x28.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements     SWS_SDADC_00240
 */
/* [FUNC_SDADC_00240] [SWDSG_SDADC_00258] */
CDD_SDADC_TEXT_SECTION Sdadc_CalibrationStatusType Sdadc_GetCalibrationStatus(
    const Sdadc_InstanceType    InstanceId,
    const Sdadc_ChannelType     ChannelId,
    Sdadc_ChannelCalibInfoType *pCalibInfo)
{
    uint32                      CoreId = SDADC_GetCoreID();
    Sdadc_CalibrationStatusType ret    = SDADC_CALIBRATION_ERROR;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_GetCalibrationStatusDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        const Sdadc_ChannelConfigType *pChannelCfg = pHwConfig->paSdadcChannelCfg[ChannelId];
        ret = Sdadc_LLD_GetCalibrationStatus(pHwConfig->HWInstanceId, pChannelCfg->u8HwChannelId);
        /* [FUNC_SDADC_00249] [SWDSG_SDADC_00267] */
        /* [FUNC_SDADC_00262] [SWDSG_SDADC_00280] */
        if (ret == SDADC_CALIBRATION_DONE)
        {
            Sdadc_LLD_GetCalibrationData(pHwConfig->HWInstanceId,
                                         pChannelCfg->u8HwChannelId,
                                         pCalibInfo);
        }
        else
        {
            /* Noting to do */
        }
    }
    return ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetCalibrationStatusDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_CALIBRATION_STATUS,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_CALIBRATION_STATUS,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if ((ChannelId >= SDADC_MAX_CHANNEL_CNT) && (ChannelId != SDADC_ALL_CHANNEL))
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_CALIBRATION_STATUS,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_CALIBRATION_STATUS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_CALIBRATION_STATUS,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_ChannelPtrCheck(InstanceId, CoreId, ChannelId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_CALIBRATION_STATUS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif
#endif

#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
/**
 * @brief          Retrieves the global timestamp information for the specified SDADC instance.
 * @details        This function retrieves the global timestamp information for the specified SDADC
 * instance.
 *
 * @param[in]      InstanceId       The ID of the SDADC instance.
 * @param[out]     pTimestampInfo   Pointer to the structure where the global timestamp information
 * will be stored.
 * @return         Std_ReturnType   Returns E_OK if the global timestamp was successfully
 * retrieved, otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x29.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements
 */
/* [FUNC_SDADC_00250] [SWDSG_SDADC_00268] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetGlobalTimestamp(
    const Sdadc_InstanceType       InstanceId,
    Sdadc_GlobalTimestampInfoType *pTimestampInfo)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_GetGlobalTimestampDetCheck(CoreId, InstanceId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        if (Sdadc_LLD_GetGlobalTimestamp(Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId],
                                         pTimestampInfo) == E_OK)
        {
            Ret = E_OK;
        }
        else
        {
            /* Noting to do */
        }
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
/* [FUNC_SDADC_00251] [SWDSG_SDADC_00269] */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetGlobalTimestampDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_GLOBAL_TIMESTAMP,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_GLOBAL_TIMESTAMP,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_GLOBAL_TIMESTAMP,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_GLOBAL_TIMESTAMP,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

#endif

/**
 * @brief          Starts the sign delay capture for the specified SDADC channel.
 * @details        This function starts the sign delay capture for the specified SDADC channel. It
 * checks the driver state, validates the instance ID, and ensures that the channel is properly
 * configured for the current core. If the sign delay capture is successfully started, the function
 * updates the channel's status and buffer pointers.
 *
 * @param[in]      InstanceId   The ID of the SDADC instance.
 * @param[in]      ChannelId    The ID of the SDADC channel to start the sign delay capture for.
 * @param[out]     ResultBuffer Pointer to the buffer where the sign delay capture results will be
 * stored.
 * @param[in]      BufferSize   The size of the buffer.
 * @return         Std_ReturnType  Returns E_OK if the sign delay capture was successfully started,
 * otherwise E_NOT_OK.
 *
 * @api
 *
 * @note           The function Autosar Service ID[hex]: 0x36.
 * @note           Synchronous.
 * @note           Non-reentrant function.
 * @implements
 */
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartSignDelayCapture(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    Sdadc_SDCapResultPtrType ResultBuffer,
    Sdadc_SizeType           BufferSize)
{
    uint32         CoreId = SDADC_GetCoreID();
    Std_ReturnType Ret    = E_NOT_OK;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    if (Sdadc_StartSignDelayCaptureDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        const Sdadc_HwConfigType *pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId];
        const Sdadc_ChannelConfigType *pChannelCfg = pHwConfig->paSdadcChannelCfg[ChannelId];

        /* [FUNC_SDADC_00293] [SWDSG_SDADC_00313] */
        /* [FUNC_SDADC_00307] [SWDSG_SDADC_00327] */
        SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_12();
        if (Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelStatus == SDADC_SD_CAP_ACTIVCE)
        /* [FUNC_SDADC_00294] [SWDSG_SDADC_00314] */
        {
            Sdadc_LLD_StopSignDelayCapture(pHwConfig, pChannelCfg->u8HwChannelId);
        }
        /* [FUNC_SDADC_00295] [SWDSG_SDADC_00315] */
        /* [FUNC_SDADC_00308] [SWDSG_SDADC_00328] */
        Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelStatus = SDADC_SD_CAP_ACTIVCE;
        /* [FUNC_SDADC_00296] [SWDSG_SDADC_00316] */
        Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelBufferPtr  = ResultBuffer;
        Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelBufferSize = BufferSize;
        /* [FUNC_SDADC_00297] [SWDSG_SDADC_00317] */
        Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelBufferCnt = 0;
        Sdadc_LLD_StartSignDelayCapture(pHwConfig, pChannelCfg->u8HwChannelId);
        /* [FUNC_SDADC_00298] [SWDSG_SDADC_00318] */
        SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_12();
        Ret = E_OK;
        /* [FUNC_SDADC_00299] [SWDSG_SDADC_00319] */
    }
    return Ret;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_StartSignDelayCaptureDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        /* [FUNC_SDADC_00287] [SWDSG_SDADC_00307] */
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SD_CAP,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SD_CAP,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SD_CAP,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    /* [FUNC_SDADC_00306] [SWDSG_SDADC_00326] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SD_CAP,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    /* [FUNC_SDADC_00305] [SWDSG_SDADC_00325] */
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SD_CAP,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
             NULL_PTR)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_START_SD_CAP,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

/**
 * @brief          Retrieves the status of the sign delay capture for the specified SDADC channel.
 * @details        This function retrieves the status of the sign delay capture for the specified
 * SDADC channel. It checks the driver state, validates the instance ID, and ensures that the channel
 * is properly configured for the current core. The function returns the status of the sign delay
 * capture, which can be one of the following:
 *                 - SDADC_SD_CAP_IDLE: The sign delay capture is idle and not performing any operation.
 *                 - SDADC_SD_CAP_ACTIVE: The sign delay capture is active and performing a capture.
 *                 - SDADC_SD_CAP_RESULT_READY: The sign delay capture has completed and the result
 * is ready to be read.
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
CDD_SDADC_TEXT_SECTION Sdadc_SignDelayCapStatusType Sdadc_GetSignDelayCapStatus(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Sdadc_SignDelayCapStatusType Status = SDADC_SD_CAP_IDLE;

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    uint32 CoreId = SDADC_GetCoreID();

    if (Sdadc_GetSignDelayCapStatusDetCheck(CoreId, InstanceId, ChannelId) != E_OK)
    {
        /* Nothing to do */
    }
    else
#endif
    {
        SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_18();
        Status = Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelStatus;
        if (Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelStatus ==
            SDADC_SD_CAP_RESULT_READY)
        {
            /* [FUNC_SDADC_00309] [SWDSG_SDADC_00329] */
            Sdadc_ChannelSDCAPData[InstanceId][ChannelId].Sdadc_ChannelStatus = SDADC_SD_CAP_IDLE;
        }
        SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_18();
    }
    return Status;
}

#if (SDADC_DEV_ERROR_DETECT == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_GetSignDelayCapStatusDetCheck(
    uint32                   CoreId,
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId)
{
    Std_ReturnType result = E_OK;

    if (Sdadc_DrvStatus[CoreId] != SDADC_INIT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_SD_CAP_STATUS,
                              (uint8)SDADC_E_UNINIT);
        result = E_NOT_OK;
    }
    else if (InstanceId >= SDADC_HW_INSTANCE_COUNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_SD_CAP_STATUS,
                              (uint8)SDADC_E_INV_INSTANCE);
        result = E_NOT_OK;
    }
    else if (ChannelId >= SDADC_MAX_CHANNEL_CNT)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_SD_CAP_STATUS,
                              (uint8)SDADC_E_PARAM_CHANNEL);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstancePtrCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_SD_CAP_STATUS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else if (Sdadc_InstanceCoreCheck(InstanceId, CoreId) == E_NOT_OK)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_SD_CAP_STATUS,
                              (uint8)SDADC_E_CORE_ID);
        result = E_NOT_OK;
    }
    else if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
             NULL_PTR)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_GET_SD_CAP_STATUS,
                              (uint8)SDADC_E_PARAM_POINTER);
        result = E_NOT_OK;
    }
    else
    {
        /* Noting to do */
    }

    return result;
}
#endif

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
CDD_SDADC_TEXT_SECTION void Sdadc_GetVersionInfo(Std_VersionInfoType *const versioninfo)
{
#if (SDADC_DEV_ERROR_DETECT == STD_ON)
    /* SWS_Adc_00458 */
    if (NULL_PTR == versioninfo)
    {
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              (uint8)0U,
                              (uint8)SDADC_SID_GET_VERSION_INFO,
                              (uint8)SDADC_E_PARAM_POINTER);
    }
    else
#endif /* SDADC_DEV_ERROR_DETECT == STD_ON */
    {
        /* [FUNC_SDADC_00252] [SWDSG_SDADC_00270] */
        (versioninfo)->vendorID         = (uint16)SDADC_VENDOR_ID;
        (versioninfo)->moduleID         = (uint16)SDADC_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)SDADC_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)SDADC_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)SDADC_SW_PATCH_VERSION;
    }
}
#endif

#if (SDADC_DEV_ERROR_DETECT == STD_ON)

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ChannelPtrCheck(const Sdadc_InstanceType InstanceId,
                                                            uint32                   CoreId,
                                                            uint8                    ChannelId)
{
    Std_ReturnType ret = E_NOT_OK;
    if (Sdadc_CfgPtr[CoreId] != NULL_PTR)
    {
        if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] !=
            NULL_PTR)
        {
            ret = E_OK;
        }
        else
        {
            /* Nothing to do */
        }
    }
    else
    {
        /* Nothing to do */
    }
    return ret;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_InstancePtrCheck(const Sdadc_InstanceType InstanceId,
                                                             uint32                   CoreId)
{
    Std_ReturnType ret = E_NOT_OK;
    if (Sdadc_CfgPtr[CoreId] != NULL_PTR)
    {
        if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId] != NULL_PTR)
        {
            ret = E_OK;
        }
        else
        {
            /* Nothing to do */
        }
    }
    else
    {
        /* Nothing to do */
    }
    return ret;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_InstanceCoreCheck(const Sdadc_InstanceType InstanceId,
                                                              uint32                   CoreId)
{
    Std_ReturnType ret = E_NOT_OK;
    if (Sdadc_CfgPtr[CoreId]->u16PartionCoreId == CoreId)
    {
        if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->CoreId == CoreId)
        {
            ret = E_OK;
        }
        else
        {
            /* Nothing to do */
        }
    }
    else
    {
        /* Nothing to do */
    }
    return ret;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadStreamResultBufferCheck(
    const Sdadc_InstanceType InstanceId,
    const Sdadc_ChannelType  ChannelId,
    Sdadc_ResultType *const  ResultBufferPtr)
{
    Std_ReturnType eRet   = E_OK;
    uint32         CoreId = SDADC_GetCoreID();

    if (ResultBufferPtr == NULL_PTR)
    {
        eRet = E_NOT_OK;
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_INVALID_BUFFER_POINTER);
    }
    else if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
             NULL_PTR)
    {
        eRet = E_NOT_OK;
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_PARAM_POINTER);
    }
    else if (
        ((Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]->u8AccessMode) !=
         SDADC_STREAM_LINEAR_BUFFER) &&
        (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]->u8AccessMode !=
         SDADC_CIRCULAR_BUFFER))
    {
        eRet = E_NOT_OK;
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_INVALID_BUFFER_CONFIG);
    }
    else if (
        (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]->u8AccessMode ==
         SDADC_CIRCULAR_BUFFER) &&
        (Sdadc_ChannelMData[InstanceId][ChannelId].Sdadc_ChannelBufferPtr == ResultBufferPtr))
    {
        eRet = E_NOT_OK;
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_STREAM_RESULTS,
                              (uint8)SDADC_E_INVALID_BUFFER_POINTER);
    }
    else
    {
        /* Noting to do */
    }

    return eRet;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_ReadResultBufferCheck(const Sdadc_InstanceType InstanceId,
                                                                  const Sdadc_ChannelType ChannelId,
                                                                  Sdadc_ResultType *const ResultPtr)
{
    Std_ReturnType eRet   = E_OK;
    uint32         CoreId = SDADC_GetCoreID();

    if (ResultPtr == NULL_PTR)
    {
        eRet = E_NOT_OK;
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_INVALID_BUFFER_POINTER);
    }
    else if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId] ==
             NULL_PTR)
    {
        eRet = E_NOT_OK;
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_PARAM_POINTER);
    }
    else if (
        ((Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]->u8AccessMode) !=
         SDADC_SINGLE_READ) &&
        (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[InstanceId]->paSdadcChannelCfg[ChannelId]->u8AccessMode !=
         SDADC_CIRCULAR_BUFFER))
    {
        eRet = E_NOT_OK;
        (void)Det_ReportError((uint16)SDADC_MODULE_ID,
                              SDADC_INSTANCE_ID,
                              (uint8)SDADC_SID_READ_RESULT,
                              (uint8)SDADC_E_INVALID_BUFFER_CONFIG);
    }
    else
    {
        /* Noting to do */
    }

    return eRet;
}
#endif

#define CDD_SDADC_STOP_SEC_CODE
#include "Sdadc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
