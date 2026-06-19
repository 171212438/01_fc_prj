/**
 *   @file    Adc_HsAdc.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - low level driver source file.
 *   @details This is the low level driver source file,mainly implemented for the HSADC
 *            hardware IP.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : HSADC
*   PLATFORM             : Flagchip FC7XXX
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
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_CfgDefines.h"
#include "Adc_HsAdc.h"
#include "Adc_Ipw.h"
#include "Adc_Hal.h"
#include "Adc_HsAdc_Reg.h"
#include "Adc_HsAdc_RegOps.h"
#include "Adc_Types.h"
#include "Mcal.h"
#include "SchM_Adc.h"

#if (ADC_DMA_SUPPORT == STD_ON)
#include "CDD_Dma.h"
#endif
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
#include "CDD_TrgSel.h"
#endif

#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
 * @name  HSADC default values
 * @brief HSADC default configuration parameters
 *
 * @{
 */
#define HSADC_DEFAULT_COMPARE_HIGH_THRESHOLD (0x000U)
#define HSADC_DEFAULT_COMPARE_LOW_THRESHOLD  (0x200U)
#define HSADC_DEFAULT_SC_CHANNEL             (0x3FU)
/** @}*/

/**
 * @name  HSADC internal channels
 * @brief HSADC internal channel definitions
 *
 * @{
 */
#define HSADC_INTERNAL_CHANNEL_VBG_BUFFER    (6U)
#define HSADC_INTERNAL_CHANNEL_V25           (7U)
#define HSADC_INTERNAL_CHANNEL_OFFSET_CAL    (27U)
#define HSADC_INTERNAL_CHANNEL_GAIN_CAL0     (28U)
#define HSADC_INTERNAL_CHANNEL_GAIN_CAL1     (29U)
/** @}*/

/**
 * @brief HSADC calibration stages
 */
typedef enum
{
    HSADC_CALIBRATION_UNINIT      = 0x0U,
    HSADC_CALIBRATION_CAPACITANCE = 0x1U,
    HSADC_CALIBRATION_OFFSET      = 0x2U,
    HSADC_CALIBRATION_GAIN0       = 0x3U,
    HSADC_CALIBRATION_GAIN1       = 0x4U,
    HSADC_CALIBRATION_SUCCESS     = 0x5U
} HsAdc_CalibrationStageType;

/**
 * @brief HSADC calibration intermediate data
 */
typedef struct
{
    Adc_ValueGroupType OffsetCal;
    Adc_ValueGroupType GainCal0;
    Adc_ValueGroupType GainCal1;
} HsAdc_CalibrationResultType;

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONST_32
#include "Adc_MemMap.h"
/* PRQA S 306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
 * object and an integer type.
 * Reason: The HSADC base address is a register address and it is essential to convert into a struct
 * pointer to access its members */
/**
 * @brief          Base address of HSADC hardware units
 */
ADC_DATA_SECTION static const uint32 s_aHsAdcBase[HSADC_MAX_HW_UNITS] = HSADC_BASE_ADDRS;
/* PRQA S 306 -- */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief          HSADC hardware trigger events
 */
ADC_DATA_SECTION static const HsAdc_TrgModeType s_aHsAdcHwTriggerEdge[3] = {
    HSADC_TRGMODE_RISING_EDGE,
    HSADC_TRGMODE_FALLING_EDGE,
    HSADC_TRGMODE_BOTH_EDGE
};
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#define ADC_STOP_SEC_CONST_32
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"
/**
 * @brief HSADC calibration intermediate data for each hardware unit
 */
ADC_DATA_SECTION static HsAdc_CalibrationResultType g_aHsAdcCalibrationResults[HSADC_MAX_HW_UNITS];
#define ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Adc_MemMap.h"
/**
 * @brief HSADC calibration stage for each hardware unit
 */
ADC_DATA_SECTION static HsAdc_CalibrationStageType g_aHsAdcCalibrationStage[HSADC_MAX_HW_UNITS] = {
    HSADC_CALIBRATION_UNINIT
};
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_HsAdc_ConfigurePrescaler(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg);
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */

#if (HSADC_INIT_CALIBRATION == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_HsAdc_CapCalibrate(const Adc_HwUnitType Unit);
#endif /* HSADC_INIT_CALIBRATION == STD_ON */

ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_PostInit(const Adc_HwUnitType               Unit,
                                                      const Adc_HwUnitConfigurationType *pUnitCfg,
                                                      const uint8                        CoreId);

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_HsAdc_DisableUnit(const Adc_HwUnitType Unit);
#endif /* ADC_DEINIT_API == STD_ON */

ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_SetConversionMode(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger);

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE boolean Adc_HsAdc_CheckConversionValuesInRange(
    const Adc_ChannelConfigurationType *pChannelCfg,
    Adc_ValueGroupType                  Value);
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_InitUnitGroups(const Adc_HwUnitType Unit,
                                                            const Adc_HwUnitConfigurationType *pUnitCfg,
                                                            const uint8 CoreId);

ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_StartHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger,
    const uint8                       CoreId);

ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_StopHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr);
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
/**
 * @brief      This function configures the prescaler for the HSADC instance
 *
 * @param[in]  Unit            The hardware Unit.
 * @param[in]  pUnitCfg        The pointer to the hardware configuration.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            If the prescaler has configured as expected.
 * @retval     E_NOT_OK        The prescaler was failed to configure because of timeout.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_HsAdc_ConfigurePrescaler(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg)
{
    Std_ReturnType    eRet       = E_NOT_OK;
    HsAdc_Type *const pHsAdc     = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint32            u32Timeout = ADC_TIMEOUT_COUNTER;
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_38();
    HSADC_HWA_SetClockGatingEnable(pHsAdc, TRUE);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_38();
    while ((HSADC_HWA_GetClockGatingAck(pHsAdc) != (boolean)TRUE) && (u32Timeout != 0U))
    {
        u32Timeout--;
    }
    if ((uint32)0UL == u32Timeout)
    {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
        {
            /* Report production error and return from function. */
            (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id, DEM_EVENT_STATUS_FAILED);
        }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
        eRet = E_NOT_OK;
    }
    else
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_39();
        HSADC_HWA_SetClockDivider(pHsAdc, (HsAdc_ClockDivideType)pUnitCfg->PreDiv);
        HSADC_HWA_SetClockGatingEnable(pHsAdc, FALSE);
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_39();
        u32Timeout = ADC_TIMEOUT_COUNTER;
        while ((HSADC_HWA_GetClockGatingAck(pHsAdc) == (boolean)TRUE) && (u32Timeout != 0U))
        {
            u32Timeout--;
        }
        if ((uint32)0UL == u32Timeout)
        {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
            {
                /* Report production error and return from function. */
                (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id,
                                         DEM_EVENT_STATUS_FAILED);
            }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
            eRet = E_NOT_OK;
        }
        else
        {
            eRet = E_OK;
        }
    }
    return eRet;
}
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */

