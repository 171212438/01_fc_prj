/**
 *   @file    Ocu_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - OCU Driver Hw source file.
 *   @details OCU driver source file, containing the Hw functions that are used by
 *            the OCU driver.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERHHERAL            : FTU, TPU, EFTU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add
                                                         Tpu support(only available on FC7240)
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
*   1.4.1       09/12/2025    QXW0099       N/A          Change to SOMC mode
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Ocu_Ftu.h"
#include "Ocu_Hw_Types.h"
#include "Ocu_Hw.h"
#include "Ocu_Eftu_Tom.h"
#include "Ocu_Tpu.h"
#include "Mcal.h"
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       CONSTANTS
==================================================================================================*/
#if (OCU_HAVE_TPU == STD_ON)
#define OCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"
/**
 * @brief          Global variable used for indicating the current Tpu driver initialization status.
 */
OCU_DATA_SECTION static uint8 u8TpuInitFlag = 0U;

#define OCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"
#endif
/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

/**
 * @brief Initialize OCU hardware modules and channles
 *
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_Init(const Ocu_ConfigType *pOcuConfig, const uint8 u8Channel)
{
    uint8                        u8ModuleIdx;
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;

    if ((*pOcuConfig->pOcuChannelsConfig)[u8Channel].eOcuHwType <= OCU_HW_FTU_END)
    {
        const Ocu_Ftu_ModuleConfigType *pFtuModuleConfig = NULL_PTR;

        pChannelConfig = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];
        for (u8ModuleIdx = 0U; u8ModuleIdx < pOcuConfig->HwConfig.pFtuConfig->u8NumModules;
             u8ModuleIdx++)
        {
            if (pChannelConfig->u8HwModule ==
                (*pOcuConfig->HwConfig.pFtuConfig->pModulesConfig)[u8ModuleIdx].u8ModuleId)
            {
                pFtuModuleConfig = &(*pOcuConfig->HwConfig.pFtuConfig->pModulesConfig)[u8ModuleIdx];
                Ocu_Ftu_Init(pChannelConfig, pFtuModuleConfig, u8Channel);
                break;
            }
        }
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if ((*pOcuConfig->pOcuChannelsConfig)[u8Channel].eOcuHwType <= OCU_HW_TPU_END)
    {
        const Ocu_Tpu_ModuleConfigType *pTpuModuleConfig = NULL_PTR;

        pChannelConfig = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];
        for (u8ModuleIdx = 0U; u8ModuleIdx < pOcuConfig->HwConfig.pTpuConfig->u8TpuNumModules;
             u8ModuleIdx++)
        {
            if (pChannelConfig->u8HwModule ==
                (*pOcuConfig->HwConfig.pTpuConfig->pTpuModulesConfig)[u8ModuleIdx].u8TpuModuleId)
            {
                pTpuModuleConfig = &(*pOcuConfig->HwConfig.pTpuConfig->pTpuModulesConfig)[u8ModuleIdx];
                if (u8TpuInitFlag == 0U)
                {
                    Ocu_Tpu_ModuleInit(pTpuModuleConfig);
                    u8TpuInitFlag = 1U;
                }
                Ocu_Tpu_ChannelInit(pChannelConfig);
                break;
            }
        }
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if ((*pOcuConfig->pOcuChannelsConfig)[u8Channel].eOcuHwType <= OCU_HW_EFTU_END)
    {
        const Ocu_Eftu_ChanConfigType *pEftuModuleConfig = NULL_PTR;

        pChannelConfig = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];
        for (u8ModuleIdx = 0U; u8ModuleIdx < pOcuConfig->HwConfig.peFtuConfig->u8EftuNumModules;
             u8ModuleIdx++)
        {
            if (pChannelConfig->u8HwModule ==
                (*pOcuConfig->HwConfig.peFtuConfig->pEftuModulesConfig)[u8ModuleIdx].u8EftuModuleId)
            {
                pEftuModuleConfig = &(
                    *pOcuConfig->HwConfig.peFtuConfig->pEftuModulesConfig)[u8ModuleIdx];
                Ocu_Eftu_Tom_Init(pEftuModuleConfig, pChannelConfig, u8Channel);
                break;
            }
        }
    }
#endif
    else
    {
        /*For MISRA*/
    }
}

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize OCU hardware modules and channles
 *
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_DeInit(const Ocu_ConfigType *pOcuConfig, const uint8 u8Channel)
{
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;
    pChannelConfig                              = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Ocu_Ftu_DeInit(pChannelConfig->u8HwChannel, pChannelConfig->u8HwModule, u8Channel);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        Ocu_Tpu_DeInit(pChannelConfig->u8HwModule);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Ocu_Eftu_Tom_DeInit(pChannelConfig, u8Channel);
    }
