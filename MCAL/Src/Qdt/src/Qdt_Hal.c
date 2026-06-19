/**
 *   @file    Qdt_Hal.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD QDT - QDT Driver HAL layer source file.
 *   @details Contains functions for accessing QDT from the Qdt driver perspective
 *
 *   @addtogroup QDT
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : QDT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2025 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       2025/03/12    Flagchip073   N/A          QDT Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==============================================================================================================
*                                        INCLUDE FILES
==============================================================================================================*/
#include "CDD_Qdt.h"
#include "Qdt_Hal.h"
#include "CDD_QDT_Cfg.h"
#include "Qdt_HWA.h"
#include "Mcal.h"
#include "SchM_Qdt.h"
/*==============================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==============================================================================================================*/

/*==============================================================================================================
*                                       LOCAL MACROS
==============================================================================================================*/

/*==============================================================================================================
*                                      LOCAL CONSTANTS
==============================================================================================================*/

#define QDT_START_SEC_CONST_UNSPECIFIED
#include "Qdt_MemMap.h"

QDT_DATA_SECTION static QDT_Type *const aQdt_Base[] = QDT_BASE_PTRS;

#define QDT_STOP_SEC_CONST_UNSPECIFIED
#include "Qdt_MemMap.h"

#define QDT_START_SEC_CONST_8
#include "Qdt_MemMap.h"

#define QDT_STOP_SEC_CONST_8
#include "Qdt_MemMap.h"

#define QDT_START_SEC_CONST_32
#include "Qdt_MemMap.h"

#define QDT_STOP_SEC_CONST_32
#include "Qdt_MemMap.h"

/*==============================================================================================================
*                                      LOCAL VARIABLES
==============================================================================================================*/
#define QDT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

QDT_DATA_SECTION static const QDT_ConfigType *s_pQdtHal_pConfigCurrent;

#define QDT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

/*==============================================================================================================
*                                      GLOBAL CONSTANTS
==============================================================================================================*/

/*==============================================================================================================
*                                      GLOBAL VARIABLES
==============================================================================================================*/
#define QDT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

QDT_DATA_SECTION QDT_CallbackType aTOFNotifcation[QDT_INSTANCE_COUNT];

QDT_DATA_SECTION QDT_CallbackType aWdogNotifcation[QDT_INSTANCE_COUNT];

QDT_DATA_SECTION QDT_CallbackType aChannelNotifcation[QDT_INSTANCE_COUNT][QDT_CHANNEL_COUNT];

#define QDT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

#define QDT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

#define QDT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

/*==============================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==============================================================================================================*/
#define QDT_START_SEC_CODE
#include "Qdt_MemMap.h"

QDT_TEXT_SECTION static void Qdt_AB_EnableWrtieProtection(QDT_Type *pQdt, boolean bEnable);

QDT_TEXT_SECTION static QDT_ReturnType Qdt_AB_GetHwQdtChannel(uint8  u8InstanceID,
                                                              uint8  u8ChannelID,
                                                              uint8 *pInstanceIndex,
                                                              uint8 *pChannelIndex);

QDT_TEXT_SECTION static QDT_ReturnType Qdt_AB_GetHwQdtInstance(uint8  u8InstanceID,
                                                               uint8 *pInstanceIndex);

QDT_TEXT_SECTION static void Qdt_HL_Instance_Init(const QDT_InstanceConfigType *pInstanceConfig);

#if (QDT_DEINIT_API == STD_ON)
QDT_TEXT_SECTION static void Qdt_HL_Instance_DeInit(const QDT_InstanceConfigType *pInstanceConfig);
#endif

QDT_TEXT_SECTION static void Qdt_ML_Channel_Init(uint8                        u8HwInstance,
                                                 const QDT_ChannelConfigType *pChannelConfig);

#if (QDT_DEINIT_API == STD_ON)
QDT_TEXT_SECTION static void Qdt_LL_Channel_DeInit(QDT_Type                    *pQdt,
                                                   const QDT_ChannelConfigType *pChannelConfig);
#endif

QDT_TEXT_SECTION static void Qdt_LL_ICDM_Init(QDT_Type                    *pQdt,
                                              const QDT_ChannelConfigType *pChannelConfig);

QDT_TEXT_SECTION static void Qdt_LL_ICPM_Init(QDT_Type                    *pQdt,
                                              const QDT_ChannelConfigType *pChannelConfig);

QDT_TEXT_SECTION static void Qdt_LL_ICENM_Init(QDT_Type                    *pQdt,
                                               const QDT_ChannelConfigType *pChannelConfig);

QDT_TEXT_SECTION static void Qdt_LL_ICEXPENM_Init(QDT_Type                    *pQdt,
                                                  const QDT_ChannelConfigType *pChannelConfig);

QDT_TEXT_SECTION static void Qdt_LL_IC_Init(QDT_Type                    *pQdt,
                                            const QDT_ChannelConfigType *pChannelConfig);

