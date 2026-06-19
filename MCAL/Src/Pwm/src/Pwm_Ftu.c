/**
 *   @file    Pwm_Ftu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR PWM - hardware specific type definition
 *   @details This file contains the PWM AUTOSAR hardware specific type definition
 *
 *   @addtogroup PWM
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pwm
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
*   0.1.0       24/5/2023     QXW0076       N/A          PWM Initial Version
*   0.2.0       27/9/2023     QXW0074       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0074       N/A          Optimization code
*   0.4.0       20/10/2023    QXW0074       N/A          Optimization code and EB plugins
*   0.5.0       12/01/2024    QXW0074       N/A          add Phase Shift and global time base feature
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (update global time base, the timer width
of FTU1/2 change to 24bit)
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          optimization the implement of
PwmDutycycleUpdatedEndperiod/PwmClass/PwmChannelEcucPartitionRef in xdm
*                                                        and fix some QAC analysis warning
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                    INCLUDE FILES
==================================================================================================*/
/*
 * @file Pwm_Ftu.c
 */
#include "Ftu_Common.h"
#include "Pwm_Ftu.h"
#include "SchM_Pwm.h"

#ifndef USER_MODE_REG_PROT_ENABLED
#define USER_MODE_REG_PROT_ENABLED (STD_OFF)
#endif
#if (PWM_FTU_USED == STD_ON)
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                     LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                    GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                     LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    GLOBAL VARIABLES
==================================================================================================*/
/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)

#define PWM_START_SEC_VAR_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

/**
 * @brief overflow enable flag of FTU channel
 */
PWM_DATA_SECTION static uint8 s_aFtuOverflowInterruptFlag[PWM_FTU_MODULE_NO] = { 0 };

PWM_DATA_SECTION static uint8 s_aFtuChannelInterruptFlag[PWM_FTU_MODULE_NO] = { 0 };

/**
 * @brief PWM FTU notification map
 */
PWM_DATA_SECTION static Pwm_Ftu_EdgeStateType s_aFtuChannelNotifyEdge[PWM_FTU_CHANNELS_NO] = {
    PWM_NO_EDGE
};

#define PWM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

#endif /* PWM_NOTIFICATION_SUPPORTED == STD_ON */
/* PRQA S 0686-- */

#define PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)

#if (PWM_FAULT_SUPPORTED == STD_ON)
PWM_DATA_SECTION static Pwm_Ftu_FaultNotifyType
    s_apFaultNotify[PWM_FTU_MODULE_FAULT_NO * PWM_FTU_MODULE_NO];
#endif /* PWM_FAULT_SUPPORTED == STD_ON */

#if ((defined PWM_FTU_0_ISR_USED) || (defined PWM_FTU_1_ISR_USED) ||                                 \
     (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) ||                                 \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))
PWM_DATA_SECTION static Pwm_NotifyType s_apFtuChannelNotify[PWM_FTU_CHANNELS_NO];
#endif

#endif /* PWM_NOTIFICATION_SUPPORTED == STD_ON */

PWM_DATA_SECTION static uint32 s_aFtuModRegValue[PWM_FTU_MODULE_NO];

PWM_DATA_SECTION static uint32 s_aFtuPeriodValue[PWM_FTU_MODULE_NO];

#define PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

extern uint16 s_aChannelDuty[PWM_NUM_CONF_CHANNELS];

/*==================================================================================================
*                                 LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION static void Pwm_FtuInternal_DisableInt(Pwm_InstanceType    eFtuModule,
                                                        Pwm_Ftu_ChannelType u8FtuChannel);
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */

PWM_TEXT_SECTION static uint32 Pwm_FtuInternal_CalculateCnVReg(Pwm_InstanceType  eHwModuleIdx,
                                                               uint16            u16DutyCycle,
                                                               Pwm_AlignmentType eAlignment);

#if (PWM_SET_DUTY_CYCLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION static void Pwm_FtuInternal_SetDutyRegs(const Pwm_ChannelConfigType *pFtuChannel,
                                                         uint16                       u16Duty,
                                                         Pwm_AlignmentType            eAlignment);
#endif

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION static void Pwm_FtuInternal_CalculatePeriod(Pwm_InstanceType  eFtuModule,
                                                             Pwm_PeriodType    u32Period,
                                                             Pwm_AlignmentType eAlignment);
#endif

#if ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_DE_INIT_API == STD_ON) || \
     (PWM_SET_PERIOD_AND_DUTY_API == STD_ON))
PWM_TEXT_SECTION static void Pwm_FtuInternal_SetSwOutputControl(Pwm_InstanceType    eFtuModule,
                                                                Pwm_Ftu_ChannelType u8FtuChannel,
                                                                Pwm_OutputStateType eFtuOutputLevel,
                                                                Pwm_Ftu_CombineType eCombineMode,
                                                                boolean bActivationState);
#endif

#if ((defined PWM_FTU_0_ISR_USED) || (defined PWM_FTU_1_ISR_USED) ||                                 \
     (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) ||                                 \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION static void Pwm_Ftu_ProcessCommonInterrupt(uint8 u8FtuModule, uint8 u8FtuChannel);
#endif

#if (PWM_FAULT_SUPPORTED == STD_ON)
PWM_TEXT_SECTION static void Pwm_Ftu_ProcessFaultInterrupt(uint8 u8FtuModule, uint8 u8FaultChannel);
#endif /* (PWM_FAULT_SUPPORTED == STD_ON) */
#endif
#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"
/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM disable interrupt
 *
 * @param[in]       eFtuModule      Ftu instance
 * @param[in]       u8FtuChannel    FTU channel number
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_FtuInternal_DisableInt(Pwm_InstanceType    eFtuModule,
                                                        Pwm_Ftu_ChannelType u8FtuChannel)
{
    Pwm_Ftu_ChannelType u8FtuFirstChannelId;
    Pwm_Ftu_ChannelType u8Index;
    uint8               u8Flag = 1U;

    /* disable channel interrupt enable bit and clear channel interrupt flag */
    FTU_HWA_DisableChannelInterrupt(FTU_PTRS[eFtuModule], u8FtuChannel);
    FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[eFtuModule], (uint8)(1U << u8FtuChannel));

    /* clear interrupt flag */
    s_aFtuChannelInterruptFlag[eFtuModule] &= ~(1U << u8FtuChannel);
    s_aFtuOverflowInterruptFlag[eFtuModule] &= ~(1U << u8FtuChannel);

    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
       Reason: The input instance and channel may not be 0 */
    /* get hardware channel index from channel map */
    u8FtuFirstChannelId = PWM_GET_HW2LOGIC_MAP_INDEX(eFtuModule, 0);
    /* PRQA S 2985 -- */

    /* check if all channel had disable overflow interrupt */
    for (u8Index = u8FtuFirstChannelId; u8Index < (u8FtuFirstChannelId + PWM_FTU_MODULE_CHANNELS_NO);
         u8Index++)
    {
        if (PWM_TOF_IRQ_EDGE == (s_aFtuChannelNotifyEdge[u8Index] & PWM_TOF_IRQ_EDGE))
        {
            /* There has channel using TOF interrupt */
            u8Flag = 0U;
            break;
        }
    }

    if (1U == u8Flag)
    {
        /* disable overflow interrupt */
        FtuCommon_DisableOverflow(FTU_COMMON_MASTER_PWM, (uint8)eFtuModule);
    }
}
#endif /* PWM_NOTIFICATION_SUPPORTED */

