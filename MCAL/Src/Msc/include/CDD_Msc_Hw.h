/**
*   @file    CDD_Msc_Hw.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Msc - Isolation level header file for MSC driver.
*   @details Header file for function definition on isolation level betwen high and low level driver.
*
*   @addtogroup MSC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MSC
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
*   0.6.0       09/11/2023    QXW0084       N/A          MSC Initial Version
==================================================================================================*/
#ifndef HWA_MSC_H_
#define HWA_MSC_H_

#include "CDD_Msc_Reg.h"

/**
 * @addtogroup HwA_msc
 * @{
 *
 */
/********* macros ************/

typedef enum
{
    MSC_RSV_SUCCESS         = 0x0U, /**@details MSC receive status is successful. */
    MSC_RSV_PARITY_ERROR    = 0x1U, /**@details MSC receive has parity error. */
    MSC_RSV_STOP_ERROR      = 0x2U  /**@details MSC receive has stop error. */
} MSC_ReceiveStatusType;

/********* Local typedef ************/

/********* Local inline function   ************/

/*********  xxx Register interface ************/

/**
 * @brief Get the msc TCCTR register
 *
 * @param pMsc MSCInstance
 * @param u32Value TCCTR register value
 */
LOCAL_INLINE void MSC_HWA_SetTcctr(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->TCCTR = u32Value;
}

/**
 * @brief Get the msc TCCTR register NBS
 *
 * @param pMsc MSCInstance
 * @param u32Value TCCTR register value
 */
LOCAL_INLINE void MSC_HWA_SetTcctrNbs(MSC_Type *const pMsc, uint8 u8Value)
{
    pMsc->TCCTR = (pMsc->TCCTR & ~MSC_TCCTR_NBS_MASK) | MSC_TCCTR_NBS(u8Value);
}

/**
 * @brief Get the msc TCCTR register DTS bit
 *
 * @param pMsc MSCInstance
 * @return DTS value
 */
LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)
{
    return ((pMsc->TCCTR & MSC_TCCTR_DTS_MASK) == MSC_TCCTR_DTS_MASK) ? TRUE : FALSE;
}

/**
 * @brief Set the msc TCCTR register DTS bit
 *
 * @param pMsc MSCInstance
 */
LOCAL_INLINE void MSC_HWA_SetDataNeedSend(MSC_Type *const pMsc)
{
    pMsc->ISCR  = MSC_ISCR_SDTS_MASK;
}

/**
 * @brief Get the msc TCCTR register CTS bit
 *
 * @param pMsc MSCInstance
 * @return CTS value
 */
LOCAL_INLINE uint8 MSC_HWA_GetCmdNeedSend(const MSC_Type *const pMsc)
{
    return ((pMsc->TCCTR & MSC_TCCTR_CTS_MASK) == MSC_TCCTR_CTS_MASK) ? TRUE : FALSE;
}

/**
 * @brief Get the CFB value of TCSTR register
 *
 * @param pMsc MSCInstance
 * @return CFB value
 */