#if (HSADC_INIT_CALIBRATION == STD_ON)
/**
 * @brief      Start HSADC capacitance calibration for a specific hardware unit
 *
 * @param[in]  Unit            The hardware unit to calibrate
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            If the capacitance calibration is started successfully.
 * @retval     E_NOT_OK        The capacitance calibration is failed to start because of timeout.
 */
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_HsAdc_CapCalibrate(const Adc_HwUnitType Unit)
{
    HsAdc_Type *const pHsAdc     = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint32            u32Timeout = ADC_TIMEOUT_COUNTER;
    Std_ReturnType    eRet       = E_OK;

    /* Enable average, average length is 32 */
    uint32 u32Cfg2 = HSADC_HWA_GetConfig2(pHsAdc) | HSADC_CFG2_SMP_SPARE_EN(TRUE) |
                     HSADC_CFG2_AVG_EN(TRUE) | HSADC_CFG2_AVG_LEN(HSADC_AVERAGE_LEN_32);
    HSADC_HWA_SetConfig2(pHsAdc, u32Cfg2);

    /* Enable the HSADC capacitance calibration */
    HSADC_HWA_SetCCal(pHsAdc, HSADC_CCAL_CCAL_EN(TRUE));

    /* Enable HSADC and then Start Calibration */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_40();
    HSADC_HWA_Enable(pHsAdc);
    /* Wait for Adc ready */
    while ((HSADC_HWA_GetHSADCReadyFlag(pHsAdc) == FALSE) && (u32Timeout != 0U))
    {
        u32Timeout--;
    }
    if ((uint32)0UL == u32Timeout)
    {
        eRet = E_NOT_OK;
    }
    else
    {
        HSADC_HWA_ClearHSADCReadyFlag(pHsAdc);
        HSADC_HWA_Start(pHsAdc);
        g_aHsAdcCalibrationStage[Unit] = HSADC_CALIBRATION_CAPACITANCE;
        eRet                           = E_OK;
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_40();

    return eRet;
}
#endif /* HSADC_INIT_CALIBRATION == STD_ON */

/**
 * @brief      HSADC post-initialization for a specific hardware unit
 *
 * @param[in]  Unit  The hardware unit to initialize
 * @param[in]  pUnitCfg        The pointer to the hardware configuration.
 * @param[in]  CoreId          The core ID of the caller.
 * @return     void
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_PostInit(const Adc_HwUnitType               Unit,
                                                      const Adc_HwUnitConfigurationType *pUnitCfg,
                                                      const uint8                        CoreId)
{
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint32            u32RegVal;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_41();
    /* Configuration for conversion mode, trigger mode and sequence mode */
    HSADC_HWA_SetConfig1(pHsAdc, pUnitCfg->u32AdcCfg1Register);

    /* Configuration for hardware average, extended channel and start up counter */
    u32RegVal = HSADC_HWA_GetConfig2(pHsAdc) & HSADC_CFG2_DIV_MASK;
    HSADC_HWA_SetConfig2(pHsAdc, (u32RegVal | pUnitCfg->u32AdcCfg2Register));

    /* Sample time duration configuration */
    HSADC_HWA_SetSampleTimeOpts(pHsAdc, pUnitCfg->u32AdcSmprRegister);
    /* Disable hardware compare feature */
    HSADC_HWA_SetCmpEnable(pHsAdc, FALSE);
    HSADC_HWA_SetCmpChannel(pHsAdc, HSADC_CMP_CHANNEL_ALL, 0U);

    /* Reset compare value registers */
    HSADC_HWA_SetCmpThreshold(pHsAdc,
                              HSADC_DEFAULT_COMPARE_LOW_THRESHOLD,
                              HSADC_DEFAULT_COMPARE_HIGH_THRESHOLD);

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pUnitCfg->bUseHwGroup == TRUE)
    {
        Adc_HsAdc_InitUnitGroups(Unit, pUnitCfg, CoreId);
        /* Start the Hardware Unit and wait for trigger */
        HSADC_HWA_Start(pHsAdc);
    }
#else
    (void)CoreId;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_41();
}

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief      This function disables the current adc unit.
 * @details    This function disables the current adc unit and checks if the hardware has
 *             responded to the command.
 *
 * @param[in]  Unit            The hardware Unit.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            If the adc module has disabled as expected.
 * @retval     E_NOT_OK        In case of timeout while waiting for adc unit to be disabled.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Adc_HsAdc_DisableUnit(const Adc_HwUnitType Unit)
{
    Std_ReturnType    eRet       = E_OK;
    HsAdc_Type *const pHsAdc     = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint32            u32Timeout = ADC_TIMEOUT_COUNTER;

    /* If the conversion is ongoing, disable the conversion first */
    if (HSADC_HWA_GetStart(pHsAdc) == (boolean)TRUE)
    {
        /* Stop conversion in Control register */
        HSADC_HWA_Stop(pHsAdc);
    }

    /* Wait the conversion to be stopped */
    if (Adc_HsAdc_WaitConversionStopped(Unit) == E_OK)
    {
        if (HSADC_HWA_GetEnable(pHsAdc) == (boolean)TRUE)
        {
            SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_42();
            /* Disable unit in Control register */
            HSADC_HWA_Disable(pHsAdc);
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_42();
            /* Wait until conversion is aborted */
            /* Because some channels in chain are not converted yet */
            while ((HSADC_HWA_GetEnable(pHsAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
            {
                /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be
                 * modified. Reason: The timeout value is intended to be modified in a function */
                u32Timeout--;
                /* PRQA S 1338 -- */
            }

            if ((uint32)0UL == u32Timeout)
            {
                eRet = E_NOT_OK;
            }
        }
    }
    else
    {
        eRet = E_NOT_OK;
    }

    return eRet;
}
#endif /* ADC_DEINIT_API == STD_ON */

/**
 * @brief      Set the conversion mode of the Adc instance
 * @details    This function configures the sequence mode, trigger source and trigger mode of
 *             the Adc instance.
 *
 * @param[in]  Unit          The hardware Unit.
 * @param[in]  pGroupPtr     The pointer to the group configuration.
 * @param[in]  eTrigger      The conversion trigger source.
 *
 * @return     void
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_SetConversionMode(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger)
{
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];

    /* Set Sequence Mode for HSADC*/
#if (HSADC_ERR_001_WORKAROUND == STD_OFF)
    if (pGroupPtr->bAdcGroupBackToBack == (boolean)TRUE)
    {
#endif /* HSADC_ERR_001_WORKAROUND == STD_OFF */
        HSADC_HWA_SetSequenceMode(pHsAdc, HSADC_SEQMODE_SINGLE);
#if (HSADC_ERR_001_WORKAROUND == STD_OFF)
    }
    else
    {
        HSADC_HWA_SetSequenceMode(pHsAdc, HSADC_SEQMODE_DISCONTINUOUS);
    }
#endif /* HSADC_ERR_001_WORKAROUND == STD_OFF */

    /* Set Trigger Mode for HSADC*/
    if ((eTrigger == ADC_TRIGG_SRC_SW)
#if (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT)
        && (pGroupPtr->bUseContinuousPeriod == (boolean)FALSE)
#endif /* STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
    )
    {
        HSADC_HWA_SetTriggerMode(pHsAdc, HSADC_TRGMODE_SW);
    }
#if (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT)
    else if (pGroupPtr->bUseContinuousPeriod == (boolean)TRUE)
    {
        HSADC_HWA_SetTriggerMode(pHsAdc, HSADC_TRGMODE_INTERNAL_PERIODIC);
    }
#endif /* STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
#if (ADC_HW_TRIGGER_API == STD_ON)
    else if (eTrigger == ADC_TRIGG_SRC_HW)
    {
        HSADC_HWA_SetTriggerMode(pHsAdc, s_aHsAdcHwTriggerEdge[pGroupPtr->eTriggerEdge]);
    }
#endif /* ADC_HW_TRIGGER_API == STD_ON */
    else
    {
        /* Noting for Misra */
    }
}

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
/**
 * @brief      This function configures the adc hardware groups.
 *
 * @param[in]  Unit            The hardware Unit.
 * @param[in]  pUnitCfg        The pointer to the hardware configuration.
 * @param[in]  CoreId          The core ID of the caller.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            Configuring hareware group successfully.
 * @retval     E_NOT_OK        Configuring hareware group fail.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_InitUnitGroups(const Adc_HwUnitType Unit,
                                                            const Adc_HwUnitConfigurationType *pUnitCfg,
                                                            const uint8 CoreId)
{
    HsAdc_Type *const                   pHsAdc         = (HsAdc_Type *)s_aHsAdcBase[Unit];
    const Adc_ChannelConfigurationType *pUnitChannel   = pUnitCfg->pChannels;
    uint8                               CurrentChannel = 0U;
    Adc_GroupType                       GroupIdx;
    Adc_GroupType                       Group;
    uint32                              u32ChnCfg;
    const Adc_GroupConfigurationType   *pGroupPtr;
    const Adc_GroupDefType             *pChannelAssignment;
    const Adc_ChannelConfigurationType *pChannel;
    uint8                               u8NumChannel;
    uint8                               u8GroupChannel;
    Adc_ChannelType                     ChannelIdx;

    for (GroupIdx = 0U; GroupIdx < pUnitCfg->HwGroupCount; GroupIdx++)
    {
        Group              = pUnitCfg->pGroupId[GroupIdx];
        pGroupPtr          = &Adc_Cfg_Ptr[CoreId]->pGroups[Group];
        pChannelAssignment = pGroupPtr->pAssignment;
        u8GroupChannel     = (uint8)pGroupPtr->AssignedChannelCount;

        HSADC_HWA_ConfigureSeqGroup(pHsAdc,
                                    GroupIdx,
                                    HSADC_SGCSR_SG_START(CurrentChannel) |
                                        HSADC_SGCSR_SG_END((uint32)(CurrentChannel + u8GroupChannel) +
                                                           HSADC_SKIP_CHANNELS - 1U) |
                                        HSADC_SGCSR_EOSG(1U));

#if (HSADC_ERR_001_WORKAROUND == STD_ON)
        /* Two channels are skipped for workaround of HSADC_ERR_001 */
        for (u8NumChannel = 0U; u8NumChannel < HSADC_SKIP_CHANNELS; u8NumChannel++)
        {
            HSADC_HWA_SetChannelConfig(pHsAdc,
                                       CurrentChannel,
                                       HSADC_SC_CHS(HSADC_INTERNAL_CHANNEL_V25));
            CurrentChannel++;
        }
#endif /* HSADC_ERR_001_WORKAROUND == STD_ON */

        for (u8NumChannel = 0U; u8NumChannel < u8GroupChannel; u8NumChannel++)
        {
            ChannelIdx = pChannelAssignment[u8NumChannel];
            pChannel   = &pUnitChannel[ChannelIdx];
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
             * Reason: The or operation of HSADC_SC_AIEN(FALSE) is to indication the disable of
             * interrupt */
            u32ChnCfg = HSADC_SC_SMPSEL(pChannel->SampleTimeOpt) | HSADC_SC_AIEN(FALSE) |
                        HSADC_SC_CHS(pChannel->ChId);
            /* PRQA S 2985 -- */
            HSADC_HWA_SetChannelConfig(pHsAdc, CurrentChannel, u32ChnCfg);
            CurrentChannel++;
        }
    }
}

