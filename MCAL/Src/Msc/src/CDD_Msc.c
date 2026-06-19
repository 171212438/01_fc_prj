/**
 *   @file    CDD_Msc.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Msc - High level part of MSC driver.
 *   @details This file contains the functions defined by AutoSAR.
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
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

#include "Mcal.h"
#include "CDD_Msc.h"
#include "CDD_Msc_LLD.h"
#include "SchM_Msc.h"
#if (MSC_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
#define MSC_RDRx_NUM 0x4U

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
#define CDD_MSC_START_SEC_VAR_NO_INIT_8
#include "Msc_MemMap.h"

/**
 * @brief          MSC channel state variable.
 * @details        MSC channel state machine.
 */
CDD_MSC_DATA_SECTION uint8 Msc_ChStatus[MSC_HW_MAX_MODULES];

/**
 * @brief          MSC channel Tx state variable.
 * @details        MSC channel Tx state machine.
 */
CDD_MSC_DATA_SECTION static Msc_StatusType Msc_ChStatusTx[MSC_HW_MAX_MODULES];

/**
 * @brief          MSC channel Rx state variable.
 * @details        MSC channel Rx state machine.
 */
CDD_MSC_DATA_SECTION volatile Msc_StatusType Msc_ChStatusRx[MSC_HW_MAX_MODULES];

#if (MSC_POLLING_USED != STD_ON)
/**
 * @brief          MSC channel Rx data register x status.
 * @details        MSC channel Rx data register status.
 */
CDD_MSC_DATA_SECTION volatile Msc_StatusType Msc_RDRxStatus[MSC_HW_MAX_MODULES][MSC_RDRx_COUNT];

/**
 * @brief          MSC channel Rx data register x logic addr.
 * @details        MSC channel Rx data register logic addr.
 */
CDD_MSC_DATA_SECTION volatile uint8 Msc_RDRxLogicAddr[MSC_HW_MAX_MODULES][MSC_RDRx_COUNT];
#endif

#define CDD_MSC_STOP_SEC_VAR_NO_INIT_8
#include "Msc_MemMap.h"

#define CDD_MSC_START_SEC_VAR_NO_INIT_16
#include "Msc_MemMap.h"

#if (MSC_POLLING_USED == STD_ON)
/**
 * @brief          MSC channel Rx data buffer.
 * @details        MSC channel Rx data buffer.
 */
CDD_MSC_DATA_SECTION static uint16 MSC_RxDataBuffer[MSC_HW_MAX_MODULES][1];
#else
/**
 * @brief          MSC channel Rx data register x data buffer.
 * @details        MSC channel Rx data register data buffer.
 */
CDD_MSC_DATA_SECTION uint16 Msc_RDRxDataBuffer[MSC_HW_MAX_MODULES][MSC_RDRx_COUNT];
#endif /* (MSC_POLLING_USED == STD_ON) */

#define CDD_MSC_STOP_SEC_VAR_NO_INIT_16
#include "Msc_MemMap.h"

#define CDD_MSC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Msc_MemMap.h"

/**
 * @brief          Global configuration pointer.
 * @details        Pointer to the configuration structure.
 */
CDD_MSC_DATA_SECTION const Msc_ConfigType *Msc_CfgPtr[MSC_MAX_PARTITIONS] = MSC_CFG_PTR_INIT_ARRAY;

#define CDD_MSC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Msc_MemMap.h"

#define CDD_MSC_START_SEC_VAR_INIT_8
#include "Msc_MemMap.h"

/**
 * @brief          MSC driver status variable.
 * @details        MSC driver state machine.(Req: SWS_CDD_Msc_00004)
 */
CDD_MSC_DATA_SECTION uint8 Msc_DrvStatus[MSC_MAX_PARTITIONS] = MSC_UNINIT_ARRAY;

#define CDD_MSC_STOP_SEC_VAR_INIT_8
#include "Msc_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CDD_MSC_START_SEC_CODE
#include "Msc_MemMap.h"

