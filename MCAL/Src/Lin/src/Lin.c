/**
*   @file    Lin.c
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
*   PLATFORM             : Flagchip FC7xxx
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
*   0.1.0       15/06/2023    QXW0095       N/A          LIN Initial Version
*   0.2.0       27/09/2023    QXW0095       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0095       N/A          Optimize the static code
*   0.4.0       20/11/2023    QXW0095       N/A          Optimize the static code
*   0.6.0       18/03/2024    QXW0122       N/A          Add support for FC7240
*   0.7.0       16/04/2024    QXW0122       N/A          Add Lin slave mode
*   0.8.0       01/08/2024    QXW0122       N/A          Add timeout detection & Add FIFO support
==================================================================================================*/
/* [SWS_Lin_00055] */
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/* [SWS_Lin_00235] [SWS_Lin_00268] */
#include "Lin.h"
#include "Lin_FCUart.h"
#include "LinIf_Cbk.h"
#include "LinIf.h"

#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */

/* [SWS_Lin_00234] */
#if (LIN_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif /* LIN_DEV_ERROR_DETECT == STD_ON */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef LIN_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (LIN_AR_RELEASE_MAJOR_VERSION != LIN_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef LIN_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (LIN_SW_MAJOR_VERSION != LIN_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef LIN_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (LIN_SW_MINOR_VERSION != LIN_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef LIN_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (LIN_SW_PATCH_VERSION != LIN_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (LIN_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != LIN_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define LIN_START_SEC_VAR_INIT_UNSPECIFIED
#include "Lin_MemMap.h"
LIN_DATA_SECTION static const Lin_ConfigType *Lin_ConfigPtr[LIN_PARTIONS_NB] =
    LIN_CONFIGPTR_UNINIT_ARRAY;

#define LIN_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
/* [SWS_Lin_00207] */
#define LIN_START_SEC_VAR_INIT_8
#include "Lin_MemMap.h"

/**
 * @brief      Lin driver status variable.
 * @details    Lin driver state machine.
 */
/* [SWS_Lin_00145] */
LIN_DATA_SECTION static uint8 Lin_SM_DriveStatus[LIN_PARTIONS_NB] = LIN_DRIVER_STATUS_UNINIT_ARRAY;

#define LIN_STOP_SEC_VAR_INIT_8
#include "Lin_MemMap.h"

#define LIN_START_SEC_VAR_NO_INIT_8
#include "Lin_MemMap.h"
/**
 * @brief     Lin channel state variable.
 * @details   Lin channel state machine.
 */
LIN_DATA_SECTION volatile uint8 Lin_SM_ChStatus[LIN_INSTANCE_CONFIG];

/**
 * @brief     Lin frame state variable.
 * @details   Lin frame status.
 */
LIN_DATA_SECTION volatile uint8 Lin_SM_ChFrameStatus[LIN_INSTANCE_CONFIG];

/**
 * @brief     Lin frame error status variable.
 * @details   Lin frame error status.
 */
LIN_DATA_SECTION volatile uint8 Lin_SM_ChFrameErrStatus[LIN_INSTANCE_CONFIG];

/**
 * @brief     Lin Frame header state variable.
 * @details   Lin Frame header state.
 */
LIN_DATA_SECTION static volatile uint8 Lin_SM_ChHeaderStatus[LIN_INSTANCE_CONFIG];

/**
 * @brief     Lin header command type variable.
 * @details   Lin header command type.
 */
LIN_DATA_SECTION uint8 Lin_SM_TransmitHeaderCmd[LIN_INSTANCE_CONFIG];

/**
 * @brief          LIN SDU buffer variable.
 * @details        LIN SDU buffer to be returned.
 */
LIN_DATA_SECTION static uint8 Lin_SM_SduBuffAddr[LIN_INSTANCE_CONFIG][LIN_MAX_DATA_LENGTH];

#define LIN_STOP_SEC_VAR_NO_INIT_8
#include "Lin_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

#if (LIN_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE void Lin_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */

LOCAL_INLINE Std_ReturnType Lin_ValidateGlobalCall(uint8 u8ServiceId);

LOCAL_INLINE Std_ReturnType Lin_ValidateChannelCall(uint8 u8ServiceId, uint8 u8Channel);

LOCAL_INLINE Std_ReturnType Lin_ValidateLinSMInit(uint8 u8ServiceId);

LOCAL_INLINE Std_ReturnType Lin_ValidateLinSMUnInit(uint8 u8ServiceId);

LOCAL_INLINE Std_ReturnType Lin_ValidateLinSMSleep(uint8 u8ServiceId, uint8 u8Channel);

LOCAL_INLINE Std_ReturnType Lin_ValidateLinConfigPtr(uint8                 u8ServiceId,
                                                     const Lin_ConfigType *pValidatePtr);

#if (LIN_MASTER_NODE_USED == STD_ON)
LOCAL_INLINE Std_ReturnType Lin_ValidatePtr(uint8 u8ServiceId, const void *pValidatePtr);
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

#if (LIN_VERSION_INFO_API == STD_ON)
LOCAL_INLINE Std_ReturnType Lin_ValidateVersionPtr(uint8                      u8ServiceId,
                                                   const Std_VersionInfoType *pVersionPtr);
#endif /* LIN_VERSION_INFO_API == STD_ON */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (LIN_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief Lin General Report DetError
 *
 * @param u8ServiceId
 * @param u8ErrorId
 * @return Std_ReturnType
 *
 */
LOCAL_INLINE void Lin_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    (void)Det_ReportError((uint16)LIN_MODULE_ID, (uint8)LIN_INSTANCE_ID, u8ServiceId, u8ErrorId);
}
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */

