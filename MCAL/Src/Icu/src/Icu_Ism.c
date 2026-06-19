
/**
 *   @file    Icu_Ism.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - ISM driver source file.
 *   @details ISM source file, containing the variables and functions that are
 * exported by the ISM driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ISM
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
*   0.6.0       15/04/2023    QXW0076      N/A          Initial Version
==================================================================================================*/
/* PRQA S 3006,1006 EOF #Misra-C:2012 Dir-4.3 Assembly language shall be
   encapsulated and isolated. #Misra-C:2012 Dir-4.2 All usage of assembly
   language should be documented 1006:[E] This in-line assembler construct is a
   language extension. The code has been ignored. 3006:This function contains a
   mixture of in-line assembler statements and C statements. REASON: This is the
   normal usage of macros.
*/
/* PRQA S 3673 EOF #Misra-C:2012: Rule-8.13 A pointer should point to a
   const-qualified type whenever possible. Reason: This usage is legal.
   */
#ifdef __cplusplus
extern "C"
{
#endif
#include "Icu_Ism.h"
#include "Icu_Ism_Reg.h"
#include "SchM_Icu.h"

#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
LOCAL_INLINE void ICU_ISM_HWA_SetFpcConfig(ISM_Type *const pIsm, uint8 u8FpcChannel, boolean bEnable);
LOCAL_INLINE void ICU_ISM_HWA_ConfigRisingDetectMode(ISM_Type *const                pIsm,
                                                     uint8                          u8FpcChannel,
                                                     ICM_ISM_FPC_EdgeDetectModeType eDetectMode);
LOCAL_INLINE void ICU_ISM_HWA_ConfigRisingDelayMode(ISM_Type *const               pIsm,
                                                    uint8                         u8FpcChannel,
                                                    ICM_ISM_FPC_EdgeDelayModeType eDelayMode);
LOCAL_INLINE void ICU_ISM_HWA_ConfigFallingDetectMode(ISM_Type *const                pIsm,
                                                      uint8                          u8FpcChannel,
                                                      ICM_ISM_FPC_EdgeDetectModeType eDetectMode);
LOCAL_INLINE void ICU_ISM_HWA_ConfigFallingDelayMode(ISM_Type *const               pIsm,
                                                     uint8                         u8FpcChannel,
                                                     ICM_ISM_FPC_EdgeDelayModeType eDelayMode);
LOCAL_INLINE void ICU_ISM_HWA_SetMcsChannel(ISM_Type *const pIsm,
                                            uint8           u8FpcChannel,
                                            uint8           u8LamChannel);
LOCAL_INLINE void ICU_ISM_HWA_SetFpcThreadValue(ISM_Type *const pIsm,
                                                uint8           u8FpcChannel,
                                                uint16          u16FpcThreshold);
LOCAL_INLINE void ICU_ISM_HWA_SetFpcThreadValue(ISM_Type *const pIsm,
                                                uint8           u8FpcChannel,
                                                uint16          u16FpcThreshold);
LOCAL_INLINE void ICU_ISM_HWA_EnIsmModule(ISM_Type *const pIsm, boolean bEnable);
LOCAL_INLINE void ICU_ISM_HWA_ConfigLamEdsMode(ISM_Type *const                 pIsm,
                                               uint8                           u8LamChannel,
                                               ICU_ISM_LAM_EventWindowEdgeType eWindowEventType);
LOCAL_INLINE void ICU_ISM_HWA_ConfigLamMonitorChannel(ISM_Type *const pIsm, uint8 u8LamChannel);
LOCAL_INLINE void ICU_ISM_HWA_SetLamConfig(ISM_Type *const pIsm, uint8 u8LamChannel, boolean bEnable);
LOCAL_INLINE uint32 ICU_ISM_HWA_GetCount(ISM_Type *const pIsm, uint8 u8LamChannel);
LOCAL_INLINE void   ICU_ISM_HWA_ClearCount(ISM_Type *const pIsm, uint8 u8LamChannel);
LOCAL_INLINE void   ICU_ISM_HWA_ConfigLamCounter(ISM_Type *const pIsm,
                                                 uint8           u8LamChannel,
                                                 uint32          u32value);
LOCAL_INLINE uint32 ISM_HWA_ReadChannelInterruptFlag(ISM_Type *const pIsm, uint32 u32LamChannel);
LOCAL_INLINE void   ISM_HWA_ClearChannelInterruptFlag(ISM_Type *const pIsm, uint32 u32LamChannel);
LOCAL_INLINE void   ISM_HWA_SetEvent(ISM_Type *const pIsm, uint32 u32LamChannel);
LOCAL_INLINE void   ISM_HWA_ClearEvent(ISM_Type *const pIsm, uint32 u32LamChannel);
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief Enable/Disable a FPC channel
 *
 * @param pIsm            -Ism instance
 * @param u8FpcChannel  -Fpc channel
 * @param bEnable        -Enable/Disable FPC channel
 */
LOCAL_INLINE void ICU_ISM_HWA_SetFpcConfig(ISM_Type *const pIsm, uint8 u8FpcChannel, boolean bEnable)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
        Reason: The or operation of ISM_FPC_CTRL_EN(FALSE) is to indication the
       disable of FPC */
    pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CTRL = (pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CTRL &
                                                 ~(uint32)ISM_FPC_CTRL_EN_MASK) |
                                                ISM_FPC_CTRL_EN(bEnable);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set the rising detect mode for a FPC channel
 *
 * @param pIsm            -Ism instance
 * @param u8FpcChannel  -Fpc channel
 * @param eDetectMode    -The Edge detect mode
 */
LOCAL_INLINE void ICU_ISM_HWA_ConfigRisingDetectMode(ISM_Type *const                pIsm,
                                                     uint8                          u8FpcChannel,
                                                     ICM_ISM_FPC_EdgeDetectModeType eDetectMode)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
    Reason: The or operation of ISM_FPC_CONFIG_REG(eDetectMode) is to set Rising
    Edge Detect Mode*/
    pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG = (pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG &
                                                   ~(uint32)ISM_FPC_CONFIG_REG_MASK) |
                                                  ISM_FPC_CONFIG_REG(eDetectMode);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set the rising detect delay mode for a FPC channel
 *
 * @param pIsm            -Ism instance
 * @param u8FpcChannel  -Fpc channel
 * @param eDelayMode    -The Edge detect delay mode
 */
LOCAL_INLINE void ICU_ISM_HWA_ConfigRisingDelayMode(ISM_Type *const               pIsm,
                                                    uint8                         u8FpcChannel,
                                                    ICM_ISM_FPC_EdgeDelayModeType eDelayMode)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
    Reason: The or operation of ISM_FPC_CONFIG_FED(eDelayMode) is to set Rising
    Edge Delay Mode */
    pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG = (pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG &
                                                   ~(uint32)ISM_FPC_CONFIG_RED_MASK) |
                                                  ISM_FPC_CONFIG_RED(eDelayMode);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set the falling detect mode for a FPC channel
 *
 * @param pIsm            -Ism instance
 * @param u8FpcChannel  -Fpc channel
 * @param eDetectMode    -The Edge detect mode
 */
LOCAL_INLINE void ICU_ISM_HWA_ConfigFallingDetectMode(ISM_Type *const                pIsm,
                                                      uint8                          u8FpcChannel,
                                                      ICM_ISM_FPC_EdgeDetectModeType eDetectMode)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
    Reason: The or operation of ISM_FPC_CONFIG_FEG(eDetectMode) is to set Falling
    Edge Detect Mode*/
    pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG = (pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG &
                                                   ~(uint32)ISM_FPC_CONFIG_FEG_MASK) |
                                                  ISM_FPC_CONFIG_FEG(eDetectMode);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set the falling detect delay mode for a FPC channel
 *
 * @param pIsm            -Ism instance
 * @param u8FpcChannel  -Fpc channel
 * @param eDelayMode    -The Edge detect delay mode
 */
LOCAL_INLINE void ICU_ISM_HWA_ConfigFallingDelayMode(ISM_Type *const               pIsm,
                                                     uint8                         u8FpcChannel,
                                                     ICM_ISM_FPC_EdgeDelayModeType eDelayMode)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
    Reason: The or operation of ISM_FPC_CONFIG_FED(eDelayMode) is to set Falling
    Edge Delay Mode */
    pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG = (pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG &
                                                   ~(uint32)ISM_FPC_CONFIG_FED_MASK) |
                                                  ISM_FPC_CONFIG_FED(eDelayMode);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set the FPC signal source channel for a LAM channel
 *
 * @param pIsm            -Ism instance
 * @param u8FpcChannel  -Fpc channel
 * @param u8LamChannel    -Lam channel
 */
LOCAL_INLINE void ICU_ISM_HWA_SetMcsChannel(ISM_Type *const pIsm, uint8 u8FpcChannel, uint8 u8LamChannel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
    Reason: The or operation of ISM_LAM_CONFIG_MCS(u8FpcChannel) is to set Monitor
    channel */
    pIsm->LAM_CONTROLS[u8LamChannel].LAM_CONFIG = (pIsm->LAM_CONTROLS[u8LamChannel].LAM_CONFIG &
                                                   ~(uint32)ISM_LAM_CONFIG_MCS_MASK) |
                                                  ISM_LAM_CONFIG_MCS(u8FpcChannel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set the FPC compare thread value
 *
 * @param pIsm            -Ism instance
 * @param u8FpcChannel  -Fpc channel
 * @param u16FpcThreshold    -The thread value
 */
LOCAL_INLINE void ICU_ISM_HWA_SetFpcThreadValue(ISM_Type *const pIsm,
                                                uint8           u8FpcChannel,
                                                uint16          u16FpcThreshold)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
        Reason: The or operation of ISM_FPC_CONFIG_CMP(u16FpcThreshold) is to set
       compare value */
    pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG = (pIsm->FPC_CONTROLS[u8FpcChannel].FPC_CONFIG &
                                                   ~(uint32)ISM_FPC_CONFIG_CMP_MASK) |
                                                  ISM_FPC_CONFIG_CMP(u16FpcThreshold);
    /* PRQA S 2985 -- */
}

/**
 * @brief Enable/Disable the Ism module
 *
 * @param pIsm            -Ism instance
 * @param bEnable        -Enable/Disable Ism module
 */
LOCAL_INLINE void ICU_ISM_HWA_EnIsmModule(ISM_Type *const pIsm, boolean bEnable)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
        Reason: The or operation of ISM_CTRL_EN(FALSE) is to disable the Ism
       module */
    pIsm->CTRL = (pIsm->CTRL & ~(uint32)ISM_CTRL_EN_MASK) | ISM_CTRL_EN(bEnable);
    /* PRQA S 2985 -- */
}

/**
 * @brief  Set the LAM channel event mode
 *
 * @param pIsm                -Ism instance
 * @param u8LamChannel      -Lam channel
 * @param eWindowEventType  - Channel event mode
 */
LOCAL_INLINE void ICU_ISM_HWA_ConfigLamEdsMode(ISM_Type *const                 pIsm,
                                               uint8                           u8LamChannel,
                                               ICU_ISM_LAM_EventWindowEdgeType eWindowEventType)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The or operation of ISM_LAM_CONFIG_EDS(eWindowEventType) is to
       select the event */
    pIsm->LAM_CONTROLS[u8LamChannel].LAM_CONFIG = (pIsm->LAM_CONTROLS[u8LamChannel].LAM_CONFIG &
                                                   ~(uint32)ISM_LAM_CONFIG_EDS_MASK) |
                                                  ISM_LAM_CONFIG_EDS(eWindowEventType);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set source channel of the LAM channel is monitor channel
 *
 * @param pIsm            -Ism instance
 * @param u8LamChannel  -Lam channel
 */
LOCAL_INLINE void ICU_ISM_HWA_ConfigLamMonitorChannel(ISM_Type *const pIsm, uint8 u8LamChannel)
{
    pIsm->LAM_CONTROLS[u8LamChannel].LAM_CONFIG |= ISM_LAM_CONFIG_EWS_MASK;
}

LOCAL_INLINE void ICU_ISM_HWA_ClearConfigLamChannel(ISM_Type *const pIsm, uint8 u8LamChannel)
{
    pIsm->LAM_CONTROLS[u8LamChannel].LAM_CONFIG &= ~ISM_LAM_CONFIG_EWS_MASK;
}

/**
 * @brief Enable/Disable a LAM channel
 *
 * @param pIsm            -Ism instance
 * @param u8LamChannel  -Lam channel
 * @param bEnable        -Enable/Disable the lam channel
 */
LOCAL_INLINE void ICU_ISM_HWA_SetLamConfig(ISM_Type *const pIsm, uint8 u8LamChannel, boolean bEnable)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The or operation of ISM_LAM_CTRL_EN(FALSE) is to indication
       the disable of Lam channel */
    pIsm->LAM_CONTROLS[u8LamChannel].LAM_CTRL = (pIsm->LAM_CONTROLS[u8LamChannel].LAM_CTRL &
                                                 ~(uint32)ISM_LAM_CTRL_EN_MASK) |
                                                ISM_LAM_CTRL_EN(bEnable);
    /* PRQA S 2985 -- */
}

