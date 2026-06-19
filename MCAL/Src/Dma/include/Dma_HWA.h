/**
 *   @file    Dma_HWA.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Dma - DMA driver hardware layer header file.
 *   @details DMA driver hardware layer header file.
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
*   0.4.0       10/11/2023    QXW0099       N/A          Update version
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/

#ifndef _HWA_DMA_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall
 * not be declared Reason: It is common definition in h files */
#define _HWA_DMA_H_
/* PRQA S 603, 602 -- */
#include "Common_Cfg.h"
#include "Std_Types.h"
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C))
#include "FC7300_Dma_Reg.h"
#elif (DEVICE_SERIES == FC7240F2MDSxxxxT1A)
#include "FC7240_Dma_Reg.h"
#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
#include "FC7300GT_Dma_Reg.h"
#else
#error "No valid platform selected!"
#endif
#include "Dma_Types.h"
#include "Scm_Reg.h"
/**
 * @defgroup HwA_dma
 * @ingroup fc7xxx_driver_dma
 * @{
 */

#define DMA_CH_TO_DCHPRI(x) ((x) ^ 3U)

#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
#if ((DMA_0_USED_CHANNEL_NUM > 0u) && \
     (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF)))
extern CFG_REG Dma0_ShadowReg[DMA_0_USED_CHANNEL_NUM];
#endif

#if ((DMA_1_USED_CHANNEL_NUM > 0u) && \
     (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF)))
extern CFG_REG Dma1_ShadowReg[DMA_1_USED_CHANNEL_NUM];
#endif
#endif

/**
 * @brief Get active status of the DMA instance
 *
 * @param pDma the base address of the DMA instance
 * @return DMA_RUNNING_STATUS_ACTIVE DMA is executing a channel
 * @return DMA_RUNNING_STATUS_IDLE DMA is idle
 */
LOCAL_INLINE Dma_RunningStatusType Dma_HWA_GetStatus(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_ACTIVE_MASK) >> DMA_CR_ACTIVE_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    return (Dma_RunningStatusType)u32TmpVal;
    /* PRQA S 4342-- */
}

/**
 * @brief Get whether the DMA instance is cancelling
 *
 * @param pDma the base address of the DMA instance
 * @return TRUE cancel operation is requested and has not been finished
 * @return FALSE DMA is under normal operation
 */
LOCAL_INLINE boolean Dma_HWA_GetCancelTransferStatus(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_CX_MASK) >> DMA_CR_CX_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Cancel the remaining transfer of the DMA
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_CancelTransfer(Dma_Type *const pDma)
{
    pDma->CR |= DMA_CR_CX_MASK;
}

/**
 * @brief Get whether the DMA instance is cancelling with error
 *
 * @param pDma the base address of the DMA instance
 * @return TRUE cancel operation is requested and has not been finished
 * @return FALSE DMA is under normal operation
 */
LOCAL_INLINE boolean Dma_HWA_GetErrorCancelTransferStatus(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_ECX_MASK) >> DMA_CR_ECX_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Cancel the remaining transfer of the DMA and generate an error after finished cancelling
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_ErrorCancelTransfer(Dma_Type *const pDma)
{
    pDma->CR |= DMA_CR_ECX_MASK;
}

/**
 * @brief Get whether inner loop mapping is enabled
 *
 * @param pDma the base address of the DMA instance
 * @return TRUE inner loop mapping is enabled
 * @return FALSE inner loop mapping is disabled
 */
LOCAL_INLINE boolean Dma_HWA_GetInnerLoopMappingEnableFlag(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_EILM_MASK) >> DMA_CR_EILM_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable inner loop mapping
 *
 * @note Only after enabling inner loop mapping, you can apply an offset to the source
 * and/or destination address after the inner loop finishes.
 *
 * @param pDma the base address of the DMA instance
 * @param bEnable whether to enable the inner loop mapping
 */
LOCAL_INLINE void Dma_HWA_SetInnerLoopMappingEnableFlag(Dma_Type *const pDma, boolean bEnable)
{
    pDma->CR = (pDma->CR & ~DMA_CR_EILM_MASK) | DMA_CR_EILM(bEnable);
}

/**
 * @brief Get whether the continuous trig mode is enabled
 * When continuous trig mode is enabled, channel arbitration is not used for a inner loop
 * channel trig before being activated again. Upon inner loop completion, the channel
 * activates again if that channel has a inner loop channel trig enabled and the trig
 * channel is itself. This effectively applies the inner loop offsets and restarts the next
 * inner loop.
 *
 * @param pDma the base address of the DMA instance
 * @return TRUE continuous trig mode is enabled
 * @return FALSE continuous trig mode is disabled
 */
LOCAL_INLINE boolean Dma_HWA_GetContinuousTrigModeEnableFlag(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_CTM_MASK) >> DMA_CR_CTM_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable the continuous trig mode
 *
 * @param pDma the base address of the DMA instance
 * @param bEnable whether to enable the continuous trig mode
 */
LOCAL_INLINE void Dma_HWA_SetContinuousTrigModeEnableFlag(Dma_Type *const pDma, boolean bEnable)
{
    pDma->CR = (pDma->CR & ~DMA_CR_CTM_MASK) | DMA_CR_CTM(bEnable);
}

/**
 * @brief Get whether the DMA is halted
 * When the DMA is halted, it will ignore all service requests
 * @param pDma the base address of the DMA instance
 * @return TRUE the DMA is halted
 * @return TRUE the DMA is not halted
 */
LOCAL_INLINE boolean Dma_HWA_GetHaltStatus(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_HALT_MASK) >> DMA_CR_HALT_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Halt the DMA operations
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_HaltOperations(Dma_Type *const pDma)
{
    pDma->CR |= DMA_CR_HALT_MASK;
}

/**
 * @brief Clear the halt flag of the DMA instance
 * After HALT is cleared, the DMA could continue to operate
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_ClearHaltFlag(Dma_Type *const pDma)
{
    pDma->CR &= ~DMA_CR_HALT_MASK;
}

/**
 * @brief Get whether halt on error is enabled on the DMA instance
 *
 * @param pDma the base address of the DMA instance
 * @return TRUE halt on error is enabled, any error will cause HALT flag to be set
 * @return FALSE halt on error is disabled
 */
LOCAL_INLINE boolean Dma_HWA_GetHaltOnErrorFlag(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_HOE_MASK) >> DMA_CR_HOE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable halt on error on the DMA instance
 *
 * @note Ff halt on error is enabled, any error will cause HALT flag to be set
 *
 * @param pDma the base address of the DMA instance
 * @param bEnable whether to enable halt on error
 */
LOCAL_INLINE void Dma_HWA_SetHaltOnErrorFlag(Dma_Type *const pDma, boolean bEnable)
{
    pDma->CR = (pDma->CR & ~DMA_CR_HOE_MASK) | DMA_CR_HOE(bEnable);
}

/**
 * @brief Get the DMA arbitration algorithm
 *
 * @param pDma the base address of the DMA instance
 * @return Dma_ArbitrationAlgorithmType the DMA arbitration algorithm
 */
LOCAL_INLINE Dma_ArbitrationAlgorithmType Dma_HWA_GetArbitrationAlgorithm(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_ERCA_MASK) >> DMA_CR_ERCA_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    return (Dma_ArbitrationAlgorithmType)u32TmpVal;
    /* PRQA S 4342-- */
}

/**
 * @brief Set the DMA arbitration algorithm
 *
 * @param pDma the base address of the DMA instance
 * @param eAlgorithm the DMA arbitration algorithm
 */
LOCAL_INLINE void Dma_HWA_SetArbitrationAlgorithm(Dma_Type *const              pDma,
                                                  Dma_ArbitrationAlgorithmType eAlgorithm)
{
    pDma->CR = (pDma->CR & ~DMA_CR_ERCA_MASK) | DMA_CR_ERCA(eAlgorithm);
}

/**
 * @brief Get whether the DMA is configured to stop under debug mode
 *
 * @param pDma the base address of the DMA instance
 * @return TRUE the DMA is will stop under debug mode
 * @return TRUE the DMA is will continue to operate under debug mode
 */
