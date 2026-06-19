/**
 *   @file    Dio.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Dio - driver API and development errors implemention.
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

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Dio.h"

#if (STD_ON == DIO_DEV_ERROR_DETECT)
#include "Det.h"
#endif

#include "Dio_Hw.h"
#include "Dio_version.h"
/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

#ifndef DIO_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DIO_AR_RELEASE_MAJOR_VERSION != DIO_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef DIO_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (DIO_SW_MAJOR_VERSION != DIO_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef DIO_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (DIO_SW_MINOR_VERSION != DIO_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef DIO_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (DIO_SW_PATCH_VERSION != DIO_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (DIO_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
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

#if (defined(DIO_PRECOMPILE_SUPPORT) || defined(DIO_LINKTIME_SUPPORT))

#define DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dio_MemMap.h"

#if (STD_ON == DIO_DEV_ERROR_DETECT)
/* Local Variable for storing the generated Dio configuration */
DIO_DATA_SECTION extern const Dio_ConfigType s_DioConfigChannels;
#endif

#define DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dio_MemMap.h"

#endif /* (defined(DIO_PRECOMPILE_SUPPORT) || defined(DIO_LINKTIME_SUPPORT))  */

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

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

/*================================================================================================*/

/*================================================================================================*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user */
/**
 * @brief          Read channel level.
 * @details        Service to read a level of a channel.
 *
 * @param[in]      ChannelId   Specifies the required channel id.
 *
 * @return                     Returns the level of the corresponding pin as
 *                             @p STD_HIGH or @p STD_LOW.
 * @retval STD_HIGH            The logical level of the corresponding pin is 1.
 * @retval STD_LOW             The logical level of the corresponding Pin is 0.
 *
 * @implements     Dio_ReadChannel_Activity
 *
 * @api
 */
DIO_TEXT_SECTION Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)
{
    Dio_LevelType u8ChannelLevel = (Dio_LevelType)STD_LOW;

#if (STD_ON == DIO_DEV_ERROR_DETECT)
    if ((((Dio_ChannelType)(ChannelId) < DIO_NUM_CHANNELS_U16)) &&
        ((Dio_PortLevelType)0 != (DIO_CHECK_PORT_CHANNEL_VALID(((uint16)ChannelId)))))
    {
#endif
        u8ChannelLevel = Dio_HL_ReadChannel(ChannelId);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_READCHANNEL_ID,
                              DIO_E_PARAM_INVALID_CHANNEL_ID);
    }
#endif

    return u8ChannelLevel;
}

/*================================================================================================*/
/**
 * @brief          Set channel level.
 * @details        Service to set a level of a channel.
 *
 * @param[in]      ChannelId   Specifies the required channel id.
 * @param[in]      Level       Specifies the channel desired level.
 *
 * @implements     Dio_WriteChannel_Activity
 *
 * @api
 */
DIO_TEXT_SECTION void Dio_WriteChannel(const Dio_ChannelType ChannelId, const Dio_LevelType Level)
{
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    if ((((Dio_ChannelType)(ChannelId) < DIO_NUM_CHANNELS_U16)) &&
        ((Dio_PortLevelType)0 != (DIO_CHECK_PORT_CHANNEL_VALID(((uint16)ChannelId)))))
    {
        if (((Dio_LevelType)STD_HIGH == Level) || ((Dio_LevelType)STD_LOW == Level))
        {
#if (DIO_SUPPORT_MULTICORE == STD_ON)
            if ((Std_ReturnType)E_OK == Dio_HL_ValidatePinAuth(ChannelId, Dio_CoreConfigInfo))
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
            {
#endif
                Dio_HL_WriteChannel(ChannelId, Level);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
            }
#if (DIO_SUPPORT_MULTICORE == STD_ON)
            else
            {
                (void)Det_ReportError((uint16)DIO_MODULE_ID,
                                      DIO_INSTANCE_ID,
                                      DIO_WRITECHANNEL_ID,
                                      DIO_E_PARAM_INVALID_CHANNEL_ID);
            }
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
        }
        else
        {
            (void)Det_ReportError((uint16)DIO_MODULE_ID,
                                  DIO_INSTANCE_ID,
                                  DIO_WRITECHANNEL_ID,
                                  DIO_E_PARAM_LEVEL);
        }
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_WRITECHANNEL_ID,
                              DIO_E_PARAM_INVALID_CHANNEL_ID);
    }
