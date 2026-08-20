/**
 *   @file    Dma_LLD.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR DMA - Direct Memory Access(DMA) functions
 *   @details DMA header file, contain standard APIs.
 *
 *   @addtogroup DMA
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : DMA
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
*   0.1.0       07/06/2023    QXW0099       N/A          DMA Initial Version
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Multicore Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       12/11/2023    QXW0099       N/A          Fix channel config error
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/
/* PRQA S 5087 EOF
 * This attribute syntax is a language extension.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this
 * case, the defined MACRO used to select different parameter or code properties in MemMap.h
 */

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/**
 * @file           Dma_LLD.c
 */

#include "CDD_Dma.h"
#include "Dma_LLD.h"
#include "Dma_HWA.h"
#include "DmaMux_Reg.h"
#include "DmaMux_HWA.h"
#include "SchM_Dma.h"
#include "Mcal.h"

/*==================================================================================================
*                                       VERSION CHECKS
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

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define DMA_START_SEC_CONST_UNSPECIFIED
#include "Dma_MemMap.h"

/** @violates @ref DMA_c_REF_5 MISRA 2004 Required Rule 8.10, All declarations and definitions of
 *objects or functions at file scope shall have internal linkage unless external linkage is
 *required.
 **/

DMA_DATA_SECTION static Dma_Type *const s_apDmaBase[] = DMA_BASE_PTRS;

#define DMA_STOP_SEC_CONST_UNSPECIFIED
#include "Dma_MemMap.h"

#define DMA_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Dma_MemMap.h"

#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
#if ((DMA_0_USED_CHANNEL_NUM > 0u) && \
     (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF)))
DMA_DATA_SECTION CFG_REG Dma0_ShadowReg[DMA_0_USED_CHANNEL_NUM];
#endif

#if ((DMA_1_USED_CHANNEL_NUM > 0u) && \
     (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF)))
DMA_DATA_SECTION CFG_REG Dma1_ShadowReg[DMA_1_USED_CHANNEL_NUM];
#endif
#endif

#define DMA_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Dma_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

#define DMA_START_SEC_CONST_32
#include "Dma_MemMap.h"

/** @violates @ref DMA_c_REF_5 MISRA 2004 Required Rule 8.10, All declarations and definitions of
 *objects or functions at file scope shall have internal linkage unless external linkage is
 *required.
 **/

#if ((DMA_CORE_HAVE_TCM_BACKDOOR == STD_ON) && (DMA_MCU_HAVE_SMP == STD_OFF))
const uint32 Dma_CalcDTCMBackDoor[3] = { DTCM0_BACKDOOR, DTCM1_BACKDOOR, DTCM2_BACKDOOR };

const uint32 Dma_CalcITCMBackDoor[3] = { ITCM0_BACKDOOR, ITCM1_BACKDOOR, ITCM2_BACKDOOR };
#endif

#if (DMA_MCU_HAVE_SMP == STD_ON)
const uint32 Dma_CalcDTCMBackDoor[4] = { DTCM0_BACKDOOR,
                                         DTCM1_BACKDOOR,
                                         DTCM2_BACKDOOR,
                                         DTCM3_BACKDOOR };

const uint32 Dma_CalcITCMBackDoor[4] = { ITCM0_BACKDOOR,
                                         ITCM1_BACKDOOR,
                                         ITCM2_BACKDOOR,
                                         ITCM3_BACKDOOR };
#endif

#define DMA_STOP_SEC_CONST_32
#include "Dma_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define DMA_START_SEC_CODE
#include "Dma_MemMap.h"

/**
 *   @brief   This function reset the DMA_MUX.
 *   @details This function reset the DMA_MUX.
 *
 *   @param[in]  Dmamux_Instance             Dmamux instance number
 *
 *   @return     void
 *   [SWDESG_DMA_108]
 */
static inline void Dmamux_Reset(DmaMux_Type *const Dmamux_Instance)
{
    uint8 u8Index;
    /* Reset request source of all channels */
    for (u8Index = 0U; u8Index < (uint8)DMAMUX_CHCFG_COUNT; u8Index++)
    {
        DmaMux_HWA_SetRequestSource(Dmamux_Instance, u8Index, FALSE, DMA_REQ_DISABLED);
    }
    /* Reset channel0~3 period trigger */
    for (u8Index = 0U; u8Index < DMA_PERIOD_CHANNEL_COUNT; u8Index++)
    {
        DmaMux_HWA_SetPeriodicTrigFlag(Dmamux_Instance, u8Index, FALSE);
    }
}

/**
 *   @brief   This function set all the configured channel.
 *   @details This function set all the configured channel.
 *
 *   @param[in]  pCoreCfg                 Pointer to attribute of channel with configuration
 *
 *   @return     void
 */