#if (MSC_DEV_ERROR_DETECT == STD_ON)
CDD_MSC_TEXT_SECTION LOCAL_INLINE Std_ReturnType Msc_ChannelCoreCheck(uint8 Channel, uint32 CoreId)
{
    Std_ReturnType ret = E_NOT_OK;
    if (Msc_CfgPtr[CoreId] != NULL_PTR)
    {
        if (Msc_CfgPtr[CoreId]->PartitionCoreId == CoreId)
        {
            if (Msc_CfgPtr[CoreId]->Msc_Channel[Channel] != NULL_PTR)
            {
                if (Msc_CfgPtr[CoreId]->Msc_Channel[Channel]->u32ChannelCoreId == CoreId)
                {
                    ret = E_OK;
                }
            }
        }
    }

    return ret;
}
#endif

#define CDD_MSC_STOP_SEC_CODE
#include "Msc_MemMap.h"
/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/* PRQA S 1503 EOF #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user */
/**
 * @note put all MSC code into defined section
 */
#define CDD_MSC_START_SEC_CODE
#include "Msc_MemMap.h"

/**
 * @brief   Initializes the MSC module.
 * @details This function performs software initialization of MSC
 *          driver:
 *          - Set MSC channel state machine of all available MSC
 *            channels to MSC_CHANNEL_IDLE
 *          - Set driver state machine to MSC_INIT.
 *
 * @param[in] Config        Pointer to MSC driver configuration set.
 *
 * @return  void
 *
 * @api
 *
 *
 * @note    CDD MSC Service ID: 0x00.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_Init(const Msc_ConfigType *Config)
{
    uint32 CoreId = MSC_GetCoreID();
    uint8  Msc_ChLoop;
    /* Check whether the MSC driver is in MSC_UNINIT state */
    if (Msc_DrvStatus[CoreId] != MSC_UNINIT)
    {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
        /* MSC driver has been already initialized */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_INIT_ID,
                              (uint8)MSC_E_STATE_TRANSITION);
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    }
#if (MSC_PRECOMPILE_SUPPORT == STD_ON)
    else if (NULL_PTR != Config)
    {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_INIT_ID,
                              (uint8)MSC_E_INVALID_POINTER);
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    }
    else if ((NULL_PTR == Msc_ConfigPredefine[CoreId]) ||
             (Msc_ConfigPredefine[CoreId]->PartitionCoreId != CoreId))
    {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_INIT_ID,
                              (uint8)MSC_E_PARAM_VALUE);
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    }
#else
    else if (NULL_PTR == Config)
    {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_INIT_ID,
                              (uint8)MSC_E_INVALID_POINTER);
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (Config->PartitionCoreId != CoreId)
    {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
        /* Invalid pointer */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_INIT_ID,
                              (uint8)MSC_E_PARAM_VALUE);
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    }
#endif
    else
    {
#if (MSC_PRECOMPILE_SUPPORT == STD_ON)
        Msc_CfgPtr[CoreId] = Msc_ConfigPredefine[CoreId];
#else
        Msc_CfgPtr[CoreId] = Config;
#endif
        /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
               Reason:  In different chip, MSC Has different quantities.*/
        for (Msc_ChLoop = (uint8)0U; Msc_ChLoop < MSC_HW_MAX_MODULES; Msc_ChLoop++)
        /* PRQA S 2877 -- */
        {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
            if (Msc_CfgPtr[CoreId]->Msc_Channel[Msc_ChLoop]->u8ChannelId >= MSC_INSTANCE_COUNT)
            {
                (void)Det_ReportError((uint16)MSC_MODULE_ID,
                                      MSC_INSTANCE_ID,
                                      (uint8)MSC_INIT_ID,
                                      (uint8)MSC_E_PARAM_VALUE);
            }
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
            if ((Msc_CfgPtr[CoreId]->Msc_Channel[Msc_ChLoop]->u32ChannelCoreId == CoreId) &&
                (Msc_CfgPtr[CoreId]->Msc_Channel[Msc_ChLoop]->u8AllocatedPartition == TRUE))
            {
                Msc_LLD_InitChannel(Msc_CfgPtr[CoreId]->Msc_Channel[Msc_ChLoop]);
                /* Set MSC channel state machine to MSC_CH_OPERATIONAL_STATE */
                Msc_ChStatus[Msc_ChLoop]   = MSC_CHANNEL_IDLE;
                Msc_ChStatusTx[Msc_ChLoop] = MSC_TX_OK;
                Msc_ChStatusRx[Msc_ChLoop] = MSC_RX_IDLE;
#if (MSC_POLLING_USED != STD_ON)
                for (uint8 u8Rxindex = 0U; u8Rxindex < MSC_RDRx_NUM; u8Rxindex++)
                {
                    Msc_RDRxStatus[Msc_ChLoop][u8Rxindex]     = MSC_RX_IDLE;
                    Msc_RDRxLogicAddr[Msc_ChLoop][u8Rxindex]  = 0U;
                    Msc_RDRxDataBuffer[Msc_ChLoop][u8Rxindex] = 0U;
                }
#endif
                /* Update MSC driver status to MSC_INIT */
                Msc_DrvStatus[CoreId] = MSC_INIT;
            }
        }
    }
    return; /* Exit function with no return */
}

