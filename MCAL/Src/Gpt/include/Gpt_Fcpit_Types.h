/**
*   @file    Gpt_FCPit_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt - hardware specific type definition
*   @details This file contains the Gpt Autosar hardware specific type definition
*
*   @addtogroup GPT_FCPit
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_FCPIT
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
*   0.1.0       24/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and Gpt_ConfigChannelFcpitType
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_FCPIT_TYPES_H
#define GPT_FCPIT_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief FCPIT Channels defines
*/
#define FCPIT_CH_0                  ((uint8)0)
#define FCPIT_CH_1                  ((uint8)1)
#define FCPIT_CH_2                  ((uint8)2)
#define FCPIT_CH_3                  ((uint8)3)

/**
* @brief FCPIT 0
*/
#define GPT_FCPIT_0    ((uint8)0)
/**
* @brief FCPIT 1
*/
#define GPT_FCPIT_1    ((uint8)1)

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief
 */
/* PRQA S 750,635 ++ #Misra-C:2012 Rule-19.2 A union type specifier has been defined.
                     #Misra-C:2012 Rule-6.1 Bit-field shall only be declared with an appropriate type
 * Reason: This is a register feature, you must use a union and declare a bit_field like this */
typedef struct
{
    uint32 u32FcpitTriggerConfig;
    boolean bFcpitChainMode;
} Gpt_ConfigChannelFcpitType;
/* PRQA S 750,635 -- */
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_FCPIT_TYPES_H*/
/** @} */