static void Dma_LLD_SetChConfig(Dma_InstanceType                    eDma_Instance,
                                const Dma_CoreSpecificChConfigType *pCoreCfg)
{
    uint32             u32Index;
    uint8              u8PartitionId = DMA_GET_CPU_ID();
    DmaMux_Type *const aDmamux[]     = DMAMUX_BASE_PTRS;
    Dma_Type *const    pDma          = s_apDmaBase[eDma_Instance];
    DmaMux_Type *const pDmamux       = aDmamux[eDma_Instance];
#if (DMA_MAX_CORE_USED_U8 == 4)
    uint8 u8chnum = (u8PartitionId < 2U) ? DMA_0_USED_CHANNEL_NUM : DMA_1_USED_CHANNEL_NUM;
#elif ((DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
    uint8 u8chnum = DMA_0_USED_CHANNEL_NUM;
#else
    uint8 u8chnum = (u8PartitionId == 0U) ? DMA_0_USED_CHANNEL_NUM : DMA_1_USED_CHANNEL_NUM;
#endif

    for (u32Index = 0UL; u32Index < u8chnum; u32Index++)
    {
        if (u8PartitionId == pCoreCfg->pDma_pChConfig[u32Index].u8PartitionId)
        {
            /* Config Dma Interrupt */
            if ((boolean)TRUE == pCoreCfg->pDma_pChConfig[u32Index].bDmaDoneInterruptEnable)
            {
                Dma_HWA_EnableTransferCompleteInterrupt(
                    pDma,
                    pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid);
            }
            else
            {
                Dma_HWA_DisableTransferCompleteInterrupt(
                    pDma,
                    pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid);
            }
            if ((boolean)TRUE == pCoreCfg->pDma_pChConfig[u32Index].bDmaErrorInterruptEnable)
            {
                Dma_HWA_EnableChannelErrorInterrupt(pDma,
                                                    pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid);
            }
            else
            {
                Dma_HWA_DisableChannelErrorInterrupt(
                    pDma,
                    pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid);
            }
            Dma_HWA_SetHalfCompleteInterruptEnableFlag(
                pDma,
                pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid,
                pCoreCfg->pDma_pChConfig[u32Index].bDmaHalfDoneInterruptEnable);

            /* Config Dma Mux module */
            DmaMux_HWA_SetPeriodicTrigFlag(pDmamux,
                                           pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid,
                                           pCoreCfg->pDma_pChConfig[u32Index].bDmaMuxPeriodModeEnable);

            if (DMA_REQ_DISABLED == pCoreCfg->pDma_pChConfig[u32Index].eDmaMuxRequestSource)
            {
                DmaMux_HWA_SetRequestSource(pDmamux,
                                            pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid,
                                            FALSE,
                                            DMA_REQ_DISABLED);
            }
            else
            {
                DmaMux_HWA_SetRequestSource(pDmamux,
                                            pCoreCfg->pDma_pChConfig[u32Index].u8Dmachannelid,
                                            TRUE,
                                            pCoreCfg->pDma_pChConfig[u32Index].eDmaMuxRequestSource);
            }
        }
    }
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 *   @brief   This function init the DMA module.
 *   @details This function init the DMA module.
 *
 *   @param[in]  pConfig           point to user config informations.
 *
 *   @return     void
 *   [SWDESG_DMA_068]
 */
/* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer value.
 * Reason: there is no risk due to the hardware. */
DMA_TEXT_SECTION void Dma_LLD_Init(Dma_InstanceType eDma_Instance, const Dma_ConfigType *pConfig)
{
  uint8 u8PartitionId = DMA_GET_CPU_ID();
  Dma_Type *const pDma = s_apDmaBase[eDma_Instance];
  const Dma_CoreSpecificChConfigType *pCoreCfg = pConfig->pDmaCoreConfig[u8PartitionId];
  uint32 u32Index;
  uint8 u8Index;
  uint8 u8Temp = 0;
  uint8 u8channelnum;
#if (DMA_INSTANCE_COUNT == 2u)
  if ((u8PartitionId == DMA_MASTERCORE_INSTANCE0) || (u8PartitionId == DMA_MASTERCORE_INSTANCE1)) {
#elif ((DMA_INSTANCE_COUNT == 1u) && (DMA_ECUC_PARTITIONS_MAX != 1U))
  if (u8PartitionId == DMA_MASTERCORE_INSTANCE0) {
#endif
    /*Restore to default value*/
    Dma_LLD_DeInit(eDma_Instance);

    if (eDma_Instance == DMA_INSTANCE_0) {
      u8channelnum = DMA_0_USED_CHANNEL_NUM;
    } else {
      u8channelnum = DMA_1_USED_CHANNEL_NUM;
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_04();
    /*Config Dma channel priority*/
    for (u32Index = 0UL; u32Index < (uint32)DMA_CFG_COUNT; u32Index++) {
      /* PRQA S 0771 ++ #Misra-C:2012 Rule-15.4 More than one 'break' statement has been
         used to terminate this iteration statement. Reason: The 'break' statements are
         under different conditions . */
      /* PRQA S 2877 ++ #Misra Dir-4.1:This loop will never be executed more than once.
       * Reason: DMA_1_USED_CHANNEL_NUM is decided by user */
      for (u8Index = 0U; u8Index < u8channelnum; u8Index++) {
        if (u32Index == pCoreCfg->pDma_pChConfig[u8Index].u8Dmachannelid) {
          /* Configured channel id found*/
          Dma_HWA_SetPriority(pDma, pCoreCfg->pDma_pChConfig[u8Index].u8Dmachannelid, pCoreCfg->pDma_pChConfig[u8Index].u8DmaChannelPriority);
          break;
        } else {
          /* nothing todo */
        }
      }
      /* PRQA S 0771 -- */
      /* PRQA S 2877 -- */
      if (u8Index >= u8channelnum) {
        /* Configure unused channel*/
        Dma_HWA_SetPriority(pDma, (uint8)u32Index, (u8channelnum + u8Temp));
        u8Temp += 1U;
      }
    }
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_04();

    /*Config Dma CR module*/
    Dma_HWA_SetInnerLoopMappingEnableFlag(pDma, pConfig->pDmaHwunitConfig[eDma_Instance].bDmaEnableInnerLoopMap);

    Dma_HWA_SetContinuousTrigModeEnableFlag(pDma, pConfig->pDmaHwunitConfig[eDma_Instance].bDmaEnableContinousLinkMode);

    Dma_HWA_SetHaltOnErrorFlag(pDma, pConfig->pDmaHwunitConfig[eDma_Instance].bDmaEnableHaltOnError);

    Dma_HWA_SetDebugModeStopFlag(pDma, pConfig->pDmaHwunitConfig[eDma_Instance].bDmaEnableDebugStopMode);

    if ((boolean)TRUE == pConfig->pDmaHwunitConfig[eDma_Instance].bDmaEnableRoundRobinMode) {
      Dma_HWA_SetArbitrationAlgorithm(pDma, DMA_ARBITRATION_ALGORITHM_ROUND_ROBIN);
    } else {
      Dma_HWA_SetArbitrationAlgorithm(pDma, DMA_ARBITRATION_ALGORITHM_FIXED_PRIORITY);
    }
    if ((boolean)TRUE != pConfig->pDmaHwunitConfig[eDma_Instance].bDmaEnableMonitorChecker) {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
      if (eDma_Instance == DMA_INSTANCE_0) {
        Dma_HWA_DisableMonitorChecker(pDma);
      }
#endif
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
      if (eDma_Instance == DMA_INSTANCE_1) {
        Dma_HWA_DisableMonitorChecker(pDma);
      }
#endif
    }
#if ((DMA_INSTANCE_COUNT == 2u) || ((DMA_INSTANCE_COUNT == 1u) && (DMA_ECUC_PARTITIONS_MAX != 1U)))
  }
#endif

  Dma_LLD_SetChConfig(eDma_Instance, pCoreCfg);
}
/* PRQA S 2842 -- */

/**
 *   @brief   This function deinit the DMA module.
 *   @details This function deinit the DMA module.
 *
 *   @param[in]  eDma_Instance     instance number.
 *
 *   @return     void
 *   [SWDESG_DMA_069]
 */
DMA_TEXT_SECTION void Dma_LLD_DeInit(const Dma_InstanceType eDma_Instance)
{
    uint8              u8Index;
    DmaMux_Type *const aDmamux[] = DMAMUX_BASE_PTRS;
    Dma_Type *const    pDma      = s_apDmaBase[eDma_Instance];
    DmaMux_Type *const pDmamux   = aDmamux[eDma_Instance];

    Dma_HWA_SetControlRegister(pDma, 0x400U);
    Dma_HWA_DisableAllChannelErrorInterrupt(pDma);
    Dma_HWA_DisableAllChannelRequest(pDma);
    Dma_HWA_ClearAllChannelDoneStatus(pDma);
    Dma_HWA_ClearAllChannelErrorFlag(pDma);
    Dma_HWA_ClearAllChannelInterruptFlag(pDma);
    pDma->DUME[0] = 0U;
#if (DMA_DUME_COUNT == 2)
    pDma->DUME[1] = 0U;
#endif
    for (u8Index = 0U; u8Index < DMA_DUMO_COUNT; u8Index++)
    {
        Dma_HWA_SetUnalignModulo(pDma, u8Index, 0U, 0U);
    }
    for (u8Index = 0U; u8Index < DMA_CFG_COUNT; u8Index++)
    {
        Dma_HWA_SetPriority(pDma, u8Index, u8Index);
        pDma->CFG[u8Index].SADDR           = 0UL;
        pDma->CFG[u8Index].SOFF            = 0U;
        pDma->CFG[u8Index].SLAST           = 0UL;
        pDma->CFG[u8Index].DADDR           = 0UL;
        pDma->CFG[u8Index].DOFF            = 0U;
        pDma->CFG[u8Index].DLAST           = 0U;
        pDma->CFG[u8Index].ATTR            = 0U;
        pDma->CFG[u8Index].NBYTES.ILNO     = 0UL;
        pDma->CFG[u8Index].NBYTES.ILOFFNO  = 0UL;
        pDma->CFG[u8Index].NBYTES.ILOFFYES = 0UL;
        pDma->CFG[u8Index].CSR             = 0U;
        pDma->CFG[u8Index].BLC.CHTRGENNO   = 0U;
        pDma->CFG[u8Index].CLC.CHTRGENNO   = 0U;
        pDma->CFG[u8Index].BLC.CHTRGENYES  = 0U;
        pDma->CFG[u8Index].CLC.CHTRGENYES  = 0U;
    }
    Dmamux_Reset(pDmamux);
}

/**
 *   @brief   This function cancel the remaining transfer of the DMA.
 *   @details This function cancel the remaining transfer of the DMA.
 *
 *   @param[in]  eDma_Instance     instance number.
 *
 *   @return     Std_ReturnType
 *   [SWDESG_DMA_070]
 */
DMA_TEXT_SECTION Std_ReturnType Dma_LLD_CancelTransfer(const Dma_InstanceType eDma_Instance)
{
    Dma_Type *const pDma       = s_apDmaBase[eDma_Instance];
    Std_ReturnType  eRet       = E_OK;
    uint32          u32TimeOut = DMA_CANCEL_TRANS_WAITING_TIME;

    Dma_HWA_CancelTransfer(pDma);
    while ((Dma_HWA_GetCancelTransferStatus(pDma) == (boolean)TRUE) && (u32TimeOut != 0UL))
    {
        u32TimeOut--;
    }
    if (u32TimeOut == 0U)
    {
        eRet = E_NOT_OK;
    }

    return eRet;
}

/**
 *   @brief   This function cancel the remaining transfer of the DMA and generate an error after
 * finished cancelling.
 *   @details This function cancel the remaining transfer of the DMA and generate an error after
 * finished cancelling.
 *
 *   @param[in]  eDma_Instance     instance number.
 *
 *   @return     Std_ReturnType
 *   [SWDESG_DMA_071]
 */
DMA_TEXT_SECTION Std_ReturnType Dma_LLD_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance)
{
    Dma_Type *const pDma       = s_apDmaBase[eDma_Instance];
    Std_ReturnType  eRet       = E_OK;
    uint32          u32TimeOut = DMA_CANCEL_TRANS_WAITING_TIME;

    Dma_HWA_ErrorCancelTransfer(pDma);
    while ((Dma_HWA_GetErrorCancelTransferStatus(pDma) == (boolean)TRUE) && (u32TimeOut != 0UL))
    {
        u32TimeOut--;
    }
    if (u32TimeOut == 0U)
    {
        eRet = E_NOT_OK;
    }

    return eRet;
}

/**
 *   @brief   This function halt the DMA operations.
 *   @details This function halt the DMA operations.
 *
 *   @param[in]  eDma_Instance     instance number.
 *
 *   @return     void
 *   [SWDESG_DMA_072]
 */
DMA_TEXT_SECTION void Dma_LLD_Halt(const Dma_InstanceType eDma_Instance)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_HaltOperations(pDma);
}

/**
 *   @brief   This function clear the halt flag of the DMA instance to resume transfer.
 *   @details This function clear the halt flag of the DMA instance to resume transfer.
 *
 *   @param[in]  eDma_Instance     instance number.
 *
 *   @return     void
 *   [SWDESG_DMA_073]
 */
DMA_TEXT_SECTION void Dma_LLD_Resume(const Dma_InstanceType eDma_Instance)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_ClearHaltFlag(pDma);
}