LOCAL_INLINE boolean Dma_HWA_GetDebugModeStopFlag(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = (pDma->CR & DMA_CR_DBGS_MASK) >> DMA_CR_DBGS_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get the control register of the DMA instance
 *
 * @param pDma the base address of the DMA instance
 * @return uint32 the control register settings
 */
LOCAL_INLINE uint32 Dma_HWA_GetControlRegister(const Dma_Type *const pDma)
{
    return pDma->CR;
}

/**
 * @brief Set the control register of the DMA instance
 *
 * @param pDma the base address of the DMA instance
 * @param u32Settings the settings of the DMA control register
 */
LOCAL_INLINE void Dma_HWA_SetControlRegister(Dma_Type *const pDma, uint32 u32Settings)
{
    pDma->CR = u32Settings;
}

/**
 * @brief Set whether to stop DMA under debug mode
 *
 * @param pDma the base address of the DMA instance
 * @param bEnable whether to stop DMA under debug mode
 */
LOCAL_INLINE void Dma_HWA_SetDebugModeStopFlag(Dma_Type *const pDma, boolean bEnable)
{
    pDma->CR = (pDma->CR & ~DMA_CR_DBGS_MASK) | DMA_CR_DBGS(bEnable);
}

/**
 * @brief Get the DMA error status
 *
 * @param pDma the base address of the DMA instance
 * @return uint32 the DMA error status
 */
LOCAL_INLINE uint32 Dma_HWA_GetErrorStatus(const Dma_Type *const pDma)
{
    return pDma->ES;
}

/**
 * @brief Get whether there is error occured on the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE there is error on the specified channel
 * @return FALSE there is no error on the specified channel
 */
LOCAL_INLINE boolean Dma_HWA_GetChannelErrorFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint32 u32TmpVal = (pDma->ERR & (1UL << u8Channel)) >> u8Channel;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get the channel error status, each bit represents a channel
 *
 * @param pDma the base address of the DMA instance
 * @return uint16 the channel error status
 */
LOCAL_INLINE uint16 Dma_HWA_GetAllChannelErrorFlag(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = pDma->ERR;
    return (uint16)u32TmpVal;
}

/**
 * @brief Get whether error interrupt is enabled on the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE error interrupt is enabled on the specified channel
 * @return FALSE error interrupt is disabled on the specified channel
 */
LOCAL_INLINE boolean Dma_HWA_GetChannelErrorInterruptEnableFlag(const Dma_Type *const pDma,
                                                                uint8                 u8Channel)
{
    uint32 u32TmpVal = (pDma->EEI & (1UL << u8Channel)) >> u8Channel;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get channel error interrupt enable status
 *
 * @param pDma the base address of the DMA instance
 * @return uint16 the channel error interrupt enable status
 */
LOCAL_INLINE uint16 Dma_HWA_GetAllChannelErrorInterruptEnableFlag(const Dma_Type *const pDma)
{
    uint32 u32TmpVal = pDma->EEI;
    return (uint16)u32TmpVal;
}

/**
 * @brief Enable error interrupt for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_EnableChannelErrorInterrupt(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->SEEI = DMA_SEEI_SEEI(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Enable error interrupt for all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_EnableAllChannelErrorInterrupt(Dma_Type *const pDma)
{
    pDma->SEEI = DMA_SEEI_SAEE_MASK;
}

/**
 * @brief Disable error interrupt for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_DisableChannelErrorInterrupt(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CEEI = DMA_CEEI_CEEI(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Disable error interrupt for all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_DisableAllChannelErrorInterrupt(Dma_Type *const pDma)
{
    pDma->CEEI = DMA_CEEI_CAEE_MASK;
}

/**
 * @brief Enable channel request for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_EnableChannelRequest(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->SERQ = DMA_SERQ_SERQ(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Enable channel request for all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_EnableAllChannelRequest(Dma_Type *const pDma)
{
    pDma->SERQ = DMA_SERQ_SAER_MASK;
}

/**
 * @brief Disable channel request for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_DisableChannelRequest(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CERQ = DMA_CERQ_CERQ(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Disable channel request for all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_DisableAllChannelRequest(Dma_Type *const pDma)
{
    pDma->CERQ = DMA_CERQ_CAER_MASK;
}

/**
 * @brief Clear DONE bit for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_ClearChannelDoneStatus(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CDNE = DMA_CDNE_CDNE(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Clear DONE bit for the all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_ClearAllChannelDoneStatus(Dma_Type *const pDma)
{
    pDma->CDNE = DMA_CDNE_CADN_MASK;
}

/**
 * @brief Clear ERR bit for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_ClearChannelErrorFlag(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CERR = DMA_CERR_CERR(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Clear ERR bit for the all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_ClearAllChannelErrorFlag(Dma_Type *const pDma)
{
    pDma->CERR = DMA_CERR_CAEI_MASK;
}

/**
 * @brief Clear interrupt flag for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_ClearChannelInterruptFlag(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CINT = DMA_CINT_CINT(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Clear interrupt flag for the all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_ClearAllChannelInterruptFlag(Dma_Type *const pDma)
{
    pDma->CINT = DMA_CINT_CAIR_MASK;
}

/**
 * @brief Set start for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_SetChannelStart(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->SSRT = DMA_SSRT_SSRT(u8Channel);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set start for the all channels
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_SetAllChannelStart(Dma_Type *const pDma)
{
    pDma->SSRT = DMA_SSRT_SAST_MASK;
}

/**
 * @brief Get whether source unalign modulo is enabled for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE boolean Dma_HWA_GetSrcUnalignModuloEnableFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint32 u32TmpVal = (pDma->DUME[u8Channel / 16U] &
                        ((uint32)DMA_DUME0_SUME0_MASK << (2U * (u8Channel % 16U)))) >>
                       (DMA_DUME0_SUME0_SHIFT + (2U * (u8Channel % 16U)));
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get whether destination unalign modulo is enabled for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE boolean Dma_HWA_GetDestUnalignModuloEnableFlag(const Dma_Type *const pDma,
                                                            uint8                 u8Channel)
{
    /* PRQA S 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    uint32 u32TmpVal = (pDma->DUME[u8Channel / 16U] &
                        ((uint32)DMA_DUME0_DUME0_MASK << (2U * (u8Channel % 16U)))) >>
                       (DMA_DUME0_DUME0_SHIFT + (2U * (u8Channel % 16U)));
    /* PRQA S 2986 -- */
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get whether to enable unalign modulo for the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param bEnableSrcModulo whether source unalign modulo is to be enabled
 * @param bEnableDestModulo whether destination unalign modulo is to be enabled
 */
LOCAL_INLINE void Dma_HWA_SetUnalignModuloEnableFlag(Dma_Type *const pDma,
                                                     uint8           u8Channel,
                                                     boolean         bEnableSrcModulo,
                                                     boolean         bEnableDestModulo)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->DUME[u8Channel / 16U] =
        (pDma->DUME[u8Channel / 16U] &
         ~((uint32)(DMA_DUME0_DUME0_MASK | DMA_DUME0_SUME0_MASK) << (2U * (u8Channel % 16U)))) |
        ((DMA_DUME0_DUME0(bEnableDestModulo) | DMA_DUME0_SUME0(bEnableSrcModulo))
         << (2U * (u8Channel % 16U)));
    /* PRQA S 2985 -- */
}

/**
 * @brief Get the source unalign modulo of the index
 *
 * @param pDma the base address of the DMA instance
 * @param u8Selection the index of the unalign modulo
 * @return uint16 the source unalign modulo
 */
LOCAL_INLINE uint16 Dma_HWA_GetSrcUnalignModulo(const Dma_Type *const pDma, uint8 u8Selection)
{
    uint32 u32TmpVal = (pDma->DUMO[u8Selection] & DMA_DUMO0_SUMO_MASK) >> DMA_DUMO0_SUMO_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Get the destination unalign modulo of the index
 *
 * @param pDma the base address of the DMA instance
 * @param u8Selection the index of the unalign modulo
 * @return uint16 the destination unalign modulo
 */
LOCAL_INLINE uint16 Dma_HWA_GetDestUnalignModulo(const Dma_Type *const pDma, uint8 u8Selection)
{
    uint32 u32TmpVal = (pDma->DUMO[u8Selection] & DMA_DUMO0_DUMO_MASK) >> DMA_DUMO0_DUMO_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set unalign modulo of the index
 *
 * @param pDma the base address of the DMA instance
 * @param u8Selection the index of the unalign modulo
 * @param u16SrcModulo the source unalign modulo
 * @param u16DestModulo the destination unalign modulo
 */
LOCAL_INLINE void Dma_HWA_SetUnalignModulo(Dma_Type *const pDma,
                                           uint8           u8Selection,
                                           uint16          u16SrcModulo,
                                           uint16          u16DestModulo)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->DUMO[u8Selection] = DMA_DUMO0_SUMO(u16SrcModulo) | DMA_DUMO0_DUMO(u16DestModulo);
    /* PRQA S 2985 -- */
}

/**
 * @brief Get priority of the channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint8 the priority of the channel
 */
LOCAL_INLINE uint8 Dma_HWA_GetPriority(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint8 u8TmpVal = pDma->DCHPRI[DMA_CH_TO_DCHPRI(u8Channel)];
    return u8TmpVal;
}

/**
 * @brief Set priority of the channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u8Priority the priority of the channel
 */
LOCAL_INLINE void Dma_HWA_SetPriority(Dma_Type *const pDma, uint8 u8Channel, uint8 u8Priority)
{
    pDma->DCHPRI[DMA_CH_TO_DCHPRI(u8Channel)] = u8Priority;
}

/**
 * @brief Get the source address of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint32 the source address of the DMA channel
 */
LOCAL_INLINE uint32 Dma_HWA_GetSrcAddr(const Dma_Type *const pDma, uint8 u8Channel)
{
    return pDma->CFG[u8Channel].SADDR;
}

/**
 * @brief Set the source address of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u32SrcAddr the source address of the DMA channel
 */
LOCAL_INLINE void Dma_HWA_SetSrcAddr(Dma_Type *const pDma, uint8 u8Channel, uint32 u32SrcAddr)
{
    pDma->CFG[u8Channel].SADDR = u32SrcAddr;
}

/**
 * @brief Get the destination address of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint32 the destination address of the DMA channel
 */
LOCAL_INLINE uint32 Dma_HWA_GetDestAddr(const Dma_Type *const pDma, uint8 u8Channel)
{
    return pDma->CFG[u8Channel].DADDR;
}

/**
 * @brief Set the destination address of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u32DestAddr the destination address of the DMA channel
 */
LOCAL_INLINE void Dma_HWA_SetDestAddr(Dma_Type *const pDma, uint8 u8Channel, uint32 u32DestAddr)
{
    pDma->CFG[u8Channel].DADDR = u32DestAddr;
}

/**
 * @brief Get source data offset of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return sint16 the source data offset
 */
LOCAL_INLINE sint16 Dma_HWA_GetSrcOffset(const Dma_Type *const pDma, uint8 u8Channel)
{
    return (sint16)pDma->CFG[u8Channel].SOFF;
}

/**
 * @brief Set source data offset of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param s16Offset the source data offset
 */
LOCAL_INLINE void Dma_HWA_SetSrcOffset(Dma_Type *const pDma, uint8 u8Channel, sint16 s16Offset)
{
    pDma->CFG[u8Channel].SOFF = (uint16)s16Offset;
}

/**
 * @brief Get destination data offset of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return sint16 the destination data offset
 */
LOCAL_INLINE sint16 Dma_HWA_GetDestOffset(const Dma_Type *const pDma, uint8 u8Channel)
{
    return (sint16)pDma->CFG[u8Channel].DOFF;
}

/**
 * @brief Set destination data offset of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param s16Offset the destination data offset
 */
LOCAL_INLINE void Dma_HWA_SetDestOffset(Dma_Type *const pDma, uint8 u8Channel, sint16 s16Offset)
{
    pDma->CFG[u8Channel].DOFF = (uint16)s16Offset;
}

/**
 * @brief Get the source data size of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return Dma_TranSizeType the source data size of the DMA channel
 */
LOCAL_INLINE Dma_TranSizeType Dma_HWA_GetSrcDataSize(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].ATTR & DMA_CFG_ATTR_SSIZE_MASK) >>
                       DMA_CFG_ATTR_SSIZE_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    return (Dma_TranSizeType)u16TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the source data size of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param eDataSize the source data size of the DMA channel
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetSrcDataSize(Dma_Type *const  pDma,
                                         uint8            u8Channel,
                                         Dma_TranSizeType eDataSize)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].ATTR = (uint16)((Dma0_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_SSIZE_MASK) |
                                                  DMA_CFG_ATTR_SSIZE(eDataSize));
        pDma->CFG[u8Channel].ATTR      = Dma0_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_SSIZE_MASK) |
                                             DMA_CFG_ATTR_SSIZE(eDataSize));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].ATTR = (uint16)((Dma1_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_SSIZE_MASK) |
                                                  DMA_CFG_ATTR_SSIZE(eDataSize));
        pDma->CFG[u8Channel].ATTR      = Dma1_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_SSIZE_MASK) |
                                             DMA_CFG_ATTR_SSIZE(eDataSize));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetSrcDataSize(Dma_Type *const  pDma,
                                         uint8            u8Channel,
                                         Dma_TranSizeType eDataSize)
{
    pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_SSIZE_MASK) |
                                         DMA_CFG_ATTR_SSIZE(eDataSize));
}
#endif

/**
 * @brief Get the destination data size of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return Dma_TranSizeType the destination data size of the DMA channel
 */
LOCAL_INLINE Dma_TranSizeType Dma_HWA_GetDestDataSize(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].ATTR & DMA_CFG_ATTR_DSIZE_MASK) >>
                       DMA_CFG_ATTR_DSIZE_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    return (Dma_TranSizeType)u16TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the destination data size of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param eDataSize the destination data size of the DMA channel
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetDestDataSize(Dma_Type *const  pDma,
                                          uint8            u8Channel,
                                          Dma_TranSizeType eDataSize)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].ATTR = (uint16)((Dma0_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_DSIZE_MASK) |
                                                  DMA_CFG_ATTR_DSIZE(eDataSize));
        pDma->CFG[u8Channel].ATTR      = Dma0_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_DSIZE_MASK) |
                                             DMA_CFG_ATTR_DSIZE(eDataSize));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].ATTR = (uint16)((Dma1_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_DSIZE_MASK) |
                                                  DMA_CFG_ATTR_DSIZE(eDataSize));
        pDma->CFG[u8Channel].ATTR      = Dma1_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_DSIZE_MASK) |
                                             DMA_CFG_ATTR_DSIZE(eDataSize));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetDestDataSize(Dma_Type *const  pDma,
                                          uint8            u8Channel,
                                          Dma_TranSizeType eDataSize)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_DSIZE_MASK) |
                                         DMA_CFG_ATTR_DSIZE(eDataSize));
    /* PRQA S 2985 -- */
}
#endif

