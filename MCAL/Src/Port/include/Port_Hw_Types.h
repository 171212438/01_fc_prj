/**
 *   @file    Port_Hw_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Port - hardware specific type definition
 *   @details This file contains the PORT Autosar hardware specific type
 * definition
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
*   0.3.0       10/10/2023    QXW0121       N/A          Multicore support
optimization
*   0.4.0       11/10/2023    QXW0121       N/A          Multicore support
optimization
==================================================================================================*/
#ifndef PORT_HW_TYPES_H
#define PORT_HW_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Port_Reg.h"

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/**
 * @brief Possible output status of a port pin.
 */
#define PORT_PIN_LEVEL_LOW_U8          ((uint8)0) /**< @brief Sets port pin in '0' logic. */
#define PORT_PIN_LEVEL_HIGH_U8         ((uint8)1) /**< @brief Sets port pin in '1' logic. */
#define PORT_PIN_LEVEL_NOTCHANGED_U8   ((uint8)2) /**< @brief No level changes for the port pin. */

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

#define PORT_USER_MODE_SOFTWARE_LOCKED (STD_OFF)

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

typedef enum
{
    Port_A = 0,
    Port_B,
    Port_C,
    Port_D,
    Port_E,
    Port_F,
    Port_G,
    Port_H,
    Port_I
} Port_Number;

/**
 * @brief Pin number in a port.
 * @details Each Port has 32 pins.This type indicate the pin's sequence number
 * in a port.
 * @implements Port_PinNumber_typedef
 */
typedef uint8 Port_PinNumber;

/**
 * @brief Data type for the symbolic name of a port pin.
 * @details Shall cover all available port pins. The type should be chosen for
 * the specific MCU platform (best performance).
 * @implements Port_PinType_typedef
 */
typedef uint16 Port_PinType;

typedef enum
{
    PORT_PIN_IN = 0, /**< @brief Sets port pin as input. */
    PORT_PIN_OUT,    /**< @brief Sets port pin as output. */
    PORT_PIN_HIGH_Z  /**< @brief Sets port pin as high-Z. */
} Port_PinDirectionType;

/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused
 * type declarations Reason: This type may not used by user */
typedef enum
{
    GET_LOCK_FAIL = 0, /**< @brief Get lock fail. */
    GET_LOCK_SUCCESS,  /**< @brief Get lock success. */
} Port_LockType;
/* PRQA S 1535 -- */

/**
 * @brief Different port pin modes.
 * @details A port pin shall be configurable with a number of port pin modes
 * (type Port_PinModeType). The type Port_PinModeType shall be used with the
 * function call Port_SetPinMode
 * @implements Port_PinModeType_typedef
 */
typedef uint8 Port_PinModeType;

/**
 * @brief   A PORT register value.
 * @details A port register shall be written with a 32 bits value (type
 * Port_RegValueType). The type Port_RegValueType shall be used with the
 * function call Port_SetPinMode
 *
 */
typedef uint32 Port_RegValueType;

/* PRQA S 750, 635 ++ #Misra-C:2012 Rule-19.2 A union type specifier has been
 * defined. #Misra-C:2012 Rule-6.1 Bit-fields shall only be declared with an
 * appropriate type Reason: This is a register feature, a union must be used */
typedef union
{
    struct
    {
        Port_RegValueType PS     : 1; /**< @brief Pull Select */
        Port_RegValueType PE     : 1; /**< @brief Pull Enable*/
        Port_RegValueType SRE    : 1; /**< @brief Slew Rate Enable */
        Port_RegValueType        : 1;
        Port_RegValueType PFE    : 1; /**< @brief Passive Filter Enable */
        Port_RegValueType ODE    : 1; /**< @brief Open Drain Enable */
        Port_RegValueType DSE0   : 1; /**< @brief Drive Strength 0 Enable */
        Port_RegValueType DSE1   : 1; /**< @brief Drive Strength 1 Enable */
        Port_RegValueType MUX    : 3; /**< @brief MUX cofiguration */
        Port_RegValueType        : 4;
        Port_RegValueType LK     : 1; /**< @brief Lock Control */
        Port_RegValueType IRQC   : 4; /**< @brief Interrupt Configuration */
        Port_RegValueType WKUDIS : 1; /**< @brief Wakeup Disable */
        Port_RegValueType ESTOP  : 1; /**< @brief Emergency Stop */
        Port_RegValueType        : 2;
        Port_RegValueType ISF    : 1; /**< @brief Interrupt Status Flag */
        Port_RegValueType DWP    : 5; /**< @brief Domain Write Protection */
        Port_RegValueType        : 1;
        Port_RegValueType DWPLK  : 1; /**< @brief Domain Write Protection Lock */
    } uPcrRegValue;
    Port_RegValueType u32PcrRegValue;
} Port_PcrRegValueType;
/* PRQA S 750, 635 -- */
typedef struct
{
    boolean bDirChangableFlag;  /**< @brief Direction changeability*/
    boolean bModeChangableFlag; /**< @brief Mode changeability*/
} Port_ConfigPortFlag;

/**
 * @brief   Single pin configuration.
 * @details This structure contains all configuration parameters of a single pin
 *          identified by @p PORT Pin.
 *
 * @api
 */
typedef struct
{
    Port_PinNumber        u8Pin;          /**< @brief Pin Defined on PORT */
    Port_PcrRegValueType  u32Pcr;         /**< @brief PCR Register */
    uint8                 u8Pdo;          /**< @brief Pad Data Output */
    Port_PinDirectionType ePddr;          /**< @brief Pad Data Direction */
    Port_ConfigPortFlag   tConfigPinFlag; /**< @brief Direction changebility*/
} Port_PinConfigType;

/**
 * @brief   Digital filter port configuration.
 * @details This structure contains all configuration parameters of a digital
 * filter port
 *
 * @api
 */
typedef struct
{
    uint8  u8FPort;     /**< Digital Filter Port */
    uint8  u8FClock;    /**< Digital Filter Clock */
    uint8  u8FWidth;    /**< Digital Filter Width */
    uint32 u32FPinMask; /**< Mask of pins for which digital filter is enabled */
} Port_DigitalFilterConfigType;

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif
/* PORT_HW_TYPES_H */
#endif
/** @} */