/**
 *   @brief   This function check whether the enough dumo can be used and return the valid index.
 *   @details This function check whether the enough dumo can be used and return the valid index.
 *
 *   @param[in]  eDma_Instance      instance number.
 *   @param[in]  u8Dma_Channel      Channel numer to be operated.
 *   @param[in]  pDumoIndex         the valid demo index.
 *
 *   @return     Std_ReturnType. Return E_OK if there has enough DUMO for channel.
 *               And also return the valid pDumoIndex if bret is E_OK.
 *   [SWDESG_DMA_074]
 */
DMA_TEXT_SECTION static Std_ReturnType Dma_LLD_GetDumoIndex(const Dma_InstanceType eDma_Instance,
                                                            const uint8            u8Dma_Channel,
                                                            uint8                 *pDumoIndex)
{
    Std_ReturnType bret = E_NOT_OK;
#if (DMA_UMS_OTRGCH_CONFLICT == STD_ON)
    Dma_Type const *pDma  = s_apDmaBase[eDma_Instance];
    uint8           u8Val = 0;
#endif

#if (DMA_UMS_OTRGCH_CONFLICT == STD_ON)
    if (Dma_HWA_GetOuterLoopTrigEnableFlag(pDma, u8Dma_Channel) == FALSE)
#endif
    {
        for (*pDumoIndex = 0U; *pDumoIndex < DMA_DUMO_COUNT; (*pDumoIndex)++)
        {
#if (DMA_INSTANCE_COUNT == 2)
            if (Dma_au8DumoUsedStatus[eDma_Instance][*pDumoIndex] == DMA_CHANNEL_INVALID)
            {
                bret = E_OK;
                break;
            }
#elif (DMA_INSTANCE_COUNT == 1)
                if (Dma_au8DumoUsedStatus[*pDumoIndex] == DMA_CHANNEL_INVALID)
                {
                    bret = E_OK;
                    break;
                }
#endif
        }
    }
#if (DMA_UMS_OTRGCH_CONFLICT == STD_ON)
    else
    {
        /* Workaround for 12 bit conflict in CFG_CSRn */
        u8Val = Dma_HWA_GetOuterLoopTrigChannel(pDma, u8Dma_Channel) >> 4;
        for (*pDumoIndex = 0U; *pDumoIndex < DMA_DUMO_COUNT; (*pDumoIndex)++)
        {
#if (DMA_INSTANCE_COUNT == 2)
            if ((Dma_au8DumoUsedStatus[eDma_Instance][*pDumoIndex] == DMA_CHANNEL_INVALID) &&
                ((*pDumoIndex & 1U) == u8Val))
            {
                bret = E_OK;
                break;
            }
#elif (DMA_INSTANCE_COUNT == 1)
            if ((Dma_au8DumoUsedStatus[*pDumoIndex] == DMA_CHANNEL_INVALID) &&
                ((*pDumoIndex & 1U) == u8Val))
            {
                bret = E_OK;
                break;
            }
#endif /* (DMA_INSTANCE_COUNT == 2) */
        }
    }
#else
        (void)eDma_Instance;
        (void)u8Dma_Channel;
#endif /* (DMA_UMS_OTRGCH_CONFLICT == STD_ON) */
    return bret;
}

/**
 *   @brief   This function clear the dumo that the channel has used.
 *   @details This function clear the dumo that the channel has used.
 *
 *   @param[in]  eDma_Instance      instance number.
 *   @param[in]  u8Dma_Channel      Channel numer to be operated.
 *
 *   @return     void.
 *   [SWDESG_DMA_082]
 */
#if (DMA_INSTANCE_COUNT == 2)
DMA_TEXT_SECTION static void Dma_LLD_ClearDumoIndex(const Dma_InstanceType eDma_Instance,
                                                    const uint8            u8Dma_Channel)
#elif (DMA_INSTANCE_COUNT == 1)
    DMA_TEXT_SECTION static void Dma_LLD_ClearDumoIndex(const uint8 u8Dma_Channel)
#endif
{
    uint8 u8Idx = 0;

    for (u8Idx = 0U; u8Idx < DMA_DUMO_COUNT; u8Idx++)
    {
#if (DMA_INSTANCE_COUNT == 2)
        if (Dma_au8DumoUsedStatus[eDma_Instance][u8Idx] == u8Dma_Channel)
        {
            Dma_au8DumoUsedStatus[eDma_Instance][u8Idx] = DMA_CHANNEL_INVALID;
            break;
        }
#elif (DMA_INSTANCE_COUNT == 1)
            if (Dma_au8DumoUsedStatus[u8Idx] == u8Dma_Channel)
            {
                Dma_au8DumoUsedStatus[u8Idx] = DMA_CHANNEL_INVALID;
                break;
            }
#endif
    }
}

/**
 *   @brief   This function check whether the circular buffer size is power of 2.
 *   @details This function check whether the circular buffer size is power of 2.
 *
 *   @param[in]  u32DmaSrcCircBufferSize       The circular buffer size
 *   @param[in]  u8Log2 return the n of 2^n if buffer size is the nth power of 2
 *
 *   @return     boolean. Return false if is power of 2 alligned, means no need to use dumo.
 * Else return true. [SWDESG_DMA_075]
 */
DMA_TEXT_SECTION static boolean Dma_LLD_CheckCircularBufSize(uint32 u32DmaCircBufferSize,
                                                             uint8 *u8Log2)
{
    boolean bret = (boolean)TRUE;
    *u8Log2      = 0U;
    while (u32DmaCircBufferSize > (1UL << *u8Log2))
    {
        (*u8Log2)++;
    }
    if ((u32DmaCircBufferSize & ((1UL << *u8Log2) - 1U)) == 0U)
    {
        bret = (boolean)FALSE;
    }
    return bret;
}

/**
 *   @brief   This function checks and calculates the source and destination dumo if used
 * circular buffer.
 *   @details This function checks and calculates the source and destination dumo if used
 * circular buffer.
 *
 *   @param[in]  bUseSrcDumo       Whether the source used dumo.
 *   @param[in]  bUseDestDumo      Whether the destination used dumo.
 *   @param[in]  u16Sumo           The calculated value of source sumo.
 *   @param[in]  u16Dumo           The calculated value of destination dumo.
 *   @param[in]  pChannelConfig      Point to the channel config informations.
 *   @return     Std_ReturnType. Return E_OK if no parameters error, else return E_NOT_OK.
 *   [SWDESG_DMA_076]
 */
