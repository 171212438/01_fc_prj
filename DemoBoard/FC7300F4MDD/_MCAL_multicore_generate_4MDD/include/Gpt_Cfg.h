/**
*   @file    Gpt_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt Pre-Compile configuration.
*   @details This file contains the Gpt Autosar configuration.
*
*   @addtogroup GPT
*   @{
*/

/*==================================================================================================
*   PERIPHERAL           : Gpt_Cfg.h
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
*   0.1.0       17/12/2021    QXW0032       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.4.0       14/11/2023    QXW0076       N/A          clear some misra warning
*   0.5.0       17/01/2024    QXW0076       N/A          add global time base and fix bug
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (update global time base, the timer width of FTU1/2 change to 24bit)
*                                                        and fix bug
*   0.7.0       26/04/2024    QXW0076       N/A          Optimization the xdm of GPT module and add TPU feature(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifndef GPT_CFG_H
#define GPT_CFG_H

#ifdef __cplusplus
extern "C"{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"
#include "Gpt_Hw_Types.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define GPT_CFG_AR_RELEASE_MAJOR_VERSION     4
#define GPT_CFG_AR_RELEASE_MINOR_VERSION     6
#define GPT_CFG_AR_RELEASE_REVISION_VERSION  0
#define GPT_CFG_SW_MAJOR_VERSION             1
#define GPT_CFG_SW_MINOR_VERSION             5
#define GPT_CFG_SW_PATCH_VERSION             1
#define GPT_CFG_VENDOR_ID                    174

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* [SWDESG_GPT_129] [FUNC_Gpt_0031] */
/**
* @brief Gpt Dev error detect switch
*
*/
#define GPT_DEV_ERROR_DETECT (STD_ON)

/**
* @brief          Switch to enable/disable the DET runtime error reporting.
*/
#define GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS (STD_OFF)

/**
* @brief Report Wakeup Source switch
*/
#define GPT_REPORT_WAKEUP_SOURCE (STD_ON)

/**
* @brief GPT_VERSION_INFO_API switch
*
*/
#define GPT_VERSION_INFO_API (STD_ON)

/**
* @brief GPT_DEINIT_API switch
*
*/
#define GPT_DEINIT_API (STD_ON)

/**
* @brief GPT_TIME_ELAPSED_API switch
*
*/
#define GPT_TIME_ELAPSED_API (STD_ON)

/**
* @brief GPT_TIME_REMAINING_API switch
*
*/
#define GPT_TIME_REMAINING_API (STD_ON)

/**
* @brief GPT_ENABLE_DISABLE_NOTIFICATION_API switch
*
*/
#define GPT_ENABLE_DISABLE_NOTIFICATION_API (STD_ON)

/**
* @brief GPT_WAKEUP_FUNCTION_API switch
*
*/
#define GPT_WAKEUP_FUNCTION_API (STD_ON)

/**
* @brief GPT_PREDEFTIMER_FUNCTION_API switch
*
*/
#define GPT_PREDEFTIMER_FUNCTION_API (STD_OFF)

/**
* @brief Enable/disable support for changing timeout value during timer running
*
*/
#define GPT_CHANGE_NEXT_TIMEOUT_VALUE            (STD_ON)

/**
* @brief GPT_GET_RTC_COUNTER_VALUE_API switch
*
*/
#define GPT_GET_RTC_COUNTER_VALUE_API            (STD_OFF)

/**
* @brief GPT_RESET_RTC_COUNTER_API switch
*
*/
#define GPT_RESET_RTC_COUNTER_API            (STD_OFF)

/**
 * @brief Enable/disable support for mutilcore feature.
 *
 */
#define GPT_MULTICORE_SUPPORT                     (STD_ON)


/**
 * @brief The partion number.
 *
 */
#define GPT_PARTITIONS_NB                         (2U)


/**
 * @brief Enable/disable support for Gpt Ftu Gtb feature.
 *
 */
#define GPT_FTU_GTB_SUPPORT                       (STD_OFF)


/**
 * @brief Support for GPT Ftu1/2 24 bit feature.
*/
#define GPT_CFG_FTU12_24_BIT_SUPPORT    (STD_ON)

/**
 * @brief Support for GPT Tstmp0 Modx ClkSel feature.
*/
#define GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT    (STD_ON)

/**
 * @brief Support for GPT Tstmp0 Sirc1M change feature.
*/
#define GPT_CFG_TSTMP0_SIRC1M_CHANGE_SUPPORT    (STD_ON)

/**
 * @brief Support for GPT Gtb mulit control feature.
*/
#define GPT_CFG_GTB_MULI_CONTROL_SUPPORT    (STD_ON)

/**
 * @brief Support for GPT Ptimer debug mode feature.
*/
#define GPT_CFG_PTIMER_DEBUG_MODE_SUPPORT    (STD_ON)

/**
* @brief Support for GPT Standby wakeup.
*        The driver shall NOT CLEAR the interrupt flag, the interrupt enable bit and also should not disable the counter, during init *(Gpt_Aontimer_Init()) the flag is already set.
*
*/
#define GPT_STANDBY_WAKEUP_SUPPORT    (STD_ON)



