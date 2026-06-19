/**
*   @file CDD_TrgSel_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR TrgSel - contains the configuration data of the TRGSEL driver
*   @details Contains the configuration data of the TRGSEL driver
*
*   @addtogroup TRGSEL_MODULE
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : TrgSel
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
*   0.1.0       17/09/2022    QXW0087       N/A          Trgsel Initial Version
*   0.2.0       15/03/2023    QXW0087       N/A          Refactor of Trgsel Driver
*   0.3.0       12/10/2023    QXW0103       N/A          Add Multicore Support，Delete Unused Drivers
*   0.4.0       13/11/2023    QXW0103       N/A          Fix Bugs, Add Default config
*   0.5.0       16/01/2024    QXW0103       N/A          Fix Bugs, Optimize Code
*   0.6.0       18/03/2024    QXW0103       N/A          Add Support For FC7240
==================================================================================================*/

#ifndef CDD_TRGSEL_CFG_H
#define CDD_TRGSEL_CFG_H

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

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: These macros are distinct */
#define TRGSEL_VENDOR_ID_CFG                           174

#define TRGSEL_CFG_AR_RELEASE_MAJOR_VERSION_CFG        4
#define TRGSEL_CFG_AR_RELEASE_MINOR_VERSION_CFG        6
#define TRGSEL_CFG_AR_RELEASE_REVISION_VERSION_CFG     0

#define TRGSEL_CFG_SW_MAJOR_VERSION_CFG                1
#define TRGSEL_CFG_SW_MINOR_VERSION_CFG                5
#define TRGSEL_CFG_SW_PATCH_VERSION_CFG                1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define TRGSEL_CFG_AR_RELEASE_MAJOR_VERSION        4U
#define TRGSEL_CFG_AR_RELEASE_MINOR_VERSION        6U
#define TRGSEL_CFG_AR_RELEASE_REVISION_VERSION     0U
#define TRGSEL_CFG_SW_MAJOR_VERSION                1U
#define TRGSEL_CFG_SW_MINOR_VERSION                5U
#define TRGSEL_CFG_SW_PATCH_VERSION                1U
#define TRGSEL_CFG_VENDOR_ID                       174U
/* PRQA S 791 -- */
/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


#define TRGSEL_PRECOMPILE_SUPPORT              (STD_OFF)

/**
*   @brief  Switches the Development Error Detection and Notification on or off.
*        STD_ON: Enabled. STD_OFF: Disabled.
*
*/
#define TRGSEL_DEV_ERROR_DETECT                  (STD_ON)

/**
* @{
*   @brief Configuration of Optional API's
*/
/**
*   @brief  Adds or removes the service TrgSel_GetVersionInfo() from the code.
*        STD_ON: TrgSel_GetVersionInfo() can be used. STD_OFF: TrgSel_GetVersionInfo() can not be used.
*
*/
#define TRGSEL_GET_VERSION_INFO_API              (STD_ON)

/**
*   @brief  Adds or removes the service TrgSel_ConfigTrgSel() from the code.
*        STD_ON: TrgSel_ConfigTrgSel() can be used. STD_OFF: TrgSel_ConfigTrgSel() can not be used.
*
*/
#define TRGSEL_CONFIG_TRGSEL_API                 (STD_ON)

/**
* @{
*   @brief Configuration of Optional API's
*/
/**
*   @brief  Adds or removes the service TrgSel_DeInit() from the code.
*        STD_ON: TrgSel_DeInit() can be used. STD_OFF: TrgSel_DeInit() can not be used.
*
*/
#define TRGSEL_DEINIT_API                        (STD_ON)


/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL0_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL1_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL2_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL3_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL4_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL5_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL6_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL7_ENABLED                          (STD_ON)

/**
*   @brief  Enable or disable TRGSEL0, if enabled , the TrgSel0 will be initialized in TrgSel_Init().
*/
#define TRGSEL8_ENABLED                          (STD_ON)


#define TRGSEL_MAX_INSTANCE                    (9)
/**
* @brief define number of trigger mux registers
*/

#define TRGSEL0_NUM_OUTPUTS                    (40U)
#define TRGSEL1_NUM_OUTPUTS                    (8U)
#define TRGSEL2_NUM_OUTPUTS                    (28U)
#define TRGSEL3_NUM_OUTPUTS                    (32U)

#define TRGSEL0_NUM_REGS    (10U)
#define TRGSEL1_NUM_REGS    (2U)
#define TRGSEL2_NUM_REGS    (7U)
#define TRGSEL3_NUM_REGS    (8U)


#define TRGSEL0_NUM_SOURCES                    (128U)
#define TRGSEL1_NUM_SOURCES                    (64U)
#define TRGSEL2_NUM_SOURCES                    (52U)
#define TRGSEL3_NUM_SOURCES                    (64U)





#define TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT

#define TRGSEL4_NUM_OUTPUTS                    (20U)
#define TRGSEL5_NUM_OUTPUTS                    (32U)
#define TRGSEL6_NUM_OUTPUTS                    (16U)
#define TRGSEL7_NUM_OUTPUTS                    (8U)
#define TRGSEL8_NUM_OUTPUTS                    (8U)

#define TRGSEL0_MAX_OUTPUTS                    (40U)
#define TRGSEL0_1_MAX_OUTPUTS                  (48U)
#define TRGSEL0_2_MAX_OUTPUTS                  (76U)
#define TRGSEL0_3_MAX_OUTPUTS                  (108U)
#define TRGSEL0_4_MAX_OUTPUTS                  (132U)
#define TRGSEL0_5_MAX_OUTPUTS                  (164U)
#define TRGSEL0_6_MAX_OUTPUTS                  (180U)
#define TRGSEL0_7_MAX_OUTPUTS                  (188U)
#define TRGSEL0_8_MAX_OUTPUTS                  (196U)

#define TRGSEL4_NUM_REGS    (5U)
#define TRGSEL5_NUM_REGS    (8U)
#define TRGSEL6_NUM_REGS    (4U)
#define TRGSEL7_NUM_REGS    (2U)
#define TRGSEL8_NUM_REGS    (2U)

#define TRGSEL4_NUM_SOURCES                    (128U)
#define TRGSEL5_NUM_SOURCES                    (64U)
#define TRGSEL6_NUM_SOURCES                    (128U)
#define TRGSEL7_NUM_SOURCES                    (64U)
#define TRGSEL8_NUM_SOURCES                    (64U)

/** Variant aware structure.c file. */
#define TRGSEL_CONF_PB \
    extern const TrgSel_ConfigType TrgSel_Config;

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

#endif    /* CDD_TRGSEL_CFG_H */
/**@}*/