DMA_TEXT_SECTION static Std_ReturnType Dma_LLD_CheckCircularBufDumo(
    boolean                bUseSrcDumo,
    boolean                bUseDestDumo,
    uint16                *u16Sumo,
    uint16                *u16Dumo,
    const Dma_ChannelType *pChannelConfig)
{
    uint16         u16SrcDataOffset  = (uint16)pChannelConfig->s16SrcDataOffset;
    uint16         u16DestDataOffset = (uint16)pChannelConfig->s16DestDataOffset;
    Std_ReturnType bret              = E_OK;

    if (bUseSrcDumo == (boolean)TRUE)
    {
        if (u16SrcDataOffset > 0U)
        {
            *u16Sumo = (uint16)(((pChannelConfig->u32DmaSrcCircBufferSize / u16SrcDataOffset) - 1U) *
                                u16SrcDataOffset);
        }
        else
        {
            /* When using circular buffer, the corresponding data offset must bigger than 0 */
            bret = E_NOT_OK;
        }
    }

    if (bUseDestDumo == (boolean)TRUE)
    {
        if (u16DestDataOffset > 0U)
        {
            *u16Dumo = (uint16)(((pChannelConfig->u32DmaDestCircBufferSize / u16DestDataOffset) - 1U) *
                                u16DestDataOffset);
        }
        else
        {
            /* When using circular buffer, the corresponding data offset must bigger than 0 */
            bret = E_NOT_OK;
        }
    }

    return bret;
}

/**
 *   @brief   This function checks address and buffer length, and config the modulo of source
 * and destination if used circular buffer.
 *   @details This function checks address and buffer length, and config the modulo of source
 * and destination if used circular buffer.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The Dma channel index to be configured.
 *   @param[in]  u8SrcMod            the source address aligned modulo.
 *   @param[in]  u8DestMod           the destination address aligned modulo.
 *   @param[in]  pChannelConfig      Point to the channel config informations.
 *   @return     Std_ReturnType. Return E_OK if no parameters error, else return E_NOT_OK.
 *   [SWDESG_DMA_077]
 */
DMA_TEXT_SECTION static Std_ReturnType Dma_LLD_CheckCircularBufAddrandlength(
    const Dma_InstanceType eDma_Instance,
    const uint8            u8Dma_Channel,
    uint8                  u8SrcMod,
    uint8                  u8DestMod,
    const Dma_ChannelType *pChannelConfig)
{
    Dma_Type *const pDma              = s_apDmaBase[eDma_Instance];
    uint16          u16SrcDataOffset  = (uint16)pChannelConfig->s16SrcDataOffset;
    uint16          u16DestDataOffset = (uint16)pChannelConfig->s16DestDataOffset;
    Std_ReturnType  bret              = E_OK;

    /* If circular buffer is enabled, the buffer address must be power of n aligned, n depends
     * on the length of the circular buffer*/
    if (((pChannelConfig->bDmaSrcCircularBufferEn == (boolean)TRUE) &&
         (((uint32)pChannelConfig->u32DmaSADDR & ((1UL << u8SrcMod) - 1U)) != 0U)) ||
        ((pChannelConfig->bDmaDestCircularBufferEn == (boolean)TRUE) &&
         (((uint32)pChannelConfig->u32DmaDADDR & ((1UL << u8DestMod) - 1U)) != 0U)))
    {
        bret = E_NOT_OK;
    }
    else
    {
        /* If circular buffer is enabled, the buffer size must not less than the data offset */
        if (((pChannelConfig->bDmaSrcCircularBufferEn == (boolean)TRUE) &&
             ((uint16)pChannelConfig->u32DmaSrcCircBufferSize < u16SrcDataOffset)) ||
            ((pChannelConfig->bDmaDestCircularBufferEn == (boolean)TRUE) &&
             ((uint16)pChannelConfig->u32DmaDestCircBufferSize < u16DestDataOffset)))
        {
            bret = E_NOT_OK;
        }
        else
        {
            Dma_HWA_SetSrcModulo(pDma, u8Dma_Channel, u8SrcMod);
            Dma_HWA_SetDestModulo(pDma, u8Dma_Channel, u8DestMod);
        }
    }

    return bret;
}

/**
 *   @brief   This function check the circular buffer size configured.
 *   @details This function check the circular buffer size configured.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The Dma channel index to be configured.
 *   @param[in]  pChannelConfig      Point to the channel config informations.
 *
 *   @return     Std_ReturnType. Return E_OK if no parameters error, else return E_NOT_OK.
 *   [SWDESG_DMA_078]
 */
/* PRQA S 2889 ++ #Misra-C:2012 Rule-15.5 A function should have a single point of exit at the end.
    Reason: The return statement before the function end is used to bypass the function quickly. */
DMA_TEXT_SECTION static Std_ReturnType Dma_LLD_CheckCircularBuffer(
    const Dma_InstanceType eDma_Instance,
    const uint8            u8Dma_Channel,
    const Dma_ChannelType *pChannelConfig)
{
    Dma_Type *const pDma         = s_apDmaBase[eDma_Instance];
    uint16          u16Sumo      = 0U;
    uint16          u16Dumo      = 0U;
    boolean         bUseSrcDumo  = (boolean)FALSE;
    boolean         bUseDestDumo = (boolean)FALSE;
    uint8           u8SrcMod     = 0U;
    uint8           u8DestMod    = 0U;
    uint8           u8DumoIndex  = 0U;

    if (pChannelConfig->bDmaSrcCircularBufferEn == (boolean)TRUE)
    {
        if (pChannelConfig->u32DmaSrcCircBufferSize < pChannelConfig->u32DmaNBYTES)
        {
            /* Circular buffer size must >= Innerloop size */
            return E_NOT_OK;
        }
        if (pChannelConfig->s16SrcDataOffset < 0)
        {
            /* Data offset must be bigger than 0 */
            return E_NOT_OK;
        }
        bUseSrcDumo = Dma_LLD_CheckCircularBufSize(pChannelConfig->u32DmaSrcCircBufferSize,
                                                   &u8SrcMod);
    }

    if (pChannelConfig->bDmaDestCircularBufferEn == (boolean)TRUE)
    {
        if (pChannelConfig->u32DmaDestCircBufferSize < pChannelConfig->u32DmaNBYTES)
        {
            /* Circular buffer size must >= Innerloop size */
            return E_NOT_OK;
        }
        if (pChannelConfig->s16DestDataOffset < 0)
        {
            /* Data offset must be bigger than 0 */
            return E_NOT_OK;
        }
        bUseDestDumo = Dma_LLD_CheckCircularBufSize(pChannelConfig->u32DmaDestCircBufferSize,
                                                    &u8DestMod);
    }

    if (Dma_LLD_CheckCircularBufAddrandlength(eDma_Instance,
                                              u8Dma_Channel,
                                              u8SrcMod,
                                              u8DestMod,
                                              pChannelConfig) == (Std_ReturnType)E_OK)
    {
        if ((bUseSrcDumo == (boolean)TRUE) || (bUseDestDumo == (boolean)TRUE))
        {
            SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_02();

            /* If source or destination unaligned modulo is used, check whether all DUMO
             * registers are occupied */
            if (Dma_LLD_GetDumoIndex(eDma_Instance, u8Dma_Channel, &u8DumoIndex) == E_OK)
            {
#if (DMA_INSTANCE_COUNT == 2)
                Dma_au8DumoUsedStatus[eDma_Instance][u8DumoIndex] = u8Dma_Channel;
#elif (DMA_INSTANCE_COUNT == 1)
                    Dma_au8DumoUsedStatus[u8DumoIndex] = u8Dma_Channel;
#endif
                if (Dma_LLD_CheckCircularBufDumo(bUseSrcDumo,
                                                 bUseDestDumo,
                                                 &u16Sumo,
                                                 &u16Dumo,
                                                 pChannelConfig) == (Std_ReturnType)E_OK)
                {
                    Dma_HWA_SetUnalignModulo(pDma, u8DumoIndex, u16Sumo, u16Dumo);
                    Dma_HWA_SetUnalignModuloEnableFlag(pDma, u8Dma_Channel, bUseSrcDumo, bUseDestDumo);
                    Dma_HWA_SetUnalignModuloSel(pDma, u8Dma_Channel, u8DumoIndex);
                }
            }
            else
            {
                SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_02();
                return E_NOT_OK;
            }

            SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_02();
        }
    }
    else
    {
        return E_NOT_OK;
    }

    return E_OK;
}
/* PRQA S 2889 -- */

