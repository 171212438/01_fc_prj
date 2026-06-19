/**
 *   @file    Adc_Ipw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - IP bridge layer.
 *   @details This is the IP bridge layer driver source file for ADC.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ADC
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
*   1.0.0       05/11/2024    QXW0030       N/A          Initial Commit
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
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
#include "Adc_Ipw.h"
#include "Adc_SarAdc.h"
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
#include "Adc_HsAdc.h"
#endif
#include "Adc_Hal.h"
#include "Adc_Types.h"
#include "Mcal.h"
#include "SchM_Adc.h"
#if (ADC_MULTICORE_SUPPORT == STD_ON)
#include "SpinLock.h"
#endif /* (ADC_MULTICORE_SUPPORT == STD_ON) */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"

ADC_DATA_SECTION const Adc_InitUnitHardwareFuncType
    g_Adc_InitUnitHardwareFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_InitUnitHardware /* Initialization function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_InitUnitHardware /* Initialization function for HSADC */
#endif
    };

#if (ADC_DEINIT_API == STD_ON)
ADC_DATA_SECTION const Adc_DeInitUnitHardwareFuncType
    g_Adc_DeInitUnitHardwareFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_DeInitUnitHardware /* De-Initialization function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_DeInitUnitHardware /* De-Initialization function for HSADC */
#endif
    };
#endif /* ADC_DEINIT_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_DATA_SECTION const Adc_EnableHardwareTriggerFuncType
    g_Adc_EnableHardwareTriggerFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_EnableHardwareTrigger /* Enable hardware trigger function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_EnableHardwareTrigger /* Enable hardware trigger function for HSADC */
#endif
    };
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON))
ADC_DATA_SECTION const Adc_StartGroupConversionFuncType
    g_Adc_StartGroupConversionFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_StartGroupConversion /* Start group conversion function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_StartGroupConversion /* Start group conversion function for HSADC */
#endif
    };
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON) */

ADC_DATA_SECTION const Adc_DropConvResultsFuncType
    g_Adc_DropConvResultsFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_DropConvResults /* Drop conversion results function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_DropConvResults /* Drop conversion results function for HSADC */
#endif
    };

ADC_DATA_SECTION const Adc_ConfigurePartialConversionFuncType
    g_Adc_ConfigurePartialConversionFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_ConfigurePartialConversion /* Configure partial conversion function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_ConfigurePartialConversion /* Configure partial conversion function for HSADC */
#endif
    };

#if (ADC_DMA_SUPPORT == STD_ON)
ADC_DATA_SECTION const Adc_ConfigureDmaChannelFuncType
    g_Adc_ConfigureDmaChannelFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_ConfigureDmaChannel /* Configure DMA channel function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_ConfigureDmaChannel /* Configure DMA channel function for HSADC */
#endif
    };
#endif /* ADC_DMA_SUPPORT == STD_ON */

ADC_DATA_SECTION const Adc_StopGroupConversionFuncType
    g_Adc_StopGroupConversionFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_StopGroupConversion /* Stop group conversion function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_StopGroupConversion /* Stop group conversion function for HSADC */
#endif
    };

ADC_DATA_SECTION const Adc_WaitConversionStoppedFuncType
    g_Adc_WaitConversionStoppedFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_WaitConversionStopped /* Wait conversion stopped function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_WaitConversionStopped /* Wait conversion stopped function for HSADC */
#endif
    };

ADC_DATA_SECTION const Adc_RestartContinuousConversionFuncType
    g_Adc_RestartContinuousConversionFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_RestartContinuousConversion /* Restart continuous conversion function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_RestartContinuousConversion /* Restart continuous conversion function for HSADC */
#endif
    };

ADC_DATA_SECTION const Adc_CheckSequenceStatusWoInterruptFuncType
    g_Adc_CheckSequenceStatusWoInterruptFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_CheckSequenceStatusWoInterrupt /* Check sequence status without interrupt
                                                     function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_CheckSequenceStatusWoInterrupt /* Check sequence status without interrupt
                                                    function for HSADC */