QDT_TEXT_SECTION static void Qdt_LL_QUAD_Init(QDT_Type                    *pQdt,
                                              const QDT_ChannelConfigType *pChannelConfig);

/*================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/
/**
 * @brief Enable or disable the write protection for QDT registers.
 *
 * @param pQdt The address QDT instance layout
 * @param bEnable TRUE means enable, FALSE means disable
 *
 * @return void
 */
static void Qdt_AB_EnableWrtieProtection(QDT_Type *pQdt, boolean bEnable)
{
    if (TRUE == bEnable)
    {
        QDT_HWA_EnableWP(pQdt);
    }
    else
    {
        QDT_HWA_DisableWP(pQdt);
    }
}

/**
 * @brief Get controller physical index from control id and channel id in EB
 *
 * @param[in]    u8InstanceID      The qdt controller ID
 * @param[in]    u8ChannelID       The qdt channel ID
 * @param[out]   pInstanceIndex    The pointer of qdt controller physical index
 * @param[out]   pChannelIndex     The pointer of qdt channel physical index
 *
 * @return void
 */
QDT_TEXT_SECTION static QDT_ReturnType Qdt_AB_GetHwQdtChannel(uint8  u8InstanceID,
                                                              uint8  u8ChannelID,
                                                              uint8 *pInstanceIndex,
                                                              uint8 *pChannelIndex)
{
    uint8                   u8Index1, u8Index2;
    QDT_InstanceConfigType *pQdtInstance = NULL_PTR;
    QDT_ReturnType          eRet         = QDT_RETURN_E_PARAM;

    for (u8Index1 = 0U; u8Index1 < s_pQdtHal_pConfigCurrent->u8InstanceCount; u8Index1++)
    {
        if (u8InstanceID == s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8Index1]->u8InstanceLogicID)
        {
            pQdtInstance    = s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8Index1];
            *pInstanceIndex = pQdtInstance->u8InstanceHwIndex;
            for (u8Index2 = 0U; u8Index2 < pQdtInstance->u8ChannelCount; u8Index2++)
            {
                if (u8ChannelID == pQdtInstance->pQdtChannelCfg[u8Index2]->u8LogicChannelID)
                {
                    *pChannelIndex = pQdtInstance->pQdtChannelCfg[u8Index2]->u8HwChannelIndex;
                    eRet           = QDT_RETURN_OK;
                    break;
                }
            }
            break;
        }
    }

    return eRet;
}

/**
 * @brief Get controller physical instance index from control id  in EB
 *
 * @param[in]    u8InstanceID      The qdt controller ID
 * @param[out]   pInstanceIndex    The pointer of qdt controller physical index
 *
 * @return void
 */
QDT_TEXT_SECTION static QDT_ReturnType Qdt_AB_GetHwQdtInstance(uint8  u8InstanceID,
                                                               uint8 *pInstanceIndex)
{
    uint8          u8Index;
    QDT_ReturnType eRet = QDT_RETURN_E_PARAM;

    for (u8Index = 0U; u8Index < s_pQdtHal_pConfigCurrent->u8InstanceCount; u8Index++)
    {
        if (u8InstanceID == s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8Index]->u8InstanceLogicID)
        {
            *pInstanceIndex = s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8Index]->u8InstanceHwIndex;
            eRet            = QDT_RETURN_OK;
            break;
        }
    }

    return eRet;
}

#if (QDT_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the Qdt channel configuration.
 *
 * @param[in]    pQdt             The Pointer of the CAN instance register structure
 * @param[in]    u8ChannelID       The qdt channel physical index
 * @param[in]    pChannelConfig    The pointer of qdt SPC configuration structure
 *
 * @return void
 */
QDT_TEXT_SECTION static void Qdt_LL_Channel_DeInit(QDT_Type                    *pQdt,
                                                   const QDT_ChannelConfigType *pChannelConfig)
{
    uint8 u8Channel;

    u8Channel = pChannelConfig->u8HwChannelIndex;

    SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_12();
    {
        /* [SWS_Qdt_00037] [SWDES_Qdt_0034] */
        /* disable channel function */
        QDT_HWA_ClearCSC(pQdt, u8Channel);
    }
    SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_12();
}
#endif

