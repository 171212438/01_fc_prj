/**
 *   @file    Port_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Port - hardware abstraction layer driver source file.
 *   @details This file contains the Port Autosar driver API and development
 * errors implemention.
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
#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Port_Hw.h"
#include "Gpio_Reg.h"
#include "Gpio_RegOps.h"
#include "Port.h"
#include "Port_Reg.h"
#include "Port_RegOps.h"
#include "SchM_Port.h"
#if (STD_ON == PORT_DEV_ERROR_DETECT)
#include "Det.h"
#endif

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
#define PORT_START_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

PORT_DATA_SECTION static GPIO_Type *const Port_GpioInstanceTable[GPIO_INSTANCE_COUNT] = GPIO_BASE_PTRS;

PORT_DATA_SECTION static PORT_Type *const Port_PortInstanceTable[PORT_INSTANCE_COUNT] = PORT_BASE_PTRS;

#define PORT_STOP_SEC_CONST_UNSPECIFIED

#include "Port_MemMap.h"
/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
                                        GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

/*=================================================================================================
                                        LOCAL FUNCTIONS
=================================================================================================*/
#if (STD_ON == PORT_SUPPORT_MULTICORE)
PORT_TEXT_SECTION static Port_LockType Port_LL_GetLock(Port_Number ePort, Port_PinNumber u8Pin);
PORT_TEXT_SECTION static void          Port_LL_ReleaseLock(Port_Number             ePort,
                                                           const Port_RegValueType u32UsedCoreId,
                                                           Port_PinNumber          u8Pin);
#endif

/**
 * @brief   Get configuration pointer of a single pin  from pointer
 * "pConfigPorts"
 * @details Get configuration pointer of a single pin  from pointer
 * "pConfigPorts"
 *
 * @param[in] ePort               Port number.
 * @param[in] u8Pin               Pin number defied on Port.
 * @param[in] pConfigPorts        Pointer containing configuration information
 * of one pin.
 *
 */
PORT_TEXT_SECTION Port_PinConfigType *Port_LL_GetPinConfigPtr(Port_Number            ePort,
                                                              Port_PinNumber         u8Pin,
                                                              const Port_ConfigType *pConfigPorts)
{
    uint8               u8PinIndex      = 0;
    uint8               u8PortNum       = 0;
    Port_PinConfigType *pConfigPortPins = NULL_PTR;
    Port_PinConfigType *pret            = NULL_PTR;

    switch (ePort)
    {
        /* PRQA S 311 ++ #Misra-C:2012 Rule-11.8 A cast shall not remove any const or
         * volatile qualification from the type pointed to by a pointer. Reason: A
         * different pointer cast and arithmetic should be performed Here Unavoidably
         */
        case Port_A:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortAPins;
            u8PortNum       = MAX_CONFIGURED_PORTA_U8;
            break;
        case Port_B:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortBPins;
            u8PortNum       = MAX_CONFIGURED_PORTB_U8;
            break;
        case Port_C:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortCPins;
            u8PortNum       = MAX_CONFIGURED_PORTC_U8;
            break;
        case Port_D:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortDPins;
            u8PortNum       = MAX_CONFIGURED_PORTD_U8;
            break;
        case Port_E:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortEPins;
            u8PortNum       = MAX_CONFIGURED_PORTE_U8;
            break;
#if (PORT_MAX_NUMBER > 5u)
        case Port_F:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortFPins;
            u8PortNum       = MAX_CONFIGURED_PORTF_U8;
            break;
#endif
#if (PORT_MAX_NUMBER > 6u)
        case Port_G:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortGPins;
            u8PortNum       = MAX_CONFIGURED_PORTG_U8;
            break;
#endif
#if (PORT_MAX_NUMBER > 7u)
        case Port_H:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortHPins;
            u8PortNum       = MAX_CONFIGURED_PORTH_U8;
            break;
#endif
#if (PORT_MAX_NUMBER > 8u)
        case Port_I:
            pConfigPortPins = (Port_PinConfigType *)pConfigPorts->kConfigPortPins.pConfigPortIPins;
            u8PortNum       = MAX_CONFIGURED_PORTI_U8;
            break;
#endif
        default:
            /* Do Nothing*/
            break;
            /* PRQA S 311 -- */
    }

    for (u8PinIndex = (uint8)0U; u8PinIndex < u8PortNum; u8PinIndex++)
    {
        if (u8Pin == (uint32)pConfigPortPins[u8PinIndex].u8Pin)
        {
            pret = (Port_PinConfigType *)&pConfigPortPins[u8PinIndex];
        }
    }
    return pret;
}