LOCAL_INLINE uint8 MSC_HWA_GetCfb(const MSC_Type *const pMsc)
{
    return (uint8)(((pMsc->TCSTR & (uint32)MSC_TCSTR_CFB_MASK) != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get the DFB value of TCSTR register
 *
 * @param pMsc MSCInstance
 * @return DFB value
 */
LOCAL_INLINE uint8 MSC_HWA_GetDfb(const MSC_Type *const pMsc)
{
    return ((pMsc->TCSTR & (uint32)MSC_TCSTR_DFB_MASK) != 0U) ? TRUE : FALSE;
}

/**
 * @brief Set the NP value of TCSTR register
 *
 * @param pMsc MSCInstance
 */
LOCAL_INLINE void MSC_HWA_SetNp(MSC_Type *const pMsc, uint8 u8Np)
{
    pMsc->TCSTR = (pMsc->TCSTR & ~MSC_TCSTR_NP_MASK) | MSC_TCSTR_NP(u8Np);
}

/**
 * @brief Set the msc TCDAR register
 *
 * @param pMsc MSCInstance
 * @param u32Value TCDAR value
 */
LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->TCDAR = u32Value;
}

/**
 * @brief Set the TCCOR register
 *
 * @param pMsc MSCInstance
 * @param u32Value TCCOR value
 */
LOCAL_INLINE void MSC_HWA_SetTccor(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->TCCOR = u32Value;
}

/**
 * @brief Set the TCSLR register
 *
 * @param pMsc MSCInstance
 * @param u32Value TCSLR value
 */
LOCAL_INLINE void MSC_HWA_SetTcslr(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->TCSLR = u32Value;
}

/**
 * @brief Set the TCSHR register
 *
 * @param pMsc MSCInstance
 * @param u32Value TCSHR value
 */
LOCAL_INLINE void MSC_HWA_SetTcshr(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->TCSHR = u32Value;
}

/**
 * @brief Set the TCELR register
 *
 * @param pMsc MSCInstance
 * @param u32Value TCELR value
 */
LOCAL_INLINE void MSC_HWA_SetTcelr(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->TCELR = u32Value;
}

/**
 * @brief Set the IOCR register
 *
 * @param pMsc MSCInstance
 * @param u32Value IOCR value
 */
LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->IOCR = u32Value;
}

/**
 * @brief Get the msc IOCR register
 *
 * @param pMsc MSCInstance
 * @return INSR register value
 */
LOCAL_INLINE uint32 MSC_HWA_GetIocr(const MSC_Type *const pMsc)
{
    return pMsc->IOCR;
}

/**
 * @brief Get the msc TCDIS
 *
 * @param pMsc MSCInstance
 */
LOCAL_INLINE uint8 MSC_HWA_GetTcdis(const MSC_Type *const pMsc)
{
    return ((pMsc->TCCTR & MSC_TCCTR_TCDIS_MASK) == MSC_TCCTR_TCDIS_MASK)? TRUE: FALSE;
}

/**
 * @brief Set the msc TCDIS
 *
 * @param pMsc MSCInstance
 */
LOCAL_INLINE void MSC_HWA_SetTcdis(MSC_Type *const pMsc)
{
    pMsc->ISCR = MSC_ISCR_SDIS_MASK;
}

/**
 * @brief Clear the msc TCDIS
 *
 * @param pMsc MSCInstance
 */
LOCAL_INLINE void MSC_HWA_ClearTcdis(MSC_Type *const pMsc)
{
    pMsc->ISCR = MSC_ISCR_CDIS_MASK;
}

/**
 * @brief Clear the msc CRFI
 *
 * @param pMsc MSCInstance
 */
LOCAL_INLINE void MSC_HWA_ClearCrfi(MSC_Type *const pMsc)
{
    pMsc->ISCR = MSC_ISCR_CRFI_MASK;
}

/**
 * @brief Get the msc INSR register RFI
 *
 * @param pMsc MSCInstance
 * @return INSR register value
 */
LOCAL_INLINE uint8 MSC_HWA_GetRfi(const MSC_Type *const pMsc)
{
    return (uint8)(((pMsc->INSR & (uint32)MSC_INSR_RFI_MASK) == MSC_INSR_RFI_MASK) ? TRUE : FALSE);
}

/**
 * @brief Set the INCR register
 *
 * @param pMsc MSCInstance
 * @param u32Value INCR value
 */
LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->INCR = u32Value;
}

/**
 * @brief Get the msc RCCSR register
 *
 * @param pMsc MSCInstance
 * @return RCCSR register value
 */
LOCAL_INLINE uint8 MSC_HWA_GetRccsrRc(const MSC_Type *const pMsc)
{
    return (uint8)((pMsc->RCCSR & MSC_RCCSR_RC_MASK)>>MSC_RCCSR_RC_SHIFT);
}

/**
 * @brief Get the msc RCCSR register
 *
 * @param pMsc MSCInstance
 * @return RCCSR register value
 */
LOCAL_INLINE uint8 MSC_HWA_GetRccsrRxBusy(const MSC_Type *const pMsc)
{
    return (uint8)((pMsc->RCCSR & MSC_RCCSR_RX_BUSY_MASK)>>MSC_RCCSR_RX_BUSY_SHIFT);
}

/**
 * @brief Set the RCCSR register
 *
 * @param pMsc MSCInstance
 * @param u32Value RCCSR value
 */