/**
 * @brief Lin Validate Global Call
 *
 * @param u8ServiceId
 * @return Std_ReturnType
 *
 */
LOCAL_INLINE Std_ReturnType Lin_ValidateGlobalCall(uint8 u8ServiceId)
{
    Std_ReturnType ValidStatus = (Std_ReturnType)E_NOT_OK;

    uint32 LinCurrentPartionId = GET_CPU_ID();

    if (NULL_PTR == Lin_ConfigPtr[LinCurrentPartionId])
    {
        if (LIN_INIT_ID == u8ServiceId)
        {
            ValidStatus = (Std_ReturnType)E_OK;
        }
    }
    else
    {
        if (LIN_INIT_ID == u8ServiceId)
        {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
            Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_ALREADY_INITIALIZED);
#else
            (void)u8ServiceId;
#endif
        }
    }
    return ValidStatus;
}

/**
 * @brief Lin Validate Channel Call
 *
 * @param u8ServiceId
 * @param u8Channel
 * @return Std_ReturnType
 */
/* [SWS_Lin_00251] */
LOCAL_INLINE Std_ReturnType Lin_ValidateChannelCall(uint8 u8ServiceId, uint8 u8Channel)
{
    Std_ReturnType ValidStatus         = (Std_ReturnType)E_NOT_OK;
    uint32         LinCurrentPartionId = GET_CPU_ID();
    if ((LinCurrentPartionId < LIN_PARTIONS_NB) &&
        (LinCurrentPartionId == Lin_ConfigPtr[LinCurrentPartionId]->LinPartionCoreId))
    {
        /* Check if the channel is in valid range */
        if (u8Channel >= LIN_INSTANCE_CONFIG)
        {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_Lin_00215] */
            Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_INVALID_CHANNEL);
#else
            (void)u8ServiceId;
#endif
        }
        else if (
            LinCurrentPartionId !=
            Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig[u8Channel]->pLinChannel->ChannelCoreId)
        {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_Lin_00215] */
            Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_INVALID_CHANNEL);
#else
            (void)u8ServiceId;
#endif
        }
        else
        {
            ValidStatus = (Std_ReturnType)E_OK;
        }
    }
    return ValidStatus;
}

/**
 * @brief Lin Validate State Machine Init
 *
 * @param u8ServiceId
 * @return Std_ReturnType
 */
LOCAL_INLINE Std_ReturnType Lin_ValidateLinSMInit(uint8 u8ServiceId)
{

    Std_ReturnType ValidStatus = (Std_ReturnType)E_NOT_OK;

    uint32 LinCurrentPartionId = GET_CPU_ID();

    if (LinCurrentPartionId < LIN_PARTIONS_NB)
    {
        /* Check if the Lin SM is init*/
        if (Lin_SM_DriveStatus[LinCurrentPartionId] != LIN_INIT)
        {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
            Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_UNINIT);
#else
            (void)u8ServiceId;
#endif /* LIN_DEV_ERROR_DETECT == STD_ON */
        }
        else
        {
            ValidStatus = (Std_ReturnType)E_OK;
        }
    }
    return ValidStatus;
}

/**
 * @brief Lin Validate State Machine UnInit
 *
 * @param u8ServiceId
 * @return Std_ReturnType
 */
LOCAL_INLINE Std_ReturnType Lin_ValidateLinSMUnInit(uint8 u8ServiceId)
{
    Std_ReturnType ValidStatus = (Std_ReturnType)E_NOT_OK;

    uint32 LinCurrentPartionId = GET_CPU_ID();

    if (LinCurrentPartionId < LIN_PARTIONS_NB)
    {
        /* Check if the Lin SM is init*/
        if (Lin_SM_DriveStatus[LinCurrentPartionId] != LIN_UNINIT)
        {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_Lin_00213] */
            Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_STATE_TRANSITION);
#else
            (void)u8ServiceId;
#endif /* LIN_DEV_ERROR_DETECT == STD_ON */
        }
        else
        {
            ValidStatus = (Std_ReturnType)E_OK;
        }
    }
    return ValidStatus;
}

/**
 * @brief Lin Validate State Machine Sleep
 *
 * @param u8ServiceId
 * @param u8Channel
 * @return Std_ReturnType
 */
LOCAL_INLINE Std_ReturnType Lin_ValidateLinSMSleep(uint8 u8ServiceId, uint8 u8Channel)
{
    Std_ReturnType ValidStatus = (Std_ReturnType)E_NOT_OK;

    if (Lin_SM_ChStatus[u8Channel] != LIN_CH_SLEEP_STATE)
    {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_Lin_00213] */
        Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_STATE_TRANSITION);
#else
        (void)u8ServiceId;
#endif /* LIN_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        ValidStatus = (Std_ReturnType)E_OK;
    }
    return ValidStatus;
}

/**
 * @brief Lin Validate Lin_ConfigType pointer
 *
 * @param u8ServiceId
 * @param pValidatePtr
 * @return Std_ReturnType
 *
 */
/* PRQA S 3219 ++
 * 3219:Static function '%1s()' is not used within this translation unit.
 * REASON: Configuration will guarantee that the function will be called when it is defined.
 */
LOCAL_INLINE Std_ReturnType Lin_ValidateLinConfigPtr(uint8                 u8ServiceId,
                                                     const Lin_ConfigType *pValidatePtr)
{
    Std_ReturnType ValidStatus = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == pValidatePtr)
    {
        ValidStatus = (Std_ReturnType)E_NOT_OK;
#if (LIN_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_Lin_00216] */
        Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_INVALID_POINTER);
#else
        (void)u8ServiceId;
#endif /* LIN_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        ValidStatus = (Std_ReturnType)E_OK;
    }
    return ValidStatus;
}
/* PRQA S 3219 -- */

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief Lin Validate general pointer
 *
 * @param u8ServiceId
 * @param pValidatePtr
 * @return Std_ReturnType
 *
 */
