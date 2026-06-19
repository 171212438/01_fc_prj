/**
*   @file    Rte_Type.h
*   @version 0.3.0
*
*   @brief   AUTOSAR Rte - driver API and development errors definition.
*   @details This file contains the Rte Autosar driver API and development errors definition.
*
*   @addtogroup Rte
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Rte
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 0.3.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/
#ifndef RTE_TYPE_H
#define RTE_TYPE_H
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define RTE_TRUE                                     1
#define RTE_FALSE                                    0
#define RTE_SERVER_RESPONSE_READY                    0
#define RTE_SERVER_RESPONSE_SUCCESS                  1
#define RTE_CLIENT_REQUESET_CLEAR                    0
#define RTE_CLIENT_REQUESET_SET                      1

#endif /* RTE_TYPE_H */
