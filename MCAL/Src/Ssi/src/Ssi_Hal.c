/**
 *   @file    SSI_Hal.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD SSI - SSI Driver HAL layer source file.
 *   @details Contains functions for accessing SSI from the SSI driver perspective
 *
 *   @addtogroup SSI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SSI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2025-2027 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       2025/03/18    Flagchip054   N/A           SSI Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==============================================================================================================
*                                        INCLUDE FILES
==============================================================================================================*/
#include "CDD_Ssi.h"
#include "CDD_Ssi_Cfg.h"
#include "Ssi_HWA.h"
#include "Ssi_Hal.h"
#include "Mcal.h"
/* FUNC_Ssi_00035 */
#if ((SSI_DEV_ERROR_DETECT == STD_ON) || (SSI_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif

/*==============================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==============================================================================================================*/

/*==============================================================================================================
*                                       LOCAL MACROS
==============================================================================================================*/
#define SSI_CMP_WAIT_MAX_TIMER 0x10000UL

/*==============================================================================================================
*                                      LOCAL CONSTANTS
==============================================================================================================*/

#define SSI_START_SEC_CONST_UNSPECIFIED
#include "Ssi_MemMap.h"

SSI_DATA_SECTION static SSI_Type *const aSSI_Base[] = SSI_BASE_PTRS;

#define SSI_STOP_SEC_CONST_UNSPECIFIED
#include "Ssi_MemMap.h"

/*==============================================================================================================
*                                      LOCAL VARIABLES
==============================================================================================================*/
#define SSI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

SSI_DATA_SECTION static const Ssi_ConfigType *s_pSSIHal_pConfigCurrent;

#define SSI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

/*==============================================================================================================
*                                      GLOBAL CONSTANTS
==============================================================================================================*/

/*==============================================================================================================
*                                      GLOBAL VARIABLES
==============================================================================================================*/
#define SSI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

/* FUNC_Ssi_00039  FUNC_Ssi_00040 */
SSI_DATA_SECTION Ssi_NotifactionType aSsiNotifcation[SSI_INSTANCE_COUNT][SSI_SUBINS_COUNT];
SSI_DATA_SECTION SsiHw_Status        aSsiHwStatus[SSI_INSTANCE_COUNT];

#define SSI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

#define SSI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

SSI_DATA_SECTION uint8  s_SSI_PreStop[SSI_INSTANCE_COUNT] = { 0 };
SSI_DATA_SECTION uint32 s_SSI_PreWhl[SSI_INSTANCE_COUNT]  = { 0 };

#define SSI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

/*==============================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==============================================================================================================*/
#define SSI_START_SEC_CODE
#include "Ssi_MemMap.h"

SSI_TEXT_SECTION static Ssi_ReturnType Ssi_AB_GetHwSSISubinstance(uint8  u8InstanceID,
                                                                  uint8  u8SubinstanceID,
                                                                  uint8 *pInstanceIndex,
                                                                  uint8 *pSubInstanceIndex);

SSI_TEXT_SECTION static void Ssi_LL_Subinstance_DeInit(
    const uint8                      u8HwInstance,
    const Ssi_SubinstanceConfigType *pSubInstanceConfig);

SSI_TEXT_SECTION static void Ssi_LL_Subinstance_Init(
    const uint8                      u8HwInstance,
    const Ssi_SubinstanceConfigType *pSubInstanceConfig);

SSI_TEXT_SECTION static void Ssi_HL_Instance_Init(const Ssi_InstanceConfigType *pInstanceConfig);

SSI_TEXT_SECTION static void Ssi_HL_Instance_DeInit(const Ssi_InstanceConfigType *pInstanceConfig);

SSI_TEXT_SECTION static void Ssi_HL_GetMessage(const uint8 u8Instance, const uint8 u8SubInstance);

/*================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/
/**
 * @brief Get controller physical index from control id and Subinstance id in EB
 *
 * @param[in]    u8InstanceID      The ssi controller ID
 * @param[in]    u8SubinstanceID       The ssi Subinstance ID
 * @param[out]   pInstanceIndex    The pointer of ssi controller physical index
 * @param[out]   pSubinstanceIndex     The pointer of ssi Subinstance physical index
 *
 * @return void
 *
 * SWDESG_SSI_012
 *
 */