#if (DMA_MCU_HAVE_SMP == STD_ON)
/**
 *   @brief   This function calculate the address with backdoor offset in SMP.
 *   @details This function calculate the address with backdoor offset in SMP.
 *
 *   @param[in]  u32InputSrc      Source address.
 *
 *   @return     void.
 *   [SWDESG_DMA_145]
 */
DMA_TEXT_SECTION static uint32 Dma_LLD_TranstoBackdoorAddressSMP(uint32 u32Input)
{
    uint32 u32Addr = u32Input;

    if ((u32Input >= DTCM0_ADDRESS_START_SMP) && (u32Input <= DTCM0_ADDRESS_STOP_SMP))
    {
        /* DTCM0 */
        u32Addr = u32Input + DTCM0_BACKDOOR;
    }
    else if ((u32Input >= DTCM1_ADDRESS_START_SMP) && (u32Input <= DTCM1_ADDRESS_STOP_SMP))
    {
        /* DTCM1 */
        u32Addr = u32Input + DTCM1_BACKDOOR;
    }
    else if ((u32Input >= DTCM2_ADDRESS_START_SMP) && (u32Input <= DTCM2_ADDRESS_STOP_SMP))
    {
        /* DTCM2 */
        u32Addr = u32Input + DTCM2_BACKDOOR;
    }
    else if ((u32Input >= DTCM3_ADDRESS_START_SMP) && (u32Input <= DTCM3_ADDRESS_STOP_SMP))
    {
        /* DTCM3 */
        u32Addr = u32Input + DTCM3_BACKDOOR;
    }
    else if (u32Input <= ITCM0_ADDRESS_STOP_SMP)
    {
        /* ITCM0 */
        u32Addr = u32Input + ITCM0_BACKDOOR;
    }
    else if (u32Input <= ITCM1_ADDRESS_STOP_SMP)
    {
        /* ITCM1 */
        u32Addr = u32Input + ITCM1_BACKDOOR;
    }
    else if (u32Input <= ITCM2_ADDRESS_STOP_SMP)
    {
        /* ITCM2 */
        u32Addr = u32Input + ITCM2_BACKDOOR;
    }
    else if (u32Input <= ITCM3_ADDRESS_STOP_SMP)
    {
        /* ITCM3 */
        u32Addr = u32Input + ITCM3_BACKDOOR;
    }
    else
    {
        /* SRAM or Reg */
    }

    return u32Addr;
}
#endif
#if (DMA_CORE_HAVE_TCM_BACKDOOR == STD_ON)
/**
 *   @brief   This function calculate the des address with backdoor offset.
 *   @details This function calculate the des address with backdoor offset.
 *
 *   @param[in]  u32Input      Input Address.
 *
 *   @return     void.
 *   [SWDESG_DMA_146]
 */
DMA_TEXT_SECTION static uint32 Dma_LLD_TranstoBackdoorAddress(uint32 u32Input)
{
    uint32 u32Addr  = u32Input;
    uint8  u8coreid = DMA_GET_CPU_ID();

#if (DMA_MAX_CORE_USED_U8 == 4)
    if ((uint8)3U != u8coreid)
#endif
    {
        if ((u32Input >= DTCM_ADDRESS_START) && (u32Input <= DTCM_ADDRESS_STOP))
        {
            /* DTCM0 */
            u32Addr = u32Input + Dma_CalcDTCMBackDoor[u8coreid];
        }
        else if (u32Input <= ITCM_ADDRESS_STOP)
        {
            /* ITCM0 */
            u32Addr = u32Input + Dma_CalcITCMBackDoor[u8coreid];
        }
        else
        {
            /* SRAM or Reg */
        }
    }
#if (DMA_MAX_CORE_USED_U8 == 4)
    else
    {
        if ((u32Input >= DTCM_ADDRESS_START) && (u32Input <= (DTCM_ADDRESS_STOP - 0x10000u)))
        {
            u32Addr = u32Input + DTCM3_BACKDOOR;
        }
        else if (u32Input <= (ITCM_ADDRESS_STOP - 0x8000u))
        {
            u32Addr = u32Input + ITCM3_BACKDOOR;
        }
        else
        {
            /* SRAM or Reg */
        }
    }
#endif
    return u32Addr;
}
#endif

/**
 *   @brief   This function init the DMA channel configured.
 *   @details This function init the DMA channel configured.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The Dma channel index to be configured.
 *   @param[in]  pChannelConfig      Point to the channel config informations.
 *
 *   @return     Std_ReturnType. Return E_OK if no parameters error, else return E_NOT_OK.
 *   [SWDESG_DMA_079]
 */
/* PRQA S 2889 ++ #Misra-C:2012 Rule-15.5 A function should have a single point of exit at the end.
    Reason: The return statement before the function end is used to bypass the function quickly. */
DMA_TEXT_SECTION Std_ReturnType Dma_LLD_InitChannelConfig(const Dma_InstanceType eDma_Instance,
                                                          const uint8            u8Dma_Channel,
                                                          const Dma_ChannelType *pChannelConfig)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];
#if (DMA_CORE_HAVE_TCM_BACKDOOR == STD_ON)
    uint32 u32SrcAddr;
    uint32 u32DesAddr;
#endif
    sint16 s16SrcDataOffset  = pChannelConfig->s16SrcDataOffset;
    sint16 s16DestDataOffset = pChannelConfig->s16DestDataOffset;
    uint8  u8PartitionId     = DMA_GET_CPU_ID();

    if ((pChannelConfig->bDmaSrcCircularBufferEn == (boolean)TRUE) ||
        (pChannelConfig->bDmaDestCircularBufferEn == (boolean)TRUE))
    {
        if ((Std_ReturnType)E_NOT_OK ==
            Dma_LLD_CheckCircularBuffer(eDma_Instance, u8Dma_Channel, pChannelConfig))
        {
            /* Configuration of circular buffer invalid */
            return E_NOT_OK;
        }
    }
    else
    {
        Dma_HWA_SetSrcModulo(pDma, u8Dma_Channel, 0U);
        Dma_HWA_SetDestModulo(pDma, u8Dma_Channel, 0U);
    }

    Dma_HWA_SetSrcDataSize(pDma, u8Dma_Channel, (Dma_TranSizeType)pChannelConfig->eDmaSSIZE);
    Dma_HWA_SetDestDataSize(pDma, u8Dma_Channel, (Dma_TranSizeType)pChannelConfig->eDmaDSIZE);

    Dma_HWA_SetAutoDisableReuqestEnableFlag(pDma, u8Dma_Channel, pChannelConfig->bDmaAutoStopEnable);

    if ((pChannelConfig->u16DmaOuterLoopCounter > 1U) &&
        (Dma_Config.pDmaCoreConfig[u8PartitionId]->pDma_pChConfig[u8Dma_Channel].bInnerChannelSelfChain ==
         (boolean)TRUE))
    {
        /* The software triggered channel will trigger itself automatically when inner loop
         * complete */
        Dma_HWA_SetChannelToChannelTrig(pDma, u8Dma_Channel, TRUE, u8Dma_Channel);
        Dma_HWA_SetLoopCount(pDma, u8Dma_Channel, pChannelConfig->u16DmaOuterLoopCounter);
    }
    else
    {
        Dma_HWA_SetChannelToChannelTrig(pDma, u8Dma_Channel, FALSE, 0U);
        Dma_HWA_SetLoopCount(pDma, u8Dma_Channel, pChannelConfig->u16DmaOuterLoopCounter);
    }