/**
 * @brief Get the LAM event window count value.
 *
 * @param pIsm            -Ism instance
 * @param u8LamChannel  -Lam channel
 * @return  -The LAM event window count value.
 */
LOCAL_INLINE uint32 ICU_ISM_HWA_GetCount(ISM_Type *const pIsm, uint8 u8LamChannel)
{

    return (uint32)(pIsm->LAM_CONTROLS[u8LamChannel].LAM_STATUS & ISM_LAM_STATUS_COUNT_MASK);
}

/**
 * @brief clear the LAM event window count value.
 *
 * @param pIsm            -Ism instance
 * @param u8LamChannel  -Lam channel
 */
LOCAL_INLINE void ICU_ISM_HWA_ClearCount(ISM_Type *const pIsm, uint8 u8LamChannel)
{
    pIsm->LAM_CONTROLS[u8LamChannel].LAM_STATUS = 0xFC20;
}

/**
 * @brief Set the LAM event window compare count value.
 *
 * @param pIsm            -Ism instance
 * @param u8LamChannel  -Lam channel
 * @param u32value        -The lam compare value.
 */
LOCAL_INLINE void ICU_ISM_HWA_ConfigLamCounter(ISM_Type *const pIsm, uint8 u8LamChannel, uint32 u32value)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The or operation of ISM_LAM_COUNTER_CNT(u32value) is to set
       the counter value */
    pIsm->LAM_CONTROLS[u8LamChannel].LAM_COUNTER = (pIsm->LAM_CONTROLS[u8LamChannel].LAM_COUNTER &
                                                    ~(uint32)ISM_LAM_COUNTER_CNT_MASK) |
                                                   ISM_LAM_COUNTER_CNT(u32value);
    /* PRQA S 2985 -- */
}