/**
*   @brief   Enables or disables the access to a hardware register from user mode
*            USER_MODE_SOFTWARE_LOCKED:        All reads to hw registers will be done via REG_PROT, user mode access
*            SUPERVISOR_MODE_SOFTWARE_LOCKED:  Locks the access to the registers only for supervisor mode
*
*
*/
#define GPT_USER_MODE_SOFTWARE_LOCKED       (STD_OFF)

/**
*   @brief   Enables or disables support external trigger sources
*
*/


#define GPT_FCPIT_ENABLE_EXT_TRIGGERS            STD_OFF


/**
 * @brief Enable/disable clear the RTC seconds register only if the reset cause is POR/LVR.
 *
 */
#define GPT_RTC_CLEAR_SECOND_POR_LVR            STD_OFF



#define GPT_ENABLE_USER_MODE_SUPPORT    (STD_OFF)



#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
 #ifdef GPT_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == GPT_ENABLE_USER_MODE_SUPPORT)
   #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Gpt in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
  #endif /* (STD_ON == GPT_ENABLE_USER_MODE_SUPPORT) */
 #endif /* ifdef GPT_ENABLE_USER_MODE_SUPPORT*/
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

#define GPT_FTU_4_USED
#define GPT_FTU_5_USED
/**
* @brief These defines indicate that at least one chennel from each module is used in all configurations.
*
*/






#define GPT_FTU_USED



/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: There are some marcos generated by configuration tool which used by user, so, this macros may not distinct */
/**
* @{
* @brief Symbolic names of channels
*/

            #define GptConf_GptChannelConfiguration_GptChannel_WDG (0U)
            

            #define GptConf_GptChannelConfiguration_GptChannel_WDGCondition (1U)
            

            #define GptConf_GptChannelConfiguration_GptChannel_WDGInstance1 (2U)
            

            #define GptConf_GptChannelConfiguration_GptChannel_WDGInstance1Condition (3U)
            

/** @} */
/* PRQA S 0791 -- */
/**
* @brief This define is a reserved logical channel name representing a not existing/configured
*        hardware channel.
*
*/
#define GPT_HW_CHANNEL_UNUSED    (0xFF)

/**
* @{
* @brief IRQ Defines
*/
#define GPT_FTU_ISR_USED
#define GPT_FTU_4_ISR_USED
#define GPT_FTU_5_ISR_USED



#define GPT_PRECOMPILE_SUPPORT  (STD_OFF)

#define MAX_CONFIGURED_CHANNELS_U8           ((Gpt_ChannelType)4U)

#define GPT_FCPIT_MODULES_NUM                (1U)

#define GPT_FCPIT_CHANNEL_NUM                (4U)

#define GPT_TSTMP_MODULES_NUM                (3U)

#define GPT_TSTMP_CHANNEL_NUM                (4U)

#define GPT_AONTIMER_MODULES_NUM             (1U)

#define GPT_AONTIMER_CHANNEL_NUM             (1U)

#define GPT_RTC_MODULES_NUM                  (1U)

#define GPT_RTC_CHANNEL_NUM                  (1U)

#define GPT_FTU_MODULES_NUM_U8               (8U)

#define GPT_FTU_MODULE_CHANNEL_NUM_U8        (8U)

#define GPT_TPU_MODULES_NUM                  (0U)

#define GPT_TPU_CHANNEL_NUM                  (32U)

#define GPT_PTIMER_MODULES_NUM               (4U)

#define GPT_PTIMER_CHANNEL_NUM               (1U)

#define GPT_EFTU_MODULES_NUM                 (2U)

#define GPT_EFTU_CHANNEL_NUM                 (8U)

/**
* @brief The total number of indexes used by the hardware to logic channel map
*/
#define MAX_GPT_CHANNEL_NUM    (102U)

/** @} */

#define GPT_FTU_MODULE                         0U
#define GPT_TPU_MODULE                         ((GPT_FTU_MODULE_CHANNEL_NUM_U8) * (GPT_FTU_MODULES_NUM_U8))
#define GPT_FCPIT_MODULE                       (GPT_TPU_MODULE + (GPT_TPU_CHANNEL_NUM * GPT_TPU_MODULES_NUM))
#define GPT_TSTMP_MODULE                       (GPT_FCPIT_MODULE + (GPT_FCPIT_CHANNEL_NUM * GPT_FCPIT_MODULES_NUM))
#define GPT_AONTIMER_MODULE                    (GPT_TSTMP_MODULE + (GPT_TSTMP_CHANNEL_NUM * GPT_TSTMP_MODULES_NUM))
#define GPT_RTC_MODULE                         (GPT_AONTIMER_MODULE + (GPT_AONTIMER_CHANNEL_NUM * GPT_AONTIMER_MODULES_NUM))
#define GPT_PTIMER_MODULE                      (GPT_RTC_MODULE + (GPT_RTC_CHANNEL_NUM * GPT_RTC_MODULES_NUM))
#define GPT_EFTU_MODULE                        (GPT_PTIMER_MODULE + (GPT_PTIMER_CHANNEL_NUM * GPT_PTIMER_MODULES_NUM))

#define GPT_HW_PREDEFTIMER_NUM                 (4U) /** @brief number for channels predef timer supported by the platform */


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"
#if (GPT_PRECOMPILE_SUPPORT == STD_OFF)
extern const Gpt_ConfigType Gpt_Config;
#endif
#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* GPT_CFG_H */

/** @} */
