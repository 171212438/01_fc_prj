/* PRQA S 0292  EOF
 * REASON: using @ in comment
 */
/**
*   @file    CDD_I2c.c
*   @version 1.5.1

*   @brief   AUTOSAR CDD I2c- Complex driver and development error detection
*   @details I2c driver API and development error development
*
*   @addtogroup I2c
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : I2c
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       14/07/2023    qxw0100       N/A          I2c Initial Version
*   0.2.0       27/09/2023    qxw0100       N/A          Add multicore support
*   0.3.0       09/10/2023    qxw0100       N/A          Fix notification channel bug
*   0.4.0       17/11/2023    qxw0100       N/A          Fix error status bug
*   0.5.0       17/01/2024    qxw0100       N/A          Fix status bug
*   0.6.0       18/01/2024    qxw0100       N/A          Add channel fault clear function
                                                         Add NACK signal for user choice
*   1.2.1       23/06/2025    qxw0120       N/A          Update subaddress mode
*   1.4.0       10/09/2025    qxw0120       N/A          Optimize code， increase the use of FIFO
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/* PRQA S 2071,5087 EOF
 * REASON: Specify the segment where the data is placed
 */
/* PRQA S 3469 EOF
 * REASON: Macro definition function used to distinguish between single core and multi-core
 */
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "I2c_version.h"
#include "CDD_I2c.h"
#include "CDD_I2c_HwType.h"
#include "CDD_I2c_Reg.h"
#include "SchM_I2c.h"
#if (I2C_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

/*==================================================================================================
*                                       VERSION CHECKS
==================================================================================================*/
/* Check if current file and I2c configuration header file are of the same vendor */
#if (I2C_VENDOR_ID != I2C_CFG_VENDOR_ID)
#error "CDD_I2c_Cfg.c and CDD_I2c.h have different vendor ids"
#endif

/* Check if current file and I2c configuration header file are of the same Autosar version
 * [SWS_CDD_I2C_00061] */