/**
 * @brief Initialize the ICEXPENM mode configuration.
 *
 * @param[in]    pQdt              The pointer of QDT instance
 * @param[in]    pChannelConfig    The pointer of qdt channel configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_LL_ICEXPENM_Init(QDT_Type                    *pQdt,
                                                  const QDT_ChannelConfigType *pChannelConfig)
{
    uint8 u8Channel;

    u8Channel = pChannelConfig->u8HwChannelIndex;

    /* configure the ICEXPENM mode */
    QDT_HWA_SetICM_CONT(pQdt,
                        u8Channel,
                        (TRUE == pChannelConfig->uMode.pICEXPENMConfig->bContinueMeasure) ? 1u : 0u);
    QDT_HWA_SetPHXPOL(pQdt, u8Channel, 0u);
    QDT_HWA_SetICEXP_NUM_ICM_ECNT(pQdt,
                                  (uint8)(u8Channel + 1u),
                                  pChannelConfig->uMode.pICEXPENMConfig->u8ExpectedNum);
    /* channel interrupt */
    QDT_HWA_SetCHIE(pQdt, u8Channel, (TRUE == pChannelConfig->bEnChannelInt) ? 1u : 0u);
    if (QDT_CAPTURE_RISING_EDGE == pChannelConfig->uMode.pICEXPENMConfig->eEdge)
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 0u);
    }
    else if (QDT_CAPTURE_FALLING_EDGE ==
             pChannelConfig->uMode.pICEXPENMConfig->eEdge)    // capture falling edge
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 0u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 1u);
    }
    else /* both edge */
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 1u);
    }
    QDT_HWA_SetICM_MODE(pQdt, u8Channel, 4u); /* ICEXPENM */

    return;
}

/**
 * @brief Initialize the ICENM mode configuration.
 *
 * @param[in]    pQdt              The pointer of QDT instance
 * @param[in]    pChannelConfig    The pointer of qdt channel configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_LL_ICENM_Init(QDT_Type                    *pQdt,
                                               const QDT_ChannelConfigType *pChannelConfig)
{
    uint8 u8Channel;

    u8Channel = pChannelConfig->u8HwChannelIndex;

    /* configure the ICENM mode */
    QDT_HWA_SetICM_MODE(pQdt, u8Channel, 7u); /*  ICENM_WIND_WRITE */
    QDT_HWA_SetCV(pQdt, u8Channel, pChannelConfig->uMode.pICENMConfig->u32StartPoint);
    QDT_HWA_SetCV(pQdt, (uint8)(u8Channel + 1u), pChannelConfig->uMode.pICENMConfig->u32EndPoint);
    QDT_HWA_SetICM_CONT(pQdt,
                        u8Channel,
                        (TRUE == pChannelConfig->uMode.pICENMConfig->bContinueMeasure) ? 1u : 0u);
    QDT_HWA_SetPHXPOL(pQdt, u8Channel, 0u);
    /* channel interrupt */
    QDT_HWA_SetCHIE(pQdt, u8Channel, (TRUE == pChannelConfig->bEnChannelInt) ? 1u : 0u);
    if (QDT_CAPTURE_RISING_EDGE == pChannelConfig->uMode.pICENMConfig->eEdge)
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 0u);
    }
    else if (QDT_CAPTURE_FALLING_EDGE ==
             pChannelConfig->uMode.pICENMConfig->eEdge)    // capture falling edge
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 0u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 1u);
    }
    else /* both edge */
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 1u);
    }
    QDT_HWA_SetICM_MODE(pQdt, u8Channel, 3u); /* ICENM */

    return;
}

/**
 * @brief Initialize the ICPM mode configuration.
 *
 * @param[in]    pQdt              The pointer of QDT instance
 * @param[in]    pChannelConfig    The pointer of qdt channel configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_LL_ICPM_Init(QDT_Type                    *pQdt,
                                              const QDT_ChannelConfigType *pChannelConfig)
{
    uint8 u8Channel;

    u8Channel = pChannelConfig->u8HwChannelIndex;

    /* configure the ICPM mode */
    QDT_HWA_SetICM_CONT(pQdt,
                        u8Channel,
                        (TRUE == pChannelConfig->uMode.pICPMConfig->bContinueMeasure) ? 1u : 0u);
    QDT_HWA_SetICDPM_START(pQdt,
                           u8Channel,
                           (TRUE == pChannelConfig->uMode.pICPMConfig->bStartWIthActive) ? 1u : 0u);
    QDT_HWA_SetPHXPOL(pQdt, u8Channel, 0u);
    /* channel interrupt */
    QDT_HWA_SetCHIE(pQdt, u8Channel, (TRUE == pChannelConfig->bEnChannelInt) ? 1u : 0u);
    if (QDT_CAPTURE_RISING_EDGE == pChannelConfig->uMode.pICPMConfig->eEdge)
    {
        /* even channel */
        QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 0u);
        /* odd channel */
        QDT_HWA_SetICM_MODE(pQdt, u8Channel, 2u); /* ICPM */
    }
    else if (QDT_CAPTURE_FALLING_EDGE ==
             pChannelConfig->uMode.pICPMConfig->eEdge)    // capture falling edge
    {
        /* even channel */
        QDT_HWA_SetELSA(pQdt, u8Channel, 0u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 1u);
        /* odd channel */
        QDT_HWA_SetELSA(pQdt, (uint8)(u8Channel + 1u), 0u);
        QDT_HWA_SetELSB(pQdt, (uint8)(u8Channel + 1u), 0u);
        QDT_HWA_SetICM_MODE(pQdt, u8Channel, 2u); /* ICPM */
    }
    else
    {
        /* do nothing. */
    }

    return;
}