/**
 * @brief           PWM calculate channel value
 *
 * @param[in]       eHwModuleIdx        PWM FTU module
 * @param[in]       u16DutyCycle        PWM duty cycle value
 * @param[in]       eAlignment          PWM FTU align type
 *
 * @return          PWM channel value
 *
 */
PWM_TEXT_SECTION static uint32 Pwm_FtuInternal_CalculateCnVReg(Pwm_InstanceType  eHwModuleIdx,
                                                               uint16            u16DutyCycle,
                                                               Pwm_AlignmentType eAlignment)
{
    uint32 u32CnVRegVal;

    if (0x8000U == u16DutyCycle)
    {
#if (PWM_FTU_HAVE_24BIT_CNT == STD_ON)
        if ((eHwModuleIdx == PWM_INSTANCE_FTU_1) || (eHwModuleIdx == PWM_INSTANCE_FTU_2))
        {
            /* the channel value register width is 24bit */
            if (16777215U == s_aFtuModRegValue[eHwModuleIdx])
            {
                u32CnVRegVal = 16777215U;
            }
            else
            {
                /* the period is determined by (MOD-CNTIN+1), so the duty cycle need +1 */
                u32CnVRegVal = s_aFtuModRegValue[eHwModuleIdx] + 1U;
            }
        }
        else
        {
#endif /* (PWM_FTU_HAVE_24BIT_CNT == STD_ON) */
            /* the channel value register width is 16bit */
            if (65535U == s_aFtuModRegValue[eHwModuleIdx])
            {
                u32CnVRegVal = 65535U;
            }
            else
            {
                /* the period is determined by (MOD-CNTIN+1), so the duty cycle need +1 */
                u32CnVRegVal = s_aFtuModRegValue[eHwModuleIdx] + 1U;
            }
#if (PWM_FTU_HAVE_24BIT_CNT == STD_ON)
        }
#endif /* (PWM_FTU_HAVE_24BIT_CNT == STD_ON) */
    }
    else if (0U == u16DutyCycle)
    {
        u32CnVRegVal = 0U;
    }
    else
    {
        if (PWM_CENTER_ALIGNED == eAlignment)
        {
            /* for CPWM,duty cycle = (2*(CnV-CNTIN))/(2*(MOD-CNTIN)).
             * as CNTIN = 0, Period = 2*MOD, then CnV = (Period/2)*duty cycle */
            u32CnVRegVal =
                (uint32)((((uint64)s_aFtuPeriodValue[eHwModuleIdx] * (uint64)u16DutyCycle) >> 15U) >>
                         1U);
        }
        else
        {
            /* for EPWM, Duty cycle = (CnV-CNTIN)/(MOD-CNTIN+1).
             * as CNTIN = 0, Period = MOD+1, then CnV = Period*duty cycle. */
            u32CnVRegVal =
                (uint32)(((uint64)s_aFtuPeriodValue[eHwModuleIdx] * (uint64)u16DutyCycle) >> 15U);
        }
    }

    return u32CnVRegVal;
}

#if (PWM_SET_DUTY_CYCLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
LOCAL_INLINE void Pwm_FtuUpdteCV(Pwm_InstanceType eInstance)
{
#if (PWM_DUTYCYCLE_UPDATED_ENDPERIOD == STD_ON)
    /* use reload points to update CnV registry at the end of period */
    FTU_HWA_GenerateReloadPoint(FTU_PTRS[eInstance]);
#else
    /* use SW sync to update CnV registry immediately */
    FTU_HWA_GenerateSwSync(FTU_PTRS[eInstance]);
#endif
}

/**
 * @brief           PWM FTU set duty cycle value to hardware
 *
 * @param[in]       pFtuChannel     FTU channel configuration points
 * @param[in]       u16Duty         PWM duty cycle value
 * @param[in]       eAlignment      FTU align type
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_FtuInternal_SetDutyRegs(const Pwm_ChannelConfigType *pFtuChannel,
                                                         uint16                       u16Duty,
                                                         Pwm_AlignmentType            eAlignment)
{
    Pwm_InstanceType eInstance     = pFtuChannel->ePwmModuleInstance;
    uint8            u8Channel     = pFtuChannel->u8HwChannelId;
    uint32           u32RegDutyVal = 0U;

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
       Reason: The input instance and channel may not be 0 */
    Pwm_Ftu_ChannelType u8ChannelIndex = PWM_GET_HW2LOGIC_MAP_INDEX(eInstance, u8Channel);
    /* PRQA S 2986 -- */
#endif

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    if ((((uint16)0U) == u16Duty) || (((uint16)0x8000U) == u16Duty))
    {
        /* If the duty cycle is 0%/100%, it means no edge will generate in TOF point */
        s_aFtuChannelNotifyEdge[u8ChannelIndex] |= PWM_TOF_IRQ_NO_EDGE_NOTIF;
    }
    else
    {
        if (PWM_TOF_IRQ_NO_EDGE_NOTIF ==
            ((s_aFtuChannelNotifyEdge[u8ChannelIndex]) & PWM_TOF_IRQ_NO_EDGE_NOTIF))
        {
            /* If the previous TOF IRQ no edge is exist, it means the previous duty cycle is
             * 0%/100%, now it the duty cycle is not 0%/100%, the TOF IRQ no edge will be clear */
            s_aFtuChannelNotifyEdge[u8ChannelIndex] &= ~PWM_TOF_IRQ_NO_EDGE_NOTIF;
        }
    }
#endif

    /* calculate CnV value */
    u32RegDutyVal = Pwm_FtuInternal_CalculateCnVReg(eInstance, u16Duty, eAlignment);

    if (pFtuChannel->ePhaseShiftMode == PWM_PHASESHIFT_DISABLE)
    {
        /* set CnV register, in combined mode, C(n+1)V does not need to be set */
        FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], u8Channel, u32RegDutyVal);
    }
    else
    {
        /* set CnV register, when enable phase shift, C(n+1)V will participate in the generation of
         * phase shift */
        if (u16Duty == (uint16)0x8000U)
        {
            FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], u8Channel, (uint32)0x0U);
            FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                    (uint8)(u8Channel + 1U),
                                    s_aFtuPeriodValue[eInstance]);
        }
        else
        {
            FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], u8Channel, pFtuChannel->u32PwmPhaseShiftCount);
            if ((pFtuChannel->u32PwmPhaseShiftCount + u32RegDutyVal) > s_aFtuModRegValue[eInstance])
            {
                FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                        (uint8)(u8Channel + 1U),
                                        u32RegDutyVal + pFtuChannel->u32PwmPhaseShiftCount -
                                            s_aFtuModRegValue[eInstance]);
            }
            else
            {
                FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                        (uint8)(u8Channel + 1U),
                                        u32RegDutyVal + pFtuChannel->u32PwmPhaseShiftCount);
            }
        }
    }
}
#endif

#if ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_DE_INIT_API == STD_ON) || \
     (PWM_SET_PERIOD_AND_DUTY_API == STD_ON))