#if ((I2C_AR_RELEASE_MAJOR_VERSION != I2C_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (I2C_AR_RELEASE_MINOR_VERSION != I2C_CFG_AR_RELEASE_MINOR_VERSION) || \
     (I2C_AR_RELEASE_REVISION_VERSION != I2C_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of I2c_version.h and CDD_I2c_Cfg.h are different"
#endif

/* Check if current file and I2c configuration header file are of the same software version */
#if ((I2C_SW_MAJOR_VERSION != I2C_CFG_SW_MAJOR_VERSION) || \
     (I2C_SW_MINOR_VERSION != I2C_CFG_SW_MINOR_VERSION) || \
     (I2C_SW_PATCH_VERSION != I2C_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of I2c_version.h and CDD_I2c_Cfg.h are different"
#endif

/*==================================================================================================
*                                       CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if (I2C_DEV_ERROR_DETECT == STD_ON)
#define I2C_START_SEC_VAR_INIT_UNSPECIFIED
#include "I2c_MemMap.h"

/**
 * @brief I2C driver status variable.
 *
 */
I2C_DATA_SECTION static I2c_StatusType I2c_u8DriverStatus[I2C_MAX_CORE_ID] = { I2C_UNINIT };

#define I2C_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "I2c_MemMap.h"
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

#define I2C_START_SEC_VAR_INIT_UNSPECIFIED
#include "I2c_MemMap.h"

/**
 * @brief Global configuration pointer.
 *
 */
I2C_DATA_SECTION static const I2c_ConfigType *I2c_pConfig[I2C_MAX_CORE_ID] = { NULL_PTR };

#define I2C_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "I2c_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#if (I2C_PRECOMPILE_SUPPORT == STD_ON)
extern const I2c_ConfigType I2c_Config;
#endif

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   Global FUNCTION PROTOTYPES
==================================================================================================*/
#define I2C_START_SEC_CODE
#include "I2c_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#if (I2C_DEV_ERROR_DETECT == STD_ON)
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_InitParameterCheck(const I2c_ConfigType *pConfig,
                                                                    uint8                 u8CoreId);
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_DeinitParameterCheck(uint8 u8CoreId);
#if (I2C_VERSION_INFO_API == STD_ON)
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_VersionParameterCheck(
    const Std_VersionInfoType *pVersionInfo);
#endif /* I2C_VERSION_INFO_API == STD_ON */
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_GetStatusParameterCheck(uint8 u8Channel,
                                                                         uint8 u8CoreId);
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_ClearStatusParameterCheck(uint8 u8Channel,
                                                                           uint8 u8CoreId);
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_IsTimeoutParameterCheck(uint8 u8Channel,
                                                                         uint8 u8CoreId);
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    I2c_SyncParameterCheck(uint8 u8Channel, const I2c_RequestType *pRequestPtr, uint8 u8CoreId);
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    I2c_AsyncParameterCheck(uint8 u8Channel, const I2c_RequestType *pRequestPtr, uint8 u8CoreId);
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    I2c_ListeningParameterCheck(uint8 u8Channel, const I2c_RequestType *pRequestPtr, uint8 u8CoreId);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (I2C_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief        IIC initial parameter check.
 *
 * @param[in]    pConfig         The IIC request type.
 * @param[in]    u8CoreId        The current core id.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_InitParameterCheck(const I2c_ConfigType *pConfig,
                                                                    uint8                 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

    if (I2C_UNINIT != I2c_u8DriverStatus[u8CoreId])
    {
        /* [SWS_CDD_I2C_00003] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_INIT_ID,
                              (uint8)I2C_E_ALREADY_INITIALIZED);
    }
    else
    {
#if (I2C_PRECOMPILE_SUPPORT == STD_ON)
        if (NULL_PTR != pConfig)
#else
        if (NULL_PTR == pConfig)
#endif /* I2C_PRECOMPILE_SUPPORT == STD_ON */
        {
            /* [SWS_CDD_I2C_00004] */
            (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                  (uint8)0,
                                  (uint8)I2C_INIT_ID,
                                  (uint8)I2C_E_PARAM_POINTER);
        }
        else
        {
            u8RetVal = E_OK;
        }
    }

    return u8RetVal;
}

/**
 * @brief        IIC de-initial parameter check.
 *
 * @param[in]    u8CoreId        The current core id.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_DeinitParameterCheck(uint8 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

    if (I2C_UNINIT == I2c_u8DriverStatus[u8CoreId])
    {
        /* [SWS_CDD_I2C_00009] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_DEINIT_ID,
                              (uint8)I2C_E_UNINIT);
    }
    else
    {
        u8RetVal = E_OK;
    }

    return u8RetVal;
}

#if (I2C_VERSION_INFO_API == STD_ON)
/**
 * @brief        IIC get version parameter check.
 *
 * @param[in]    pVersionInfo    The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_VersionParameterCheck(
    const Std_VersionInfoType *pVersionInfo)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

    if (NULL_PTR == pVersionInfo)
    {
        /* [SWS_CDD_I2C_00047] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_GETVERSIONINFO_ID,
                              (uint8)I2C_E_PARAM_POINTER);
    }
    else
    {
        u8RetVal = E_OK;
    }

    return u8RetVal;
}
#endif /* I2C_VERSION_INFO_API == STD_ON */
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

/**
 * @brief        IIC get status parameter check.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8CoreId        The current core id.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_GetStatusParameterCheck(uint8 u8Channel,
                                                                         uint8 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    if (I2C_UNINIT == I2c_u8DriverStatus[u8CoreId])
    {
        /* [SWS_CDD_I2C_00041] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_GETSTATUS_ID,
                              (uint8)I2C_E_UNINIT);
    }
    else
    {
        if ((uint8)I2C_MAX_MODULES <= u8Channel)
        {
            /* [SWS_CDD_I2C_00042] */
            (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                  (uint8)0,
                                  (uint8)I2C_GETSTATUS_ID,
                                  (uint8)I2C_E_PARAM_UNIT);
        }
        else
        {
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
            if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].I2c_CoreId != u8CoreId)
            {
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                /* [SWS_CDD_I2C_00043] */
                (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                      (uint8)0,
                                      (uint8)I2C_GETSTATUS_ID,
                                      (uint8)I2C_E_INV_CTRL_IDX);
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
            }
            else
            {
                u8RetVal = E_OK;
            }
#if (I2C_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

    return u8RetVal;
}

