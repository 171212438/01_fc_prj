/**
*   @file    Gpio_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - Hardware access layer header file.
*   @details PORT Hardware access layer header file.
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
*   0.2.0       15/9/2023     QXW0121       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0121       N/A          Multicore support optimization
*   0.4.0       11/10/2023    QXW0121       N/A          Multicore support optimization
==================================================================================================*/
#ifndef GPIO_REGOPS_H
#define GPIO_REGOPS_H

#ifdef __cplusplus
extern "C"{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Gpio_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

/**
 * @brief Set pin output to 1
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
PORT_TEXT_SECTION LOCAL_INLINE void GPIO_HWA_SetPinOutput(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PSOR = (uint32)1 << u8Pin;
}

/**
 * @brief Set pin output to 0
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
PORT_TEXT_SECTION LOCAL_INLINE void GPIO_HWA_ClearPinOutput(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PCOR = (uint32)1 << u8Pin;
}


/**
 * @brief Clear pin direction
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
PORT_TEXT_SECTION LOCAL_INLINE void GPIO_HWA_ClearPinDirection(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PDDR &= ~((uint32)1 << u8Pin);
}


/**
 * @brief Set pin input disable
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
PORT_TEXT_SECTION LOCAL_INLINE void GPIO_HWA_SetPinInputDisable(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PIDR |= (uint32)1 << u8Pin;
}


/**
 * @brief Set pin direction
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
PORT_TEXT_SECTION LOCAL_INLINE void GPIO_HWA_SetPinDirection(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PDDR |= (uint32)1 << u8Pin;
}

/**
 * @brief Clear pin input disable
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_ClearPinInputDisable(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PIDR &= ~((uint32)1 << u8Pin);
}

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"

#ifdef __cplusplus
}
#endif


#endif /* #ifndef GPIO_REGOPS_H */
