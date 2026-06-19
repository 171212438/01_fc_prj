/**
*   @file    Dio_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Dio - Pre-Compile configurations for DIO driver.
*   @details Pre-Compile configuration file for DIO driver.
*
*   @addtogroup DIO
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DIO
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
*   0.1.0       14/07/2021    QXW0071       N/A          DIO Initial Version
*   0.2.0       27/09/2023    QXW0105       N/A          DIO Support Multi-Core
*   0.3.0       20/10/2023    QXW0105       N/A          N/A
*   0.4.0       20/11/2023    QXW0105       N/A          optimize code
==================================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Dio.h"

#if (defined(DIO_PRECOMPILE_SUPPORT) || defined(DIO_LINKTIME_SUPPORT))

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

#define DIO_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Dio_MemMap.h"

/**
* @brief
* @details
*
* @api
*/
/* PRQA S 3408, 1504,0684,0777,0779,1037 EOF
 *#Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *#Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 *#Misra-C:2012 Rule-1.1 The program shall contain no violations of the standard C syntax and constraints, and shall not exceed the implementation's translation limits.
 *#Misra-C:2012 Rule-5.1 External identifiers shall be distinct.
 *#Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct.
 *Reason: it has no effect
 */
DIO_DATA_SECTION const Dio_PortLevelType Dio_u32ValidPortPins[DIO_NUM_PORTS_U16] =
{
    (Dio_PortLevelType)0xFFFFFFDFUL,
    (Dio_PortLevelType)0xFFFFFFFBUL,
    (Dio_PortLevelType)0xFFFFFFFFUL,
    (Dio_PortLevelType)0xFFFF9FFFUL,
    (Dio_PortLevelType)0x0FFFFFFFUL,
    (Dio_PortLevelType)0x01FFFFFFUL,
    (Dio_PortLevelType)0x00FFFFFFUL,
    (Dio_PortLevelType)0x00FFFFFFUL,
    (Dio_PortLevelType)0x00FFFFFFUL
};






/**
* @brief          CoreConfiguration of channel in configuration LED1.
*/
DIO_DATA_SECTION const uint32 DioConf_DioChannel_LED1_CoreInfo[3] = {0x1,0x1,0x1};
/**
* @brief          CoreConfiguration of channel in configuration DioChannel_B10.
*/
DIO_DATA_SECTION const uint32 DioConf_DioChannel_DioChannel_B10_CoreInfo[3] = {0x1,0x1,0x1};
/**
* @brief          CoreConfiguration of channel in configuration DioChannel_B12.
*/
DIO_DATA_SECTION const uint32 DioConf_DioChannel_DioChannel_B12_CoreInfo[3] = {0x1,0x1,0x1};
/**
* @brief          CoreConfiguration of channel in configuration ETH_MDIOSEL.
*/
DIO_DATA_SECTION const uint32 DioConf_DioChannel_ETH_MDIOSEL_CoreInfo[3] = {0x1,0x1,0x1};
/**
* @brief          CoreConfiguration of channel in configuration LED2.
*/
DIO_DATA_SECTION const uint32 DioConf_DioChannel_LED2_CoreInfo[3] = {0x1,0x1,0x1};
/**
* @brief          CoreConfiguration of channel in configuration ETH_PHYRESET.
*/
DIO_DATA_SECTION const uint32 DioConf_DioChannel_ETH_PHYRESET_CoreInfo[3] = {0x1,0x1,0x1};
/**
* @brief          CoreConfiguration of channel in configuration LED3.
*/
DIO_DATA_SECTION const uint32 DioConf_DioChannel_LED3_CoreInfo[3] = {0x1,0x1,0x1};
/**
* @brief          Data structure for configuration DioConfig.
*/
DIO_DATA_SECTION const Dio_ConfigType Dio_Config =
{
        
    NULL_PTR
    
};


/**
* @brief          List of channel groups in configuration DioConfig.
*/

DIO_DATA_SECTION const Dio_CoreConfigInfoType Dio_CoreConfigInfo[DioConf_DioChannel_CoreConfigInfo_NUM] = {
    {DioConf_DioPort_PTA, DioConf_DioChannel_LED1, DioConf_DioChannel_LED1_CoreInfo},
    {DioConf_DioPort_PTB, DioConf_DioChannel_DioChannel_B10, DioConf_DioChannel_DioChannel_B10_CoreInfo},
    {DioConf_DioPort_PTB, DioConf_DioChannel_DioChannel_B12, DioConf_DioChannel_DioChannel_B12_CoreInfo},
    {DioConf_DioPort_PTC, DioConf_DioChannel_ETH_MDIOSEL, DioConf_DioChannel_ETH_MDIOSEL_CoreInfo},
    {DioConf_DioPort_PTD, DioConf_DioChannel_LED2, DioConf_DioChannel_LED2_CoreInfo},
    {DioConf_DioPort_PTE, DioConf_DioChannel_ETH_PHYRESET, DioConf_DioChannel_ETH_PHYRESET_CoreInfo},
    {DioConf_DioPort_PTE, DioConf_DioChannel_LED3, DioConf_DioChannel_LED3_CoreInfo},
};




#define DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Dio_MemMap.h"

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/


/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/


#endif /* (defined(DIO_PRECOMPILE_SUPPORT) || defined(DIO_LINKTIME_SUPPORT)) */

#ifdef __cplusplus
}
#endif

/** @} */