/**
 * @brief        IIC clear status parameter check.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8CoreId        The current core id.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_ClearStatusParameterCheck(uint8 u8Channel,
                                                                           uint8 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    if (I2C_UNINIT == I2c_u8DriverStatus[u8CoreId])
    {
        /* [SWS_CDD_I2C_00114] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_CLEARSTATUS_ID,
                              (uint8)I2C_E_UNINIT);
    }
    else
    {
        if ((uint8)I2C_MAX_MODULES <= u8Channel)
        {
            /* [SWS_CDD_I2C_00115] */
            (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                  (uint8)0,
                                  (uint8)I2C_CLEARSTATUS_ID,
                                  (uint8)I2C_E_PARAM_UNIT);
        }
        else
        {
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
            if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].I2c_CoreId != u8CoreId)
            {
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                /* [SWS_CDD_I2C_00116] */
                (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                      (uint8)0,
                                      (uint8)I2C_CLEARSTATUS_ID,
                                      (uint8)I2C_E_INV_CTRL_IDX);
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
            }
            else
            {
                u8RetVal = E_OK;
            }
#if (I2C_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

    return u8RetVal;
}

/**
 * @brief        IIC is timeout parameter check.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8CoreId        The current core id.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType I2c_IsTimeoutParameterCheck(uint8 u8Channel,
                                                                         uint8 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    if (I2C_UNINIT == I2c_u8DriverStatus[u8CoreId])
    {
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_ISTIMEOUT_ID,
                              (uint8)I2C_E_UNINIT);
    }
    else
    {
        if ((uint8)I2C_MAX_MODULES <= u8Channel)
        {
            (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                  (uint8)0,
                                  (uint8)I2C_ISTIMEOUT_ID,
                                  (uint8)I2C_E_PARAM_UNIT);
        }
        else
        {
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
            if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].I2c_CoreId != u8CoreId)
            {
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                      (uint8)0,
                                      (uint8)I2C_ISTIMEOUT_ID,
                                      (uint8)I2C_E_INV_CTRL_IDX);
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
            }
            else
            {
                u8RetVal = E_OK;
            }
#if (I2C_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

    return u8RetVal;
}

/**
 * @brief        IIC sync transmit parameter check.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    pRequestPtr     The IIC request type.
 * @param[in]    u8CoreId        The Core ID.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    I2c_SyncParameterCheck(uint8 u8Channel, const I2c_RequestType *pRequestPtr, uint8 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    if (I2C_UNINIT == I2c_u8DriverStatus[u8CoreId])
    {
        /* [SWS_CDD_I2C_00014] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_SYNCTRANSMIT_ID,
                              (uint8)I2C_E_UNINIT);
    }
    else
    {
        if (NULL_PTR == pRequestPtr)
        {
            /* [SWS_CDD_I2C_00015] [SWS_CDD_I2C_00095]*/
            (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                  (uint8)0,
                                  (uint8)I2C_SYNCTRANSMIT_ID,
                                  (uint8)I2C_E_PARAM_POINTER);
        }
        else
        {
            if ((NULL_PTR == pRequestPtr->BufferPtr) || ((uint8)0 == pRequestPtr->u16Len))
            {
                /* [SWS_CDD_I2C_00016] */
                (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                      (uint8)0,
                                      (uint8)I2C_SYNCTRANSMIT_ID,
                                      (uint8)I2C_E_PARAM_POINTER);
            }
            else
            {
                if ((uint8)I2C_MAX_MODULES <= u8Channel)
                {
                    /* [SWS_CDD_I2C_00019] */
                    (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                          (uint8)0,
                                          (uint8)I2C_SYNCTRANSMIT_ID,
                                          (uint8)I2C_E_PARAM_UNIT);
                }
                else
                {

#else
    (void)pRequestPtr;
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
                    if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].I2c_CoreId != u8CoreId)
                    {
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                        /* [SWS_CDD_I2C_00017] */
                        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                              (uint8)0,
                                              (uint8)I2C_SYNCTRANSMIT_ID,
                                              (uint8)I2C_E_INV_CTRL_IDX);
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
                    }
                    else
                    {
                        u8RetVal = E_OK;
                    }
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                }
            }
        }
    }
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

    return u8RetVal;
}

