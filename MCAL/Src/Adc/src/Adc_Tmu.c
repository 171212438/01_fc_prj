/**
 *   @file    Adc_Tmu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - Tmu driver source file.
 *   @details This is the low level driver source file, mainly implemented for the Tmu hardware IP.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TMU
*   PLATFORM             : Flagchip FC7XXX
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
*   0.8.0       18/07/2024    QXW0030       N/A          TMU Initial Version
*   1.0.0       09/08/2024    QXW0030       N/A          Update TMU calculate equation
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.2.0       14/04/2025    QXW0030       N/A          Disable TMU interrupt before init
*   1.4.0       25/09/2025    QXW0030       N/A          Add support for FC7300F4MDDxxxT1C
*   1.5.0       25/11/2025    QXW0030       N/A          Fix the issue that FC7300F4MDDxxxT1C TMU
*                                                        does not support START_CNT
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_Tmu.h"
#include "Adc_Cfg.h"
#include "Adc_Hal.h"
#include "Mcal.h"
#include "SchM_Adc.h"

#include "Adc_Tmu_Reg.h"
#include "Adc_Tmu_RegOps.h"

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/**
 * @brief Flag-Based Temperature Sensor default value
 *
 */
#define TMU_TF_CTRL_DEFAULT 0x00000700U

/**
 * @brief Voltage-Based Temperature Sensor default value
 *
 */
#define TMU_TV_CTRL_DEFAULT 0x00000300U

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ADC_START_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"
/* PRQA S 306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
 * object and an integer type.
 * Reason: The Tmu base address is a register address and it is essential to convert into a
 * struct pointer to access its members */
ADC_DATA_SECTION static const uint32 s_aTmuBase[ADC_TMU_NUM_MODULES] = TMU_BASE_ADDRS;
/* PRQA S 306 -- */
#define ADC_STOP_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief          Initializes the TMU hardware.
 * @details        Initializes the TMU hardware as per configuration.
 *
 * @param[in]      Unit         The hardware Unit.
 * @param[in]      pConfig      Pointer to the hardware configuration structure to be used.
 *
 * @return         void
 *
 * @pre            Driver must be initialized.
 */
ADC_TEXT_SECTION void Adc_Tmu_InitUnitHardware(const uint8                         Unit,
                                               const Adc_TmuUnitConfigurationType *pConfig)
{
    TMU_Type *const pTmu = (TMU_Type *)s_aTmuBase[Unit];
#if ((ADC_TMU_SUPPORT_TF == STD_ON) || (ADC_TMU_SUPPORT_START_CNT == STD_ON))
    uint32 u32RegVal;
#endif /* ADC_TMU_SUPPORT_TF == STD_ON || ADC_TMU_SUPPORT_START_CNT == STD_ON */
    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_36();
    TMU_HWA_Unlock(pTmu);

#if (ADC_TMU_SUPPORT_TF == STD_ON)
    /* Configure the flag based sensor */
    if (pConfig->bEnableFlagSensor == TRUE)
    {
        u32RegVal = TMU_HWA_GetFlagTempCtrl(pTmu);
        u32RegVal &= ~(TMU_TF_CTRL_TF_RDYF_IE_MASK | TMU_TF_CTRL_TF_125F_IE_MASK |
                       TMU_TF_CTRL_TF_150F_IE_MASK);
        TMU_HWA_SetFlagTempCtrl(pTmu, u32RegVal);
        TMU_HWA_SetFlagTemperatureEnableStatus(pTmu, FALSE);
        TMU_HWA_SetFlagTempCtrl(pTmu, pConfig->u32FlagSensorCtrl);
        TMU_HWA_SetFlagTemperatureEnableStatus(pTmu, TRUE);
    }
#endif /* ADC_TMU_SUPPORT_TF == STD_ON */

    /* Configure the voltage based sensor */
#if (ADC_TMU_SUPPORT_START_CNT == STD_ON)
    u32RegVal = TMU_HWA_GetVoltageTempCtrl(pTmu);
    u32RegVal &= ~TMU_TV_CTRL_TV_RDYF_IE_MASK;
    TMU_HWA_SetVoltageTempCtrl(pTmu, u32RegVal);
#endif /* ADC_TMU_SUPPORT_START_CNT == STD_ON */
    TMU_HWA_SetVoltageTemperatureEnableStatus(pTmu, FALSE);
    TMU_HWA_SetVoltageTempCtrl(pTmu, pConfig->u32VoltSensorCtrl);
    TMU_HWA_SetVoltageTemperatureEnableStatus(pTmu, TRUE);
    TMU_HWA_Lock(pTmu);
    /* Exit critical section */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_36();
}

