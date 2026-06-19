/**
 *   @file    SSI_Isr.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD SSI - SSI Driver ISR layer source file.
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

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Ssi.h"
#include "Ssi_Hal.h"
#include "Ssi_HWA.h"
#include "Mcal.h"
#include "CDD_Ssi_Cfg.h"
/*==================================================================================================
*                                       SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define SSI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"
#if (defined(SSI_INSTANCE0_INT) && (SSI_INSTANCE0_INT == STD_ON))
SSI_DATA_SECTION static SSI_Type *const aSSI_Base[] = SSI_BASE_PTRS;
#endif
#define SSI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
extern const Ssi_ConfigType *Ssi_pConfig;

extern uint8               s_SSI_PreStop[SSI_INSTANCE_COUNT];
extern uint32              s_SSI_PreWhl[SSI_INSTANCE_COUNT];
extern Ssi_NotifactionType aSsiNotifcation[SSI_INSTANCE_COUNT][SSI_SUBINS_COUNT];
extern SsiHw_Status        aSsiHwStatus[SSI_INSTANCE_COUNT];

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define SSI_START_SEC_CODE

/**
 * @brief Include Memory mapping specification
 *
 */
#include "Ssi_MemMap.h"

#if (defined(SSI_INSTANCE0_INT) && (SSI_INSTANCE0_INT == STD_ON))
SSI_TEXT_SECTION ISR(SSI_IsrSSI0_ALL);
#endif

#define SSI_STOP_SEC_CODE

/**
 * @brief Include Memory mapping specification
 *
 */
#include "Ssi_MemMap.h"
/*==================================================================================================
*                                      Global FUNCTIONS
==================================================================================================*/
#define SSI_START_SEC_CODE
/**
 * @brief Include Memory mapping specification
 *
 */
#include "Ssi_MemMap.h"

#if (defined(SSI_INSTANCE0_INT) && (SSI_INSTANCE0_INT == STD_ON))
/**
 *   @brief   This function process the interrupt.
 *   @details This function process the SSI interrupt
 *
 *   @param[in] u8Instance        Hardware SSI instance.
 *
 *
 */
SSI_TEXT_SECTION static void SSI_ProcessInterrupt(uint8 u8Instance)
{
    uint8                   u8SubInstance;
    uint8                   u8SubHwInstance;
    uint32                  u32Tmp;
    uint32                  u32State;
    SSI_Type               *pSSI         = aSSI_Base[u8Instance];
    Ssi_MessageDataType     tInf         = { 0U };
    Ssi_InstanceConfigType *pInstanceCfg = SsiConfig.pSSIInstanceCfg[u8Instance];

    for (u8SubInstance = 0U; u8SubInstance < pInstanceCfg->u8SubInstanceCount; u8SubInstance++)
    {
        u8SubHwInstance = pInstanceCfg->pSSISubInstanceCfg[u8SubInstance]->u8SubInstanceHwId;
        u32State        = SSI_HWA_GetReadyFlag(pSSI, u8SubHwInstance);
        if (0U != u32State)
        {
            /* FUNC_Ssi_00036 SWDESG_SSI_036 */
            SSI_HWA_ClearReadyFlag(pSSI, u8SubHwInstance);
            if ((aSsiHwStatus[u8Instance].bInsEnable == TRUE) &&
                (aSsiHwStatus[u8Instance].bSubinsEnable[u8SubHwInstance] == TRUE))
            {
                tInf.u8Subidx = u8SubInstance;
                if ((u32State & SSI_ISR_SPC_VLD(1)) == SSI_ISR_SPC_VLD(1))
                {
                    u32Tmp = SSI_HWA_GetSensorProtocolCnt(pSSI, u8SubHwInstance);
                    if (s_SSI_PreStop[u8SubHwInstance] == 1U)
                    {
                        tInf.U32Whlval = s_SSI_PreWhl[u8SubHwInstance] + u32Tmp;
                    }
                    else
                    {
                        tInf.U32Whlval = u32Tmp;
                    }
                    s_SSI_PreWhl[u8SubHwInstance] = u32Tmp;

                    if ((u32State & SSI_ISR_WHL_STOP(1)) == SSI_ISR_WHL_STOP(1))
                    {
                        tInf.u8Status                  = 1U << SSI_STOP_BIT;
                        s_SSI_PreStop[u8SubHwInstance] = 1U;
                    }
                    else
                    {
                        tInf.u8Status                  = 1U << SSI_NORMAL_BIT;
                        s_SSI_PreStop[u8SubHwInstance] = 0U;
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
                tInf.u8Prot = SSI_HWA_GetSubinsProtSel(pSSI, u8SubHwInstance);
                switch (tInf.u8Prot)
                {
                    case SSI_NORMAL:
                        tInf.u32Date1 = 0U;
                        tInf.u32Date2 = 0U;
                        break;
                    case SSI_PWM:
                        tInf.u32Date1 = SSI_HWA_GetPwmDecodeVal(pSSI, u8SubHwInstance);
                        tInf.u32Date2 = 0U;
                        break;
                    case SSI_GPWM:
                        tInf.u32Date1 = SSI_HWA_GetHighPulseCnt(pSSI, u8SubHwInstance);
                        tInf.u32Date2 = 0U;
                        break;
                    case SSI_AK:
                        tInf.u32Date1 = SSI_HWA_GetAkManDecodeCnt(pSSI, u8SubHwInstance);
                        tInf.u32Date2 = SSI_HWA_GetAkMancodeVal(pSSI, u8SubHwInstance);
                        break;
                    default:
                        /* do nothing */
                        break;
                }
                aSsiNotifcation[u8Instance][u8SubHwInstance](&tInf);
                break;
            }
            else
            {
                /* do nothing */
            }
        }
        else
        {
            /* do nothing */
        }
    }
}
#endif

#if (defined(SSI_INSTANCE0_INT) && (SSI_INSTANCE0_INT == STD_ON))
/**
 *   @brief   This function process the interrupt SSI0.
 *   @details This function process the SSI0 interrup
 *   @isr
 *   @implements  SSIInterfaceNo_Isr_Activity
 *
 */
SSI_TEXT_SECTION ISR(SSI_IsrSSI0_ALL)
{
#if (SSI_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (SSI_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == Ssi_pConfig->SSI_CtrlCoresMappingPtr[SSI_INSTANCE0_CONTROLLER_ID])
    {
#endif
        SSI_ProcessInterrupt(0U);
        EXIT_INTERRUPT();
#if (SSI_SUPPORT_MULTICORE == STD_ON)
    }
#endif
}
#endif

#define SSI_STOP_SEC_CODE
/**
 * @brief Include Memory mapping specification
 *
 */
#include "Ssi_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