/**
 * @brief        IIC async transmit parameter check.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    pRequestPtr     The IIC request type.
 * @param[in]    u8CoreId        The Core ID.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    I2c_AsyncParameterCheck(uint8 u8Channel, const I2c_RequestType *pRequestPtr, uint8 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    if (I2C_UNINIT == I2c_u8DriverStatus[u8CoreId])
    {
        /* [SWS_CDD_I2C_00025] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_ASYNCTRANSMIT_ID,
                              (uint8)I2C_E_UNINIT);
    }
    else
    {
        if (NULL_PTR == pRequestPtr)
        {
            /* [[SWS_CDD_I2C_00095]] */
            (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                  (uint8)0,
                                  (uint8)I2C_ASYNCTRANSMIT_ID,
                                  (uint8)I2C_E_PARAM_POINTER);
        }
        else
        {
            if ((NULL_PTR == pRequestPtr->BufferPtr) || ((uint8)0 == pRequestPtr->u16Len))
            {
                /* [SWS_CDD_I2C_00027] */
                (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                      (uint8)0,
                                      (uint8)I2C_ASYNCTRANSMIT_ID,
                                      (uint8)I2C_E_PARAM_POINTER);
            }
            else
            {
                if ((uint8)I2C_MAX_MODULES <= u8Channel)
                {
                    /* [SWS_CDD_I2C_00026] */
                    (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                          (uint8)0,
                                          (uint8)I2C_ASYNCTRANSMIT_ID,
                                          (uint8)I2C_E_PARAM_UNIT);
                }
                else
                {
#else
    (void)pRequestPtr;
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
                    if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].I2c_CoreId != u8CoreId)
                    {
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                        /* [SWS_CDD_I2C_00028] */
                        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                              (uint8)0,
                                              (uint8)I2C_ASYNCTRANSMIT_ID,
                                              (uint8)I2C_E_INV_CTRL_IDX);
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
                    }
                    else
                    {
                        u8RetVal = E_OK;
                    }
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                }
            }
        }
    }
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

    return u8RetVal;
}