/**
 * @brief Get the source address aligned modulo of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint8 the source address aligned modulo
 */
LOCAL_INLINE uint8 Dma_HWA_GetSrcModulo(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].ATTR & DMA_CFG_ATTR_SMOD_MASK) >>
                       DMA_CFG_ATTR_SMOD_SHIFT;
    return (uint8)u16TmpVal;
}

/**
 * @brief Set the source address aligned modulo of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u8SrcModulo the source address aligned modulo
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetSrcModulo(Dma_Type *const pDma, uint8 u8Channel, uint8 u8SrcModulo)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].ATTR = (uint16)((Dma0_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_SMOD_MASK) |
                                                  DMA_CFG_ATTR_SMOD(u8SrcModulo));
        pDma->CFG[u8Channel].ATTR      = Dma0_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_SMOD_MASK) |
                                             DMA_CFG_ATTR_SMOD(u8SrcModulo));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].ATTR = (uint16)((Dma1_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_SMOD_MASK) |
                                                  DMA_CFG_ATTR_SMOD(u8SrcModulo));
        pDma->CFG[u8Channel].ATTR      = Dma1_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_SMOD_MASK) |
                                             DMA_CFG_ATTR_SMOD(u8SrcModulo));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetSrcModulo(Dma_Type *const pDma, uint8 u8Channel, uint8 u8SrcModulo)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_SMOD_MASK) |
                                         DMA_CFG_ATTR_SMOD(u8SrcModulo));
    /* PRQA S 2985 -- */
}
#endif

/**
 * @brief Get the destination address aligned modulo of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint8 the destination address aligned modulo
 */
LOCAL_INLINE uint8 Dma_HWA_GetDestModulo(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].ATTR & DMA_CFG_ATTR_DMOD_MASK) >>
                       DMA_CFG_ATTR_DMOD_SHIFT;
    return (uint8)u16TmpVal;
}

/**
 * @brief Set the destination address aligned modulo of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u8DestModulo the destination address aligned modulo
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetDestModulo(Dma_Type *const pDma, uint8 u8Channel, uint8 u8DestModulo)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].ATTR = (uint16)((Dma0_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_DMOD_MASK) |
                                                  DMA_CFG_ATTR_DMOD(u8DestModulo));
        pDma->CFG[u8Channel].ATTR      = Dma0_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_DMOD_MASK) |
                                             DMA_CFG_ATTR_DMOD(u8DestModulo));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].ATTR = (uint16)((Dma1_ShadowReg[u8Channel].ATTR &
                                                   ~DMA_CFG_ATTR_DMOD_MASK) |
                                                  DMA_CFG_ATTR_DMOD(u8DestModulo));
        pDma->CFG[u8Channel].ATTR      = Dma1_ShadowReg[u8Channel].ATTR;
#else
        pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_DMOD_MASK) |
                                             DMA_CFG_ATTR_DMOD(u8DestModulo));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetDestModulo(Dma_Type *const pDma, uint8 u8Channel, uint8 u8DestModulo)
{
    pDma->CFG[u8Channel].ATTR = (uint16)((pDma->CFG[u8Channel].ATTR & ~DMA_CFG_ATTR_DMOD_MASK) |
                                         DMA_CFG_ATTR_DMOD(u8DestModulo));
}
#endif

/**
 * @brief Get the address adjustment applied to the source address after major loop finished
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return sint32 the address adjustment applied to the source address after major loop finished
 */
LOCAL_INLINE sint32 Dma_HWA_GetSrcLastAddrAdjustment(const Dma_Type *const pDma, uint8 u8Channel)
{
    return (sint32)pDma->CFG[u8Channel].SLAST;
}

/**
 * @brief Set the address adjustment applied to the source address after major loop finished
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param s32LastAdj the address adjustment applied to the source address after major loop finished
 */
LOCAL_INLINE void Dma_HWA_SetSrcLastAddrAdjustment(Dma_Type *const pDma,
                                                   uint8           u8Channel,
                                                   sint32          s32LastAdj)
{
    pDma->CFG[u8Channel].SLAST = (uint32)s32LastAdj;
}

/**
 * @brief Get the address adjustment applied to the destination address after major loop finished
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return sint32 the address adjustment applied to the destination address after major loop finished
 */
LOCAL_INLINE sint32 Dma_HWA_GetDestLastAddrAdjustment(const Dma_Type *const pDma, uint8 u8Channel)
{
    return (sint32)pDma->CFG[u8Channel].DLAST;
}

/**
 * @brief Set the address adjustment applied to the destination address after major loop finished
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param s32LastAdj the address adjustment applied to the destination address after major loop finished
 */
LOCAL_INLINE void Dma_HWA_SetDestLastAddrAdjustment(Dma_Type *const pDma,
                                                    uint8           u8Channel,
                                                    sint32          s32LastAdj)
{
    pDma->CFG[u8Channel].DLAST = (uint32)s32LastAdj;
}

/**
 * @brief Get whether source address inner loop offset is enabled
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE source address inner loop offset is enabled
 * @return FALSE source address inner loop offset is disabled
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE boolean Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(const Dma_Type *const pDma,
                                                             uint8                 u8Channel)
{
    uint32 u32TmpVal = 0u;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        u32TmpVal = 0U;
    }
    else
    {
        if ((uint32)pDma == DMA0_BASE)
        {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
            u32TmpVal = (Dma0_ShadowReg[u8Channel].NBYTES.ILOFFNO &
                         DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_SILOE_SHIFT;
#else
            u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFNO & DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_SILOE_SHIFT;
#endif
        }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
        else
        {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
            u32TmpVal = (Dma1_ShadowReg[u8Channel].NBYTES.ILOFFNO &
                         DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_SILOE_SHIFT;
#else
            u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFNO & DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_SILOE_SHIFT;
#endif
        }
#endif
    }
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}
#else
LOCAL_INLINE boolean Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(const Dma_Type *const pDma,
                                                             uint8                 u8Channel)
{
    uint32 u32TmpVal;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        u32TmpVal = 0U;
    }
    else
    {
        u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFNO & DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK) >>
                    DMA_CFG_NBYTES_ILOFFNO_SILOE_SHIFT;
    }
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}
#endif

/**
 * @brief Get whether destination address inner loop offset is enabled
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE destination address inner loop offset is enabled
 * @return FALSE destination address inner loop offset is disabled
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE boolean Dma_HWA_GetInnerLoopDestOffsetEnableFlag(const Dma_Type *const pDma,
                                                              uint8                 u8Channel)
{
    uint32 u32TmpVal = 0u;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        u32TmpVal = 0U;
    }
    else
    {
        if ((uint32)pDma == DMA0_BASE)
        {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
            u32TmpVal = (Dma0_ShadowReg[u8Channel].NBYTES.ILOFFNO &
                         DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_DILOE_SHIFT;
#else
            u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFNO & DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_DILOE_SHIFT;
#endif
        }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
        else
        {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
            u32TmpVal = (Dma1_ShadowReg[u8Channel].NBYTES.ILOFFNO &
                         DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_DILOE_SHIFT;
#else
            u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFNO & DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_DILOE_SHIFT;
#endif
        }
#endif
    }
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}
#else
LOCAL_INLINE boolean Dma_HWA_GetInnerLoopDestOffsetEnableFlag(const Dma_Type *const pDma,
                                                              uint8                 u8Channel)
{
    uint32 u32TmpVal;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        u32TmpVal = 0U;
    }
    else
    {
        u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFNO & DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK) >>
                    DMA_CFG_NBYTES_ILOFFNO_DILOE_SHIFT;
    }
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}
#endif

/**
 * @brief Get the inner loop offset of the DMA channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return sint32 the signed inner loop offset
 */
LOCAL_INLINE sint32 Dma_HWA_GetInnerLoopOffset(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint32 u32TmpVal;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        u32TmpVal = 0U;
    }
    else
    {
        boolean bDmaInnerLoopSrcOffsetEnable  = Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(pDma,
                                                                                       u8Channel);
        boolean bDmaInnerLoopDestOffsetEnable = Dma_HWA_GetInnerLoopDestOffsetEnableFlag(pDma,
                                                                                         u8Channel);
        if ((bDmaInnerLoopSrcOffsetEnable == (boolean)FALSE) &&
            (bDmaInnerLoopDestOffsetEnable == (boolean)FALSE))
        {
            u32TmpVal = 0U;
        }
        else
        {
            u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFYES & DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK) >>
                        DMA_CFG_NBYTES_ILOFFYES_ILOFF_SHIFT;
        }
    }
    /* Convert sign-extended 20bit value to signed 32bit value */
    if ((u32TmpVal & (1UL << 19U)) != 0U)
    {
        u32TmpVal |= 0xFFF00000U;
    }
    return (sint32)u32TmpVal;
}

/**
 * @brief Get the transfer data size of the inner loop
 * @note if inner loop mapping is disabled, the range is 0~2^31-1
 * if inner loop mapping is enabled and inner loop offset is disabled, the range is 0~2^30-1
 * if inner loop mapping is enabled and inner loop offset is enabled, the range is 0~2^10-1
 * 0 means 2^32
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint32 the transfer data size of the inner loop
 */
LOCAL_INLINE uint32 Dma_HWA_GetInnerLoopSize(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint32 u32TmpVal;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        u32TmpVal = pDma->CFG[u8Channel].NBYTES.ILNO;
    }
    else
    {
        boolean bDmaInnerLoopSrcOffsetEnable  = Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(pDma,
                                                                                       u8Channel);
        boolean bDmaInnerLoopDestOffsetEnable = Dma_HWA_GetInnerLoopDestOffsetEnableFlag(pDma,
                                                                                         u8Channel);
        if ((bDmaInnerLoopSrcOffsetEnable == (boolean)FALSE) &&
            (bDmaInnerLoopDestOffsetEnable == (boolean)FALSE))
        {
            u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFNO & DMA_CFG_NBYTES_ILOFFNO_NBYTES_MASK) >>
                        DMA_CFG_NBYTES_ILOFFNO_NBYTES_SHIFT;
        }
        else
        {
            u32TmpVal = (pDma->CFG[u8Channel].NBYTES.ILOFFYES & DMA_CFG_NBYTES_ILOFFYES_NBYTES_MASK) >>
                        DMA_CFG_NBYTES_ILOFFYES_NBYTES_SHIFT;
        }
    }
    return u32TmpVal;
}

