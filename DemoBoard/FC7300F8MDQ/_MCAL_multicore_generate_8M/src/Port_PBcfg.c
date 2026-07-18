/**
*   @file    Port_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - Post Build configuration Port source file.
*   @details Post Build configuration file for Port driver.
*
*   @addtogroup PORT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : PORT
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
*   0.1.0       14/07/2023    QXW0071       N/A          PORT Initial Version
*   0.2.0       15/09/2023    QXW0121       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0121       N/A          Multicore support optimization
*   0.4.0       11/10/2023    QXW0121       N/A          Multicore support optimization
*   0.5.0       18/03/2024    QXW0122       N/A          Add support for FC7240
==================================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Port.h"


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
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/* PRQA S 4332 EOF
   4332:An expression of 'essentially signed' type (%1s) is being cast to enum type, '%2s'.
REASON:The value of an expression should not be cast to an inappropriate type. No problem doing this as the value is within range of the cast type. 
*/

/**
* @brief Pin default configuration data for configPB
*/
PORT_DATA_SECTION static const Port_PinConfigType PortA_ConfigPins[MAX_CONFIGURED_PORTA_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=1,.PS=1}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=0,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)24, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=0,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)25, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)26, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)27, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)28, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=0,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)29, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=0,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)30, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)31, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortB_ConfigPins[MAX_CONFIGURED_PORTB_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)4,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)5,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=0,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=0,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)24, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)25, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)26, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)27, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)28, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)29, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)30, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)31, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortC_ConfigPins[MAX_CONFIGURED_PORTC_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)24, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)25, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)26, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)27, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)28, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)29, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)30, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)31, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortD_ConfigPins[MAX_CONFIGURED_PORTD_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)4,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)5,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)24, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)25, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)26, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)27, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)28, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)29, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)30, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)31, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortE_ConfigPins[MAX_CONFIGURED_PORTE_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)4,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)5,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)24, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)25, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)26, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)1, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)27, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortF_ConfigPins[MAX_CONFIGURED_PORTF_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)4,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)5,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)24, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortG_ConfigPins[MAX_CONFIGURED_PORTG_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)4,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)5,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortH_ConfigPins[MAX_CONFIGURED_PORTH_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)4,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)5,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=0,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=1,.PS=1}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=1,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)FALSE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};

PORT_DATA_SECTION static const Port_PinConfigType PortI_ConfigPins[MAX_CONFIGURED_PORTI_U8]=
{
    {.u8Pin = (Port_PinNumber)0,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)1,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)2,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)3,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)4,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=4,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)5,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)6,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=3,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_OUT, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)7,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)8,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)9,  .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)10, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)11, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=5,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)12, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)13, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)14, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)15, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)16, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=2,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)17, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)18, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)19, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)20, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)21, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)22, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}},
    {.u8Pin = (Port_PinNumber)23, .u32Pcr = {.uPcrRegValue = {.DWP=0,.ESTOP=0,.MUX=1,.DSE1=0,.DSE0=0,.ODE=0,.PFE=0,.SRE=0,.PE=0,.PS=0}}, .u8Pdo = (uint8)0, .ePddr = PORT_PIN_IN, .tConfigPinFlag = {.bDirChangableFlag = (boolean)TRUE, .bModeChangableFlag = (boolean)TRUE}}
};


#if (0UL != MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8)
PORT_DATA_SECTION static const Port_DigitalFilterConfigType Port_ConfigDigitalFilterPorts[MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8]=
{

};

#endif /* (0UL != MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8) */

/**
* @brief This table contains all the Configured Port Pin parameters and the
*        number of Port Pins configured by the tool for the post-build mode
*/
PORT_DATA_SECTION const Port_ConfigType Port_Config =
{
    {
        PortA_ConfigPins,
        PortB_ConfigPins,
        PortC_ConfigPins,
        PortD_ConfigPins,
        PortE_ConfigPins,
        PortF_ConfigPins,
        PortG_ConfigPins,
        PortH_ConfigPins,
        PortI_ConfigPins,
    },
#if (0UL != MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8)
    Port_ConfigDigitalFilterPorts
#else
    NULL_PTR
#endif
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"
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


#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