/**
 * @brief           FTU set software output control
 *
 * @param[in]       eFtuModule          FTU module
 * @param[in]       u8FtuChannel        FTU channel
 * @param[in]       eFtuOutputLevel     FTU output level
 * @param[in]       eCombineMode        FTU channel combine mode
 * @param[in]       bActivationState    FTU software control enable or not
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_FtuInternal_SetSwOutputControl(Pwm_InstanceType    eFtuModule,
                                                                Pwm_Ftu_ChannelType u8FtuChannel,
                                                                Pwm_OutputStateType eFtuOutputLevel,
                                                                Pwm_Ftu_CombineType eCombineMode,
                                                                boolean bActivationState)
{
    uint32 u32SwoCtrlValue   = 0U;
    uint8  u8ChannelBitMask  = 1U;
    uint32 u32TempPolVal     = 0U;
    uint32 u32SwoCtrlBitMask = 0U;

    if (PWM_FTU_COMBINE_DISABLE != eCombineMode)
    {
        /* need set two channel bit mask */
        u8ChannelBitMask = 3U;
    }

    /* read SWOCTRL register and clear corresponding channel value and control value */
    u32SwoCtrlValue = FTU_HWA_ReadOutputCtrl(FTU_PTRS[eFtuModule]);
    u32SwoCtrlValue = u32SwoCtrlValue &
                      ~((uint32)u8ChannelBitMask << (u8FtuChannel + FTU_SWOCTRL_CHNOCV_SHIFT));
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
       Reason: The macro make sense of code */
    u32SwoCtrlValue = u32SwoCtrlValue &
                      ~((uint32)u8ChannelBitMask << (u8FtuChannel + FTU_SWOCTRL_CHNOC_SHIFT));
    /* PRQA S 2985 -- */

    /* If true, set output to idle; if false, clear saftware output control */
    if ((boolean)TRUE == bActivationState)
    {
        /* read polarity configuration */
        u32TempPolVal = FTU_HWA_ReadChannelPolarity(FTU_PTRS[eFtuModule],
                                                    (uint8)(u8ChannelBitMask << u8FtuChannel));

        /* shift the polarity bit to match the position would be expected in SWOCTRL */
        u32TempPolVal = u32TempPolVal << FTU_SWOCTRL_CHNOCV_SHIFT;

        if (PWM_HIGH == eFtuOutputLevel)
        {
            /* set the corresponding channel value */
            u32SwoCtrlBitMask = ((uint32)u8ChannelBitMask
                                 << (u8FtuChannel + FTU_SWOCTRL_CHNOCV_SHIFT));
        }

        /* XOR excepted value and polarity value to the SWOCTRL register channel value */
        u32SwoCtrlValue = ((u32SwoCtrlBitMask ^ u32TempPolVal) | u32SwoCtrlValue);

        /* set the corresponding channel control value */
        u32SwoCtrlValue = u32SwoCtrlValue | ((uint32)u8ChannelBitMask << u8FtuChannel);
    }

    /* set SWOCTRL register */
    FTU_HWA_ConfigSoftwareOutputControl(FTU_PTRS[eFtuModule], u32SwoCtrlValue);
}
#endif

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/**
 * @brief           PWM calculate period value
 *
 * @param[in]       eFtuModule      PWM FTU module
 * @param[in]       u32Period       FTU period value
 * @param[in]       eAlignment      PWM FTU align type
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_FtuInternal_CalculatePeriod(Pwm_InstanceType  eFtuModule,
                                                             Pwm_PeriodType    u32Period,
                                                             Pwm_AlignmentType eAlignment)
{
    if (PWM_CENTER_ALIGNED == eAlignment)
    {
        if (0U != u32Period)
        {
            /* for CPWM period = (FTU_MOD-FTU_CNTIN)x2
             * as CNTIN = 0, Period = 2*MOD */
            s_aFtuModRegValue[eFtuModule] = (u32Period >> 1U);
        }
    }
    else
    {
        if (0U != u32Period)
        {
            /* for EPWM period = (FTU_MOD-FTU_CNTIN+1)
             * as CNTIN = 0, Period = MOD+1 */
            s_aFtuModRegValue[eFtuModule] = (uint32)(u32Period - ((uint32)1U));
        }
    }

    s_aFtuPeriodValue[eFtuModule] = u32Period;
}
#endif

#if ((defined PWM_FTU_0_ISR_USED) || (defined PWM_FTU_1_ISR_USED) ||                                 \
     (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) ||                                 \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM FTU interrupt common function
 *
 * @param[in]       u8FtuModule     FTU module
 * @param[in]       u8FtuChannel    FTU channel
 *
 * @return          void
 * [SWDESG_PWM_093] [FMR_Pwm_0001]
 */
PWM_TEXT_SECTION static void Pwm_Ftu_ProcessCommonInterrupt(uint8 u8FtuModule, uint8 u8FtuChannel)
{
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
       Reason: The input instance and channel may not be 0 */
    if (NULL_PTR != s_apFtuChannelNotify[PWM_GET_HW2LOGIC_MAP_INDEX(u8FtuModule, u8FtuChannel)])
    {
        s_apFtuChannelNotify[PWM_GET_HW2LOGIC_MAP_INDEX(u8FtuModule, u8FtuChannel)]();
    }
    /* PRQA S 2986 -- */
}
#endif

#if (PWM_FAULT_SUPPORTED == STD_ON)
/**
 * @brief           PWM FTU handle fault interrupt flag
 *
 * @param[in]       u8FtuModule     FTU module
 * @param[in]       u8FaultChannel  FTU channel with fault interrupt
 *
 * @return          void
 * [SWS_Pwm_00026]
 */
PWM_TEXT_SECTION static void Pwm_Ftu_ProcessFaultInterrupt(uint8 u8FtuModule, uint8 u8FaultChannel)
{
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    if (NULL_PTR != s_apFaultNotify[PWM_GET_FAULT_HW2LOGIC_MAP_INDEX(u8FtuModule, u8FaultChannel)])
    {
        s_apFaultNotify[PWM_GET_FAULT_HW2LOGIC_MAP_INDEX(u8FtuModule, u8FaultChannel)](u8FtuModule,
                                                                                       u8FaultChannel);
    }
#endif

    /* clear all fault interrupt flag bit */
    FTU_HWA_ClearModuleAllFaultFlag(FTU_PTRS[u8FtuModule]);
}
#endif /* (PWM_FAULT_SUPPORTED == STD_ON) */

#endif

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/

/**
 * @brief           FTU initialize channel
 *
 * @param[in]       pFtuChannel     FTU channel configuration
 * @param[in]       eAlingnment     FTU channel alignment
 *
 * @return          void
 * [SWDESG_PWM_075]
 */
PWM_TEXT_SECTION void Pwm_Ftu_InitChannel(const Pwm_ChannelConfigType *pFtuChannel,
                                          Pwm_AlignmentType            eAlingnment)
{
    Pwm_InstanceType eInstance = pFtuChannel->ePwmModuleInstance;
    uint8            u8Channel = pFtuChannel->u8HwChannelId;
    uint32           u32DutyVal;

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /* clear channel interrupt enable flag first which save in the array used instance number as
     * index number */
    s_aFtuChannelInterruptFlag[eInstance] &= ~(1u << u8Channel);

    /* disable enable bit first */
    FTU_HWA_DisableChannelInterrupt(FTU_PTRS[eInstance], u8Channel);

    /* clear channel interrupt flag */
    FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[eInstance], (uint8)(1U << u8Channel));

#if ((defined PWM_FTU_0_ISR_USED) || (defined PWM_FTU_1_ISR_USED) ||                                 \
     (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) ||                                 \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))
    /* save callback notification pointer */
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
       Reason: The input instance and channel may not be 0 */
    s_apFtuChannelNotify[PWM_GET_HW2LOGIC_MAP_INDEX(eInstance, u8Channel)] =
        pFtuChannel->pPwmChannelNotification;
    /* PRQA S 2986 -- */