#endif
}

#if (STD_ON == DIO_FLIP_CHANNEL_API)
/*================================================================================================*/
/**
 * @brief          Flip channel level
 * @details        Service to flip a level of a channel.
 *
 * @param[in]      ChannelId   Specifies the required channel id.
 *
 * @return                     Returns the level of the corresponding pin as
 *                             @p STD_HIGH or @p STD_LOW.
 * @retval STD_HIGH            The logical level of the corresponding pin is 1.
 * @retval STD_LOW             The logical level of the corresponding Pin is 0.
 *
 * @pre            This function can be used only if @p DIO_FLIP_CHANNEL_API
 *                 has been enabled.
 *
 * @implements     Dio_FlipChannel_Activity
 *
 * @api
 */
DIO_TEXT_SECTION Dio_LevelType Dio_FlipChannel(const Dio_ChannelType ChannelId)
{
    Dio_LevelType u8ChannelLevel = (Dio_LevelType)STD_LOW;

#if (STD_ON == DIO_DEV_ERROR_DETECT)
    if ((((Dio_ChannelType)(ChannelId) < DIO_NUM_CHANNELS_U16)) &&
        ((Dio_PortLevelType)0 != (DIO_CHECK_PORT_CHANNEL_VALID(((uint16)ChannelId)))))
    {
#if (DIO_SUPPORT_MULTICORE == STD_ON)
        if ((Std_ReturnType)E_OK == Dio_HL_ValidatePinAuth(ChannelId, Dio_CoreConfigInfo))
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
        {
#endif
            u8ChannelLevel = Dio_HL_FlipChannel(ChannelId);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
        }
#if (DIO_SUPPORT_MULTICORE == STD_ON)
        else
        {
            (void)Det_ReportError((uint16)DIO_MODULE_ID,
                                  DIO_INSTANCE_ID,
                                  DIO_WRITECHANNEL_ID,
                                  DIO_E_PARAM_INVALID_CHANNEL_ID);
        }
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_FLIPCHANNEL_ID,
                              DIO_E_PARAM_INVALID_CHANNEL_ID);
    }
#endif

    return u8ChannelLevel;
}
#endif /* (STD_ON == DIO_FLIP_CHANNEL_API) */

/*================================================================================================*/
/**
 * @brief        Read Port level
 * @details      Service to Read level of a Port.
 *
 * @param[in]    PortId      Specifies the required port id.
 *
 * @return       Levels of all channels of specified port.
 *
 * @implements   Dio_ReadPort_Activity
 *
 * @api
 */
DIO_TEXT_SECTION Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)
{
    Dio_PortLevelType u32PortLevel = (Dio_PortLevelType)STD_LOW;

#if (STD_ON == DIO_DEV_ERROR_DETECT)

    if ((uint8)(PortId) < DIO_NUM_PORTS_U16)
    {
#endif
        u32PortLevel = Dio_HL_ReadPort(PortId);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_READPORT_ID,
                              DIO_E_PARAM_INVALID_PORT_ID);
    }
#endif

    return u32PortLevel;
}

/*================================================================================================*/
/**
 * @brief        Write Port level
 * @details      Service to write level of a Port.
 *
 * @param[in]      PortId      Specifies the required port id.
 * @param[in]      Level       Specifies the required levels for the port pins.
 *
 * @implements     Dio_WritePort_Activity
 *
 * @api
 */