SSI_TEXT_SECTION static Ssi_ReturnType Ssi_AB_GetHwSSISubinstance(uint8  u8InstanceID,
                                                                  uint8  u8SubinstanceID,
                                                                  uint8 *pInstanceIndex,
                                                                  uint8 *pSubInstanceIndex)
{
    uint8                   u8Index1;
    uint8                   u8Index2;
    Ssi_InstanceConfigType *pSSIInstance = NULL_PTR;
    Ssi_ReturnType          eRet         = SSI_NOT_OK;

    for (u8Index1 = 0U; u8Index1 < s_pSSIHal_pConfigCurrent->u8InstanceCount; u8Index1++)
    {
        if (u8InstanceID == s_pSSIHal_pConfigCurrent->pSSIInstanceCfg[u8Index1]->u8InstanceLogicIndex)
        {
            pSSIInstance = s_pSSIHal_pConfigCurrent->pSSIInstanceCfg[u8Index1];
            *pInstanceIndex = s_pSSIHal_pConfigCurrent->pSSIInstanceCfg[u8Index1]->u8InstanceHwIndex;
            for (u8Index2 = 0U; u8Index2 < pSSIInstance->u8SubInstanceCount; u8Index2++)
            {
                if (u8SubinstanceID ==
                    pSSIInstance->pSSISubInstanceCfg[u8Index2]->u8SubInstanceLogicId)
                {
                    *pSubInstanceIndex = pSSIInstance->pSSISubInstanceCfg[u8Index2]->u8SubInstanceHwId;
                    eRet = SSI_OK;
                    break;
                }
            }
            break;
        }
    }

    return eRet;
}

/**
 * @brief Initialize the SPC mode configuration.
 *
 * @param[in]    pSSI             The Pointer of the CAN instance register structure
 * @param[in]    u8SubinstanceID       The ssi Subinstance physical index
 * @param[in]    pSubinstanceConfig    The pointer of ssi SPC configuration structure
 *
 * @return void
 *
 * SWDESG_SSI_013
 */
SSI_TEXT_SECTION static void Ssi_LL_Subinstance_DeInit(
    const uint8                      u8HwInstance,
    const Ssi_SubinstanceConfigType *pSubInstanceConfig)
{
    uint8     u8SubInstance;
    SSI_Type *pSSI;

    u8SubInstance = pSubInstanceConfig->u8SubInstanceHwId;
    pSSI          = (SSI_Type *)aSSI_Base[u8HwInstance];

    SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_05();
    {
        SSI_HWA_SetSubinsFilterWidth(pSSI, u8SubInstance, 0U);
        SSI_HWA_SubinsFilter_Enable(pSSI, u8SubInstance);
        SSI_HWA_SetSubIcrReg(pSSI, u8SubInstance, 0U);
        SSI_HWA_SetSubIntReg(pSSI, u8SubInstance, 0);
        aSsiHwStatus[u8HwInstance].bSubinsEnable[u8SubInstance] = FALSE;
    }
    SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_05();
}

/**
 * @brief Initialize the ssi Subinstance configuration.
 *
 * @param[in]    u8HwInstance      The ssi controller physical index
 * @param[in]    pSubInstanceConfig    The pointer of ssi Subinstance configuration structure
 *
 * @return void
 *
 * SWDESG_SSI_014
 */
