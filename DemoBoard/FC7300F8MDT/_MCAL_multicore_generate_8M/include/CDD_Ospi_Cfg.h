/**
*   @file    CDD_Ospi_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ospi - Ospi configuration header file.
*   @details This file is the header containing all the necessary information for OSPI
*            module configuration(s).
*   @addtogroup OSPI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : OSPI
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
==================================================================================================*/

#ifndef CDD_OSPI_CFG_H
#define CDD_OSPI_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==============================================================================
*                              SOURCE FILE VERSION INFORMATION
==============================================================================*/
#define OSPI_CFG_H_MODULE_ID                    255
#define OSPI_CFG_H_VENDOR_ID                    174
#define OSPI_CFG_H_PRODUCT_ID                   51

#define OSPI_CFG_H_AR_REL_MAJ_VER               4
#define OSPI_CFG_H_AR_REL_MIN_VER               6
#define OSPI_CFG_H_AR_REL_REV_VER               0
#define OSPI_CFG_H_SW_MAJOR_VER                 1
#define OSPI_CFG_H_SW_MINOR_VER                 5
#define OSPI_CFG_H_SW_PATCH_VER                 1


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/*
* @file           CDD_Ospi_Cfg.h
*/
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
/**
* @brief Switches the Development Error functionality ON or OFF.
* @details Switches the Development Error Detection and Notification ON or OFF.
* @implements OSPI.
*/
#define OSPI_DEV_ERROR_DETECT           (STD_ON)

/**
* @brief Switches the Production Error functionality ON or OFF.
* @details Switches the Production Error Detection and Notification ON or OFF.
* @implements OSPI.
*/
#define OSPI_DIS_DEM_REPORT_ERR_STAT            (STD_ON)

/**
* @brief Enables code related to Hyperbus protocol memories.
* @details Enables code related to Hyperbus protocol memories.
* @implements OSPI.
*/
#define OSPI_HYPERBUS_HANDLING_ALLOWED  (STD_ON)


/**
* @brief Enables code related to Regular command protocol memories.
* @details Enables code related to Regular command protocol memories.
* @implements OSPI.
*/
#define OSPI_REGULAR_COMMAND_HANDLING_ALLOWED  (STD_OFF)


/**
* @brief Enables code related to DMA.
* @details Enables code related to DMA.
* @implements OSPI.
*/
#define OSPI_DMA_HANDLING_ALLOWED  (STD_ON)

/**
* @brief Enables the Multicore Support.
* @details Enables the Multicore Support.
* @implements OSPI.
*/
#define OSPI_MULTICORE_SUPPORT  (STD_OFF)

#define OSPI_MAX_HWUNIT   (1u)

#define OSPI_MAX_DEVICE  (1u)

/*==================================================================================================
 *                                     DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Define values for Autosar configuration variants.
* @details Define values for Autosar configuration variants.
*/
#define OSPI_VARIANT_PRECOMPILE  (0)

#define OSPI_VARIANT_POSTBUILD   (1)

#define OSPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ospi_MemMap.h"




/**
* @brief Defines the use of Post-Build(PB) support.
* @details VARIANT-POST-BUILD: Parameters with "Pre-compile time", 
*        "Link time" and "Post-build time" are allowed in this variant.
* @implements OSPI.
*/
#define OSPI_CONFIG_VARIANT      (OSPI_VARIANT_POSTBUILD)

#define OSPI_CFG_EXTERN_DECLARATIONS \
extern const Ospi_ConfigType OspiConfigSet_0;



#define OSPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Ospi_MemMap.h"

/*==================================================================================================
 *                                           Non AUTOSAR DEFINES
==================================================================================================*/


/*==================================================================================================
*                                            ENUMS
==================================================================================================*/


/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
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

#endif /*CDD_OSPI_CFG_H*/

/** @} */