#endif
#endif

    /* write FTUEN bit to disable buffer-to-registry not-syncronized transfers and enable FTUEN
     * related update mode */
    FTU_HWA_SetModuleUpdateRegBySync(FTU_PTRS[eInstance]);

    /* configure channel to PWM mode */
    FTU_HWA_SetChannelPwmMode(FTU_PTRS[eInstance], u8Channel);

    if (PWM_LOW == pFtuChannel->ePwmPolarity)
    {
        /* the channel is set to high-true mode, so if polarity is PWM_LOW, need to reverse output
         * polarity */
        FTU_HWA_SetChannelPolarity(FTU_PTRS[eInstance], (uint8)(1U << u8Channel));
    }
    else
    {
        /* the channel is set to high-true mode, so if polarity is PWM_HIGH, need to clear FTUn_POL
         * register */
        FTU_HWA_ClearChannelPolarity(FTU_PTRS[eInstance], (uint8)(1U << u8Channel));
    }

#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
    /* clear specified bit in SWOCTRL register */
    FTU_HWA_ClearSoftwareOutputControl(FTU_PTRS[eInstance], ((uint32)1U << u8Channel));
#endif

    /* configure CnV register */
    u32DutyVal =
        Pwm_FtuInternal_CalculateCnVReg(eInstance, pFtuChannel->u16PwmDefaultDutyCycle, eAlingnment);
    if (pFtuChannel->ePhaseShiftMode == PWM_PHASESHIFT_DISABLE)
    {
        FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], u8Channel, u32DutyVal);
    }
    else
    {
        if (pFtuChannel->u16PwmDefaultDutyCycle == (uint16)0x8000U)
        {
            FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], u8Channel, (uint32)0x0U);
        }
        else
        {
            FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], u8Channel, pFtuChannel->u32PwmPhaseShiftCount);
        }
    }
    /* if combine mode is enabled, configure channel + 1 register */
    if (PWM_FTU_COMBINE_DISABLE != pFtuChannel->eFtuCombineMode)
    {
        /* write C(n+1)SC register as combined PWM mode */
        FTU_HWA_SetChannelPwmCombineMode(FTU_PTRS[eInstance], (uint8)(u8Channel + 1U));

        if (PWM_LOW == pFtuChannel->ePwmPolarity)
        {
            if (PWM_FTU_COMBINE_COMPL == pFtuChannel->eFtuCombineMode)
            {
                /* the channel is set to high-true mode, so if polarity is PWM_LOW, need to reverse
                 * output polarity */
                FTU_HWA_SetChannelPolarity(FTU_PTRS[eInstance], (uint8)(1U << (u8Channel + 1U)));
            }
            else
            {
                /* the channel is set to high-true mode, so if polarity is PWM_HIGH, need to clear
                 * FTUn_POL register */
                FTU_HWA_ClearChannelPolarity(FTU_PTRS[eInstance], (uint8)(1U << (u8Channel + 1U)));
            }
        }
        else
        {
            if (PWM_FTU_COMBINE_COMPL == pFtuChannel->eFtuCombineMode)
            {
                /* set specified bit in FTUn_POL register */
                FTU_HWA_ClearChannelPolarity(FTU_PTRS[eInstance], (uint8)(1U << (u8Channel + 1U)));
            }
            else
            {
                /* clear specified bit in FTUn_POL register */
                FTU_HWA_SetChannelPolarity(FTU_PTRS[eInstance], (uint8)(1U << (u8Channel + 1U)));
            }
        }
        if (pFtuChannel->ePhaseShiftMode == PWM_PHASESHIFT_DISABLE)
        {
            FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], (uint8)(u8Channel + 1U), u32DutyVal);
        }
        else
        {
            if (pFtuChannel->u16PwmDefaultDutyCycle == (uint16)0x8000U)
            {
                FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                        (uint8)(u8Channel + 1U),
                                        s_aFtuPeriodValue[eInstance]);
            }
            else
            {
                if ((pFtuChannel->u32PwmPhaseShiftCount + u32DutyVal) > s_aFtuModRegValue[eInstance])
                {
                    FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                            (uint8)(u8Channel + 1U),
                                            u32DutyVal + pFtuChannel->u32PwmPhaseShiftCount -
                                                s_aFtuModRegValue[eInstance]);
                }
                else
                {
                    FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                            (uint8)(u8Channel + 1U),
                                            u32DutyVal + pFtuChannel->u32PwmPhaseShiftCount);
                }
            }
        }
    }
    else
    {
        if (pFtuChannel->ePhaseShiftMode == PWM_PHASESHIFT_ENABLE)
        {
            if (pFtuChannel->u16PwmDefaultDutyCycle == (uint16)0x8000U)
            {
                FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                        (uint8)(u8Channel + 1U),
                                        s_aFtuPeriodValue[eInstance]);
            }
            else
            {
                if ((pFtuChannel->u32PwmPhaseShiftCount + u32DutyVal) > s_aFtuModRegValue[eInstance])
                {
                    FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                            (uint8)(u8Channel + 1U),
                                            u32DutyVal + pFtuChannel->u32PwmPhaseShiftCount -
                                                s_aFtuModRegValue[eInstance]);
                }
                else
                {
                    FTU_HWA_SetChannelValue(FTU_PTRS[eInstance],
                                            (uint8)(u8Channel + 1U),
                                            u32DutyVal + pFtuChannel->u32PwmPhaseShiftCount);
                }
            }
        }
        else
        {
            /* Do nothing */
        }
    }

    FTU_HWA_GenerateSwSync(FTU_PTRS[eInstance]);
}

/**
 * @brief           Initialize FTU module
 *
 * @param[in]       pConfigModule   FTU module configuration
 *
 * @return          void
 * [SWDESG_PWM_076]
 */
