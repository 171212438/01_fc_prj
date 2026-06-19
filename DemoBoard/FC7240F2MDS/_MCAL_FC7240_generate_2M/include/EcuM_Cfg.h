/**
*   @file EcuM_Cfg.h
*   @version 0.5.0

*   @brief   AUTOSAR EcuM configuration
*   @details This file contains AUTOSAR EcuM configuration
*
*   @addtogroup EcuM
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.1
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 0.5.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
#ifndef ECUM_CFG_H
#define ECUM_CFG_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/


/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ECUM_CFG_AR_RELEASE_MAJOR_VERSION          4
#define ECUM_CFG_AR_RELEASE_MINOR_VERSION          6
#define ECUM_CFG_AR_RELEASE_REVISION_VERSION       0
#define ECUM_CFG_SW_MAJOR_VERSION                  0
#define ECUM_CFG_SW_MINOR_VERSION                  5
#define ECUM_CFG_SW_PATCH_VERSION                  0
#define ECUM_CFG_VENDOR_ID                         174
#define ECUM_CFG_MODULE_ID                         121
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
 *                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
/* ========= user defined wakeup sources ========= */


#if (defined EcuMConf_EcuMWakeupSource_EcuMWakeupSource_0) /* to prevent double declaration */
#error EcuMConf_EcuMWakeupSource_EcuMWakeupSource_0 already defined
#endif
/** @brief Identifier for wakeup source EcuMWakeupSource_0*/
#define EcuMConf_EcuMWakeupSource_EcuMWakeupSource_0 ((uint32)((uint32)1U<<0))



/* ======== Sleep modes ======== */


#if (defined EcuMConf_EcuMSleepMode_EcuMSleepMode_0) /* to prevent double declaration */
#error EcuMConf_EcuMSleepMode_EcuMSleepMode_0 already defined
#endif
/** @brief Identifier for wakeup source EcuMSleepMode_0*/
#define EcuMConf_EcuMSleepMode_EcuMSleepMode_0 0x0U


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef uint32 EcuM_WakeupSourceType; /**< @brief variable type for ECU Manager wakeup sources*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* ECUM_CFG_H */
/** @} */