/**
 * @brief        IIC listening parameter check.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    pRequestPtr     The IIC request type.
 * @param[in]    u8CoreId        The Core ID.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    I2c_ListeningParameterCheck(uint8 u8Channel, const I2c_RequestType *pRequestPtr, uint8 u8CoreId)
{
    Std_ReturnType u8RetVal = E_NOT_OK;

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    if (I2C_UNINIT == I2c_u8DriverStatus[u8CoreId])
    {
        /* [SWS_CDD_I2C_00051] */
        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                              (uint8)0,
                              (uint8)I2C_STARTLISTENING_ID,
                              (uint8)I2C_E_UNINIT);
    }
    else
    {
        if (NULL_PTR == pRequestPtr)
        {
            /* [SWS_CDD_I2C_00098] */
            (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                  (uint8)0,
                                  (uint8)I2C_STARTLISTENING_ID,
                                  (uint8)I2C_E_PARAM_POINTER);
        }
        else
        {
            if (NULL_PTR == pRequestPtr->BufferPtr)
            {
                /* [SWS_CDD_I2C_00053] */
                (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                      (uint8)0,
                                      (uint8)I2C_STARTLISTENING_ID,
                                      (uint8)I2C_E_PARAM_POINTER);
            }
            else
            {
                if ((uint8)I2C_MAX_MODULES <= u8Channel)
                {
                    /* [SWS_CDD_I2C_00052] */
                    (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                          (uint8)0,
                                          (uint8)I2C_STARTLISTENING_ID,
                                          (uint8)I2C_E_PARAM_UNIT);
                }
                else
                {
#else
    (void)pRequestPtr;
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
                    if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].I2c_CoreId != u8CoreId)
                    {
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                        /* [SWS_CDD_I2C_00054] */
                        (void)Det_ReportError((uint16)I2C_MODULE_ID,
                                              (uint8)0,
                                              (uint8)I2C_STARTLISTENING_ID,
                                              (uint8)I2C_E_INV_CTRL_IDX);
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
                    }
                    else
                    {
                        u8RetVal = E_OK;
                    }
#if (I2C_DEV_ERROR_DETECT == STD_ON)
                }
            }
        }
    }
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */

    return u8RetVal;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief        IIC initial.
 * [SWS_CDD_I2C_00001] [SWS_CDD_I2C_00002]
 *
 * @param[in]    pI2cCfg  The IIC configuration type.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void I2c_Init(const I2c_ConfigType *pI2cCfg)
{
#if (I2C_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType u8RetVal;
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
    uint8 u8I2cIdx;
    uint8 u8Chnl;
    uint8 u8CoreId;

    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    u8RetVal = I2c_InitParameterCheck(pI2cCfg, u8CoreId);
    if (E_OK == u8RetVal)
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
    {
#if (I2C_PRECOMPILE_SUPPORT == STD_ON)
        I2c_pConfig[u8CoreId] = &I2c_Config;
#else
        /* PRQA S 2919 ++
         * REASON: Store global variable structure
         */
        I2c_pConfig[u8CoreId] = pI2cCfg;
/* PRQA S 2919 --
 */
#endif /* I2C_PRECOMPILE_SUPPORT == STD_ON */
        for (u8Chnl = 0; u8Chnl < I2c_pConfig[u8CoreId]->I2c_MaxHwUnit; u8Chnl++)
        {
            if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].I2c_CoreId == u8CoreId)
            {
                u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].tFCI2c_Config->u8HwIndex;
                if (I2C_MASTER_MODE ==
                    (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].tFCI2c_Config->u8MasterMode)
                {
                    (void)FCIIC_Init_Master(
                        u8I2cIdx,
                        u8CoreId,
                        ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].tFCI2c_reg));
                }
                else
                {
                    (void)FCIIC_Init_Slave(
                        u8I2cIdx,
                        u8CoreId,
                        ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].tFCI2c_reg));
                }
            }
        }

#if (I2C_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_CDD_I2C_00006] */
        I2c_u8DriverStatus[u8CoreId] = I2C_IDLE;
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
    }
}

/**
 * @brief        IIC de-initial.
 * [SWS_CDD_I2C_00007] [SWS_CDD_I2C_00008]
 *
 * @return       void.
 */