PWM_TEXT_SECTION void Pwm_Ftu_InitModule(const Pwm_Ftu_ModuleConfigType *pConfigModule)
{
#if (PWM_FAULT_SUPPORTED == STD_ON) && (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    uint8 u8TempVal;
#endif
    FtuCommon_ConfigType tFtuCommonConfig;
    uint32               u32SCSetting;

    /* disable write protection */
    FTU_HWA_DisableWriteProtection(FTU_PTRS[pConfigModule->eInstance]);

    /* write FTUn_MODE register*/
    FTU_HWA_ConfigFaultModeAndInitStatus(FTU_PTRS[pConfigModule->eInstance],
                                         pConfigModule->u32RegMode);

    /* write FTUn_CONF register */
    FTU_HWA_ConfigModuleCommonConfiguration(FTU_PTRS[pConfigModule->eInstance],
                                            pConfigModule->u32RegConf);

#if (PWM_FAULT_SUPPORTED == STD_ON)
    /* read fault bits */
    /* clear Fault interrupt flags */
    FTU_HWA_ClearModuleAllFaultFlag(FTU_PTRS[pConfigModule->eInstance]);

    /* write Fault Polarity registers */
    FTU_HWA_ConfigModuleFaultPolarity(FTU_PTRS[pConfigModule->eInstance],
                                      pConfigModule->u32RegFltpol);

    /* write Fault configuration registers */
    FTU_HWA_ConfigModuleFaultCtrl(FTU_PTRS[pConfigModule->eInstance], pConfigModule->u32RegFctrl);
#endif

    /* configure channel control register*/
    FTU_HWA_ConfigModuleChannelCtrl(FTU_PTRS[pConfigModule->eInstance],
                                    pConfigModule->u32RegChctrlVal);

    /* write FTUn_DEADTIME register */
    FTU_HWA_ConfigModuleDeadtime(FTU_PTRS[pConfigModule->eInstance], pConfigModule->u32RegDeadtime);

    /* check if update middle period is set */
    FTU_HWA_ConfigureSyncPoint(FTU_PTRS[pConfigModule->eInstance], pConfigModule->u32RegSync);

    if (PWM_CENTER_ALIGNED == pConfigModule->eAlingnment)
    {
        s_aFtuModRegValue[pConfigModule->eInstance] = pConfigModule->u32RegModVal >> ((uint16)1U);
        s_aFtuPeriodValue[pConfigModule->eInstance] = pConfigModule->u32RegModVal;
    }
    else
    {
        s_aFtuModRegValue[pConfigModule->eInstance] = pConfigModule->u32RegModVal - ((uint16)1U);
        s_aFtuPeriodValue[pConfigModule->eInstance] = pConfigModule->u32RegModVal;
    }

    u32SCSetting                = pConfigModule->u32RegSc;
    tFtuCommonConfig.u8Instance = (uint8)pConfigModule->eInstance;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type
     * Reason: No problem doing this as the value is within range of the cast type. */
    /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be cast
     * to a different essential type category or a wider essential type
     * Reason: It is allowed to cast the value which read from register address to a different type */
    tFtuCommonConfig.eClockSource = (FTU_ModuleClkSrcType)((u32SCSetting & FTU_SC_CLKS_MASK) >>
                                                           FTU_SC_CLKS_SHIFT);
    /* PRQA S 4394-- */
    /* PRQA S 4342-- */
    tFtuCommonConfig.u8ExternalClockIndex = pConfigModule->u8ExternalClk;
    tFtuCommonConfig.u32ModuloValue       = s_aFtuModRegValue[pConfigModule->eInstance];
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    tFtuCommonConfig.u8Prescaler = (uint8)((u32SCSetting & FTU_SC_PS_MASK) >> FTU_SC_PS_SHIFT);
    /* PRQA S 2985 -- */
    FtuCommon_Init(FTU_COMMON_MASTER_PWM, &tFtuCommonConfig);

    /* OUTMASK register is updated with the value of its buffer only by the PWM synchronization */
    FTU_HWA_EnableOutputMaskBySync(FTU_PTRS[pConfigModule->eInstance]);

#if (PWM_TRIGGER_OUT_API == STD_ON)
    /* write FTU_EXTTRIG*/
    FTU_HWA_ConfigTriggerControl(FTU_PTRS[pConfigModule->eInstance], pConfigModule->u32RegExtTrig);
#endif /* (PWM_TRIGGER_OUT_API == STD_ON) */

    /* write PWMLOAD register*/
    FTU_HWA_ConfigPWMLoad(FTU_PTRS[pConfigModule->eInstance], pConfigModule->u32RegPwmload);

#if (PWM_FAULT_SUPPORTED == STD_ON) && (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    for (u8TempVal = 0; u8TempVal < PWM_FTU_MODULE_FAULT_NO; u8TempVal++)
    {
        /* save fault callback pointer */
        s_apFaultNotify[PWM_GET_FAULT_HW2LOGIC_MAP_INDEX(pConfigModule->eInstance, u8TempVal)] =
            pConfigModule->pfFaultNotification[u8TempVal];
    }
#endif

    /* enable channel output */
    FTU_HWA_EnableChannelsOutput(FTU_PTRS[pConfigModule->eInstance],
                                 (uint8)((u32SCSetting & FTU_SC_CHNOUTEN_MASK) >>
                                         FTU_SC_CHNOUTEN_SHIFT));

#if (PWM_FTU_HAVE_UPDOWNDIS == STD_ON)
    /* FC7240 and FC7300GT can disable channel match trigger/interrupt when count-up/down in CPWM mode */
    FTU_HWA_DisableChannelMatchTriggerAndInterrupt(
        FTU_PTRS[pConfigModule->eInstance],
        (uint8)((u32SCSetting & FTU_SC_UPDOWN_DIS_MASK) >> FTU_SC_UPDOWN_DIS_SHIFT));
#endif

    /* configure PWM mode */
    if (FTU_SC_CPWMS_MASK == (u32SCSetting & FTU_SC_CPWMS_MASK))
    {
        /* enable CPWM Mode */
        FTU_HWA_EnableModuleCpwmMode(FTU_PTRS[pConfigModule->eInstance]);
    }
}

#if (PWM_DE_INIT_API == STD_ON)
/**
 * @brief           PWM FTU low level De-initialization function
 *
 * @param[in]       pFtuChannel     FTU channel configuration
 *
 * @return          void
 * [SWDESG_PWM_067]
 */
PWM_TEXT_SECTION void Pwm_Ftu_DeInitChannel(const Pwm_ChannelConfigType *pFtuChannel)
{
    Pwm_InstanceType eInstance = pFtuChannel->ePwmModuleInstance;
    uint8            u8Channel = pFtuChannel->u8HwChannelId;

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /* disable match compare interrupts for each channel */
    Pwm_FtuInternal_DisableInt(eInstance, u8Channel);
#endif

    /* set current channel channels to IDLE */
    Pwm_FtuInternal_SetSwOutputControl(eInstance,
                                       u8Channel,
                                       pFtuChannel->ePwmIdleState,
                                       pFtuChannel->eFtuCombineMode,
                                       (boolean)TRUE);

    /* clear channel value */
    FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], u8Channel, 0U);
    if (pFtuChannel->ePhaseShiftMode == PWM_PHASESHIFT_ENABLE)
    {
        FTU_HWA_SetChannelValue(FTU_PTRS[eInstance], (uint8)(u8Channel + 1U), 0U);
    }
}

/**
 * @brief           PWM low level common De-initialization function
 *
 * @param[in]       eInstance   FTU instance
 *
 * @return          void
 * [SWDESG_PWM_068]
 */
PWM_TEXT_SECTION void Pwm_Ftu_DeinitModule(const Pwm_InstanceType eInstance)
{
    FtuCommon_DeInit(FTU_COMMON_MASTER_PWM, (uint8)eInstance);

    /* clear CHCTRL register */
    FTU_HWA_ConfigModuleChannelCtrl(FTU_PTRS[eInstance], 0U);

    /* clear DEADTIME register */
    FTU_HWA_ConfigModuleDeadtime(FTU_PTRS[eInstance], 0U);

    /* clear TRIGCONF register */
    FTU_HWA_ConfigTriggerControl(FTU_PTRS[eInstance], 0U);

    /* clear FMS register */
    FTU_HWA_SetFMSVal(FTU_PTRS[eInstance], 0U);

    /* clear FLTCTRL register */
    FTU_HWA_ConfigModuleFaultCtrl(FTU_PTRS[eInstance], 0U);

    /* clear module configuration register */
    FTU_HWA_ConfigModuleCommonConfiguration(FTU_PTRS[eInstance], 0U);

    /* clear fault polarity register */
    FTU_HWA_ConfigModuleFaultPolarity(FTU_PTRS[eInstance], 0U);

    /* clear PWMLOAD register */
    FTU_HWA_ConfigPWMLoad(FTU_PTRS[eInstance], 0U);

#if (PWM_FAULT_SUPPORTED == STD_ON)
    /* write FTUn_MODE register */
    FTU_HWA_DisableModuleFaultInterrupt(FTU_PTRS[eInstance]);

    /* clear Fault interrupt flags */
    FTU_HWA_ClearModuleAllFaultFlag(FTU_PTRS[eInstance]);
#endif
}
#endif /* PWM_DE_INIT_API */

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/**
 * @brief           PWM low level set duty cycle value
 *
 * @param[in]       u16DutyCycle    PWM duty cycle value
 * @param[in]       pFtuChannel     FTU channel configuration
 * @param[in]       pModule         FTU module configuration
 *
 * @return          void
 * [SWDESG_PWM_078]
 */
