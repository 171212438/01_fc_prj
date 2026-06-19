/**
*   @file    CDD_QDT_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR QDT - contains the configuration data of the QDT driver
*   @details Contains the configuration data of the QDT driver
*
*   @addtogroup QDT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : QDT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2025 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       2024/03/10    Flagchip073   N/A          QDT Initial Version
==================================================================================================*/

#ifndef CDD_QDT_CFG_H
#define CDD_QDT_CFG_H

#ifdef __cplusplus
extern "C"{
#endif
/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Mcal.h"
#include "Common_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define QDT_VENDOR_ID_CFG                       255

#define QDT_AR_RELEASE_MAJOR_VERSION_CFG        4
#define QDT_AR_RELEASE_MINOR_VERSION_CFG        6
#define QDT_AR_RELEASE_REVISION_VERSION_CFG     0

#define QDT_SW_MAJOR_VERSION_CFG                1
#define QDT_SW_MINOR_VERSION_CFG                5
#define QDT_SW_PATCH_VERSION_CFG                1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/* QDT Pre Compile Switch */
#define QDT_PRECOMPILE_SUPPORT (STD_ON)

/**
*   @brief  Switches the Development Error Detection and Notification on or off.
*        STD_ON: Enabled. STD_OFF: Disabled.
*
*/
#define QDT_DEV_ERROR_DETECT                  (STD_ON)

/**
*   @brief  Adds or removes the service Qdt_GetVersionInfo() from the code.
*        STD_ON: Qdt_GetVersionInfo() can be used. STD_OFF: Qdt_GetVersionInfo() can not be used.
*
*/
#define QDT_GET_VERSION_INFO_API              (STD_OFF)

/**
*   @brief  Adds or removes the service Qdt_DeInit() from the code.
*        STD_ON: Qdt_DeInit() can be used. STD_OFF: Qdt_DeInit() can not be used.
*
*/
#define QDT_DEINIT_API              (STD_OFF)

/**
* @brief define the QDT instance number
*/
#define QDT_MAX_INSTANCE                       (4U)

/**
* @brief define the QDT channel number
*/
#define QDT_MAX_CHANNEL                       (4U)

/**
* @brief define the QDT InstanceId
*/
#define QDT_INSTANCE                          (0U)

/****************************QDT0 Interrupt*******************************/
#define  QDT_INSTANCE0_TIME_OVERFLOW_INT    STD_OFF
#define  QDT_INSTANCE0_WDG_TIMEOUT_INT    STD_OFF
#define  QDT_INSTANCE0_CHANNELL0_INT    STD_OFF
#define  QDT_INSTANCE0_CHANNELL1_INT    STD_OFF
#define  QDT_INSTANCE0_INT                      STD_OFF
#define  QDT_INSTANCE0_CONTROLLER_ID            (0)


#define QDT_ECUC_PARTITIONS_NUM   (1U)


#define QDT_ECUC_CORES_NUM   (1U)

#define QDT_SUPPORT_MULTICORE (STD_OFF)

#define QDT_CTRL_CONFIGURED (1U)
/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif    /* CDD_QDT_CFG_H */
/**@}*/