LOCAL_INLINE void MSC_HWA_SetRccsr(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->RCCSR = u32Value;
}

/**
 * @brief Get the RERR of RDRx register
 *
 * @param pRdrx MSC rx data register
 * @return RERR value
 */
LOCAL_INLINE uint32 MSC_HWA_GetRdrxRerr(const volatile uint32 *pRdrx)
{
    uint32 u32Tempvalue = ((*pRdrx) & MSC_RDR0_RERR_MASK) >> MSC_RDR0_RERR_SHIFT;
    return u32Tempvalue;
}

/**
 * @brief Get the DATA of RDR1 register
 *
 * @param pRdrx MSC rx data register
 * @return RDATA value
 */
LOCAL_INLINE uint8 MSC_HWA_GetRdrxData(const volatile uint32 *pRdrx)
{
    return (uint8)(((*pRdrx) & MSC_RDR0_RDATA_MASK) >> MSC_RDR0_RDATA_SHIFT);
}

/**
 * @brief Get the LAF of RDRx register
 *
 * @param pRdrx MSC rx data register
 * @return LAF value
 */
LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)
{
    return (uint8)(((*pRdrx) & MSC_RDR0_LAF_MASK) >> MSC_RDR0_LAF_SHIFT);
}

/**
 * @brief Get the VLD of RDRx register
 *
 * @param pRdrx MSC rx data register
 * @return LAF value
 */
LOCAL_INLINE uint8 MSC_HWA_GetRdrxVld(const volatile uint32 *pRdrx)
{
    return (((*pRdrx) & MSC_RDR1_VLD_MASK) == MSC_RDR1_VLD_MASK) ? TRUE : FALSE;
}

/**
 * @brief Clear the VLD of register
 *
 * @param pRdrx MSC rx data register
 */
LOCAL_INLINE void MSC_HWA_ClearRdrxVld(volatile uint32 *pRdrx)
{
    (*pRdrx) |= MSC_RDR1_CLR_MASK;
}

/**
 * @brief Get the timeout interrupt enable
 *
 * @param pMsc MSCInstance
 * @return reset status
 */
LOCAL_INLINE uint8 MSC_HWA_GetRtorToie(const MSC_Type *const pMsc)
{
    return (uint8)(((pMsc->RTOR & MSC_RTOR_TOIE_MASK) == MSC_RTOR_TOIE_MASK) ? TRUE : FALSE);
}

/**
 * @brief Get the timeout interrupt flag
 *
 * @param pMsc MSCInstance
 * @return reset status
 */
LOCAL_INLINE uint8 MSC_HWA_GetRtorTof(const MSC_Type *const pMsc)
{
    return (uint8)(((pMsc->RTOR & MSC_RTOR_TOF_MASK) == MSC_RTOR_TOF_MASK) ? TRUE : FALSE);
}

/**
 * @brief Clear the timeout interrupt flag
 *
 * @param pMsc MSCInstance
 */
LOCAL_INLINE void MSC_HWA_ClearRtorTof(MSC_Type *const pMsc)
{
    pMsc->RTOR |= MSC_RTOR_TOFC_MASK;
}

/**
 * @brief Set the msc RTOR register
 *
 * @param pMsc MSCInstance
 * @param u32Value RTOR value
 */
LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->RTOR = u32Value;
}

/**
 * @brief Set the msc TCCTR1 register
 *
 * @param pMsc MSCInstance
 * @param u32Value TCCTR1 value
 */
LOCAL_INLINE void MSC_HWA_SetTcctr1(MSC_Type *const pMsc, uint32 u32Value)
{
    pMsc->TCCTR1 = u32Value;
}

/**
 * @brief Set the EN msc GCR register
 *
 * @param pMsc MSCInstance
 * @param bEnable EN value
 */
LOCAL_INLINE void MSC_HWA_SetMscEnable(MSC_Type *const pMsc, uint8 u8Enable)
{
    pMsc->GCR = (pMsc->GCR & ~MSC_GCR_EN_MASK) | MSC_GCR_EN(u8Enable);
}

/** @}*/ /* HwA_msc */

#endif /* #ifndef HWA_MSC_H_ */
