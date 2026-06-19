/**
*   @file    Dio_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dio - Hardware access layer header file.
*   @details DIO Hardware access layer header file.
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
*   0.1.0       14/07/2023    QXW0071       N/A          DIO Initial Version
*   0.2.0       27/09/2023    QXW0105       N/A          DIO Support Multi-Core
*   0.3.0       20/10/2023    QXW0105       N/A          N/A
*   0.4.0       20/11/2023    QXW0105       N/A          optimize code
==================================================================================================*/

#ifndef DIO_REGOPS_H
#define DIO_REGOPS_H

#ifdef __cplusplus
extern "C" {
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
#define DIO_START_SEC_CODE
#include "Dio_MemMap.h"

/**
 * @brief Read port data input, this register indicate data on pad.
 *
 * @param pGpio Gpio instance
 * @return PDIR register value
 */
DIO_TEXT_SECTION LOCAL_INLINE uint32 Dio_HWA_ReadPortDataInput(const GPIO_Type *pGpio)
{
    return pGpio->PDIR;
}

/**
 * @brief Set pin output to 0
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
DIO_TEXT_SECTION LOCAL_INLINE void Dio_HWA_ClearPinOutput(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PCOR = (uint32)1 << u8Pin;
}

/**
 * @brief Set pin data output, pin output can set 1 or 0
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
DIO_TEXT_SECTION LOCAL_INLINE void Dio_HWA_SetPinDataOutput(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PSOR = (uint32)1 << u8Pin;
}

/**
 * @brief Toggle pin
 *
 * @param pGpio Gpio instance
 * @param u8Pin Pin number
 */
DIO_TEXT_SECTION LOCAL_INLINE void Dio_HWA_TogglePin(GPIO_Type *pGpio, uint8 u8Pin)
{
    pGpio->PTOR = (uint32)1 << u8Pin;
}

/**
 * @brief Read port data output
 *
 * @param pGpio Gpio instance
 * @return PDOR register value
 */
DIO_TEXT_SECTION LOCAL_INLINE uint32 Dio_HWA_ReadPortDataOutput(const GPIO_Type *pGpio)
{
    return pGpio->PDOR;
}

/**
 * @brief Set port data output, port output can set 1 or 0
 *
 * @param pGpio Gpio instance
 * @param u32Pins Pin numbers
 */
DIO_TEXT_SECTION LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)
{
    pGpio->PDOR = u32Pins;
}

/**
 * @brief Set port output to 1
 *
 * @param pGpio Gpio instance
 * @param u32Pins Pin numbers
 */
DIO_TEXT_SECTION LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)
{
    pGpio->PSOR = u32Pins;
}

/**
 * @brief Set port output to 0
 *
 * @param pGpio Gpio instance
 * @param u32Pins Pin numbers
 */
DIO_TEXT_SECTION LOCAL_INLINE void Dio_HWA_ClearPortOutput(GPIO_Type *pGpio, uint32 u32Pins)
{
    pGpio->PCOR = u32Pins;
}


#define DIO_STOP_SEC_CODE
#include "Dio_MemMap.h"

#ifdef __cplusplus
}
#endif


#endif /* #ifndef DIO_REGOPS_H */
