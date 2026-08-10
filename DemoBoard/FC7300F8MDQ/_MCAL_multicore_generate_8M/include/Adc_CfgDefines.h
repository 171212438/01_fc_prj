/**
 *   @file    Adc_CfgDefines.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - Module configuration interface for Adc driver.
 *   @details Contains the module configuration interface for Adc driver.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ADC
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
*   0.1.0       10/07/2023    QXW0030       N/A          ADC Initial Version
*   0.2.0       07/10/2023    QXW0030       N/A          Add Adc Multicore Support
*   0.3.0       17/10/2023    QXW0030       N/A          Add support for partition check in ISR
*   0.5.0       28/12/2023    QXW0030       N/A          Fix symbolic name issues
*   0.5.0       11/01/2024    QXW0030       N/A          Remove AdcContinuousWithoutInterrupt feature
*   0.7.0       27/03/2024    QXW0030       N/A          Add support for FC7240
*   0.8.0       18/07/2024    QXW0030       N/A          Add TMU support
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
*   1.4.0       25/09/2025    QXW0030       N/A          Add support for FC7300F4MDDxxxT1C
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/

#ifndef ADC_CFG_DEFINES_H
#define ADC_CFG_DEFINES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief         Enables or disables Multicore feature in the ADC driver ((STD_ON)/(STD_OFF)).
 */
#define ADC_MULTICORE_SUPPORT               (STD_ON)

/**
 * @brief         Enables or disables HSADC in the ADC driver ((STD_ON)/(STD_OFF)).
 */
#define ADC_ENABLE_HSADC_SUPPORT            (STD_ON)

/**
 * @brief         ADC unit 0 available
 */
#define ADC_UNIT_0                   0U

/**
 * @brief         ADC unit 1 available
 */
#define ADC_UNIT_1                   1U

/**
 * @brief         ADC unit 2 available
 */
#define ADC_UNIT_2                   2U

/**
 * @brief         ADC unit 3 available
 */
#define ADC_UNIT_3                   3U

/**
 * @brief         ADC unit 4 available
 */
#define ADC_UNIT_4                   4U

/**
 * @brief         ADC unit 5 available
 */
#define ADC_UNIT_5                   5U


/**
 * @brief         HSADC unit 0 available
 */
#define HSADC_UNIT_0                 0U

/**
 * @brief         HSADC unit 1 available
 */
#define HSADC_UNIT_1                 1U

/**
 * @brief         HSADC unit 2 available
 */
#define HSADC_UNIT_2                 2U

/**
 * @brief         HSADC unit 3 available
 */
#define HSADC_UNIT_3                 3U


/**
 * @brief         Maximum number of configured partitions.
 */
#define ADC_MAX_PARTITIONS                  3

/**
 * @brief         Number of ADC_SCn registers available
 */
#define ADC_NUM_SC_REGISTER                 32U

/**
 * @brief         Array initializer of number of channels for each ADC HW unit
 */
#define ADC_UNIT_NUM_CHANNELS               {32U, 32U, 32U, 32U, 32U, 32U}

/**
 * @brief         Number of HSADC_SCn registers available
 */
#define HSADC_NUM_SC_REGISTER               16U

/**
 * @brief         Ptimer support 8 delay register
 */
#define ADC_PTIMER_NUM_DELAY_REGISTER       8U

/**
 * @brief          Adds/removes ((STD_ON)/(STD_OFF)) the services Adc_EnableHardwareTrigger() and Adc_DisableHardwareTrigger() from the code.
 */
#define ADC_HW_TRIGGER_API                  (STD_ON)

/**
 * @brief          Enables or disables limit checking feature in the ADC driver.
 */
#define ADC_ENABLE_LIMIT_CHECK              (STD_ON)

/**
 * @brief          Group notification mechanism is/isn't ((STD_ON)/(STD_OFF)) available at runtime.
 */
#define ADC_GRP_NOTIF_CAPABILITY            (STD_ON)

/**
 * @brief          Type of prioritization mechanism ADC_PRIORITY_NONE, ADC_PRIORITY_HW and ADC_PRIORITY_HW_SW.
 */
#define ADC_PRIORITY_NONE                   0U
#define ADC_PRIORITY_HW                     1U
#define ADC_PRIORITY_HW_SW                  2U

/**
 * @brief          Priority implementation.
 */
#define ADC_PRIORITY_IMPLEMENTATION         (ADC_PRIORITY_NONE)

/**
 * @brief          Type of alignment mechanism ADC_ALIGN_RIGHT, ADC_ALIGN_LEFT.
 */
#define ADC_ALIGN_LEFT                      0U
#define ADC_ALIGN_RIGHT                     1U

/**
 * @brief          Result Alignment.
 */