/**
 * @brief Set the inner loop offset of the DMA channel
 *
 * @note the inner loop offset can only be enabled when inner loop mapping is enabled
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param bEnableSrcOffset whether to enable source address inner loop offset
 * @param bEnableDestOffset whether to enable destination address inner loop offset
 * @param s32Offset the inner loop offset
 * @return TRUE the inner loop mapping is enabled, the setting is applied
 * @return FALSE the inner loop mapping is disabled, the setting is ignored
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE boolean Dma_HWA_SetInnerLoopOffset(Dma_Type *const pDma,
                                                uint8           u8Channel,
                                                boolean         bEnableSrcOffset,
                                                boolean         bEnableDestOffset,
                                                sint32          s32Offset)
{
    boolean bRet;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        bRet = FALSE;
    }
    else
    {
        if ((bEnableSrcOffset == (boolean)FALSE) && (bEnableDestOffset == (boolean)FALSE))
        {
            boolean bDmaInnerLoopSrcOffsetEnable =
                Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(pDma, u8Channel);
            boolean bDmaInnerLoopDestOffsetEnable =
                Dma_HWA_GetInnerLoopDestOffsetEnableFlag(pDma, u8Channel);
            /* If inner loop offset is enabled, to disable inner loop offset, we should clear the
               inner loop offset enable bit and meanwhile the inner loop offset bits */
            if ((bDmaInnerLoopSrcOffsetEnable == (boolean)TRUE) ||
                (bDmaInnerLoopDestOffsetEnable == (boolean)TRUE))
            {
                if ((uint32)pDma == DMA0_BASE)
                {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
                    Dma0_ShadowReg[u8Channel].NBYTES.ILOFFNO &= ~(
                        DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK | DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK |
                        DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK);
                    pDma->CFG[u8Channel].NBYTES.ILOFFNO = Dma0_ShadowReg[u8Channel].NBYTES.ILOFFNO;
#else
                    pDma->CFG[u8Channel].NBYTES.ILOFFNO &= ~(DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK |
                                                             DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK |
                                                             DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK);
#endif
                }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
                else
                {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
                    Dma1_ShadowReg[u8Channel].NBYTES.ILOFFNO &= ~(
                        DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK | DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK |
                        DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK);
                    pDma->CFG[u8Channel].NBYTES.ILOFFNO = Dma1_ShadowReg[u8Channel].NBYTES.ILOFFNO;
#else
                    pDma->CFG[u8Channel].NBYTES.ILOFFNO &= ~(DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK |
                                                             DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK |
                                                             DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK);
#endif
                }
#endif
            }
        }
        else
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: Macros are needed to avoid accidental value writing to the register */
            if ((uint32)pDma == DMA0_BASE)
            {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
                Dma0_ShadowReg[u8Channel].NBYTES.ILOFFYES =
                    (Dma0_ShadowReg[u8Channel].NBYTES.ILOFFYES &
                     ~(DMA_CFG_NBYTES_ILOFFYES_SILOE_MASK | DMA_CFG_NBYTES_ILOFFYES_DILOE_MASK |
                       DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK)) |
                    DMA_CFG_NBYTES_ILOFFYES_SILOE(bEnableSrcOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_DILOE(bEnableDestOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_ILOFF(s32Offset);
                pDma->CFG[u8Channel].NBYTES.ILOFFYES = Dma0_ShadowReg[u8Channel].NBYTES.ILOFFYES;
#else
                pDma->CFG[u8Channel].NBYTES.ILOFFYES =
                    (pDma->CFG[u8Channel].NBYTES.ILOFFYES &
                     ~(DMA_CFG_NBYTES_ILOFFYES_SILOE_MASK | DMA_CFG_NBYTES_ILOFFYES_DILOE_MASK |
                       DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK)) |
                    DMA_CFG_NBYTES_ILOFFYES_SILOE(bEnableSrcOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_DILOE(bEnableDestOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_ILOFF(s32Offset);
#endif
            }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
            else
            {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
                Dma1_ShadowReg[u8Channel].NBYTES.ILOFFYES =
                    (Dma1_ShadowReg[u8Channel].NBYTES.ILOFFYES &
                     ~(DMA_CFG_NBYTES_ILOFFYES_SILOE_MASK | DMA_CFG_NBYTES_ILOFFYES_DILOE_MASK |
                       DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK)) |
                    DMA_CFG_NBYTES_ILOFFYES_SILOE(bEnableSrcOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_DILOE(bEnableDestOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_ILOFF(s32Offset);
                pDma->CFG[u8Channel].NBYTES.ILOFFYES = Dma1_ShadowReg[u8Channel].NBYTES.ILOFFYES;
#else
                pDma->CFG[u8Channel].NBYTES.ILOFFYES =
                    (pDma->CFG[u8Channel].NBYTES.ILOFFYES &
                     ~(DMA_CFG_NBYTES_ILOFFYES_SILOE_MASK | DMA_CFG_NBYTES_ILOFFYES_DILOE_MASK |
                       DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK)) |
                    DMA_CFG_NBYTES_ILOFFYES_SILOE(bEnableSrcOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_DILOE(bEnableDestOffset) |
                    DMA_CFG_NBYTES_ILOFFYES_ILOFF(s32Offset);
#endif
            }
#endif
            /* PRQA S 2985 -- */
        }
        bRet = TRUE;
    }
    return bRet;
}
#else
LOCAL_INLINE boolean Dma_HWA_SetInnerLoopOffset(Dma_Type *const pDma,
                                                uint8           u8Channel,
                                                boolean         bEnableSrcOffset,
                                                boolean         bEnableDestOffset,
                                                sint32          s32Offset)
{
    boolean bRet;
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        bRet = FALSE;
    }
    else
    {
        if ((bEnableSrcOffset == (boolean)FALSE) && (bEnableDestOffset == (boolean)FALSE))
        {
            boolean bDmaInnerLoopSrcOffsetEnable =
                Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(pDma, u8Channel);
            boolean bDmaInnerLoopDestOffsetEnable =
                Dma_HWA_GetInnerLoopDestOffsetEnableFlag(pDma, u8Channel);
            /* If inner loop offset is enabled, to disable inner loop offset, we should clear the
               inner loop offset enable bit and meanwhile the inner loop offset bits */
            if ((bDmaInnerLoopSrcOffsetEnable == (boolean)TRUE) ||
                (bDmaInnerLoopDestOffsetEnable == (boolean)TRUE))
            {
                pDma->CFG[u8Channel].NBYTES.ILOFFNO &= ~(DMA_CFG_NBYTES_ILOFFNO_SILOE_MASK |
                                                         DMA_CFG_NBYTES_ILOFFNO_DILOE_MASK |
                                                         DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK);
            }
        }
        else
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: Macros are needed to avoid accidental value writing to the register */
            pDma->CFG[u8Channel].NBYTES.ILOFFYES = (pDma->CFG[u8Channel].NBYTES.ILOFFYES &
                                                    ~(DMA_CFG_NBYTES_ILOFFYES_SILOE_MASK |
                                                      DMA_CFG_NBYTES_ILOFFYES_DILOE_MASK |
                                                      DMA_CFG_NBYTES_ILOFFYES_ILOFF_MASK)) |
                                                   DMA_CFG_NBYTES_ILOFFYES_SILOE(bEnableSrcOffset) |
                                                   DMA_CFG_NBYTES_ILOFFYES_DILOE(bEnableDestOffset) |
                                                   DMA_CFG_NBYTES_ILOFFYES_ILOFF(s32Offset);
            /* PRQA S 2985 -- */
        }
        bRet = TRUE;
    }
    return bRet;
}
#endif

/**
 * @brief Set the transfer data size of the inner loop
 * @note if inner loop mapping is disabled, the range is 0~2^31-1
 * if inner loop mapping is enabled and inner loop offset is disabled, the range is 0~2^30-1
 * if inner loop mapping is enabled and inner loop offset is enabled, the range is 0~2^10-1
 * 0 means 2^32
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u32Size the transfer data size of the inner loop
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetInnerLoopSize(Dma_Type *const pDma, uint8 u8Channel, uint32 u32Size)
{
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: Macros are needed to avoid accidental value writing to the register */
        pDma->CFG[u8Channel].NBYTES.ILNO = DMA_CFG_NBYTES_ILNO_NBYTES(u32Size);
        /* PRQA S 2985 -- */
    }
    else
    {
        boolean bDmaInnerLoopSrcOffsetEnable  = Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(pDma,
                                                                                       u8Channel);
        boolean bDmaInnerLoopDestOffsetEnable = Dma_HWA_GetInnerLoopDestOffsetEnableFlag(pDma,
                                                                                         u8Channel);
        if ((bDmaInnerLoopSrcOffsetEnable == (boolean)FALSE) &&
            (bDmaInnerLoopDestOffsetEnable == (boolean)FALSE))
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: Macros are needed to avoid accidental value writing to the register */
            if ((uint32)pDma == DMA0_BASE)
            {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
                Dma0_ShadowReg[u8Channel].NBYTES.ILOFFNO = (Dma0_ShadowReg[u8Channel].NBYTES.ILOFFNO &
                                                            ~DMA_CFG_NBYTES_ILOFFNO_NBYTES_MASK) |
                                                           DMA_CFG_NBYTES_ILOFFNO_NBYTES(u32Size);
                pDma->CFG[u8Channel].NBYTES.ILOFFNO = Dma0_ShadowReg[u8Channel].NBYTES.ILOFFNO;
#else
                pDma->CFG[u8Channel].NBYTES.ILOFFNO = (pDma->CFG[u8Channel].NBYTES.ILOFFNO &
                                                       ~DMA_CFG_NBYTES_ILOFFNO_NBYTES_MASK) |
                                                      DMA_CFG_NBYTES_ILOFFNO_NBYTES(u32Size);
#endif
            }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
            else
            {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
                Dma1_ShadowReg[u8Channel].NBYTES.ILOFFNO = (Dma1_ShadowReg[u8Channel].NBYTES.ILOFFNO &
                                                            ~DMA_CFG_NBYTES_ILOFFNO_NBYTES_MASK) |
                                                           DMA_CFG_NBYTES_ILOFFNO_NBYTES(u32Size);
                pDma->CFG[u8Channel].NBYTES.ILOFFNO = Dma1_ShadowReg[u8Channel].NBYTES.ILOFFNO;
#else
                pDma->CFG[u8Channel].NBYTES.ILOFFNO = (pDma->CFG[u8Channel].NBYTES.ILOFFNO &
                                                       ~DMA_CFG_NBYTES_ILOFFNO_NBYTES_MASK) |
                                                      DMA_CFG_NBYTES_ILOFFNO_NBYTES(u32Size);
#endif
            }
#endif
            /* PRQA S 2985 -- */
        }
        else
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: Macros are needed to avoid accidental value writing to the register */
            if ((uint32)pDma == DMA0_BASE)
            {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
                Dma0_ShadowReg[u8Channel].NBYTES.ILOFFYES = (Dma0_ShadowReg[u8Channel].NBYTES.ILOFFYES &
                                                             ~DMA_CFG_NBYTES_ILOFFYES_NBYTES_MASK) |
                                                            DMA_CFG_NBYTES_ILOFFYES_NBYTES(u32Size);
                pDma->CFG[u8Channel].NBYTES.ILOFFYES = Dma0_ShadowReg[u8Channel].NBYTES.ILOFFYES;
#else
                pDma->CFG[u8Channel].NBYTES.ILOFFYES = (pDma->CFG[u8Channel].NBYTES.ILOFFYES &
                                                        ~DMA_CFG_NBYTES_ILOFFYES_NBYTES_MASK) |
                                                       DMA_CFG_NBYTES_ILOFFYES_NBYTES(u32Size);
#endif
            }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
            else
            {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
                Dma1_ShadowReg[u8Channel].NBYTES.ILOFFYES = (Dma1_ShadowReg[u8Channel].NBYTES.ILOFFYES &
                                                             ~DMA_CFG_NBYTES_ILOFFYES_NBYTES_MASK) |
                                                            DMA_CFG_NBYTES_ILOFFYES_NBYTES(u32Size);
                pDma->CFG[u8Channel].NBYTES.ILOFFYES = Dma1_ShadowReg[u8Channel].NBYTES.ILOFFYES;
#else
                pDma->CFG[u8Channel].NBYTES.ILOFFYES = (pDma->CFG[u8Channel].NBYTES.ILOFFYES &
                                                        ~DMA_CFG_NBYTES_ILOFFYES_NBYTES_MASK) |
                                                       DMA_CFG_NBYTES_ILOFFYES_NBYTES(u32Size);
#endif
            }
#endif
            /* PRQA S 2985 -- */
        }
    }
}
#else
LOCAL_INLINE void Dma_HWA_SetInnerLoopSize(Dma_Type *const pDma, uint8 u8Channel, uint32 u32Size)
{
    if (Dma_HWA_GetInnerLoopMappingEnableFlag(pDma) == (boolean)FALSE)
    {
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: Macros are needed to avoid accidental value writing to the register */
        pDma->CFG[u8Channel].NBYTES.ILNO = DMA_CFG_NBYTES_ILNO_NBYTES(u32Size);
        /* PRQA S 2985 -- */
    }
    else
    {
        boolean bDmaInnerLoopSrcOffsetEnable  = Dma_HWA_GetInnerLoopSrcOffsetEnableFlag(pDma,
                                                                                       u8Channel);
        boolean bDmaInnerLoopDestOffsetEnable = Dma_HWA_GetInnerLoopDestOffsetEnableFlag(pDma,
                                                                                         u8Channel);
        if ((bDmaInnerLoopSrcOffsetEnable == (boolean)FALSE) &&
            (bDmaInnerLoopDestOffsetEnable == (boolean)FALSE))
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: Macros are needed to avoid accidental value writing to the register */
            pDma->CFG[u8Channel].NBYTES.ILOFFNO = (pDma->CFG[u8Channel].NBYTES.ILOFFNO &
                                                   ~DMA_CFG_NBYTES_ILOFFNO_NBYTES_MASK) |
                                                  DMA_CFG_NBYTES_ILOFFNO_NBYTES(u32Size);
            /* PRQA S 2985 -- */
        }
        else
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: Macros are needed to avoid accidental value writing to the register */
            pDma->CFG[u8Channel].NBYTES.ILOFFYES = (pDma->CFG[u8Channel].NBYTES.ILOFFYES &
                                                    ~DMA_CFG_NBYTES_ILOFFYES_NBYTES_MASK) |
                                                   DMA_CFG_NBYTES_ILOFFYES_NBYTES(u32Size);
            /* PRQA S 2985 -- */
        }
    }
}
#endif