DIO_TEXT_SECTION void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)
{
#if (STD_ON == DIO_DEV_ERROR_DETECT)
#if (DIO_SUPPORT_MULTICORE == STD_ON)
    uint32 u32PortLevel;
    uint32 u32Mask;
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
    if ((uint8)(PortId) < DIO_NUM_PORTS_U16)
    {
#if (DIO_SUPPORT_MULTICORE == STD_ON)
        u32PortLevel = Dio_HL_ReadPort(PortId);
        u32Mask      = Level ^ u32PortLevel;
        if ((Std_ReturnType)E_OK == Dio_HL_ValidatePortAuth(PortId, u32Mask))
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
        {
#endif
            Dio_HL_WritePort(PortId, Level);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
        }
#if (DIO_SUPPORT_MULTICORE == STD_ON)
        else
        {
            (void)Det_ReportError((uint16)DIO_MODULE_ID,
                                  DIO_INSTANCE_ID,
                                  DIO_WRITEPORT_ID,
                                  DIO_E_PARAM_INVALID_PORT_ID);
        }
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_WRITEPORT_ID,
                              DIO_E_PARAM_INVALID_PORT_ID);
    }
#endif
}

/*================================================================================================*/
/**
 * @brief          Read level of a Dio channel group
 * @details        Read level of a Dio channel group
 *
 * @param[in]      ChannelGroupIdPtr Pointer to the channel group.
 *
 * @return         The channel group levels.
 *
 * @implements     Dio_ReadChannelGroup_Activity
 *
 * @api
 */
DIO_TEXT_SECTION Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)
{
    Dio_PortLevelType u32PortLevel = (Dio_PortLevelType)STD_LOW;

#if (STD_ON == DIO_DEV_ERROR_DETECT)
    /* PRQA S 488,2992,2996 ++ #Misra-C:2012: Rule-18.4 Performing pointer arithmetic.
     *                    #Misra-C:2012: Rule-14.3 Performing controlling expression.
     *                    #Misra-C:2012: Rule-2.2 Performing controlling expression.
     * 488: Pointer to channel group is converted to unsigned long in order for it to
               be compared with the boundaries of the channel group list.Thus the pointer arithmetic
     is necessary
     * 2992,2996: It has no effect.     */
    if ((((pointerSizeType)(ChannelGroupIdPtr)) >=
         ((pointerSizeType)s_DioConfigChannels.pChannelGroupList)) &&
        (((pointerSizeType)(ChannelGroupIdPtr)) <
         (pointerSizeType)(s_DioConfigChannels.pChannelGroupList + MAX_CONFIGURED_DIO_CHANNEL_GROUPS)) &&
        ((uint8)(ChannelGroupIdPtr->port) < DIO_NUM_PORTS_U16) &&
        ((uint8)(ChannelGroupIdPtr->offset) <= DIO_MAX_VALID_OFFSET_U8))
    /* PRQA S 488,2992,2996 -- */
    {
#endif
        u32PortLevel = Dio_HL_ReadChannelGroup(ChannelGroupIdPtr);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_READCHANNELGROUP_ID,
                              DIO_E_PARAM_INVALID_GROUP_ID);
    }
#endif

    return u32PortLevel;
}

/*================================================================================================*/
/**
 * @brief          Write level of a Dio channel group
 * @details        Write level of a Dio channel group
 *
 * @param[in]      ChannelGroupIdPtr Pointer to the channel group.
 * @param[in]      Level       Desired levels for the channel group.
 *
 * @implements     Dio_WriteChannelGroup_Activity
 *
 * @api
 */