/**
 * @brief   DeInitializes the MSC module.
 * @details This function performs software De-initialization of MSC
 *          driver:
 *          - Set driver state machine to MSC_DEINIT.
 *
 * @return  void
 *
 * @api
 *
 *
 * @note    CDD MSC Service ID: 0x0F.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_DeInit(void)
{
    uint32 CoreId = MSC_GetCoreID();
    uint8  Msc_ChLoop;
    /* Check whether the MSC driver is in MSC_UNINIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver is not initialized */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_DE_INIT_ID,
                              (uint8)MSC_E_STATE_TRANSITION);
    }
    else if (NULL_PTR == Msc_CfgPtr[CoreId])
    {
        /* Invalid pointer */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_DE_INIT_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else if (Msc_CfgPtr[CoreId]->PartitionCoreId != CoreId)
    {
        /* Invalid pointer */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_DE_INIT_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    {
        /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
               Reason:  In different chip, MSC Has different quantities.*/
        for (Msc_ChLoop = (uint8)0U; Msc_ChLoop < MSC_HW_MAX_MODULES; Msc_ChLoop++)
        /* PRQA S 2877 -- */
        {
            if ((Msc_CfgPtr[CoreId]->Msc_Channel[Msc_ChLoop]->u32ChannelCoreId == CoreId) &&
                (Msc_CfgPtr[CoreId]->Msc_Channel[Msc_ChLoop]->u8AllocatedPartition == TRUE))
            {
                Msc_LLD_DeInitChannel(Msc_ChLoop);
                Msc_ChStatus[Msc_ChLoop] = MSC_CHANNEL_IDLE;
            }
        }
        /* Update MSC driver status to MSC_INIT */
        Msc_DrvStatus[CoreId] = MSC_UNINIT;
        Msc_CfgPtr[CoreId]    = NULL_PTR;
    }

    return; /* Exit function with no return */
}

/**
 * @brief   Start to transmit serialized PWM.
 * @details This function is responsible of starting transmission
 *          of serialized PMW on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_IDLE state.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x01.
 * @note    Synchronous, Reentrant for different channels.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_StartChannel(uint8 Channel)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32 CoreId = MSC_GetCoreID();
#endif
    Std_ReturnType tempReturn = (uint8)E_NOT_OK;

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_START_CHANNEL_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Check for invalid channel */
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_START_CHANNEL_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_START_CHANNEL_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else if (Msc_ChStatus[Channel] == MSC_CHANNEL_ACTIVE)
    {
        /* Check for channel state */
        /* Invalid state */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_START_CHANNEL_ID,
                              (uint8)MSC_E_CHANNEL_ACTIVE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    {
#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if (E_NOT_OK == Msc_LLD_StartChannel(Channel))
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)MSC_E_TIMEOUT_VALUE,
                                     DEM_EVENT_STATUS_PREFAILED);
        }
        else
        {
            Msc_ChStatus[Channel] = MSC_CHANNEL_ACTIVE;
            tempReturn            = (uint8)E_OK;
            (void)Dem_SetEventStatus((Dem_EventIdType)MSC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_PASSED);
        }
#else  /* (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
        tempReturn = Msc_LLD_StartChannel(Channel);
        if (tempReturn == E_OK)
        {
            Msc_ChStatus[Channel] = MSC_CHANNEL_ACTIVE;
        }
#endif /* (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
    }
    return (tempReturn);
}