LOCAL_INLINE uint32 ISM_HWA_ReadChannelInterruptFlag(ISM_Type *const pIsm, uint32 u32LamChannel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The and operation of ISM_E_STATUS_ES(u32value) is to get the
       event status */
    return (uint32)(pIsm->E_STATUS & ISM_E_STATUS_ES(u32LamChannel));
    /* PRQA S 2985 -- */
}

LOCAL_INLINE void ISM_HWA_ClearChannelInterruptFlag(ISM_Type *const pIsm, uint32 u32LamChannel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The or operation of ISM_E_STATUS_ES(u32LamChannel) is to clear
       the event status */
    pIsm->E_STATUS = ISM_E_STATUS_ES(u32LamChannel);
    /* PRQA S 2985 -- */
}

LOCAL_INLINE void ISM_HWA_SetEvent(ISM_Type *const pIsm, uint32 u32LamChannel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The or operation of ISM_E_CTRL_EE(u32LamChannel) is to enable
       the event */
    pIsm->E_CTRL |= ISM_E_CTRL_EE(u32LamChannel);
    /* PRQA S 2985 -- */
}

LOCAL_INLINE void ISM_HWA_ClearEvent(ISM_Type *const pIsm, uint32 u32LamChannel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The and operation of ISM_E_CTRL_EE(u32LamChannel) is to
       disable the event */
    pIsm->E_CTRL &= ~(uint32)ISM_E_CTRL_EE(u32LamChannel);
    /* PRQA S 2985 -- */
}

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief Enable the ISM module.
 *
 * @implements SWDESG_ICU_180
 */
