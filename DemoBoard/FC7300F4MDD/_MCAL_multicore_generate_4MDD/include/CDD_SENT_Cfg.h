/**
*   @file    CDD_SENT_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR SENT - contains the configuration data of the SENT driver
*   @details Contains the configuration data of the SENT driver
*
*   @addtogroup SENT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SENT
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
*   0.1.0       2023/11/01    Flagchip073   N/A          SENT Initial Version
*   0.2.0       2023/11/12    Flagchip073   N/A          SENT Multicore Version
*   0.3.0       2023/11/20    Flagchip073   N/A          Add more SENT comments
*   0.4.0       2023/11/23    Flagchip073   N/A          Add SCHM files for SENT
==================================================================================================*/

#ifndef CDD_SENT_CFG_H
#define CDD_SENT_CFG_H

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
#define SENT_VENDOR_ID_CFG                       255

#define SENT_AR_RELEASE_MAJOR_VERSION_CFG        4
#define SENT_AR_RELEASE_MINOR_VERSION_CFG        6
#define SENT_AR_RELEASE_REVISION_VERSION_CFG     0

#define SENT_SW_MAJOR_VERSION_CFG                1
#define SENT_SW_MINOR_VERSION_CFG                5
#define SENT_SW_PATCH_VERSION_CFG                1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/* SENT Pre Compile Switch */
#define SENT_PRECOMPILE_SUPPORT (STD_ON)

/**
*   @brief  Switches the Development Error Detection and Notification on or off.
*        STD_ON: Enabled. STD_OFF: Disabled.
*
*/
#define SENT_DEV_ERROR_DETECT                  (STD_OFF)

/**
*   @brief  Adds or removes the service Sent_GetVersionInfo() from the code.
*        STD_ON: Sent_GetVersionInfo() can be used. STD_OFF: Sent_GetVersionInfo() can not be used.
*
*/
#define SENT_GET_VERSION_INFO_API              (STD_ON)

/**
*   @brief  Adds or removes the service Sent_DeInit() from the code.
*        STD_ON: Sent_DeInit() can be used. STD_OFF: Sent_DeInit() can not be used.
*
*/
#define SENT_DEINIT_API              (STD_ON)

/**
* @brief define the SENT instance number
*/
#define SENT_MAX_INSTANCE                       (2U)

/**
* @brief define the SENT channel number
*/
#define SENT_MAX_CHANNEL                       (4U)

/**
* @brief define the SENT InstanceId
*/
#define SENT_INSTANCE                          (0U)

/****************************SENT0 Interrupt*******************************/
#define  SENT_INSTANCE0_CHANNEL2_FAST_ERR_INT    STD_OFF
#define  SENT_INSTANCE0_CHANNEL2_SLOW_ERR_INT    STD_OFF
#define  SENT_INSTANCE0_CHANNEL2_FAST_MSG_INT    STD_ON
#define  SENT_INSTANCE0_CHANNEL2_SLOW_MSG_INT    STD_ON
#define  SENT_INSTANCE0_INT                      STD_ON
#define  SENT_INSTANCE0_CONTROLLER_ID            (0)
/****************************SENT1 Interrupt*******************************/
#define  SENT_INSTANCE1_CHANNEL2_FAST_ERR_INT    STD_OFF
#define  SENT_INSTANCE1_CHANNEL2_SLOW_ERR_INT    STD_OFF
#define  SENT_INSTANCE1_CHANNEL2_FAST_MSG_INT    STD_OFF
#define  SENT_INSTANCE1_CHANNEL2_SLOW_MSG_INT    STD_OFF
#define  SENT_INSTANCE1_INT                      STD_OFF
#define  SENT_INSTANCE1_CONTROLLER_ID            (1)


#define SENT_ECUC_PARTITIONS_NUM   (1U)

#define SENT_ECUC_CORES_NUM   (2U)

#define SENT_SUPPORT_MULTICORE (STD_ON)

#define SENT_CTRL_CONFIGURED (2U)
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

#endif    /* CDD_SENT_CFG_H */
/**@}*/