/**
 * @brief      Initialize  pins of one Port.
 * @details    Initialize  pins of one Port.
 *
 * @param[in]    ePort               Port number.
 * @param[in]    pConfigPorts        Ports configuration pointer.
 * @param[in]    u8PinNum            The number of pins that need to be
 * initialized in a Port.
 *
 * @return       none
 *
 * @post         No function of the driver is executed without the
 * initialisation of the module.
 *
 */
PORT_TEXT_SECTION void Port_LL_Init_Port(Port_Number               ePort,
                                         const Port_PinConfigType *pConfigPorts,
                                         uint8                     u8PinNum)
{
    uint16 u16PinIndex = 0;

    uint32 u32LocalPcr = 0;

    uint8 u8LocalPdo = 0;

    uint8 u8LocalMux = 0;

    Port_PinDirectionType eLocalPddr = PORT_PIN_IN;

    Port_PinNumber u8Pin = 0;

    GPIO_Type *pGpio = Port_GpioInstanceTable[(uint32)ePort];
    PORT_Type *pPort = Port_PortInstanceTable[(uint32)ePort];

    /* Initialize All Configured Port Pins */
    for (u16PinIndex = (uint16)0U; u16PinIndex < u8PinNum; u16PinIndex++)
    {
        u8Pin = pConfigPorts[u16PinIndex].u8Pin;

        u8LocalPdo = pConfigPorts[u16PinIndex].u8Pdo;

        eLocalPddr = pConfigPorts[u16PinIndex].ePddr;

        u8LocalMux = pConfigPorts[u16PinIndex].u32Pcr.uPcrRegValue.MUX;

        u32LocalPcr = pConfigPorts[u16PinIndex].u32Pcr.u32PcrRegValue;

#if (STD_ON == PORT_FREEZE_JTAG_PINS)
        /* skip the configuration of Jtag and reset Pins(PTA4,PTA5,PTA10，PTC4,PTC5)
         */
        if (!((((ePort == Port_A) && ((u8Pin == 4U) || (u8Pin == 10U))) ||
               ((ePort == Port_C) && ((u8Pin == 4U) || (u8Pin == 5U)))) &&
              (7U == (uint8)pConfigPorts[u16PinIndex].u32Pcr.uPcrRegValue.MUX)))
        {
#endif /*PORT_FREEZE_JTAG_PINS */

            /* Enter critical region */
            SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00();

            if (1U == (uint8)pConfigPorts[u16PinIndex].u32Pcr.uPcrRegValue.MUX)
            {
                /* Check if the direction of the pin is OUTPUT. In this case the driver
                 * needs to set the output level too */
                if (PORT_PIN_OUT == eLocalPddr)
                {
                    /* Set pin to High value */
                    if (PORT_PIN_LEVEL_HIGH_U8 == u8LocalPdo)
                    {
                        GPIO_HWA_SetPinOutput(pGpio, u8Pin);
                    }
                    /* Set pin to Low value */
                    else if (PORT_PIN_LEVEL_LOW_U8 == u8LocalPdo)
                    {
                        GPIO_HWA_ClearPinOutput(pGpio, u8Pin);
                    }
                    else
                    {
                        /* No action to be done */
                    }
                    /* Configure the pin direction as output in the PDDR register of GPIO
                     * IP */
                    GPIO_HWA_SetPinDirection(pGpio, u8Pin);
                }
                else if (PORT_PIN_IN == eLocalPddr)
                {
                    /* Configure the pin direction as input in the PDDR register of GPIO
                     * IP */
                    GPIO_HWA_ClearPinDirection(pGpio, u8Pin);
                }
                else
                {
                    /* Check if the pin is HIGH-Z. In this case the driver needs to
                     * configured to multiplex function 0*/
                    u32LocalPcr &= ~(PORT_PCR_MUX_MASK);
                }
            }

            if (0U == u8LocalMux)
            {
                u32LocalPcr &= 0xFFFFFF00U;
            }

            PORT_HWA_ConfigPin(pPort, u8Pin, u32LocalPcr);
            PORT_HWA_ClearIrqFlag(pPort, u8Pin);
            PORT_HWA_ClearPinInputDisable(pGpio, u8Pin);

            /* Exit critical region */
            SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00();

#if (STD_ON == PORT_FREEZE_JTAG_PINS)
        }
#endif /*PORT_FREEZE_JTAG_PINS */
    }
}