/**
 * @brief   Set a Data on the MSC bus.
 * @details This function is responsible to set Data on the MSC channel before transmission.
 *
 * @param[in] Channel MSC channel to be initialized.
 * @param[in] Msc_DataBufferPtr Pointer to data to be transmitter in the data frame.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the input pointer is null or
 *                          the length is null or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state or configuration
 *                          is not MSC_TX_TRIGGER_CONTINUOUS.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x02.
 * @note    Synchronous, Non Reentrant.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SetDataFrame(uint8 Channel, const uint32 *Msc_DataBufferPtr)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32         CoreId     = MSC_GetCoreID();
    Std_ReturnType tempReturn = (uint8)E_NOT_OK;
#else
    Std_ReturnType tempReturn;
#endif

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SET_DATA_FRAME_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SET_DATA_FRAME_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_DataBufferPtr == NULL_PTR)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SET_DATA_FRAME_ID,
                              (uint8)MSC_E_INVALID_POINTER);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SET_DATA_FRAME_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else if (Msc_CfgPtr[CoreId]->Msc_Channel[Channel]->eWorkMode != MSC_TX_TRIGGER_CONTINUOUS)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SET_DATA_FRAME_ID,
                              (uint8)MSC_E_CONFIG_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    {
        Msc_LLD_SetData(Channel, Msc_DataBufferPtr);
        tempReturn = (uint8)E_OK;
    }
    return (tempReturn);
}

/**
 * @brief   Send a Data on the MSC bus.
 * @details This function is responsible to send Data on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 * @param[in] Msc_DataBufferPtr Pointer to data to be transmitter in the data frame.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the input pointer is null or
 *                          the length is null or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state or configuration
 *                          is not MSC_TX_TRIGGER_SINGLE.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x03.
 * @note    Synchronous, Non Reentrant.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SendDataFrame(uint8 Channel, const uint32 *Msc_DataBufferPtr)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32         CoreId     = MSC_GetCoreID();
    Std_ReturnType tempReturn = (uint8)E_NOT_OK;
#else
    Std_ReturnType tempReturn;
#endif

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_DATA_FRAME_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_DATA_FRAME_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_ChStatus[Channel] == MSC_CHANNEL_IDLE)
    {
        /* Check for channel state */
        /* Invalid state */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_DATA_FRAME_ID,
                              (uint8)MSC_E_CHANNEL_NOT_STARTED);
    }
    else if (Msc_DataBufferPtr == NULL_PTR)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_DATA_FRAME_ID,
                              (uint8)MSC_E_INVALID_POINTER);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_DATA_FRAME_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else if (Msc_CfgPtr[CoreId]->Msc_Channel[Channel]->eWorkMode != MSC_TX_TRIGGER_SINGLE)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_DATA_FRAME_ID,
                              (uint8)MSC_E_CONFIG_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_ON) */
    {
        Msc_LLD_SendData(Channel, Msc_DataBufferPtr);
        tempReturn = (uint8)E_OK;
    }
    return (tempReturn);
}

/**
 * @brief   Stop transmitting serialized PWM.
 * @details This function is responsible to stop transmission
 *          of serialized PMW on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x04.
 * @note    Synchronous, Reentrant for different channels.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_StopChannel(uint8 Channel)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32         CoreId     = MSC_GetCoreID();
    Std_ReturnType tempReturn = (uint8)E_NOT_OK;
#else
    Std_ReturnType tempReturn;
#endif

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_STOP_CHANNEL_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Check for invalid channel */
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_STOP_CHANNEL_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_STOP_CHANNEL_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else if (Msc_ChStatus[Channel] == MSC_CHANNEL_IDLE)
    {
        /* Check for channel state */
        /* Invalid state */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_STOP_CHANNEL_ID,
                              (uint8)MSC_E_CHANNEL_NOT_STARTED);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
    {
        (void)Msc_LLD_StopChannel(Channel);
        Msc_ChStatus[Channel] = MSC_CHANNEL_IDLE;
        tempReturn            = (uint8)E_OK;
    }
    return (tempReturn);
}