ICU_TEXT_SECTION void Icu_Ism_Enable(void)
{
    ISM_Type *pIsmPtr = ISM;

    ICU_ISM_HWA_EnIsmModule(pIsmPtr, TRUE);
}

/**
 * @brief Disable the ISM module.
 *
 * @implements SWDESG_ICU_181
 */
ICU_TEXT_SECTION void Icu_Ism_Disable(void)
{
    ISM_Type *pIsmPtr = ISM;
    ICU_ISM_HWA_EnIsmModule(pIsmPtr, FALSE);
}

/**
 * @brief Initialize an ISM hardware channel
 *
 * @param pConfig        -The  channel configuration.
 *
 * @implements SWDESG_ICU_182
 */
ICU_TEXT_SECTION void Icu_Ism_InitHwChannel(const Icu_IsmChannelConfigType *pConfig)
{
    ISM_Type *pIsmPtr = ISM;
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_90();
    /* PRQA S 4322,4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression
    should not be cast to an inappropriate essential type. Reason: The relative
    register bits can be safely converted to the enumeration type */
    /* PRQA S 4393,4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite
     * expression shall not be cast to a different essential type category or a
     * wider essential type Reason: It is allowed to cast the value */
    /* PRQA S 4543,4521 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an
     * inappropriate essential type. Reason: No problem doing this conversion as
     * the value is within the range of the cast type.
     */
    ICU_ISM_HWA_SetFpcConfig(pIsmPtr, pConfig->u8FpcChannel, TRUE);
    if (pConfig->eRisingEdgeFilter < ICU_ISM_CH_FILTER_DELAY_FIXED)
    {
        ICU_ISM_HWA_ConfigRisingDetectMode(pIsmPtr,
                                           pConfig->u8FpcChannel,
                                           (ICM_ISM_FPC_EdgeDetectModeType)pConfig->eRisingEdgeFilter);
    }
    else
    {
        ICU_ISM_HWA_ConfigRisingDetectMode(pIsmPtr,
                                           pConfig->u8FpcChannel,
                                           ICM_ISM_FPC_DETECT_DELAY_MODE);
        ICU_ISM_HWA_ConfigRisingDelayMode(
            pIsmPtr,
            pConfig->u8FpcChannel,
            (ICM_ISM_FPC_EdgeDelayModeType)(pConfig->eRisingEdgeFilter - 2U));
    }

    if (pConfig->eFallingEdgeFilter < ICU_ISM_CH_FILTER_DELAY_FIXED)
    {
        ICU_ISM_HWA_ConfigFallingDetectMode(
            pIsmPtr,
            pConfig->u8FpcChannel,
            (ICM_ISM_FPC_EdgeDetectModeType)pConfig->eFallingEdgeFilter);
    }
    else
    {
        ICU_ISM_HWA_ConfigFallingDetectMode(pIsmPtr,
                                            pConfig->u8FpcChannel,
                                            ICM_ISM_FPC_DETECT_DELAY_MODE);
        ICU_ISM_HWA_ConfigFallingDelayMode(
            pIsmPtr,
            pConfig->u8FpcChannel,
            (ICM_ISM_FPC_EdgeDelayModeType)(pConfig->eFallingEdgeFilter - 2U));
    }
    ICU_ISM_HWA_SetMcsChannel(pIsmPtr, pConfig->u8FpcChannel, pConfig->u8LamChannel);
    ICU_ISM_HWA_SetFpcThreadValue(pIsmPtr, pConfig->u8FpcChannel, pConfig->u16FpcThreshold);
    /* PRQA S 4543,4521 -- */
    /* PRQA S 4393,4394 -- */
    /* PRQA S 4322,4342-- */
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_90();
}