/**
 * @brief          Starts the hardware group conversion.
 * @details        This function starts the hardware group conversion for the specified HSADC unit
 * and group.
 *
 * @param[in]      Unit         The hardware Unit.
 * @param[in]      pGroupPtr    The pointer to the group configuration.
 *
 * @return         void
 *
 * @pre            The ADC driver must be initialized.
 * @post           The hardware group conversion is stopped.
 *
 * @implements     Adc_HsAdc_StartHwGroupConversion_Activity
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_StartHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const Adc_TriggerSourceType       eTrigger,
    const uint8                       CoreId)
{
    HsAdc_Type *const pHsAdc    = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint8             HwGroupId = pGroupPtr->HwGroupId;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_43();
    HSADC_HWA_ClearEndOfSGFlag(pHsAdc, HwGroupId);
    if (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_INTERRUPT)
    {
        HSADC_HWA_SetEndOfSGIntEnable(pHsAdc, HwGroupId, TRUE);
    }
#if ((ADC_DMA_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
    else if (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_DMA)
    {
        HSADC_HWA_SetEndOfSGIntEnable(pHsAdc, HwGroupId, FALSE);
        /* If DMA is enabled for the group, configure DMA for the group */
        Adc_HsAdc_ConfigureDmaChannel(Unit, pGroupPtr, CoreId);
    }
#endif /* ADC_DMA_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
    else
    {
        HSADC_HWA_SetEndOfSGIntEnable(pHsAdc, HwGroupId, FALSE);
    }

    if (ADC_TRIGG_SRC_SW == eTrigger)
    {
#if (ADC_MULTICORE_SUPPORT == STD_ON)
        if (E_OK == Adc_GetSpinLock())
        {
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
            HSADC_HWA_GenerateSwTrigger(pHsAdc, pGroupPtr->u8SwTrigChn);
#if (ADC_MULTICORE_SUPPORT == STD_ON)
            Adc_ReleaseSpinLock();
        }
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_43();

#if ((ADC_DMA_SUPPORT != STD_ON) || (ADC_HWGROUP_DMA_SUPPORT != STD_ON))
    (void)CoreId;
#endif /* ADC_DMA_SUPPORT != STD_ON || ADC_HWGROUP_DMA_SUPPORT != STD_ON */
}

/**
 * @brief          Stops the hardware group conversion.
 * @details        This function stops the hardware group conversion for the specified HSADC unit
 *                 and group.
 *
 * @param[in]      Unit         The hardware Unit.
 * @param[in]      pGroupPtr    The pointer to the group configuration.
 *
 * @return         void
 *
 * @pre            The ADC driver must be initialized.
 * @post           The hardware group conversion is stopped.
 *
 * @implements     Adc_HsAdc_StopHwGroupConversion_Activity
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE void Adc_HsAdc_StopHwGroupConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr)
{
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_44();
    HSADC_HWA_SetEndOfSGIntEnable(pHsAdc, pGroupPtr->HwGroupId, FALSE);
    HSADC_HWA_ClearEndOfSGFlag(pHsAdc, pGroupPtr->HwGroupId);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_44();
}
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
 * @brief          Checks if conversion values are in the configured range.
 * @details        Return true if conversion values are in the configured range, otherwise false.
 *
 * @param[in]      pChannelCfg The pointer to the channel configuration.
 * @param[in]      Value       The adc conversion value.
 *
 * @return         boolean     Conversion value in range flag.
 * @retval         TRUE        if conversion values are in the configured range.
 * @retval         FALSE       if conversion values are not in the configured range.
 *
 * @pre            Driver must be initialized.
 *
 */