SSI_TEXT_SECTION static void Ssi_LL_Subinstance_Init(
    const uint8                      u8HwInstance,
    const Ssi_SubinstanceConfigType *pSubInstanceConfig)
{
    uint8     u8SubInstance;
    SSI_Type *pSSI;
    uint32    u32Tmp;

    u8SubInstance = pSubInstanceConfig->u8SubInstanceHwId;
    pSSI          = (SSI_Type *)aSSI_Base[u8HwInstance];
    if (TRUE == pSubInstanceConfig->bSubInstanceEn)
    {
        SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_03();
        {
            SSI_HWA_Subins_Disable(pSSI, (uint8)u8SubInstance);

            if (TRUE == pSubInstanceConfig->bFilterEn)
            {
                SSI_HWA_SetSubinsFilterWidth(pSSI,
                                             (uint8)u8SubInstance,
                                             pSubInstanceConfig->u32FiltWidth);
                SSI_HWA_SubinsFilter_Enable(pSSI, (uint8)u8SubInstance);
            }

            if (TRUE == pSubInstanceConfig->bInterruptEn)
            {
                SSI_HWA_SetSubIntReg(pSSI, (uint8)u8SubInstance, 0xDF);
            }

            u32Tmp = SSI_ICR_PROT_SEL((uint32)(pSubInstanceConfig->eProtocolMode));
            u32Tmp |= SSI_ICR_CHL_SEL((uint32)(pSubInstanceConfig->eChnlSelect));
#if (SSI_SUBINS_ANA_SUPPORT == STD_ON)
            if (SSI_INTERNAL_CMP == pSubInstanceConfig->eChnlSelect)
            {
                u32Tmp |= SSI_ICR_RES_SEL((uint32)(pSubInstanceConfig->eResSelect));
                u32Tmp |= SSI_ICR_CMP_EN((uint32)(pSubInstanceConfig->bIntCmpEn));
            }
#endif
            if (SSI_AK != pSubInstanceConfig->eProtocolMode)
            {
                u32Tmp |= SSI_ICR_CHL_SW((uint32)(pSubInstanceConfig->eChnlSwitch));
            }

            if (TRUE == pSubInstanceConfig->bWindowsRangeCheck)
            {
                u32Tmp |= SSI_ICR_RANG_CHK_EN(1);
            }

            if (TRUE == pSubInstanceConfig->bGpwmInv)
            {
                u32Tmp |= SSI_ICR_GPWM_INV(1);
            }
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant.
             * The value of the result is always that of the left-hand operand.
             * Reason: Performed Here Unavoidably.*/
            u32Tmp |= SSI_ICR_GPWM_TOC((uint32)(pSubInstanceConfig->u8GpwmToc));
            /* PRQA S 2985 -- */
            SSI_HWA_SetSubIcrReg(pSSI, (uint8)u8SubInstance, u32Tmp);
#if (SSI_SUBINS_ANA_SUPPORT == STD_ON)
            if (SSI_INTERNAL_CMP == pSubInstanceConfig->eChnlSelect)
            {
                uint32 u32TryCount = 0;
                while ((FALSE == SSI_HWA_GetIntCmpReadyFlag(pSSI, (uint8)u8SubInstance)) &&
                       (u32TryCount < SSI_CMP_WAIT_MAX_TIMER))
                {
                    u32TryCount++;
                }
                if (u32TryCount < SSI_CMP_WAIT_MAX_TIMER)
                {
                    SSI_HWA_Subins_Enable(pSSI, (uint8)u8SubInstance);
                    aSsiNotifcation[u8HwInstance][u8SubInstance] = pSubInstanceConfig->pNotification;
                    aSsiHwStatus[u8HwInstance].bSubinsEnable[u8SubInstance] = TRUE;
                }
                else
                {
                    /* FUNC_Ssi_00015  FUNC_Ssi_00016 SWDESG_SSI_015*/
#if (SSI_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                    (void)Det_ReportRuntimeError((uint16)SSI_MODULE_ID,
                                                 SSI_INSTANCE,
                                                 SSI_INIT_ID_U8,
                                                 SSI_E_TIMEOUT_U8);
#endif
                }
            }
            else
            {
#endif
                SSI_HWA_Subins_Enable(pSSI, (uint8)u8SubInstance);
                aSsiNotifcation[u8HwInstance][u8SubInstance] = pSubInstanceConfig->pNotification;
                aSsiHwStatus[u8HwInstance].bSubinsEnable[u8SubInstance] = TRUE;
#if (SSI_SUBINS_ANA_SUPPORT == STD_ON)
            }
#endif
        }
        SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_03();
    }
    else
    {
        SSI_HWA_Subins_Disable(pSSI, (uint8)u8SubInstance);
        aSsiHwStatus[u8HwInstance].bSubinsEnable[u8SubInstance] = FALSE;
    }
}

