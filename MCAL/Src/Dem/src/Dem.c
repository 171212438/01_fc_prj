/**
*   @file    Dem.c
*   @version 1.5.1

*   @brief   AUTOSAR DEM - Dem functions definition.
*   @details This file contains the Dem functions definition.
*
*   @addtogroup Dem
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC4150
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

#include "Mcal.h"
#include "Dem.h"
#include "Dem_version.h"

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DEM_AR_RELEASE_MAJOR_VERSION
    #error "Autosar release major version is not defined. "
#elif (DEM_AR_RELEASE_MAJOR_VERSION != DEM_CFG_AR_RELEASE_MAJOR_VERSION)
    #error "Autosar release major version is not matched. "
#endif

#ifndef DEM_SW_MAJOR_VERSION
    #error "Software major version is not defined. "
#elif (DEM_SW_MAJOR_VERSION != DEM_CFG_SW_MAJOR_VERSION)
    #error "Software major version is not matched. "
#endif

#ifndef DEM_SW_MINOR_VERSION
    #error "Software minor version is not defined. "
#elif (DEM_SW_MINOR_VERSION != DEM_CFG_SW_MINOR_VERSION)
    #error "Software minor version is not matched. "
#endif

#ifndef DEM_SW_PATCH_VERSION
    #error "Software patch version is not defined. "
#elif (DEM_SW_PATCH_VERSION != DEM_CFG_SW_PATCH_VERSION)
    #error "Software patch major version is not matched. "
#endif


/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define DEM_START_SEC_CODE
#include "Dem_MemMap.h"

/*================================================================================================*/
/**
* @brief   This function sets the error status.
* @details This is a function stub only. It loads Dem_EventId2 = EventId and
*          Dem_EventStatus2 = EventStatus and returns success.
*
* @param[in]     EventId        ID of the event
* @param[in]     EventStatus    status of the event
* @return        Std_ReturnType This function is always successful
*
*/
DEM_TEXT_SECTION Std_ReturnType Dem_SetEventStatus(Dem_EventIdType EventId,
                                                   Dem_EventStatusType EventStatus)
{
    (void)EventId;
    (void)EventStatus;
    return (E_OK);
}


#define DEM_STOP_SEC_CODE
#include "Dem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