PWM_TEXT_SECTION void Pwm_Ftu_SetDutyCycle(uint16                          u16DutyCycle,
                                           const Pwm_ChannelConfigType    *pFtuChannel,
                                           const Pwm_Ftu_ModuleConfigType *pModule)
{

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_00();
    /* setup the duty cycle value for all channels */
    Pwm_FtuInternal_SetDutyRegs(pFtuChannel, u16DutyCycle, pModule->eAlingnment);
    Pwm_FtuUpdteCV(pFtuChannel->ePwmModuleInstance);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_00();
}
#endif /* (PWM_SET_DUTY_CYCLE_API == STD_ON) */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)

/**
 * @brief           PWM FTU low level set all channel duty cycle function in one instance
 * @param[in]       pFtuChannel     FTU channel configuration
 * @param[in]       pPwmConfig      Pwm configuration
 *
 * @return          void
 */
void Pwm_AdjustAllDutyCycles(const Pwm_ChannelConfigType *pFtuChannel,
                             const Pwm_ConfigType        *pPwmConfig)
{
    Pwm_InstanceType             eInstance         = pFtuChannel->ePwmModuleInstance;
    Pwm_Ftu_ChannelType          u8ChannelMapIndex = PWM_GET_HW2LOGIC_MAP_INDEX(eInstance, 0);
    Pwm_ModuleType               u8ModuleIndex     = pPwmConfig->pHwToLogicInstanceMap[eInstance];
    const Pwm_ChannelConfigType *pFtuCh;
    uint8                        u8Index;
    uint8                        u8ChannelIndex;

    for (u8Index = u8ChannelMapIndex; u8Index < (u8ChannelMapIndex + PWM_FTU_MODULE_CHANNELS_NO);
         u8Index++)
    {
        u8ChannelIndex = pPwmConfig->pHwToLogicChannelMap[u8Index];
        if (0xFFU != u8ChannelIndex)
        {
            pFtuCh = &pPwmConfig->pPwmConfigChannels[u8ChannelIndex];
            Pwm_FtuInternal_SetDutyRegs(
                pFtuCh,
                s_aChannelDuty[u8ChannelIndex],
                pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u8ModuleIndex].eAlingnment);
        }
    }
    Pwm_FtuUpdteCV(eInstance);
}

/**
 * @brief           PWM FTU low level set period and duty cycle function
 *
 * @param[in]       u16Period       PWM FTU period value
 * @param[in]       u16DutyCycle    PWM FTU duty cycle value
 * @param[in]       pFtuChannel     FTU channel configuration
 * @param[in]       pModule         FTU module configuration
 *
 * @return          void
 * [SWDESG_PWM_080]
 */
PWM_TEXT_SECTION void Pwm_Ftu_SetPeriodAndDuty(Pwm_PeriodType        u32Period,
                                               uint16                u16DutyCycle,
                                               const Pwm_ConfigType *pPwmConfig,
                                               uint8                 u8Channel,
                                               uint8                 u8Module)
{
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_01();
    const Pwm_ChannelConfigType *pFtuChannel = &pPwmConfig->pPwmConfigChannels[u8Channel];
    const Pwm_Ftu_ModuleConfigType *pModule = &pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u8Module];
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /* disable overflow interrupt when period is 0 */
    if (0U == u32Period)
    {
        /* If the period is 0, disable the overflow interrupt */
        FtuCommon_DisableOverflow(FTU_COMMON_MASTER_PWM, (uint8)pFtuChannel->ePwmModuleInstance);
    }
    else
    {
        if (0U != s_aFtuOverflowInterruptFlag[pFtuChannel->ePwmModuleInstance])
        {
            /* The overflow interrupt already enable, enable overflow interrupt again in case the
             * previous period is 0 */
            FtuCommon_EnableOverflow(FTU_COMMON_MASTER_PWM, (uint8)pFtuChannel->ePwmModuleInstance);
        }
    }
#endif

    /* calculate the period value and set to the static arrays */
    Pwm_FtuInternal_CalculatePeriod(pFtuChannel->ePwmModuleInstance, u32Period, pModule->eAlingnment);

    /* write MOD register */
    FTU_HWA_SetModuleCompareValue(FTU_PTRS[pFtuChannel->ePwmModuleInstance],
                                  (uint32)(s_aFtuModRegValue[pFtuChannel->ePwmModuleInstance]));

    s_aChannelDuty[u8Channel] = u16DutyCycle;

    /* setup the duty cycle value for all channels */
    Pwm_AdjustAllDutyCycles(pFtuChannel, pPwmConfig);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_01();
}
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#if ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON))
/**
 * @brief           PWM FTU low level clear output force
 *
 * @param[in]       pConfigChannel  FTU channel configuration
 *
 * @return          void
 * [SWDESG_PWM_084]
 */
PWM_TEXT_SECTION void Pwm_Ftu_ClearOutputForce(const Pwm_ChannelConfigType *pConfigChannel)
{
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_02();
    /* setup the idle value for all channels */
    Pwm_FtuInternal_SetSwOutputControl(pConfigChannel->ePwmModuleInstance,
                                       pConfigChannel->u8HwChannelId,
                                       pConfigChannel->ePwmIdleState,
                                       pConfigChannel->eFtuCombineMode,
                                       (boolean)FALSE);
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_02();
}

/**
 * @brief           PWM FTU low level set output to idle function
 *
 * @param[in]       pConfigChannel  FTU channel configuration
 *
 * @return          void
 * [SWDESG_PWM_079]
 */
PWM_TEXT_SECTION void Pwm_Ftu_SetOutputToIdle(const Pwm_ChannelConfigType *pConfigChannel)
{
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_03();
    /* setup the idle value for all channels */
    Pwm_FtuInternal_SetSwOutputControl(pConfigChannel->ePwmModuleInstance,
                                       pConfigChannel->u8HwChannelId,
                                       pConfigChannel->ePwmIdleState,
                                       pConfigChannel->eFtuCombineMode,
                                       (boolean)TRUE);
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_03();
}
#endif /*((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON))*/

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM FTU low level disable notification function
 *
 * @param[in]       pConfigChannel  FTU channel configuration
 *
 * @return          void
 * [SWDESG_PWM_069]
 */
PWM_TEXT_SECTION void Pwm_Ftu_DisableNotification(const Pwm_ChannelConfigType *pConfigChannel)
{
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
       Reason: The input instance and channel may not be 0 */
    Pwm_Ftu_ChannelType nLogicalChannelIndex =
        PWM_GET_HW2LOGIC_MAP_INDEX(pConfigChannel->ePwmModuleInstance, pConfigChannel->u8HwChannelId);
    /* PRQA S 2986 -- */

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_04();

    /* The disable notificaiton and set output to idle will clear all interrupt */
    s_aFtuChannelNotifyEdge[nLogicalChannelIndex] = PWM_NO_EDGE;

    /* disable match compare interrupts for each channel */
    Pwm_FtuInternal_DisableInt(pConfigChannel->ePwmModuleInstance, pConfigChannel->u8HwChannelId);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_04();
}

/**
 * @brief           PWM FTU low level enable notification
 *
 * @param[in]       u16DutyCycle    channel duty cycle
 * @param[in]       eNotification   PWM edge detected to generate notification
 * @param[in]       eAlingnment     PWM alignment
 * @param[in]       pConfigChannel  FTU channel configuration
 *
 * @return          void
 * [SWDESG_PWM_071]
 */
