/**
 *   @file     CDD_I2c_Hw.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD I2c - Complex I2c hardware driver API.
 *   @details I2c hardware driver API
 *
 *   @addtogroup I2c
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : I2c
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
*   0.1.0       14/07/2023    qxw0100       N/A          I2c Initial Version
*   0.2.0       27/09/2023    qxw0100       N/A          Add multicore support
*   0.3.0       09/10/2023    qxw0100       N/A          Fix notification channel bug
*   0.4.0       17/11/2023    qxw0100       N/A          Fix error status bug
*   0.5.0       17/01/2024    qxw0100       N/A          Fix status bug
*   0.6.0       18/01/2024    qxw0100       N/A          Add channel fault clear function
                                                         Add NACK signal for user choice
*   1.2.1       23/06/2025    qxw0120       N/A          Update subaddress mode
*   1.4.0       10/09/2025    qxw0120       N/A          Optimize code， increase the use of FIFO
==================================================================================================*/
#ifndef CDD_I2C_HW_H
#define CDD_I2C_HW_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_I2c_RegOps.h"
#include "CDD_I2c_Cfg.h"
#include "Cpm_Reg.h"
#include "StdRegMacros.h"

/*==================================================================================================
*                                          CONSTANT-LIKE DEFINES
==================================================================================================*/
#define FCIIC_MSR_ERROR_FLAGS_MASK                                                           \
    ((uint32)FCIIC_MSR_PLTF_MASK | (uint32)FCIIC_MSR_FEF_MASK | (uint32)FCIIC_MSR_ALF_MASK | \
     (uint32)FCIIC_MSR_NDF_MASK) /* PLTF FEF ALF NDF */

#define PCC_FCIIC0_ADDRESS 0x40024198U /* PCC FCIIC0 ADDRESS */
#define PCC_FCIIC1_ADDRESS 0x4002441CU /* PCC FCIIC1 ADDRESS */
#define PCC_FCIIC_CGC_MASK 0x800000U   /* FCIIC CGC MASK */
#define PCC_FCIIC_SEL_MASK 0x700000U   /* FCIIC SEL MASK */
/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define I2C_START_SEC_CODE
#include "I2c_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief        IIC Master mode initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u8CoreId        Core Id corresponding to IIC hardware unit.
 * @param[in]    pInitReg        IIC request register.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_Init_Master(uint8                   u8I2cIdx,
                                                  uint8                   u8CoreId,
                                                  const FCIIC_RegCfgType *pInitReg);

/**
 * @brief        IIC Master mode de-initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_DeInit_Master(uint8 u8I2cIdx);

/**
 * @brief        IIC Slave mode initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u8CoreId        Core Id corresponding to IIC hardware unit.
 * @param[in]    pInitReg        IIC request register.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_Init_Slave(uint8                   u8I2cIdx,
                                                 uint8                   u8CoreId,
                                                 const FCIIC_RegCfgType *pInitReg);

/**
 * @brief        IIC Slave mode de-initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_DeInit_Slave(uint8 u8I2cIdx);

/**
 * @brief        IIC master synchronous send.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterSyncSend(uint8                  u8Channel,
                                                     uint8                  u8I2cIdx,
                                                     const I2c_RequestType *pRequest);

/**
 * @brief        IIC master synchronous receive.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterSyncReceive(uint8                  u8Channel,
                                                        uint8                  u8I2cIdx,
                                                        const I2c_RequestType *pRequest);

/**
 * @brief        IIC master Asynchronous send.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterAsyncSend(uint8                  u8Channel,
                                                      uint8                  u8I2cIdx,
                                                      const I2c_RequestType *pRequest);

/**
 * @brief        IIC master Asynchronous receive.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterAsyncReceive(uint8                  u8Channel,
                                                         uint8                  u8I2cIdx,
                                                         const I2c_RequestType *pRequest);

/**
 * @brief        IIC slave listening.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_SlaveListening(uint8                  u8Channel,
                                                     uint8                  u8I2cIdx,
                                                     const I2c_RequestType *pRequest);

/**
 * @brief        IIC get current channel status.
 *
 * @param[in]    u8I2cIdx               The hardware Unit.
 *
 * @return       I2c_ChannelStatusType  The current channel status.
 */
I2C_TEXT_SECTION I2c_ChannelStatusType FCIIC_GetChannelStatus(uint8 u8I2cIdx);

/**
 * @brief        IIC check whether or not the timeout.
 *
 * @param[in]    u8I2cIdx               The hardware Unit.
 * @param[in]    u32Times               The transmission time is considered a timeout,The actual
 * time is equal to the query period multiplied by u32Times.
 *
 * @return       Std_ReturnType  The current channel Whether or not the timeout.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_CheckForTimeouts(uint8 u8I2cIdx, uint32 u32Times);

/**
 * @brief        IIC clear channel fault.
 *
 * @param[in]    u8I2cIdx               The hardware Unit.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_ClearChannelFault(uint8 u8I2cIdx);

/**
 * @brief        IIC interrupt handler.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC_LL_IRQnHandler(uint8 u8I2cIdx);

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief        IIC DMA interrupt handler.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC_LL_Dma_IRQnHandler(uint8 u8I2cIdx);
#endif /* STD_ON == I2C_DMA_USED */

#define I2C_STOP_SEC_CODE
#include "I2c_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_I2C_HW_H */

/** @} */