#define ADC_RESULT_ALIGNMENT                (ADC_ALIGN_RIGHT)

/**
 * @brief         Type of Adc result bit width ADC_RESULT_U8, ADC_RESULT_U16, ADC_RESULT_U32.
 *
 */
#define ADC_RESULT_U8                       0U
#define ADC_RESULT_U16                      1U
#define ADC_RESULT_U32                      2U

/**
 * @brief           Result bit width.
 */
#define ADC_RESULT_TYPE                     (ADC_RESULT_U32)

/**
 * @brief        This is a timeout value which is used to wait till
 *                 - the conversion is not aborted.
 *                 - ADC hardware is not entered in power down state.
 *                 - ADC hardware is not entered in idle state.
 */
#define ADC_TIMEOUT_COUNTER                 (0x0000ffffUL)

/**
 * @brief        This is a timeout value which is used to wait till Dma transfering finish
 */
#define ADC_DMA_TRANSFER_TIMEOUT            (0x0000ffffUL)

/**
 * @brief        This is a timeout value which is used to wait till spinlock is acquired
 */
#define ADC_SPIN_LOCK_TIMEOUT               (0x0000ffffUL)

/**
 * @brief          Adc instance type.
 * @details        Used to indicate the type of the ADC instance.
 *
 */
#define ADC_INSTANCE_TYPE_SARADC            (0U)
#define ADC_INSTANCE_TYPE_HSADC             (1U)

/**
 * @brief          Number of used Adc instance type.
 * @details        Used to indicate the types of the ADC instance used in this module.
 *
 */
#define ADC_NUM_USED_INSTANCE_TYPE          (2U)

/**
* @brief         Add/Remove feature to support DMA transfer.
*/
#define ADC_DMA_SUPPORT                     (STD_ON)

/**
 * @brief        Max number of ADC Hw units
 */
#define ADC_MAX_HW_UNITS                    6U

/**
 * @brief        Max number of HSADC Hw units
 */
#define HSADC_MAX_HW_UNITS                  4U

/**
 * @brief        Max number of used ADC and HSADC units
 *
 */
#define ADC_USED_HW_UNITS                   2U

/**
 * @brief        Max number of used ADC units
 *
 */
#define ADC_USED_SARADC_UNITS               0U

/**
 * @brief        Max number of used HSADC units
 *
 */
#define ADC_USED_HSADC_UNITS                2U

/**
 * @brief        Peripheral ADC0 base address
 */
#define ADC0_BASE                            (0x40426000)

/**
 * @brief        Peripheral ADC1 base address
 */
#define ADC1_BASE                            (0x40427000)

/**
 * @brief        Peripheral ADC2 base address
 */
#define ADC2_BASE                            (0x40428000)

/**
 * @brief        Peripheral ADC3 base address
 */
#define ADC3_BASE                            (0x40826000)

/**
 * @brief        Peripheral ADC4 base address
 */
#define ADC4_BASE                            (0x40827000)

/**
 * @brief        Peripheral ADC5 base address
 */
#define ADC5_BASE                            (0x40828000)


/**
 * @brief         Array initializer of ADC peripheral base addresses
 */
#define ADC_BASE_ADDRS                      {ADC0_BASE, ADC1_BASE, ADC2_BASE, ADC3_BASE, ADC4_BASE, ADC5_BASE}

/**
 * @brief        Peripheral HSADC0 base address
 */
#define HSADC0_BASE                          (0x4042C000)
/**
 * @brief        Peripheral HSADC1 base address
 */
#define HSADC1_BASE                          (0x4042D000)
/**
 * @brief        Peripheral HSADC2 base address
 */
#define HSADC2_BASE                          (0x4042E000)
/**
 * @brief        Peripheral HSADC3 base address
 */
#define HSADC3_BASE                          (0x4042F000)

/**
 * @brief         Array initializer of HSADC peripheral base addresses
 */
#define HSADC_BASE_ADDRS                    {HSADC0_BASE, HSADC1_BASE, HSADC2_BASE, HSADC3_BASE}

/**
 * @brief        Switch to enable/disable Ptimer support with SAR ADC
 */
#define ADC_ENABLE_PTIMER_SUPPORT           (STD_ON)

/**
 * @brief         Define the number of maximum channels
 */
#define ADC_PTIMER_CHANNELS_U8              2U

/**
 * @brief         Number of Ptimer modules.
 */
#define ADC_PTIMER_NUM_MODULES              4U

/**
 * @brief        Peripheral PTIMER0 base address
 */
#define PTIMER0_BASE                         (0x40422000)

/**
 * @brief        Peripheral PTIMER1 base address
 */
#define PTIMER1_BASE                         (0x40423000)

/**
 * @brief        Peripheral PTIMER2 base address
 */