/**
 * @brief Initialize the ICDM mode configuration.
 *
 * @param[in]    pQdt              The pointer of QDT instance
 * @param[in]    pChannelConfig    The pointer of qdt channel configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_LL_ICDM_Init(QDT_Type                    *pQdt,
                                              const QDT_ChannelConfigType *pChannelConfig)
{
    uint8 u8Channel;

    u8Channel = pChannelConfig->u8HwChannelIndex;

    /* configure the ICDM mode */
    QDT_HWA_SetICM_CONT(pQdt,
                        u8Channel,
                        (TRUE == pChannelConfig->uMode.pICDMConfig->bContinueMeasure) ? 1u : 0u);
    QDT_HWA_SetICDPM_START(pQdt,
                           u8Channel,
                           (TRUE == pChannelConfig->uMode.pICDMConfig->bStartWIthActive) ? 1u : 0u);
    if (TRUE == pChannelConfig->uMode.pICDMConfig->bHighActive)
    {
        QDT_HWA_SetPHXPOL(pQdt, u8Channel, 1u);
        /* channel interrupt */
        QDT_HWA_SetCHIE(pQdt,
                        (uint8)(u8Channel + 1u),
                        (TRUE == pChannelConfig->bEnChannelInt) ? 1u : 0u);
    }
    else
    {
        QDT_HWA_SetPHXPOL(pQdt, u8Channel, 0u);
        /* channel interrupt */
        QDT_HWA_SetCHIE(pQdt, u8Channel, (TRUE == pChannelConfig->bEnChannelInt) ? 1u : 0u);
    }

    /* even channel */
    QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
    QDT_HWA_SetELSB(pQdt, u8Channel, 0u);
    /* odd channel */
    QDT_HWA_SetELSA(pQdt, (uint8)(u8Channel + 1u), 0u);
    QDT_HWA_SetELSB(pQdt, (uint8)(u8Channel + 1u), 1u);
    QDT_HWA_SetICM_MODE(pQdt, u8Channel, 1u); /* ICDM */

    return;
}

/**
 * @brief Initialize the QUAD mode configuration.
 *
 * @param[in]    pQdt              The pointer of QDT instance
 * @param[in]    pChannelConfig    The pointer of qdt channel configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_LL_QUAD_Init(QDT_Type                    *pQdt,
                                              const QDT_ChannelConfigType *pChannelConfig)
{
    uint8 u8Channel;

    u8Channel = pChannelConfig->u8HwChannelIndex;
    /* step1. Clear {ICM_MODE, ELSB, ELSA}) of PHA/B before enabling QUADEN. */
    QDT_HWA_SetQUADEN(pQdt, 0u);
    /* clear channel control register */
    QDT_HWA_ClearCSC(pQdt, u8Channel);
    /* step2. configure the QUAD */
    if (QDT_CHANNEL_MATCH_DISABLE == pChannelConfig->uMode.pQUADConfig->eMatchType)
    {
        QDT_HWA_SetCHTRIG(pQdt, u8Channel, 0u);
    }
    else
    {
        QDT_HWA_SetCHTRIG(pQdt, u8Channel, 1u);
        QDT_HWA_SetREVMODE(pQdt, u8Channel, pChannelConfig->uMode.pQUADConfig->eMatchType);
    }
    QDT_HWA_SetCV(pQdt, u8Channel, pChannelConfig->uMode.pQUADConfig->u32CV);
    if ((0u == u8Channel) || (1u == u8Channel))
    {
        QDT_HWA_SetPHXPOL(pQdt,
                          u8Channel,
                          (FALSE == pChannelConfig->uMode.pQUADConfig->bNormalPolarity) ? 1u : 0u);
    }
    QDT_HWA_SetCHIE(pQdt, u8Channel, (TRUE == pChannelConfig->bEnChannelInt) ? 1u : 0u);
    /* step3. enable quad mode */
    QDT_HWA_SetQUADEN(pQdt, 1u);

    return;
}

/**
 * @brief Initialize the IC mode configuration.
 *
 * @param[in]    pQdt              The pointer of QDT instance
 * @param[in]    pChannelConfig    The pointer of qdt channel configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_LL_IC_Init(QDT_Type                    *pQdt,
                                            const QDT_ChannelConfigType *pChannelConfig)
{
    uint8 u8Channel;

    u8Channel = pChannelConfig->u8HwChannelIndex;
    /* clear channel control register */
    QDT_HWA_ClearCSC(pQdt, u8Channel);
    /* reset the POSCNT */
    QDT_HWA_SetICRST(pQdt,
                     u8Channel,
                     (TRUE == pChannelConfig->uMode.pICConfig->bResetPOSCNT) ? 1u : 0u);
    /* channel interrupt */
    QDT_HWA_SetCHIE(pQdt, u8Channel, (TRUE == pChannelConfig->bEnChannelInt) ? 1u : 0u);
    /* Polarity. keep default(zero) */
    if (u8Channel < QDT_CHANNEL_3_HOME)
    {
        QDT_HWA_SetPHXPOL(pQdt, u8Channel, 0u);
    }
    QDT_HWA_SetICM_MODE(pQdt, u8Channel, 0u);
    /* configure which counter should be captured into CV register */
    QDT_HWA_SetREVMODE(pQdt,
                       u8Channel,
                       (TRUE == pChannelConfig->uMode.pICConfig->bFromRevCNT) ? 1u : 0u);
    /* configure the edge capture type */
    if (QDT_CAPTURE_RISING_EDGE == pChannelConfig->uMode.pICConfig->eEdge)
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 0u);
    }
    else if (QDT_CAPTURE_FALLING_EDGE == pChannelConfig->uMode.pICConfig->eEdge)
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 0u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 1u);
    }
    else /* QDT_CAPTURE_BOTH_EDGE */
    {
        QDT_HWA_SetELSA(pQdt, u8Channel, 1u);
        QDT_HWA_SetELSB(pQdt, u8Channel, 1u);
    }

    return;
}