LOCAL_INLINE Std_ReturnType Lin_ValidatePtr(uint8 u8ServiceId, const void *pValidatePtr)
{
    Std_ReturnType ValidStatus = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == pValidatePtr)
    {
        ValidStatus = (Std_ReturnType)E_NOT_OK;
#if (LIN_DEV_ERROR_DETECT == STD_ON)
        Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_PARAM_POINTER);
#else
        (void)u8ServiceId;
#endif /* LIN_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        ValidStatus = (Std_ReturnType)E_OK;
    }
    return ValidStatus;
}
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

#if (LIN_VERSION_INFO_API == STD_ON)
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: The function is not used in this project but it must be applied for user */
/**
 * @brief Lin Validate general pointer
 *
 * @param u8ServiceId
 * @param pVersionPtr
 * @return Std_ReturnType
 *
 */
LOCAL_INLINE Std_ReturnType Lin_ValidateVersionPtr(uint8                      u8ServiceId,
                                                   const Std_VersionInfoType *pVersionPtr)
{
    Std_ReturnType ValidStatus = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == pVersionPtr)
    {
        ValidStatus = (Std_ReturnType)E_NOT_OK;
#if (LIN_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_Lin_00249] */
        Lin_ReportDetError(u8ServiceId, (uint8)LIN_E_PARAM_POINTER);
#else
        (void)u8ServiceId;
#endif /* LIN_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {
        ValidStatus = (Std_ReturnType)E_OK;
    }
    return ValidStatus;
}
/* PRQA S 1503 -- */
#endif /* LIN_VERSION_INFO_API == STD_ON */

/**
 * @brief   Initializes the Lin module state machine.
 * @details This function is used to initialize LIN driver statemachine:
 *          - Clears the shadow buffer of all available Lin channels
 *          - Set Lin channel state machine of all available Lin
 *            channels to LIN_CH_SLEEP_STATE or LIN_CH_OPERATIONAL for others
 *          - Set frame operation state machine of all available Lin
 *            channels to LIN_CH_NOT_READY_STATE or LIN_CH_READY_STATE for others
 *          - Set driver state machine to LIN_INIT.
 *
 * @param[in] void
 *
 * @return  void
 *
 *
 */