#define PTIMER2_BASE                         (0x40424000)

/**
 * @brief        Peripheral PTIMER3 base address
 */
#define PTIMER3_BASE                         (0x40425000)


/**
 * @brief         Array initializer of Ptimer peripheral base addresses
 */
#define PTIMER_BASE_ADDRS                   {PTIMER0_BASE, PTIMER1_BASE, PTIMER2_BASE, PTIMER3_BASE}

/**
 * @brief         Switch to enable/disable differential channel support.
 */
#define ADC_ENABLE_DIFF_CHANNEL_SUPPORT     (STD_ON)

/**
 * @brief         Whether the chip supports mixed differential channels and single-ended channels
 *                in the same group.
 */
#define ADC_MIXED_DIFF_CHANNEL_SUPPORT      (STD_ON)

/**
 * @brief         Switch to enable/disable Tmu support.
 */
#define ADC_ENABLE_TMU_SUPPORT              (STD_ON)

/**
 * @brief         Number of TMU modules.
 */
#define ADC_TMU_NUM_MODULES                 1U

/**
 * @brief        Peripheral TMU0 base address
 */
#define TMU0_BASE                            (0x40043000)


/**
 * @brief         Array initializer of TMU peripheral base addresses
 */
#define TMU_BASE_ADDRS                      {TMU0_BASE}

/**
 * @brief         Whether TMU supports self trim
 */
#define ADC_TMU_SUPPORT_SELF_TRIM           (STD_ON)


/**
 * @brief         Whether TMU supports flag based temperature sensor
 */
#define ADC_TMU_SUPPORT_TF                  (STD_ON)

/**
 * @brief         Whether TMU supports startup counter
 */
#define ADC_TMU_SUPPORT_START_CNT           (STD_ON)

/**
 * @brief         Whether TMU supports working in stop mode
 */
#define ADC_TMU_SUPPORT_STOP_MODE           (STD_ON)

/**
 * @brief         Adds/removes ((STD_ON)/(STD_OFF)) the services Adc_CalcTemperature() from the code.
 */
#define ADC_CALC_TEMPERATURE_API            (STD_ON)

/**
 * @brief         Adds/removes ((STD_ON)/(STD_OFF)) the services Adc_GetTemperatureStatus() from the code.
 */
#define ADC_GET_TEMPERATURE_STATUS_API      (STD_ON)

/**
 * @brief         Whether to allow clock source configuration.
 */
#define ADC_ENABLE_CLKSRC_CONFIGURATION     (STD_OFF)

/**
 * @brief         Whether to do HSADC calibration when calling Adc_Init().
 */
#define HSADC_INIT_CALIBRATION              (STD_ON)

/**
* @brief  Switch to enable/disable the production error reporting.
*/
#define ADC_DISABLE_DEM_REPORT_ERROR_STATUS  (STD_OFF)

/**
* @brief IRQ definition
*/
#define ADC_UNIT_1_ISR_USED
#define HSADC_UNIT_0_ISR_USED




/**
 * @brief          max queue depth configured across all configset.
 */
#define ADC_QUEUE_MAX_DEPTH                 2U

/**
 * @brief          max number of groups configured across all configset.
 */
#define ADC_MAX_GROUPS                      2U

/**
 * @brief          max queue depth for hardware triggered conversion
 */
#define ADC_HW_QUEUE                        (1U)


/**
 * @brief         Development error detection enabled/disabled ((STD_ON)/(STD_OFF)).
 */
#define ADC_DEV_ERROR_DETECT                (STD_ON)

/**
 * @brief          Switch to enable/disable the DET runtime error reporting.
 */
#define ADC_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS (STD_OFF)

/**
 * @brief          Add/remove ((STD_ON)/(STD_OFF)) the service Adc_GetVersionInfo() from the code.
 */
#define ADC_VERSION_INFO_API                (STD_ON)

/**
 * @brief         Add/remove ((STD_ON)/(STD_OFF)) the service Adc_DeInit() from the code.
 */
#define ADC_DEINIT_API                      (STD_ON)

/**
 * @brief         Add/remove ((STD_ON)/(STD_OFF)) the services Adc_StartGroupConversion()and Adc_StopGroupConversion() from the code.
 */
#define ADC_ENABLE_START_STOP_GROUP_API     (STD_ON)

/**
 * @brief         Add/Remove the services Adc_ReadGroup() from the code.
 */
#define ADC_READ_GROUP_API                  (STD_ON)

/**
 * @brief         Enables or disables ISR partition mapping check feature in the ADC driver ((STD_ON)/(STD_OFF)).
 */
#define ADC_ISR_PARTITION_CHECK_SUPPORT     (STD_ON)

