/**
 *   @file    Dio_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Dio - hardware abstraction layer driver source file.
 *   @details This file contains the Dio Autosar driver API and development errors implemention.
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
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Dio_Hw.h"
#include "Dio.h"
#ifndef USER_MODE_REG_PROT_ENABLED
#define USER_MODE_REG_PROT_ENABLED (DIO_USER_MODE_SOFTWARE_LOCKED)
#endif
#include "Dio_RegOps.h"
#include "Gpio_Reg.h"
#include "Port_RegOps.h"
#include "SchM_Dio.h"

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
#define DIO_START_SEC_CONST_UNSPECIFIED
#include "Dio_MemMap.h"

DIO_DATA_SECTION static GPIO_Type *const Dio_GpioInstanceTable[GPIO_INSTANCE_COUNT] = GPIO_BASE_PTRS;

#if ((DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT))
DIO_DATA_SECTION static PORT_Type *const Port_PortInstanceTable[PORT_INSTANCE_COUNT] = PORT_BASE_PTRS;
#endif /* (DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT) */

#define DIO_STOP_SEC_CONST_UNSPECIFIED
#include "Dio_MemMap.h"

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define DIO_START_SEC_CODE
#include "Dio_MemMap.h"

#if ((DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT))
DIO_TEXT_SECTION LOCAL_INLINE uint32 Dio_HL_Arm_Lsb(uint32 value);
#endif /* (DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT) */
/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/
#if ((DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT))
DIO_TEXT_SECTION LOCAL_INLINE uint32 Dio_HL_Arm_Lsb(uint32 value)
{
    uint32 ret;
    ASM_KEYWORD volatile("RBIT %0, %1\n\t"
    	    "CLZ %0, %0"
    	    : "=r"(ret)
    	    : "r"(value));
    return ret;
}
#endif /* (DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT) */
/*================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

/*================================================================================================*/
/**
 * @brief          Read the channel level.
 * @details        Read the channel level.
 *
 * @param[in]      u16ChannelId
 *
 * @return                     Returns the level of the corresponding pin as
 *                             @p STD_HIGH or @p STD_LOW.
 * @retval STD_HIGH            The logical level of the corresponding pin is 1.
 * @retval STD_LOW             The logical level of the corresponding Pin is 0.
 */
DIO_TEXT_SECTION Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)
{
    Dio_LevelType u8ChannelLevel = (Dio_LevelType)STD_LOW;
    /* PRQA S 3469 ++ */
    uint8 ePort = (uint8)GPIO_PORT_U32(u16ChannelId);
    uint8 u8Pin = (uint8)GPIO_CHANNEL_U32(u16ChannelId);
    /* PRQA S 3469 -- */

    const GPIO_Type *pGpio = Dio_GpioInstanceTable[ePort];

    /* PRQA S 3469 ++ */
    u8ChannelLevel = (Dio_LevelType)((Dio_HWA_ReadPortDataInput(pGpio) &
                                      PIN_ONE_BIT_MASK_U32(u16ChannelId)) >>
                                     u8Pin);
    /* PRQA S 3469 -- */

    return u8ChannelLevel;
}

/*===============================================================================================*/
/**
 * @brief          Write the level to the channel.
 * @details        Write the level to the channel.
 *
 * @param[in]      u16ChannelId
 * @param[in]      u8Level
 */
DIO_TEXT_SECTION void Dio_HL_WriteChannel(const Dio_ChannelType u16ChannelId,
                                          const Dio_LevelType   u8Level)
{
    /* PRQA S 3469 ++ */
    uint8 ePort = (uint8)GPIO_PORT_U32(u16ChannelId);
    uint8 u8Pin = (uint8)GPIO_CHANNEL_U32(u16ChannelId);
    /* PRQA S 3469 -- */

    GPIO_Type *pGpio = Dio_GpioInstanceTable[ePort];

    if ((Dio_LevelType)STD_HIGH == u8Level)
    {
        Dio_HWA_SetPinDataOutput(pGpio, u8Pin);
    }
    else if ((Dio_LevelType)STD_LOW == u8Level)
    {
        Dio_HWA_ClearPinOutput(pGpio, u8Pin);
    }
    else
    {
        /* Do nothing. Required by MISRA */
    }
}