PWM_TEXT_SECTION void Pwm_Ftu_EnableNotification(uint16                       u16DutyCycle,
                                                 Pwm_EdgeNotificationType     eNotification,
                                                 Pwm_AlignmentType            eAlingnment,
                                                 const Pwm_ChannelConfigType *pConfigChannel)
{
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
       Reason: The input instance and channel may not be 0 */
    Pwm_Ftu_ChannelType nLogicalChannelIndex =
        PWM_GET_HW2LOGIC_MAP_INDEX(pConfigChannel->ePwmModuleInstance, pConfigChannel->u8HwChannelId);
    /* PRQA S 2986 -- */

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_05();

    /* clear CHnF bit */
    FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[pConfigChannel->ePwmModuleInstance],
                                      (uint8)(1U << pConfigChannel->u8HwChannelId));

    /* clear notification type bit field */
    s_aFtuChannelNotifyEdge[nLogicalChannelIndex] &=
        (uint8)(~(uint32)(PWM_CHF_IRQ_EDGE | PWM_TOF_IRQ_EDGE | PWM_TOF_IRQ_NO_EDGE_NOTIF));

    /* clear interrupt flag */
    s_aFtuChannelInterruptFlag[pConfigChannel->ePwmModuleInstance] &= ~(
        1U << pConfigChannel->u8HwChannelId);
    s_aFtuOverflowInterruptFlag[pConfigChannel->ePwmModuleInstance] &= ~(
        1u << pConfigChannel->u8HwChannelId);

    switch (eNotification)
    {
        case PWM_BOTH_EDGES:
            if (PWM_CENTER_ALIGNED == eAlingnment)
            {
                s_aFtuChannelNotifyEdge[nLogicalChannelIndex] |= PWM_CHF_IRQ_EDGE;
            }
            else
            {
                s_aFtuChannelNotifyEdge[nLogicalChannelIndex] |= (PWM_TOF_IRQ_EDGE | PWM_CHF_IRQ_EDGE);
            }
            break;

        case PWM_RISING_EDGE:
            if (PWM_HIGH == pConfigChannel->ePwmPolarity)
            {
                s_aFtuChannelNotifyEdge[nLogicalChannelIndex] |= PWM_TOF_IRQ_EDGE;
            }
            else
            {
                s_aFtuChannelNotifyEdge[nLogicalChannelIndex] |= PWM_CHF_IRQ_EDGE;
            }
            break;

        default:
            if (PWM_LOW == pConfigChannel->ePwmPolarity)
            {
                s_aFtuChannelNotifyEdge[nLogicalChannelIndex] |= PWM_TOF_IRQ_EDGE;
            }
            else
            {
                s_aFtuChannelNotifyEdge[nLogicalChannelIndex] |= PWM_CHF_IRQ_EDGE;
            }
            break;
    }

    /* if duty is 0% or 100%*/
    if (((uint16)0U) == (u16DutyCycle & PWM_FTU_UPPER_LIMIT_DUTY_MASK))
    {
        s_aFtuChannelNotifyEdge[nLogicalChannelIndex] |= PWM_TOF_IRQ_NO_EDGE_NOTIF;
    }

    /* overflow interrupt is excepted */
    if (PWM_TOF_IRQ_EDGE == (s_aFtuChannelNotifyEdge[nLogicalChannelIndex] & PWM_TOF_IRQ_EDGE))
    {
        /* enable TOIE interrupt */
        s_aFtuOverflowInterruptFlag[pConfigChannel->ePwmModuleInstance] |=
            (uint8)(1u << pConfigChannel->u8HwChannelId);

        /* If current period is 0, do not enable overflow interrupt */
        if (0U != s_aFtuPeriodValue[pConfigChannel->ePwmModuleInstance])
        {
            FtuCommon_EnableOverflow(FTU_COMMON_MASTER_PWM,
                                     (uint8)pConfigChannel->ePwmModuleInstance);
        }
    }

    if (PWM_CHF_IRQ_EDGE == (s_aFtuChannelNotifyEdge[nLogicalChannelIndex] & PWM_CHF_IRQ_EDGE))
    {
        /* enable interrupts for the given channel */
        s_aFtuChannelInterruptFlag[pConfigChannel->ePwmModuleInstance] |=
            (uint8)(1U << pConfigChannel->u8HwChannelId);
        FTU_HWA_EnableChannelInterrupt(FTU_PTRS[pConfigChannel->ePwmModuleInstance],
                                       pConfigChannel->u8HwChannelId);
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_05();
}
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/**
 * @brief           PWM FTU low level get output state
 *
 * @param[in]       pConfigChannel  FTU channel configuration
 *
 * @return          PWM FTU channel output state
 * [SWDESG_PWM_073]
 */
PWM_TEXT_SECTION Pwm_OutputStateType Pwm_Ftu_GetOutputState(const Pwm_ChannelConfigType *pConfigChannel)
{
    Pwm_OutputStateType eOutputVal;

    if (0U != FTU_HWA_ReadChannelOutputValue(FTU_PTRS[pConfigChannel->ePwmModuleInstance],
                                             pConfigChannel->u8HwChannelId))
    {
        eOutputVal = PWM_HIGH;
    }
    else
    {
        eOutputVal = PWM_LOW;
    }

    return eOutputVal;
}
#endif

#if (PWM_TRIGGER_OUT_API == STD_ON)
/**
 * @brief           PWM FTU low level enable trigger out function
 *
 * @param[in]       eFtuModule      FTU module
 * @param[in]       u8FtuChannel    FTU channel
 * @param[in]       bReloadTrig     FTU reload trigger enable or not
 *
 * @return          void
 * [SWDESG_PWM_072]
 */