/**
 * @brief Set the transfer data size of the inner loop
 * @note Clear inner loop size, only be used for Deinit.
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u32Size the transfer data size of the inner loop
 */
LOCAL_INLINE void Dma_HWA_ClearInnerLoopSize(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CFG[u8Channel].NBYTES.ILNO = DMA_CFG_NBYTES_ILNO_NBYTES(0U);

    pDma->CFG[u8Channel].NBYTES.ILOFFNO = (pDma->CFG[u8Channel].NBYTES.ILOFFNO &
                                           ~DMA_CFG_NBYTES_ILOFFNO_NBYTES_MASK) |
                                          DMA_CFG_NBYTES_ILOFFNO_NBYTES(0U);

    pDma->CFG[u8Channel].NBYTES.ILOFFYES = (pDma->CFG[u8Channel].NBYTES.ILOFFYES &
                                            ~DMA_CFG_NBYTES_ILOFFYES_NBYTES_MASK) |
                                           DMA_CFG_NBYTES_ILOFFYES_NBYTES(0U);
    /* PRQA S 2985 -- */
}

/**
 * @brief Get whether current channel to channel trig is enabled when inner loop complete
 * @note this field shall always be same with the beginning channel to channel trig enable flag
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE channel to channel trig is enabled when inner loop complete
 * @return FALSE channel to channel trig is disabled when inner loop complete
 */
LOCAL_INLINE boolean Dma_HWA_GetCurrentChToChTrigEnableFlag(const Dma_Type *const pDma,
                                                            uint8                 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CLC.CHTRGENNO & DMA_CFG_CLC_CHTRGENNO_CHTRGEN_MASK) >>
                       DMA_CFG_CLC_CHTRGENNO_CHTRGEN_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get the target channel when current channel to channel trig is enabled
 * @note this field shall always be same with the beginning traget channel trig field
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint8 the target channel
 */
LOCAL_INLINE uint8 Dma_HWA_GetCurrentChToChTrigChannel(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal;
    if (Dma_HWA_GetCurrentChToChTrigEnableFlag(pDma, u8Channel) == (boolean)TRUE)
    {
        u16TmpVal = (pDma->CFG[u8Channel].CLC.CHTRGENYES & DMA_CFG_CLC_CHTRGENYES_TRGCH_MASK) >>
                    DMA_CFG_CLC_CHTRGENYES_TRGCH_SHIFT;
    }
    else
    {
        u16TmpVal = 0U;
    }
    return (uint8)u16TmpVal;
}

/**
 * @brief Get the current loop count
 * The current loop count is the same as the beginning loop count initially, and it will decrement
 * each time a inner loop finishes
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint16 the current loop count
 */
LOCAL_INLINE uint16 Dma_HWA_GetCurrentLoopCount(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal;
    if (Dma_HWA_GetCurrentChToChTrigEnableFlag(pDma, u8Channel) == (boolean)FALSE)
    {
        u16TmpVal = (pDma->CFG[u8Channel].CLC.CHTRGENNO & DMA_CFG_CLC_CHTRGENNO_CLC_MASK) >>
                    DMA_CFG_CLC_CHTRGENNO_CLC_SHIFT;
    }
    else
    {
        u16TmpVal = (pDma->CFG[u8Channel].CLC.CHTRGENYES & DMA_CFG_CLC_CHTRGENYES_CLC_MASK) >>
                    DMA_CFG_CLC_CHTRGENYES_CLC_SHIFT;
    }
    return u16TmpVal;
}

/**
 * @brief Get whether beginning channel to channel trig is enabled when inner loop complete
 * @note this field shall always be same with the current channel to channel trig enable flag
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE channel to channel trig is enabled when inner loop complete
 * @return FALSE channel to channel trig is disabled when inner loop complete
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE boolean Dma_HWA_GetStartChToChTrigEnableFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = 0u;
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma0_ShadowReg[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK) >>
                    DMA_CFG_BLC_CHTRGENNO_CHTRGEN_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK) >>
                    DMA_CFG_BLC_CHTRGENNO_CHTRGEN_SHIFT;
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma1_ShadowReg[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK) >>
                    DMA_CFG_BLC_CHTRGENNO_CHTRGEN_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK) >>
                    DMA_CFG_BLC_CHTRGENNO_CHTRGEN_SHIFT;
#endif
    }
#endif
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}
#else
LOCAL_INLINE boolean Dma_HWA_GetStartChToChTrigEnableFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK) >>
                       DMA_CFG_BLC_CHTRGENNO_CHTRGEN_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}
#endif

/**
 * @brief Get the target channel when beginning channel to channel trig is enabled
 * @note this field shall always be same with the current traget channel trig field
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint8 the target channel
 */
LOCAL_INLINE uint8 Dma_HWA_GetStartChToChTrigChannel(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal;
    if (Dma_HWA_GetStartChToChTrigEnableFlag(pDma, u8Channel) == (boolean)TRUE)
    {
        u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENYES & DMA_CFG_BLC_CHTRGENYES_TRGCH_MASK) >>
                    DMA_CFG_BLC_CHTRGENYES_TRGCH_SHIFT;
    }
    else
    {
        u16TmpVal = 0U;
    }
    return (uint8)u16TmpVal;
}