/**
 * @brief         Enables or disables spurious IAR check feature in the ADC driver ((STD_ON)/(STD_OFF)).
 */
#define ADC_ISR_SPURIOUS_CHECK_SUPPORT      (STD_ON)

/**
 * @brief         Add/Remove feature to configure Adc clock prescaler
 */
#define ADC_PRESCALER_CONF_FEATURE          (STD_ON)

/**
 * @brief         Add/Remove One time setting of Conversion time regsisters from Init() function.
 */
#define ADC_SET_ADC_HARDWARE_AVERAGE_ONCE   (STD_ON)

/**
 * @brief         This switch is used to enable the queue.
 */
#define ADC_ENABLE_QUEUING                  (STD_ON)

/**
 * @brief         Maximum boundary for the Adc_QueueIndexType.
 */
#define ADC_QUEUE_INDEX_TYPE_MAXIMUM        65535U

/**
 * @brief         Ptimer support channel 0 and channel 1 back to back
 *
 */
#define ADC_PTIMER_CHANNEL01_BTB_FEATURE    (STD_ON)

/**
 * @brief         Whether the ADC Units support sequence group mode
 *
 */
#define ADC_SEQUENCE_GROUP_SUPPORT          (STD_ON)

/**
 * @brief         Whether the ADC Units support sequence injection conversion
 *
 */
#define ADC_SEQUENCE_INJECTION_SUPPORT      (STD_OFF)

/**
 * @brief         The switch to enable hardware group support
 *
 */
#define ADC_ENABLE_HWGROUP_SUPPORT          (STD_ON)

/**
 * @brief         Whether the ADC Units support DMA in hardware group mode
 *
 */
#define ADC_HWGROUP_DMA_SUPPORT             (STD_ON)

/**
 * @brief         Whether the ADC Units have Calibration configuration
 *
 */
#define ADC_CALIBRATION_SUPPORT             (STD_ON)

/**
 * @brief         Whether the ADC Units have CFG3 configuration
 *
 */
#define ADC_CFG3_SUPPORT                    (STD_ON)

/**
 * @brief         Whether the ADC Units have Enhanced Compare configurations
 *
 */
#define ADC_ECMP_SUPPORT                    (STD_OFF)

/**
 * @brief         Whether the ADC Units have Fast Compare configurations
 *
 */
#define ADC_FCMP_SUPPORT                    (STD_OFF)

/**
 * @brief         Whether the ADC/HSADC Units support periodic trigger
 *
 */
#define ADC_PERIODIC_TRIGGER_SUPPORT        (STD_ON)

/**
 * @brief         Whether the HSADC Units shall use erratum ERR_HSADC_001 workaround
 *
 */
#define HSADC_ERR_001_WORKAROUND            (STD_ON)

/**
 * @brief         The channels to skip for erratum ERR_HSADC_001
 *
 */
#define HSADC_SKIP_CHANNELS                 (2U)

/**
 * @brief         Symbolic names of ADC Hardware units - TPS_ECUC_02108 compliant.
 */
#define AdcConf_AdcHwUnit_AdcHwUnit_1     0
#define AdcConf_AdcHwUnit_AdcHwUnit_3     1

/**
 * @brief         Symbolic names of channels on all HW units.
 */
#define AdcChannel_IIN                       0
#define AdcChannel_VIN                       0
#define AdcChannel_IOUT                       1
#define AdcChannel_VOUT                       1

/**
 * @brief         Symbolic names of channels - TPS_ECUC_02108 compliant.
 */
#define AdcConf_AdcChannel_AdcChannel_IIN    0
#define AdcConf_AdcChannel_AdcChannel_VIN    0
#define AdcConf_AdcChannel_AdcChannel_IOUT    1
#define AdcConf_AdcChannel_AdcChannel_VOUT    1

/**
 * @brief         Symbolic names of groups.
 */
#define AdcGroup_2                       0
#define AdcGroup_4                       1

/**
 * @brief         Symbolic names of groups - TPS_ECUC_02108 compliant.
 */
#define AdcConf_AdcGroup_AdcGroup_2      0
#define AdcConf_AdcGroup_AdcGroup_4      1

/**
 * @brief         Support for User mode.
 *                If this parameter has been configured to 'STD_ON', the Adc driver code can be
 *                executed from both supervisor and user mode.
 */

#define ADC_ENABLE_USER_MODE_SUPPORT   (STD_OFF)


#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
 #ifdef ADC_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == ADC_ENABLE_USER_MODE_SUPPORT)
   #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running  ADC in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
  #endif /* STD_ON == ADC_ENABLE_USER_MODE_SUPPORT */
 #endif /* ifndef ADC_ENABLE_USER_MODE_SUPPORT */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT*/
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* ADC_CFG_DEFINES_H */

/** @} */