ADC_TEXT_SECTION LOCAL_INLINE boolean Adc_HsAdc_CheckConversionValuesInRange(
    const Adc_ChannelConfigurationType *pChannelCfg,
    Adc_ValueGroupType                  Value)
{
    boolean                    bValInRange = (boolean)FALSE;
    Adc_ChannelRangeSelectType eChRange;
    Adc_ValueGroupType         LowLimit;
    Adc_ValueGroupType         HighLimit;
#if (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT)
    Adc_ChannelType Shift = 0U;
#endif /* ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT */

    eChRange  = pChannelCfg->eChannelRange;
    LowLimit  = pChannelCfg->ChannelLowLimit;
    HighLimit = pChannelCfg->ChannelHighLimit;

#if (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT)
    if ((pChannelCfg->Res) > (Adc_ResolutionType)8U)
    {
        Shift = (16U - (pChannelCfg->Res));
    }
    /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified.
     * Reason: The left aligned value is modified to be right aligned for comparison. */
    Value = Value >> Shift;
    /* PRQA S 1338 -- */
#endif /* (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT) */

    switch (eChRange)
    {
        /* Complete range - independent from channel limit settings. */
        case ADC_RANGE_ALWAYS:
        {
            bValInRange = (boolean)TRUE;
            break;
        }
        /* Range between low limit and high limit - high limit value included. */
        case ADC_RANGE_BETWEEN:
        {
            if ((Value > LowLimit) && (Value <= HighLimit))
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range above high limit or below low limit - low limit value included. */
        case ADC_RANGE_NOT_BETWEEN:
        {
            if ((Value > HighLimit) || (Value <= LowLimit))
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range below high limit -high limit value included. */
        case ADC_RANGE_NOT_OVER_HIGH:
        {
            if (Value <= HighLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range above low limit. */
        case ADC_RANGE_NOT_UNDER_LOW:
        {
            if (Value > LowLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range above high limit. */
        case ADC_RANGE_OVER_HIGH:
        {
            if (Value > HighLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Range below low limit - low limit value included. */
        case ADC_RANGE_UNDER_LOW:
        {
            if (Value <= LowLimit)
            {
                bValInRange = (boolean)TRUE;
            }
            break;
        }
        /* Unexpected value */
        default:
        {
            /* This case shall never be entered */
            break;
        }
    }
    return (boolean)bValInRange;
}
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief          Initializes the HSADC hardware.
 * @details        Initializes the HSADC hardware as per configuration.
 *
 * @param[in]      Unit            The hardware Unit.
 * @param[in]      pUnitCfg        The pointer to the hardware configuration.
 * @param[in]      CoreId          The core ID of the caller.
 *
 * @return         Std_ReturnType  E_OK or E_NOT_OK.
 * @retval         E_OK            Configuring adc hareware successfully.
 * @retval         E_NOT_OK        Configuring adc hareware fail.
 *
 * @pre            Driver must be initialized.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_InitUnitHardware(const Adc_HwUnitType Unit,
                                                           const Adc_HwUnitConfigurationType *pUnitCfg,
                                                           const uint8 CoreId)
{
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
#if (HSADC_INIT_CALIBRATION == STD_OFF)
    uint32 u32Timeout = ADC_TIMEOUT_COUNTER;
#endif /* HSADC_INIT_CALIBRATION == STD_OFF */
    Std_ReturnType DemTest = E_OK;
    /* HSADC logical channel index */
    uint8 u8ChnIdx = 0U;

    /* The HSADC Unit should be in disabled state when calling initialization function, in case when
     * it is enabled (e.g, the HSADC is enabled in bootloader and the user forget to de-initialize
     * it before enter the app), we shall disable it first before initializing the registers. */
    if (Adc_HsAdc_DisableUnit(Unit) == E_OK)
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_45();
        /* Disable all HSADC interrupts and DMA requests */
        HSADC_HWA_SetInterruptEnable(pHsAdc, 0U);
        HSADC_HWA_SetConfig1(pHsAdc, 0U);
#if (ADC_SEQUENCE_GROUP_SUPPORT == STD_ON)
        for (u8ChnIdx = 0U; u8ChnIdx < HSADC_SGCSR_COUNT; u8ChnIdx++)
        {
            HSADC_HWA_ConfigureSeqGroup(pHsAdc, u8ChnIdx, 0U);
        }
#endif /* ADC_SEQUENCE_GROUP_SUPPORT == STD_ON */
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
        /* Set the function clock and reset HSADC hardware unit */
        HSADC_HWA_SetFClkSel(pHsAdc, (HsAdc_FunctionClockType)pUnitCfg->eClockSource);
#else
        /* Reset the HSADC hardware unit */
        HSADC_HWA_Reset(pHsAdc);
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
        /* Set the skipped channels */
        for (u8ChnIdx = 0U; u8ChnIdx < HSADC_SKIP_CHANNELS; u8ChnIdx++)
        {
            HSADC_HWA_SetChannelInput(pHsAdc, u8ChnIdx, HSADC_SC_CHS(HSADC_INTERNAL_CHANNEL_V25));
        }
        /* Set Startup Counter */
        HSADC_HWA_SetConfig2(pHsAdc, pUnitCfg->u32AdcCfg2Register & HSADC_CFG2_STCNT_MASK);

        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_45();

#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
        /* Configuration for the clock prescaler */
        if (HSADC_HWA_GetClockDivider(pHsAdc) != pUnitCfg->PreDiv)
        {
            DemTest = Adc_HsAdc_ConfigurePrescaler(Unit, pUnitCfg);
        }
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */
        if (DemTest == E_OK)
        {
#if (HSADC_INIT_CALIBRATION == STD_ON)
            DemTest = Adc_HsAdc_CapCalibrate(Unit);
            (void)CoreId;
#else
            HSADC_HWA_Enable(pHsAdc);
            /* Wait for Adc ready */
            while ((HSADC_HWA_GetHSADCReadyFlag(pHsAdc) == FALSE) && (u32Timeout != 0U))
            {
                u32Timeout--;
            }
            if ((uint32)0UL == u32Timeout)
            {
                DemTest = E_NOT_OK;
            }
            else
            {
                HSADC_HWA_ClearHSADCReadyFlag(pHsAdc);
            }
            Adc_HsAdc_PostInit(Unit, pUnitCfg, CoreId);
#endif /* HSADC_INIT_CALIBRATION == STD_ON */
        }
    }
    else
    {
        DemTest = E_NOT_OK;
    }
    return DemTest;
}

#if (HSADC_INIT_CALIBRATION == STD_ON)
/**
 * @brief          Get the calibration status of a specific hardware unit
 * @details        This function checks the calibration stage of a specific hardware unit and
 *                 impels the next calibration step if the previous step is completed.
 *
 * @param[in]      Unit            The hardware Unit.
 * @param[in]      pUnitCfg        The pointer to the hardware configuration.
 * @param[in]      CoreId          The core ID of the caller.
 *
 * @return         Std_ReturnType  E_OK or E_NOT_OK.
 * @retval         E_OK            The calibration is completed successfully.
 * @retval         E_NOT_OK        The calibration is still ongoing.
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_GetCalibrationStatus(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg,
    const uint8                        CoreId)
{
    Std_ReturnType    eRet   = E_NOT_OK;
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint8             u8ResultIdx;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_46();
    switch (g_aHsAdcCalibrationStage[Unit])
    {
        case HSADC_CALIBRATION_CAPACITANCE:
        {
            if (HSADC_HWA_GetEndOfSequenceFlag(pHsAdc) == TRUE)
            {
                /* The capacitance calibration is done */
                g_aHsAdcCalibrationStage[Unit] = HSADC_CALIBRATION_OFFSET;
                HSADC_HWA_ClearEndOfSequenceFlag(pHsAdc);
                /* Disable the HSADC capacitance calibration */
                HSADC_HWA_SetCCal(pHsAdc, HSADC_CCAL_CCAL_EN(FALSE));
                HSADC_HWA_SetSequenceLength(pHsAdc, 2U);
                HSADC_HWA_SetChannelInput(pHsAdc, 2U, HSADC_INTERNAL_CHANNEL_OFFSET_CAL);
                /* Starts the offset calibration */
                HSADC_HWA_Start(pHsAdc);
            }
            break;
        }
        case HSADC_CALIBRATION_OFFSET:
        {
            if (HSADC_HWA_GetEndOfSequenceFlag(pHsAdc) == TRUE)
            {
                /* Reads the offset calibration result */
                g_aHsAdcCalibrationResults[Unit].OffsetCal =
                    (Adc_ValueGroupType)HSADC_HWA_GetResultCal(pHsAdc);
                g_aHsAdcCalibrationStage[Unit] = HSADC_CALIBRATION_GAIN0;
                for (u8ResultIdx = 0U; u8ResultIdx < (HSADC_SKIP_CHANNELS + 1U); u8ResultIdx++)
                {
                    (void)HSADC_HWA_GetFIFOData(pHsAdc);
                }
                HSADC_HWA_ClearEndOfSequenceFlag(pHsAdc);
                HSADC_HWA_SetChannelInput(pHsAdc, 2U, HSADC_INTERNAL_CHANNEL_GAIN_CAL0);
                /* Starts the gain0 calibration */
                HSADC_HWA_Start(pHsAdc);
            }
            break;
        }
        case HSADC_CALIBRATION_GAIN0:
        {
            if (HSADC_HWA_GetEndOfSequenceFlag(pHsAdc) == TRUE)
            {
                /* Reads the gain0 calibration result */
                g_aHsAdcCalibrationResults[Unit].GainCal0 =
                    (Adc_ValueGroupType)HSADC_HWA_GetResultCal(pHsAdc);
                g_aHsAdcCalibrationStage[Unit] = HSADC_CALIBRATION_GAIN1;
                for (u8ResultIdx = 0U; u8ResultIdx < (HSADC_SKIP_CHANNELS + 1U); u8ResultIdx++)
                {
                    (void)HSADC_HWA_GetFIFOData(pHsAdc);
                }
                HSADC_HWA_ClearEndOfSequenceFlag(pHsAdc);
                HSADC_HWA_SetChannelInput(pHsAdc, 2U, HSADC_INTERNAL_CHANNEL_GAIN_CAL1);
                /* Starts the gain1 calibration */
                HSADC_HWA_Start(pHsAdc);
            }
            break;
        }
        case HSADC_CALIBRATION_GAIN1:
        {
            if (HSADC_HWA_GetEndOfSequenceFlag(pHsAdc) == TRUE)
            {
                sint32 s32GainCal0;
                sint32 s32GainCal1;
                sint32 s32GainFactor;
                /* Reads the gain1 calibration result */
                g_aHsAdcCalibrationResults[Unit].GainCal1 =
                    (Adc_ValueGroupType)HSADC_HWA_GetResultCal(pHsAdc);
                for (u8ResultIdx = 0U; u8ResultIdx < (HSADC_SKIP_CHANNELS + 1U); u8ResultIdx++)
                {
                    (void)HSADC_HWA_GetFIFOData(pHsAdc);
                }
                HSADC_HWA_ClearEndOfSequenceFlag(pHsAdc);
                /* Calculate the gain factor */
                s32GainCal0 = (sint32)((uint32)g_aHsAdcCalibrationResults[Unit].GainCal0 << 18U) >>
                              18U;
                s32GainCal1 = (sint32)((uint32)g_aHsAdcCalibrationResults[Unit].GainCal1 << 18U) >>
                              18U;
                s32GainFactor = (sint32)(3968U << 11U) / (s32GainCal1 - s32GainCal0);
                /* Write the offset and gain factor to register */
                HSADC_HWA_SetOGCOffset(pHsAdc, (uint32)g_aHsAdcCalibrationResults[Unit].OffsetCal);
                HSADC_HWA_SetOGCGain(pHsAdc, (uint32)s32GainFactor);
                g_aHsAdcCalibrationStage[Unit] = HSADC_CALIBRATION_SUCCESS;
                /* Do the post init according to the configuration */
                Adc_HsAdc_PostInit(Unit, pUnitCfg, CoreId);
                eRet = E_OK;
            }
            break;
        }
        case HSADC_CALIBRATION_SUCCESS:
        {
            eRet = E_OK;
            break;
        }
        default:
        {
            /* This shall never be reached */
            break;
        }
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_46();

    return eRet;
}
#endif /* HSADC_INIT_CALIBRATION == STD_ON */

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief          This function deinitializes the HSADC hardware.
 *
 * @param[in]      Unit      The hardware Unit.
 * @param[in]      pUnitCfg  The pointer to the hardware configuration.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_DeInitUnitHardware(const Adc_HwUnitType               Unit,
                                                   const Adc_HwUnitConfigurationType *pUnitCfg,
                                                   const uint8                        CoreId)
{
    HsAdc_Type *const pHsAdc   = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint8             u8ChnIdx = 0U;
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    Adc_GroupType GroupIdx;
    Adc_GroupType Group;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_DMA_SUPPORT == STD_ON)
    if (pUnitCfg->bUseDma == TRUE)
    {
        Dma_DisableHwRequest(pUnitCfg->eDmaInstance, pUnitCfg->u8DmaChannel);
    }
#endif /* ADC_DMA_SUPPORT == STD_ON */

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pUnitCfg->bUseHwGroup == TRUE)
    {
        /* Stop all hardware groups */
        for (GroupIdx = 0U; GroupIdx < pUnitCfg->HwGroupCount; GroupIdx++)
        {
            Group = pUnitCfg->pGroupId[GroupIdx];
            Adc_HsAdc_StopHwGroupConversion(Unit, &(Adc_Cfg_Ptr[CoreId]->pGroups[Group]));
        }
    }
#else
    (void)CoreId;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

    g_aHsAdcCalibrationStage[Unit] = HSADC_CALIBRATION_UNINIT;

    /* Disable the HSADC hardware unit */
    if (Adc_HsAdc_DisableUnit(Unit) == E_OK)
    {
        /* Enter critical section */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_47();
        /* Disable all HSADC interrupts and DMA requests */
        HSADC_HWA_SetInterruptEnable(pHsAdc, 0U);
        HSADC_HWA_SetConfig1(pHsAdc, 0U);
        for (u8ChnIdx = 0U; u8ChnIdx < HSADC_NUM_SC_REGISTER; u8ChnIdx++)
        {
            HSADC_HWA_SetChannelConfig(pHsAdc, u8ChnIdx, HSADC_SC_CHS(HSADC_DEFAULT_SC_CHANNEL));
        }
#if (ADC_SEQUENCE_GROUP_SUPPORT == STD_ON)
        for (u8ChnIdx = 0U; u8ChnIdx < HSADC_SGCSR_COUNT; u8ChnIdx++)
        {
            HSADC_HWA_ConfigureSeqGroup(pHsAdc, u8ChnIdx, 0U);
        }
#endif /* ADC_SEQUENCE_GROUP_SUPPORT == STD_ON */
        /* Reset HSADC hardware unit, it will reset all registers in the HSADC module */
        HSADC_HWA_Reset(pHsAdc);
        /* Exit critical section */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_47();
    }
    else
    {
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if ((uint32)STD_ON == Adc_E_TimeoutCfg.state)
        {
            /* Report production error and return from function. */
            (void)Dem_SetEventStatus((Dem_EventIdType)Adc_E_TimeoutCfg.id, DEM_EVENT_STATUS_FAILED);
        }
#endif /* (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
    }
}
#endif /* ADC_DEINIT_API == STD_ON */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON))
/* PRQA S 2889 ++ #Misra-C:2012 Rule-15.5 A function should have a single point of exit at the end.
   Reason: The return statement before the function end is used to bypass the function quickly. */
/**
 * @brief          This function starts the conversion on the specified hardware Unit.
 * @details        This function starts the conversion on the specified hardware Unit.
 *                 This function should be called with the HSADC Unit on standby (no HSADC
 *                 interruptions allowed because its code is not protected by critical regions) -
 *                 no conversions must be running.
 *
 * @param[in]      Unit        The hardware Unit.
 * @param[in]      pGroupPtr   The pointer to the group configuration.
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_StartGroupConversion(const Adc_HwUnitType              Unit,
                                                     const Adc_GroupConfigurationType *pGroupPtr,
                                                     const uint8                       CoreId)
{
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_HsAdc_StartHwGroupConversion(Unit, pGroupPtr, ADC_TRIGG_SRC_SW, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    {
        /* Update group configuration to registers and start conversion */
        Adc_HsAdc_ConfigurePartialConversion(Unit, pGroupPtr, CoreId, ADC_TRIGG_SRC_SW);
    }
}
/* PRQA S 2889 -- */
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief          This function performs starting a hardware trigger conversion.
 * @details        This function performs starting a hardware trigger conversion.
 *
 * @param[in]      Unit        The hardware Unit.
 * @param[in]      pGroupPtr   The pointer to the group configuration.
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_EnableHardwareTrigger(const Adc_HwUnitType              Unit,
                                                      const Adc_GroupConfigurationType *pGroupPtr,
                                                      const uint8                       CoreId)
{
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_HsAdc_StartHwGroupConversion(Unit, pGroupPtr, ADC_TRIGG_SRC_HW, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
    {
        /* Setting for HSADC hardware triggered conversion */
        Adc_HsAdc_ConfigurePartialConversion(Unit, pGroupPtr, CoreId, ADC_TRIGG_SRC_HW);
    }
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

/**
 * @brief          Configure channels of a group
 * @details        This function configure channels of a group
 *                 if number of channels in group excess maximum channels allowed for a conversion,
 *                 a part of channels of group (= max allowed channels) will be configured in start
 *                 conversion in the first time. the remaining channels of group will be seperated
 *                 into other parts which are configured and converted in group interrupt.
 *
 * @param[in]      Unit          The hardware Unit.
 * @param[in]      pGroupPtr     The pointer to the group configuration.
 * @param[in]      CoreId        The core ID of the caller.
 * @param[in]      eTrigger      Conversion trigger source.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_ConfigurePartialConversion(const Adc_HwUnitType Unit,
                                                           const Adc_GroupConfigurationType *pGroupPtr,
                                                           const uint8                 CoreId,
                                                           const Adc_TriggerSourceType eTrigger)
{
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
    Adc_ChannelType   ChannelIdx;
    uint8             u8SCRegister;
    uint8             u8NumChannel = (uint8)pGroupPtr->AssignedChannelCount;
    uint32            u32Timeout   = ADC_TIMEOUT_COUNTER;
    uint32            u32ChnCfg    = HSADC_SC_SMPSEL(0U) | HSADC_SC_AIEN(FALSE) |
                       HSADC_SC_CHS(HSADC_DEFAULT_SC_CHANNEL);
    const Adc_GroupDefType             *pChannelAssignment = pGroupPtr->pAssignment;
    const Adc_ChannelConfigurationType *pUnitChannel =
        Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId].pChannels;
    const Adc_ChannelConfigurationType *pChannel = NULL_PTR;

    /* Stop Adc instance for register configuration */
    if (HSADC_HWA_GetStart(pHsAdc) == (boolean)TRUE)
    {
        /* Stop conversion in Control register */
        HSADC_HWA_Stop(pHsAdc);
        /* Wait until HSADC module is stopped, it shall not report Dem events in interrupts */
        while ((HSADC_HWA_GetStop(pHsAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
        {
            u32Timeout--;
        }
    }

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_48();

    /* Disable all interrupts. */
    HSADC_HWA_SetInterruptEnable(pHsAdc, 0U);
    /* Clear all interrupt flags. */
    HSADC_HWA_ClearAllIntFlags(pHsAdc);

#if (ADC_SET_ADC_HARDWARE_AVERAGE_ONCE == STD_OFF)
    /* Select average samples */
    HSADC_HWA_SetAverageEnable(pHsAdc, pGroupPtr->bEnableHwAvg);
    HSADC_HWA_SetAverageNumber(pHsAdc, pGroupPtr->u32AvgSelect);
#endif /* ADC_SET_ADC_HARDWARE_AVERAGE_ONCE == STD_OFF */

    /* Set the conversion mode */
    Adc_HsAdc_SetConversionMode(Unit, pGroupPtr, eTrigger);

    /* Configure channels from current to (last channel - 1) */
    for (u8SCRegister = 0U; u8SCRegister < (u8NumChannel - 1U); u8SCRegister++)
    {
        /* Logical channel ID */
        ChannelIdx = pChannelAssignment[u8SCRegister];
        pChannel   = &pUnitChannel[ChannelIdx];

        /* Disable interrupt all channels not the last channel */
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
         * Reason: The or operation of HSADC_SC_AIEN(FALSE) is to indication the disable of interrupt */
        u32ChnCfg = HSADC_SC_SMPSEL(pChannel->SampleTimeOpt) | HSADC_SC_AIEN(FALSE) |
                    HSADC_SC_CHS(pChannel->ChId);
        /* PRQA S 2985 -- */
        HSADC_HWA_SetChannelConfig(pHsAdc, u8SCRegister + HSADC_SKIP_CHANNELS, u32ChnCfg);
    }

    /* Configure last channel */
    {
        /* Get channel ID */
        ChannelIdx = pChannelAssignment[u8SCRegister];
        pChannel   = &pUnitChannel[ChannelIdx];
        /* In case of group is configured with interrupt, the complete int bit of the last channel
         * must be enabled */
        if (ADC_TRANSFER_TYPE_POLLING == pGroupPtr->eTransferType)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
             * Reason: The or operation of HSADC_SC_AIEN(FALSE) is to indication the disable of
             * interrupt */
            u32ChnCfg = HSADC_SC_SMPSEL(pChannel->SampleTimeOpt) | HSADC_SC_AIEN(FALSE) |
                        HSADC_SC_CHS(pChannel->ChId);
            /* PRQA S 2985 -- */
        }
        else if (ADC_TRANSFER_TYPE_INTERRUPT == pGroupPtr->eTransferType)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
             * Reason: The or operation of HSADC_SC_AIEN(FALSE) is to indication the disable of
             * interrupt */
            u32ChnCfg = HSADC_SC_SMPSEL(pChannel->SampleTimeOpt) | HSADC_SC_AIEN(FALSE) |
                        HSADC_SC_CHS(pChannel->ChId);
            /* PRQA S 2985 -- */
            HSADC_HWA_SetFIFOWaterMark(pHsAdc, u8NumChannel + HSADC_SKIP_CHANNELS - 1U);
            HSADC_HWA_SetFIFOReadyIntEnable(pHsAdc, TRUE);
        }
#if (ADC_DMA_SUPPORT == STD_ON)
        else if (ADC_TRANSFER_TYPE_DMA == pGroupPtr->eTransferType)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
               Reason: The or operation of HSADC_SC_AIEN(FALSE) is to indication the disable of
               interrupt */
            u32ChnCfg = HSADC_SC_SMPSEL(pChannel->SampleTimeOpt) | HSADC_SC_AIEN(FALSE) |
                        HSADC_SC_CHS(pChannel->ChId);
            /* PRQA S 2985 -- */
            /* Enable DMA request */
            HSADC_HWA_SetFIFOWaterMark(pHsAdc, 0U);
            HSADC_HWA_SetDMAEnable(pHsAdc, TRUE);
        }
#endif
        else
        {
            /* Nothing for Misra */
        }
        /* Update register */
        HSADC_HWA_SetChannelConfig(pHsAdc, u8SCRegister + HSADC_SKIP_CHANNELS, u32ChnCfg);

#if (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT)
        if (pGroupPtr->bUseContinuousPeriod == TRUE)
        {
            HSADC_HWA_SetConfig3(pHsAdc, HSADC_CFG3_PTRGIV(pGroupPtr->u16ContinuousPeriod));
        }
        else
#endif /* STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
        {
            HSADC_HWA_SetConfig3(pHsAdc, 0U);
        }

        /* Set the group sequence length. */
        HSADC_HWA_SetSequenceLength(pHsAdc, (uint8)(u8NumChannel + HSADC_SKIP_CHANNELS - 1U));
    }

#if (ADC_DMA_SUPPORT == STD_ON)
    if (ADC_TRANSFER_TYPE_DMA == pGroupPtr->eTransferType)
    {
        /* Config the associated Dma channel */
        Adc_HsAdc_ConfigureDmaChannel(Unit, pGroupPtr, CoreId);
    }
#endif

    /* Start the HSADC conversion and wait for trigger */
    HSADC_HWA_Start(pHsAdc);
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_48();
}

#if (ADC_DMA_SUPPORT == STD_ON)
/**
 * @brief          This function configures the associated DMA channel for the HSADC instance
 *
 * @param[in]      Unit           The hardware Unit.
 * @param[in]      pGroupPtr      The pointer to the group configuration.
 * @param[in]      CoreId         The core ID of the caller.
 * @param[in]      u8NumChannel   The used Adc channels
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_ConfigureDmaChannel(const Adc_HwUnitType              Unit,
                                                    const Adc_GroupConfigurationType *pGroupPtr,
                                                    const uint8                       CoreId)
{
    const HsAdc_Type *const            pHsAdc   = (HsAdc_Type *)s_aHsAdcBase[Unit];
    const Adc_HwUnitConfigurationType *pUnitCfg = &(Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId]);
    const Adc_GroupType                GroupId  = pGroupPtr->AdcGroupId;
    Dma_InstanceType                   DmaInstance  = pUnitCfg->eDmaInstance;
    uint8                              DmaChannel   = pUnitCfg->u8DmaChannel;
    uint8                              u8NumChannel = (uint8)pGroupPtr->AssignedChannelCount;
    Dma_ChannelType                    DmaChnConfig;

    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_49();

    /* PRQA S 306, 303, 3678, 488 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed
     *                                between a pointer to object and an integer type.
     *                               #Misra-C:2012 Rule-18.4 Performing pointer arithmetic.
     *                               #Misra-C:2012 Rule-8.13 A pointer should point to a const-
     *                                qualified type whenever possible.
     * Reason: The pointer of the buffer should be converted to the source and destination address
     * for DMA. The start address of the Result pointer is indicated by the start address of the
     * result buffer and the result index, and thus the pointer arithmetic is necessary. */
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
    if (pGroupPtr->bHwGroup == TRUE)
    {
        /* In sequence group mode, HSADC conversion results are in HSADC_RESULTn registers */
        DmaChnConfig.u32DmaSADDR = (uint32) & (pHsAdc->RESULT[pGroupPtr->ChannelStartIdx]);
        /* The source address will increment by data size (4 bytes) */
        DmaChnConfig.s16SrcDataOffset = 4;
        /* The increment of destination will be the 4 times of samples */
        DmaChnConfig.s16DestDataOffset = (sint16)(4 * pGroupPtr->NumSamples);
        /* The Dma engine will transfer all elements with one trigger signal */
        DmaChnConfig.u32DmaNBYTES = (uint32)(4U * u8NumChannel);
        /* The total channels (elements) to be transfered */
        DmaChnConfig.u16DmaOuterLoopCounter = 1U;
        /* One inner loop will transfer all Adc converted data */
        DmaChnConfig.s32DmaILOFF = 0U;
        /* Do not enable inner loop offset for source address */
        DmaChnConfig.bDmaSILOE = (boolean)FALSE;
        /* Enable inner loop offset for destination address to apply the destination address increment */
        DmaChnConfig.bDmaDILOE = (boolean)FALSE;
        /* In hardware trigger or continuous mode with channel number less than SC channels and
         * access mode is ADC_ACCESS_MODE_SINGLE, the DMA does not need to be reconfigured */
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            (
#if (ADC_HW_TRIGGER_API == STD_ON)
                (pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_HW) ||
#endif /* ADC_HW_TRIGGER_API == STD_ON */
                (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS)))
        {
            /* The Dma do not need to be reconfigured */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)FALSE;
            /* Reset the source address to initial address after finished */
            DmaChnConfig.s32DmaSLAST = -(4 * (sint32)u8NumChannel);
            /* The detinatination address will be reset to the initial address */
            DmaChnConfig.s32DmaDLAST = -(4 * (sint32)pGroupPtr->NumSamples * (sint32)u8NumChannel);
        }
        else
        {
            /* The Dma needs to be reconfigured after conversion completed */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)TRUE;
            /* Since the DMA will be re-configured, no need to reset source address */
            DmaChnConfig.s32DmaSLAST = 0;
            /* The detinatination address will be re-configured */
            DmaChnConfig.s32DmaDLAST = 0;
        }
    }
    else