LIN_TEXT_SECTION static void Lin_StateMachineInit(void)
{
    uint8  u8LinChannelConfig;
    uint8  u8LinDataLength;
    uint32 LinCurrentPartionId = GET_CPU_ID();

    if (LinCurrentPartionId == (Lin_ConfigPtr[LinCurrentPartionId]->LinPartionCoreId))
    {
        for (u8LinChannelConfig = (uint8)0U; u8LinChannelConfig < LIN_INSTANCE_CONFIG;
             u8LinChannelConfig++)
        {
            if (LinCurrentPartionId == (Lin_ConfigPtr[LinCurrentPartionId]
                                            ->pLin_CoreConfig[u8LinChannelConfig]
                                            ->pLinChannel->ChannelCoreId))
            {
                /*Clears the shadow buffer of all available Lin channels*/
                for (u8LinDataLength = (uint8)0U; u8LinDataLength < LIN_MAX_DATA_LENGTH;
                     u8LinDataLength++)
                {
                    Lin_SM_SduBuffAddr[u8LinChannelConfig][u8LinDataLength] = (uint8)0U;
                }
                /* Set Lin channels to LIN_CH_SLEEP_STATE */
                /* [SWS_Lin_00171] */
                Lin_SM_ChStatus[u8LinChannelConfig] = LIN_CH_SLEEP_STATE;
                /* Set Lin channel frame operation status to LIN_CH_NOT_READY_STATE */
                Lin_SM_ChFrameStatus[u8LinChannelConfig] = LIN_CH_NOT_READY_STATE;
                /* Set header status flag */
                Lin_SM_ChHeaderStatus[u8LinChannelConfig] = (uint8)FALSE;
                /* Reset header command type */
                Lin_SM_TransmitHeaderCmd[u8LinChannelConfig] = LIN_TX_NO_COMMAND;
                /* Reset error status global flag */
                Lin_SM_ChFrameErrStatus[u8LinChannelConfig] = LIN_NO_ERROR;
            }
        }
        /*Set Lin driver status to LIN_INIT*/
        /* [SWS_Lin_00146] */
        Lin_SM_DriveStatus[LinCurrentPartionId] = LIN_INIT;
    }
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/****************************** AUTOSAR LIN Driver API Functions ******************************/
/**
 * @brief   Initializes the Lin module.
 * @details This function is used to initialize LIN driver(including state machine).
 *
 * @param[in] Config        Pointer to Lin driver configuration .
 *
 * @return  void
 *
 *
 * @note    Autosar Service ID: 0x00.
 * @note    Synchronous, non reentrant function.
 * @note    Autosar mandatory requirement
 *
 */
/* [SWS_Lin_00006] [SWS_Lin_00084] [SWS_Lin_00150] [SWS_Lin_00190] */
LIN_TEXT_SECTION void Lin_Init(const Lin_ConfigType *Config)
{
    uint8  u8LinChannelConfig;
    uint32 LinCurrentPartionId = GET_CPU_ID();
    /* [SWS_Lin_00105] [SWS_Lin_00106] */
    if ((Std_ReturnType)E_OK == Lin_ValidateLinSMUnInit(LIN_INIT_ID))
    {
        if ((Std_ReturnType)E_OK == Lin_ValidateGlobalCall(LIN_INIT_ID))
        {
            /* [SWS_Lin_CONSTR_00270] */
#if (LIN_PRECOMPILE_SUPPORT == STD_ON)
            Lin_ConfigPtr[LinCurrentPartionId] = Lin_PBCfgVarPredef[LinCurrentPartionId];
#else /* LIN_PRECOMPILE_SUPPORT == STD_OFF */
            /* [SWS_Lin_00099] */
            if ((Std_ReturnType)E_OK == Lin_ValidateLinConfigPtr(LIN_INIT_ID, Config))
            {
                if (Config->LinPartionCoreId == LinCurrentPartionId)
                {
                    Lin_ConfigPtr[LinCurrentPartionId] = Config;
                }
            }
#endif
            if (NULL_PTR != Lin_ConfigPtr[LinCurrentPartionId])
            {
                /* update Lin state machine */
                Lin_StateMachineInit();
                /* [SWS_Lin_00045] */
                for (u8LinChannelConfig = 0U; u8LinChannelConfig < LIN_INSTANCE_CONFIG;
                     u8LinChannelConfig++)
                {
                    if (LinCurrentPartionId == (Lin_ConfigPtr[LinCurrentPartionId]
                                                    ->pLin_CoreConfig[u8LinChannelConfig]
                                                    ->pLinChannel->ChannelCoreId))
                    {
                        Lin_LL_ChannelInit(u8LinChannelConfig, Lin_ConfigPtr[LinCurrentPartionId]);
                    }
                }
            }
        }
    }
}

/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: The function is not used in this project but it must be applied for user */
/**
 * @brief   Check the wake up of Lin channel.
 * @details This function identifies if the Lin channel has been woken up
 *
 * @retval E_NOT_OK   If the Lin Channel is not valid,
 *                    Lin driver is not initialized,
 *                    Lin Channel is not in sleep state or no wakeup.
 * @retval E_OK
 *
 * @note    Autosar Service ID: 0x0A.
 * @note    Synchronous, non reentrant function.
 *
 */
/* [SWS_Lin_00160] */
LIN_TEXT_SECTION Std_ReturnType Lin_CheckWakeup(uint8 Channel)
{
    uint8 u8RetVal = (uint8)E_NOT_OK;
    uint8 u8TempChannelStatus;

    uint32 LinCurrentPartionId = GET_CPU_ID();
    (void)LinCurrentPartionId;
    /* [SWS_Lin_00106] [SWS_Lin_00107] */
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_CHECKWAKEUP_ID))
    {
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_CHECKWAKEUP_ID, Channel))
        {
            u8TempChannelStatus = Lin_SM_ChStatus[Channel];
            /* The addressed Lin channel is initialized */
            /* Check if the addressed Lin channel is in
               LIN_CH_SLEEP_STATE state or LIN_CH_SLEEP_PENDING state */
            if ((LIN_CH_SLEEP_STATE == u8TempChannelStatus) ||
                (LIN_CH_SLEEP_PENDING == u8TempChannelStatus))
            {
#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
                /*check if wakeup is supported for the channel*/
                if (Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig[Channel]->pLinChannel->u8LinWakeUpSup ==
                    (uint8)STD_ON)
                {
                    /* [SWS_Lin_00098] */
                    if ((uint8)TRUE == Lin_LL_CheckWakeup(Channel))
                    {
                        /* Indicates a valid timer wakeup event to ECU State Manager */
                        EcuM_SetWakeupEvent((EcuM_WakeupSourceType)Lin_ConfigPtr[LinCurrentPartionId]
                                                ->pLin_CoreConfig[Channel]
                                                ->pLinChannel->LinChannelWakeUpSrc);
                        /* Report the wakeup source after the successful wakeup to LinInterface */
                        LinIf_WakeupConfirmation(Lin_ConfigPtr[LinCurrentPartionId]
                                                     ->pLin_CoreConfig[Channel]
                                                     ->pLinChannel->LinChannelWakeUpSrc);
                        u8RetVal = (uint8)E_OK;
                    }
                }
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */
            }
            else
            {
                /* Do nothing */
            }
        }
    }
    return u8RetVal;
}
/* PRQA S 1503 -- */

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Gets the status of the LIN driver.
 * @details This function returns the state of the current
 *          transmission, reception or operation status.
 *          If the reception of a Slave response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *          This function is only available on the master node.
 *
 * @param[in] Channel       LIN channel to be checked.
 *
 * @param[out] Lin_SduPtr   Lin_SduPtr pointer to pointer to a shadow
 *                          buffer or memory mapped LIN Hardware
 *                          receive buffer where the current SDU is
 *                          stored.
 * @return                  Lin_StatusType.
 * @retval LIN_NOT_OK       Development or production error raised
 *                          none of the below conditions.
 * @retval LIN_TX_OK        Successful transmission.
 * @retval LIN_TX_BUSY      Ongoing transmission of header or response.
 * @retval LIN_TX_HEADER_ERROR Error occurred during header
 *                          transmission.
 * @retval LIN_TX_ERROR     Error occurred during response
 *                          transmission.
 * @retval LIN_RX_OK        Reception of correct response.
 * @retval LIN_RX_BUSY      Ongoing reception where at least one byte
 *                          has been received.
 * @retval LIN_RX_ERROR     Error occurred during reception.
 * @retval LIN_RX_NO_REPONSE No data byte has been received yet.
 * @retval LIN_OPERATIONAL  Channel is ready for next header.
 *                          transmission and no data are available.
 * @retval LIN_CH_SLEEP     Channel is in sleep mode.
 *
 *
 * @note    Autosar Service ID: 0x08.
 * @note    Synchronous, non reentrant function.
 *
 */