/**
 * @brief Initialize the qdt channel configuration.
 *
 * @param[in]    u8HwInstance      The qdt controller physical index
 * @param[in]    pChannelConfig    The pointer of qdt channel configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_ML_Channel_Init(uint8                        u8HwInstance,
                                                 const QDT_ChannelConfigType *pChannelConfig)
{
    uint8     u8Channel;
    QDT_Type *pQdt;

    pQdt      = (QDT_Type *)aQdt_Base[u8HwInstance];
    u8Channel = pChannelConfig->u8HwChannelIndex;

    SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_01();
    /* disable the write protection */
    Qdt_AB_EnableWrtieProtection(pQdt, FALSE);
    /* configure the filer */
    QDT_HWA_SetPHXGFVAL(pQdt, u8Channel, pChannelConfig->u8InputFilter);
    SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_01();

    aChannelNotifcation[u8HwInstance][u8Channel] = pChannelConfig->pChannelCallback;
    if (QDT_CHANNEL_IC_MODE == pChannelConfig->eChannelMode)
    {
        SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_02();
        Qdt_LL_IC_Init(pQdt, pChannelConfig);
        SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_02();
    }
    else if (QDT_CHANNEL_NOT_USED == pChannelConfig->eChannelMode)
    {
        SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_03();
        /* clear channel control register */
        QDT_HWA_ClearCSC(pQdt, u8Channel);
        SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_03();

        aChannelNotifcation[u8HwInstance][u8Channel] = NULL_PTR;
    }
    else if (QDT_CHANNEL_QUAD_MODE == pChannelConfig->eChannelMode)
    {
        SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_04();
        Qdt_LL_QUAD_Init(pQdt, pChannelConfig);
        SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_04();
    }
    else /* ICM MODE */
    {
        if (0u == (u8Channel & 1u)) /* Even channel */
        {
            SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_05();
            /* clear channel pair control register */
            QDT_HWA_ClearCSC(pQdt, u8Channel);
            QDT_HWA_ClearCSC(pQdt, (uint8)(u8Channel + 1u));
            SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_05();

            if (QDT_CHANNEL_ICDM_MODE == pChannelConfig->eChannelMode)
            {
                SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_06();
                Qdt_LL_ICDM_Init(pQdt, pChannelConfig);
                SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_06();
            }
            else if (QDT_CHANNEL_ICPM_MODE == pChannelConfig->eChannelMode)
            {
                SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_07();
                Qdt_LL_ICPM_Init(pQdt, pChannelConfig);
                SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_07();
            }
            else if (QDT_CHANNEL_ICENM_MODE == pChannelConfig->eChannelMode)
            {
                SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_08();
                Qdt_LL_ICENM_Init(pQdt, pChannelConfig);
                SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_08();
            }
            else /* QDT_CHANNEL_ICEXPENM_MODE */
            {
                SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_09();
                Qdt_LL_ICEXPENM_Init(pQdt, pChannelConfig);
                SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_09();
            }
        }
    }

    SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_10();
    /* enable the write protection */
    Qdt_AB_EnableWrtieProtection(pQdt, TRUE);
    SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_10();

    return;
}

/**
 * @brief Initialize the qdt instance configuration.
 *
 * @param[in]    pInstanceConfig    The pointer of qdt instance configuration structure
 *
 * @return void
 * [SWS_Qdt_00029] [SWDES_Qdt_0026]
 * [SWS_Qdt_00030] [SWDES_Qdt_0027]
 * [SWS_Qdt_00031] [SWDES_Qdt_0028]
 */
