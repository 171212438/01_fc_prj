/**
*   @file    DmaMux_HWA.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dma - DMA MUX driver hardware layer header file.
*   @details DMA MUX driver hardware layer header file.
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
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Second Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       10/11/2023    QXW0099       N/A          Update version
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/

#ifndef _HWA_DMAMUX_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define _HWA_DMAMUX_H_
/* PRQA S 603, 602 -- */
#include "Dma_Types.h"
/**
 * @defgroup HwA_dmamux
 * @ingroup fc4xxx_driver_dma
 * @{
 */


/**
 * @brief Get whether DMAMUX is enabled for the specified DMA channel
 *
 * @param pDmamux the base address of the DMAMUX instance
 * @param u8Channel the selected DMA channel
 * @return TRUE DMAMUX is enabled for the specified DMA channel
 * @return FALSE DMAMUX is disabled for the specified DMA channel
 */
LOCAL_INLINE boolean DmaMux_HWA_GetEnableFlag(const DmaMux_Type *const pDmamux, uint8 u8Channel)
{
    uint8 u8TmpVal = (pDmamux->CHCFG[u8Channel] & DMAMUX_CHCFG_ENBL_MASK) >> DMAMUX_CHCFG_ENBL_SHIFT;
    return (boolean)((u8TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Get the request source for the specified DMA channel
 *
 * @param pDmamux the base address of the DMAMUX instance
 * @param u8Channel the selected DMA channel
 * @return DMA_RequestSourceType the request source of the specified DMA channel
 */
LOCAL_INLINE Dma_MuxRequestSourceType DmaMux_HWA_GetRequestSource(const DmaMux_Type *const pDmamux, uint8 u8Channel)
{
    uint8 u8TmpVal = (pDmamux->CHCFG[u8Channel] & DMAMUX_CHCFG_SOURCE_MASK) >> DMAMUX_CHCFG_SOURCE_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an inappropriate essential type
    * Reason: No problem doing this as the value is within range of the cast type. */
    return (Dma_MuxRequestSourceType)u8TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Set the request source for the specified DMA channel
 *
 * @param pDmamux the base address of the DMAMUX instance
 * @param u8Channel the selected DMA channel
 * @param bEnable whether to enable DMAMUX for the specified DMA channel
 * @param eReqSrc the request source to set for the specified DMA channel
 */
LOCAL_INLINE void DmaMux_HWA_SetRequestSource(DmaMux_Type *const pDmamux, uint8 u8Channel, boolean bEnable,
                                              Dma_MuxRequestSourceType eReqSrc)
{
    pDmamux->CHCFG[u8Channel] = (uint8)((pDmamux->CHCFG[u8Channel] & ~(DMAMUX_CHCFG_ENBL_MASK | DMAMUX_CHCFG_SOURCE_MASK)) |
                                DMAMUX_CHCFG_ENBL(bEnable) | DMAMUX_CHCFG_SOURCE(eReqSrc));
}

/**
 * @brief Get whether periodic trig is enabled for the specified DMA channel
 *
 * @note Only DMA channel 0~3 supports periodic trig
 *
 * @param pDmamux the base address of the DMAMUX instance
 * @param u8Channel the selected DMA channel
 * @return TRUE periodic trig is enabled for the specified DMA channel
 * @return TRUE periodic trig is disabled for the specified DMA channel
 */
LOCAL_INLINE boolean DmaMux_HWA_GetPeriodicTrigFlag(const DmaMux_Type *const pDmamux, uint8 u8Channel)
{
	uint8 u8TmpVal = (uint8)((pDmamux->CHTRG & (DMAMUX_CHTRG_TRIG_MASK << u8Channel)) >> u8Channel);
    return (boolean)((u8TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set whether to enable periodic trig for the specified DMA channel
 *
 * @note Only DMA channel 0~3 supports periodic trig
 *
 * @param pDmamux the base address of the DMAMUX instance
 * @param u8Channel the selected DMA channel
 * @param bEnable whether to enable periodic trig for the specified DMA channel
 */
LOCAL_INLINE void DmaMux_HWA_SetPeriodicTrigFlag(DmaMux_Type *const pDmamux, uint8 u8Channel, boolean bEnable)
{
	pDmamux->CHTRG = (uint8)((pDmamux->CHTRG & ~(DMAMUX_CHTRG_TRIG_MASK << u8Channel)) | (DMAMUX_CHTRG_TRIG(bEnable) << u8Channel));
}

/** @}*/

#endif /* _HWA_DMAMUX_H_ */