#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
/**
 * @brief        Set Pin direction.
 * @details      Set Pin direction.
 *
 * @param[in]     Pin         Pin ID number
 * @param[in]     eDirection   Port Pin direction
 *
 * @return    None
 *
 * @pre Port_Init must have been called
 * @post none
 *
 *
 */
PORT_TEXT_SECTION void Port_LL_SetPinDirection(Port_Number           ePort,
                                               Port_PinNumber        u8Pin,
                                               Port_PinDirectionType eDirection)
{
    /* Enter critical region */
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01();

    GPIO_Type *pGpio = Port_GpioInstanceTable[(uint32)ePort];

    PORT_Type *pPort = Port_PortInstanceTable[(uint32)ePort];

    uint32 u32LocalPcr = PORT_HWA_ReadPcrValue(pPort, u8Pin);

    /* Configures Port Pin as Output */
    if (PORT_PIN_OUT == eDirection)
    {
        GPIO_HWA_SetPinDirection(pGpio, u8Pin);
    }
    /* Configures Port Pin as Input or High-Z*/
    else if (PORT_PIN_IN == eDirection)
    {
        GPIO_HWA_ClearPinDirection(pGpio, u8Pin);
    }
    else if ((PORT_PIN_HIGH_Z == eDirection))
    {
        /* Check if the pin is HIGH-Z. In this case the driver needs to configured
         * to multiplex function 0*/
        u32LocalPcr &= ~(PORT_PCR_MUX_MASK);

        PORT_HWA_ConfigPin(pPort, u8Pin, u32LocalPcr);
    }
    else
    {
        /* Do nothing */
    }
    /* Exit critical region */
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01();
}
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == \
          PORT_SET_PIN_MODE_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
 * @brief         Set Mode for a Pin.
 * @details       Set Mode for a Pin.
 *
 * @param[in]     ePort
 * @param[in]     u8PinMode
 * @param[in]     *pConfigOnePin
 *
 * @return    None
 *
 * @pre Port_Init must have been called
 * @post none
 *
 *
 */
PORT_TEXT_SECTION void Port_LL_SetPinMode(Port_Number               ePort,
                                          Port_PinModeType          u8PinMode,
                                          const Port_PinConfigType *pConfigOnePin)
{

    /* Variable used to clear and updated PCR register */
    uint32 u32LocalPCR = 0;

    PORT_Type *pPort = Port_PortInstanceTable[(uint32)ePort];

    /* Enter critical region */
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02();

    Port_PinNumber u8Pin = pConfigOnePin->u8Pin;

    u32LocalPCR = PORT_HWA_ReadPcrValue(pPort, u8Pin);

    /* Check the pin if it is analog mode. */
    if ((uint8)0U == u8PinMode)
    {
        u32LocalPCR &= ~(PORT_PCR_MUX_MASK);

        u32LocalPCR &= 0xFFFFFF00U;
    }
    else
    {
        u32LocalPCR &= ~(PORT_PCR_MUX_MASK);

        u32LocalPCR |= ((uint32)u8PinMode << PORT_PCR_MUX_SHIFT);

        u32LocalPCR &= ((uint32)0xFFFFFF00u);

        uint32 u32DigitalFunc = (pConfigOnePin->u32Pcr.u32PcrRegValue) & ((uint32)0x000000FFu);

        u32LocalPCR |= (u32DigitalFunc);
    }

    PORT_HWA_ConfigPin(pPort, u8Pin, u32LocalPCR);

    /* Exit critical region */
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02();
}
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
 * @brief     Set Pin output level.
 * @details   Set Pin output level.
 *
 * @param[in]    ePort               Port number.
 * @param[in]    u8Pin               Pin ID.
 * @param[in]    pConfigOnePin       Pointer containing configuration
 * information of one pin
 *
 * @return    None
 *
 * @pre  none
 * @post none
 *
 */
PORT_TEXT_SECTION void Port_LL_SetGpioPinOutput(Port_Number               ePort,
                                                Port_PinNumber            u8Pin,
                                                const Port_PinConfigType *pConfigOnePin)
{
    uint8 u8LocalPdo = pConfigOnePin->u8Pdo;

    GPIO_Type *pGpio = Port_GpioInstanceTable[(uint32)ePort];

    /* Enter critical region */
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03();

    /* Set pin to High value */
    if (PORT_PIN_LEVEL_HIGH_U8 == u8LocalPdo)
    {
        GPIO_HWA_SetPinOutput(pGpio, u8Pin);
    }
    /* Set pin to Low value */
    else if (PORT_PIN_LEVEL_LOW_U8 == u8LocalPdo)
    {
        GPIO_HWA_ClearPinOutput(pGpio, u8Pin);
    }
    else
    {
        /* No action to be done */
    }

    /* Exit critical region */
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03();
}
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