/* [SWS_Lin_00022] [SWS_Lin_00168] [SWS_Lin_00193] */
LIN_TEXT_SECTION Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr)
{
    Lin_StatusType u8RetVal            = LIN_NOT_OK;
    uint32         LinCurrentPartionId = GET_CPU_ID();
    uint8          u8TempChannelStatus;
    /* [SWS_Lin_00106] [SWS_Lin_00141] */
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_GETSTATUS_ID))
    {
        /* [SWS_Lin_00143] */
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_GETSTATUS_ID, Channel))
        {
            /* [SWS_Lin_00144] */
            if ((uint8)E_OK == Lin_ValidatePtr(LIN_GETSTATUS_ID, Lin_SduPtr))
            {
                /* [SWS_Lin_00289] */
                if ((Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig)[Channel]->NodeFunction ==
                    LIN_MASTER_NODE)
                {
                    u8TempChannelStatus = Lin_SM_ChStatus[Channel];
                    /* LIN channel state */
                    switch (u8TempChannelStatus)
                    {
                        case LIN_CH_SLEEP_STATE:
                            u8RetVal = LIN_CH_SLEEP;
                            break;
                        /* [SWS_Lin_00255] [SWS_Lin_00264] */
                        case LIN_CH_SLEEP_PENDING:
                            Lin_SM_ChStatus[Channel] = LIN_CH_SLEEP_STATE;
                            u8RetVal                 = LIN_CH_SLEEP;
                            break;
                        case LIN_CH_OPERATIONAL_STATE:
                            /* [SWS_Lin_00024] [SWS_Lin_00092] [SWS_Lin_00211] */
                            *Lin_SduPtr = Lin_SM_SduBuffAddr[Channel];
                            /* [[SWS_Lin_00091]] */
                            u8RetVal = Lin_LL_GetStatus(Channel, Lin_SM_SduBuffAddr[Channel]);
                            break;
                        default: /* PRQA S 2016 */
                            break;
                    }
                }
            }
        }
    }
    return u8RetVal;
}