#endif /* (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON) */
    {
#if (HSADC_ERR_001_WORKAROUND == STD_OFF)
        /* In other modes, HSADC conversion results are in HSADC_FIFO register */
        DmaChnConfig.u32DmaSADDR = (uint32) & (pHsAdc->FIFO_DATA);
        /* The source address will not increment */
        DmaChnConfig.s16SrcDataOffset = 0;
        /* The increment of destination will be set by inner loop offset */
        DmaChnConfig.s16DestDataOffset = 0;
        /* The Dma engine will only transfer one element with one trigger signal */
        DmaChnConfig.u32DmaNBYTES = 4U;
        /* The total channels (elements) to be transfered */
        DmaChnConfig.u16DmaOuterLoopCounter = u8NumChannel + HSADC_SKIP_CHANNELS;
        /* The increment of destination address is made up of data size and stream number samples */
        DmaChnConfig.s32DmaILOFF = 4 * (sint32)pGroupPtr->NumSamples;
        /* Do not enable inner loop offset for source address */
        DmaChnConfig.bDmaSILOE = (boolean)FALSE;
        /* Enable inner loop offset for destination address to apply the destination address increment */
        DmaChnConfig.bDmaDILOE = (boolean)TRUE;
        /* In hardware trigger or continuous mode with channel number less than SC channels and
         * access mode is ADC_ACCESS_MODE_SINGLE, the DMA does not need to be reconfigured */
#if (ADC_HW_TRIGGER_API == STD_ON)
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            ((pGroupPtr->eTriggerSource == ADC_TRIGG_SRC_HW) ||
             (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS)))