/**
 * @brief Get the beginning loop count
 * This field specifies how many inner loops will be executed in a DMA transfer
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint16 the beginning loop count
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE uint16 Dma_HWA_GetBeginningLoopCount(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = 0u;
    if (Dma_HWA_GetStartChToChTrigEnableFlag(pDma, u8Channel) == (boolean)FALSE)
    {
        if ((uint32)pDma == DMA0_BASE)
        {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
            u16TmpVal = (Dma0_ShadowReg[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENNO_BLC_SHIFT;
#else
            u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENNO_BLC_SHIFT;
#endif
        }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
        else
        {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
            u16TmpVal = (Dma1_ShadowReg[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENNO_BLC_SHIFT;
#else
            u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENNO_BLC_SHIFT;
#endif
        }
#endif
    }
    else
    {
        if ((uint32)pDma == DMA0_BASE)
        {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
            u16TmpVal = (Dma0_ShadowReg[u8Channel].BLC.CHTRGENYES & DMA_CFG_BLC_CHTRGENYES_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENYES_BLC_SHIFT;
#else
            u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENYES & DMA_CFG_BLC_CHTRGENYES_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENYES_BLC_SHIFT;
#endif
        }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
        else
        {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
            u16TmpVal = (Dma1_ShadowReg[u8Channel].BLC.CHTRGENYES & DMA_CFG_BLC_CHTRGENYES_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENYES_BLC_SHIFT;
#else
            u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENYES & DMA_CFG_BLC_CHTRGENYES_BLC_MASK) >>
                        DMA_CFG_BLC_CHTRGENYES_BLC_SHIFT;
#endif
        }
#endif
    }
    return u16TmpVal;
}
#else
LOCAL_INLINE uint16 Dma_HWA_GetBeginningLoopCount(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal;
    if (Dma_HWA_GetStartChToChTrigEnableFlag(pDma, u8Channel) == (boolean)FALSE)
    {
        u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENNO & DMA_CFG_BLC_CHTRGENNO_BLC_MASK) >>
                    DMA_CFG_BLC_CHTRGENNO_BLC_SHIFT;
    }
    else
    {
        u16TmpVal = (pDma->CFG[u8Channel].BLC.CHTRGENYES & DMA_CFG_BLC_CHTRGENYES_BLC_MASK) >>
                    DMA_CFG_BLC_CHTRGENYES_BLC_SHIFT;
    }
    return u16TmpVal;
}
#endif

/**
 * @brief Set channel to channel trig when inner loop complete
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param bEnable whether to enbable channel to channel trig when inner loop complete
 * @param u8TrigChannel the target channel
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetChannelToChannelTrig(Dma_Type *const pDma,
                                                  uint8           u8Channel,
                                                  boolean         bEnable,
                                                  uint8           u8TrigChannel)
{
    if (bEnable == (boolean)FALSE)
    {
        if (Dma_HWA_GetStartChToChTrigEnableFlag(pDma, u8Channel) == (boolean)TRUE)
        {
            if ((uint32)pDma == DMA0_BASE)
            {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
                Dma0_ShadowReg[u8Channel].BLC.CHTRGENNO &= (uint16) ~(
                    DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK);
                Dma0_ShadowReg[u8Channel].CLC.CHTRGENNO &= (uint16) ~(
                    DMA_CFG_CLC_CHTRGENNO_CHTRGEN_MASK);
                pDma->CFG[u8Channel].BLC.CHTRGENNO = Dma0_ShadowReg[u8Channel].BLC.CHTRGENNO;
                pDma->CFG[u8Channel].CLC.CHTRGENNO = Dma0_ShadowReg[u8Channel].CLC.CHTRGENNO;
#else
                pDma->CFG[u8Channel].BLC.CHTRGENNO &= (uint16) ~(DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK);
                pDma->CFG[u8Channel].CLC.CHTRGENNO &= (uint16) ~(DMA_CFG_CLC_CHTRGENNO_CHTRGEN_MASK);
#endif
            }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
            else
            {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
                Dma1_ShadowReg[u8Channel].BLC.CHTRGENNO &= (uint16) ~(
                    DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK);
                Dma1_ShadowReg[u8Channel].CLC.CHTRGENNO &= (uint16) ~(
                    DMA_CFG_CLC_CHTRGENNO_CHTRGEN_MASK);
                pDma->CFG[u8Channel].BLC.CHTRGENNO = Dma1_ShadowReg[u8Channel].BLC.CHTRGENNO;
                pDma->CFG[u8Channel].CLC.CHTRGENNO = Dma1_ShadowReg[u8Channel].CLC.CHTRGENNO;
#else
                pDma->CFG[u8Channel].BLC.CHTRGENNO &= (uint16) ~(DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK);
                pDma->CFG[u8Channel].CLC.CHTRGENNO &= (uint16) ~(DMA_CFG_CLC_CHTRGENNO_CHTRGEN_MASK);
#endif
            }
#endif
        }
    }
    else
    {
        if ((uint32)pDma == DMA0_BASE)
        {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
            Dma0_ShadowReg[u8Channel].BLC.CHTRGENYES =
                (uint16)((Dma0_ShadowReg[u8Channel].BLC.CHTRGENYES &
                          ~(DMA_CFG_BLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_BLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_BLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_BLC_CHTRGENYES_TRGCH(u8TrigChannel));
            Dma0_ShadowReg[u8Channel].CLC.CHTRGENYES =
                (uint16)((Dma0_ShadowReg[u8Channel].CLC.CHTRGENYES &
                          ~(DMA_CFG_CLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_CLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_CLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_CLC_CHTRGENYES_TRGCH(u8TrigChannel));
            pDma->CFG[u8Channel].BLC.CHTRGENYES = Dma0_ShadowReg[u8Channel].BLC.CHTRGENYES;
            pDma->CFG[u8Channel].CLC.CHTRGENYES = Dma0_ShadowReg[u8Channel].CLC.CHTRGENYES;
#else
            pDma->CFG[u8Channel].BLC.CHTRGENYES =
                (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENYES &
                          ~(DMA_CFG_BLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_BLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_BLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_BLC_CHTRGENYES_TRGCH(u8TrigChannel));
            pDma->CFG[u8Channel].CLC.CHTRGENYES =
                (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENYES &
                          ~(DMA_CFG_CLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_CLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_CLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_CLC_CHTRGENYES_TRGCH(u8TrigChannel));
#endif
        }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
        else
        {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
            Dma1_ShadowReg[u8Channel].BLC.CHTRGENYES =
                (uint16)((Dma1_ShadowReg[u8Channel].BLC.CHTRGENYES &
                          ~(DMA_CFG_BLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_BLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_BLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_BLC_CHTRGENYES_TRGCH(u8TrigChannel));
            Dma1_ShadowReg[u8Channel].CLC.CHTRGENYES =
                (uint16)((Dma1_ShadowReg[u8Channel].CLC.CHTRGENYES &
                          ~(DMA_CFG_CLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_CLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_CLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_CLC_CHTRGENYES_TRGCH(u8TrigChannel));
            pDma->CFG[u8Channel].BLC.CHTRGENYES = Dma1_ShadowReg[u8Channel].BLC.CHTRGENYES;
            pDma->CFG[u8Channel].CLC.CHTRGENYES = Dma1_ShadowReg[u8Channel].CLC.CHTRGENYES;
#else
            pDma->CFG[u8Channel].BLC.CHTRGENYES =
                (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENYES &
                          ~(DMA_CFG_BLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_BLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_BLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_BLC_CHTRGENYES_TRGCH(u8TrigChannel));
            pDma->CFG[u8Channel].CLC.CHTRGENYES =
                (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENYES &
                          ~(DMA_CFG_CLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_CLC_CHTRGENYES_TRGCH_MASK)) |
                         DMA_CFG_CLC_CHTRGENYES_CHTRGEN(TRUE) |
                         DMA_CFG_CLC_CHTRGENYES_TRGCH(u8TrigChannel));
#endif
        }
#endif
    }
}
#else
LOCAL_INLINE void Dma_HWA_SetChannelToChannelTrig(Dma_Type *const pDma,
                                                  uint8           u8Channel,
                                                  boolean         bEnable,
                                                  uint8           u8TrigChannel)
{
    if (bEnable == (boolean)FALSE)
    {
        if (Dma_HWA_GetStartChToChTrigEnableFlag(pDma, u8Channel) == (boolean)TRUE)
        {
            pDma->CFG[u8Channel].BLC.CHTRGENNO &= (uint16) ~(DMA_CFG_BLC_CHTRGENNO_CHTRGEN_MASK);
            pDma->CFG[u8Channel].CLC.CHTRGENNO &= (uint16) ~(DMA_CFG_CLC_CHTRGENNO_CHTRGEN_MASK);
        }
    }
    else
    {
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: Macros are needed to avoid accidental value writing to the register */
        pDma->CFG[u8Channel].BLC.CHTRGENYES =
            (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENYES &
                      ~(DMA_CFG_BLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_BLC_CHTRGENYES_TRGCH_MASK)) |
                     DMA_CFG_BLC_CHTRGENYES_CHTRGEN(bEnable) |
                     DMA_CFG_BLC_CHTRGENYES_TRGCH(u8TrigChannel));
        pDma->CFG[u8Channel].CLC.CHTRGENYES =
            (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENYES &
                      ~(DMA_CFG_CLC_CHTRGENYES_CHTRGEN_MASK | DMA_CFG_CLC_CHTRGENYES_TRGCH_MASK)) |
                     DMA_CFG_CLC_CHTRGENYES_CHTRGEN(bEnable) |
                     DMA_CFG_CLC_CHTRGENYES_TRGCH(u8TrigChannel));
        /* PRQA S 2985 -- */
    }
}
#endif

/**
 * @brief clear channel to channel trig when inner loop complete
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_ClearChannelToChannelTrig(Dma_Type *const pDma, uint8 u8Channel)
{
    pDma->CFG[u8Channel].BLC.CHTRGENNO &= (uint16)~DMA_CFG_BLC_CHTRGENNO_MASK;
    pDma->CFG[u8Channel].CLC.CHTRGENNO &= (uint16)~DMA_CFG_CLC_CHTRGENNO_MASK;

    pDma->CFG[u8Channel].BLC.CHTRGENYES &= (uint16)~DMA_CFG_BLC_CHTRGENYES_MASK;
    pDma->CFG[u8Channel].CLC.CHTRGENYES &= (uint16)~DMA_CFG_CLC_CHTRGENYES_MASK;
}

/**
 * @brief Set the loop count of the DMA transfer
 * This field specifies how many inner loops will be executed in a DMA transfer
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u16LoopCnt the inner loop count in a DMA transfer
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetLoopCount(Dma_Type *const pDma, uint8 u8Channel, uint16 u16LoopCnt)
{
    if (Dma_HWA_GetStartChToChTrigEnableFlag(pDma, u8Channel) == (boolean)FALSE)
    {
        if ((uint32)pDma == DMA0_BASE)
        {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
            Dma0_ShadowReg[u8Channel].BLC.CHTRGENNO =
                (uint16)((Dma0_ShadowReg[u8Channel].BLC.CHTRGENNO & ~DMA_CFG_BLC_CHTRGENNO_BLC_MASK) |
                         DMA_CFG_BLC_CHTRGENNO_BLC(u16LoopCnt));
            Dma0_ShadowReg[u8Channel].CLC.CHTRGENNO =
                (uint16)((Dma0_ShadowReg[u8Channel].CLC.CHTRGENNO & ~DMA_CFG_CLC_CHTRGENNO_CLC_MASK) |
                         DMA_CFG_CLC_CHTRGENNO_CLC(u16LoopCnt));
            pDma->CFG[u8Channel].BLC.CHTRGENNO = Dma0_ShadowReg[u8Channel].BLC.CHTRGENNO;
            pDma->CFG[u8Channel].CLC.CHTRGENNO = Dma0_ShadowReg[u8Channel].CLC.CHTRGENNO;
#else
            pDma->CFG[u8Channel].BLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENNO &
                                                           ~DMA_CFG_BLC_CHTRGENNO_BLC_MASK) |
                                                          DMA_CFG_BLC_CHTRGENNO_BLC(u16LoopCnt));
            pDma->CFG[u8Channel].CLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENNO &
                                                           ~DMA_CFG_CLC_CHTRGENNO_CLC_MASK) |
                                                          DMA_CFG_CLC_CHTRGENNO_CLC(u16LoopCnt));
#endif
        }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
        else
        {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
            Dma1_ShadowReg[u8Channel].BLC.CHTRGENNO =
                (uint16)((Dma1_ShadowReg[u8Channel].BLC.CHTRGENNO & ~DMA_CFG_BLC_CHTRGENNO_BLC_MASK) |
                         DMA_CFG_BLC_CHTRGENNO_BLC(u16LoopCnt));
            Dma1_ShadowReg[u8Channel].CLC.CHTRGENNO =
                (uint16)((Dma1_ShadowReg[u8Channel].CLC.CHTRGENNO & ~DMA_CFG_CLC_CHTRGENNO_CLC_MASK) |
                         DMA_CFG_CLC_CHTRGENNO_CLC(u16LoopCnt));
            pDma->CFG[u8Channel].BLC.CHTRGENNO = Dma1_ShadowReg[u8Channel].BLC.CHTRGENNO;
            pDma->CFG[u8Channel].CLC.CHTRGENNO = Dma1_ShadowReg[u8Channel].CLC.CHTRGENNO;
#else
            pDma->CFG[u8Channel].BLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENNO &
                                                           ~DMA_CFG_BLC_CHTRGENNO_BLC_MASK) |
                                                          DMA_CFG_BLC_CHTRGENNO_BLC(u16LoopCnt));
            pDma->CFG[u8Channel].CLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENNO &
                                                           ~DMA_CFG_CLC_CHTRGENNO_CLC_MASK) |
                                                          DMA_CFG_CLC_CHTRGENNO_CLC(u16LoopCnt));
#endif
        }
#endif
    }
    else
    {
        if ((uint32)pDma == DMA0_BASE)
        {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
            Dma0_ShadowReg[u8Channel].BLC.CHTRGENYES =
                (uint16)((Dma0_ShadowReg[u8Channel].BLC.CHTRGENYES & ~DMA_CFG_BLC_CHTRGENYES_BLC_MASK) |
                         DMA_CFG_BLC_CHTRGENYES_BLC(u16LoopCnt));
            Dma0_ShadowReg[u8Channel].CLC.CHTRGENYES =
                (uint16)((Dma0_ShadowReg[u8Channel].CLC.CHTRGENYES & ~DMA_CFG_CLC_CHTRGENYES_CLC_MASK) |
                         DMA_CFG_CLC_CHTRGENYES_CLC(u16LoopCnt));
            pDma->CFG[u8Channel].BLC.CHTRGENYES = Dma0_ShadowReg[u8Channel].BLC.CHTRGENYES;
            pDma->CFG[u8Channel].CLC.CHTRGENYES = Dma0_ShadowReg[u8Channel].CLC.CHTRGENYES;
#else
            pDma->CFG[u8Channel].BLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENYES &
                                                            ~DMA_CFG_BLC_CHTRGENYES_BLC_MASK) |
                                                           DMA_CFG_BLC_CHTRGENYES_BLC(u16LoopCnt));
            pDma->CFG[u8Channel].CLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENYES &
                                                            ~DMA_CFG_CLC_CHTRGENYES_CLC_MASK) |
                                                           DMA_CFG_CLC_CHTRGENYES_CLC(u16LoopCnt));
#endif
        }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
        else
        {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
            Dma1_ShadowReg[u8Channel].BLC.CHTRGENYES =
                (uint16)((Dma1_ShadowReg[u8Channel].BLC.CHTRGENYES & ~DMA_CFG_BLC_CHTRGENYES_BLC_MASK) |
                         DMA_CFG_BLC_CHTRGENYES_BLC(u16LoopCnt));
            Dma1_ShadowReg[u8Channel].CLC.CHTRGENYES =
                (uint16)((Dma1_ShadowReg[u8Channel].CLC.CHTRGENYES & ~DMA_CFG_CLC_CHTRGENYES_CLC_MASK) |
                         DMA_CFG_CLC_CHTRGENYES_CLC(u16LoopCnt));
            pDma->CFG[u8Channel].BLC.CHTRGENYES = Dma1_ShadowReg[u8Channel].BLC.CHTRGENYES;
            pDma->CFG[u8Channel].CLC.CHTRGENYES = Dma1_ShadowReg[u8Channel].CLC.CHTRGENYES;
#else
            pDma->CFG[u8Channel].BLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENYES &
                                                            ~DMA_CFG_BLC_CHTRGENYES_BLC_MASK) |
                                                           DMA_CFG_BLC_CHTRGENYES_BLC(u16LoopCnt));
            pDma->CFG[u8Channel].CLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENYES &
                                                            ~DMA_CFG_CLC_CHTRGENYES_CLC_MASK) |
                                                           DMA_CFG_CLC_CHTRGENYES_CLC(u16LoopCnt));
#endif
        }
#endif
    }
}
#else
LOCAL_INLINE void Dma_HWA_SetLoopCount(Dma_Type *const pDma, uint8 u8Channel, uint16 u16LoopCnt)
{
    if (Dma_HWA_GetStartChToChTrigEnableFlag(pDma, u8Channel) == (boolean)FALSE)
    {
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: Macros are needed to avoid accidental value writing to the register */
        pDma->CFG[u8Channel].BLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENNO &
                                                       ~DMA_CFG_BLC_CHTRGENNO_BLC_MASK) |
                                                      DMA_CFG_BLC_CHTRGENNO_BLC(u16LoopCnt));
        pDma->CFG[u8Channel].CLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENNO &
                                                       ~DMA_CFG_CLC_CHTRGENNO_CLC_MASK) |
                                                      DMA_CFG_CLC_CHTRGENNO_CLC(u16LoopCnt));
        /* PRQA S 2985 -- */
    }
    else
    {
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: Macros are needed to avoid accidental value writing to the register */
        pDma->CFG[u8Channel].BLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENYES &
                                                        ~DMA_CFG_BLC_CHTRGENYES_BLC_MASK) |
                                                       DMA_CFG_BLC_CHTRGENYES_BLC(u16LoopCnt));
        pDma->CFG[u8Channel].CLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENYES &
                                                        ~DMA_CFG_CLC_CHTRGENYES_CLC_MASK) |
                                                       DMA_CFG_CLC_CHTRGENYES_CLC(u16LoopCnt));
        /* PRQA S 2985 -- */
    }
}
#endif