/**
 * @brief   The service instructs the driver to transmit a
 *          go-to-sleep-command on the addressed Lin channel.
 *          This function is only available on the master node.
 * @details This function stops any ongoing transmission and initiates
 *          the transmission of the sleep command (master command
 *          frame with ID = 0x3C and data = (0x00, 0xFF, 0xFF, 0xFF,
 *          0xFF, 0xFF, 0xFF, 0xFF). State transition in
 *          LIN_CH_SLEEP_STATE shall be done after the completion of
 *          the sleep command transmission regardless of the success
 *          (therefore the ISR is responsible to put the channel in
 *          LIN_CH_SLEEP_STATE).
 *
 * @param[in] Channel       LIN channel to be checked.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the LIN Channel is not valid or
 *                          LIN driver is not initialized or
 *                          LIN Channel is in sleep state or
 *                          a timeout occurs.
 * @retval E_OK             Otherwise.
 *
 *
 * @note    Autosar Service ID: 0x06.
 * @note    Asynchronous, non reentrant function.
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: The function is not used in this project but it must be applied for user */
/* [SWS_Lin_00033] [SWS_Lin_00074] [SWS_Lin_00089] [SWS_Lin_00166] */
LIN_TEXT_SECTION Std_ReturnType Lin_GoToSleep(uint8 Channel)
{
    uint8  u8RetVal            = (uint8)E_NOT_OK;
    uint32 LinCurrentPartionId = GET_CPU_ID();
    /* [SWS_Lin_00106] [SWS_Lin_00129] */
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_GOTOSLEEP_ID))
    {
        /* [SWS_Lin_00131] */
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_GOTOSLEEP_ID, Channel))
        {
            /* [SWS_Lin_00288] */
            if ((Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig)[Channel]->NodeFunction ==
                LIN_MASTER_NODE)
            {
                /* [SWS_Lin_00184] */
                if (LIN_CH_SLEEP_STATE == Lin_SM_ChStatus[Channel])
                {
                    u8RetVal = (uint8)E_OK;
                    /* do nothing */
                }
                else
                {
                    Lin_SM_ChFrameErrStatus[Channel] = LIN_NO_ERROR;
                    if ((uint8)E_NOT_OK == Lin_LL_GoToSleep(Channel,
                                                            Lin_ConfigPtr[LinCurrentPartionId]
                                                                ->pLin_CoreConfig[Channel]
                                                                ->pLinChannel->u8HwModule))
                    {
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                        /* [SWS_Lin_00058] [SWS_Lin_00218] */
                        if ((uint32)STD_ON == Lin_E_TimeoutCfg.state)
                        {
                            (void)Dem_SetEventStatus((Dem_EventIdType)Lin_E_TimeoutCfg.id,
                                                     DEM_EVENT_STATUS_FAILED);
                        }
                        else
                        {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
                            Lin_ReportDetError(LIN_GOTOSLEEP_ID, LIN_E_TIMEOUT);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */
                        }
#else /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
#if (LIN_DEV_ERROR_DETECT == STD_ON)
                        Lin_ReportDetError(LIN_GOTOSLEEP_ID, LIN_E_TIMEOUT);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */
#endif /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
                    }
                    else
                    {
/* Report Production error */
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                        /* [SWS_Lin_00218] */
                        if ((uint32)STD_ON == Lin_E_TimeoutCfg.state)
                        {
                            (void)Dem_SetEventStatus((Dem_EventIdType)Lin_E_TimeoutCfg.id,
                                                     DEM_EVENT_STATUS_PASSED);
                        }
#endif /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
                        u8RetVal = (uint8)E_OK;
                    }
                    /* Set Channel state to LIN_CH_SLEEP_PENDING state */
                    /* [SWS_Lin_00263] [SWS_Lin_00266] */
                    Lin_SM_ChStatus[Channel] = LIN_CH_SLEEP_PENDING;
                }
            }
        }
    }
    return u8RetVal;
}
/* PRQA S 1503 -- */
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
 * @brief   Put a Lin channel in the internal sleep state.
 * @details Stops any ongoing transmission, sets the channel
 *          state to LIN_CH_SLEEP and put the LIN
 *          hardware unit to a reduced power operation mode.
 *
 * @param[in] Channel       LIN channel to be addressed.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the LIN Channel is not valid or
 *                          LIN driver is not initialized or
 *                          LIN Channel is in sleep state or
 *                          a timeout occurs.
 * @retval E_OK             Otherwise.
 *
 * @note    Autosar Service ID: 0x09.
 * @note    Synchronous, non reentrant function.
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: The function is not used in this project but it must be applied for user */
/* [SWS_Lin_00033] [SWS_Lin_00167] */
LIN_TEXT_SECTION Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)
{
    uint8 u8RetVal = (uint8)E_NOT_OK;

    uint32 LinCurrentPartionId = GET_CPU_ID();

    /* [SWS_Lin_00106] [SWS_Lin_00133] */
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_GOTOSLEEPINTERNAL_ID))
    {
        /* [SWS_Lin_00135] */
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_GOTOSLEEPINTERNAL_ID, Channel))
        {
            /* [SWS_Lin_00184] */
            if (LIN_CH_SLEEP_STATE == Lin_SM_ChStatus[Channel])
            {
                u8RetVal = (uint8)E_OK;
            }
            else
            {
                if ((uint8)E_OK == Lin_LL_GoToSleepInternal(Channel,
                                                            Lin_ConfigPtr[LinCurrentPartionId]
                                                                ->pLin_CoreConfig[Channel]
                                                                ->pLinChannel->u8HwModule))
                {
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* [SWS_Lin_00218] */
                    if ((uint32)STD_ON == Lin_E_TimeoutCfg.state)
                    {
                        (void)Dem_SetEventStatus((Dem_EventIdType)Lin_E_TimeoutCfg.id,
                                                 DEM_EVENT_STATUS_PASSED);
                    }
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */
                    /* [SWS_Lin_00095] [SWS_Lin_00265] */
                    Lin_SM_ChStatus[Channel]      = LIN_CH_SLEEP_STATE;
                    Lin_SM_ChFrameStatus[Channel] = LIN_CH_NOT_READY_STATE;
                    u8RetVal                      = (uint8)E_OK;
                }
                else
                {
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                    /* [SWS_Lin_00218] */
                    if ((uint32)STD_ON == Lin_E_TimeoutCfg.state)
                    {
                        (void)Dem_SetEventStatus((Dem_EventIdType)Lin_E_TimeoutCfg.id,
                                                 DEM_EVENT_STATUS_FAILED);
                    }
                    else
                    {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
                        Lin_ReportDetError(LIN_GOTOSLEEPINTERNAL_ID, LIN_E_TIMEOUT);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */
                    }
#else /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
#if (LIN_DEV_ERROR_DETECT == STD_ON)
                    Lin_ReportDetError((uint8)LIN_GOTOSLEEPINTERNAL_ID, (uint8)LIN_E_TIMEOUT);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */
                    u8RetVal = (uint8)E_NOT_OK;
                }
            }
        }
    }
    return u8RetVal;
}
/* PRQA S 1503 -- */

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Sends a Lin frame.
 * @details Sends a Lin header and a Lin response, if necessary. The
 *          direction of the frame response (master response, slave
 *          response, slave-to-slave communication) is provided by
 *          the PduInfoPtr.
 *          This function is only available on the master node.
 *
 * @param[in] Channel       Lin channel to be addressed.
 * @param[in] PduInfoPtr    pointer to PDU containing the PID,
 *                          Checksum model, Response type, Dl and SDU
 *                          data pointer.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the LIN Channel is not valid or
 *                          LIN driver is not initialized or
 *                          PduInfoPtr is NULL or
 *                          a timeout occurs or
 *                          LIN Channel is in sleep state.
 * @retval E_OK             Otherwise.
 *
 *
 * @note    Autosar Service ID: 0x04.
 * @note    Asynchronous, non reentrant function.
 *
 */