#if (ADC_TMU_SUPPORT_START_CNT == STD_ON)
/**
 * @brief          Wait the TMU hardware to be ready.
 *
 * @param[in]      Unit         The hardware Unit.
 * @param[in]      pConfig      Pointer to the hardware configuration structure to be used.
 *
 * @return         void
 */
ADC_TEXT_SECTION Std_ReturnType Adc_Tmu_WaitReady(const uint8                         Unit,
                                                  const Adc_TmuUnitConfigurationType *pConfig)
{
    TMU_Type *const pTmu       = (TMU_Type *)s_aTmuBase[Unit];
    uint32          u32Timeout = ADC_TIMEOUT_COUNTER;
    Std_ReturnType  Ret        = E_OK;
    /* Wait the voltage based sensor to be ready */
    while ((TMU_HWA_GetVoltageTemperatureReady(pTmu) != TRUE) && (u32Timeout != 0U))
    {
        u32Timeout--;
    }
    if (u32Timeout == 0U)
    {
        Ret = E_NOT_OK;
    }
    else
    {
        TMU_HWA_ClearVoltageTemperatureReady(pTmu);

#if (ADC_TMU_SUPPORT_TF == STD_ON)
        if (pConfig->bEnableFlagSensor == TRUE)
        {
            u32Timeout = ADC_TIMEOUT_COUNTER;
            /* Wait the flag based sensor to be ready */
            while ((TMU_HWA_GetFlagTemperatureReady(pTmu) != TRUE) && (u32Timeout != 0U))
            {
                u32Timeout--;
            }
            if (u32Timeout == 0U)
            {
                Ret = E_NOT_OK;
            }
            else
            {
                TMU_HWA_ClearFlagTemperatureReady(pTmu);
            }
        }
#endif /* ADC_TMU_SUPPORT_TF == STD_ON */
    }
    return Ret;
}
#endif /* ADC_TMU_SUPPORT_START_CNT == STD_ON */

#if (ADC_DEINIT_API == STD_ON)
/**
 * @brief          This function deinitializes the TMU hardware.
 *
 * @param[in]      Unit      The hardware Unit.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Tmu_DeInitUnitHardware(const uint8 Unit)
{
    TMU_Type *const pTmu = (TMU_Type *)s_aTmuBase[Unit];
#if ((ADC_TMU_SUPPORT_TF == STD_ON) || (ADC_TMU_SUPPORT_START_CNT == STD_ON))
    uint32 u32RegVal;
#endif /* ADC_TMU_SUPPORT_TF == STD_ON || ADC_TMU_SUPPORT_START_CNT == STD_ON */
    /* Enter critical section */
    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_37();
    TMU_HWA_Unlock(pTmu);

#if (ADC_TMU_SUPPORT_TF == STD_ON)
    /* Set flag based sensor to default */
    u32RegVal = TMU_HWA_GetFlagTempCtrl(pTmu);
    u32RegVal &= ~(TMU_TF_CTRL_TF_RDYF_IE_MASK | TMU_TF_CTRL_TF_125F_IE_MASK |
                   TMU_TF_CTRL_TF_150F_IE_MASK);
    TMU_HWA_SetFlagTempCtrl(pTmu, u32RegVal);
    TMU_HWA_SetFlagTempCtrl(pTmu, TMU_TF_CTRL_DEFAULT);
    /* Clear possible interrupt flags */
    TMU_HWA_Clear150Flag(pTmu);
    TMU_HWA_Clear125Flag(pTmu);
#endif /* ADC_TMU_SUPPORT_TF == STD_ON */

    /* Set voltage based sensor to default */
#if (ADC_TMU_SUPPORT_START_CNT == STD_ON)
    u32RegVal = TMU_HWA_GetVoltageTempCtrl(pTmu);
    u32RegVal &= ~TMU_TV_CTRL_TV_RDYF_IE_MASK;
    TMU_HWA_SetVoltageTempCtrl(pTmu, u32RegVal);
#endif /* ADC_TMU_SUPPORT_START_CNT == STD_ON */
    TMU_HWA_SetVoltageTempCtrl(pTmu, TMU_TV_CTRL_DEFAULT);
    /* Exit critical section */
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_37();
}
#endif