QDT_TEXT_SECTION static void Qdt_HL_Instance_Init(const QDT_InstanceConfigType *pInstanceConfig)
{
    uint8     u8Index, u8HwInstance;
    QDT_Type *pQdt;

    u8HwInstance = pInstanceConfig->u8InstanceHwIndex;
    pQdt         = (QDT_Type *)aQdt_Base[u8HwInstance];

    SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_00();
    {
        /* disable the write protection */
        Qdt_AB_EnableWrtieProtection(pQdt, FALSE);
        /* select the clock source */
        if (QDT_CLOCK_INTERNAL_BUSCLK ==
            pInstanceConfig->eClkSrcSel) /* internal clock source from bus clock */
        {
            QDT_HWA_SetCLKS(pQdt, pInstanceConfig->eClkSrcSel);
        }
        else if (QDT_CLOCK_INTERNAL_PCCCLK ==
                 pInstanceConfig->eClkSrcSel) /* internal clock source from pcc clock */
        {
            QDT_HWA_SetEXTCLK_SEL(pQdt, 3u);
            QDT_HWA_SetCLKS(pQdt, 3u);
        }
        else /* external clock source */
        {
            QDT_HWA_SetCLKS(pQdt, 3u);
            QDT_HWA_SetEXTCLK_SEL(pQdt,
                                  (uint8)(pInstanceConfig->eClkSrcSel - QDT_CLOCK_EXTERNAL_TCLK0));
        }
        /* debug mode */
        QDT_HWA_SetDBG(pQdt, (TRUE == pInstanceConfig->bEnDebugMode) ? 1u : 0u);
        /* match trigger control */
        QDT_HWA_SetMTRIGCTRL(pQdt, (FALSE == pInstanceConfig->bEnMatchPulse) ? 1u : 0u);
        /* prescale setting */
        QDT_HWA_SetPS(pQdt, pInstanceConfig->eCounterPrescale);
        QDT_HWA_SetFLTPS(pQdt, pInstanceConfig->u8FilterPrescale);
        /* Timer overflow interrupt enable */
        QDT_HWA_SetTOIE(pQdt, (TRUE == pInstanceConfig->bEnTOFInt) ? 1u : 0u);
        aTOFNotifcation[u8HwInstance] = pInstanceConfig->pTOFCallback;
        /* quad mode */
        QDT_HWA_SetQUADMODE(pQdt, (FALSE == pInstanceConfig->bEnPHAPHBMode) ? 1u : 0u);
        /* wdog enable */
        QDT_HWA_SetWDOGEN(pQdt, (TRUE == pInstanceConfig->pWdgConfig->bEnWDOG) ? 1u : 0u);
        QDT_HWA_SetWDOGIE(pQdt, (TRUE == pInstanceConfig->pWdgConfig->bEnWDOGFInt) ? 1u : 0u);
        QDT_HWA_SetWDOGVAL(pQdt, pInstanceConfig->pWdgConfig->u16Timeout);
        aWdogNotifcation[u8HwInstance] = pInstanceConfig->pWdgConfig->pWDOGFCallback;
        /* sync mode */
        QDT_HWA_SetSYNCMODE(pQdt,
                            (TRUE == pInstanceConfig->pSyncModeConfig->bEnCVSyncTriggerMode) ? 1u :
                                                                                               0u);
        QDT_HWA_SetTRIG_UPHOLD(
            pQdt,
            (TRUE == pInstanceConfig->pSyncModeConfig->bEnHardTriggerUpdate) ? 1u : 0u);
        QDT_HWA_SetTRIG_RSTCNT(pQdt,
                               (TRUE == pInstanceConfig->pSyncModeConfig->bEnHardTriggerReset) ? 1u :
                                                                                                 0u);
        QDT_HWA_SetTRIG0(pQdt,
                         (TRUE == pInstanceConfig->pSyncModeConfig->bEnHardTriggerInput) ? 1u : 0u);
        QDT_HWA_SetSW_RSTCNT(pQdt,
                             (TRUE == pInstanceConfig->pSyncModeConfig->bEnSoftTriggerReset) ? 1u :
                                                                                               0u);
        /* enable the write protection */
        Qdt_AB_EnableWrtieProtection(pQdt, TRUE);
    }
    SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_00();

    for (u8Index = 0U; u8Index < pInstanceConfig->u8ChannelCount; u8Index++)
    {
        Qdt_ML_Channel_Init(u8HwInstance, pInstanceConfig->pQdtChannelCfg[u8Index]);
    }
}

#if (QDT_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the qdt instance configuration.
 *
 * @param[in]    pInstanceConfig    The pointer of qdt instance configuration structure
 *
 * @return void
 */
