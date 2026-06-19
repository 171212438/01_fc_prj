
/**
*   @file    CDD_Ospi_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Ospi - Post-Build (PB) configuration data code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
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

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/*
* @file           CDD_Ospi_PBcfg.c
*/
#include "Mcal.h"
#include "CDD_Ospi.h"
#include "Ospi_Reg.h"
#include "Ospi_Types.h"
#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF)
#include "Dem.h"
#endif


/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

#define OSPI_START_SEC_CODE
#include "Ospi_MemMap.h"

#define OSPI_STOP_SEC_CODE
#include "Ospi_MemMap.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/* Ospi Transfer Error Notification */

/* Ospi Transfer Complete Notification */

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

#define OSPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define OSPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define OSPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ospi_MemMap.h"

/* Array of DSPI Unit configurations */
static const Ospi_DeviceConfig DeviceConfig_PB[OSPI_MAX_DEVICE] =
{
/**
* @brief            Enables or not the DQS mode. 
*/
{     TRUE,
/**
* @brief            Data source selection type for QuadSPI peripheral.  
*/
    DQS_EXTERNAL_PADINPUT,
/**
* @brief            Describe the clock division mode.   
*/
    OSPI_CLOCK_DIV_4,
/**
* @brief            Select the multiplex type of the clock source.    
*/
    OSPI_MUX_PLL1,
/**
* @brief            Select the endian type, big or small endian.     
*/   
    OSPI_LITTLE_ENDIAN,
/**
* @brief            The address of the hyperram peripheral.     
*/
    0x00000000,
/**
* @brief            Top address of hyperram peripherals.     
*/
    0x6A000000,
/**
* @brief            Flash column Address Space which defines the width of the column address.     
*/
    3,
/**
* @brief            Indicates whether the addressing mode is in words. If set to 0, byte addressing is indicated.     
*/
    0,
/**
* @brief            Set the time for timeout. If the time is exceeded, the corresponding loop will be jumped out.     
*/
    1000000,
/**
* @brief            Serial flash CS hold time in terms of serial flash clock cycles.    
*/
    1,
/**
* @brief            Serial flash CS setup time in terms of serial flash clock cycles.      
*/
    1,
/**
* @brief            Switch Delay Line into RWDS for timing. RWDS will delay for DLLINE_CFG * Tcell.     
*/
    3,
#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
/**
* @brief            Dma channel associated to the Ospi Tx and Rx instance.
*/
    DMA_INSTANCE_0,
    4U,
    DMA_INSTANCE_0,
    3U,
    8U,
    7U,
#endif /* STD_ON == OSPI_DMA_HANDLING_ALLOWED */
/**
* @brief            Notify when the transfer is complete. 
*/
    NULL_PTR,
/**
* @brief            Notify when a transmission error occurs.
*/
    NULL_PTR,
}
};

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
/* Driver Configuration */
const Ospi_ConfigType OspiConfigSet_0 =
{
 
        DeviceConfig_PB
    /**
    * @brief   DEM error parameters
    */
#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF)
    ,{(STD_OFF), ((Dem_EventIdType)0) },
     {(STD_OFF), ((Dem_EventIdType)0) },
     {(STD_OFF), ((Dem_EventIdType)0) }
#endif /* OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF */
};


#define OSPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ospi_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