/* [SWS_Lin_00005] [SWS_Lin_00191] [SWS_Lin_00210] */
LIN_TEXT_SECTION Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)
{
    uint8 u8RetVal = (uint8)E_NOT_OK;

    uint32 LinCurrentPartionId = GET_CPU_ID();

    /* [SWS_Lin_00106] [SWS_Lin_00195] */
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_SENDFRAME_ID))
    {
        /* [SWS_Lin_00197] */
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_SENDFRAME_ID, Channel))
        {
            /* [SWS_Lin_00198] */
            if ((uint8)E_OK == Lin_ValidatePtr(LIN_SENDFRAME_ID, PduInfoPtr))
            {
                /* [SWS_Lin_00194] [SWS_Lin_00199] */
                if (Lin_SM_ChStatus[Channel] != LIN_CH_OPERATIONAL_STATE)
                {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
                    /* [SWS_Lin_00213] */
                    Lin_ReportDetError(LIN_SENDFRAME_ID, LIN_E_STATE_TRANSITION);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */
                    u8RetVal = (uint8)E_NOT_OK;
                }
                else
                {
                    Lin_SM_ChFrameErrStatus[Channel] = LIN_NO_ERROR;
                    /* Set header status to TRUE if master wants to send the response frame */
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
                    if (PduInfoPtr->Drc == LIN_MASTER_RESPONSE)
#else
                    if (PduInfoPtr->Drc == LIN_FRAMERESPONSE_TX)
#endif /* LIN_USE_LEGACY_LINIF_API == STD_ON */
                    {
                        Lin_SM_ChHeaderStatus[Channel]    = (uint8)TRUE;
                        Lin_SM_TransmitHeaderCmd[Channel] = LIN_TX_RES_COMMAND;
                        /* Update Lin channel frame operation status to LIN_CH_READY_STATE */
                        Lin_SM_ChFrameStatus[Channel] = LIN_CH_READY_STATE;
                    }
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
                    else if (PduInfoPtr->Drc == LIN_SLAVE_TO_SLAVE)
#else
                    else if (PduInfoPtr->Drc == LIN_FRAMERESPONSE_IGNORE)
#endif /* LIN_USE_LEGACY_LINIF_API == STD_ON */
                    {
                        Lin_SM_TransmitHeaderCmd[Channel] = LIN_IGNORE_COMMAND;
                        Lin_SM_ChFrameStatus[Channel]     = LIN_CH_READY_STATE;
                    }
                    else
                    {
                        Lin_SM_TransmitHeaderCmd[Channel] = LIN_RX_RES_COMMAND;
                        Lin_SM_ChFrameStatus[Channel]     = LIN_CH_RECEIVE_NOTHING_STATE;
                    }

                    /* [SWS_Lin_00287] */
                    if ((Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig)[Channel]->NodeFunction ==
                        LIN_MASTER_NODE)
                    {
                        /* [SWS_Lin_00192] */
                        if ((uint8)E_OK ==
                            Lin_LL_SendHeader(
                                Channel,
                                (Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig)[Channel]
                                    ->pLinChannel->u8HwModule,
                                PduInfoPtr))
                        {
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                            /* [SWS_Lin_00218] */
                            if ((uint32)STD_ON == Lin_E_TimeoutCfg.state)
                            {
                                (void)Dem_SetEventStatus((Dem_EventIdType)Lin_E_TimeoutCfg.id,
                                                         DEM_EVENT_STATUS_PASSED);
                            }
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */

                            if (Lin_SM_ChHeaderStatus[Channel] != (uint8)FALSE)
                            {
                                Lin_SM_ChHeaderStatus[Channel] = (uint8)FALSE;
                                /* [SWS_Lin_00025] [SWS_Lin_00192] */
                                Lin_LL_SendResponse(
                                    Channel,
                                    (Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig)[Channel]
                                        ->pLinChannel->u8HwModule,
                                    PduInfoPtr);
                            }
                            u8RetVal = (uint8)E_OK;
                        }
                        else
                        {
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
                            /* [SWS_Lin_00218] */
                            if ((uint32)STD_ON == Lin_E_TimeoutCfg.state)
                            {
                                (void)Dem_SetEventStatus((Dem_EventIdType)Lin_E_TimeoutCfg.id,
                                                         DEM_EVENT_STATUS_FAILED);
                            }
                            else
                            {
#if (LIN_DEV_ERROR_DETECT == STD_ON)
                                Lin_ReportDetError(LIN_SENDFRAME_ID, LIN_E_TIMEOUT);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */
                            }
#else /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
#if (LIN_DEV_ERROR_DETECT == STD_ON)
                            Lin_ReportDetError((uint8)LIN_SENDFRAME_ID, (uint8)LIN_E_TIMEOUT);
#endif /* (LIN_DEV_ERROR_DETECT == STD_ON) */
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */
                        }
                    }
                    else
                    {
                        /* Slave Node */
                    }
                }
            }
        }
    }
    return u8RetVal;
}
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
 * @brief   Generates a wake up pulse.
 * @details This function shall sent a wake up signal to the LIN bus
 *          and put the Lin channel in LIN_CH_OPERATIONAL state.
 *
 * @param[in] Channel  Lin channel to be addressed.
 *
 * @return           Std_ReturnType.
 * @retval E_NOT_OK  If the Lin driver is not in sleep state or
 *                   Lin Channel is not valid or
 *                   Lin driver is not initialized.
 * @retval E_OK      Otherwise.
 *
 *
 * @note    Autosar Service ID: 0x07.
 * @note    Asynchronous, non reentrant function.
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: The function is not used in this project but it must be applied for user */
/* [SWS_Lin_00043] [SWS_Lin_00169] */
LIN_TEXT_SECTION Std_ReturnType Lin_Wakeup(uint8 Channel)
{
    uint8 u8RetVal = (uint8)E_NOT_OK;

    uint32 LinCurrentPartionId = GET_CPU_ID();

    /* [SWS_Lin_00106] [SWS_Lin_00137] */
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_WAKEUP_ID))
    {
        /* [SWS_Lin_00139] */
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_WAKEUP_ID, Channel))
        {
            /* Check whether the LIN channel is in LIN_CH_SLEEP_STATE state */
            /* [SWS_Lin_00140] [SWS_Lin_00184] */
            if ((uint8)E_OK == Lin_ValidateLinSMSleep(LIN_WAKEUP_ID, Channel))
            {
                /* [SWS_Lin_00174] */
                Lin_SM_ChStatus[Channel]         = LIN_CH_OPERATIONAL_STATE;
                Lin_SM_ChFrameStatus[Channel]    = LIN_CH_READY_STATE;
                Lin_SM_ChFrameErrStatus[Channel] = LIN_NO_ERROR;
                Lin_LL_WakeUp(
                    Channel,
                    Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig[Channel]->pLinChannel->u8HwModule);
                u8RetVal = (uint8)E_OK;
            }
        }
    }
    return u8RetVal;
}
/* PRQA S 1503 -- */

/**
 * @brief   Wake up the Lin channel.
 * @details This function shall put the LIN channel in LIN_CH_OPERATIONAL state without sending a
 *          wake up signal to the LIN bus
 *
 * @param[in] Channel   Lin channel to be addressed.
 *
 * @return              Std_ReturnType.
 * @retval E_NOT_OK     If the LIN driver is not in sleep state or
 *                      Lin Channel is not valid or
 *                      Lin driver is not initialized.
 * @retval E_OK         Otherwise.
 *
 *
 * @note    Autosar Service ID: 0x0B.
 * @note    Asynchronous, non reentrant function.
 *
 */