/**
 * @brief     Refresh Port direction.
 * @details   Refresh Port direction.
 *
 * @param[in]    ePort                  Port number.
 * @param[in]    pPortPinsConfigInfo    Pointer containing information Ports
 * configuration.
 * @param[in]    u8PortPinsCount        Pins count in this Port
 *
 *
 * @return    None
 *
 * @pre  none
 * @post none
 *
 */
PORT_TEXT_SECTION void Port_LL_RefreshPortDirection(Port_Number               ePort,
                                                    const Port_PinConfigType *pPortPinsConfigInfo,
                                                    uint8                     u8PortPinsCount)
{
    /* Index of the port table */
    uint8 u8PinIndex;

    Port_PinNumber u8PinNum;

    GPIO_Type *pGpio = Port_GpioInstanceTable[(uint32)ePort];

    PORT_Type *pPort = Port_PortInstanceTable[(uint32)ePort];

    /* Initialize All Configured Port Pins that aren't direction changable */
    for (u8PinIndex = (uint8)0U; u8PinIndex < u8PortPinsCount; u8PinIndex++)
    {
        if ((boolean)FALSE == pPortPinsConfigInfo[u8PinIndex].tConfigPinFlag.bDirChangableFlag)
        {
            /* On this platform we can only determine direction for the pins initialy
             * configured as GPIOs */
            if (1U == (uint8)pPortPinsConfigInfo[u8PinIndex].u32Pcr.uPcrRegValue.MUX)
            {
                /* Point to the Port Pin MSCR register address*/
                u8PinNum = pPortPinsConfigInfo[u8PinIndex].u8Pin;

                SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04();

#if (STD_ON == PORT_SUPPORT_MULTICORE)

                Port_RegValueType u32UsedCoreId =
                    (Port_RegValueType)pPortPinsConfigInfo[u8PinIndex].u32Pcr.uPcrRegValue.DWP;

                /* Get the current CoreID*/
                uint8 u8CurrentCoreID = GET_CPU_ID();

                uint8 u8CurrentCoreIDMask = ((uint8)1 << u8CurrentCoreID);

                if (0u == ((uint32)u8CurrentCoreIDMask & u32UsedCoreId))
                {
                    if (E_OK == Port_GetLock(PORT_REFRESHPINDIRECTION_ID, ePort, u8PinNum))
                    {
#endif
                        /* Configures Port Pin as Output */
                        if (PORT_PIN_OUT == pPortPinsConfigInfo[u8PinIndex].ePddr)
                        {
                            /* Configure the pin direction as output in the PDDR register of
                             * GPIO IP */
                            GPIO_HWA_SetPinDirection(pGpio, u8PinNum);
                        }
                        /* Configures Port Pin as Input or High-Z*/
                        else if (PORT_PIN_IN == pPortPinsConfigInfo[u8PinIndex].ePddr)
                        {
                            /* Configure the pin direction as input in the PDDR register of
                             * GPIO IP */
                            GPIO_HWA_ClearPinDirection(pGpio, u8PinNum);
                        }
                        else if (PORT_PIN_HIGH_Z == pPortPinsConfigInfo[u8PinIndex].ePddr)
                        {
                            uint32 u32LocalPcr = PORT_HWA_ReadPcrValue(pPort, u8PinIndex);
                            /* Check if the pin is HIGH-Z. In this case the driver needs to
                             * configured to multiplex function 0*/
                            u32LocalPcr &= ~(PORT_PCR_MUX_MASK);

                            PORT_HWA_ConfigPin(pPort, u8PinIndex, u32LocalPcr);
                        }
                        else
                        {
                            /* Do nothing. Else branch present in order to avoid MISRA warning
                             */
                        }
#if (STD_ON == PORT_SUPPORT_MULTICORE)

                        Port_ReleaseLock(ePort, u32UsedCoreId, u8PinNum);
                    }
                }
#endif

                SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04();
            }
        }
    }
}

#if (STD_ON == PORT_SUPPORT_MULTICORE)
/**
 * @brief     Get Lock.
 * @details   Get Lock.
 *
 * @param[in]    ePort                  Port number.
 * @param[in]    u8Pin                  Pin ID.
 *
 *
 * @return    Port_LockType
 *
 * @pre  none
 * @post none
 *
 */