#else
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_SINGLE) &&
            (pGroupPtr->eMode == ADC_CONV_MODE_CONTINUOUS))
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        {
            /* The Dma do not need to be reconfigured */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)FALSE;
            /* Since the source increment is 0, there is no need to adjust the saddr */
            DmaChnConfig.s32DmaSLAST = 0;
            /* The detinatination address will be reset to the initial address */
            DmaChnConfig.s32DmaDLAST = -(4 * (sint32)pGroupPtr->NumSamples *
                                         (sint32)(u8NumChannel + HSADC_SKIP_CHANNELS - 1));
        }
        else
        {
            /* The Dma needs to be reconfigured after conversion completed */
            DmaChnConfig.bDmaAutoStopEnable = (boolean)TRUE;
            /* Since the DMA will be re-configured, no need to reset source address */
            DmaChnConfig.s32DmaSLAST = 0;
            /* The detinatination address will be re-configured */
            DmaChnConfig.s32DmaDLAST = 0;
        }
#endif /* HSADC_ERR_001_WORKAROUND == STD_OFF */
    }
    /* The address of the result buffer */
    DmaChnConfig.u32DmaDADDR = (uint32)(Adc_aGroupStatus[GroupId].pResultsBuffer +
                                        Adc_aGroupStatus[GroupId].ResultIndex);
    /* PRQA S 306, 303, 3678, 488 -- */
    /* Do not use circular buffer for source buffer */
    DmaChnConfig.bDmaSrcCircularBufferEn = (boolean)FALSE;
    /* The circular buffer size */
    DmaChnConfig.u32DmaSrcCircBufferSize = 0U;
    /* Do not use circular buffer for destination buffer */
    DmaChnConfig.bDmaDestCircularBufferEn = (boolean)FALSE;
    /* The circular buffer size */
    DmaChnConfig.u32DmaDestCircBufferSize = 0U;
    /* The HSADC_RESULTn registers can only be accessed by 4 byte aligned read */
    DmaChnConfig.eDmaSSIZE = DMA_TRAN_SIZE_4B;
    /* Since the source buffer is 4 byte size, the destination buffer has to be 4 byte size */
    DmaChnConfig.eDmaDSIZE = DMA_TRAN_SIZE_4B;

    /* Exit critical section */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_49();
    if (E_OK == Dma_ConfigChannel(DmaInstance, DmaChannel, &DmaChnConfig))
    {
        Dma_EnableHwRequest(DmaInstance, DmaChannel);
    }
}
#endif /* ADC_DMA_SUPPORT == STD_ON */