/**
 * @brief   Send a command on the MSC bus.
 * @details This function is responsible to send command on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 * @param[in] Msc_CommandBufferPtr Pointer to command to be transmitter in the command frame.
 * @param[in] Msc_CommandBufferBitLength length in bits of the command frame.
 *
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized or
 *                          the input pointer is null or
 *                          the length is null or
 *                          the addressed MSC Channel is not
 *                          in MSC_CHANNEL_ACTIVE state.
 * @retval E_OK             Otherwise.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x05.
 * @note    Synchronous, Non Reentrant.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SendCommandFrame(uint8         Channel,
                                                         const uint32 *Msc_CommandBufferPtr,
                                                         uint8         Msc_CommandBufferBitLength)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32         CoreId     = MSC_GetCoreID();
    Std_ReturnType tempReturn = (uint8)E_NOT_OK;
#else
    Std_ReturnType tempReturn;
#endif

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_COMMAND_FRAME_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_COMMAND_FRAME_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_ChStatusTx[Channel] == MSC_TX_BUSY)
    {
        /* Invalid channel status */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_COMMAND_FRAME_ID,
                              (uint8)MSC_E_TX_BUSY);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_COMMAND_FRAME_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else if (Msc_ChStatus[Channel] == MSC_CHANNEL_IDLE)
    {
        /* Check for channel state */
        /* Invalid state */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_COMMAND_FRAME_ID,
                              (uint8)MSC_E_CHANNEL_NOT_STARTED);
    }
    else if (Msc_CommandBufferPtr == NULL_PTR)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_COMMAND_FRAME_ID,
                              (uint8)MSC_E_INVALID_POINTER);
    }
    else if ((Msc_CommandBufferBitLength == 0U) ||
             (Msc_CommandBufferBitLength > MSC_DOWNSTREAM_DATA_MAX))
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SEND_COMMAND_FRAME_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
    {
        Msc_LLD_SendCommand(Channel, Msc_CommandBufferPtr, Msc_CommandBufferBitLength);
        Msc_ChStatusTx[Channel] = MSC_TX_BUSY;
        tempReturn              = (uint8)E_OK;
    }
    return (tempReturn);
}

/**
 * @brief   Get the status of the command transmission on the MSC bus.
 * @details This function is responsible to give the transmission status
 *          of a command on the MSC channel.
 *
 * @param[in] Channel MSC channel to be initialized.
 *
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval MSC_TX_BUSY      MSC command transmission in progress.
 * @retval MSC_TX_OK        MSC command transmission successful.
 * @retval MSC_TX_ERROR     MSC command transmission error.
 * @retval MSC_CHANNEL_NOT_STARTED channel is in state MSC_CHANNEL_IDLE.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x06.
 * @note    Synchronous, Reentrant for different channels.
 *
 */
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_GetTxStatus(uint8 Channel)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32         CoreId     = MSC_GetCoreID();
    Msc_StatusType tempReturn = (Msc_StatusType)MSC_E_NOT_OK;
#else
    Msc_StatusType tempReturn;
#endif

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_TX_STATUS_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Check for invalid channel */
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_TX_STATUS_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_TX_STATUS_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
        if (Msc_ChStatus[Channel] == MSC_CHANNEL_IDLE)
        {
            /* Check for channel state */
            /* Invalid state */
            tempReturn = (Msc_StatusType)MSC_CHANNEL_NOT_STARTED;
        }
        else
        {
            if (Msc_ChStatusTx[Channel] == MSC_TX_BUSY)
            {
                Msc_ChStatusTx[Channel] = Msc_LLD_GetTxStatus(Channel);
            }
            tempReturn = Msc_ChStatusTx[Channel];
        }
    return (tempReturn);
}