/**
 * @brief Set the loop count of the DMA transfer
 * This function clear the loop count, only be used in deinit.
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
LOCAL_INLINE void Dma_HWA_ClearLoopCount(Dma_Type *const pDma, uint8 u8Channel)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    pDma->CFG[u8Channel].BLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENNO &
                                                   ~DMA_CFG_BLC_CHTRGENNO_BLC_MASK) |
                                                  DMA_CFG_BLC_CHTRGENNO_BLC(0U));

    pDma->CFG[u8Channel].CLC.CHTRGENNO = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENNO &
                                                   ~DMA_CFG_CLC_CHTRGENNO_CLC_MASK) |
                                                  DMA_CFG_CLC_CHTRGENNO_CLC(0U));

    pDma->CFG[u8Channel].BLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].BLC.CHTRGENYES &
                                                    ~DMA_CFG_BLC_CHTRGENYES_BLC_MASK) |
                                                   DMA_CFG_BLC_CHTRGENYES_BLC(0U));

    pDma->CFG[u8Channel].CLC.CHTRGENYES = (uint16)((pDma->CFG[u8Channel].CLC.CHTRGENYES &
                                                    ~DMA_CFG_CLC_CHTRGENYES_CLC_MASK) |
                                                   DMA_CFG_CLC_CHTRGENYES_CLC(0U));
    /* PRQA S 2985 -- */
}

/**
 * @brief Get the unalign modulo index selection
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint8 the unalign modulo index selection
 */
LOCAL_INLINE uint8 Dma_HWA_GetUnalignModuloSel(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_UMS_MASK) >> DMA_CFG_CSR_UMS_SHIFT;
    return (uint8)u16TmpVal;
}

/**
 * @brief Set the unalign modulo index selection
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u8UnalignModuloSel the unalign modulo index selection
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetUnalignModuloSel(Dma_Type *const pDma,
                                              uint8           u8Channel,
                                              uint8           u8UnalignModuloSel)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].CSR = (uint16)((Dma0_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_UMS_MASK) |
                                                 DMA_CFG_CSR_UMS(u8UnalignModuloSel));
        pDma->CFG[u8Channel].CSR      = Dma0_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_UMS_MASK) |
                                            DMA_CFG_CSR_UMS(u8UnalignModuloSel));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].CSR = (uint16)((Dma1_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_UMS_MASK) |
                                                 DMA_CFG_CSR_UMS(u8UnalignModuloSel));
        pDma->CFG[u8Channel].CSR      = Dma1_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_UMS_MASK) |
                                            DMA_CFG_CSR_UMS(u8UnalignModuloSel));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetUnalignModuloSel(Dma_Type *const pDma,
                                              uint8           u8Channel,
                                              uint8           u8UnalignModuloSel)
{
    pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_UMS_MASK) |
                                        DMA_CFG_CSR_UMS(u8UnalignModuloSel));
}
#endif

/**
 * @brief Get the target channel to trig when outer loop is completed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint8 the target channel
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE uint8 Dma_HWA_GetOuterLoopTrigChannel(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = 0U;
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma0_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_OTRGCH_MASK) >>
                    DMA_CFG_CSR_OTRGCH_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_OTRGCH_MASK) >> DMA_CFG_CSR_OTRGCH_SHIFT;
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma1_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_OTRGCH_MASK) >>
                    DMA_CFG_CSR_OTRGCH_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_OTRGCH_MASK) >> DMA_CFG_CSR_OTRGCH_SHIFT;
#endif
    }
#endif
    return (uint8)u16TmpVal;
}
#else
LOCAL_INLINE uint8 Dma_HWA_GetOuterLoopTrigChannel(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_OTRGCH_MASK) >>
                       DMA_CFG_CSR_OTRGCH_SHIFT;
    return (uint8)u16TmpVal;
}
#endif

/**
 * @brief Set the target channel to trig when outer loop is completed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u8TrigChannel the target channel
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetOuterLoopTrigChannel(Dma_Type *const pDma,
                                                  uint8           u8Channel,
                                                  uint8           u8TrigChannel)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].CSR = (uint16)((Dma0_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_OTRGCH_MASK) |
                                                 DMA_CFG_CSR_OTRGCH(u8TrigChannel));
        pDma->CFG[u8Channel].CSR      = Dma0_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_OTRGCH_MASK) |
                                            DMA_CFG_CSR_OTRGCH(u8TrigChannel));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].CSR = (uint16)((Dma1_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_OTRGCH_MASK) |
                                                 DMA_CFG_CSR_OTRGCH(u8TrigChannel));
        pDma->CFG[u8Channel].CSR      = Dma1_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_OTRGCH_MASK) |
                                            DMA_CFG_CSR_OTRGCH(u8TrigChannel));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetOuterLoopTrigChannel(Dma_Type *const pDma,
                                                  uint8           u8Channel,
                                                  uint8           u8TrigChannel)
{
    pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_OTRGCH_MASK) |
                                        DMA_CFG_CSR_OTRGCH(u8TrigChannel));
}
#endif

/**
 * @brief Get whether the transfer is done on the selected channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE the transfer is done
 * @return FALSE the transfer has not done
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE boolean Dma_HWA_GetChannelDoneStatus(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = 0u;
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma0_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_DONE_MASK) >> DMA_CFG_CSR_DONE_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_DONE_MASK) >> DMA_CFG_CSR_DONE_SHIFT;
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma1_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_DONE_MASK) >> DMA_CFG_CSR_DONE_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_DONE_MASK) >> DMA_CFG_CSR_DONE_SHIFT;
#endif
    }
#endif
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}
#else
LOCAL_INLINE boolean Dma_HWA_GetChannelDoneStatus(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_DONE_MASK) >> DMA_CFG_CSR_DONE_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}
#endif

/**
 * @brief Get the active status of the DMA channel
 * This flag signals the channel is currently in execution. It is set when channel service begins,
 * and is cleared by the DMA as the inner loop completes or when any error condition is detected
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE the channel is in execution
 * @return FALSE the channel is idle
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE Dma_RunningStatusType Dma_HWA_GetChannelActiveStatus(const Dma_Type *const pDma,
                                                                  uint8                 u8Channel)
{
    uint16 u16TmpVal = 0u;
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma0_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_ACTIVE_MASK) >>
                    DMA_CFG_CSR_ACTIVE_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_ACTIVE_MASK) >> DMA_CFG_CSR_ACTIVE_SHIFT;
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma1_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_ACTIVE_MASK) >>
                    DMA_CFG_CSR_ACTIVE_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_ACTIVE_MASK) >> DMA_CFG_CSR_ACTIVE_SHIFT;
#endif
    }
#endif
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    return (Dma_RunningStatusType)u16TmpVal;
    /* PRQA S 4342 -- */
}
#else
LOCAL_INLINE Dma_RunningStatusType Dma_HWA_GetChannelActiveStatus(const Dma_Type *const pDma,
                                                                  uint8                 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_ACTIVE_MASK) >>
                       DMA_CFG_CSR_ACTIVE_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    return (Dma_RunningStatusType)u16TmpVal;
    /* PRQA S 4342 -- */
}
#endif