#if (DMA_CORE_HAVE_TCM_BACKDOOR == STD_ON)
#if (DMA_MCU_HAVE_SMP == STD_ON)
    if (Dma_HWA_GetAMPEnFlag(SCM) == TRUE)
#endif
    {
        /* Translation the input src address and des address to backdoor address if necessary*/
        u32SrcAddr = Dma_LLD_TranstoBackdoorAddress(pChannelConfig->u32DmaSADDR);
        u32DesAddr = Dma_LLD_TranstoBackdoorAddress(pChannelConfig->u32DmaDADDR);
    }
#if (DMA_MCU_HAVE_SMP == STD_ON)
    else
    {
        u32SrcAddr = Dma_LLD_TranstoBackdoorAddressSMP(pChannelConfig->u32DmaSADDR);
        u32DesAddr = Dma_LLD_TranstoBackdoorAddressSMP(pChannelConfig->u32DmaDADDR);
    }
#endif

    Dma_HWA_SetSrcAddr(pDma, u8Dma_Channel, u32SrcAddr);
    Dma_HWA_SetDestAddr(pDma, u8Dma_Channel, u32DesAddr);
#else
        Dma_HWA_SetSrcAddr(pDma, u8Dma_Channel, pChannelConfig->u32DmaSADDR);
        Dma_HWA_SetDestAddr(pDma, u8Dma_Channel, pChannelConfig->u32DmaDADDR);
#endif
    if (Dma_HWA_SetInnerLoopOffset(pDma,
                                   u8Dma_Channel,
                                   pChannelConfig->bDmaSILOE,
                                   pChannelConfig->bDmaDILOE,
                                   pChannelConfig->s32DmaILOFF) == (boolean)FALSE)
    {
        /* The inner loop mapping is disabled, the setting is ignored */
        return E_NOT_OK;
    }

    Dma_HWA_SetSrcLastAddrAdjustment(pDma, u8Dma_Channel, pChannelConfig->s32DmaSLAST);
    Dma_HWA_SetDestLastAddrAdjustment(pDma, u8Dma_Channel, pChannelConfig->s32DmaDLAST);

    if ((s16SrcDataOffset != 0U) &&
        ((pChannelConfig->u32DmaNBYTES % (1UL << (uint8)pChannelConfig->eDmaSSIZE)) != 0U))
    {
        /* Innerloop size must be an integer multiple of data transfer size */
        return E_NOT_OK;
    }

    if ((s16DestDataOffset != 0U) &&
        ((pChannelConfig->u32DmaNBYTES % (1UL << (uint8)pChannelConfig->eDmaDSIZE)) != 0U))
    {
        /* Innerloop size must be an integer multiple of data transfer size */
        return E_NOT_OK;
    }

    Dma_HWA_SetSrcOffset(pDma, u8Dma_Channel, s16SrcDataOffset);
    Dma_HWA_SetDestOffset(pDma, u8Dma_Channel, s16DestDataOffset);
    Dma_HWA_SetInnerLoopSize(pDma, u8Dma_Channel, pChannelConfig->u32DmaNBYTES);

    return E_OK;
}
/* PRQA S 2889 -- */

/**
 *   @brief   This function set start for the specified channel.
 *   @details This function set start for the specified channel.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected Dma channel to be configured.
 *
 *   @return     void.
 *   [SWDESG_DMA_080]
 */
DMA_TEXT_SECTION void Dma_LLD_StartChannel(const Dma_InstanceType eDma_Instance,
                                           const uint8            u8Dma_Channel)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    MCAL_DATA_SYNC_BARRIER();
    Dma_HWA_SetChannelStart(pDma, u8Dma_Channel);
}

/**
 *   @brief   This function set channel to channel trig when inner loop complete.
 *   @details This function set channel to channel trig when inner loop complete.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected Dma channel to be configured.
 *   @param[in]  Dma_TriggerChannel       The target channel.
 *
 *   @return     void.
 *   [SWDESG_DMA_081]
 */
DMA_TEXT_SECTION void Dma_LLD_SetInnerLinkChannel(const Dma_InstanceType eDma_Instance,
                                                  const uint8            u8Dma_Channel,
                                                  const uint8            u8Dma_TriggerChannel)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetChannelToChannelTrig(pDma, u8Dma_Channel, TRUE, u8Dma_TriggerChannel);
}

/**
 *   @brief   This function set channel to channel trig when outer loop complete.
 *   @details This function set channel to channel trig when outer loop complete.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected Dma channel to be configured.
 *   @param[in]  u8Dma_TriggerChannel       The target channel.
 *   @param[in]  pChannelConfig      Point to the channel config informations.
 *
 *   @return     void.
 *   [SWDESG_DMA_082]
 */
DMA_TEXT_SECTION Std_ReturnType Dma_LLD_SetOuterLinkChannel(const Dma_InstanceType eDma_Instance,
                                                            const uint8            u8Dma_Channel,
                                                            const uint8 u8Dma_TriggerChannel,
                                                            const Dma_ChannelType *pChannelConfig)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];
    Std_ReturnType  bret = E_OK;

    Dma_HWA_SetOuterLoopTrigEnableFlag(pDma, u8Dma_Channel, TRUE);
    Dma_HWA_SetOuterLoopTrigChannel(pDma, u8Dma_Channel, u8Dma_TriggerChannel);

    /* Workaround for 12 bit conflict in CFG_CSRn, reconfig circular buffer */
    if ((pChannelConfig->bDmaSrcCircularBufferEn == (boolean)TRUE) ||
        (pChannelConfig->bDmaDestCircularBufferEn == (boolean)TRUE))
    {
        SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_03();

        /* Clear already used dumo */
#if (DMA_INSTANCE_COUNT == 2)
        Dma_LLD_ClearDumoIndex(eDma_Instance, u8Dma_Channel);
#elif (DMA_INSTANCE_COUNT == 1)
            Dma_LLD_ClearDumoIndex(u8Dma_Channel);
#endif
        /* Reconfigure circular buffer */
        if ((Std_ReturnType)E_NOT_OK ==
            Dma_LLD_CheckCircularBuffer(eDma_Instance, u8Dma_Channel, pChannelConfig))
        {
            /* Configuration of circular buffer invalid */
            bret = E_NOT_OK;
        }
        SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_03();
    }
    else
    {
        Dma_HWA_SetSrcModulo(pDma, u8Dma_Channel, 0U);
        Dma_HWA_SetDestModulo(pDma, u8Dma_Channel, 0U);
    }
    return bret;
}

/**
 *   @brief   This function set priority of the channel.
 *   @details This function set priority of the channel.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  u8Dma_Priority      The priority of the channel.
 *
 *   @return     void.
 *   [SWDESG_DMA_083]
 */
DMA_TEXT_SECTION void Dma_LLD_SetChannelPriority(const Dma_InstanceType eDma_Instance,
                                                 const uint8            u8Dma_Channel,
                                                 const uint8            u8Dma_Priority)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetPriority(pDma, u8Dma_Channel, u8Dma_Priority);
}

/**
 *   @brief   This function set innerloop offset and innerloop size.
 *   @details This function set innerloop offset and innerloop size.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  PConfig             Point to the channel config informations.
 *
 *   @return     boolean.
 *   @return     TRUE the inner loop mapping is enabled, the setting is applied.
 *   @return     FALSE the inner loop mapping is disabled, the setting is ignored.
 *   [SWDESG_DMA_084]
 */
DMA_TEXT_SECTION boolean Dma_LLD_SetChannelLoopOffsetAndNBYTES(const Dma_InstanceType eDma_Instance,
                                                               const uint8            u8Dma_Channel,
                                                               const Dma_ChannelType *PConfig)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];
    boolean         bret = FALSE;

    bret = Dma_HWA_SetInnerLoopOffset(pDma,
                                      u8Dma_Channel,
                                      PConfig->bDmaSILOE,
                                      PConfig->bDmaDILOE,
                                      PConfig->s32DmaILOFF);
    Dma_HWA_SetInnerLoopSize(pDma, u8Dma_Channel, PConfig->u32DmaNBYTES);

    return bret;
}

/**
 *   @brief   This function get whether the transfer is done on the selected channel.
 *   @details This function get whether the transfer is done on the selected channel.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *
 *   @return     boolean. Return true if channel Completed.
 *   [SWDESG_DMA_085]
 */