QDT_TEXT_SECTION static void Qdt_HL_Instance_DeInit(const QDT_InstanceConfigType *pInstanceConfig)
{
    uint8     u8Index, u8HwInstance;
    QDT_Type *pQdt;

    u8HwInstance = pInstanceConfig->u8InstanceHwIndex;
    pQdt         = (QDT_Type *)aQdt_Base[u8HwInstance];

    for (u8Index = 0U; u8Index < pInstanceConfig->u8ChannelCount; u8Index++)
    {
        Qdt_LL_Channel_DeInit(pQdt, pInstanceConfig->pQdtChannelCfg[u8Index]);
    }
    SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_11();
    {
        /* [SWS_Qdt_00035] [SWDES_Qdt_0032] */
        /* disable the write protection */
        Qdt_AB_EnableWrtieProtection(pQdt, FALSE);
        /* disable QUAD mode */
        QDT_HWA_SetQUADEN(pQdt, 0u);
        /* disable the clock */
        QDT_HWA_SetCLKS(pQdt, QDT_CLOCK_NONE);
        /* clear the flag */
        QDT_HWA_ClearWDOGF(pQdt);
        QDT_HWA_ClearCHNF(pQdt);
        QDT_HWA_ClearTOF(pQdt);
        /* disable watchdog */
        QDT_HWA_SetWDOGEN(pQdt, 0u);
        /* enable the write protection */
        Qdt_AB_EnableWrtieProtection(pQdt, TRUE);
    }
    SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_11();
}
#endif
/*================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/
/**
 * @brief Initialize the qdt.
 *
 * @param[in]    pConfig          The pointer of qdt configuration structure
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
QDT_TEXT_SECTION void QDT_Hal_Init(const QDT_ConfigType *pConfig, uint8 u8CurrentCore)
{
    uint8 u8CtrlIndex;

    /* Loop through all Qdt controllers configured based QdtControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < pConfig->u8InstanceCount; u8CtrlIndex++)
    {
#if (QDT_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == pConfig->Qdt_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */
            Qdt_HL_Instance_Init(pConfig->pQdtInstanceCfg[u8CtrlIndex]);
            s_pQdtHal_pConfigCurrent = pConfig;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* QDT_SUPPORT_MULTICORE */
    }
}