/**
 * @brief Initialize the ssi instance configuration.
 *
 * @param[in]    pInstanceConfig    The pointer of ssi instance configuration structure
 *
 * @return void
 *
 * SWDESG_SSI_016
 */
SSI_TEXT_SECTION static void Ssi_HL_Instance_Init(const Ssi_InstanceConfigType *pInstanceConfig)
{
    uint8     u8Index;
    uint8     u8HwInstance = pInstanceConfig->u8InstanceHwIndex;
    uint32    u32Tmp;
    SSI_Type *pSSI = (SSI_Type *)aSSI_Base[u8HwInstance];

    if (TRUE == pInstanceConfig->bControllerEn)
    {
        SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_00();
        {
            u32Tmp = 0;
            u32Tmp |= SSI_GPCR_AK_IETH((uint32)(pInstanceConfig->u8AkIeth));
            u32Tmp |= SSI_GPCR_AK_PETH((uint32)(pInstanceConfig->u8AkPeth));
            u32Tmp |= SSI_GPCR_PWM_PETH((uint32)(pInstanceConfig->u8PwmPeth));
            u32Tmp |= SSI_GPCR_REF_WIDTH((uint32)(pInstanceConfig->u8RefWidth));
            SSI_HWA_SetGlobalPreScaler(pSSI, (uint8)(pInstanceConfig->u8DivClock - (uint8)(1U)));
            SSI_HWA_SetGlobalProCfg(pSSI, u32Tmp);
            SSI_HWA_SetGlobalCounterWindowsL(pSSI, pInstanceConfig->u32LowGlobalCounterWindows);
            SSI_HWA_SetGlobalCounterWindowsH(pSSI, pInstanceConfig->u32HighGlobalCounterWindows);
        }
        SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_00();

        for (u8Index = 0U; u8Index < pInstanceConfig->u8SubInstanceCount; u8Index++)
        {
            Ssi_LL_Subinstance_Init(u8HwInstance, pInstanceConfig->pSSISubInstanceCfg[u8Index]);
        }

        SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_01();
        {
            SSI_HWA_Func_Enable(pSSI);
            aSsiHwStatus[u8HwInstance].bInsEnable = TRUE;
        }
        SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_01();
    }
    else
    {
        SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_02();
        {
            SSI_HWA_Func_Disable(pSSI);
            aSsiHwStatus[u8HwInstance].bInsEnable = FALSE;
        }
        SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_02();
    }
}

/**
 * @brief De-Initialize the ssi instance configuration.
 *
 * @param[in]    pInstanceConfig    The pointer of ssi instance configuration structure
 *
 * @return void
 *
 * SWDESG_SSI_017
 */
SSI_TEXT_SECTION static void Ssi_HL_Instance_DeInit(const Ssi_InstanceConfigType *pInstanceConfig)
{
    uint8 u8Index;

    uint8     u8HwInstance = pInstanceConfig->u8InstanceHwIndex;
    SSI_Type *pSSI         = (SSI_Type *)aSSI_Base[u8HwInstance];

    for (u8Index = 0U; u8Index < pInstanceConfig->u8SubInstanceCount; u8Index++)
    {
        Ssi_LL_Subinstance_DeInit(u8HwInstance, pInstanceConfig->pSSISubInstanceCfg[u8Index]);
    }

    SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_04();
    {
        /* FUNC_Ssi_00025 */
        SSI_HWA_Func_Disable(pSSI);
        SSI_HWA_SetGlobalPreScaler(pSSI, 0U);
        SSI_HWA_SetGlobalCounterWindowsL(pSSI, 0U);
        SSI_HWA_SetGlobalCounterWindowsH(pSSI, 0xFFFFFFU);
        aSsiHwStatus[u8HwInstance].bInsEnable = FALSE;
    }
    SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_04();
}

/**
 * @brief Get the ssi message
 *
 * @param[in]    u8InstanceID      The ssi controller ID
 * @param[in]    u8SubinstanceID       The ssi Subinstance ID
 *
 * @return void
 */
