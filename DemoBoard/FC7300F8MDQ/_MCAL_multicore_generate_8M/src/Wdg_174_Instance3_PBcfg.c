/**
*   @file    Wdg_Instance3_PBcfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Wdg - contains the data exported by the watchodg module
*   @details Contains the information that will be exported by the module, as requested by Autosar.
*
*   @addtogroup WDG
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : WDG
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
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       07/14/2023    QXW0074       N/A          WDG Initial Version
*   0.2.0       09/27/2023    QXW0074       N/A          Add multicore support
*   0.3.0       10/20/2023    QXW0074       N/A          Optimization code
*   0.4.0       11/17/2023    QXW0074       N/A          Optimization Plugins
*   0.5.0       03/16/2024    QXW0074       N/A          Fix some compilation issues and
*                                                        Changed some functions to inline
*   0.6.0       03/22/2024    QXW0074       N/A          Add FC7240 platform support
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by user without hardware timer and optimization code
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

#include "Wdg_Reg.h"
#include "Wdg_LLD.h"
#include "Wdg_HLD.h"
#include "Wdg_174_Instance3.h"

#if (WDG_INSTANCE3 == STD_ON)

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/



#define WDG_START_SEC_CODE

#include "Wdg_MemMap.h"



#define WDG_STOP_SEC_CODE

#include "Wdg_MemMap.h"

#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"
#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"


#endif /* #if WDG_INSTANCE0 == STD_ON*/
#ifdef __cplusplus
}
#endif