/**
 * @brief Deinitialize an Ism hardware channel.
 *
 * @param pConfig        -The Ism channel configuration.
 *
 * @implements SWDESG_ICU_183
 */
ICU_TEXT_SECTION void Icu_Ism_DeInitHwChannel(const Icu_IsmChannelConfigType *pConfig)
{
    ISM_Type *pIsmPtr = ISM;
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_91();
    /*ISM*/
    ICU_ISM_HWA_EnIsmModule(pIsmPtr, FALSE);
    /*Fpc*/
    ICU_ISM_HWA_SetFpcConfig(pIsmPtr, pConfig->u8FpcChannel, FALSE);
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should
    not be cast to an inappropriate essential type. Reason: The relative register
    bits can be safely converted to the enumeration type */
    /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: It is allowed to cast the value */
    /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an
     * inappropriate essential type. Reason: No problem doing this conversion as
     * the value is within the range of the cast type.
     */
    ICU_ISM_HWA_ConfigRisingDetectMode(pIsmPtr, pConfig->u8FpcChannel, ICM_ISM_FPC_DETECT_NO_FILTER);
    ICU_ISM_HWA_ConfigRisingDelayMode(pIsmPtr, pConfig->u8FpcChannel, ICM_ISM_FPC_DELAY_FIXED0);
    ICU_ISM_HWA_ConfigFallingDetectMode(pIsmPtr, pConfig->u8FpcChannel, ICM_ISM_FPC_DETECT_NO_FILTER);
    ICU_ISM_HWA_ConfigFallingDelayMode(pIsmPtr, pConfig->u8FpcChannel, ICM_ISM_FPC_DELAY_FIXED0);

    ICU_ISM_HWA_SetFpcThreadValue(pIsmPtr, pConfig->u8FpcChannel, 0U);
    /*LAM*/
    ISM_HWA_ClearChannelInterruptFlag(pIsmPtr, (uint32)(1 << (pConfig->u8LamChannel)));
    ICU_ISM_HWA_SetLamConfig(pIsmPtr, pConfig->u8LamChannel, FALSE);
    ISM_HWA_ClearEvent(pIsmPtr, (uint32)(1 << (pConfig->u8LamChannel)));
    ICU_ISM_HWA_ConfigLamEdsMode(pIsmPtr, pConfig->u8LamChannel, ICU_ISM_LAM_NTR_CLEAR_NTR_GATE);
    ICU_ISM_HWA_SetMcsChannel(pIsmPtr, 0U, pConfig->u8LamChannel);
    ICU_ISM_HWA_ClearCount(pIsmPtr, pConfig->u8LamChannel);
    ICU_ISM_HWA_ConfigLamCounter(pIsmPtr, pConfig->u8LamChannel, 0U);
    ICU_ISM_HWA_ClearConfigLamChannel(pIsmPtr, pConfig->u8LamChannel);
    /* PRQA S 4543 -- */
    /* PRQA S 4393 -- */
    /* PRQA S 4342 -- */
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_91();
}