I2C_TEXT_SECTION void I2c_DeInit(void)
{
    Std_ReturnType u8RetVal;
    uint8          u8I2cIdx;
    uint8          u8Chnl;
    uint8          u8CoreId;

    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();

#if (I2C_DEV_ERROR_DETECT == STD_ON)
    u8RetVal = I2c_DeinitParameterCheck(u8CoreId);
    if (E_OK == u8RetVal)
#else

    u8RetVal = E_OK;
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
    {
        for (u8Chnl = 0; u8Chnl < I2c_pConfig[u8CoreId]->I2c_MaxHwUnit; u8Chnl++)
        {
            if ((*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].I2c_CoreId == u8CoreId)
            {
                u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].tFCI2c_Config->u8HwIndex;
                if (I2C_MASTER_MODE ==
                    (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Chnl].tFCI2c_Config->u8MasterMode)
                {
                    u8RetVal |= FCIIC_DeInit_Master(u8I2cIdx);
                }
                else
                {
                    u8RetVal |= FCIIC_DeInit_Slave(u8I2cIdx);
                }
            }
        }

        if (E_OK == u8RetVal)
        {
            I2c_pConfig[u8CoreId] = NULL_PTR;
#if (I2C_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_CDD_I2C_00010] */
            I2c_u8DriverStatus[u8CoreId] = I2C_UNINIT;
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
        }
    }
}

/* [SWS_CDD_I2C_00097] */
#if (I2C_VERSION_INFO_API == STD_ON)
/**
 * @brief        IIC get version.
 * [SWS_CDD_I2C_00045] [SWS_CDD_I2C_00046]
 *
 * @param[in]    pVersionInfo    The IIC version type.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void I2c_GetVersionInfo(Std_VersionInfoType *pVersionInfo)
{
#if (I2C_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType u8RetVal;
    u8RetVal = I2c_VersionParameterCheck(pVersionInfo);
    if (E_OK == u8RetVal)
#endif /* I2C_DEV_ERROR_DETECT == STD_ON */
    {
        (pVersionInfo)->vendorID         = (uint16)I2C_VENDOR_ID;
        (pVersionInfo)->moduleID         = (uint16)I2C_MODULE_ID;
        (pVersionInfo)->sw_major_version = (uint8)I2C_SW_MAJOR_VERSION;
        (pVersionInfo)->sw_minor_version = (uint8)I2C_SW_MINOR_VERSION;
        (pVersionInfo)->sw_patch_version = (uint8)I2C_SW_PATCH_VERSION;
    }
}
#endif /* I2C_VERSION_INFO_API == STD_ON */

/**
 * @brief        IIC get status.
 * [SWS_CDD_I2C_00039] [SWS_CDD_I2C_00040]
 *
 * @param[in]    u8Channel                  The IIC channel.
 *
 * @return       I2c_ChannelStatusType      The channel status.
 */
I2C_TEXT_SECTION I2c_ChannelStatusType I2c_GetStatus(uint8 u8Channel)
{
    I2c_ChannelStatusType u8Status;
    Std_ReturnType        u8RetVal;
    uint8                 u8I2cIdx;
    uint8                 u8CoreId;

    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();

    u8RetVal = I2c_GetStatusParameterCheck(u8Channel, u8CoreId);
    if (E_OK == u8RetVal)
    {
        u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].tFCI2c_Config->u8HwIndex;
        u8Status = FCIIC_GetChannelStatus(u8I2cIdx);
    }
    else
    {
        /* [SWS_CDD_I2C_00044] */
        u8Status = I2C_CH_ERROR_PRESENT;
    }
    return u8Status;
}