DMA_TEXT_SECTION boolean Dma_LLD_CheckIfCompleteFlag(const Dma_InstanceType eDma_Instance,
                                                     const uint8            u8Dma_Channel)
{
    boolean         bRet;
    const Dma_Type *pDma = s_apDmaBase[eDma_Instance];

    bRet = Dma_HWA_GetChannelDoneStatus(pDma, u8Dma_Channel);

    return bRet;
}

/**
 *   @brief   This function get whether the channel is in execution.
 *   @details This function get whether the channel is in execution.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *
 *   @return     boolean. Return true if channel is in execution. Return false if channel is in
 * idle. [SWDESG_DMA_086]
 */
DMA_TEXT_SECTION boolean Dma_LLD_CheckIfActiveFlag(const Dma_InstanceType eDma_Instance,
                                                   const uint8            u8Dma_Channel)
{
    boolean         bRet;
    const Dma_Type *pDma = s_apDmaBase[eDma_Instance];

    bRet = (DMA_RUNNING_STATUS_ACTIVE == Dma_HWA_GetChannelActiveStatus(pDma, u8Dma_Channel)) ?
               (boolean)TRUE :
               (boolean)FALSE;

    return bRet;
}

/**
 *   @brief   This function set the address adjustment applied to the source address after major
 * loop finished.
 *   @details This function set the address adjustment applied to the source address after major
 * loop finished.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  s32Last the address adjustment applied to the source address after major loop
 * finished.
 *   @return     void.
 *   [SWDESG_DMA_087]
 */
DMA_TEXT_SECTION void Dma_LLD_SetSLAST(const Dma_InstanceType eDma_Instance,
                                       const uint8            u8Dma_Channel,
                                       const sint32           s32Last)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetSrcLastAddrAdjustment(pDma, u8Dma_Channel, s32Last);
}

/**
 *   @brief   This function set the source address of the DMA channel.
 *   @details This function set the source address of the DMA channel.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  u32Addr the source address of the DMA channel.
 *   @return     void.
 *   [SWDESG_DMA_088]
 */
DMA_TEXT_SECTION void Dma_LLD_SetSADDR(const Dma_InstanceType eDma_Instance,
                                       const uint8            u8Dma_Channel,
                                       const uint32           u32Addr)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];
#if (DMA_CORE_HAVE_TCM_BACKDOOR == STD_ON)
    uint32 u32SrcAddr;
#if (DMA_MCU_HAVE_SMP == STD_ON)
    if (Dma_HWA_GetAMPEnFlag(SCM) == TRUE)
#endif
    {
        u32SrcAddr = Dma_LLD_TranstoBackdoorAddress(u32Addr);
    }
#if (DMA_MCU_HAVE_SMP == STD_ON)
    else
    {
        u32SrcAddr = Dma_LLD_TranstoBackdoorAddressSMP(u32Addr);
    }
#endif
    Dma_HWA_SetSrcAddr(pDma, u8Dma_Channel, u32SrcAddr);
#else
        Dma_HWA_SetSrcAddr(pDma, u8Dma_Channel, u32Addr);
#endif
}

/**
 *   @brief   This function set the source data offset of the DMA channel.
 *   @details This function set the source data offset of the DMA channel.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  s16Off the source data offset of the DMA channel.
 *   @return     void.
 *   [SWDESG_DMA_089]
 */
DMA_TEXT_SECTION void Dma_LLD_SetSOFF(const Dma_InstanceType eDma_Instance,
                                      const uint8            u8Dma_Channel,
                                      const sint16           s16Off)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetSrcOffset(pDma, u8Dma_Channel, s16Off);
}

/**
 *   @brief   This function set the address adjustment applied to the destination address after
 * major loop finished.
 *   @details This function set the address adjustment applied to the destination address after
 * major loop finished.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  s32Last the address adjustment applied to the destination address after major
 * loop finished.
 *   @return     void.
 *   [SWDESG_DMA_090]
 */
DMA_TEXT_SECTION void Dma_LLD_SetDLAST(const Dma_InstanceType eDma_Instance,
                                       const uint8            u8Dma_Channel,
                                       const sint32           s32Last)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetDestLastAddrAdjustment(pDma, u8Dma_Channel, s32Last);
}

/**
 *   @brief   This function set the destination address of the DMA channel.
 *   @details This function set the destination address of the DMA channel.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  u32Addr the destination address of the DMA channel.
 *   @return     void.
 *   [SWDESG_DMA_091]
 */
DMA_TEXT_SECTION void Dma_LLD_SetDADDR(const Dma_InstanceType eDma_Instance,
                                       const uint8            u8Dma_Channel,
                                       const uint32           u32Addr)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];
#if (DMA_CORE_HAVE_TCM_BACKDOOR == STD_ON)
    uint32 u32DesAddr;
#if (DMA_MCU_HAVE_SMP == STD_ON)
    if (Dma_HWA_GetAMPEnFlag(SCM) == TRUE)
#endif
    {
        u32DesAddr = Dma_LLD_TranstoBackdoorAddress(u32Addr);
    }
#if (DMA_MCU_HAVE_SMP == STD_ON)
    else
    {
        u32DesAddr = Dma_LLD_TranstoBackdoorAddressSMP(u32Addr);
    }
#endif
    Dma_HWA_SetDestAddr(pDma, u8Dma_Channel, u32DesAddr);
#else
        Dma_HWA_SetDestAddr(pDma, u8Dma_Channel, u32Addr);
#endif
}

/**
 *   @brief   This function set the destination data offset of the DMA channel.
 *   @details This function set the destination data offset of the DMA channel.
 *
 *   @param[in]  eDma_Instance       Instance number.
 *   @param[in]  u8Dma_Channel       The selected channel.
 *   @param[in]  s16Off the destination data offset of the DMA channel.
 *   @return     void.
 *   [SWDESG_DMA_092]
 */
DMA_TEXT_SECTION void Dma_LLD_SetDOFF(const Dma_InstanceType eDma_Instance,
                                      const uint8            u8Dma_Channel,
                                      const sint16           s16Off)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetDestOffset(pDma, u8Dma_Channel, s16Off);
}

/**
 *   @brief   This function set the source address aligned modulo and source data size of the
 * DMA channel.
 *   @details This function set the source address aligned modulo and source data size of the
 * DMA channel.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel    The selected channel.
 *   @param[in]  u8Mod            The source address aligned modulo.
 *   @param[in]  eSSize           The source data size of the DMA channel.
 *   @return     void.
 *   [SWDESG_DMA_093]
 */
DMA_TEXT_SECTION void Dma_LLD_SetSModuloAndSize(const Dma_InstanceType eDma_Instance,
                                                const uint8            u8Dma_Channel,
                                                const uint8            u8Mod,
                                                const Dma_TranSizeType eSSize)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetSrcModulo(pDma, u8Dma_Channel, u8Mod);
    Dma_HWA_SetSrcDataSize(pDma, u8Dma_Channel, (Dma_TranSizeType)eSSize);
}

/**
 *   @brief   This function set the destination address aligned modulo and destination data size
 * of the DMA channel.
 *   @details This function set the destination address aligned modulo and destination data size
 * of the DMA channel.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel    The selected channel.
 *   @param[in]  u8Mod            The destination address aligned modulo.
 *   @param[in]  eDSize           The destination data size of the DMA channel.
 *   @return     void.
 *   [SWDESG_DMA_094]
 */
DMA_TEXT_SECTION void Dma_LLD_SetDModuloAndSize(const Dma_InstanceType eDma_Instance,
                                                const uint8            u8Dma_Channel,
                                                const uint8            u8Mod,
                                                const Dma_TranSizeType eDSize)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetDestModulo(pDma, u8Dma_Channel, u8Mod);
    Dma_HWA_SetDestDataSize(pDma, u8Dma_Channel, (Dma_TranSizeType)eDSize);
}

/**
 *   @brief   This function Enable channel request for the specified channel.
 *   @details This function Enable channel request for the specified channel.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel  The selected channel.
 *   @return     void.
 *   [SWDESG_DMA_095]
 */