SSI_TEXT_SECTION static void Ssi_HL_GetMessage(const uint8 u8Instance, const uint8 u8SubInstance)
{
    uint8               u8HwInstance;
    uint8               u8HwSubInstance;
    uint32              u32Tmp;
    uint32              u32State;
    SSI_Type           *pSSI;
    Ssi_ReturnType      eRet;
    Ssi_MessageDataType tInf = { 0U };

    eRet = Ssi_AB_GetHwSSISubinstance(u8Instance, u8SubInstance, &u8HwInstance, &u8HwSubInstance);

    if (SSI_OK == eRet)
    {
        pSSI = (SSI_Type *)aSSI_Base[u8HwInstance];

        SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_06();
        u32State = SSI_HWA_GetReadyFlag(pSSI, u8HwSubInstance);
        SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_06();
        /* SWDESG_SSI_018 */
        if (0U != u32State)
        {
            SSI_HWA_ClearReadyFlag(pSSI, u8HwSubInstance);
            if ((aSsiHwStatus[u8HwInstance].bInsEnable == TRUE) &&
                (aSsiHwStatus[u8HwInstance].bSubinsEnable[u8HwSubInstance] == TRUE))
            {
                tInf.u8Subidx = u8SubInstance;
                if ((u32State & SSI_ISR_SPC_VLD(1)) == SSI_ISR_SPC_VLD(1))
                {
                    u32Tmp = SSI_HWA_GetSensorProtocolCnt(pSSI, u8HwSubInstance);
                    if (s_SSI_PreStop[u8HwSubInstance] == 1U)
                    {
                        tInf.U32Whlval = s_SSI_PreWhl[u8HwSubInstance] + u32Tmp;
                    }
                    else
                    {
                        tInf.U32Whlval = u32Tmp;
                    }
                    s_SSI_PreWhl[u8HwSubInstance] = u32Tmp;

                    if ((u32State & SSI_ISR_WHL_STOP(1)) == SSI_ISR_WHL_STOP(1))
                    {
                        tInf.u8Status                  = 1U << SSI_STOP_BIT;
                        s_SSI_PreStop[u8HwSubInstance] = 1U;
                    }
                    else
                    {
                        tInf.u8Status                  = 1U << SSI_NORMAL_BIT;
                        s_SSI_PreStop[u8HwSubInstance] = 0U;
                    }
                }
                else
                {
                    tInf.u8Status = 1U << SSI_TIMEOUT_ERR_BIT;
                    if ((u32State & SSI_ISR_SPC_TIMEOUT_ERR(1)) == SSI_ISR_SPC_TIMEOUT_ERR(1))
                    {
                        tInf.u8Status |= 1U << SSI_PROTCOAL_ERR_BIT;
                    }
                    else
                    {
                        if ((u32State & SSI_ISR_SPC_RANGE_ERR(1)) == SSI_ISR_SPC_RANGE_ERR(1))
                        {
                            tInf.u8Status |= (1U << SSI_SPC_RANGE_ERR_BIT);
                        }
                        else if ((u32State & SSI_ISR_DECODE_ERR(1)) == SSI_ISR_DECODE_ERR(1))
                        {
                            tInf.u8Status |= (1U << SSI_DECODE_ERR_BIT);
                        }
                        else if ((u32State & SSI_ISR_INTERVAL_ERR(1)) == SSI_ISR_INTERVAL_ERR(1))
                        {
                            tInf.u8Status |= (1U << SSI_INTERVAL_ERR_BIT);
                        }
                        else
                        {
                            tInf.u8Status |= (1U << SSI_PULSE_WIDTH_ERR_BIT);
                        }
                    }
                }
                /* SWDESG_SSI_018 */
                SchM_Enter_SSI_SSI_EXCLUSIVE_AREA_07();
                tInf.u8Prot = SSI_HWA_GetSubinsProtSel(pSSI, u8HwSubInstance);
                SchM_Exit_SSI_SSI_EXCLUSIVE_AREA_07();
                switch (tInf.u8Prot)
                {
                    case SSI_NORMAL:
                        tInf.u32Date1 = 0U;
                        tInf.u32Date2 = 0U;
                        break;
                    case SSI_PWM:
                        tInf.u32Date1 = SSI_HWA_GetPwmDecodeVal(pSSI, u8HwSubInstance);
                        tInf.u32Date2 = 0U;
                        break;
                    case SSI_GPWM:
                        tInf.u32Date1 = SSI_HWA_GetHighPulseCnt(pSSI, u8HwSubInstance);
                        tInf.u32Date2 = 0U;
                        break;
                    case SSI_AK:
                        tInf.u32Date1 = SSI_HWA_GetAkManDecodeCnt(pSSI, u8HwSubInstance);
                        tInf.u32Date2 = SSI_HWA_GetAkMancodeVal(pSSI, u8HwSubInstance);
                        break;
                    default:
                        /* do nothing */
                        break;
                }
                aSsiNotifcation[u8HwInstance][u8HwSubInstance](&tInf);
            }
        }
    }
}

