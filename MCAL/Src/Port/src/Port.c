/**
*   @file   Port.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - driver API and development errors implemention.
*   @details This file contains the Port Autosar driver API and development errors implemention.
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
==================================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Port.h"
#include "Port_version.h"
#if (STD_ON == PORT_DEV_ERROR_DETECT)
#include "Det.h"
#endif
#include "Port_Hw.h"
#include "Port_RegOps.h"
#include "SchM_Port.h"
#include "SpinLock.h"

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

#ifndef PORT_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (PORT_AR_RELEASE_MAJOR_VERSION != PORT_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef PORT_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (PORT_SW_MAJOR_VERSION != PORT_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef PORT_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (PORT_SW_MINOR_VERSION != PORT_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef PORT_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (PORT_SW_PATCH_VERSION != PORT_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (PORT_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
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

#if ((STD_ON == PORT_SET_PIN_DIRECTION_API) || (0UL != MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8))
PORT_DATA_SECTION static PORT_Type *const Port_PortInstanceTable[PORT_INSTANCE_COUNT] = PORT_BASE_PTRS;
#endif

#define PORT_STOP_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

#if (STD_ON == PORT_SUPPORT_MULTICORE)
#define PORT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Port_MemMap.h"

PORT_DATA_SECTION static uint32 s_u32PortSpinLock = 0u;

#define PORT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Port_MemMap.h"
#endif

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

#if (STD_ON == PORT_PRECOMPILE_SUPPORT)
PORT_DATA_SECTION extern const Port_ConfigType Port_Config;
#endif

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/
/* PRQA S 0791 ++
   0791:[U] Macro identifier does not differ from other macro identifier(s) (e.g. '%1s') within the specified number of significant characters.
   REASON: Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*/
#define PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
#include "Port_MemMap.h"
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: The object will be referenced in other modules and declared where it is used */
PORT_DATA_SECTION const Port_ConfigType *Port_ConfigPorts = NULL_PTR;
/* PRQA S 3408, 1504 -- */
#define PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
#include "Port_MemMap.h"
/* PRQA S 0791 -- */
/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

#define PORT_START_SEC_CODE
#include "Port_MemMap.h"


#if (PORT_DEV_ERROR_DETECT == STD_ON)
PORT_TEXT_SECTION LOCAL_INLINE void Port_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)u8ServiceId, (uint8)u8ErrorId);
}
#endif
/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/

/* PRQA S 3219 ++
   3219:Static function '%1s()' is not used within this translation unit.
   REASON: Configuration will guarantee that the function will be called when it is defined.
*/
#if (STD_ON == PORT_SUPPORT_MULTICORE)
/**
* @brief          Get the spin lock of the Port
*
* @param[in]      s_u32GptSpinLock   The spin lock flag
* @param[in]      u8ServiceID        The service id of the caller function
*
* @return         Std_ReturnType
* @retval         E_OK          Get spin lock success.
* @retval         E_NOT_OK      Get spin lock failed.
*
*/
PORT_TEXT_SECTION LOCAL_INLINE Std_ReturnType Port_GetSpinLock(uint8 u8ServiceID)
{
    Std_ReturnType eSucc = E_OK;
    /* PRQA S 2905 ++
                Constant: Positive integer value truncated by cast to a smaller unsigned type.
                REASON: The actual timeout period may vary depending on the MCU frequency.
        */
    uint32 u32Timeout = PORT_SPIN_LOCK_TIMEOUT;
    /* PRQA S 2905 -- */
    /* PRQA S 3415 ++  Constant: Right hand operand of '&&' or '||' is an expression with persistent side effects.
     * REASON: The left hand aim to prevent entry into a deadlock. */
    while ((0U < u32Timeout) && (E_OK != SpinLock_Acquire(&s_u32PortSpinLock)))
    {
        u32Timeout--;
    }
    /* PRQA S 3415 -- */
    if (0U == u32Timeout)
    {
        eSucc = E_NOT_OK;
        #if (STD_ON == PORT_DEV_ERROR_DETECT)
        (void)Port_ReportDetError(u8ServiceID, PORT_E_GET_SPIN_LOCK_FAILED);
        #endif /* PORT_DEV_ERROR_DETECT */
    }
    return eSucc;
}