/**
 * @brief start Lam hardware channel.
 * @param u8Lamchannel          -The Lam channel index
 * @param eWindowEventType        -The Lam channel event type.
 *
 * @implements SWDESG_ICU_184
 */
ICU_TEXT_SECTION void Icu_Ism_StartLamChannel(uint8                           u8Lamchannel,
                                              ICU_ISM_LAM_EventWindowEdgeType eWindowEventType)
{
    ISM_Type *pIsmPtr = ISM;
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_92();
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should
    not be cast to an inappropriate essential type. Reason: The relative register
    bits can be safely converted to the enumeration type */
    /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: It is allowed to cast the value */
    /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an
     * inappropriate essential type. Reason: No problem doing this conversion as
     * the value is within the range of the cast type.
     */
    ISM_HWA_SetEvent(pIsmPtr, (uint32)(1 << u8Lamchannel));
    ICU_ISM_HWA_ConfigLamEdsMode(pIsmPtr, u8Lamchannel, eWindowEventType);
    ICU_ISM_HWA_ConfigLamMonitorChannel(pIsmPtr, u8Lamchannel);
    ICU_ISM_HWA_ConfigLamCounter(pIsmPtr, u8Lamchannel, 1U);
    ISM_HWA_ClearChannelInterruptFlag(pIsmPtr, (uint32)(1 << (u8Lamchannel)));
    ICU_ISM_HWA_SetLamConfig(pIsmPtr, u8Lamchannel, TRUE);
    /* PRQA S 4543 -- */
    /* PRQA S 4393 -- */
    /* PRQA S 4342 -- */
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_92();
}

