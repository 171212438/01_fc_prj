/**
*   @file    Dem_IntErrId.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dem
*   @details This file contains AUTOSAR Dem
*
*   @addtogroup Dem
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef DEM_INTERRID_H
#define DEM_INTERRID_H

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DEM_CFG_VENDOR_ID                      174
#define DEM_CFG_MODULE_ID                      54

#define DEM_CFG_AR_RELEASE_MAJOR_VERSION       4
#define DEM_CFG_AR_RELEASE_MINOR_VERSION       6
#define DEM_CFG_AR_RELEASE_REVISION_VERSION    0
#define DEM_CFG_SW_MAJOR_VERSION               1
#define DEM_CFG_SW_MINOR_VERSION               5
#define DEM_CFG_SW_PATCH_VERSION               1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#include "Dem_Types.h"
#include "Rte_Dem_Type.h"

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/


/** @brief Identifier for DEM error DemEventParameter_0*/
#define DemConf_DemEventParameter_DemEventParameter_0   ((Dem_EventIdType) 0x1)

/** @brief Identifier for DEM error DemEventParameter_EthSafety*/
#define DemConf_DemEventParameter_DemEventParameter_EthSafety   ((Dem_EventIdType) 0x58)

/** @brief Identifier for DEM error DemEventParameter_MscTimeout*/
#define DemConf_DemEventParameter_DemEventParameter_MscTimeout   ((Dem_EventIdType) 0x42)


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef __cplusplus
}
#endif

/** @} */

#endif /* DEM_INTERRID_H */