/**
 * @brief   Get the status of a reception on the MSC bus.
 * @details This function is responsible to give the reception status
 *          of the MSC channel.
 *          If the reception of a response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 * @param[in] Channel       MSC channel to be checked.
 *
 * @param[out] RxDataBufferPtr   RxDataBufferPtr pointer to pointer to a shadow
 *                          buffer or memory mapped MSC Hardware
 *                          receive buffer where the current SDU is
 *                          stored.
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval MSC_RX_IDLE      MSC waiting for data reception.
 * @retval MSC_RX_BUSY      MSC command reception in progress.
 * @retval MSC_RX_OK        MSC command reception successful.
 * @retval MSC_RX_ERROR     MSC command reception error.
 * @retval MSC_RX_OVERFLOW  MSC reception overflow.
 * @retval MSC_CHANNEL_NOT_STARTED MSC channel is in state MSC_CHANNEL_IDLE.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x07.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_GetRxStatus(uint8 Channel, uint16 **RxDataBufferPtr)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32         CoreId     = MSC_GetCoreID();
    Msc_StatusType tempReturn = (Msc_StatusType)MSC_E_NOT_OK;
#else
    Msc_StatusType tempReturn;
#endif

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_STATUS_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Check for invalid channel */
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_STATUS_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (RxDataBufferPtr == NULL_PTR)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_STATUS_ID,
                              (uint8)MSC_E_INVALID_POINTER);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_STATUS_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
        if (Msc_ChStatus[Channel] == MSC_CHANNEL_IDLE)
        {
            /* Check for channel state */
            /* Invalid state */
            tempReturn = (Msc_StatusType)MSC_CHANNEL_NOT_STARTED;
        }
        else
        {
#if (MSC_POLLING_USED == STD_ON)
            tempReturn = Msc_LLD_GetRxStatus(Channel, MSC_RDR0, MSC_RxDataBuffer[Channel], NULL_PTR);
            if (tempReturn == MSC_RX_OK)
            {
                *RxDataBufferPtr = MSC_RxDataBuffer[Channel];
            }
            SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_11();
            {
                if (Msc_ChStatusRx[Channel] == MSC_RX_TIMEOUT)
                {
                    tempReturn = MSC_RX_TIMEOUT;
                }
                Msc_ChStatusRx[Channel] = MSC_RX_IDLE;
            }
            SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_11();
#else
        SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_14();
        {
            tempReturn                 = Msc_RDRxStatus[Channel][0];
            Msc_RDRxStatus[Channel][0] = MSC_RX_IDLE;
            if ((tempReturn == MSC_RX_OK) || (tempReturn == MSC_RX_OVERFLOW))
            {
                *RxDataBufferPtr = (uint16 *)&Msc_RDRxDataBuffer[Channel][0];
            }
            if (Msc_ChStatusRx[Channel] == MSC_RX_TIMEOUT)
            {
                tempReturn = MSC_RX_TIMEOUT;
            }
            Msc_ChStatusRx[Channel] = MSC_RX_IDLE;
        }
        SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_14();
#endif /* (MSC_POLLING_USED == STD_ON) */
        }
    return (tempReturn);
}

/**
 * @brief   Get the status of a reception on the MSC bus.
 * @details This function is responsible to give the reception status
 *          of the MSC channel.
 *          If the reception of a response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 * @param[in] Channel       MSC channel to be checked.
 * @param[in] RxIndex       MSC RxIndex to be checked.
 *
 * @param[out] RxDataBufferPtr   RxDataBufferPtr pointer to pointer to a shadow
 *                          buffer or memory mapped MSC Hardware
 *                          receive buffer where the current SDU is
 *                          stored.
 * @param[out] LogicAddr   pointer to logic addr.
 *
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval MSC_RX_IDLE      MSC waiting for data reception.
 * @retval MSC_RX_BUSY      MSC command reception in progress.
 * @retval MSC_RX_OK        MSC command reception successful.
 * @retval MSC_RX_ERROR     MSC command reception error.
 * @retval MSC_CHANNEL_NOT_STARTED MSC channel is in state MSC_CHANNEL_IDLE.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x08.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_GetRxStatus16BitFrame(uint8             Channel,
                                                              MSC_RDRxIndexType RxIndex,
                                                              uint16          **RxDataBufferPtr,
                                                              uint8            *LogicAddr)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32         CoreId     = MSC_GetCoreID();
    Msc_StatusType tempReturn = (Msc_StatusType)MSC_E_NOT_OK;
#else
    Msc_StatusType tempReturn;
#endif

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_16BIT_STATUS_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Check for invalid channel */
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_16BIT_STATUS_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (RxDataBufferPtr == NULL_PTR)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_16BIT_STATUS_ID,
                              (uint8)MSC_E_INVALID_POINTER);
    }
    else if (LogicAddr == NULL_PTR)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_16BIT_STATUS_ID,
                              (uint8)MSC_E_INVALID_POINTER);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_16BIT_STATUS_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else if ((uint8)RxIndex >= MSC_RDRx_COUNT)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GET_RX_16BIT_STATUS_ID,
                              (uint8)MSC_E_INVALID_RXINDEX);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
        if (Msc_ChStatus[Channel] == MSC_CHANNEL_IDLE)
        {
            /* Check for channel state */
            /* Invalid state */
            tempReturn = (Msc_StatusType)MSC_CHANNEL_NOT_STARTED;
        }
        else
        {
            uint8 u8Rxindex;
#if (MSC_POLLING_USED == STD_ON)
            uint8          u8LogicAddr = 0U;
            Msc_StatusType ErrorCheck;

            tempReturn =
                Msc_LLD_GetRxStatus(Channel, RxIndex, MSC_RxDataBuffer[Channel], &u8LogicAddr);
            if (tempReturn == MSC_RX_OK)
            {
                *RxDataBufferPtr = MSC_RxDataBuffer[Channel];
                *LogicAddr       = u8LogicAddr;
            }

            SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_12();
            {
                if (Msc_ChStatusRx[Channel] == MSC_RX_TIMEOUT)
                {
                    tempReturn = MSC_RX_TIMEOUT;
                }

                Msc_ChStatusRx[Channel] = MSC_RX_IDLE;
            }
            SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_12();

            for (u8Rxindex = 0u; u8Rxindex < MSC_RDRx_NUM; u8Rxindex++)
            {
                ErrorCheck = Msc_LLD_GetRxErrorStatus(Channel, u8Rxindex);

                if (ErrorCheck == MSC_RX_OK)
                {
                    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_13();
                    {
                        Msc_ChStatusRx[Channel] = MSC_RX_OK;
                    }
                    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_13();
                    break;
                }
            }
#else

        SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_15();
        {
            tempReturn                       = Msc_RDRxStatus[Channel][RxIndex];
            Msc_RDRxStatus[Channel][RxIndex] = MSC_RX_IDLE;
            if ((tempReturn == MSC_RX_OK) || (tempReturn == MSC_RX_OVERFLOW))
            {
                *RxDataBufferPtr = (uint16 *)&Msc_RDRxDataBuffer[Channel][RxIndex];
                *LogicAddr       = Msc_RDRxLogicAddr[Channel][RxIndex];
            }
            if (Msc_ChStatusRx[Channel] == MSC_RX_TIMEOUT)
            {
                tempReturn = MSC_RX_TIMEOUT;
            }
            Msc_ChStatusRx[Channel] = MSC_RX_IDLE;

            for (u8Rxindex = 0u; u8Rxindex < MSC_RDRx_COUNT; u8Rxindex++)
            {
                if ((Msc_RDRxStatus[Channel][u8Rxindex] == MSC_RX_OK) ||
                    (Msc_RDRxStatus[Channel][u8Rxindex] == MSC_RX_OVERFLOW))
                {
                    Msc_ChStatusRx[Channel] = MSC_RX_OK;
                    break;
                }
            }
        }
        SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_15();

#endif /* (MSC_POLLING_USED == STD_ON) */
        }
    return (tempReturn);
}