#if (STD_ON == ADC_CALC_TEMPERATURE_API)
/**
 * @brief          This function calculates the temperature measured by TMU.
 *
 * @param[in]      Unit      The hardware Unit.
 * @param[in]      Voltage   The TMU output voltage measured by ADC.
 *
 * @return         The temperature of the MCU
 *
 */
ADC_TEXT_SECTION float32 Adc_Tmu_CalcTemperature(const uint8 Unit, float32 Voltage)
{
    uint32  v_135;
    float32 k;
    float32 Temperature;
#if (ADC_TMU_SUPPORT_SELF_TRIM == STD_ON)
    TMU_Type *const pTmu = (TMU_Type *)s_aTmuBase[Unit];

    v_135 = TMU_HWA_GetTemperatureCode(pTmu);
    k     = (float32)TMU_HWA_GetSlopeFactor(pTmu) / 1000.0f;
#else
    v_135 = (TMU_HWA_GetTemperatureOffset() * 5u) + 1700u;
    k     = ((float32)TMU_HWA_GetTemperatureSlope() + 20.0f) / 10.0f;
    (void)Unit;
#endif
    Temperature = (((Voltage * 1000.0f) - (float32)v_135) / k) + 135.0f;
    return Temperature;
}
#endif /* STD_ON == ADC_CALC_TEMPERATURE_API */

#if (STD_ON == ADC_GET_TEMPERATURE_STATUS_API)
/**
 * @brief          This function gets the temperature status of flag based TMU.
 *
 * @param[in]      Unit      The hardware Unit.
 *
 * @return         The temperature status of the MCU
 *
 */
ADC_TEXT_SECTION AdcTemperatureStatusType Adc_Tmu_GetTemperatureStatus(const uint8 Unit)
{
    TMU_Type *const          pTmu = (TMU_Type *)s_aTmuBase[Unit];
    AdcTemperatureStatusType eRet;
    if (TMU_HWA_Get150Status(pTmu) == TRUE)
    {
        eRet = ADC_TEMPERATURE_OVER_150;
    }
    else if (TMU_HWA_Get125Status(pTmu) == TRUE)
    {
        eRet = ADC_TEMPERATURE_OVER_125;
    }
    else
    {
        eRet = ADC_TEMPERATURE_NORMAL;
    }
    return eRet;
}
#endif /* STD_ON == ADC_GET_TEMPERATURE_STATUS_API */

#if defined(ADC_TMU_UNIT_0_ISR_USED)
/**
 * @brief          This function process the interrupt of TMU.
 *
 * @param[in]      Unit      The hardware Unit.
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_Tmu_ProcessInterrupt(const uint8 Unit)
{
    TMU_Type *const pTmu   = (TMU_Type *)s_aTmuBase[Unit];
    uint8           CoreId = Adc_GetCoreID();
    uint8           HwIndex;
    boolean         bUnitInPartition = (boolean)FALSE;

    if (NULL_PTR != Adc_Cfg_Ptr[CoreId])
    {
        for (HwIndex = 0U; HwIndex < Adc_Cfg_Ptr[CoreId]->TmuUnitCount; HwIndex++)
        {
            if (Adc_Cfg_Ptr[CoreId]->pTmu[HwIndex].TmuHardwareUnitId == Unit)
            {
                bUnitInPartition = (boolean)TRUE;
                break;
            }
        }
    }

    if ((boolean)TRUE == bUnitInPartition)
    {
        if (TMU_HWA_Get150Flag(pTmu) == TRUE)
        {
            TMU_HWA_Clear150Flag(pTmu);
            TMU_HWA_Clear125Flag(pTmu);
            if (NULL_PTR != Adc_Cfg_Ptr[CoreId]->pTmu[HwIndex].Over150Notification)
            {
                Adc_Cfg_Ptr[CoreId]->pTmu[HwIndex].Over150Notification();
            }
        }
        else if (TMU_HWA_Get125Flag(pTmu) == TRUE)
        {
            TMU_HWA_Clear125Flag(pTmu);
            if (NULL_PTR != Adc_Cfg_Ptr[CoreId]->pTmu[HwIndex].Over125Notification)
            {
                Adc_Cfg_Ptr[CoreId]->pTmu[HwIndex].Over125Notification();
            }
        }
        else
        {
            /* This shall never be reached. */
        }
    }
    else
    {
        TMU_HWA_Clear150Flag(pTmu);
        TMU_HWA_Clear125Flag(pTmu);
    }
}
#endif /* defined(ADC_TMU_UNIT_0_ISR_USED) */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */

#ifdef __cplusplus
}
#endif

/** @} */