#endif
    else
    {
        /*For MISRA*/
    }
}
#endif /* OCU_DEINIT_API */

/**
 * @brief Hardware level start an OCU channel.
 *
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_StartChannel(const Ocu_ConfigType *pOcuConfig, Ocu_ChannelType u8Channel)
{
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;
    pChannelConfig                              = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Ocu_Ftu_StartChannel(u8Channel, pChannelConfig->u8HwModule, pChannelConfig->u8HwChannel);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        Ocu_Tpu_StartChannel(u8Channel, pChannelConfig->u8HwModule, pChannelConfig->u8HwChannel);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Ocu_Eftu_Tom_StartChannel(pChannelConfig, u8Channel);
    }
#endif
    else
    {
        /*For MISRA*/
    }
}

/**
 * @brief Hardware level stop an OCU channel.
 *
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_StopChannel(const Ocu_ConfigType *pOcuConfig, Ocu_ChannelType u8Channel)
{
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;
    pChannelConfig                              = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Ocu_Ftu_StopChannel(pChannelConfig->u8HwModule, pChannelConfig->u8HwChannel);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        Ocu_Tpu_StopChannel(pChannelConfig->u8HwModule, pChannelConfig->u8HwChannel);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Ocu_Eftu_Tom_StopChannel(pChannelConfig);
    }
#endif
    else
    {
        /*For MISRA*/
    }
}

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Hardware level set Pin state
 *
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 * @param ePinState  -Expected Pin State for the given channel
 */
OCU_TEXT_SECTION void Ocu_Hw_SetPinState(const Ocu_ConfigType *pOcuConfig,
                                         Ocu_ChannelType       u8Channel,
                                         Ocu_PinStateType      ePinState)
{
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;
    pChannelConfig                              = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Ocu_Ftu_SetPinState(pChannelConfig->u8HwModule, pChannelConfig->u8HwChannel, ePinState);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        Ocu_Tpu_SetPinState(pChannelConfig->u8HwModule, pChannelConfig->u8HwChannel, ePinState);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Ocu_Eftu_Tom_SetPinState(pChannelConfig, ePinState);
    }
#endif
    else
    {
        /*For MISRA*/
    }
}
#endif /* OCU_SET_PIN_STATE_API */

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief Hardware level set Pin action
 *
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 * @param ePinAction -Expected Pin Action for the given channel
 */
OCU_TEXT_SECTION void Ocu_Hw_SetPinAction(const Ocu_ConfigType *pOcuConfig,
                                          Ocu_ChannelType       u8Channel,
                                          Ocu_PinActionType     ePinAction)
{
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;
    pChannelConfig                              = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Ocu_Ftu_SetPinAction(u8Channel,
                             ePinAction,
                             pChannelConfig->u8HwModule,
                             pChannelConfig->u8HwChannel);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        Ocu_Tpu_SetPinAction(ePinAction, pChannelConfig->u8HwModule, pChannelConfig->u8HwChannel);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Ocu_Eftu_Tom_SetPinAction(pChannelConfig, u8Channel, ePinAction);
    }
#endif
    else
    {
        /*For MISRA*/
    }
}
#endif /* OCU_SET_PIN_ACTION_API */

#if (OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief Hardware level get timer counter value
 *
 * @param pOcuConfig     -Pointer to module configuration structure
 * @param u8Channel      -Ocu channel id in top configuration structure
 * @return Ocu_ValueType -Counter value
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Hw_GetCounter(const Ocu_ConfigType *pOcuConfig,
                                                 Ocu_ChannelType       u8Channel)
{
    Ocu_ValueType                Value;
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;
    pChannelConfig                              = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Value = Ocu_Ftu_GetCounter(pChannelConfig->u8HwModule);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        Value = Ocu_Tpu_GetCounter(pChannelConfig->u8HwModule);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Value = Ocu_Eftu_Tom_GetCounter(pChannelConfig);
    }
