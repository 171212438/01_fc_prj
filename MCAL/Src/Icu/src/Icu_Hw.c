/**
 *   @file   Icu_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - ICU Driver Hw source file.
 *   @details ICU driver source file, containing the Hw functions that are used
 * by the ICU driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU PORT Aontimer
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
*   0.1.0       22/05/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/09/2023    QXW0076       N/A          Add MultiCore feature
*   0.4.0       14/11/2023    QXW0076       N/A          Eliminate timestamp
potential hazards
*   0.5.0       25/01/2024    QXW0076       N/A          add time stamp dma
function
*   0.6.0       18/03/2024    QXW0076       N/A          verify timestamp dma
feature && support for 7240.
*   0.7.0        12/04/2024      QXW0070        N/A             Add support for
TPU, ISM, ICM
==================================================================================================*/
/* PRQA S 2071,5087 EOF #Misra-C:2012 Rule-20.1 Use of #include directive after
   code fragment. This attribute syntax is a language extension. REASON:
   Variables and text need to be placed in the specified location
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Hw.h"
#include "Icu_Aontimer.h"
#include "Icu_Cmp.h"
#include "Icu_Eftu_Tim.h"
#include "Icu_Fcpit.h"
#include "Icu_Ftu.h"
#include "Icu_Ism.h"
#include "Icu_Port.h"
#include "Icu_Tpu.h"
#include "SchM_Icu.h"
#include "Scm_RegOps.h"
#include "Ftu_Common.h"

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

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

LOCAL_INLINE Icu_FtuInputCaptureType Icu_HW_GetFtuInputCapture(Icu_ActivationType eActivationEdge);
LOCAL_INLINE Icu_PortIntConfigType   Icu_HW_GetPortIntConfig(Icu_ActivationType eActivationEdge);
LOCAL_INLINE Icu_AontimerPulsePolarityType Icu_HW_GetAontimerPolarity(
    Icu_ActivationType eActivationEdge);
#if (ICU_SUPPORT_CMP == STD_ON)
LOCAL_INLINE ICU_CmpOutPolarityType Icu_HW_GetCmpPolarity(Icu_ActivationType eActivationEdge);
#endif
LOCAL_INLINE ICU_ISM_LAM_EventWindowEdgeType Icu_HW_GetIsmEventEdge(
    uint32             u32MesurementMode,
    Icu_ActivationType eActivationEdge);
#if (ICU_SUPPORT_TPU == STD_ON)
LOCAL_INLINE
ICU_TPUE_IPACType Icu_HW_GetTpuIPAC(Icu_ActivationType eActivationEdge);
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
LOCAL_INLINE ICU_EftuTimActiveEdgeType Icu_HW_GetEftuTimInputCapture(
    Icu_ActivationType eActivationEdge);
#endif
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief This function convert the Icu_ActivationType to
 * Icu_FtuInputCaptureType
 *
 * @param eActivationEdge -Icu_ActivationType value
 * @return                Icu_FtuInputCaptureType value
 */
LOCAL_INLINE Icu_FtuInputCaptureType Icu_HW_GetFtuInputCapture(Icu_ActivationType eActivationEdge)
{
    Icu_FtuInputCaptureType eInputCaptureMode = ICU_FTU_INPUT_BOTH_EDGE;
    if (ICU_RISING_EDGE == eActivationEdge)
    {
        eInputCaptureMode = ICU_FTU_INPUT_RISING_EDGE;
    }
    else if (ICU_FALLING_EDGE == eActivationEdge)
    {
        eInputCaptureMode = ICU_FTU_INPUT_FALLING_EDGE;
    }
    else
    {
        eInputCaptureMode = ICU_FTU_INPUT_BOTH_EDGE;
    }
    return eInputCaptureMode;
}

#if (ICU_SUPPORT_TPU == STD_ON)
/**
 * @brief This function convert the Icu_ActivationType to ICU_TPUE_IPACType
 *
 * @param eActivationEdge -Icu_ActivationType value
 * @return                ICU_TPUE_IPACType value
 */
LOCAL_INLINE ICU_TPUE_IPACType Icu_HW_GetTpuIPAC(Icu_ActivationType eActivationEdge)
{
    ICU_TPUE_IPACType eIpac;
    if (ICU_RISING_EDGE == eActivationEdge)
    {
        eIpac = ICU_TPUE_DETECT_RISING_EDGE_ONLY;
    }
    else if (ICU_FALLING_EDGE == eActivationEdge)
    {
        eIpac = ICU_TPUE_DETECT_FALLING_EDGE_ONLY;
    }
    else
    {
        eIpac = ICU_TPUE_DETECT_EITHER_EDGE_ONLY;
    }
    return eIpac;
}
#endif

#if (ICU_SUPPORT_EFTU == STD_ON)
/**
 * @brief This function convert the Icu_ActivationType to
 * ICU_EftuTimActiveEdgeType
 *
 * @param eActivationEdge -Icu_ActivationType value
 * @return                ICU_EftuTimActiveEdgeType
 */
LOCAL_INLINE ICU_EftuTimActiveEdgeType Icu_HW_GetEftuTimInputCapture(Icu_ActivationType eActivationEdge)
{
    ICU_EftuTimActiveEdgeType eTimEdge;
    if (ICU_RISING_EDGE == eActivationEdge)
    {
        eTimEdge = ICU_EFTU_TIM_ACTIVE_RISINGEDGE;
    }
    else if (ICU_FALLING_EDGE == eActivationEdge)
    {
        eTimEdge = ICU_EFTU_TIM_ACTIVE_FALLINGEDGE;
    }
    else
    {
        eTimEdge = ICU_EFTU_TIM_ACTIVE_BOTHEDGE;
    }
    return eTimEdge;
}
#endif

/**
 * @brief This function convert the Icu_ActivationType to Icu_PortIntConfigType
 *
 * @param eActivationEdge -Icu_ActivationType value
 * @return                Icu_PortIntConfigType
 */
LOCAL_INLINE Icu_PortIntConfigType Icu_HW_GetPortIntConfig(Icu_ActivationType eActivationEdge)
{
    Icu_PortIntConfigType ePortIntConfig = ICU_PORT_IRQ_BOTH_EDGE;
    if (ICU_RISING_EDGE == eActivationEdge)
    {
        ePortIntConfig = ICU_PORT_IRQ_RISING;
    }
    else if (ICU_FALLING_EDGE == eActivationEdge)
    {
        ePortIntConfig = ICU_PORT_IRQ_FALLING;
    }
    else
    {
        ePortIntConfig = ICU_PORT_IRQ_BOTH_EDGE;
    }
    return ePortIntConfig;
}

/**
 * @brief This function convert the Icu_ActivationType to
 * Icu_AontimerPulsePolarityType
 *
 * @param eActivationEdge -Icu_ActivationType value
 * @return                Icu_AontimerPulsePolarityType value
 */
LOCAL_INLINE Icu_AontimerPulsePolarityType Icu_HW_GetAontimerPolarity(
    Icu_ActivationType eActivationEdge)
{
    Icu_AontimerPulsePolarityType ePolarity = AONTIMER_PulsePolarityType_HIGH;
    if (ICU_RISING_EDGE == eActivationEdge)
    {
        ePolarity = AONTIMER_PulsePolarityType_HIGH;
    }
    else
    {
        ePolarity = AONTIMER_PulsePolarityType_LOW;
    }
    return ePolarity;
}

#if (ICU_SUPPORT_CMP == STD_ON)
/**
 * @brief This function convert the Icu_ActivationType to ICU_CmpOutPolarityType
 *
 * @param eActivationEdge -Icu_ActivationType value
 * @return                ICU_CmpOutPolarityType value
 */
LOCAL_INLINE ICU_CmpOutPolarityType Icu_HW_GetCmpPolarity(Icu_ActivationType eActivationEdge)
{
    ICU_CmpOutPolarityType ePolarity = ICU_CMP_OUT_NONE;
    if (ICU_RISING_EDGE == eActivationEdge)
    {
        ePolarity = ICU_CMP_OUT_RISING_EDGE;
    }
    else if (ICU_FALLING_EDGE == eActivationEdge)
    {
        ePolarity = ICU_CMP_OUT_FALLING_EDGE;
    }
    else if (ICU_BOTH_EDGES == eActivationEdge)
    {
        ePolarity = ICU_CMP_OUT_BOTH_EDGE;
    }
    else
    {
        /*for misra rule*/
    }
    return ePolarity;
}
#endif