PORT_TEXT_SECTION static Port_LockType Port_LL_GetLock(Port_Number ePort, Port_PinNumber u8Pin)
{
    Port_LockType Ret = GET_LOCK_SUCCESS;

    PORT_Type *pPort = Port_PortInstanceTable[(uint32)ePort];

    /* Get the current CoreID*/
    uint8 u8CurrentCoreID = GET_CPU_ID();

    uint8 u8CurrentCoreIDMask = ((uint8)1 << u8CurrentCoreID);

    /* Gets the current authorized CoreID*/
    uint32 u32LocalPcrDWP = ((PORT_HWA_ReadPcrValue(pPort, u8Pin) & (uint32)0x3E000000) >> (uint32)25);

    /* Check write permissions*/
    if (0u == ((uint32)u8CurrentCoreIDMask & u32LocalPcrDWP))
    {
        /* Enter critical region */
        SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07();

        /* Set only the current core to be accessible*/
        PORT_HWA_SetDWP(pPort, u8Pin, ~u8CurrentCoreIDMask);
    }
    else
    {
        Ret = GET_LOCK_FAIL;
    }

    return Ret;
}

/**
 * @brief     Release Lock.
 * @details   Release Lock.
 *
 * @param[in]    ePort                  Port number.
 * @param[in]    u32UsedCoreId          Core with permissions.
 * @param[in]    u8Pin                  Pin ID.
 *
 *
 * @return    None
 *
 * @pre  none
 * @post none
 *
 */
PORT_TEXT_SECTION static void Port_LL_ReleaseLock(Port_Number             ePort,
                                                  const Port_RegValueType u32UsedCoreId,
                                                  Port_PinNumber          u8Pin)
{

    PORT_Type *pPort = Port_PortInstanceTable[(uint32)ePort];

    /* Restore other core access*/
    PORT_HWA_SetDWP(pPort, u8Pin, (uint8)u32UsedCoreId);

    /* Exit critical region */
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07();
}

/* PRQA S 3219 ++
   3219:Static function '%1s()' is not used within this translation unit.
   REASON: Configuration will guarantee that the function will be called when it
   is defined.
*/

/**
 * @brief          Get the lock of the Port
 *
 * @param[in]      u8ServiceID            The service id of the caller function
 * @param[in]      ePort                  Port number.
 * @param[in]      u8Pin                  Pin ID.
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Get spin lock success.
 * @retval         E_NOT_OK      Get spin lock failed.
 *
 */
PORT_TEXT_SECTION Std_ReturnType Port_GetLock(uint8 u8ServiceID, Port_Number ePort, Port_PinNumber u8Pin)
{
    Std_ReturnType eSucc = E_OK;
    /* PRQA S 2905 ++ Constant: Positive integer value truncated by cast to a
     * smaller unsigned type. REASON: The actual timeout period may vary depending
     * on the MCU frequency. */
    uint32 u32Timeout = PORT_SPIN_LOCK_TIMEOUT;
    /* PRQA S 2905 -- */
    /* PRQA S 3415 ++
                Constant: Right hand operand of '&&' or '||' is an expression with
       persistent side effects. REASON: The left hand aim to prevent entry into a
       deadlock.
        */
    while ((0U < u32Timeout) && (GET_LOCK_SUCCESS != Port_LL_GetLock(ePort, u8Pin)))
    {
        u32Timeout--;
    }
    /* PRQA S 3415 -- */
    if (0U == u32Timeout)
    {
        eSucc = E_NOT_OK;
#if (STD_ON == PORT_DEV_ERROR_DETECT)
        (void)Det_ReportError(PORT_MODULE_ID,
                              PORT_INSTANCE_ID,
                              u8ServiceID,
                              PORT_E_GET_SPIN_LOCK_FAILED);
#endif /* PORT_DEV_ERROR_DETECT */
    }
    return eSucc;
}

/**
 * @brief          Release the Port lock
 *
 * @param[in]      ePort                  Port number.
 * @param[in]      u32UsedCoreId          Core with permissions.
 * @param[in]      u8Pin                  Pin ID.
 *
 * @return         void
 *
 */
PORT_TEXT_SECTION void Port_ReleaseLock(Port_Number             ePort,
                                        const Port_RegValueType u32UsedCoreId,
                                        Port_PinNumber          u8Pin)
{
    Port_LL_ReleaseLock(ePort, u32UsedCoreId, u8Pin);
}

/* PRQA S 3219 -- */
#endif
/*=================================================================================================
                                       GLOBAL FUNCTIONS
=================================================================================================*/

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