/**
 * @brief        IIC clear channel fault status.
 * [SWS_CDD_I2C_00113]
 *
 * @param[in]    u8Channel                  The IIC channel.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_ClearStatus(uint8 u8Channel)
{
    Std_ReturnType u8RetVal;
    uint8          u8I2cIdx;
    uint8          u8CoreId;

    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();

    u8RetVal = I2c_ClearStatusParameterCheck(u8Channel, u8CoreId);
    if (E_OK == u8RetVal)
    {
        u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].tFCI2c_Config->u8HwIndex;
        u8RetVal = FCIIC_ClearChannelFault(u8I2cIdx);
    }

    return u8RetVal;
}

/**
 * @brief        IIC check timeout.
 *
 * @param[in]    u8Channel                  The IIC channel.
 * @param[in]    u32Times               The transmission time is considered a timeout,The actual
 * time is equal to the query period multiplied by u32Times.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            no timeout.
 * @retval       E_NOT_OK        timeout.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_IsTimeout(uint8 u8Channel, uint32 u32Times)
{
    Std_ReturnType u8RetVal;
    uint8          u8I2cIdx;
    uint8          u8CoreId;
    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();
    u8RetVal = I2c_IsTimeoutParameterCheck(u8Channel, u8CoreId);
    if (E_OK == u8RetVal)
    {
        u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].tFCI2c_Config->u8HwIndex;
        u8RetVal = FCIIC_CheckForTimeouts(u8I2cIdx, u32Times);
    }

    return u8RetVal;
}
/**
 * @brief        IIC master send or receive message at polling mode.
 * [SWS_CDD_I2C_00012] [SWS_CDD_I2C_00013]
 *
 * @param[in]    u8Channel   The IIC channel.
 * @param[in]    pRequestPtr The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_SyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)
{
    Std_ReturnType u8RetVal;
    uint8          u8I2cIdx;
    uint8          u8CoreId;

    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();

    /* [SWS_CDD_I2C_00021] */
    u8RetVal = I2c_SyncParameterCheck(u8Channel, pRequestPtr, u8CoreId);
    if (E_OK == u8RetVal)
    {
        u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].tFCI2c_Config->u8HwIndex;
        if (pRequestPtr->u8Direction == I2C_DIR_READ)
        {
            u8RetVal = FCIIC_MasterSyncReceive(u8Channel, u8I2cIdx, pRequestPtr);
        }
        else
        {
            u8RetVal = FCIIC_MasterSyncSend(u8Channel, u8I2cIdx, pRequestPtr);
        }
    }

    return u8RetVal;
}

/**
 * @brief        IIC master send or receive message at asynchronous mode.
 * [SWS_CDD_I2C_00023] [SWS_CDD_I2C_00024]
 *
 * @param[in]    u8Channel   The IIC channel.
 * @param[in]    pRequestPtr The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_AsyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)
{
    Std_ReturnType u8RetVal;
    uint8          u8I2cIdx;
    uint8          u8CoreId;

    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();

    u8RetVal = I2c_AsyncParameterCheck(u8Channel, pRequestPtr, u8CoreId);
    if (E_OK == u8RetVal)
    {
        u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].tFCI2c_Config->u8HwIndex;
        if (pRequestPtr->u8Direction == I2C_DIR_READ)
        {
            u8RetVal = FCIIC_MasterAsyncReceive(u8Channel, u8I2cIdx, pRequestPtr);
        }
        else
        {
            u8RetVal = FCIIC_MasterAsyncSend(u8Channel, u8I2cIdx, pRequestPtr);
        }
    }

    return u8RetVal;
}

/**
 * @brief        IIC slave send or receive message.
 * [SWS_CDD_I2C_00048] [SWS_CDD_I2C_00049] [SWS_CDD_I2C_00050]
 *
 * @param[in]    u8Channel   The IIC channel.
 * @param[in]    pRequestPtr The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_StartListening(uint8 u8Channel, const I2c_RequestType *pRequestPtr)
{
    Std_ReturnType u8RetVal;
    uint8          u8I2cIdx;
    uint8          u8CoreId;

    /* Get core ID of current processor */
    u8CoreId = GET_CPU_ID();

    u8RetVal = I2c_ListeningParameterCheck(u8Channel, pRequestPtr, u8CoreId);
    if (E_OK == u8RetVal)
    {
        u8I2cIdx = (*I2c_pConfig[u8CoreId]->I2c_pParmConfig)[u8Channel].tFCI2c_Config->u8HwIndex;
        u8RetVal = FCIIC_SlaveListening(u8Channel, u8I2cIdx, pRequestPtr);
    }
    return u8RetVal;
}

#define I2C_STOP_SEC_CODE
#include "I2c_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