#endif
    };

ADC_DATA_SECTION const Adc_GetSequenceResultsFuncType
    g_Adc_GetSequenceResultsFunc[ADC_NUM_USED_INSTANCE_TYPE] = {
        Adc_SarAdc_GetSequenceResults /* Get sequence results function for SARADC */
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
        ,
        Adc_HsAdc_GetSequenceResults /* Get sequence results function for HSADC */
#endif
    };

#define ADC_STOP_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#if (ADC_MULTICORE_SUPPORT == STD_ON)
#define ADC_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Adc_MemMap.h"
ADC_DATA_SECTION static uint32 s_u32AdcSpinLock = 0U;
#define ADC_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Adc_MemMap.h"
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */

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
#if (ADC_MULTICORE_SUPPORT == STD_ON)
/**
 * @brief          Get the spin lock of the Adc
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Get spin lock success.
 * @retval         E_NOT_OK      Get spin lock failed.
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_GetSpinLock(void)
{
    Std_ReturnType eSucc = E_OK;
    /* PRQA S 2905 ++
                Constant: Positive integer value truncated by cast to a smaller unsigned type.
                REASON: The actual timeout period may vary depending on the MCU frequency.
        */
    uint32 u32Timeout = ADC_SPIN_LOCK_TIMEOUT;
    /* PRQA S 2905 -- */
    /* PRQA S 3415 ++
               Constant: Right hand operand of '&&' or '||' is an expression with persistent side
       effects.

       */
    while ((0U != u32Timeout) && (E_OK != SpinLock_Acquire(&s_u32AdcSpinLock)))
    {
        u32Timeout--;
    }
    /* PRQA S 3415 -- */
    if (0U == u32Timeout)
    {
        eSucc = E_NOT_OK;
    }
    return eSucc;
}

/**
 * @brief          Release the spin lock of the mailbox
 *
 * @return         void
 *
 */
ADC_TEXT_SECTION void Adc_ReleaseSpinLock(void)
{
    SpinLock_Release(&s_u32AdcSpinLock);
}
#endif /* (ADC_MULTICORE_SUPPORT == STD_ON) */

#if ((ADC_ENABLE_HSADC_SUPPORT == STD_ON) && (HSADC_INIT_CALIBRATION == STD_ON))
/**
 * @brief          Wait HSADC calibration done
 *
 * @param[in]      pConfigPtr       Pointer to the configuration structure
 * @param[in]      u8UsedUnits      Number of used units
 * @param[in]      u8CoreId         Core ID
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Calibration done.
 * @retval         E_NOT_OK      Calibration timeout
 *
 */
ADC_TEXT_SECTION Std_ReturnType Adc_Ipw_WaitCalibrationDone(
    const Adc_HwUnitConfigurationType *const *pConfigPtr,
    const uint8                               u8UsedUnits,
    uint8                                     u8CoreId)
{
    uint32         u32Timeout = ADC_TIMEOUT_COUNTER;
    uint8          HwUnitIdx  = 0U;
    Std_ReturnType eRet       = E_NOT_OK;
    Std_ReturnType eSucc;
    while ((u32Timeout > 0U) && (eRet != E_OK))
    {
        eRet = E_OK;
        u32Timeout--;
        for (HwUnitIdx = 0U; HwUnitIdx < u8UsedUnits; HwUnitIdx++)
        {
            eSucc = Adc_HsAdc_GetCalibrationStatus(pConfigPtr[HwUnitIdx]->AdcHardwareUnitId,
                                                   pConfigPtr[HwUnitIdx],
                                                   u8CoreId);
            if (eSucc != E_OK)
            {
                eRet = E_NOT_OK;
            }
        }
    }
    return eRet;
}
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON && HSADC_INIT_CALIBRATION == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