/**
* @brief          Release the spin lock of the mailbox
*
* @return         void
*
*/
PORT_TEXT_SECTION LOCAL_INLINE void Port_ReleaseSpinLock(void)
{
    SpinLock_Release(&s_u32PortSpinLock);
}

/* PRQA S 3219 -- */
#endif

/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user */
/**
* @brief    Initializes the Port drive module.
* @details  Initializes the Port drive module.
* @post    Port_Init() must be called before all other Port Driver module's functions
*          otherwise no operation can occur on the MCU ports and port pins.
*
* @param[in] ConfigPointer     A pointer to the structure which contains
*                          initialization parameters.
*
* @implements Port_Init_Activity
*
* @api
*/
PORT_TEXT_SECTION void Port_Init(const Port_ConfigType *ConfigPointer)
{
#if (STD_ON == PORT_DEV_ERROR_DETECT)
#if (STD_OFF == PORT_PRECOMPILE_SUPPORT)
    if (NULL_PTR == ConfigPointer)
#else /*(STD_ON == PORT_PRECOMPILE_SUPPORT) */
    if (NULL_PTR != ConfigPointer)
#endif /* (STD_ON == PORT_PRECOMPILE_SUPPORT) */
    {
        (void)Port_ReportDetError((uint8)PORT_INIT_ID, (uint8)PORT_E_INIT_FAILED);
    }
    else
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
    {
        /*  Save configuration pointer in global variable */
#if (STD_ON == PORT_PRECOMPILE_SUPPORT)
        Port_ConfigPorts = &Port_Config;
#else
        Port_ConfigPorts = ConfigPointer;
#endif

#if (STD_ON == PORT_SUPPORT_MULTICORE)

        /* Enter critical region */
        SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06();

        if (E_OK == Port_GetSpinLock(PORT_INIT_ID))
        {
#endif
#if (0UL != MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8)
            uint16 u16PinIndex;
            uint8 u8FPort;
            uint8 eClkSrc;
            uint32 u32FilterWidth;
            uint32 u32FilterPinMask;
            /* Initialize all configured digital filter ports. Use u16PinIndex variable as counter, even if we loop on a uint8 variable */
            for (u16PinIndex = (uint16)0U; u16PinIndex < (uint16)MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8; u16PinIndex++)
            {
                u8FPort = Port_ConfigPorts->pConfigDigitalFilterPorts[u16PinIndex].u8FPort;
                PORT_Type *pPort = Port_PortInstanceTable[u8FPort];

                /* Enter critical region */
                SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05();

                /* Set digital filter clock for the current port */
                eClkSrc = Port_ConfigPorts->pConfigDigitalFilterPorts[u16PinIndex].u8FClock;
                PORT_HWA_SetDigitalFilterClkSrc(pPort, eClkSrc);
                /* Set digital filter width for the current port */
                u32FilterWidth = Port_ConfigPorts->pConfigDigitalFilterPorts[u16PinIndex].u8FWidth;
                PORT_HWA_ConfigDigitalFilterWidth(pPort, u32FilterWidth);
                /* Enable digital filter for the pins selected by the user for the current port */
                u32FilterPinMask = Port_ConfigPorts->pConfigDigitalFilterPorts[u16PinIndex].u32FPinMask;
                PORT_HWA_SetDigitalFilterEnable(pPort, u32FilterPinMask);

                /* Exit critical region */
                SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05();
            }
#endif

            /* Initialize All Port Pins */
            Port_LL_Init_Port(Port_A, Port_ConfigPorts->kConfigPortPins.pConfigPortAPins, MAX_CONFIGURED_PORTA_U8);
            Port_LL_Init_Port(Port_B, Port_ConfigPorts->kConfigPortPins.pConfigPortBPins, MAX_CONFIGURED_PORTB_U8);
            Port_LL_Init_Port(Port_C, Port_ConfigPorts->kConfigPortPins.pConfigPortCPins, MAX_CONFIGURED_PORTC_U8);
            Port_LL_Init_Port(Port_D, Port_ConfigPorts->kConfigPortPins.pConfigPortDPins, MAX_CONFIGURED_PORTD_U8);
            Port_LL_Init_Port(Port_E, Port_ConfigPorts->kConfigPortPins.pConfigPortEPins, MAX_CONFIGURED_PORTE_U8);
#if(PORT_MAX_NUMBER > 5u)
            Port_LL_Init_Port(Port_F, Port_ConfigPorts->kConfigPortPins.pConfigPortFPins, MAX_CONFIGURED_PORTF_U8);
#endif
#if(PORT_MAX_NUMBER > 6u)
            Port_LL_Init_Port(Port_G, Port_ConfigPorts->kConfigPortPins.pConfigPortGPins, MAX_CONFIGURED_PORTG_U8);
#endif
#if(PORT_MAX_NUMBER > 7u)
            Port_LL_Init_Port(Port_H, Port_ConfigPorts->kConfigPortPins.pConfigPortHPins, MAX_CONFIGURED_PORTH_U8);
#endif
#if(PORT_MAX_NUMBER > 8u)
            Port_LL_Init_Port(Port_I, Port_ConfigPorts->kConfigPortPins.pConfigPortIPins, MAX_CONFIGURED_PORTI_U8);
#endif
#if (STD_ON == PORT_SUPPORT_MULTICORE)
            Port_ReleaseSpinLock();
        }

        /* Exit critical region */
        SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06();
#endif
    }
}