/**
 * @brief          This function stops the current conversion of a group.
 * @details        This function stops the current conversion of a group.
 *
 * @note           This function should be executed in critical sections.
 *
 * @param[in]      Unit      The hardware Unit.
 * @param[in]      pGroupPtr The pointer to the group configuration.
 * @param[in]      CoreId    The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_StopGroupConversion(const Adc_HwUnitType              Unit,
                                                    const Adc_GroupConfigurationType *pGroupPtr,
                                                    const uint8                       CoreId)
{
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
#if (ADC_DMA_SUPPORT == STD_ON)
    const Adc_HwUnitConfigurationType *pUnitCfg = &(Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId]);

    if (ADC_TRANSFER_TYPE_DMA == pGroupPtr->eTransferType)
    {
        /* Disable DMA channel request when stop conversion */
        Dma_DisableHwRequest(pUnitCfg->eDmaInstance, pUnitCfg->u8DmaChannel);
    }
#endif /* ADC_DMA_SUPPORT == STD_ON */

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_HsAdc_StopHwGroupConversion(Unit, pGroupPtr);
    }
    else
#endif
    {
        if (HSADC_HWA_GetStart(pHsAdc) == (boolean)TRUE)
        {
            /* Stop conversion in Control register */
            HSADC_HWA_Stop(pHsAdc);
            /* Empty FIFO by reading ADC_FIFO_DATA register */
            Adc_HsAdc_DropConvResults(Unit, ADC_RESULT_COUNT);
        }
        HSADC_HWA_SetInterruptEnable(pHsAdc, 0U);
    }

#if (ADC_DMA_SUPPORT != STD_ON)
    (void)CoreId;
#endif /* ADC_DMA_SUPPORT != STD_ON */
}

/**
 * @brief      This function waits the current conversion to stop.
 * @details    This function waits the current conversion to stop.
 *
 * @note       This function should be executed after Adc_HsAdc_StopGroupConversion called.
 *
 * @param[in]  Unit            The hardware Unit.
 *
 * @return     Std_ReturnType  E_OK or E_NOT_OK.
 * @retval     E_OK            If the conversion has stopped as expected.
 * @retval     E_NOT_OK        In case of timeout while waiting for stopping ongoing conversion.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_WaitConversionStopped(const Adc_HwUnitType Unit)
{
    HsAdc_Type *const pHsAdc     = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint32            u32Timeout = ADC_TIMEOUT_COUNTER;
    /* Variable for checking timeout status */
    Std_ReturnType eRet = E_OK;

    if (HSADC_HWA_GetStart(pHsAdc) == (boolean)TRUE)
    {
        /* Wait until HSADC module is stopped */
        while ((HSADC_HWA_GetStop(pHsAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
        {
            u32Timeout--;
        }

        if ((uint32)0UL == u32Timeout)
        {
            eRet = E_NOT_OK;
        }
    }

    return eRet;
}

/**
 * @brief          Drop the unused data of the HSADC Unit
 *
 * @param[in]      Unit          The hardware Unit.
 * @param[in]      u8NumReg      The number of registers to clear flag.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_DropConvResults(const Adc_HwUnitType Unit, const uint8 u8NumReg)
{
    HsAdc_Type *const pHsAdc     = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint32            u32Timeout = ADC_TIMEOUT_COUNTER;

    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_50();
    while ((HSADC_HWA_GetFIFOEmptyFlag(pHsAdc) != TRUE) && (u32Timeout != 0))
    {
        (void)HSADC_HWA_GetFIFOData(pHsAdc);
        u32Timeout--;
    }
    HSADC_HWA_ClearEndOfSequenceFlag(pHsAdc);
    /* Exit critical section */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_50();
    (void)u8NumReg;
}

/**
 * @brief          This function restart conversion
 * @details        This function restart conversion in case of streaming access mode is enabled
 *
 * @param[in]      Unit        The hardware Unit.
 * @param[in]      pGroupPtr   The pointer to the group configuration.
 * @param[in]      CoreId      The core ID of the caller.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_HsAdc_RestartContinuousConversion(const Adc_HwUnitType Unit,
                                                            const Adc_GroupConfigurationType *pGroupPtr,
                                                            const uint8 CoreId)
{
    HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        Adc_HsAdc_StartHwGroupConversion(Unit, pGroupPtr, ADC_TRIGG_SRC_SW, CoreId);
    }
    else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
       /* No need to re-configure channels if they are not changed */
#if (ADC_DMA_SUPPORT == STD_ON)
        if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_STREAMING) &&
            (pGroupPtr->eTransferType == ADC_TRANSFER_TYPE_DMA))
    {
        Adc_HsAdc_ConfigureDmaChannel(Unit, pGroupPtr, CoreId);
    }
    else
#endif /* ADC_DMA_SUPPORT == STD_ON */
    {
        /* Nothing for Misra */
    }

    HSADC_HWA_Start(pHsAdc);
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_OFF) && (ADC_DMA_SUPPORT == STD_OFF))
    (void)CoreId;
#endif
}

#if ((defined(HSADC_UNIT_0_ISR_USED)) || (defined(HSADC_UNIT_1_ISR_USED)) || \
     (defined(HSADC_UNIT_2_ISR_USED)) || (defined(HSADC_UNIT_3_ISR_USED)))
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
/**
 * @brief       This function check hardware group status
 *
 * @param[in]   Unit            The hardware Unit.
 * @param[in]   HwGroupId       The hardware group id.
 *
 * @return      Std_ReturnType  E_OK or E_NOT_OK.
 * @retval      E_OK            The flag of hardware group is 1.
 * @retval      E_NOT_OK        The flag of hardware group is 0.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckHwGroupStatus(const Adc_HwUnitType Unit,
                                                             const uint8          HwGroupId)
{
    const HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
    Std_ReturnType          eRet   = E_NOT_OK;
    if (HSADC_HWA_GetEndOfSGFlag(pHsAdc, HwGroupId) == TRUE)
    {
        eRet = E_OK;
    }
    return eRet;
}
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON)
/**
 * @brief      This function checks whether the conversion sequence is completed
 * @details    This function checks whether the conversion sequence is completed
 *
 * @param[in]  Unit      The hardware unit.
 * @param[in]  Group     The group id.
 * @param[in]  CoreId    The core id.
 *
 * @return     boolean   TRUE or FALSE
 * @retval     TRUE      the conversion is completed
 * @retval     FALSE     the conversion is not completed
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckSequenceStatus(const Adc_HwUnitType Unit,
                                                              const Adc_GroupType  Group,
                                                              const uint8          CoreId)
{
    const HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
    Std_ReturnType          eRet   = E_NOT_OK;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_51();
    if (HSADC_HWA_GetFIFOReadyFlag(pHsAdc) == (boolean)TRUE)
    {
        eRet = E_OK;
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_51();
    (void)Group;
    (void)CoreId;
    return eRet;
}
#endif /* ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON */
#endif /* (defined(HSADC_UNIT_0_ISR_USED)) || (defined(HSADC_UNIT_1_ISR_USED)) ... */