LOCAL_INLINE ICU_ISM_LAM_EventWindowEdgeType Icu_HW_GetIsmEventEdge(uint32 u32MesurementMode,
                                                                    Icu_ActivationType eActivationEdge)
{
    ICU_ISM_LAM_EventWindowEdgeType eEventWindow;
    if ((uint32)ICU_PERIOD_TIME == u32MesurementMode)
    {
        if (ICU_RISING_EDGE == eActivationEdge)
        {
            eEventWindow = ICU_ISM_LAM_POS_CLEAR_POS_GATE;
        }
        else
        {
            eEventWindow = ICU_ISM_LAM_NEG_CLEAR_NEG_GATE;
        }
    }
    else if (ICU_RISING_EDGE == eActivationEdge)
    {
        eEventWindow = ICU_ISM_LAM_POS_CLEAR_NEG_GATE;
    }
    else
    {
        eEventWindow = ICU_ISM_LAM_NEG_CLEAR_POS_GATE;
    }
    return eEventWindow;
}

/**
 * @brief Initialize hardware of ICU Modules
 *
 * @param pHwConfig -Pointer to module configuration structure
 */
ICU_TEXT_SECTION void Icu_HW_ModulesInit(const Icu_HwConfigType *pHwConfig)
{
    uint8 u8Idx;
    /*FTM Modules Config*/
    if (NULL_PTR != pHwConfig->pFtuHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pFtuHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_FtuModuleConfigType *ptFtuModuleConfig = &(
                *pHwConfig->pFtuHwConfig->pFtuModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptFtuModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Ftu_Init(ptFtuModuleConfig);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
    if (NULL_PTR != pHwConfig->pPortHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pPortHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_PortModuleConfigType *ptPortModuleConfig = &(
                *pHwConfig->pPortHwConfig->pPortModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
               This usage of a function-like macro looks like it could be replaced by
               an equivalent function call. REASON: Macros have higher execution
               efficiency
            */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptPortModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Port_Init(ptPortModuleConfig->ePortInstance);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
    if (NULL_PTR != pHwConfig->pAontimerHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pAontimerHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_AontimerModuleConfigType *ptAontimerModuleConfig = &(
                *pHwConfig->pAontimerHwConfig->pAontimerModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptAontimerModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Aontimer_Init(ptAontimerModuleConfig);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    if (NULL_PTR != pHwConfig->pCmpHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pCmpHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_CmpModuleConfigType *ptCmpModuleConfig = &(
                *pHwConfig->pCmpHwConfig->pCmpModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptCmpModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Cmp_Init(ptCmpModuleConfig);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#endif
    if (NULL_PTR != pHwConfig->pIsmHwConfig)
    {
        const Icu_IsmModuleConfigType *ptIsmModuleConfig = &(
            *pHwConfig->pIsmHwConfig->pIsmModuleConfig)[0];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        if (Icu_GetCoreID() == ptIsmModuleConfig->u8InstancePartition)
        {
#endif
            Icu_Ism_Enable();
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
        for (u8Idx = 0; u8Idx < ptIsmModuleConfig->u8ChannelCount; u8Idx++)
        {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if ((*ptIsmModuleConfig->pIsmChannelsConfig)[u8Idx].u8ChannelPartition == u8CurCoreID)
            {
#endif
                Icu_Ism_InitHwChannel(&((*ptIsmModuleConfig->pIsmChannelsConfig)[u8Idx]));
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    if (NULL_PTR != pHwConfig->pTpuHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pTpuHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_TpuModuleConfigType *ptTpuModuleConfig = &(
                *pHwConfig->pTpuHwConfig->pTpuModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptTpuModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Tpu_Init(ptTpuModuleConfig);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#endif
    if (NULL_PTR != pHwConfig->pFcpitHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pFcpitHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_FcpitModuleConfigType *ptFcpitModuleConfig = &(
                *pHwConfig->pFcpitHwConfig->pFcpitModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                This usage of a function-like macro looks like it could be replaced by
            an equivalent function call. REASON: Macros have higher execution
            efficiency
            */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptFcpitModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Fcpit_Init(ptFcpitModuleConfig);
                for (uint8 channelindex = 0; channelindex < ptFcpitModuleConfig->u8ChannelCount;
                     channelindex++)
                {
                    Icu_Fcpit_InitHwChannel(
                        ptFcpitModuleConfig->eFcpitInstance,
                        &((*ptFcpitModuleConfig->pFcpitChannelsConfig)[channelindex]));
                }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    if (NULL_PTR != pHwConfig->pEftuTimHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pEftuTimHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_EftuTimModuleConfigType *ptEftuTimModuleConfig = &(
                *pHwConfig->pEftuTimHwConfig->pEftuTimModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                This usage of a function-like macro looks like it could be replaced by
            an equivalent function call. REASON: Macros have higher execution
            efficiency */
            uint8 u8CurCoreID = Icu_GetCoreID();
            if (ptEftuTimModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                for (uint8 channelindex = 0; channelindex < ptEftuTimModuleConfig->u8ChannelCount;
                     channelindex++)
                {
                    Icu_Eftu_Tim_InitHwChannel(
                        ptEftuTimModuleConfig->eEftuInstance,
                        &((*ptEftuTimModuleConfig->pEftuTimChannelConfig)[channelindex]));
                }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#endif
}

#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize a hardware ICU channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_ChannelDeInit(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
       4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type,
       '%2s'. 4342:An expression of 'essentially unsigned' type (%1s) is being
       cast to enum type
       '%2s'. 4394:A composite expression of 'essentially unsigned' type (%1s) is
       being cast to a different type category, '%2s'. REASON: The program will
       guarantee the legality of these type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_Ftu_StopChannel((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        Icu_Port_ChannelStop((Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                             (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_ISM_END)
    {
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if (eHwType <= ICU_HW_TPU_END)
    {
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}

/**
 * @brief De-initialize hardware ICU Modules
 *
 * @param pHwConfig -Pointer to module configuration structure
 */
ICU_TEXT_SECTION void Icu_HW_ModulesDeInit(const Icu_HwConfigType *pHwConfig)
{
    uint8 u8Idx;
    /*FTU Modules DeInit*/
    if (NULL_PTR != pHwConfig->pFtuHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pFtuHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_FtuModuleConfigType *ptFtuModuleConfig = &(
                *pHwConfig->pFtuHwConfig->pFtuModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptFtuModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Ftu_DeInit(ptFtuModuleConfig->eFtuInstance);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
    if (NULL_PTR != pHwConfig->pPortHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pPortHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_PortModuleConfigType *ptPortModuleConfig = &(
                *pHwConfig->pPortHwConfig->pPortModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptPortModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Port_DeInit(ptPortModuleConfig->ePortInstance);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
    /*Aontimer Modules DeInit*/
    if (NULL_PTR != pHwConfig->pAontimerHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pAontimerHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_AontimerModuleConfigType *ptAontimerModuleConfig = &(
                *pHwConfig->pAontimerHwConfig->pAontimerModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptAontimerModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Aontimer_DeInit(ptAontimerModuleConfig->eAontimerInstance);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    /*Cmp module DeInit*/
    if (NULL_PTR != pHwConfig->pCmpHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pCmpHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_CmpModuleConfigType *ptCmpModuleConfig = &(
                *pHwConfig->pCmpHwConfig->pCmpModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptCmpModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Cmp_DeInit(ptCmpModuleConfig->eCmpInstance);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#endif
    if (NULL_PTR != pHwConfig->pIsmHwConfig)
    {
        const Icu_IsmModuleConfigType *ptIsmModuleConfig = &(
            *pHwConfig->pIsmHwConfig->pIsmModuleConfig)[0];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        if (Icu_GetCoreID() == ptIsmModuleConfig->u8InstancePartition)
        {
#endif
            Icu_Ism_Disable();
#if (ICU_MULTICORE_SUPPORT == STD_ON)
        }
#endif
        for (u8Idx = 0; u8Idx < ptIsmModuleConfig->u8ChannelCount; u8Idx++)
        {
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if ((*ptIsmModuleConfig->pIsmChannelsConfig)[u8Idx].u8ChannelPartition == u8CurCoreID)
            {
#endif
                Icu_Ism_DeInitHwChannel(&(*ptIsmModuleConfig->pIsmChannelsConfig)[u8Idx]);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    if (NULL_PTR != pHwConfig->pTpuHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pTpuHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_TpuModuleConfigType *ptTpuModuleConfig = &(
                *pHwConfig->pTpuHwConfig->pTpuModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            /* PRQA S 3469 -- */
            if (ptTpuModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Tpu_DeInit(ptTpuModuleConfig);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#endif
    if (NULL_PTR != pHwConfig->pFcpitHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pFcpitHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_FcpitModuleConfigType *ptFcpitModuleConfig = &(
                *pHwConfig->pFcpitHwConfig->pFcpitModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be
               replaced by an equivalent function call. REASON: Macros have higher
               execution efficiency
                */
            uint8 u8CurCoreID = Icu_GetCoreID();
            if (ptFcpitModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                Icu_Fcpit_DeInit(ptFcpitModuleConfig);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    if (NULL_PTR != pHwConfig->pEftuTimHwConfig)
    {
        for (u8Idx = 0; u8Idx < pHwConfig->pEftuTimHwConfig->u8ModuleCount; u8Idx++)
        {
            const Icu_EftuTimModuleConfigType *ptEftuTimModuleConfig = &(
                *pHwConfig->pEftuTimHwConfig->pEftuTimModuleConfig)[u8Idx];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            /* PRQA S 3469 ++
                This usage of a function-like macro looks like it could be replaced
            by an equivalent function call. REASON: Macros have higher execution
            efficiency */
            uint8 u8CurCoreID = Icu_GetCoreID();
            if (ptEftuTimModuleConfig->u8InstancePartition == u8CurCoreID)
            {
#endif
                for (uint8 channelindex = 0; channelindex < ptEftuTimModuleConfig->u8ChannelCount;
                     channelindex++)
                {
                    Icu_Eftu_Tim_DeinitHwChannel(
                        ptEftuTimModuleConfig->eEftuInstance,
                        (uint8)((*ptEftuTimModuleConfig->pEftuTimChannelConfig)[channelindex])
                            .eChannelIndex);
                }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
            }
#endif
        }
    }
#endif
}
#endif /* ICU_DE_INIT_API == STD_ON */

/**
 * @brief  Initialize hardware of a ICU channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_083
 */
ICU_TEXT_SECTION void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw)

{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
       4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type,
       '%2s'. 4342:An expression of 'essentially unsigned' type (%1s) is being
       cast to enum type
       '%2s'. 4394:A composite expression of 'essentially unsigned' type (%1s) is
       being cast to a different type category, '%2s'. REASON: The program will
       guarantee the legality of these type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/

        Icu_Ftu_ChannelInit((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        Icu_Port_ChannelInit((Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                             (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_ISM_END)
    {
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if (eHwType <= ICU_HW_TPU_END)
    {
        Icu_Tpu_ChannelInit((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                            u32ChannelOfHw);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set hardware to sleep mode
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_084
 */
ICU_TEXT_SECTION void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
       4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type,
       '%2s'. 4342:An expression of 'essentially unsigned' type (%1s) is being
       cast to enum type
       '%2s'. 4394:A composite expression of 'essentially unsigned' type (%1s) is
       being cast to a different type category, '%2s'. REASON: The program will
       guarantee the legality of these type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_Ftu_SetSleepMode((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        Icu_Port_SetSleepMode((Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                              (uint8)u32ChannelOfHw);
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_Aontimer_SetSleepMode(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER));
        /* PRQA S 2984 -- */
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        Icu_Cmp_SetSleepMode((Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START));
    }
#endif
    else if (eHwType <= ICU_HW_ISM_END)
    {
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if (eHwType <= ICU_HW_TPU_END)
    {
        Icu_TpuInstanceType eTpuInstance = (Icu_TpuInstanceType)((uint32)eHwType -
                                                                 (uint32)ICU_HW_TPU_START);
        Icu_Tpu_SetSleepMode(eTpuInstance, u32ChannelOfHw);
    }
#endif
    else if (eHwType <= ICU_HW_FCPIT_END)
    {
        Icu_Fcpit_SetSleepMode((Icu_FcpitInstanceType)((uint32)eHwType - (uint32)ICU_HW_FCPIT_START),
                               (uint8)u32ChannelOfHw);
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if (eHwType <= ICU_HW_EFTU_END)
    {
        Icu_Eftu_Tim_SetSleepMode((ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                  (uint8)u32ChannelOfHw);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}

/**
 * @brief Set hardware to normal mode for signal measurement channels
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eProperty         -The type of signal measurement
 * @param eActivateEdge     -The activation mode
 * @param eMode             -The method of signal measurement
 *
 * @implements SWDESG_ICU_103
 */
ICU_TEXT_SECTION void Icu_HW_SetNormalModeExt(Icu_HwType                        eHwType,
                                              uint32                            u32ChannelOfHw,
                                              Icu_SignalMeasurementPropertyType eProperty,
                                              Icu_ActivationType                eActivateEdge,
                                              Icu_SignalMeasurementModeType     eMode)
{
    if (eHwType <= ICU_HW_FTU_END)
    {
        if (ICU_MEASUREMENT_SINGLE_CAPTURE == eMode)
        {
            if (eProperty == ICU_PERIOD_TIME)
            {
                Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivateEdge);
                /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
                expression should not be cast to an inappropriate essential type.
                #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
                cast to a different essential type category or a wider essential type
                4322:An expression of 'essentially enum' type (%1s) is being cast to a
                different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
                type
                (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
                'essentially unsigned' type (%1s) is being cast to a different type
                category, '%2s'. REASON: The program will guarantee the legality of
                these type conversions.
                */
                Icu_Ftu_SetNormalMode((Icu_FtuInstanceType)(eHwType),
                                      (uint8)u32ChannelOfHw,
                                      eInputCaptureMode);
                /* PRQA S 4322,4342,4394 -- */
            }
            else
            {
                /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
                expression should not be cast to an inappropriate essential type.
                #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
                cast to a different essential type category or a wider essential type
                4322:An expression of 'essentially enum' type (%1s) is being cast to a
                different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
                type
                (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
                'essentially unsigned' type (%1s) is being cast to a different type
                category, '%2s'. REASON: The program will guarantee the legality of
                these type conversions.
                */
                Icu_Ftu_SetNormalMode((Icu_FtuInstanceType)(eHwType),
                                      (uint8)u32ChannelOfHw,
                                      ICU_FTU_INPUT_BOTH_EDGE);
                /* PRQA S 4322,4342,4394 -- */
            }
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            /* Enable Overflow interrupt*/
            /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
            expression should not be cast to an inappropriate essential type.
            #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
            cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
            different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
            type (%1s) is being cast to enum type '%2s'. 4394:A composite expression
            of 'essentially unsigned' type (%1s) is being cast to a different type
            category, '%2s'. REASON: The program will guarantee the legality of these
            type conversions.
            */
            Icu_Ftu_EnableOverflow((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
            /* PRQA S 4322,4342,4394 -- */
#endif
        }
        else /*ICU_MEASUREMENT_DUAL_CAPTURE | ICU_MEASUREMENT_HW_DIRECT */
        {
#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
            Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivateEdge);
            if (ICU_PERIOD_TIME != eProperty)
            {
                /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of
                   an expression should not be cast to an inappropriate essential
                   type. #Misra-C:2012 Rule-10.8 The value of a composite
                   expression shall not be cast to a different essential type
                   category or a wider essential type 4322:An expression of
                   'essentially enum' type (%1s) is being cast to a different enum
                   type, '%2s'. 4342:An expression of 'essentially unsigned' type
                   (%1s) is being cast to enum type '%2s'. 4394:A composite
                   expression of 'essentially unsigned' type (%1s) is being cast
                   to a different type category, '%2s'. REASON: The program will
                   guarantee the legality of these type conversions.
                   */
                Icu_Ftu_SetIcmMode((Icu_FtuInstanceType)(eHwType),
                                   (uint8)u32ChannelOfHw,
                                   eInputCaptureMode,
                                   ICU_FTU_ICM_TIME);
                /* PRQA S 4322,4342,4394 -- */
            }
            else
            {
                /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of
                   an expression should not be cast to an inappropriate essential
                   type. #Misra-C:2012 Rule-10.8 The value of a composite
                   expression shall not be cast to a different essential type
                   category or a wider essential type 4322:An expression of
                   'essentially enum' type (%1s) is being cast to a different enum
                   type, '%2s'. 4342:An expression of 'essentially unsigned' type
                   (%1s) is being cast to enum type '%2s'. 4394:A composite
                   expression of 'essentially unsigned' type (%1s) is being cast
                   to a different type category, '%2s'. REASON: The program will
                   guarantee the legality of these type conversions.
                   */
                Icu_Ftu_SetIcmMode((Icu_FtuInstanceType)(eHwType),
                                   (uint8)u32ChannelOfHw,
                                   eInputCaptureMode,
                                   ICU_FTU_ICM_PERIOD);
                /* PRQA S 4322,4342,4394 -- */
            }
#endif
        }
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        if (eProperty == ICU_LOW_TIME)
        {
            /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
               expression should not be cast to an inappropriate essential type.
               #Misra-C:2012 Rule-10.8 The value of a composite expression shall not
               be cast to a different essential type category or a wider essential
               type 4322:An expression of 'essentially enum' type (%1s) is being cast
               to a different enum type, '%2s'. 4342:An expression of 'essentially
               unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
               expression of 'essentially unsigned' type (%1s) is being cast to a
               different type category, '%2s'. REASON: The program will guarantee the
               legality of these type conversions.
               */
            Icu_Tpu_SetNormalMode((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                                  u32ChannelOfHw,
                                  ICU_TPUE_DETECT_FALLING_EDGE_ONLY,
                                  ICU_TPUE_DETECT_RISING_EDGE_ONLY);
            /* PRQA S 4322,4342,4394 -- */
        }
        else if (eProperty == ICU_HIGH_TIME)
        {
            /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
               expression should not be cast to an inappropriate essential type.
               #Misra-C:2012 Rule-10.8 The value of a composite expression shall not
               be cast to a different essential type category or a wider essential
               type 4322:An expression of 'essentially enum' type (%1s) is being cast
               to a different enum type, '%2s'. 4342:An expression of 'essentially
               unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
               expression of 'essentially unsigned' type (%1s) is being cast to a
               different type category, '%2s'. REASON: The program will guarantee the
               legality of these type conversions.
               */
            Icu_Tpu_SetNormalMode((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                                  u32ChannelOfHw,
                                  ICU_TPUE_DETECT_RISING_EDGE_ONLY,
                                  ICU_TPUE_DETECT_FALLING_EDGE_ONLY);
            /* PRQA S 4322,4342,4394 -- */
        }
        else if (eProperty == ICU_DUTY_CYCLE)
        {
            if (eActivateEdge == ICU_RISING_EDGE)
            {
                /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
                   expression should not be cast to an inappropriate essential type.
                   #Misra-C:2012 Rule-10.8 The value of a composite expression shall not
                   be cast to a different essential type category or a wider essential
                   type 4322:An expression of 'essentially enum' type (%1s) is being
                   cast to a different enum type, '%2s'. 4342:An expression of
                   'essentially unsigned' type (%1s) is being cast to enum type '%2s'.
                   4394:A composite expression of 'essentially unsigned' type (%1s) is
                   being cast to a different type category, '%2s'. REASON: The program
                   will guarantee the legality of these type conversions.
                   */
                Icu_Tpu_SetNormalMode(
                    (Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                    u32ChannelOfHw,
                    ICU_TPUE_DETECT_FALLING_EDGE_ONLY,
                    ICU_TPUE_DETECT_RISING_EDGE_ONLY);
                /* PRQA S 4322,4342,4394 -- */
            }
            else /* (eActivateEdge == ICU_FALLING_EDGE) */
            {
                /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
                   expression should not be cast to an inappropriate essential type.
                   #Misra-C:2012 Rule-10.8 The value of a composite expression shall not
                   be cast to a different essential type category or a wider essential
                   type 4322:An expression of 'essentially enum' type (%1s) is being
                   cast to a different enum type, '%2s'. 4342:An expression of
                   'essentially unsigned' type (%1s) is being cast to enum type '%2s'.
                   4394:A composite expression of 'essentially unsigned' type (%1s) is
                   being cast to a different type category, '%2s'. REASON: The program
                   will guarantee the legality of these type conversions.
                   */
                Icu_Tpu_SetNormalMode(
                    (Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                    u32ChannelOfHw,
                    ICU_TPUE_DETECT_RISING_EDGE_ONLY,
                    ICU_TPUE_DETECT_FALLING_EDGE_ONLY);
                /* PRQA S 4322,4342,4394 -- */
            }
        }
        else /* eProperty == ICU_PERIOD_TIME */
        {
            ICU_TPUE_IPACType eIpac = Icu_HW_GetTpuIPAC(eActivateEdge);
            /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
               expression should not be cast to an inappropriate essential type.
               #Misra-C:2012 Rule-10.8 The value of a composite expression shall not
               be cast to a different essential type category or a wider essential
               type 4322:An expression of 'essentially enum' type (%1s) is being cast
               to a different enum type, '%2s'. 4342:An expression of 'essentially
               unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
               expression of 'essentially unsigned' type (%1s) is being cast to a
               different type category, '%2s'. REASON: The program will guarantee the
               legality of these type conversions.
               */
            Icu_TpuInstanceType eTpuInstance = (Icu_TpuInstanceType)((uint32)eHwType -
                                                                     (uint32)ICU_HW_TPU_START);
            Icu_Tpu_SetNormalMode(eTpuInstance, u32ChannelOfHw, eIpac, ICU_TPUE_NO_TRANSITIONS);
            /* PRQA S 4322,4342,4394 -- */
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            /* Enable Overflow interrupt*/
            Icu_Tpu_EnableOverflow(eTpuInstance, (uint8)u32ChannelOfHw);
#endif
        }
    }
#endif
    else
    {
    }
}

/**
 * @brief Set hardware to normal mode
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 *
 * @implements SWDESG_ICU_085
 */
ICU_TEXT_SECTION void Icu_HW_SetNormalMode(Icu_HwType         eHwType,
                                           uint32             u32ChannelOfHw,
                                           Icu_ActivationType eActivationEdge)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivationEdge);
        Icu_Ftu_SetNormalMode((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw, eInputCaptureMode);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        Icu_AontimerPulsePolarityType ePolarity = Icu_HW_GetAontimerPolarity(eActivationEdge);

        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_Aontimer_SetNormalMode(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER),
            ePolarity);
        /* PRQA S 2984 -- */
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        Icu_Cmp_SetNormalMode((Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START));
    }
#endif
    else if (eHwType <= ICU_HW_ISM_END)
    {
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if (eHwType <= ICU_HW_TPU_END)
    {
        ICU_TPUE_IPACType eTpuIpac = Icu_HW_GetTpuIPAC(eActivationEdge);
        Icu_Tpu_SetNormalMode((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                              u32ChannelOfHw,
                              eTpuIpac,
                              ICU_TPUE_NO_TRANSITIONS);
    }
#endif
    else if (eHwType <= ICU_HW_FCPIT_END)
    {
        /* PRQA S 4322,4342,4394,4422 ++ #Misra-C:2012: Rule-10.5 The value of an
           expression should not be cast to an inappropriate essential type.
           #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
           cast to a different essential type category or a wider essential type
           4322:An expression of 'essentially enum' type (%1s) is being cast to a
           different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
           type (%1s) is being cast to enum type '%2s'. 4394:A composite expression
           of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. 4422:An
           expression of 'essentially enum' type (%1s) is being converted to a
           different enum type, '%2s' on assignment. REASON: The program will
           guarantee the legality of these type conversions.
        */
        Icu_Fcpit_SetNormalMode((Icu_FcpitInstanceType)((uint32)eHwType - (uint32)ICU_HW_FCPIT_START),
                                (uint8)u32ChannelOfHw);
        /* PRQA S 4322,4342,4394,4422 -- */
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if (eHwType <= ICU_HW_EFTU_END)
    {
        /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
           expression should not be cast to an inappropriate essential type.
           #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
           cast to a different essential type category or a wider essential type
           4322:An expression of 'essentially enum' type (%1s) is being cast to a
           different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
           type (%1s) is being cast to enum type '%2s'. 4394:A composite expression
           of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. 4422:An
           expression of 'essentially enum' type (%1s) is being converted to a
           different enum type, '%2s' on assignment. REASON: The program will
           guarantee the legality of these type conversions.
          */
        Icu_Eftu_Tim_SetNormalMode((ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                   (uint8)u32ChannelOfHw);
        /* PRQA S 4322,4342,4394,4422 -- */
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}
#endif /* ICU_SET_MODE_API */

/**
 * @brief Set activation for a hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 *
 * @implements SWDESG_ICU_086
 */
ICU_TEXT_SECTION void Icu_HW_SetActivationCondition(Icu_HwType         eHwType,
                                                    uint32             u32ChannelOfHw,
                                                    Icu_ActivationType eActivationEdge)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivationEdge);
        Icu_Ftu_SetActivationCondition((Icu_FtuInstanceType)((uint32)eHwType),
                                       (uint8)u32ChannelOfHw,
                                       eInputCaptureMode);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        Icu_PortIntConfigType ePortIntConfig = Icu_HW_GetPortIntConfig(eActivationEdge);
        Icu_Port_SetActivationCondition(
            (Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
            (uint8)u32ChannelOfHw,
            ePortIntConfig);
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        Icu_AontimerPulsePolarityType ePolarity = Icu_HW_GetAontimerPolarity(eActivationEdge);
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_Aontimer_SetActivationCondition(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER),
            ePolarity);
        /* PRQA S 2984 -- */
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        ICU_CmpOutPolarityType eCmpPolarity = Icu_HW_GetCmpPolarity(eActivationEdge);
        Icu_Cmp_SetActivationCondition(
            (Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START),
            eCmpPolarity);
    }
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        ICU_TPUE_IPACType eIpac = Icu_HW_GetTpuIPAC(eActivationEdge);
        Icu_Tpu_SetActivationCondition(
            (Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
            u32ChannelOfHw,
            eIpac,
            ICU_TPUE_NO_TRANSITIONS);
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        ICU_EftuTimActiveEdgeType eEftuTimActiveEdge = Icu_HW_GetEftuTimInputCapture(eActivationEdge);
        Icu_Eftu_Tim_SetActivationCondition(
            (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw,
            eEftuTimActiveEdge);
    }
#endif
    else
    {
        /*FCPIT no effect*/
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 * @return                  state of the channel
 * @retval                  ICU_ACTIVE  An active edge has been detected
 * @retval                  ICU_IDLE    No active edge has been detected
 *
 * @implements SWS_Icu_00031,SWDESG_ICU_087
 */
ICU_TEXT_SECTION Icu_InputStateType Icu_HW_GetInputState(Icu_HwType         eHwType,
                                                         uint32             u32ChannelOfHw,
                                                         Icu_ActivationType eActivationEdge)
{
    Icu_InputStateType tInputState = ICU_IDLE;
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to
       a different enum type, '%2s'. 4342:An expression of 'essentially
       unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
       expression of 'essentially unsigned' type (%1s) is being cast to a
       different type category, '%2s'. REASON: The program will guarantee the
       legality of these type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        if ((boolean)TRUE ==
            Icu_Ftu_GetInputState((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw))
        {
            tInputState = ICU_ACTIVE;
        }
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        if ((boolean)TRUE == Icu_Port_GetInputState(
                                 (Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                                 (uint8)u32ChannelOfHw))
        {
            tInputState = ICU_ACTIVE;
        }
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        /* PRQA S 2984 ++
               This operation is redundant. The value of the result is always
           '%1s'. REASON: The value of the macro definition may be modified.
            */
        if ((boolean)TRUE ==
            Icu_Aontimer_GetInputState(
                (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER)))
        /* PRQA S 2984 -- */
        {
            tInputState = ICU_ACTIVE;
        }
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        ICU_CmpOutPolarityType eCmpPolarity = Icu_HW_GetCmpPolarity(eActivationEdge);
        if ((boolean)TRUE ==
            Icu_Cmp_GetInputState((Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START),
                                  eCmpPolarity))
        {
            tInputState = ICU_ACTIVE;
        }
    }
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        if ((boolean)TRUE ==
            Icu_Tpu_GetInputState((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                                  u32ChannelOfHw))
        {
            tInputState = ICU_ACTIVE;
        }
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        if ((boolean)TRUE == Icu_Eftu_Tim_GetInputState(
                                 (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                 (uint8)u32ChannelOfHw))
        {
            tInputState = ICU_ACTIVE;
        }
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
    return tInputState;
}

/**
 * @brief This function returns the state of the hardware channel directly
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @return                  -state of the channel
 *
 * @implements SWDESG_ICU_104
 */
ICU_TEXT_SECTION Icu_InputStateType Icu_HW_GetInputHwState(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    Icu_InputStateType tInputState = ICU_IDLE;
    /* PRQA S 4322,4342,4394,4422,4393,4332 ++ #Misra-C:2012: Rule-10.5 The
       value of an expression should not be cast to an inappropriate essential
       type. #Misra-C:2012 Rule-10.8 The value of a composite expression shall
       not be cast to a different essential type category or a wider essential
       type 4322:An expression of 'essentially enum' type (%1s) is being cast to
       a different enum type, '%2s'. 4342:An expression of 'essentially
       unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
       expression of 'essentially unsigned' type (%1s) is being cast to a
       different type category, '%2s'. 4422:An expression of 'essentially enum'
       type
       (%1s) is being converted to a different enum type, '%2s' on assignment.
       4393:A composite expression of 'essentially signed' type (%1s) is being
       cast to a different type category,
       '%2s'. 4332:An expression of 'essentially signed' type (%1s) is being
       cast to enum type,
       '%2s'. REASON: The program will guarantee the legality of these type
       conversions.
      */
    if (eHwType <= ICU_HW_FTU_END)
    {
        if ((boolean)TRUE ==
            Icu_Ftu_GetInputHwState((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw))
        {
            tInputState = ICU_ACTIVE;
        }
    }
    else if (eHwType == ICU_HW_ISM)
    {
        if ((boolean)TRUE == Icu_Ism_GetInputHwState((Icu_IsmInstanceType)(eHwType - ICU_HW_ISM),
                                                     (uint8)u32ChannelOfHw))
        {
            tInputState = ICU_ACTIVE;
        }
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if (eHwType <= ICU_HW_EFTU_END)
    {
        if ((boolean)TRUE == Icu_Eftu_Tim_GetInputHwState(
                                 (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                 (uint8)u32ChannelOfHw))
        {
            tInputState = ICU_ACTIVE;
        }
    }
#endif
    /* PRQA S 4322,4342,4394,4422,4393,4332 -- */
    else
    {
        // PRQA S 2013
    }
    return tInputState;
}
#endif

#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief Start time stamp of a hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param bDmaEn            -Enable Dma channel
 * @param eActivationEdge   -Activation edge of the channel
 *
 * @implements SWDESG_ICU_088
 */
ICU_TEXT_SECTION void Icu_HW_StartTimestamp(Icu_HwType eHwType,
                                            uint32     u32ChannelOfHw,
#if (ICU_TIMESTAMP_DMA == STD_ON)
                                            boolean bDmaEn,
#endif
                                            Icu_ActivationType eActivationEdge)
{
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivationEdge);
        /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
           expression should not be cast to an inappropriate essential type.
           #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
           cast to a different essential type category or a wider essential type
           4322:An expression of 'essentially enum' type (%1s) is being cast to a
           different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
           type (%1s) is being cast to enum type '%2s'. 4394:A composite expression
           of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. REASON: The
           program will guarantee the legality of these type conversions.
        */

#if (ICU_TIMESTAMP_DMA == STD_ON)
        /*Enable the channel dma mode*/
        if (bDmaEn == TRUE)
        {
            Icu_Ftu_EnableChnDma((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
        }
#endif
        Icu_Ftu_StartChannel((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw, eInputCaptureMode);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
#if (ICU_TIMESTAMP_DMA == STD_ON)
        /*Enable the channel dma mode*/
        if (bDmaEn == FALSE)
        {
            /* Enable Overflow interrupt*/
            Icu_Ftu_EnableOverflow((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
        }
#else
        Icu_Ftu_EnableOverflow((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
#endif
#endif
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        ICU_TPUE_IPACType   eIpac        = Icu_HW_GetTpuIPAC(eActivationEdge);
        Icu_TpuInstanceType eTpuInstance = (Icu_TpuInstanceType)((uint32)eHwType -
                                                                 (uint32)ICU_HW_TPU_START);

        Icu_Tpu_StartChannel(eTpuInstance, u32ChannelOfHw, eIpac, ICU_TPUE_NO_TRANSITIONS);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        Icu_Tpu_EnableOverflow(eTpuInstance, u32ChannelOfHw);
#endif
    }
#endif
    else if ((eHwType <= ICU_HW_FCPIT_END) && (eHwType >= ICU_HW_FCPIT_START))
    {
        Icu_Fcpit_StartFcpitChannel(
            (Icu_FcpitInstanceType)((uint32)eHwType - (uint32)ICU_HW_FCPIT_START),
            (uint8)u32ChannelOfHw);
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        ICU_EftuTimActiveEdgeType eEftuTimActiveEdge = Icu_HW_GetEftuTimInputCapture(eActivationEdge);
        Icu_Eftu_Tim_StartChannelTiemMode(
            (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw,
            eEftuTimActiveEdge);
    }
#endif
    /* PRQA S 4322,4342,4394 -- */
    else
    {
        /*Do nothing*/
    }
}

/**
 * @brief Stop time stamp of a hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_089
 */
ICU_TEXT_SECTION void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
              4322:An expression of 'essentially enum' type (%1s) is being cast to
       a different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
      */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
#if (ICU_TIMESTAMP_DMA == STD_ON)
        /*Disable the channel dma mode*/
        Icu_Ftu_DisableChnDma((Icu_FtuInstanceType)((uint32)eHwType), (uint8)u32ChannelOfHw);
#endif
        Icu_Ftu_StopChannel((Icu_FtuInstanceType)((uint32)eHwType), (uint8)u32ChannelOfHw);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        /* Disable Overflow interrupt*/
        Icu_Ftu_DisableOverflow((Icu_FtuInstanceType)eHwType, (uint8)u32ChannelOfHw);
#endif
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        Icu_TpuInstanceType eTpuInstance = (Icu_TpuInstanceType)((uint32)eHwType -
                                                                 (uint32)ICU_HW_TPU_START);
        Icu_Tpu_StopChannel(eTpuInstance, u32ChannelOfHw);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        Icu_Tpu_DisableOverflow(eTpuInstance, u32ChannelOfHw);
#endif
    }
#endif
    else if ((eHwType <= ICU_HW_FCPIT_END) && (eHwType >= ICU_HW_FCPIT_START))
    {
        Icu_Fcpit_StopFcpitChannel(
            (Icu_FcpitInstanceType)((uint32)eHwType - (uint32)ICU_HW_FCPIT_START),
            (uint8)u32ChannelOfHw);
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        Icu_Eftu_Tim_StopChannel((ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                 (uint8)u32ChannelOfHw);
    }
#endif
    /* PRQA S 4322,4342,4394 -- */
    else
    {
        /*Do nothing*/
    }
}
#endif

#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Get edge numbers of a channel from hardware
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param pEdgeNum          -Point to store the edge numbers
 * @retval                  TRUE    The channel support get edge numbers from
 * hardware
 * @retval                  FALSE   The channel do not support get edge numbers
 * from hardware
 *
 * @implements SWDESG_ICU_090
 */
ICU_TEXT_SECTION boolean Icu_HW_GetEdgeNumbers(Icu_HwType          eHwType,
                                               uint32              u32ChannelOfHw,
                                               Icu_EdgeNumberType *pEdgeNum)
{
    boolean bHwSupport = FALSE;
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    /* PRQA S 3119 ++
       This statement has no side-effect - it can be removed.
       REASON: Keep this parameter for possible extensions
    */
    (void)u32ChannelOfHw;
    /* PRQA S 3119 -- */
    if (eHwType == ICU_HW_AONTIMER)
    {
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_AontimerInstanceType eInstance = (Icu_AontimerInstanceType)((uint32)eHwType -
                                                                        (uint32)ICU_HW_AONTIMER);
        /* PRQA S 2984 -- */
        /*Do not read Aontimer count when Aontimer is disabled*/
        boolean bEnable = Icu_Aontimer_IsEnable(eInstance);
        if ((boolean)TRUE == bEnable)
        {
            bHwSupport = TRUE;
            *pEdgeNum  = Icu_Aontimer_GetEdgeNumbers(eInstance);
        }
    }
    /* PRQA S 4322,4342,4394 -- */
    return bHwSupport;
}

/**
 * @brief Reset hardware edge numbers of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_091
 */
ICU_TEXT_SECTION void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    if (eHwType == ICU_HW_AONTIMER)
    {
        /* PRQA S 3119 ++
           This statement has no side-effect - it can be removed.
           REASON: Keep this parameter for possible extensions
        */
        (void)u32ChannelOfHw;
        /* PRQA S 3119 -- */
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
           expression should not be cast to an inappropriate essential type.
           #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
           cast to a different essential type category or a wider essential type
           4322:An expression of 'essentially enum' type (%1s) is being cast to a
           different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
           type (%1s) is being cast to enum type '%2s'. 4394:A composite expression
           of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. REASON: The
           program will guarantee the legality of these type conversions.
        */
        Icu_Aontimer_ResetEdgeNumbers(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER));
        /* PRQA S 4322,4342,4394 -- */
        /* PRQA S 2984 -- */
    }
}

/**
 * @brief Enable hardware edge numbers of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 *
 * @implements SWDESG_ICU_092
 */
ICU_TEXT_SECTION void Icu_HW_EnableEdgeCount(Icu_HwType         eHwType,
                                             uint32             u32ChannelOfHw,
                                             Icu_ActivationType eActivationEdge)
{
    /* PRQA S 4322,4342,4394 ++
       4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivationEdge);
        Icu_Ftu_StartChannel((Icu_FtuInstanceType)((uint32)eHwType),
                             (uint8)u32ChannelOfHw,
                             eInputCaptureMode);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        Icu_PortIntConfigType ePortIntConfig = Icu_HW_GetPortIntConfig(eActivationEdge);
        Icu_Port_ChannelStart((Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                              (uint8)u32ChannelOfHw,
                              ePortIntConfig);
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        Icu_AontimerPulsePolarityType ePolarity = Icu_HW_GetAontimerPolarity(eActivationEdge);
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_Aontimer_EnableEdgeCount(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER),
            ePolarity);
        /* PRQA S 2984 -- */
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        ICU_CmpOutPolarityType eCmpPolarity = Icu_HW_GetCmpPolarity(eActivationEdge);
        Icu_Cmp_EnableEdgeCount((Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START),
                                eCmpPolarity);
    }
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        ICU_TPUE_IPACType eIpac = Icu_HW_GetTpuIPAC(eActivationEdge);
        Icu_Tpu_StartChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                             u32ChannelOfHw,
                             eIpac,
                             ICU_TPUE_NO_TRANSITIONS);
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        ICU_EftuTimActiveEdgeType eEftuTimActiveEdge = Icu_HW_GetEftuTimInputCapture(eActivationEdge);
        Icu_Eftu_Tim_StartChannelTiemMode(
            (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw,
            eEftuTimActiveEdge);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}

/**
 * @brief Disable hardware edge numbers of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_093
 */
ICU_TEXT_SECTION void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_Ftu_StopChannel((Icu_FtuInstanceType)((uint32)eHwType), (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        Icu_Port_ChannelStop((Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                             (uint8)u32ChannelOfHw);
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_Aontimer_DisableEdgeCount(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER));
        /* PRQA S 2984 -- */
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        Icu_Cmp_DisableEdgeCount((Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START));
    }
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        Icu_Tpu_StopChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                            u32ChannelOfHw);
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        Icu_Eftu_Tim_StopChannel((ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                 (uint8)u32ChannelOfHw);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}

#endif /* ICU_EDGE_COUNT_API == STD_ON */

#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief Enable hardware edge detection of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 *
 * @implements SWDESG_ICU_094
 */
ICU_TEXT_SECTION void Icu_HW_EnableEdgeDetection(Icu_HwType         eHwType,
                                                 uint32             u32ChannelOfHw,
                                                 Icu_ActivationType eActivationEdge)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivationEdge);
        Icu_Ftu_StartChannel((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw, eInputCaptureMode);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        Icu_PortIntConfigType ePortIntConfig = Icu_HW_GetPortIntConfig(eActivationEdge);
        Icu_Port_ChannelStart((Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                              (uint8)u32ChannelOfHw,
                              ePortIntConfig);
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        Icu_AontimerPulsePolarityType ePolarity = Icu_HW_GetAontimerPolarity(eActivationEdge);
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_Aontimer_EnableEdgeDetection(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER),
            ePolarity);
        /* PRQA S 2984 -- */
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        ICU_CmpOutPolarityType eCmpPolarity = Icu_HW_GetCmpPolarity(eActivationEdge);
        Icu_Cmp_EnableEdgeDetection((Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START),
                                    eCmpPolarity);
    }
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        ICU_TPUE_IPACType eIpac = Icu_HW_GetTpuIPAC(eActivationEdge);
        Icu_Tpu_StartChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                             u32ChannelOfHw,
                             eIpac,
                             ICU_TPUE_NO_TRANSITIONS);
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        ICU_EftuTimActiveEdgeType eEftuTimActiveEdge = Icu_HW_GetEftuTimInputCapture(eActivationEdge);
        Icu_Eftu_Tim_StartChannelTiemMode(
            (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw,
            eEftuTimActiveEdge);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}

/**
 * @brief Disable hardware edge detection of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_095
 */
ICU_TEXT_SECTION void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_Ftu_StopChannel((Icu_FtuInstanceType)((uint32)eHwType), (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        /*PORT Channel*/
        Icu_Port_ChannelStop((Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
                             (uint8)u32ChannelOfHw);
    }
    else if (eHwType == ICU_HW_AONTIMER)
    {
        /*Aontimer Channel*/
        /* PRQA S 2984 ++
           This operation is redundant. The value of the result is always '%1s'.
           REASON: The value of the macro definition may be modified.
        */
        Icu_Aontimer_DisableEdgeDetection(
            (Icu_AontimerInstanceType)((uint32)eHwType - (uint32)ICU_HW_AONTIMER));
        /* PRQA S 2984 -- */
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if (eHwType <= ICU_HW_CMP_END)
    {
        Icu_Cmp_DisableEdgeDetection(
            (Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START));
    }
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        Icu_Tpu_StopChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                            u32ChannelOfHw);
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        Icu_Eftu_Tim_StopChannel((ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                 (uint8)u32ChannelOfHw);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
}
#endif /* ICU_EDGE_DETECT_API */

#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Start hardware signal measurement of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eProperty            -Measurement property
 * @param eActivateEdge     -Channel activate edge
 * @param eMode              -Channel Measurement mode
 *
 * @implements SWDESG_ICU_096
 */
ICU_TEXT_SECTION void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType,
                                                    uint32     u32ChannelOfHw,
                                                    Icu_SignalMeasurementPropertyType eProperty,
                                                    Icu_ActivationType                eActivateEdge,
                                                    Icu_SignalMeasurementModeType     eMode)
{
    if (eHwType <= ICU_HW_FTU_END)
    {
        if (eMode == ICU_MEASUREMENT_SINGLE_CAPTURE)
        {
            /*FTU Channel*/
            Icu_FtuInputCaptureType eInputCaptureMode;
            if (eProperty == ICU_PERIOD_TIME)
            {
                eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivateEdge);
            }
            else
            {
                eInputCaptureMode = ICU_FTU_INPUT_BOTH_EDGE;
            }

            /* PRQA S 4322,4342,4394 ++
               4322:An expression of 'essentially enum' type (%1s) is being cast to a
               different enum type, '%2s'. 4342:An expression of 'essentially
               unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
               expression of 'essentially unsigned' type (%1s) is being cast to a
               different type category, '%2s'. REASON: The program will guarantee the
               legality of these type conversions.
            */

            Icu_Ftu_StartChannel((Icu_FtuInstanceType)(eHwType),
                                 (uint8)u32ChannelOfHw,
                                 eInputCaptureMode);

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            /* Enable Overflow interrupt*/
            Icu_Ftu_EnableOverflow((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
#endif
            /* PRQA S 4322,4342,4394 -- */
        }
#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
        else /*eMode == ICU_MEASUREMENT_DUAL_CAPTURE || ICU_MEASUREMENT_HW_DIRECT*/
        {
            /* PRQA S 4322,4342,4394 ++
               4322:An expression of 'essentially enum' type (%1s) is being cast to a
               different enum type, '%2s'. 4342:An expression of 'essentially
               unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
               expression of 'essentially unsigned' type (%1s) is being cast to a
               different type category, '%2s'. REASON: The program will guarantee the
               legality of these type conversions.
            */
            Icu_FtuInputCaptureType eInputCaptureMode = Icu_HW_GetFtuInputCapture(eActivateEdge);
            if (ICU_PERIOD_TIME != eProperty)
            {
                Icu_Ftu_SetIcmMode((Icu_FtuInstanceType)(eHwType),
                                   (uint8)u32ChannelOfHw,
                                   eInputCaptureMode,
                                   ICU_FTU_ICM_TIME);
            }
            else
            {
                Icu_Ftu_SetIcmMode((Icu_FtuInstanceType)(eHwType),
                                   (uint8)u32ChannelOfHw,
                                   eInputCaptureMode,
                                   ICU_FTU_ICM_PERIOD);
            }
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            /* Enable Overflow interrupt*/
            Icu_Ftu_EnableOverflow((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
#endif
            /* PRQA S 4322,4342,4394 -- */
        }
#endif
    }
    else if (ICU_HW_ISM == eHwType)
    {
        /* PRQA S 4322,4342,4394 ++
                       4322:An expression of 'essentially enum' type (%1s) is being
           cast to a different enum type, '%2s'. 4342:An expression of 'essentially
           unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
           expression of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. REASON: The
           program will guarantee the legality of these type conversions.
                    */
        ICU_ISM_LAM_EventWindowEdgeType eEventWindowType = Icu_HW_GetIsmEventEdge((uint32)eProperty,
                                                                                  eActivateEdge);
        /* PRQA S 4322,4342,4394 -- */
        Icu_Ism_StartLamChannel((uint8)u32ChannelOfHw, eEventWindowType);
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        /* PRQA S 4322,4342,4394 ++
                       4322:An expression of 'essentially enum' type (%1s) is being
           cast to a different enum type, '%2s'. 4342:An expression of 'essentially
           unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
           expression of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. REASON: The
           program will guarantee the legality of these type conversions.
                    */
        if (eProperty == ICU_LOW_TIME)
        {
            Icu_Tpu_StartChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                                 u32ChannelOfHw,
                                 ICU_TPUE_DETECT_FALLING_EDGE_ONLY,
                                 ICU_TPUE_DETECT_RISING_EDGE_ONLY);
        }
        else if (eProperty == ICU_HIGH_TIME)
        {
            Icu_Tpu_StartChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                                 u32ChannelOfHw,
                                 ICU_TPUE_DETECT_RISING_EDGE_ONLY,
                                 ICU_TPUE_DETECT_FALLING_EDGE_ONLY);
        }
        else if (eProperty == ICU_DUTY_CYCLE)
        {
            if (eActivateEdge == ICU_RISING_EDGE)
            {
                Icu_Tpu_StartChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                                     u32ChannelOfHw,
                                     ICU_TPUE_DETECT_RISING_EDGE_ONLY,
                                     ICU_TPUE_DETECT_FALLING_EDGE_ONLY);
            }
            else /* (eActivateEdge == ICU_FALLING_EDGE) */
            {

                Icu_Tpu_StartChannel((Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
                                     u32ChannelOfHw,
                                     ICU_TPUE_DETECT_FALLING_EDGE_ONLY,
                                     ICU_TPUE_DETECT_RISING_EDGE_ONLY);
            }
        }
        else /* eProperty == ICU_PERIOD_TIME */
        {
            ICU_TPUE_IPACType   eIpac        = Icu_HW_GetTpuIPAC(eActivateEdge);
            Icu_TpuInstanceType eTpuInstance = (Icu_TpuInstanceType)((uint32)eHwType -
                                                                     (uint32)ICU_HW_TPU_START);
            Icu_Tpu_StartChannel(eTpuInstance, u32ChannelOfHw, eIpac, ICU_TPUE_NO_TRANSITIONS);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            /* Enable Overflow interrupt*/
            Icu_Tpu_EnableOverflow(eTpuInstance, (uint8)u32ChannelOfHw);
#endif
        }
        /* PRQA S 4322,4342,4394 -- */
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        /* PRQA S 4322,4342,4394 ++
                       4322:An expression of 'essentially enum' type (%1s) is being
           cast to a different enum type, '%2s'. 4342:An expression of 'essentially
           unsigned' type (%1s) is being cast to enum type '%2s'. 4394:A composite
           expression of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. REASON: The
           program will guarantee the legality of these type conversions.
                    */
        ICU_EftuTimActiveEdgeType eEftuTimActiveEdge = Icu_HW_GetEftuTimInputCapture(eActivateEdge);
        Icu_Eftu_Tim_StartChannelTpwmMode(
            (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw,
            eEftuTimActiveEdge);
        /* PRQA S 4322,4342,4394 -- */
    }
#endif
    else
    {
        /* for MISRA */
    }
}

/**
 * @brief Stop hardware signal measurement of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_097
 */
ICU_TEXT_SECTION void Icu_HW_StopSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
              4322:An expression of 'essentially enum' type (%1s) is being cast to
       a different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
      */
    if (eHwType <= ICU_HW_FTU_END)
    {
        /*FTU Channel*/
        Icu_Ftu_StopChannel((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        /* Disable Overflow interrupt*/
        Icu_Ftu_DisableOverflow((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
#endif
    }
    else if (ICU_HW_ISM == eHwType)
    {
        Icu_Ism_StopLamChannel((uint8)u32ChannelOfHw);
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        Icu_TpuInstanceType eTpuInstance = (Icu_TpuInstanceType)((uint32)eHwType -
                                                                 (uint32)ICU_HW_TPU_START);
        Icu_Tpu_StopChannel(eTpuInstance, u32ChannelOfHw);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
        /* Disable Overflow interrupt*/
        Icu_Tpu_DisableOverflow(eTpuInstance, (uint8)u32ChannelOfHw);
#endif
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        Icu_Eftu_Tim_StopChannel((ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
                                 (uint8)u32ChannelOfHw);
    }
#endif
    /* PRQA S 4322,4342,4394 -- */
    else
    {
        /* for MISRA */
    }
}

/**
 * @brief Get overflow value of the channel
 *
 * @param eHwType           -Module type of the channel
 * @retval                  overflow count
 *
 * @implements SWDESG_ICU_099
 */
ICU_TEXT_SECTION Icu_ValueType Icu_HW_GetOverflowValue(Icu_HwType eHwType)
{
    Icu_ValueType tOverflowValue = 0;
    if (eHwType <= ICU_HW_FTU_END)
    {
        /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
           expression should not be cast to an inappropriate essential type.
           #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
           cast to a different essential type category or a wider essential type
           4322:An expression of 'essentially enum' type (%1s) is being cast to a
           different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
           type (%1s) is being cast to enum type '%2s'. 4394:A composite expression
           of 'essentially unsigned' type
           (%1s) is being cast to a different type category, '%2s'. REASON: The
           program will guarantee the legality of these type conversions.
        */
        tOverflowValue = Icu_Ftu_GetInstanceMaxCount((Icu_FtuInstanceType)(eHwType)) + 1u;
        /* PRQA S 4322,4342,4394 -- */
    }
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        tOverflowValue = ICU_TPU_MAX_COUNT;
    }
#endif
    else
    {
        /*Do nothing*/
    }
    return tOverflowValue;
}

#endif /* ICU_SIGNAL_MEASUREMENT_API */

/**
 * @brief Get elasped time of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param  u32ChannelOfHw               the hardware channel
 *
 * @retrun the time value
 * @implements SWDESG_ICU_265
 */
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON) || (ICU_GET_DUTY_CYCLE_VALUES_API == STD_ON)
ICU_TEXT_SECTION Icu_ValueType Icu_HW_GetHwMeasurementTimeValue(Icu_HwType eHwType,
                                                                uint32     u32ChannelOfHw)
{
    uint32 u32timeValue = 0;
    if (eHwType == ICU_HW_ISM)
    {
        u32timeValue = Icu_Ism_GetTimeElapsed((uint8)u32ChannelOfHw);
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if (eHwType <= ICU_HW_EFTU_END)
    {
        /* PRQA S 4332,4393 ++ #Misra-C:2012: Rule-10.5 The value of an expression
           should not be cast to an inappropriate essential type. #Misra-C:2012
           Rule-10.8 The value of a composite expression shall not be cast to a
           different essential type category or a wider essential type 4332:An
           expression of 'essentially signed' type (%1s) is being cast to enum type,
           '%2s'. 4393:A composite expression of 'essentially signed' type (%1s) is
           being cast to a different type category, '%2s'.

                REASON: The program will guarantee the legality of these type
           conversions.
        */
        u32timeValue = Icu_Eftu_Tim_HwGetTimeElapsed(
            (ICU_EftuInstanceType)(eHwType - ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw);
        /* PRQA S 4332,4393 -- */
    }
#endif
    else
    {
        // PRQA S 2013
    }
    return u32timeValue;
}

/**
 * @brief Get elasped time of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param  u32ChannelOfHw               the hardware channel
 *
 * @retrun the time value
 * @implements SWDESG_ICU_266
 */
ICU_TEXT_SECTION Icu_ValueType Icu_HW_GetHwMeasurementPeriodValue(Icu_HwType eHwType,
                                                                  uint32     u32ChannelOfHw)
{

    uint32 u32timeValue = 0;
    /* PRQA S 4332,4393,4332,4322 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4332:An expression of 'essentially signed' type (%1s) is being cast to
       enum type, '%2s'. 4393:A composite expression of 'essentially signed' type
       (%1s) is being cast to a different type category, '%2s'. 4332:An expression
       of 'essentially enum' type (%1s) is being cast to a different enum type,
       '%2s'. 4322:An expression of 'essentially enum' type (%1s) is being cast to
       a different enum type, '%2s'. REASON: The program will guarantee the
       legality of these type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
        u32timeValue = Icu_Ftu_HwGetTimeElapsed((Icu_FtuInstanceType)(eHwType),
                                                (uint8)u32ChannelOfHw);
#endif
    }
    else if (eHwType == ICU_HW_ISM)
    {
        u32timeValue = Icu_Ism_GetTimeElapsed((uint8)u32ChannelOfHw);
    }
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if (eHwType <= ICU_HW_EFTU_END)
    {
        u32timeValue = Icu_Eftu_Tim_HwGetPeriodElapsed(
            (ICU_EftuInstanceType)(eHwType - ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw);
    }
#endif
    else
    {
        // PRQA S 2013
        /*Do nothing*/
    }
    /* PRQA S 4332,4393,4332,4322 -- */
    return u32timeValue;
}
#endif /* ICU_SIGNAL_MEASUREMENT_API  || ICU_GET_DUTY_CYCLE_VALUES_API */

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Get hardware input level of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param pLevel            -Point to store the input level
 * @retval                  TRUE    The channel support get input level from
 * hardware
 * @retval                  FALSE   The channel do not support get input level
 * from hardware
 *
 * @implements SWDESG_ICU_098
 */
ICU_TEXT_SECTION boolean Icu_HW_GetInputLevel(Icu_HwType          eHwType,
                                              uint32              u32ChannelOfHw,
                                              Icu_InputLevelType *pLevel)
{
    boolean bSupport = FALSE;
    /* PRQA S 4322,4342,4394 ++ #Misra-C:2012: Rule-10.5 The value of an
       expression should not be cast to an inappropriate essential type.
       #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
       cast to a different essential type category or a wider essential type
            4322:An expression of 'essentially enum' type (%1s) is being cast to a
       different enum type, '%2s'. 4342:An expression of 'essentially unsigned'
       type (%1s) is being cast to enum type '%2s'. 4394:A composite expression of
       'essentially unsigned' type (%1s) is being cast to a different type
       category, '%2s'. REASON: The program will guarantee the legality of these
       type conversions.
    */
    if (eHwType <= ICU_HW_FTU_END)
    {
        bSupport = TRUE;
        *pLevel  = (Icu_InputLevelType)Icu_Ftu_GetInputLevel((Icu_FtuInstanceType)(eHwType),
                                                            (uint8)u32ChannelOfHw);
    }
    else if (eHwType <= ICU_HW_PORT_END)
    {
        boolean bInputLevel = Icu_Port_GetInputLevel(
            (Icu_PortInstanceType)((uint32)eHwType - (uint32)ICU_HW_PORT_START),
            (uint8)u32ChannelOfHw);
        bSupport = (boolean)TRUE;
        *pLevel  = (bInputLevel == (boolean)TRUE) ? ICU_INPUT_HIGH : ICU_INPUT_LOW;
    }
#if (ICU_SUPPORT_CMP == STD_ON)
    else if ((eHwType <= ICU_HW_CMP_END) && (eHwType >= ICU_HW_CMP_START))
    {
        bSupport = (boolean)TRUE;

        *pLevel = (Icu_InputLevelType)Icu_Cmp_GetInputLevel(
            (Icu_CmpInstanceType)((uint32)eHwType - (uint32)ICU_HW_CMP_START));
    }
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    else if ((eHwType >= ICU_HW_TPU_START) && (eHwType <= ICU_HW_TPU_END))
    {
        bSupport = (boolean)TRUE;
        *pLevel  = (Icu_InputLevelType)Icu_Tpu_GetInputLevel(
            (Icu_TpuInstanceType)((uint32)eHwType - (uint32)ICU_HW_TPU_START),
            u32ChannelOfHw);
    }
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    else if ((eHwType <= ICU_HW_EFTU_END) && (eHwType >= ICU_HW_EFTU_START))
    {
        bSupport = (boolean)TRUE;
        *pLevel  = (Icu_InputLevelType)Icu_Eftu_Tim_GetInputLevel(
            (ICU_EftuInstanceType)((uint32)eHwType - (uint32)ICU_HW_EFTU_START),
            (uint8)u32ChannelOfHw);
    }
#endif
    else
    {
        /*For MISRA*/
    }
    /* PRQA S 4322,4342,4394 -- */
    return bSupport;
}
#endif
#if (ICU_GTB_SUPPORT == STD_ON)
/**
 * @brief Start the FTU GTB Function
 *
 * @param u32Group     -- FTU GTB Group.
 * */
ICU_TEXT_SECTION void Icu_HW_StartGTB(const uint32 u32Group)
{
    FtuCommon_ConfigGTB(u32Group, TRUE);
}

/**
 * @brief Stop the FTU GTB Function
 *
 * @param u32Group     -- FTU GTB Group.
 *
 * @implements SWDESG_ICU_243
 * */
ICU_TEXT_SECTION void Icu_HW_StopGTB(const uint32 u32Group)
{
    FtuCommon_ConfigGTB(u32Group, FALSE);
}
#endif

#if (ICU_TIMESTAMP_DMA == STD_ON)
/**
 * @brief Get the addr of the time stamp data source;
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 *
 * @implements SWDESG_ICU_107
 * */
ICU_TEXT_SECTION uint32 Icu_HW_GetSrcAddr(Icu_HwType eHwType, uint32 u32ChannelOfHw)
{
    uint32 u32SrcAddr = 0u;
    if (eHwType <= ICU_HW_FTU_END)
    {
        /* PRQA S 4322 ++ #Misra-C:2012: Rule-10.5 The value of an expression should
           not be cast to an inappropriate essential type. Reason: The relative
           register bits can be safely converted to the enumeration type */
        u32SrcAddr = Icu_Ftu_GetSrcAddr((Icu_FtuInstanceType)(eHwType), (uint8)u32ChannelOfHw);
        /* PRQA S 4322 -- */
    }
    else
    {
        /*Do nothing*/
    }
    return u32SrcAddr;
}
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