PWM_TEXT_SECTION void Pwm_Ftu_EnableTriggerOut(Pwm_InstanceType eFtuModule,
                                               uint8            u8FtuChannel,
                                               boolean          bReloadTrig)
{
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_06();
    /* configure FTU channel trigger out */
    FTU_HWA_ConfigChannelTriggerOut(FTU_PTRS[eFtuModule], (uint8)(1u << u8FtuChannel));

    if ((boolean)TRUE == bReloadTrig)
    {
        /* enable channel initialization trigger out */
        FTU_HWA_EnableChannelInitTriggerOut(FTU_PTRS[eFtuModule]);
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_06();
}

/**
 * @brief           PWM FTU low level disable trigger out function
 *
 * @param[in]       eFtuModule      FTU module
 * @param[in]       u8FtuChannel    FTU channel
 * @param[in]       bReloadTrig     FTU reload trigger enable or not
 *
 * @return          void
 * [SWDESG_PWM_070]
 */
PWM_TEXT_SECTION void Pwm_Ftu_DisableTriggerOut(Pwm_InstanceType eFtuModule,
                                                uint8            u8FtuChannel,
                                                boolean          bReloadTrig)
{
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_07();

    /* disable FTU channel trigger out */
    FTU_HWA_DisableChannelTriggerOut(FTU_PTRS[eFtuModule], (uint8)(1u << u8FtuChannel));

    if ((boolean)TRUE == bReloadTrig)
    {
        /* disable channel initialization trigger out */
        FTU_HWA_DisableChannelInitTriggerOut(FTU_PTRS[eFtuModule]);
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_07();
}

#endif /*PWM_TRIGGER_OUT_API*/

#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
/**
 * @brief           PWM FTU low level mask output function
 *
 * @param[in]       eModuleId       FTU module
 * @param[in]       u8ChannelMask   FTU channel mask value
 *
 * @return          void
 * [SWDESG_PWM_077]
 */
PWM_TEXT_SECTION void Pwm_Ftu_MaskOutputs(Pwm_InstanceType eModuleId, uint8 u8ChannelMask)
{
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_08();

    /* set module OUTMASK */
    FTU_HWA_SetModuleOutmask(FTU_PTRS[eModuleId], u8ChannelMask);

    /* generate a software synchronous event */
    FTU_HWA_DisableGenerateSwSync(FTU_PTRS[eModuleId]);
    FTU_HWA_GenerateSwSync(FTU_PTRS[eModuleId]);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_08();
}

/**
 * @brief           PWM low level clear mask output,  it will disable the forced channel.
 *
 * @param[in]       eModuleId       FTU module
 * @param[in]       u8ChannelMask   FTU channel mask value
 *
 * @return          void
 * [SWDESG_PWM_082]
 */
PWM_TEXT_SECTION void Pwm_Ftu_UnMaskOutputs(Pwm_InstanceType eModuleId, uint8 u8ChannelMask)
{
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_09();

    /* clear module OUTMASK */
    FTU_HWA_ClearModuleOutmask(FTU_PTRS[eModuleId], u8ChannelMask);

    /* generate a software synchronous event */
    FTU_HWA_DisableGenerateSwSync(FTU_PTRS[eModuleId]);
    FTU_HWA_GenerateSwSync(FTU_PTRS[eModuleId]);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_09();
}
#endif /*PWM_ENABLE_MASKING_OPERATIONS*/

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function was called in Pwm_Hw_GetMaxPeriodValue */
/**
 * @brief           Get max period value about FTU instance
 *
 * @param[in]       eInstance   PWM hardware instance
 *
 * @return          Max period value
 * [SWDESG_PWM_160]
 */
PWM_TEXT_SECTION uint32 Pwm_Ftu_GetMaxPeriodValue(Pwm_InstanceType eInstance)
{
    uint32 u32MaxValue;
#if (PWM_FTU_HAVE_24BIT_CNT == STD_OFF)
    (void)eInstance;
    u32MaxValue = (uint32)PWM_CHANNEL_DUTY_MAX;
#else
    if ((eInstance == PWM_INSTANCE_FTU_1) || (eInstance == PWM_INSTANCE_FTU_2))
    {
        u32MaxValue = PWM_CHANNEL_DUTY_U24_MAX;
    }
    else
    {
        u32MaxValue = PWM_CHANNEL_DUTY_MAX;
    }
#endif /* (PWM_FTU_HAVE_24BIT_CNT == STD_OFF) */
    return u32MaxValue;
}
/* PRQA S 1503 --*/
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
/**
 * @brief           Get period value about FTU instance
 *
 * @param[in]       eInstance   FTU instance
 *
 * @return          Period value
 * [SWDESG_PWM_074]
 */
PWM_TEXT_SECTION Pwm_PeriodType Pwm_Ftu_GetPeriodValue(Pwm_InstanceType eInstance)
{
    return (Pwm_PeriodType)s_aFtuPeriodValue[eInstance];
}
#endif /* PWM_GET_CHANNEL_STATE_API */

#if (PWM_DEV_ERROR_DETECT == STD_ON)

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM FTU low level validate notification function
 *
 * @param[in]       eAlignment      FTU align type
 * @param[in]       eNotification   FTU edge detected type to generate notification
 *
 * @return          PWM FTU function return type
 * [SWDESG_PWM_083]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_Ftu_ValidateNotification(Pwm_AlignmentType        eAlignment,
                                                             Pwm_EdgeNotificationType eNotification)
{
    Std_ReturnType u8RetVal = (Std_ReturnType)E_OK;
    if ((PWM_CENTER_ALIGNED == eAlignment) && (PWM_BOTH_EDGES != eNotification))
    {
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    return u8RetVal;
}
#endif /* PWM_NOTIFICATION_SUPPORTED == STD_ON */

#endif /*(PWM_DEV_ERROR_DETECT == STD_ON)*/

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)

/**
 * @brief           PWM FTU low level set power state function
 *
 * @param[in]       pModule         FTU module configuration
 * @param[in]       ePowerState     PWM power state
 *
 * @return          void
 * [SWDESG_PWM_081]
 */
PWM_TEXT_SECTION void Pwm_Ftu_SetPowerState(const Pwm_Ftu_ModuleConfigType *pModule,
                                            Pwm_PowerStateType              ePowerState)
{
    if (PWM_LOW_POWER == ePowerState)
    {
        /* write SC register to disable clock */
        FTU_HWA_SetModuleClkSrc(FTU_PTRS[pModule->eInstance], (uint8)FTU_MDOULE_NO_CLK);
    }
    else
    {
        /* write FTUn_SC register to set clock */
        FTU_HWA_SetModuleClkSrc(FTU_PTRS[pModule->eInstance],
                                (uint8)(pModule->u32RegSc & FTU_SC_CLKS_MASK));
    }
}
#endif /* (PWM_POWER_STATE_SUPPORTED == STD_ON) */

#if ((defined PWM_FTU_0_ISR_USED) || (defined PWM_FTU_1_ISR_USED) ||                                 \
     (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) ||                                 \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))

/**
 * @brief           PWM low level common process interrupt function
 *
 * @param[in]       u8Instance              FTU instance
 * @param[in]       u32Overflow             FTU overflow interrupt flag
 * @param[in]       u32ChannelIntrFlag      FTU channel interrupt flag
 * @param[in]       u32FaultFlag            FTU fault interrupt flag
 *
 * @return          void
 * [SWS_Pwm_00026] [FMR_Pwm_0001] [FMR_Pwm_0002]
 */
PWM_TEXT_SECTION void Pwm_LL_FtuNCommonProcessInt(uint8  u8Instance,
                                                  uint32 u32Overflow,
                                                  uint32 u32ChannelIntrFlag,
                                                  uint32 u32FaultFlag)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    if (NULL_PTR != Pwm_ConfigPtr[u8CoreId])
    {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        uint8               u8Index              = 0U;
        uint32              u32Flag              = 0U;
        Pwm_Ftu_ChannelType nLogicalChannelIndex = 0U;

        for (u8Index = 0U; u8Index < PWM_FTU_MODULE_CHANNELS_NO; u8Index++)
        {
            /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
            Reason: The input instance and channel may not be 0 */
            nLogicalChannelIndex = PWM_GET_HW2LOGIC_MAP_INDEX(u8Instance, u8Index);
            /* PRQA S 2986 -- */
            u32Flag = (uint32)1U << u8Index;
            if (0U == (PWM_TOF_IRQ_NO_EDGE_NOTIF & s_aFtuChannelNotifyEdge[nLogicalChannelIndex]))
            {
                if ((0U != (u32ChannelIntrFlag & u32Flag)) &&
                    (0U != (s_aFtuChannelInterruptFlag[u8Instance] & u32Flag)))
                {
                    Pwm_Ftu_ProcessCommonInterrupt(u8Instance, u8Index);
                }
                if ((0u != u32Overflow) && (0U != (s_aFtuOverflowInterruptFlag[u8Instance] & u32Flag)))
                {
                    Pwm_Ftu_ProcessCommonInterrupt(u8Instance, u8Index);
                }
            }
        }
#endif
#if (PWM_FAULT_SUPPORTED == STD_ON)
        for (u8Index = 0U; u8Index < PWM_FTU_MODULE_FAULT_NO; u8Index++)
        {
            u32Flag = (uint32)1U << u8Index;
            if (0U != (u32FaultFlag & u32Flag))
            {
                Pwm_Ftu_ProcessFaultInterrupt(u8Instance, u8Index);
            }
        }
#else
        (void)u32FaultFlag;
#endif
    }
    else
    {
#if (PWM_FAULT_SUPPORTED == STD_ON)
        /* clear all fault interrupt flag bit */
        FTU_HWA_ClearModuleAllFaultFlag(FTU_PTRS[u8Instance]);
#endif
    }
}

#endif

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#endif /*PWM_FTU_USED */

#ifdef __cplusplus
}
#endif

/** @} */