DMA_TEXT_SECTION void Dma_LLD_EnableHWRequest(const Dma_InstanceType eDma_Instance,
                                              const uint8            u8Dma_Channel)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    MCAL_DATA_SYNC_BARRIER();
    Dma_HWA_EnableChannelRequest(pDma, u8Dma_Channel);
}

/**
 *   @brief   This function disable channel request for the specified channel.
 *   @details This function disable channel request for the specified channel.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel  The selected channel.
 *   @return     void.
 *   [SWDESG_DMA_096]
 */
DMA_TEXT_SECTION void Dma_LLD_DisableHWRequest(const Dma_InstanceType eDma_Instance,
                                               const uint8            u8Dma_Channel)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_DisableChannelRequest(pDma, u8Dma_Channel);
}

/**
 *   @brief   This function set the complete isr for the specified channel.
 *   @details This function set the complete isr for the specified channel.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel    The selected channel.
 *   @param[in]  bEn              Enable interrupt or not.
 *   @return     void.
 *   [SWDESG_DMA_097]
 */
DMA_TEXT_SECTION void Dma_LLD_SetCompleteInt(const Dma_InstanceType eDma_Instance,
                                             const uint8            u8Dma_Channel,
                                             boolean                bEn)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    if ((boolean)TRUE == bEn)
    {
        Dma_HWA_EnableTransferCompleteInterrupt(pDma, u8Dma_Channel);
    }
    else
    {
        Dma_HWA_DisableTransferCompleteInterrupt(pDma, u8Dma_Channel);
    }
}

/**
 *   @brief   This function clear DONE bit for the specified channel.
 *   @details This function clear DONE bit for the specified channel.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel  The selected channel.
 *   @return     void.
 *   [SWDESG_DMA_098]
 */
DMA_TEXT_SECTION void Dma_LLD_ClearDoneFlag(const Dma_InstanceType eDma_Instance,
                                            const uint8            u8Dma_Channel)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_ClearChannelDoneStatus(pDma, u8Dma_Channel);
}

/**
 *   @brief   Get the beginning loop count.
 *   @details This field specifies how many inner loops will be executed in a DMA transfer.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel    The selected channel.
 *   @return     uint16. Return the beginning loop count.
 *   [SWDESG_DMA_099]
 */
DMA_TEXT_SECTION uint16 Dma_LLD_GetBeginOuterLoopCounter(const Dma_InstanceType eDma_Instance,
                                                         const uint8            u8Dma_Channel)
{
    uint16          rCounter;
    const Dma_Type *pDma = s_apDmaBase[eDma_Instance];

    rCounter = Dma_HWA_GetBeginningLoopCount(pDma, u8Dma_Channel);

    return rCounter;
}

/**
 *   @brief   Get the current loop count.
 *   @details The current loop count is the same as the beginning loop count initially, and it
 * will decrement each time a inner loop finishes.
 *
 *   @param[in]  eDma_Instance    Instance number.
 *   @param[in]  u8Dma_Channel    The selected channel.
 *   @return     uint16. Return the current loop count.
 *   [SWDESG_DMA_100]
 */
DMA_TEXT_SECTION uint16 Dma_LLD_GetCurrentOuterLoopCounter(const Dma_InstanceType eDma_Instance,
                                                           const uint8            u8Dma_Channel)
{
    uint16          rCounter;
    const Dma_Type *pDma = s_apDmaBase[eDma_Instance];

    rCounter = Dma_HWA_GetCurrentLoopCount(pDma, u8Dma_Channel);

    return rCounter;
}

/**
*   @brief   Set the loop count of the DMA transfer.

*   @details  This field specifies how many inner loops will be executed in a DMA transfer.
*
*   @param[in]  eDma_Instance    Instance number.
*   @param[in]  u8Dma_Channel    The selected channel.
*   @param[in]  u16Counter       The outloop counter number.
*   @return     void.
*   [SWDESG_DMA_101]
*/
DMA_TEXT_SECTION void Dma_LLD_UpdateOuterLoopCounter(const Dma_InstanceType eDma_Instance,
                                                     const uint8            u8Dma_Channel,
                                                     const uint16           u16Counter)
{
    Dma_Type *const pDma = s_apDmaBase[eDma_Instance];

    Dma_HWA_SetLoopCount(pDma, u8Dma_Channel, u16Counter);
}

/**
*   @brief   Calculate the LastOffset of the source.

*   @details  Calculate the LastOffset of the source.
*             This function is only used to calculate the last offset to loop back to origin
start address when transfer finished.
*
*   @param pChannelConfig  The pointer point to the Dma_ChannelType struct.
*   @param s32SrcLastOffset  The pointer point to the Dma_ChannelType struct.
*   @return     Std_ReturnType. Return E_OK if calculate is finished.
*   [SWDESG_DMA_102]
*/
DMA_TEXT_SECTION Std_ReturnType Dma_LLD_CalculateSrcLastOffset(const Dma_ChannelType *pChannelConfig,
                                                               sint32 *s32SrcLastOffset)
{
    sint16         s16SrcDataOffset = pChannelConfig->s16SrcDataOffset;
    Std_ReturnType bret             = E_OK;

    if (s32SrcLastOffset == NULL_PTR)
    {
        bret = E_NOT_OK;
    }
    else
    {
        if (pChannelConfig->bDmaSILOE == (boolean)TRUE)
        {
            /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            *s32SrcLastOffset =
                -(((sint32)((pChannelConfig->u32DmaNBYTES >> (uint8)pChannelConfig->eDmaSSIZE) *
                            s16SrcDataOffset)) *
                  (sint32)(pChannelConfig->u16DmaOuterLoopCounter)) -
                ((pChannelConfig->s32DmaILOFF) *
                 (sint32)(pChannelConfig->u16DmaOuterLoopCounter - 1U));
            /* PRQA S 4394 -- */
        }
        else
        {
            /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            *s32SrcLastOffset = -(
                (sint32)((pChannelConfig->u32DmaNBYTES >> (uint8)pChannelConfig->eDmaSSIZE) *
                         s16SrcDataOffset) *
                (sint32)(pChannelConfig->u16DmaOuterLoopCounter));
            /* PRQA S 4394 -- */
        }
    }

    return bret;
}

/**
*   @brief   Calculate the LastOffset of the destination.

*   @details  Calculate the LastOffset of the destination.
*             This function is only used to calculate the last offset to loop back to origin
start address when transfer finished.
*
*   @param pChannelConfig  The pointer point to the Dma_ChannelType struct.
*   @param s32SrcLastOffset  The pointer point to the Dma_ChannelType struct.
*   @return     Std_ReturnType. Return E_OK if calculate is finished.
*   [SWDESG_DMA_103]
*/
DMA_TEXT_SECTION Std_ReturnType Dma_LLD_CalculateDesLastOffset(const Dma_ChannelType *pChannelConfig,
                                                               sint32 *s32DestLastOffset)
{
    sint16         s16DestDataOffset = pChannelConfig->s16DestDataOffset;
    Std_ReturnType bret              = E_OK;

    if (s32DestLastOffset == NULL_PTR)
    {
        bret = E_NOT_OK;
    }
    else
    {
        if (pChannelConfig->bDmaDILOE == (boolean)TRUE)
        {
            /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            *s32DestLastOffset =
                -(((sint32)((pChannelConfig->u32DmaNBYTES >> (uint8)pChannelConfig->eDmaDSIZE) *
                            s16DestDataOffset)) *
                  (sint32)(pChannelConfig->u16DmaOuterLoopCounter)) -
                ((pChannelConfig->s32DmaILOFF) *
                 (sint32)(pChannelConfig->u16DmaOuterLoopCounter - 1U));
            /* PRQA S 4394 -- */
        }
        else
        {
            /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            *s32DestLastOffset = -(
                (sint32)((pChannelConfig->u32DmaNBYTES >> (uint8)pChannelConfig->eDmaDSIZE) *
                         s16DestDataOffset) *
                (sint32)(pChannelConfig->u16DmaOuterLoopCounter));
            /* PRQA S 4394 -- */
        }
    }

    return bret;
}

#define DMA_STOP_SEC_CODE
#include "Dma_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