#endif
    else
    {
        Value = 0U;
    }
    return Value;
}
#endif /* OCU_GET_COUNTER_API */

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief Hardware level set absolute threshold
 *
 * @param pOcuConfig      -Pointer to module configuration structure
 * @param u8Channel Ocu   -channel id in top configuration structure
 * @param ReferenceValue  -Reference value for the counting interval
 * @param AbsoluteValue   -Absolute value for the counting interval
 * @return Ocu_ReturnType -Whether a comparison match occurred during the current reference interval
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_Hw_SetAbsoluteThreshold(const Ocu_ConfigType *pOcuConfig,
                                                            Ocu_ChannelType       u8Channel,
                                                            Ocu_ValueType         ReferenceValue,
                                                            Ocu_ValueType         AbsoluteValue)
{
    Ocu_SetThresholdType         SetThreshold;
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;

    /* Set input structure parameters */
    SetThreshold.u32ReferenceValue = ReferenceValue;
    SetThreshold.u32AbsoluteValue  = AbsoluteValue;
    SetThreshold.eInterval         = OCU_CM_OUT_REF_INTERVAL;
    pChannelConfig                 = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];
    SetThreshold.u8ChannelNumber   = u8Channel;

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Ocu_Ftu_SetAbsoluteThreshold(&SetThreshold,
                                     pChannelConfig->u8HwModule,
                                     pChannelConfig->u8HwChannel);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        Ocu_Tpu_SetAbsoluteThreshold(&SetThreshold,
                                     pChannelConfig->u8HwModule,
                                     pChannelConfig->u8HwChannel);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Ocu_Eftu_Tom_SetAbsoluteThreshold(&SetThreshold, pChannelConfig);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    return SetThreshold.eInterval;
}
#endif /* OCU_SET_ABSOLUTE_THRESHOLD_API */

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief Hardware level set relative threshold
 *
 * @param pOcuConfig      -Pointer to module configuration structure
 * @param u8Channel       -Ocu channel id in top configuration structure
 * @param RelativeValue   -Reference value for the counting interval
 * @return Ocu_ReturnType -Whether a comparison match occurred during the current reference interval
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_Hw_SetRelativeThreshold(const Ocu_ConfigType *pOcuConfig,
                                                            Ocu_ChannelType       u8Channel,
                                                            Ocu_ValueType         RelativeValue)
{
    Ocu_SetThresholdType         SetThreshold;
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;

    /* Set input structure parameters */
    SetThreshold.u32RelativeValue = RelativeValue;
    SetThreshold.eInterval        = OCU_CM_OUT_REF_INTERVAL;
    pChannelConfig                = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];
    SetThreshold.u8ChannelNumber  = u8Channel;

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        Ocu_Ftu_SetRelativeThreshold(&SetThreshold,
                                     pChannelConfig->u8HwModule,
                                     pChannelConfig->u8HwChannel);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {

        Ocu_Tpu_SetRelativeThreshold(&SetThreshold,
                                     pChannelConfig->u8HwModule,
                                     pChannelConfig->u8HwChannel);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        Ocu_Eftu_Tom_SetRelativeThreshold(&SetThreshold, pChannelConfig);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    return SetThreshold.eInterval;
}
#endif /*OCU_SET_RELATIVE_THRESHOLD_API*/

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief Hardware level get max counter
 *
 * @param pOcuConfig     -Pointer to module configuration structure
 * @param u8Channel      -Ocu channel id in top configuration structure
 * @return Ocu_ValueType -Max counter value for given channel
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Hw_GetMaxCountValue(const Ocu_ConfigType *pOcuConfig,
                                                       Ocu_ChannelType       u8Channel)
{
    Ocu_ValueType                ReturnMaxCountValue;
    const Ocu_ChannelConfigType *pChannelConfig = NULL_PTR;
    pChannelConfig                              = &(*pOcuConfig->pOcuChannelsConfig)[u8Channel];

    if (pChannelConfig->eOcuHwType <= OCU_HW_FTU_END)
    {
        ReturnMaxCountValue = Ocu_Ftu_GetMaxCountValue((Ocu_ChannelType)u8Channel);
    }
#if (OCU_HAVE_TPU == STD_ON)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_TPU_END)
    {
        ReturnMaxCountValue = Ocu_Tpu_GetMaxCountValue(pChannelConfig->u8HwModule);
    }
#endif
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
    else if (pChannelConfig->eOcuHwType <= OCU_HW_EFTU_END)
    {
        ReturnMaxCountValue = Ocu_Eftu_Tom_GetMaxCountValue(pChannelConfig);
    }
#endif
    else
    {
        ReturnMaxCountValue = 0U;
    }
    return ReturnMaxCountValue;
}
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