DIO_TEXT_SECTION void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr,
                                            const Dio_PortLevelType     Level)
{
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    /* PRQA S 488,2992,2996 ++ #Misra-C:2012: Rule-18.4 Performing pointer arithmetic.
     *                    #Misra-C:2012: Rule-14.3 Performing controlling expression.
     *                    #Misra-C:2012: Rule-2.2 Performing controlling expression.
     * 488: Pointer to channel group is converted to unsigned long in order for it to
               be compared with the boundaries of the channel group list.Thus the pointer arithmetic
     is necessary
     * 2992,2996: It has no effect.     */
    if ((((pointerSizeType)(ChannelGroupIdPtr)) >=
         ((pointerSizeType)s_DioConfigChannels.pChannelGroupList)) &&
        (((pointerSizeType)(ChannelGroupIdPtr)) <
         (pointerSizeType)(s_DioConfigChannels.pChannelGroupList + MAX_CONFIGURED_DIO_CHANNEL_GROUPS)) &&
        ((uint8)(ChannelGroupIdPtr->port) < DIO_NUM_PORTS_U16) &&
        ((uint8)(ChannelGroupIdPtr->offset) <= DIO_MAX_VALID_OFFSET_U8))
    /* PRQA S 488,2992,2996 -- */
    {
#endif
        Dio_HL_WriteChannelGroup(ChannelGroupIdPtr, Level);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_WRITECHANNELGROUP_ID,
                              DIO_E_PARAM_INVALID_GROUP_ID);
    }
#endif
}

#if (STD_ON == DIO_MASKED_WRITE_PORT_API)
/*================================================================================================*/
/**
 * @brief          Service to set the value of a given port with required mask
 * @details        Service to set the value of a given port with required mask
 *
 * @param[in]      PortId      ID of DIO Port.
 * @param[in]      Level       Desired levels for the channel group.
 * @param[in]      Mask        Channels to be masked in the port.
 *
 * @api
 */
DIO_TEXT_SECTION void Dio_MaskedWritePort(Dio_PortType      PortId,
                                          Dio_PortLevelType Level,
                                          Dio_PortLevelType Mask)
{
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    if ((uint8)(PortId) < DIO_NUM_PORTS_U16)
    {
#if (DIO_SUPPORT_MULTICORE == STD_ON)
        if ((Std_ReturnType)E_OK == Dio_HL_ValidatePortAuth(PortId, Mask))
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
        {
#endif
            Dio_HL_MaskedWritePort(PortId, Level, Mask);
#if (STD_ON == DIO_DEV_ERROR_DETECT)
        }
#if (DIO_SUPPORT_MULTICORE == STD_ON)
        else
        {
            (void)Det_ReportError((uint16)DIO_MODULE_ID,
                                  DIO_INSTANCE_ID,
                                  DIO_MASKEDWRITEPORT_ID,
                                  DIO_E_PARAM_INVALID_PORT_ID);
        }
#endif /* DIO_SUPPORT_MULTICORE == STD_ON */
    }
    else
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_MASKEDWRITEPORT_ID,
                              DIO_E_PARAM_INVALID_PORT_ID);
    }
#endif
}
#endif

#if (STD_ON == DIO_VERSION_INFO_API)
/*================================================================================================*/
/**
 * @brief         Service to get the version information of this module.
 * @details       Service to get the version information of this module.
 *                 .
 *
 * @param[in,out]  VersionInfo Pointer to where to store the version
 *                             information of this module.
 *
 * @pre            This function can be used only if @p DIO_VERSION_INFO_API
 *                 has been enabled.
 *
 * @implements     Dio_GetVersionInfo_Activity
 *
 * @api
 */
DIO_TEXT_SECTION void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo)
{
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    if (NULL_PTR == VersionInfo)
    {
        (void)Det_ReportError((uint16)DIO_MODULE_ID,
                              DIO_INSTANCE_ID,
                              DIO_GETVERSIONINFO_ID,
                              DIO_E_PARAM_POINTER);
    }
    else
#endif /* (STD_ON == DIO_DEV_ERROR_DETECT) */
    {
        VersionInfo->vendorID         = (uint16)DIO_VENDOR_ID;
        VersionInfo->moduleID         = (uint16)DIO_MODULE_ID;
        VersionInfo->sw_major_version = (uint8)DIO_SW_MAJOR_VERSION;
        VersionInfo->sw_minor_version = (uint8)DIO_SW_MINOR_VERSION;
        VersionInfo->sw_patch_version = (uint8)DIO_SW_PATCH_VERSION;
    }
}
#endif /* (STD_ON == DIO_DEV_ERROR_DETECT) */
/* PRQA S 1503 --*/

#define DIO_STOP_SEC_CODE
#include "Dio_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