/* [SWS_Lin_00256] */
LIN_TEXT_SECTION Std_ReturnType Lin_WakeupInternal(uint8 Channel)
{
    uint8 u8RetVal = (uint8)E_NOT_OK;

    uint32 LinCurrentPartionId = GET_CPU_ID();

    /* [SWS_Lin_00106] [SWS_Lin_00258] */
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_WAKEUPINTERNAL_ID))
    {
        /* [SWS_Lin_00259] */
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_WAKEUPINTERNAL_ID, Channel))
        {
            /* Check whether the LIN channel is in LIN_CH_SLEEP_STATE state */
            /* [SWS_Lin_00184] [SWS_Lin_00260] */
            if ((uint8)E_OK == Lin_ValidateLinSMSleep(LIN_WAKEUPINTERNAL_ID, Channel))
            {
                /* [SWS_Lin_00257] [SWS_Lin_00261] */
                Lin_SM_ChStatus[Channel]         = LIN_CH_OPERATIONAL_STATE;
                Lin_SM_ChFrameStatus[Channel]    = LIN_CH_READY_STATE;
                Lin_SM_ChFrameErrStatus[Channel] = LIN_NO_ERROR;
                Lin_LL_WakeupInternal(
                    Channel,
                    Lin_ConfigPtr[LinCurrentPartionId]->pLin_CoreConfig[Channel]->pLinChannel->u8HwModule);
                u8RetVal = (uint8)E_OK;
            }
        }
    }
    return u8RetVal;
}

#if (LIN_VERSION_INFO_API == STD_ON)
/**
 * @brief   Returns the version information of this module.
 * @details The version information includes:
 *
 *          - Two bytes for the Vendor ID
 *          - Two bytes for the Module ID
 *          - One byte  for the Instance ID
 *          - Three bytes version number. The numbering shall be vendor
 *            specific: it consists of:
 *
 *             - The major, the minor and the patch version number of
 *               the module;
 *             - The AUTOSAR specification version number shall not
 *               be included. The AUTOSAR specification version number is
 *               checked during compile time and therefore not required
 *               in this API.
 *
 * @param[in,out] versioninfo   Pointer for storing the version information
 *                              of this module.
 *
 * @return                  void.
 *
 *
 * @pre            Preconditions as text description. Optional tag.
 *
 * @implements Lin_GetVersionInfo_Activity
 *
 * @note    Autosar Service ID: 0x01.
 * @note    Synchronous, non reentrant function.
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: The function is not used in this project but it must be applied for user */
/* [SWS_Lin_00001] [SWS_Lin_00161] */
LIN_TEXT_SECTION void Lin_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
    /* [SWS_Lin_00106] [SWS_Lin_00248] */
    if ((uint8)E_OK == Lin_ValidateVersionPtr(LIN_VERSIONINFO_ID, versioninfo))
    {
        (versioninfo)->vendorID         = (uint16)LIN_VENDOR_ID;
        (versioninfo)->moduleID         = (uint16)LIN_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)LIN_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)LIN_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)LIN_SW_PATCH_VERSION;
    }
}
/* PRQA S 1503 -- */
#endif /* LIN_VERSION_INFO_API == STD_ON */

/****************************** NON-AUTOSAR LIN Driver API Functions ******************************/
/**
 * @brief   De-initialize the Lin module.
 * @details This function is used to de-initialize LIN driver.
 *
 * @param[in] void
 *
 * @return  void
 *
 * @note    Non-Autosar Service.
 *
 */
/* [FUNC_Lin_0020] */
LIN_TEXT_SECTION void Lin_Deinit(void)
{
    uint8  u8LinChannel;
    uint8  u8LinInstance;
    uint32 LinCurrentPartionId = GET_CPU_ID();
    if ((Std_ReturnType)E_OK == Lin_ValidateLinSMInit(LIN_DEINIT_ID))
    {
        for (u8LinChannel = 0U; u8LinChannel < LIN_INSTANCE_CONFIG; u8LinChannel++)
        {
            if (LinCurrentPartionId == (Lin_ConfigPtr[LinCurrentPartionId]
                                            ->pLin_CoreConfig[u8LinChannel]
                                            ->pLinChannel->ChannelCoreId))
            {
                u8LinInstance = Lin_ConfigPtr[LinCurrentPartionId]
                                    ->pLin_CoreConfig[u8LinChannel]
                                    ->pLinChannel->u8HwModule;
                Lin_LL_Deinit(u8LinInstance);
            }
        }
        Lin_ConfigPtr[LinCurrentPartionId]      = NULL_PTR;
        Lin_SM_DriveStatus[LinCurrentPartionId] = LIN_UNINIT;
    }
}

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
/**
 * @brief    This is callback function for Timer Interrupt Handler.
 * @details  Users shall initialize a timer (for example FTU)
 *           and the time period in microseconds will be set by the driver via
 * LinStartTimerNotification. In timer IRQ handler, call this function.
 *
 * @param[in]   u8Channel LIN channel to be addressed.
 *
 * @return      void.
 * @note        Non-Autosar Service.
 *
 */
/* [FUNC_Lin_0022] */
LIN_TEXT_SECTION void Lin_TimerExpiredService(uint8 u8Channel)
{
    if ((uint8)E_OK == Lin_ValidateLinSMInit(LIN_TIMEOUT_ID))
    {
        if ((uint8)E_OK == Lin_ValidateChannelCall(LIN_TIMEOUT_ID, u8Channel))
        {
            Lin_LL_TimerExpiredService(u8Channel);
        }
    }
}
#endif /*(LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)*/

#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