#if (QDT_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the qdt.
 *
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
QDT_TEXT_SECTION void QDT_Hal_DeInit(uint8 u8CurrentCore)
{
    uint8 u8CtrlIndex;

    /* Loop through all Qdt controllers configured based QdtControllerId parameter. */
    for (u8CtrlIndex = 0U; u8CtrlIndex < s_pQdtHal_pConfigCurrent->u8InstanceCount; u8CtrlIndex++)
    {
#if (QDT_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8CtrlIndex])
        {
#else
        (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

            Qdt_HL_Instance_DeInit(s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8CtrlIndex]);

#if (QDT_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* QDT_SUPPORT_MULTICORE */
    }
    /* s_pQdtHal_pConfigCurrent = NULL_PTR; */
}
#endif /* QDT_DEINIT_API */

/**
 * @brief Re-Start the measure.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_ReStartMeasurement(const uint8 u8LogicInstanceID,
                                                           const uint8 u8LogicChannelID,
                                                           uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance, u8Channel;
    QDT_ReturnType eRet = QDT_RETURN_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtChannel(u8LogicInstanceID, u8LogicChannelID, &u8Instance, &u8Channel);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_13();
            {
                QDT_HWA_SetICM_SIG_REG(pQdt, u8Channel, 1u);
            }
            SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_13();
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the channel flag.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pSet                   The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetChannelFlag(const uint8 u8LogicInstanceID,
                                                       const uint8 u8LogicChannelID,
                                                       boolean    *pSet,
                                                       uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance, u8Channel, u8Temp;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtChannel(u8LogicInstanceID, u8LogicChannelID, &u8Instance, &u8Channel);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            u8Temp = QDT_HWA_GetCHF(pQdt, u8Channel);

            if (0u == u8Temp)
            {
                *pSet = FALSE;
            }
            else
            {
                *pSet = TRUE;
            }
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Clear the channel flag.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_ClearChannelFlag(const uint8 u8LogicInstanceID,
                                                         const uint8 u8LogicChannelID,
                                                         uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance, u8Channel;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtChannel(u8LogicInstanceID, u8LogicChannelID, &u8Instance, &u8Channel);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_15();
            {
                QDT_HWA_ClearCHF(pQdt, u8Channel);
            }
            SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_15();
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the channel flag.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetEdgeNumber(const uint8 u8LogicInstanceID,
                                                      const uint8 u8LogicChannelID,
                                                      uint32     *pValue,
                                                      uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance, u8Channel;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtChannel(u8LogicInstanceID, u8LogicChannelID, &u8Instance, &u8Channel);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetICEXP_NUM_ICM_ECNT(pQdt, u8Channel);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the CV value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8LogicChannelID       The qdt channel ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetCV(const uint8 u8LogicInstanceID,
                                              const uint8 u8LogicChannelID,
                                              uint32     *pValue,
                                              uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance, u8Channel;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtChannel(u8LogicInstanceID, u8LogicChannelID, &u8Instance, &u8Channel);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetCV(pQdt, u8Channel);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the REVCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetREVCNT(const uint8 u8LogicInstanceID,
                                                  uint32     *pValue,
                                                  uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetREVCNT(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the REVCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetREVCNT_HOLD(const uint8 u8LogicInstanceID,
                                                       uint32     *pValue,
                                                       uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetREVCNT_HOLD(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the POSCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetPOSCNT(const uint8 u8LogicInstanceID,
                                                  uint32     *pValue,
                                                  uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetPOSCNT(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Reset the POSCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_ResetPOSCNT(const uint8 u8LogicInstanceID, uint8 u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            QDT_HWA_SetPOSCNT(pQdt, 0u);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the POSCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetPOSCNT_HOLD(const uint8 u8LogicInstanceID,
                                                       uint32     *pValue,
                                                       uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetPOSCNT_HOLD(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the POSDCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetPOSDCNT(const uint8 u8LogicInstanceID,
                                                   uint32     *pValue,
                                                   uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetPOSDCNT(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the POSDCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetPOSDCNT_HOLD(const uint8 u8LogicInstanceID,
                                                        uint32     *pValue,
                                                        uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetPOSDCNT_HOLD(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the LECNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetLECNT(const uint8 u8LogicInstanceID,
                                                 uint32     *pValue,
                                                 uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetLECNT(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the LECNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetLECNT_HOLD(const uint8 u8LogicInstanceID,
                                                      uint32     *pValue,
                                                      uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetLECNT_HOLD(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the POSDTMRCNT value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetPOSDTMRCNT(const uint8 u8LogicInstanceID,
                                                      uint32     *pValue,
                                                      uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetPOSDTMRCNT(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the POSDTMRCNT HOLD value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pValue                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetPOSDTMRCNT_HOLD(const uint8 u8LogicInstanceID,
                                                           uint32     *pValue,
                                                           uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    uint8          u8Instance;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            *pValue = QDT_HWA_GetPOSDTMRCNT_HOLD(pQdt);
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

/**
 * @brief Get the speed value.
 *
 * @param[in]    u8LogicInstanceID      The qdt controller ID
 * @param[in]    u8CurrentCore          The core ID for serving core
 * @param[out]   pSpeed                 The pointer of needed value
 *
 * @return QDT_ReturnType
 */
QDT_TEXT_SECTION QDT_ReturnType QDT_Hal_GetSpeed(const uint8 u8LogicInstanceID,
                                                 float32    *pSpeed,
                                                 uint8       u8CurrentCore)
{
    QDT_Type      *pQdt;
    float32        fM;
    uint32         u32E;
    uint8          u8Instance;
    static float32 fM_1, fSpeed_pre;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;
    uint16         u16Poscnt, u16Posdcnth, u16Posdtmrcnth, u16lecnth;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == s_pQdtHal_pConfigCurrent->Qdt_CtrlCoresMappingPtr[u8LogicInstanceID])
    {
#else
    (void)u8CurrentCore;
#endif /* QDT_SUPPORT_MULTICORE */

        eRet = Qdt_AB_GetHwQdtInstance(u8LogicInstanceID, &u8Instance);

        if (eRet == QDT_RETURN_OK)
        {
            pQdt = (QDT_Type *)aQdt_Base[u8Instance];

            SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_27();
            {
                /* step1. read POSDCNT */
                u16Poscnt = QDT_HWA_GetPOSDCNT(pQdt);
                u16Poscnt++;
                /* step2. read POSDCNTH */
                u16Posdcnth = QDT_HWA_GetPOSDCNT_HOLD(pQdt);
                /* step3. read POSDTMRCnTH */
                u16Posdtmrcnth = QDT_HWA_GetPOSDTMRCNT_HOLD(pQdt);
                /* step4. read LECNTH */
                u16lecnth = QDT_HWA_GetLECNT_HOLD(pQdt);
            }
            SchM_Exit_Qdt_QDT_EXCLUSIVE_AREA_27();

            /* step5. POSDCNTH = 0? */
            if (0u == u16Posdcnth)
            {
                fM = (float32)u16lecnth /
                     (float32)(s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8LogicInstanceID]
                                   ->u32BusClockFreq);
                if (u16lecnth >=
                    s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8LogicInstanceID]->u32LecntLarge)
                {
                    *pSpeed = 0.0;
                }
                else
                {
                    if (fM > fM_1)
                    {
                        *pSpeed = ((float32)15 / (float32)(s_pQdtHal_pConfigCurrent
                                                               ->pQdtInstanceCfg[u8LogicInstanceID]
                                                               ->u32EncoderLine)) /
                                  fM;
                    }
                    else
                    {
                        *pSpeed = fSpeed_pre;
                    }
                }
            }
            else
            {
                fM = (float32)u16Posdtmrcnth /
                     (float32)(s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8LogicInstanceID]
                                   ->u32BusClockFreq);
                u32E = u16Posdcnth;
                fM_1 = fM;

                *pSpeed = ((float32)15u /
                           (float32)(s_pQdtHal_pConfigCurrent->pQdtInstanceCfg[u8LogicInstanceID]
                                         ->u32EncoderLine)) *
                          (float32)u32E / fM;
            }

            fSpeed_pre = *pSpeed;
        }

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* QDT_SUPPORT_MULTICORE */
    return eRet;
}

#define QDT_STOP_SEC_CODE
#include "Qdt_MemMap.h"

#ifdef __cplusplus
}
#endif