/*================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/
/**
 * @brief Initialize the ssi.
 *
 * @param[in]    pConfig          The pointer of ssi configuration structure
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 *
 * FUNC_Ssi_00019 SWDESG_SSI_019
 *
 *
 */
SSI_TEXT_SECTION void Ssi_Hal_Init(const Ssi_ConfigType *pConfig, uint8 u8CurrentCore)
{
    uint8 u8CtrlIndex;

    /* Loop through all SSI controllers configured based SSIControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < pConfig->u8InstanceCount; u8CtrlIndex++)
    {
#if (SSI_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == pConfig->SSI_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* SSI_SUPPORT_MULTICORE */
            Ssi_HL_Instance_Init(pConfig->pSSIInstanceCfg[u8CtrlIndex]);

#if (SSI_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* SSI_SUPPORT_MULTICORE */
    }
    s_pSSIHal_pConfigCurrent = pConfig;
}

#if (SSI_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the ssi.
 *
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 *
 * SWDESG_SSI_020
 *
 */
SSI_TEXT_SECTION void Ssi_Hal_DeInit(uint8 u8CurrentCore)
{
    uint8 u8CtrlIndex;

    /* Loop through all SSI controllers configured based SSIControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < s_pSSIHal_pConfigCurrent->u8InstanceCount; u8CtrlIndex++)
    {
#if (SSI_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == s_pSSIHal_pConfigCurrent->SSI_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* SSI_SUPPORT_MULTICORE */

            Ssi_HL_Instance_DeInit(s_pSSIHal_pConfigCurrent->pSSIInstanceCfg[u8CtrlIndex]);

#if (SSI_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* SSI_SUPPORT_MULTICORE */
    }
    /* s_pSSIHal_pConfigCurrent = NULL_PTR; */
}
#endif /* SSI_DEINIT_API */

/**
 * @brief Main function for polling the message.
 *
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 *
 * FUNC_Ssi_00021
 */
SSI_TEXT_SECTION void Ssi_Hal_MainFunctionMsgRead(uint8 u8CurrentCore)
{
    uint8                   u8CtrlIndex;
    uint8                   u8SubInstanceIndex;
    Ssi_InstanceConfigType *pInstanceCfg;

    /* Loop through all SSI controllers configured based SSIControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < s_pSSIHal_pConfigCurrent->u8InstanceCount; u8CtrlIndex++)
    {
#if (SSI_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == s_pSSIHal_pConfigCurrent->SSI_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* SSI_SUPPORT_MULTICORE */
            pInstanceCfg = s_pSSIHal_pConfigCurrent->pSSIInstanceCfg[u8CtrlIndex];
            for (u8SubInstanceIndex = 0U; u8SubInstanceIndex < pInstanceCfg->u8SubInstanceCount;
                 u8SubInstanceIndex++)
            {
                /* FUNC_Ssi_00034 SWDESG_SSI_009 */
                if (FALSE == pInstanceCfg->pSSISubInstanceCfg[u8SubInstanceIndex]->bInterruptEn)
                {
                    Ssi_HL_GetMessage(
                        pInstanceCfg->u8InstanceLogicIndex,
                        pInstanceCfg->pSSISubInstanceCfg[u8SubInstanceIndex]->u8SubInstanceLogicId);
                }
            }

#if (SSI_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* SSI_SUPPORT_MULTICORE */
    }
}

#define SSI_STOP_SEC_CODE
#include "Ssi_MemMap.h"

#ifdef __cplusplus
}
#endif