/**
 * @brief Get channel to channel trig is enabled when outer loop is completed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE the target channel will be trigged when outer loop is completed
 * @return FALSE the channel to channel trig when outer loop is completed is disabled
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE boolean Dma_HWA_GetOuterLoopTrigEnableFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = 0U;

    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma0_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_OCHTRGEN_MASK) >>
                    DMA_CFG_CSR_OCHTRGEN_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_OCHTRGEN_MASK) >>
                    DMA_CFG_CSR_OCHTRGEN_SHIFT;
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        u16TmpVal = (Dma1_ShadowReg[u8Channel].CSR & DMA_CFG_CSR_OCHTRGEN_MASK) >>
                    DMA_CFG_CSR_OCHTRGEN_SHIFT;
#else
        u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_OCHTRGEN_MASK) >>
                    DMA_CFG_CSR_OCHTRGEN_SHIFT;
#endif
    }
#endif
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}
#else
LOCAL_INLINE boolean Dma_HWA_GetOuterLoopTrigEnableFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_OCHTRGEN_MASK) >>
                       DMA_CFG_CSR_OCHTRGEN_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}
#endif

/**
 * @brief Set whether to enable channel to channel trig when outer loop is completed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param bEnable whether to enable channel to channel trig when outer loop is completed
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetOuterLoopTrigEnableFlag(Dma_Type *const pDma,
                                                     uint8           u8Channel,
                                                     boolean         bEnable)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].CSR = (uint16)((Dma0_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_OCHTRGEN_MASK) |
                                                 DMA_CFG_CSR_OCHTRGEN(bEnable));
        pDma->CFG[u8Channel].CSR      = Dma0_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_OCHTRGEN_MASK) |
                                            DMA_CFG_CSR_OCHTRGEN(bEnable));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].CSR = (uint16)((Dma1_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_OCHTRGEN_MASK) |
                                                 DMA_CFG_CSR_OCHTRGEN(bEnable));
        pDma->CFG[u8Channel].CSR      = Dma1_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_OCHTRGEN_MASK) |
                                            DMA_CFG_CSR_OCHTRGEN(bEnable));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetOuterLoopTrigEnableFlag(Dma_Type *const pDma,
                                                     uint8           u8Channel,
                                                     boolean         bEnable)
{
    pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_OCHTRGEN_MASK) |
                                        DMA_CFG_CSR_OCHTRGEN(bEnable));
}
#endif
/**
 * @brief Get whether DMA request will be disabled automatically when outer loop is completed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE DMA request will be disabled automatically when outer loop is completed
 * @return FALSE DMA request will not be cleared when outer loop is completed
 */
LOCAL_INLINE boolean Dma_HWA_GetAutoDisableReuqestEnableFlag(const Dma_Type *const pDma,
                                                             uint8                 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_DREQ_MASK) >> DMA_CFG_CSR_DREQ_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to disable DMA request automatically when outer loop is completed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param bEnable whether to disable DMA request automatically when outer loop is completed
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetAutoDisableReuqestEnableFlag(Dma_Type *const pDma,
                                                          uint8           u8Channel,
                                                          boolean         bEnable)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].CSR = (uint16)((Dma0_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_DREQ_MASK) |
                                                 DMA_CFG_CSR_DREQ(bEnable));
        pDma->CFG[u8Channel].CSR      = Dma0_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_DREQ_MASK) |
                                            DMA_CFG_CSR_DREQ(bEnable));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].CSR = (uint16)((Dma1_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_DREQ_MASK) |
                                                 DMA_CFG_CSR_DREQ(bEnable));
        pDma->CFG[u8Channel].CSR      = Dma1_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_DREQ_MASK) |
                                            DMA_CFG_CSR_DREQ(bEnable));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetAutoDisableReuqestEnableFlag(Dma_Type *const pDma,
                                                          uint8           u8Channel,
                                                          boolean         bEnable)
{
    pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_DREQ_MASK) |
                                        DMA_CFG_CSR_DREQ(bEnable));
}
#endif
/**
 * @brief Get whether DMA interrupt wiil be generated when the outer loop is half done
 * @note When outer loop count is 1, do not enable half complete interrupt
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE DMA will generate interrupt when outer loop is half done
 * @return TRUE DMA will not generate interrupt when outer loop is half done
 */
LOCAL_INLINE boolean Dma_HWA_GetHalfCompleteInterruptEnableFlag(const Dma_Type *const pDma,
                                                                uint8                 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_INTHALF_MASK) >>
                       DMA_CFG_CSR_INTHALF_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable DMA interrupt when the outer loop is half done
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param bEnable whether to enable DMA interrupt when the outer loop is half done
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_SetHalfCompleteInterruptEnableFlag(Dma_Type *const pDma,
                                                             uint8           u8Channel,
                                                             boolean         bEnable)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].CSR = (uint16)((Dma0_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_INTHALF_MASK) |
                                                 DMA_CFG_CSR_INTHALF(bEnable));
        pDma->CFG[u8Channel].CSR      = Dma0_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_INTHALF_MASK) |
                                            DMA_CFG_CSR_INTHALF(bEnable));
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].CSR = (uint16)((Dma1_ShadowReg[u8Channel].CSR &
                                                  ~DMA_CFG_CSR_INTHALF_MASK) |
                                                 DMA_CFG_CSR_INTHALF(bEnable));
        pDma->CFG[u8Channel].CSR      = Dma1_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_INTHALF_MASK) |
                                            DMA_CFG_CSR_INTHALF(bEnable));
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_SetHalfCompleteInterruptEnableFlag(Dma_Type *const pDma,
                                                             uint8           u8Channel,
                                                             boolean         bEnable)
{
    pDma->CFG[u8Channel].CSR = (uint16)((pDma->CFG[u8Channel].CSR & ~DMA_CFG_CSR_INTHALF_MASK) |
                                        DMA_CFG_CSR_INTHALF(bEnable));
}
#endif

/**
 * @brief Get whether DMA interrupt is enabled when DMA transfer is completed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE DMA will generate interrupt when outer loop is completed
 * @return FALSE DMA will not generate interrupt when outer loop is completed
 */
LOCAL_INLINE boolean Dma_HWA_GetTransferCompleteInterruptEnableFlag(const Dma_Type *const pDma,
                                                                    uint8                 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_INTOUTER_MASK) >>
                       DMA_CFG_CSR_INTOUTER_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Enable DMA transfer complete interrupt
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_EnableTransferCompleteInterrupt(Dma_Type *const pDma, uint8 u8Channel)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].CSR |= DMA_CFG_CSR_INTOUTER_MASK;
        pDma->CFG[u8Channel].CSR = Dma0_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR |= DMA_CFG_CSR_INTOUTER_MASK;
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].CSR |= DMA_CFG_CSR_INTOUTER_MASK;
        pDma->CFG[u8Channel].CSR = Dma1_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR |= DMA_CFG_CSR_INTOUTER_MASK;
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_EnableTransferCompleteInterrupt(Dma_Type *const pDma, uint8 u8Channel)
{
    pDma->CFG[u8Channel].CSR |= DMA_CFG_CSR_INTOUTER_MASK;
}
#endif

/**
 * @brief Disable DMA transfer complete interrupt
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 */
#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
LOCAL_INLINE void Dma_HWA_DisableTransferCompleteInterrupt(Dma_Type *const pDma, uint8 u8Channel)
{
    if ((uint32)pDma == DMA0_BASE)
    {
#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF))
        Dma0_ShadowReg[u8Channel].CSR &= (uint16)~DMA_CFG_CSR_INTOUTER_MASK;
        pDma->CFG[u8Channel].CSR = Dma0_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR &= (uint16)~DMA_CFG_CSR_INTOUTER_MASK;
#endif
    }
#if (DMA_1_USED_CHANNEL_NUM > 0u)
    else
    {
#if (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
        Dma1_ShadowReg[u8Channel].CSR &= (uint16)~DMA_CFG_CSR_INTOUTER_MASK;
        pDma->CFG[u8Channel].CSR = Dma1_ShadowReg[u8Channel].CSR;
#else
        pDma->CFG[u8Channel].CSR &= (uint16)~DMA_CFG_CSR_INTOUTER_MASK;
#endif
    }
#endif
}
#else
LOCAL_INLINE void Dma_HWA_DisableTransferCompleteInterrupt(Dma_Type *const pDma, uint8 u8Channel)
{
    pDma->CFG[u8Channel].CSR &= (uint16)~DMA_CFG_CSR_INTOUTER_MASK;
}
#endif

/**
 * @brief Get whether the DMA start is requested but has not been executed
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE the DMA start is requested but has not been executed
 * @return FALSE the DMA start is not requested or it has started execution
 */
LOCAL_INLINE boolean Dma_HWA_GetWaitStartFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint16 u16TmpVal = (pDma->CFG[u8Channel].CSR & DMA_CFG_CSR_START_MASK) >> DMA_CFG_CSR_START_SHIFT;
    return (boolean)((u16TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get DMA channel control and status
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return uint16 control and status of the selected channel
 */
LOCAL_INLINE uint16 Dma_HWA_GetChannelControlStatus(const Dma_Type *const pDma, uint8 u8Channel)
{
    return pDma->CFG[u8Channel].CSR;
}

/**
 * @brief Set DMA channel control and status
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @param u16Setting control settings of the selected channel
 */
LOCAL_INLINE void Dma_HWA_SetChannelControlStatus(Dma_Type *const pDma,
                                                  uint8           u8Channel,
                                                  uint16          u16Setting)
{
    pDma->CFG[u8Channel].CSR = u16Setting;
}

#if (defined(DMA0_HAVE_LOCKSTEP) && (DMA0_HAVE_LOCKSTEP == STD_OFF)) || \
    (defined(DMA1_HAVE_LOCKSTEP) && (DMA1_HAVE_LOCKSTEP == STD_OFF))
/**
 * @brief Enable DMA Monitor Checker
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_EnableMonitorChecker(Dma_Type *const pDma)
{
    pDma->MON_CTRL |= DMA_MON_CTRL_MON_CHK_EN_MASK;
}

/**
 * @brief Disable DMA Monitor Checker
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_DisableMonitorChecker(Dma_Type *const pDma)
{
    pDma->MON_CTRL &= ~DMA_MON_CTRL_MON_CHK_EN_MASK;
}

/**
 * @brief Get DMA Monitor Checker error status
 *
 * @param pDma the base address of the DMA instance
 * @return uint32 status of the DMA Monitor Checker
 */
LOCAL_INLINE uint32 Dma_HWA_GetMonitorCheckerErrStatus(const Dma_Type *const pDma)
{
    return pDma->MON_ERR_STATUS;
}

/**
 * @brief Clear DMA Monitor Checker all error status
 *
 * @param pDma the base address of the DMA instance
 */
LOCAL_INLINE void Dma_HWA_ClearMonitorCheckerAllError(Dma_Type *const pDma)
{
    pDma->MON_CTRL |= DMA_MON_CTRL_ERR_CLR_MASK;
}
#endif

/**
 * @brief Get whether channel interrupt is enabled on the specified channel
 *
 * @param pDma the base address of the DMA instance
 * @param u8Channel the selected channel
 * @return TRUE channel interrupt is enabled on the specified channel
 * @return FALSE channel interrupt is cleared on the specified channel
 */
LOCAL_INLINE boolean Dma_HWA_GetChannelInterruptFlag(const Dma_Type *const pDma, uint8 u8Channel)
{
    uint32 u32TmpVal = (pDma->INT & (1UL << u8Channel)) >> u8Channel;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

#if (DMA_MCU_HAVE_SMP == STD_ON)
/**
 * @brief Get whether TCM memory is configured as AMP
 *
 * @param pScm the base address of the SCM instance
 * @return TRUE means using AMP mode
 * @return FALSE means using SMP mode
 */
LOCAL_INLINE boolean Dma_HWA_GetAMPEnFlag(const SCM_Type *const pScm)
{
    uint32 u32TmpVal = (pScm->CHIPCFG2 & (SCM_CHIPCFG2_SMP_EN_MASK)) >> SCM_CHIPCFG2_SMP_EN_SHIFT;
    return (boolean)((u32TmpVal == 0U) ? TRUE : FALSE);
}
#endif

/** @}*/

#endif /* _HWA_DMA_H_ */