#if (STD_ON == PORT_SET_PIN_DIRECTION_API)
/**
* @brief   Set the port pin direction.
* @details Set the port pin direction.
* @pre     @p Port_Init() must have been called first. In order to change the
*          pin direction the PortPinDirectionChangeable flag must have been set
*          to @p TRUE.
*
* @param[in] Pin            Pin ID number.
* @param[in] Direction      Port Pin direction.
*
* @implements Port_SetPinDirection_Activity
* @api
*/
PORT_TEXT_SECTION void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction)
{
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    /* Check port pin validity */
    if (Pin >= MAX_PORT_PIN_NUM_U16)
    {
        (void)Port_ReportDetError((uint8)PORT_SETPINDIRECTION_ID, (uint8)PORT_E_PARAM_PIN);
    }
    /* Check if Port module is initialized */
    else if (NULL_PTR == Port_ConfigPorts)
    {
        (void)Port_ReportDetError((uint8)PORT_SETPINDIRECTION_ID, (uint8)PORT_E_UNINIT);
    }
    else
#endif /* PORT_DEV_ERROR_DETECT */
    {
        Port_RegValueType u32PinRegValue = 0;
        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an inappropriate essential type
        * Reason: No problem doing this as the value is within range of the cast type. */
        Port_Number ePort  = (Port_Number) PORT_DRV_PORTID_U32(Pin);
        /* PRQA S 4342 -- */
        Port_PinNumber u8Pin  = (Port_PinNumber) PORT_DRV_CHANNEL_U32(Pin);

        PORT_Type const *pPort = Port_PortInstanceTable[ePort];

        u32PinRegValue = PORT_HWA_ReadPcrValue(pPort, u8Pin);
        /* PRQA S 3678 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type whenever possible
        * Reason: This is a Reasonable use of the config ptr */
        Port_PinConfigType *pConfigOnePin = NULL_PTR;
        /* PRQA S 3678 -- */

        pConfigOnePin = Port_LL_GetPinConfigPtr(ePort, u8Pin, Port_ConfigPorts);

        if ((boolean)FALSE == pConfigOnePin->tConfigPinFlag.bDirChangableFlag)
        {
#if (STD_ON == PORT_DEV_ERROR_DETECT)
            (void)Port_ReportDetError((uint8)PORT_SETPINDIRECTION_ID, (uint8)PORT_E_DIRECTION_UNCHANGEABLE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
        }
        else
        {
#if (STD_ON == PORT_SUPPORT_MULTICORE)

            Port_RegValueType u32UsedCoreId = (Port_RegValueType)pConfigOnePin->u32Pcr.uPcrRegValue.DWP;

            /* Get the current CoreID*/
            uint8 u8CurrentCoreID = GET_CPU_ID();

            uint8 u8CurrentCoreIDMask = ((uint8)1 << u8CurrentCoreID);

            if (0u == ((uint32)u8CurrentCoreIDMask & u32UsedCoreId))
            {
                if (E_OK == Port_GetLock(PORT_SETPINDIRECTION_ID, ePort, u8Pin))
                {
#endif
                    if (PORT_GPIO_MODE == ((Port_PinModeType)((u32PinRegValue & PORT_PCR_MUX_MASK) >> PORT_PCR_MUX_SHIFT)))
                    {
                        Port_LL_SetPinDirection(ePort, u8Pin, Direction);
                    }
                    /* Direction changeability is NOT supported */
                    else
                    {
#if (STD_ON == PORT_DEV_ERROR_DETECT)
                        (void)Port_ReportDetError((uint8)PORT_SETPINDIRECTION_ID, (uint8)PORT_E_DIRECTION_UNCHANGEABLE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
                    }
#if (STD_ON == PORT_SUPPORT_MULTICORE)

                    Port_ReleaseLock(ePort, u32UsedCoreId, u8Pin);
                }
            }
#endif
        }
    }
}
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief    Set the port pin mode.
* @details  Set the port pin mode.
* @pre     @p Port_Init() must have been called first.
*
* @param[in] PinId       Pin ID number.
* @param[in] PinMuxMode      New Port Pin mode to be set on port pin.
*
* @implements  Port_SetPinMode_Activity
* @api
*/
PORT_TEXT_SECTION void Port_SetPinMode(Port_PinType PinId, Port_PinModeType PinMuxMode)
{
    /* PRQA S 3678 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type whenever possible
     * Reason: In specific condition,this pointer will be changed.Thus it can not be const */
    Port_PinConfigType *pConfigOnePin = NULL_PTR;
    /* PRQA S 3678 -- */
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an inappropriate essential type
    * Reason: No problem doing this as the value is within range of the cast type. */
    Port_Number ePort  = (Port_Number) PORT_DRV_PORTID_U32(PinId);
    /* PRQA S 4342 -- */
    Port_PinNumber u8Pin = (Port_PinNumber) PORT_DRV_CHANNEL_U32(PinId);

#if (STD_ON == PORT_DEV_ERROR_DETECT)

    /* Check port pin validity */
    if (PinId >= MAX_PORT_PIN_NUM_U16)
    {
        (void)Port_ReportDetError((uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_PARAM_PIN);
    }
    /* Check if port is initialized */
    else if (NULL_PTR == Port_ConfigPorts)
    {
        (void)Port_ReportDetError((uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_UNINIT);
    }
    else
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
    {
        if (PIN_MODE_OPTIONS_U8 > PinMuxMode)
        {
            /* Get the port pin config */
            pConfigOnePin = Port_LL_GetPinConfigPtr(ePort, u8Pin, Port_ConfigPorts);

            if ((boolean)TRUE == (boolean)pConfigOnePin->tConfigPinFlag.bModeChangableFlag)
            {
                Port_PinDirectionType eDirection = (Port_PinDirectionType) pConfigOnePin->ePddr;

#if (STD_ON == PORT_SUPPORT_MULTICORE)

                Port_RegValueType u32UsedCoreId = (Port_RegValueType)pConfigOnePin->u32Pcr.uPcrRegValue.DWP;

                /* Get the current CoreID*/
                uint8 u8CurrentCoreID = GET_CPU_ID();

                uint8 u8CurrentCoreIDMask = ((uint8)1 << u8CurrentCoreID);

                if (0u == ((uint32)u8CurrentCoreIDMask & u32UsedCoreId))
                {
                    if (E_OK == Port_GetLock(PORT_SETPINMODE_ID, ePort, u8Pin))
                    {
#endif
                        /* Check if desired mode is valid for selected pin */
                        if (0u != ((uint8) kPortPinsDescription[PinId] & (uint8)(1UL << PinMuxMode)))
                        {
                            switch (PinMuxMode)
                            {
                                case PORT_GPIO_MODE:
                                    if ((PORT_PIN_IN != eDirection) && (PORT_PIN_HIGH_Z != eDirection))
                                    {
                                        Port_LL_SetGpioPinOutput(ePort, u8Pin, pConfigOnePin);
                                    }
                                    Port_LL_SetPinDirection(ePort, u8Pin, eDirection);
                                    break;

                                default:
                                    /* do nothing */
                                    break;
                            }
                            /* Sets the port pin mode */
                            Port_LL_SetPinMode(ePort, PinMuxMode, pConfigOnePin);
                        }
                        else
                        {
#if (STD_ON == PORT_DEV_ERROR_DETECT)
                            (void)Port_ReportDetError((uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_PARAM_INVALID_MODE);
#endif
                        }
#if (STD_ON == PORT_SUPPORT_MULTICORE)

                        Port_ReleaseLock(ePort, u32UsedCoreId, u8Pin);
                    }
                }
#endif
            }
            else
            {
#if (STD_ON == PORT_DEV_ERROR_DETECT)
                (void)Port_ReportDetError((uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_MODE_UNCHANGEABLE);
#endif
            }
        }
#if (STD_ON == PORT_DEV_ERROR_DETECT)
        else
        {
            (void)Port_ReportDetError((uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_PARAM_INVALID_MODE);
        }
#endif
    }
}
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

/**
* @brief     Refreshes port direction.
* @details   Refreshes port direction.
* @pre     @p Port_Init() must have been called first.
*
* @implements Port_RefreshPortDirection_Activity
*
* @api
*/
PORT_TEXT_SECTION void Port_RefreshPortDirection(void)
{
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    /* Check if Port module is initialized */
    if (NULL_PTR == Port_ConfigPorts)
    {
        (void)Port_ReportDetError((uint8)PORT_REFRESHPINDIRECTION_ID, (uint8)PORT_E_UNINIT);
    }
    else
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
    {
        Port_LL_RefreshPortDirection(Port_A, Port_ConfigPorts->kConfigPortPins.pConfigPortAPins, MAX_CONFIGURED_PORTA_U8);
        Port_LL_RefreshPortDirection(Port_B, Port_ConfigPorts->kConfigPortPins.pConfigPortBPins, MAX_CONFIGURED_PORTB_U8);
        Port_LL_RefreshPortDirection(Port_C, Port_ConfigPorts->kConfigPortPins.pConfigPortCPins, MAX_CONFIGURED_PORTC_U8);
        Port_LL_RefreshPortDirection(Port_D, Port_ConfigPorts->kConfigPortPins.pConfigPortDPins, MAX_CONFIGURED_PORTD_U8);
        Port_LL_RefreshPortDirection(Port_E, Port_ConfigPorts->kConfigPortPins.pConfigPortEPins, MAX_CONFIGURED_PORTE_U8);
#if(PORT_MAX_NUMBER > 5u)
        Port_LL_RefreshPortDirection(Port_F, Port_ConfigPorts->kConfigPortPins.pConfigPortFPins, MAX_CONFIGURED_PORTF_U8);
#endif
#if(PORT_MAX_NUMBER > 6u)
        Port_LL_RefreshPortDirection(Port_G, Port_ConfigPorts->kConfigPortPins.pConfigPortGPins, MAX_CONFIGURED_PORTG_U8);
#endif
#if(PORT_MAX_NUMBER > 7u)
        Port_LL_RefreshPortDirection(Port_H, Port_ConfigPorts->kConfigPortPins.pConfigPortHPins, MAX_CONFIGURED_PORTH_U8);
#endif
#if(PORT_MAX_NUMBER > 8u)
        Port_LL_RefreshPortDirection(Port_I, Port_ConfigPorts->kConfigPortPins.pConfigPortIPins, MAX_CONFIGURED_PORTI_U8);
#endif
    }
}

#if  (STD_ON == PORT_VERSION_INFO_API)
/**
* @brief      Returns the version information of this module.
* @details    Returns the version information of this module.
*
* @param[in,out] VersionInfoPointer      Pointer to where to store the version
*                                        information of this module.
*
* @implements Port_GetVersionInfo_Activity
*
*/
PORT_TEXT_SECTION void Port_GetVersionInfo(Std_VersionInfoType *VersionInfoPointer)
{
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    if (NULL_PTR != VersionInfoPointer)
    {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
        (VersionInfoPointer)->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
        (VersionInfoPointer)->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
        (VersionInfoPointer)->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
        (VersionInfoPointer)->moduleID         = (uint16)PORT_MODULE_ID;
        (VersionInfoPointer)->vendorID         = (uint16)PORT_VENDOR_ID;
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    }
    else
    {
        (void)Port_ReportDetError((uint8)PORT_GETVERSIONINFO_ID, (uint8)PORT_E_PARAM_POINTER);
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
}
#endif /* (STD_ON == PORT_VERSION_INFO_API) */
/* PRQA S 1503 -- */

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