#if (STD_ON == DIO_FLIP_CHANNEL_API)
/*===============================================================================================*/
/**
 * @brief         Flip the level of the channel.
 * @details       Flip the level of the channel.
 *
 * @param[in]      u16ChannelId
 *
 * @return                     Returns the level of the corresponding pin as
 *                             @p STD_HIGH or @p STD_LOW.
 * @retval STD_HIGH            The logical level of the corresponding pin is 1.
 * @retval STD_LOW             The logical level of the corresponding Pin is 0.
 *
 * @pre            This function can be used only if @p DIO_FLIP_CHANNEL_API
 *                 has been enabled.
 */
DIO_TEXT_SECTION Dio_LevelType Dio_HL_FlipChannel(const Dio_ChannelType u16ChannelId)
{
    /* PRQA S 3469 ++ */
    uint8 ePort = (uint8)GPIO_PORT_U32(u16ChannelId);
    uint8 u8Pin = (uint8)GPIO_CHANNEL_U32(u16ChannelId);
    /* PRQA S 3469 -- */

    GPIO_Type *pGpio = Dio_GpioInstanceTable[ePort];

    Dio_LevelType u8ChannelLevel = (Dio_LevelType)STD_LOW;

    Dio_HWA_TogglePin(pGpio, u8Pin);

    /* PRQA S 3469 ++ */
    u8ChannelLevel = (Dio_LevelType)((Dio_HWA_ReadPortDataOutput(pGpio) &
                                      PIN_ONE_BIT_MASK_U32(u16ChannelId)) >>
                                     u8Pin);
    /* PRQA S 3469 -- */

    return u8ChannelLevel;
}
#endif /* (STD_ON == DIO_FLIP_CHANNEL_API) */

/*===============================================================================================*/
/**
 * @brief          Read the level of Port.
 * @details        Read the level of Port.
 *
 * @param[in]      u8PortId
 *
 * @return                     Levels of all channels of specified port.
 */
DIO_TEXT_SECTION Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)
{
    Dio_PortLevelType u32PortLevel = (Dio_PortLevelType)STD_LOW;

    const GPIO_Type *pGpio = Dio_GpioInstanceTable[u8PortId];

    u32PortLevel = (Dio_PortLevelType)Dio_HWA_ReadPortDataInput(pGpio);

    return u32PortLevel;
}

/*===============================================================================================*/
/**
 * @brief         Write the port level
 * @details       Write the port level
 *
 * @param[in]      u8PortId
 * @param[in]      u32Level
 */
DIO_TEXT_SECTION void Dio_HL_WritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level)
{
    GPIO_Type *pGpio = Dio_GpioInstanceTable[u8PortId];

    Dio_HWA_SetPortDataOutput(pGpio, u32Level);
}

/*===============================================================================================*/
/**
 * @brief          Read the level of the channels group
 * @details        Read the level of the channels group
 *
 * @param[in]      pChannelGroupIdPtr
 * @return         The channel group levels.
 */

DIO_TEXT_SECTION Dio_PortLevelType Dio_HL_ReadChannelGroup(
    const Dio_ChannelGroupType *pChannelGroupIdPtr)
{
    Dio_PortLevelType u32PortLevel = (Dio_PortLevelType)STD_LOW;

    const GPIO_Type *pGpio = Dio_GpioInstanceTable[pChannelGroupIdPtr->port];

    u32PortLevel = (Dio_PortLevelType)((Dio_HWA_ReadPortDataInput(pGpio) &
                                        (pChannelGroupIdPtr->mask)) >>
                                       (pChannelGroupIdPtr->offset));

    return u32PortLevel;
}

/*===============================================================================================*/
/**
 * @brief          Write the level of the channels group
 * @details        Write the level of the channels group
 *
 * @param[in]      pChannelGroupIdPtr
 * @param[in]      u32Level
 */
DIO_TEXT_SECTION void Dio_HL_WriteChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr,
                                               const Dio_PortLevelType     u32Level)
{
    Dio_PortLevelType u32LevelSet;
    Dio_PortLevelType u32LevelClear;

    GPIO_Type *pGpio = Dio_GpioInstanceTable[pChannelGroupIdPtr->port];

    u32LevelSet = (((Dio_PortLevelType)(u32Level) << (pChannelGroupIdPtr->offset)) &
                   (((Dio_PortLevelType)(pChannelGroupIdPtr->mask))));
    Dio_HWA_SetPortOutput(pGpio, u32LevelSet);
    u32LevelClear = (~u32LevelSet) & pChannelGroupIdPtr->mask;
    Dio_HWA_ClearPortOutput(pGpio, u32LevelClear);
}