/**
 * @brief   Set the SDI channel.
 * @details This function is responsible to set the reception channel
 *          of the MSC channel.
 *
 * @param[in] Channel       MSC channel to be checked.
 * @param[in] SDIChannel    Rx channel to be set.
 *
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval E_OK             SDI channel has been set successfully.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x09.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SwitchSDIChannel(uint8                Channel,
                                                         MSC_SDISelectionType SDIChannel)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32 CoreId = MSC_GetCoreID();
#endif
#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    uint8 DemError = 0U;
#endif
    Std_ReturnType tempReturn = (uint8)E_NOT_OK;

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SWITCH_SDI_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SWITCH_SDI_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SWITCH_SDI_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
        if (Msc_ChStatusRx[Channel] == MSC_RX_BUSY)
        {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
            /* Invalid channel */
            (void)Det_ReportRuntimeError((uint16)MSC_MODULE_ID,
                                         MSC_INSTANCE_ID,
                                         (uint8)MSC_SWITCH_SDI_ID,
                                         (uint8)MSC_E_RX_BUSY);
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
        }
        else
        {
#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            if (E_NOT_OK == Msc_LLD_SwitchSDIChannel(Channel, SDIChannel))
            {
                DemError = 1U;
            }
            else
            {
                tempReturn = E_OK;
            }
#else  /* (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
        tempReturn = Msc_LLD_SwitchSDIChannel(Channel, SDIChannel);
#endif /* (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
        }

#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    /* Report Production error */
    if (DemError != 0U)
    {
        (void)Dem_SetEventStatus((Dem_EventIdType)MSC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_PREFAILED);
    }
    else
    {
        (void)Dem_SetEventStatus((Dem_EventIdType)MSC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_PASSED);
    }
#endif
    return (tempReturn);
}

