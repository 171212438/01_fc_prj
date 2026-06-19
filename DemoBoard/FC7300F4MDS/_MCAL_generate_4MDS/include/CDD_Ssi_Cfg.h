/**
*   @file    CDD_Ssi_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR SSI - contains the configuration data of the SSI driver
*   @details Contains the configuration data of the SSI driver
*
*   @addtogroup SSI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SSI
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
*   1.1.0       2025/03/18    Flagchip054   N/A           SSI Initial Version
==================================================================================================*/

#ifndef CDD_SSI_CFG_H
#define CDD_SSI_CFG_H

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
#define SSI_VENDOR_ID_CFG                       174

#define SSI_AR_RELEASE_MAJOR_VERSION_CFG        4
#define SSI_AR_RELEASE_MINOR_VERSION_CFG        6
#define SSI_AR_RELEASE_REVISION_VERSION_CFG     0

#define SSI_SW_MAJOR_VERSION_CFG                1
#define SSI_SW_MINOR_VERSION_CFG                5
#define SSI_SW_PATCH_VERSION_CFG                1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/* SSI Pre Compile Switch */
#define SSI_PRECOMPILE_SUPPORT (STD_ON)

/**
 * @brief         Whether the ADC Units have Calibration configuration
 *
 */
#define SSI_SUBINS_ANA_SUPPORT               ((STD_OFF))

/**
*   @brief  Switches the Development Error Detection and Notification on or off.
*        STD_ON: Enabled. STD_OFF: Disabled.
*
*/
#define SSI_DEV_ERROR_DETECT                  (STD_OFF)

/**
*   @brief  Pre-processor switch to enable and disable runtime error detection.
*        STD_ON: Enabled. STD_OFF: Disabled.
*
*/
#define SSI_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS    (STD_OFF)

/**
*   @brief  Adds or removes the service Ssi_GetVersionInfo() from the code.
*        STD_ON: Ssi_GetVersionInfo() can be used. STD_OFF: Ssi_GetVersionInfo() can not be used.
*
*/
#define SSI_GET_VERSION_INFO_API              (STD_ON)

/**
*   @brief  Adds or removes the service Ssi_DeInit() from the code.
*        STD_ON: Ssi_DeInit() can be used. STD_OFF: Ssi_DeInit() can not be used.
*
*/
#define SSI_DEINIT_API              (STD_ON)

/**
* @brief define the SSI instance number
*/
#define SSI_MAX_INSTANCE                       (1U)

/**
* @brief define the SSI channel number
*/
#define SSI_MAX_SUBINSTANCE                    (4U)

/**
* @brief define the SSI InstanceId
*/
#define SSI_INSTANCE                          (0U)

/****************************SSI0 Interrupt*******************************/
#define  SSI_INSTANCE0_INT                      STD_ON
#define  SSI_INSTANCE0_CONTROLLER_ID            (0)


#define SSI_ECUC_PARTITIONS_NUM   (1U)


#define SSI_ECUC_CORES_NUM   (1U)

#define SSI_SUPPORT_MULTICORE (STD_OFF)

#define SSI_CTRL_CONFIGURED (1U)
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

#endif    /* CDD_SSI_CFG_H */
/**@}*/