#if (STD_ON == DIO_MASKED_WRITE_PORT_API)
/*===============================================================================================*/
/**
 * @brief          Write the level of the port with mask.
 * @details        Write the level of the port with mask.
 *
 * @param[in]      u8PortId         ID of DIO Port.
 * @param[in]      u32Level         Value to be written.
 * @param[in]      u32Mask          Channels to be masked in the port.
 */
DIO_TEXT_SECTION void Dio_HL_MaskedWritePort(const Dio_PortType      u8PortId,
                                             const Dio_PortLevelType u32Level,
                                             const Dio_PortLevelType u32Mask)
{
    Dio_PortLevelType u32LevelSet;
    Dio_PortLevelType u32LevelClear;

    GPIO_Type *pGpio = Dio_GpioInstanceTable[u8PortId];

    u32LevelSet   = (((Dio_PortLevelType)(u32Level)) & ((Dio_PortLevelType)(u32Mask)));
    u32LevelClear = (((Dio_PortLevelType)(~u32Level)) & ((Dio_PortLevelType)(u32Mask)));
    Dio_HWA_SetPortOutput(pGpio, u32LevelSet);
    Dio_HWA_ClearPortOutput(pGpio, u32LevelClear);
}
#endif /* (STD_ON == DIO_MASKED_WRITE_PORT_API) */

#if ((DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT))
/**
 * @brief     Validate whether the core has the auth to write the pin
 *
 * @param[in] u16ChannelId     Id of the Dio channel
 * @param[in] pCoreConfigInfo  Config info of the channel partition
 * @return Std_ReturnType      Validation succeed or fail
 * @retval E_OK                Validation succeeded
 * @retval E_NOT_OK            Validation failed
 */
DIO_TEXT_SECTION Std_ReturnType Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,
                                                       const Dio_CoreConfigInfoType pCoreConfigInfo[])
{
    uint8          u8Pin           = (uint8)GPIO_CHANNEL_U32(u16ChannelId);
    uint8          u8Port          = (uint8)GPIO_PORT_U32(u16ChannelId);
    PORT_Type     *pPort           = Port_PortInstanceTable[u8Port];
    uint8          u8CurrentCoreID = GET_CPU_ID();
    uint32         u32CoreIDMask   = 1UL << u8CurrentCoreID;
    uint32         u32PinDWP;
    Std_ReturnType eRet = E_NOT_OK;
    for (uint32 i = 0; i < DioConf_DioChannel_CoreConfigInfo_NUM; i++)
    {
        if (u16ChannelId == pCoreConfigInfo[i].u16Channel)
        {
            u32PinDWP = ((PORT_HWA_ReadPcrValue(pPort, u8Pin) & PORT_PCR_DWP_MASK) >>
                         PORT_PCR_DWP_SHIFT);
            if ((0U == pCoreConfigInfo[i].pCoreUsed[u8CurrentCoreID]) &&
                (0U == (u32CoreIDMask & u32PinDWP)))
            {
                eRet = E_OK;
            }
            break;
        }
    }
    return eRet;
}

/**
 * @brief     Validate whether the core has the auth to write the port
 *
 * @param[in] u8PortId         Id of the Port
 * @param[in] u32Mask          Mask of the pins to be written
 * @return Std_ReturnType      Validation succeed or fail
 * @retval E_OK                Validation succeeded
 * @retval E_NOT_OK            Validation failed
 */
DIO_TEXT_SECTION Std_ReturnType Dio_HL_ValidatePortAuth(const Dio_PortType      u8PortId,
                                                        const Dio_PortLevelType u32Mask)
{
    PORT_Type     *pPort           = Port_PortInstanceTable[u8PortId];
    uint8          u8CurrentCoreID = GET_CPU_ID();
    uint32         u32CoreIDMask   = 1UL << u8CurrentCoreID;
    uint32         u32TmpMask      = u32Mask;
    uint32         u32PinId        = Dio_HL_Arm_Lsb(u32TmpMask);
    uint32         u32PinDWP;
    Std_ReturnType eRet = E_OK;
    while (u32PinId != 32U)
    {
        u32PinDWP = ((PORT_HWA_ReadPcrValue(pPort, u32PinId) & PORT_PCR_DWP_MASK) >>
                     PORT_PCR_DWP_SHIFT);
        if (0U != (u32CoreIDMask & u32PinDWP))
        {
            eRet = E_NOT_OK;
        }
        u32TmpMask &= ~(1 << u32PinId);
        u32PinId = Dio_HL_Arm_Lsb(u32TmpMask);
    }
    return eRet;
}
#endif /* (DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT) */
/* PRQA S 1503 -- */
#define DIO_STOP_SEC_CODE
#include "Dio_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