/**
 * @brief      This function checks whether the conversion sequence is completed without interrupt
 * @details    This function checks whether the conversion sequence is completed without interrupt
 *
 * @param[in]  Unit             The hardware unit.
 * @param[in]  pGroupPtr        The pointer to the group configuration.
 *
 * @return     Std_ReturnType   E_OK or E_NOT_OK.
 * @retval     E_OK             The flag of hardware group is 1.
 * @retval     E_NOT_OK         The flag of hardware group is 0.
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckSequenceStatusWoInterrupt(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr)
{
    const HsAdc_Type *const pHsAdc = (HsAdc_Type *)s_aHsAdcBase[Unit];
    Std_ReturnType          eRet   = E_OK;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_52();
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == TRUE)
    {
        if (HSADC_HWA_GetEndOfSGFlag(pHsAdc, pGroupPtr->HwGroupId) == (boolean)FALSE)
        {
            eRet = E_NOT_OK;
        }
    }
    else
#else
    (void)pGroupPtr;
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */
        if (HSADC_HWA_GetFIFOReadyFlag(pHsAdc) == (boolean)FALSE)
        {
            eRet = E_NOT_OK;
        }
        else
        {
            /* Nothing for Misra  */
        }

    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_52();
    return eRet;
}

/**
 * @brief       This function gets the results of the conversion sequence
 * @details     This function gets the results of the conversion sequence
 *
 * @param[in]   Unit             The hardware Unit.
 * @param[in]   pGroupPtr        The pointer to the group configuration.
 * @param[in]   CoreId           The core ID of the caller.
 * @param[out]  pDataPtr         The pointer to the buffer which will be filled by the conversion
 * results.
 *
 * @return      Std_ReturnType   E_OK or E_NOT_OK.
 * @retval      E_OK             If the result buffer is filled with conversion result
 * @retval      E_NOT_OK         If the result buffer is failed to be filled with conversion result
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_GetSequenceResults(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const uint8                       CoreId,
    Adc_ValueGroupType               *pDataPtr)
{
    HsAdc_Type *const       pHsAdc       = (HsAdc_Type *)s_aHsAdcBase[Unit];
    Std_ReturnType          eRet         = E_OK;
    Adc_StreamNumSampleType GroupSamples = pGroupPtr->NumSamples;
    Adc_ChannelIndexType    SequenceChannelCnt;
    Adc_ChannelIndexType    ChannelIndex;
    uint32                  u32AdcDataValue;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    const Adc_ChannelConfigurationType *pChannel;
    Adc_ChannelType                     HwChannel;
    Adc_GroupType                       GroupId = pGroupPtr->AdcGroupId;
    boolean                             bFlag   = (boolean)FALSE;
#endif
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_53();
    ChannelIndex = 0U;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    HwChannel = pGroupPtr->pAssignment[ChannelIndex];
    pChannel  = &(Adc_Cfg_Ptr[CoreId]->pAdcs[pGroupPtr->UnitId].pChannels[HwChannel]);
    /* SWS_Adc_00451 */
    if ((boolean)TRUE == pChannel->bAdcChannelLimitcheck)
    {
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
        if (pGroupPtr->bHwGroup == TRUE)
        {
            /* PRQA S 4461, 2985 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be
             * assigned to an object with a narrower essential type or of a different essential
             * type category. Reason: The ChannelIndex is gurateened by the SequenceChannelCnt
             * to not exceed the number of channels of the HSADC hardware channel and thus will
             * not exceed the narrower type */
            u32AdcDataValue =
                HSADC_HWA_GetChannelData(pHsAdc, (uint8)(pGroupPtr->ChannelStartIdx + ChannelIndex));
            /* PRQA S 4461, 2985 -- */
            HSADC_HWA_ClearEndOfSGFlag(pHsAdc, pGroupPtr->HwGroupId);
        }
        else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON*/
        {
            /* Read the dummy data*/
            while (ChannelIndex < HSADC_SKIP_CHANNELS)
            {
                (void)HSADC_HWA_GetFIFOData(pHsAdc);
                ChannelIndex++;
            }
            ChannelIndex    = 0U;
            u32AdcDataValue = HSADC_HWA_GetFIFOData(pHsAdc);
        }

        bFlag = (boolean)Adc_HsAdc_CheckConversionValuesInRange(pChannel, (uint16)u32AdcDataValue);
        /* Limit check succeeded */
        if ((boolean)TRUE == bFlag)
        {
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
             * not be applied to an expression of pointer type.
             * Reason: The result buffer is a pointer provided by the user and thus the
             * pointer arithmetic cannot be avoided to access its data */
            *(pDataPtr + (ChannelIndex * GroupSamples)) = (uint16)(u32AdcDataValue);
            /* PRQA S 488 -- */
        }
        /* Limit check failed */
        else
        {
            Adc_aGroupStatus[GroupId].eAlreadyConverted = ADC_ALREADY_CONVERTED;

            eRet = E_NOT_OK;
        }
    }
    else
#endif
    {
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
        if (pGroupPtr->bHwGroup == TRUE)
        {
            SequenceChannelCnt = pGroupPtr->AssignedChannelCount;
            while (ChannelIndex < SequenceChannelCnt)
            {
                /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not
                 * be assigned to an object with a narrower essential type or of a different
                 * essential type category. Reason: The ChannelIndex is gurateened by the
                 * SequenceChannelCnt to not exceed the number of channels of the HSADC hardware
                 * channel and thus will not exceed the narrower type */
                u32AdcDataValue = HSADC_HWA_GetChannelData(
                    pHsAdc,
                    (uint8)(pGroupPtr->ChannelStartIdx + ChannelIndex));
                /* PRQA S 4461 -- */

                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
                 * not be applied to an expression of pointer type. Reason: The result buffer is
                 * a pointer provided by the user and thus the pointer arithmetic cannot be
                 * avoided to access its data */
                *(pDataPtr + (ChannelIndex * GroupSamples)) = (uint16)(u32AdcDataValue);
                /* PRQA S 488 -- */
                ChannelIndex++;
            }
            HSADC_HWA_ClearEndOfSGFlag(pHsAdc, pGroupPtr->HwGroupId);
        }
        else
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON*/
        {
            SequenceChannelCnt = pGroupPtr->AssignedChannelCount;
            /* Read the dummy data*/
            while (ChannelIndex < HSADC_SKIP_CHANNELS)
            {
                (void)HSADC_HWA_GetFIFOData(pHsAdc);
                ChannelIndex++;
            }
            ChannelIndex = 0U;
            while (ChannelIndex < SequenceChannelCnt)
            {
                u32AdcDataValue = HSADC_HWA_GetFIFOData(pHsAdc);

                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
                 * not be applied to an expression of pointer type. Reason: The result buffer is
                 * a pointer provided by the user and thus the pointer arithmetic cannot be
                 * avoided to access its data */
                *(pDataPtr + (ChannelIndex * GroupSamples)) = (uint16)(u32AdcDataValue);
                /* PRQA S 488 -- */
                ChannelIndex++;
            }
        }
    }
    /* Handle unused parameter */
    (void)CoreId;
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_53();
    return eRet;
}

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
 * @brief      This function checks whether Adc is in overrun state
 * @details    This function checks whether Adc is in overrun state, if so, restart the conversion
 *             and drop the results to prevent data inconsistency
 *
 * @param[in]  Unit             The hardware Unit.
 * @param[in]  pGroupPtr        The pointer to the group configuration.
 *
 * @return     Std_ReturnType   E_OK or E_NOT_OK.
 * @retval     E_OK             No overrun is occured
 * @retval     E_NOT_OK         Overrun is occured
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckOverrun(const Adc_HwUnitType              Unit,
                                                       const Adc_GroupConfigurationType *pGroupPtr)
{
    HsAdc_Type *const pHsAdc     = (HsAdc_Type *)s_aHsAdcBase[Unit];
    uint32            u32Timeout = ADC_TIMEOUT_COUNTER;
    Std_ReturnType    eRet       = E_OK;
    /* Only in Single mode would occur overrun */
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
    if (pGroupPtr->bHwGroup == FALSE)
#endif
    {
        if (HSADC_HWA_GetOverrunFlag(pHsAdc) == TRUE)
        {
            /* Stop conversion in Control register */
            HSADC_HWA_Stop(pHsAdc);
            /* Wait until HSADC module is stopped */
            while ((HSADC_HWA_GetStop(pHsAdc) == (boolean)TRUE) && (u32Timeout != (uint32)0U))
            {
                u32Timeout--;
            }
            HSADC_HWA_ClearOverrunFlag(pHsAdc);
            Adc_HsAdc_DropConvResults(Unit, ADC_RESULT_COUNT);
            HSADC_HWA_Start(pHsAdc);
            eRet = E_NOT_OK;
        }
    }
    return eRet;
}
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */

#ifdef __cplusplus
}
#endif

/** @} */