/**
 * @brief stop an Lam hardware channel.
 * @param u8Lamchannel          - The Lam channel index
 *
 * @implements SWDESG_ICU_185
 */
ICU_TEXT_SECTION void Icu_Ism_StopLamChannel(uint8 u8Lamchannel)
{
    ISM_Type *pIsmPtr = ISM;
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_93();
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should
    not be cast to an inappropriate essential type. Reason: The relative register
    bits can be safely converted to the enumeration type */
    /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: It is allowed to cast the value */
    /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an
     * inappropriate essential type. Reason: No problem doing this conversion as
     * the value is within the range of the cast type.
     */
    ISM_HWA_ClearEvent(pIsmPtr, (uint32)(1 << u8Lamchannel));
    ICU_ISM_HWA_ConfigLamEdsMode(pIsmPtr, u8Lamchannel, ICU_ISM_LAM_NTR_CLEAR_NTR_GATE);
    ICU_ISM_HWA_ConfigLamCounter(pIsmPtr, u8Lamchannel, 0U);
    ICU_ISM_HWA_SetLamConfig(pIsmPtr, u8Lamchannel, FALSE);
    ICU_ISM_HWA_ClearCount(pIsmPtr, u8Lamchannel);
    /* PRQA S 4521 -- */
    /* PRQA S 4393 -- */
    /* PRQA S 4543 -- */
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_93();
}

/**
 * @brief Get the time value of the Lam channel.
 * @param u8Lamchannel          - The Lam channel index
 * @return                      - The Lam channel value
 *
 * @implements SWDESG_ICU_186
 */
ICU_TEXT_SECTION uint32 Icu_Ism_GetTimeElapsed(uint8 u8Lamchannel)
{
    ISM_Type *pIsmPtr = ISM;
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_94();
    uint32 u32TimeElapsed = ICU_ISM_HWA_GetCount(pIsmPtr, u8Lamchannel);
    ICU_ISM_HWA_ClearCount(pIsmPtr, u8Lamchannel);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_94();

    return u32TimeElapsed;
}

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the Ism channel
 *
 * @param eIsmInstance      -Ism instance Id
 * @param u8Channel         -Ism channel index
 * @return                  state of the channel
 *
 * @implements SWDESG_ICU_187
 */
ICU_TEXT_SECTION boolean Icu_Ism_GetInputHwState(const Icu_IsmInstanceType eIsmInstance,
                                                 const uint8               u8Channel)
{
    (void)eIsmInstance;
    boolean   bState  = FALSE;
    ISM_Type *pIsmPtr = ISM;
    /* PRQA S 4391 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: It is allowed to cast the value */
    if (0u != ISM_HWA_ReadChannelInterruptFlag(pIsmPtr, (uint32)(1u << u8Channel)))
    {
        bState = (boolean)TRUE;
        /* Clear interrupt flag */
        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_95();
        ISM_HWA_ClearChannelInterruptFlag(pIsmPtr, (uint32)(1u << u8Channel));
        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_95();
    }
    else
    {
        /* Nothing for misra */
    }
    /* PRQA S 4391 -- */
    return bState;
}
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
#ifdef __cplusplus
}
#endif
/** @} */