/**
 * @brief   Set the EN channel.
 * @details This function is responsible to set the EN channel
 *          of the MSC channel.
 *
 * @param[in] Channel       MSC channel to be checked.
 * @param[in] ENx           ENC ENH ENL channel to be set.
 * @param[in] ENn           EN0 EN1 EN2 EN3 to be set.
 *
 * @return                  Msc_ReturnType .
 * @retval E_NOT_OK         If the MSC Channel is not valid or
 *                          MSC driver is not initialized.
 * @retval E_OK             EN channel has been set successfully.
 *
 * @api
 *
 *
 * @note    Autosar Service ID: 0x0A.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_SwitchEN(uint8 Channel, Msc_ENxType Enx, Msc_ENxActiveType ENn)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    uint32 CoreId = MSC_GetCoreID();
#endif
#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    uint8 DemError = 0U;
#endif
    Std_ReturnType tempReturn = (uint8)E_NOT_OK;

    /* Check whether the MSC driver is in MSC_INIT state */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (Msc_DrvStatus[CoreId] != MSC_INIT)
    {
        /* MSC driver has not been initialized yet */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SWITCH_EN_ID,
                              (uint8)MSC_E_UNINIT);
    }
    else if (Channel >= MSC_HW_MAX_MODULES)
    {
        /* Invalid channel */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SWITCH_EN_ID,
                              (uint8)MSC_E_INVALID_CHANNEL);
    }
    else if (Msc_ChannelCoreCheck(Channel, CoreId) != E_OK)
    {
        /* Invalid Parameter */
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_SWITCH_EN_ID,
                              (uint8)MSC_E_PARAM_VALUE);
    }
    else
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
        if (Msc_ChStatusTx[Channel] == MSC_TX_BUSY)
        {
#if (MSC_DEV_ERROR_DETECT == STD_ON)
            (void)Det_ReportRuntimeError((uint16)MSC_MODULE_ID,
                                         MSC_INSTANCE_ID,
                                         (uint8)MSC_SWITCH_EN_ID,
                                         (uint8)MSC_E_TX_BUSY);
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */
        }
        else
        {
#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            if (E_NOT_OK == Msc_LLD_SwitchEN(Channel, Enx, ENn))
            {
                DemError = 1U;
            }
            else
            {
                tempReturn = E_OK;
            }
#else  /* (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
        tempReturn = Msc_LLD_SwitchEN(Channel, Enx, ENn);
#endif /* (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON) */
        }

#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    /* Report Production error */
    if (DemError != 0U)
    {
        (void)Dem_SetEventStatus((Dem_EventIdType)MSC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_PREFAILED);
    }
    else
    {
        (void)Dem_SetEventStatus((Dem_EventIdType)MSC_E_TIMEOUT_VALUE, DEM_EVENT_STATUS_PASSED);
    }
#endif
    return (tempReturn);
}

#if (MSC_VERSION_INFO_API == STD_ON)
/**
 * @brief   Returns the version information of this module.
 * @details The version information includes:
 *
 *          - Two bytes for the Vendor ID
 *          - Two bytes for the Module ID
 *          - One byte  for the Instance ID
 *          - Three bytes version number. The numbering shall be vendor
 *            specific: it consists of:
 *
 *             - The major, the minor and the patch version number of
 *               the module;
 *             - The AUTOSAR specification version number shall not
 *               be included. The AUTOSAR specification version number is
 *               checked during compile time and therefore not required
 *               in this API.
 *
 * @param[in,out] versioninfo   Pointer for storing the version information
 *                              of this module.
 *
 * @return                  void.
 *
 * @api
 *
 * @pre            Preconditions as text description. Optional tag.
 *
 *
 * @note    Autosar Service ID: 0x0B.
 * @note    Synchronous, non reentrant function.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (MSC_DEV_ERROR_DETECT == STD_ON)
    if (versioninfo == NULL_PTR)
    {
        (void)Det_ReportError((uint16)MSC_MODULE_ID,
                              MSC_INSTANCE_ID,
                              (uint8)MSC_GETVERSIONINFO_ID,
                              (uint8)MSC_E_INVALID_POINTER);
    }
    else
#endif /* MSC_DEV_ERROR_DETECT == STD_ON */
    {
        (versioninfo)->vendorID         = (uint16)MSC_VENDOR_ID;
        (versioninfo)->moduleID         = (uint8)MSC_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)MSC_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)MSC_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)MSC_SW_PATCH_VERSION;
    }
}
#endif /* MSC_VERSION_INFO_API == STD_ON */

#define CDD_MSC_STOP_SEC_CODE
#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
