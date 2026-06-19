/**
*   @file    CDD_Uart.c
*   @version 1.5.1

*   @brief   AUTOSAR UART - driver API and development errors implemention.
*   @details This file contains the UART driver API and development errors implemention.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
*   PLATFORM             : Flagchip FC7xxx
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
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to variable length reception
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_Uart.h"
#include "LLD_Uart.h"
#if ((UART_DEV_ERROR_DETECT == STD_ON) || (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON))
#include "Det.h"
#endif

/*==================================================================================================
*                              LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define UART_START_SEC_VAR_NO_INIT_32
#include "Uart_MemMap.h"

/**
 * @brief          Uart clock frequencies.
 * @details        This variable retains the values of clock frequencies set at driver initialization for each channel.
 */
UART_DATA_SECTION static uint32 Uart_u32ClockFrequency[UART_MAX_PARTITIONS][UART_CH_MAX_CONFIG];
#define UART_STOP_SEC_VAR_NO_INIT_32
#include "Uart_MemMap.h"
/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/
#define UART_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"

#if (UART_PRECOMPILE_SUPPORT == STD_ON)
/**
 * @brief          Global precompiled configuration pointer.
 * @details        Pointer to the precompiled configuration structure.
 */
extern const Uart_ConfigType *const Uart_PBcfgVariantPredefined[UART_MAX_PARTITIONS];

#endif /* (UART_PRECOMPILE_SUPPORT == STD_OFF) */

#define UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"

#define UART_START_SEC_VAR_INIT_UNSPECIFIED
#include "Uart_MemMap.h"
/**
 * @brief          Global configuration pointer.
 * @details        Pointer to the configuration structure.
 */
UART_DATA_SECTION static const Uart_ConfigType *Uart_Config_Ptr[UART_MAX_PARTITIONS] = {NULL_PTR};

#define UART_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Uart_MemMap.h"

#define UART_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Uart_MemMap.h"

UART_DATA_SECTION static const Uart_HwConfigType *Uart_Hw_ChnConfig[UART_CH_MAX_CONFIG];

#define UART_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Uart_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define UART_START_SEC_CODE
#include "Uart_MemMap.h"

#if (UART_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE void Uart_ReportDetError(uint8 u8ServiceId,
                                      uint8 u8ErrorId);
#endif

/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/
/**
 *
 * @brief  Uart det report error function.
 *
 * @param[in] u8ServiceId       Uart service id
 * @param[in] u8ErrorId         Uart error id
 *
 * @return   void
 *
 */
#if (UART_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE void Uart_ReportDetError(uint8 u8ServiceId,
                                        uint8 u8ErrorId)
{
    (void)Det_ReportError((uint16)UART_MODULE_ID,
                            (uint8)0,
                            (uint8)u8ServiceId,
                            (uint8)u8ErrorId);
}
#endif

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief   Initialize the Uart channel.
 * @details This function calls a LLD function initializes all hardware registers needed to
 *          start the Uart functionality on the selected channel.
 *
 * @param   [in]    Config Configuration pointer containing hardware specific settings.
 *
 * @return            void.
 *
 */
/* [SWS_CDD_UART_00002] */
UART_TEXT_SECTION void Uart_Init(const Uart_ConfigType *Config)
{
    uint8 u8Index;
    uint8 CoreId;
    uint8 Channel;
    uint8 HwUnit;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    /* [SWS_CDD_UART_00005] */
    /* [SWS_CDD_UART_00010] */
    if (NULL_PTR != Uart_Config_Ptr[CoreId])
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_INIT_ID,
                            (uint8)UART_E_ALREADY_INITIALIZED);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
#if (UART_PRECOMPILE_SUPPORT == STD_ON)
        if (NULL_PTR != Config)
#else  /* UART_PRECOMPILE_SUPPORT == STD_OFF */
        if (NULL_PTR == Config)
#endif /* UART_PRECOMPILE_SUPPORT == STD_ON */
        {
/* [SWS_CDD_UART_00006] */
#if (UART_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_CDD_UART_00007] */
            /* [SWS_CDD_UART_00009] */
            Uart_ReportDetError((uint8)UART_INIT_ID,
                                (uint8)UART_E_INIT_FAILED);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
#if (UART_MULTICORE_SUPPORT == STD_ON)
#if (UART_PRECOMPILE_SUPPORT == STD_ON)
        else if ((NULL_PTR == Uart_PBcfgVariantPredefined[CoreId]) ||
                 (CoreId != Uart_PBcfgVariantPredefined[CoreId]->PartitionCoreId))
#else  /* UART_PRECOMPILE_SUPPORT == STD_OFF */
        else if (CoreId != Config->PartitionCoreId)
#endif /* UART_PRECOMPILE_SUPPORT == STD_ON */
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_CDD_UART_00008] */
            Uart_ReportDetError((uint8)UART_INIT_ID,
                                (uint8)UART_E_PARAM_CONFIG);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
        /* [SWS_CDD_UART_00003] */
        else
        {
#if (UART_PRECOMPILE_SUPPORT == STD_ON)
            Uart_Config_Ptr[CoreId] = Uart_PBcfgVariantPredefined[CoreId];
            (void)Config;
#else  /* UART_PRECOMPILE_SUPPORT == STD_OFF */
            Uart_Config_Ptr[CoreId] = Config;
#endif /* UART_PRECOMPILE_SUPPORT == STD_ON */

            for (u8Index = 0U; u8Index < UART_CH_MAX_CONFIG; u8Index++)
            {
                if (Uart_Config_Ptr[CoreId]->Configs[u8Index] != NULL_PTR)
                {
#if (UART_MULTICORE_SUPPORT == STD_ON)
                    if (CoreId == Uart_Config_Ptr[CoreId]->Configs[u8Index]->ChannelCoreId)
                    {
#endif /* UART_MULTICORE_SUPPORT == STD_ON */
                        HwUnit = (uint8)Uart_Config_Ptr[CoreId]->Configs[u8Index]->UartChannelConfig->UartHwChannel;
                        Channel = Uart_Config_Ptr[CoreId]->Configs[u8Index]->UartChannelId;

                        Uart_LLD_Init(HwUnit, Uart_Config_Ptr[CoreId]->Configs[u8Index]->UartChannelConfig->UserConfig);
                        /* Save the channel settings */
                        Uart_Hw_ChnConfig[Channel] = Uart_Config_Ptr[CoreId]->Configs[u8Index]->UartChannelConfig;
                        Uart_u32ClockFrequency[CoreId][Channel] = Uart_Config_Ptr[CoreId]->Configs[u8Index]->ChannelClockFrequency;
#if (UART_MULTICORE_SUPPORT == STD_ON)
                    }
#endif /* UART_MULTICORE_SUPPORT == STD_ON */
                }
            }
        /* [SWS_CDD_UART_00004] */
        }
    }
}

/**
 * @brief   Deinitialize the Uart channel.
 * @details This function calls a LLD function deinitializes all hardware registers.
 *
 * @param   [in]    void
 *
 * @return            void.
 *
 */
/* [SWS_CDD_UART_00011] */
UART_TEXT_SECTION void Uart_Deinit(void)
{
    uint8 u8Index = 0U;
    uint8 CoreId = 0U;
    uint8 HwUnit;
    uint8 Channel;
    Uart_StatusType UartRxStatus;
    Uart_StatusType UartTxStatus;
    boolean bCheckIdle = TRUE;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
/* [SWS_CDD_UART_00046] */
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_DEINIT_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
        for (u8Index = 0U; u8Index < UART_CH_MAX_CONFIG; u8Index++)
        {
            if (Uart_Config_Ptr[CoreId]->Configs[u8Index] != NULL_PTR)
            {
#if (UART_MULTICORE_SUPPORT == STD_ON)
                if (CoreId == Uart_Config_Ptr[CoreId]->Configs[u8Index]->ChannelCoreId)
                {
#endif /* UART_MULTICORE_SUPPORT == STD_ON */
                    Channel = Uart_Config_Ptr[CoreId]->Configs[u8Index]->UartChannelId;
                    HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                    UartRxStatus = Uart_LLD_GetReceiveStatus(HwUnit, NULL_PTR);
                    UartTxStatus = Uart_LLD_GetTransmitStatus(HwUnit, NULL_PTR);
                    /* Check whether channel is busy sending or receiving */
                    if ((UART_STATUS_BUSY == UartRxStatus) ||
                        (UART_STATUS_BUSY == UartTxStatus))
                    {
                        bCheckIdle = FALSE;
                        break;
                    }
#if (UART_MULTICORE_SUPPORT == STD_ON)
                }
#endif /* UART_MULTICORE_SUPPORT == STD_ON */
            }
        }

        if (bCheckIdle != 0U)
        {
            /* All channels are in idle state*/
            for (u8Index = 0U; u8Index < UART_CH_MAX_CONFIG; u8Index++)
            {
                if (Uart_Config_Ptr[CoreId]->Configs[u8Index] != NULL_PTR)
                {
#if (UART_MULTICORE_SUPPORT == STD_ON)
                    if (CoreId == Uart_Config_Ptr[CoreId]->Configs[u8Index]->ChannelCoreId)
                    {
#endif /* UART_MULTICORE_SUPPORT == STD_ON */
                        Channel = Uart_Config_Ptr[CoreId]->Configs[u8Index]->UartChannelId;
                        HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                        /* Deinit channel */
                        /* [SWS_CDD_UART_00012] */
                        (void)Uart_LLD_Deinit(HwUnit);
#if (UART_MULTICORE_SUPPORT == STD_ON)
                    }
#endif /* UART_MULTICORE_SUPPORT == STD_ON */
                }
            }
            Uart_Config_Ptr[CoreId] = NULL_PTR;
        }
        else
        {
/* In case one or more channels are busy */
#if (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON)
            /* Timeout occur */
            /* [SWS_CDD_UART_00063] */
            (void)Det_ReportRuntimeError((uint16)UART_MODULE_ID,
                                         (uint8)0,
                                         (uint8)UART_DEINIT_ID,
                                         (uint8)UART_E_DEINIT_FAILED);
#endif /* (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON) */
        }
    }
}

/**
 * @brief  Set a baudrate value for the current channel.
 * @details This function calls a LLD function which sets a baudrate value for a given channel.
 *
 * @param[in] Channel           Uart channel where the baudrate shall be configured
 * @param[in] BaudRateValue     The baudrate value to be configured.
 *
 * @return   E_OK:     Baud rate successfully configured
 *           E_NOT_OK: Baud rate wasn't successfully configured
 *
 */
/* [SWS_CDD_UART_00015] */
UART_TEXT_SECTION Std_ReturnType Uart_SetBaudrate(uint8 Channel,
                                                  Uart_BaudrateType Baudrate)
{
    /* [SWS_CDD_UART_00016] */
    Std_ReturnType u8RetVal = E_NOT_OK;
    uint8 CoreId;
    uint8 HwUnit;
    Uart_StatusType UartRxStatus;
    Uart_StatusType UartTxStatus;

    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    /* [SWS_CDD_UART_00017] */
    /* [SWS_CDD_UART_00038] */
    /* [SWS_CDD_UART_00066] */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_SETBAUDRATE_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    /* Check if the desired baud rate can be configured with the current protocol clock. */
    /* [SWS_CDD_UART_00039] */
    /* [SWS_CDD_UART_00067] */
    /* [SWS_CDD_UART_00085] */
    else if (Channel >= UART_CH_MAX_CONFIG)
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_CDD_UART_00019] */
        /* [SWS_CDD_UART_00035] */
        /* [SWS_CDD_UART_00041] */
        /* [SWS_CDD_UART_00047] */
        /* [SWS_CDD_UART_00057] */
        /* [SWS_CDD_UART_00069] */
        Uart_ReportDetError((uint8)UART_SETBAUDRATE_ID,
                            (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
    }
    else
    {
#if (UART_MULTICORE_SUPPORT == STD_ON)
        if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_CDD_UART_00021] */
            /* [SWS_CDD_UART_00049] */
            /* [SWS_CDD_UART_00059] */
            Uart_ReportDetError((uint8)UART_SETBAUDRATE_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
        }
        else
        {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
            if (((Uart_u32ClockFrequency[CoreId][Channel]) <= 0U) ||
                ((Uart_u32ClockFrequency[CoreId][Channel]) < (uint32)(Baudrate * 4U)))
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                /* [SWS_CDD_UART_00018] */
                /* [SWS_CDD_UART_00043] */
                /* [SWS_CDD_UART_00051] */
                /* [SWS_CDD_UART_00061] */
                /* [SWS_CDD_UART_00071] */
                /* [SWS_CDD_UART_00080] */
                Uart_ReportDetError((uint8)UART_SETBAUDRATE_ID,
                                    (uint8)UART_E_INVALID_PARAMETER);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
            }
            else
            {
                HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                UartRxStatus = Uart_LLD_GetReceiveStatus(HwUnit, NULL_PTR);
                UartTxStatus = Uart_LLD_GetTransmitStatus(HwUnit, NULL_PTR);
                /* Check whether channel is busy sending or receiving */
                if ((UART_STATUS_BUSY == UartRxStatus) ||
                    (UART_STATUS_BUSY == UartTxStatus))
                {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                    /* [SWS_CDD_UART_00022] */
                    /* [SWS_CDD_UART_00062] */
                    /* [SWS_CDD_UART_00072] */
                    Uart_ReportDetError((uint8)UART_SETBAUDRATE_ID,
                                        (uint8)UART_E_CHANNEL_BUSY);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
                }
                else
                {
                    u8RetVal = Uart_LLD_SetBaudRate(HwUnit,
                                                    Baudrate,
                                                    Uart_u32ClockFrequency[CoreId][Channel]);
                }
            }
#if (UART_MULTICORE_SUPPORT == STD_ON)
        }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
    }
    return u8RetVal;
}

/**
 * @brief   Retrieves the baudrate value configured for the current channel.
 * @details This function calls a LLD function returns the baudrate value configured for the given channel
 *          via a pointer parameter provided by user.
 *
 * @param[in]  Channel            Uart channel where the baudrate shall be configured
 * @param[out] BaudrateValue     The pointer which will contain the baudrate value.
 *
 * @return   void
 *
 */
/* [SWS_CDD_UART_00023] */
UART_TEXT_SECTION Std_ReturnType Uart_GetBaudrate(uint8 Channel,
                                                  uint32 *Baudrate)
{
    Std_ReturnType u8RetVal = E_NOT_OK;
    uint8 CoreId;
    uint8 HwUnit;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
/* [SWS_CDD_UART_00025] */
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_GETBAUDRATE_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
        /* [SWS_CDD_UART_00026] */
        if (Channel >= UART_CH_MAX_CONFIG)
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            Uart_ReportDetError((uint8)UART_GETBAUDRATE_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
        else
        {
            /* [SWS_CDD_UART_00027] */
            /* [SWS_CDD_UART_00088] */
            if (NULL_PTR == Baudrate)
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                /* [SWS_CDD_UART_00042] */
                /* [SWS_CDD_UART_00050] */
                /* [SWS_CDD_UART_00060] */
                /* [SWS_CDD_UART_00070] */
                Uart_ReportDetError((uint8)UART_GETBAUDRATE_ID,
                                    (uint8)UART_E_INVALID_POINTER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
            }
            else
            {
#if (UART_MULTICORE_SUPPORT == STD_ON)
                /* [SWS_CDD_UART_00087] */
                if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
                {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                    Uart_ReportDetError((uint8)UART_GETBAUDRATE_ID,
                                        (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
                }
                else
                {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
                    HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                    Uart_LLD_GetBaudRate(HwUnit,
                                         Baudrate);
                    u8RetVal = E_OK;
                    (void)CoreId;
#if (UART_MULTICORE_SUPPORT == STD_ON)
                }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
            }
        }
    }
    return u8RetVal;
}

/**
 * @brief   Abort the current transfer.
 * @details This function calls a LLD function abort the current Uart channel transmit.
 *
 * @param[in]  Channel              Uart channel
 * @param[out] TransType     Transmission type.
 *
 * @return            void.
 *
 */
UART_TEXT_SECTION Std_ReturnType Uart_AbortTransfer(uint8 Channel,
                                                    Uart_DirectionType TransType)
{
    Std_ReturnType u8RetVal = E_NOT_OK;
    Uart_StatusType eStatus;
    uint8 CoreId;
    uint8 HwUnit;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
/* [SWS_CDD_UART_00032] */
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_ABORTTRANSFER_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
        if (Channel >= UART_CH_MAX_CONFIG)
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_CDD_UART_00033] */
            Uart_ReportDetError((uint8)UART_ABORTTRANSFER_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
        else
        {
#if (UART_MULTICORE_SUPPORT == STD_ON)
            if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                Uart_ReportDetError((uint8)UART_ABORTTRANSFER_ID,
                                    (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
            }
            else
            {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
                /* [SWS_CDD_UART_00031] */
                HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                if (UART_SEND == TransType)
                {
                    eStatus = Uart_LLD_AbortSendingData(HwUnit);
                }
                else
                {
                    eStatus = Uart_LLD_AbortReceivingData(HwUnit);
                }

                if (UART_STATUS_SUCCESS == eStatus)
                {
                    u8RetVal = (uint8)E_OK;
                }
                (void)CoreId;
#if (UART_MULTICORE_SUPPORT == STD_ON)
            }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
        }
    }
    return u8RetVal;
}

/**
 * @brief   Sets a tx or rx buffer.
 * @details This function will set up a buffer to receive or transmit.
 *
 * @param[in]  Channel               Uart channel
 * @param[in]  DataBuffer            Buffer to send.
 * @param[in]  DataSize              The number of bytes to transmit.
 * @param[out] TransType             Transmission type.
 *
 * @return            void.
 *
 */
/* [SWS_CDD_UART_00036] */
UART_TEXT_SECTION void Uart_SetTransBuffer(uint8 Channel,
                                           uint8 *DataBuffer,
                                           uint32 DataSize,
                                           Uart_DirectionType TransType)
{
    uint8 CoreId;
    uint8 HwUnit;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_SETTRANSBUFFER_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (Channel >= UART_CH_MAX_CONFIG)
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_SETTRANSBUFFER_ID,
                            (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
#if (UART_MULTICORE_SUPPORT == STD_ON)
        if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            Uart_ReportDetError((uint8)UART_SETTRANSBUFFER_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
        else
        {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
            if (NULL_PTR == DataBuffer)
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                Uart_ReportDetError((uint8)UART_SETTRANSBUFFER_ID,
                                    (uint8)UART_E_INVALID_POINTER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
            }
            else
            {
                if (0U >= DataSize)
                {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                    Uart_ReportDetError((uint8)UART_SETTRANSBUFFER_ID,
                                        (uint8)UART_E_INVALID_PARAMETER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
                }
                else
                {
                    /* [SWS_CDD_UART_00037] */
                    HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                    if (UART_SEND == TransType)
                    {
                        Uart_LLD_SetTxBuffer(HwUnit,
                                             (const uint8 *)DataBuffer,
                                             DataSize);
                    }
                    else
                    {
                        Uart_LLD_SetRxBuffer(HwUnit,
                                             DataBuffer,
                                             DataSize);
                    }
                }
            }
#if (UART_MULTICORE_SUPPORT == STD_ON)
        }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
    }
}

/**
 *
 * @brief  Transfer data with polling method.
 * @details This function will start transfer data when Uart_LLD_GetTransmitStatus do not in BUSY status.
 *
 * @param[in] Channel      Uart channel used for transmission.
 * @param[in] DataBuffer   Buffer to send.
 * @param[in] DataSize     The number of bytes to send.
 * @param[in] Timeout      The number of timeout cycles per frame of data transmission
 *
 *
 * @return   E_OK:               Transmission ended successfully
 *           E_NOT_OK:           Transmission didn't end successfully
 *
 */
/* [SWS_CDD_UART_00044] */
UART_TEXT_SECTION Std_ReturnType Uart_SyncSend(uint8 Channel,
                                               const uint8 *DataBuffer,
                                               uint32 DataSize,
                                               uint32 Timeout)
{
    Std_ReturnType u8RetVal = E_NOT_OK;
    Uart_StatusType TransmitStatus;
    uint8 HwUnit;
    uint8 CoreId;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_SYNCSEND_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (Channel >= UART_CH_MAX_CONFIG)
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_CDD_UART_00076] */
        Uart_ReportDetError((uint8)UART_SYNCSEND_ID,
                            (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
#if (UART_MULTICORE_SUPPORT == STD_ON)
        if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_CDD_UART_00078] */
            Uart_ReportDetError((uint8)UART_SYNCSEND_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
        else
        {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
            if (NULL_PTR == DataBuffer)
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                Uart_ReportDetError((uint8)UART_SYNCSEND_ID,
                                    (uint8)UART_E_INVALID_POINTER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
            }
            else
            {
                if (0U >= DataSize)
                {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                    Uart_ReportDetError((uint8)UART_SYNCSEND_ID,
                                        (uint8)UART_E_INVALID_PARAMETER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
                }
                else
                {
                    HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                    TransmitStatus = Uart_LLD_GetTransmitStatus(HwUnit, NULL_PTR);
                    if (UART_STATUS_BUSY == TransmitStatus)
                    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                        /* [SWS_CDD_UART_00052] */
                        Uart_ReportDetError((uint8)UART_SYNCSEND_ID,
                                            (uint8)UART_E_CHANNEL_BUSY);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
                    }
                    else
                    {
                        /* [SWS_CDD_UART_00045] */
                        TransmitStatus = Uart_LLD_SyncSend(HwUnit,
                                                           DataBuffer,
                                                           DataSize,
                                                           Timeout);
                        if (UART_STATUS_SUCCESS == TransmitStatus)
                        {
                            u8RetVal = (uint8)E_OK;
                        }
                        else if (UART_STATUS_TIMEOUT == TransmitStatus)
                        {
#if (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON)
                            /* Timeout occur */
                            /* [SWS_CDD_UART_00053] */
                            (void)Det_ReportRuntimeError((uint16)UART_MODULE_ID,
                                                         (uint8)0,
                                                         (uint8)UART_SYNCSEND_ID,
                                                         (uint8)UART_E_TIMEOUT);
#endif /* (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON) */
                            u8RetVal = E_NOT_OK;
                        }
                        else
                        {
                            u8RetVal = E_NOT_OK;
                        }
                    }
                }
            }
#if (UART_MULTICORE_SUPPORT == STD_ON)
        }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
    }
    return u8RetVal;
}

/**
 *
 * @brief  Receive data with polling method.
 * @details This function will start receive data when Uart_LLD_GetReceiveStatus do not in BUSY status.
 *
 * @param[in] Channel          Uart channel used for transmission.
 * @param[in] DataBuffer       Buffer to receive.
 * @param[in] DataSize         The number of bytes to receive.
 * @param[in] Timeout          The number of timeout cycles per frame of data transmission
 *
 * @return   E_OK:               Reception ended successfully
 *           E_NOT_OK:           Reception didn't end successfully
 *
 */
/* [SWS_CDD_UART_00054] */
UART_TEXT_SECTION Std_ReturnType Uart_SyncReceive(uint8 Channel,
                                                  uint8 *DataBuffer,
                                                  uint32 DataSize,
                                                  uint32 Timeout)
{
    Std_ReturnType u8RetVal = E_NOT_OK;
    Uart_StatusType ReceiveStatus;
    uint8 HwUnit;
    uint8 CoreId;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_CDD_UART_00056] */
        Uart_ReportDetError((uint8)UART_SYNCRECEIVE_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (Channel >= UART_CH_MAX_CONFIG)
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_SYNCRECEIVE_ID,
                            (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
#if (UART_MULTICORE_SUPPORT == STD_ON)
        if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            Uart_ReportDetError((uint8)UART_SYNCRECEIVE_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
        }
        else
        {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
            if (NULL_PTR == DataBuffer)
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                Uart_ReportDetError((uint8)UART_SYNCRECEIVE_ID,
                                    (uint8)UART_E_INVALID_POINTER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
            }
            else
            {
                if (0U >= DataSize)
                {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                    Uart_ReportDetError((uint8)UART_SYNCRECEIVE_ID,
                                        (uint8)UART_E_INVALID_PARAMETER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
                }
                else
                {
                    HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                    ReceiveStatus = Uart_LLD_GetReceiveStatus(HwUnit, NULL_PTR);
                    if (UART_STATUS_BUSY == ReceiveStatus)
                    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                        /* [SWS_CDD_UART_00081] */
                        Uart_ReportDetError((uint8)UART_SYNCRECEIVE_ID,
                                            (uint8)UART_E_CHANNEL_BUSY);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
                    }
                    else
                    {
                        ReceiveStatus = Uart_LLD_SyncReceive(HwUnit,
                                                             DataBuffer,
                                                             DataSize,
                                                             Timeout);
                        if (UART_STATUS_SUCCESS == ReceiveStatus)
                        {
                            u8RetVal = E_OK;
                        }
                        else if ((uint8)UART_STATUS_TIMEOUT == ReceiveStatus)
                        {
#if (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON)
                            /* Timeout occur */
                            (void)Det_ReportRuntimeError((uint16)UART_MODULE_ID,
                                                         (uint8)0,
                                                         (uint8)UART_SYNCRECEIVE_ID,
                                                         (uint8)UART_E_TIMEOUT);
#endif /* (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON) */
                            u8RetVal = E_NOT_OK;
                        }
                        else
                        {
                            u8RetVal = E_NOT_OK;
                        }
                    }
                }
            }
#if (UART_MULTICORE_SUPPORT == STD_ON)
        }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
    }
    return u8RetVal;
}

/**
 *
 * @brief  Receive data with asynchronously method.
 * @details This function will start receive data when Uart_LLD_GetReceiveStatus do not in BUSY status.
 *
 * @param[in] Channel      Uart channel used for transmission.
 *
 *
 * @return   E_OK:               Reception ended successfully
 *           E_NOT_OK:           Reception didn't end successfully
 *
 */
/* [SWS_CDD_UART_00064] */
UART_TEXT_SECTION Std_ReturnType Uart_AsyncReceive(uint8 Channel)
{
    Std_ReturnType u8RetVal = E_NOT_OK;
    Uart_StatusType ReceiveStatus;
    uint8 HwUnit;
    uint8 CoreId;
/* [SWS_CDD_UART_00065] */    
    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_CDD_UART_00075] */
        Uart_ReportDetError((uint8)UART_ASYNCRECEIVE_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
        if (Channel >= UART_CH_MAX_CONFIG)
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            Uart_ReportDetError((uint8)UART_ASYNCRECEIVE_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
#if (UART_MULTICORE_SUPPORT == STD_ON)
        else if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_CDD_UART_00085] */
            Uart_ReportDetError((uint8)UART_ASYNCRECEIVE_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
        }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
        else
        {
            HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
            ReceiveStatus = Uart_LLD_GetReceiveStatus(HwUnit, NULL_PTR);
            if (UART_STATUS_BUSY == ReceiveStatus)
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                (void)Det_ReportError((uint16)UART_MODULE_ID,
                                    (uint8)0,
                                    (uint8)UART_ASYNCRECEIVE_ID,
                                    (uint8)UART_E_CHANNEL_BUSY);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
              }
            else
            {
                ReceiveStatus = Uart_LLD_AsyncReceive(HwUnit);
                if (UART_STATUS_SUCCESS == ReceiveStatus)
                {
                    u8RetVal = (uint8)E_OK;
                }
            }
           }

    }


    return u8RetVal;
}

/**
 *
 * @brief  Transfer data with asynchronously method.
 * @details This function will start transfer data when Uart_LLD_GetTransmitStatus do not in BUSY status.
 *
 * @param[in] Channel      Uart channel used for transmission.
 * @param[in] DataBuffer       Buffer to send.
 * @param[in] DataSize   The number of bytes to send.
 *
 *
 * @return   E_OK:               Transmission ended successfully
 *           E_NOT_OK:           Transmission didn't end successfully
 *
 */
UART_TEXT_SECTION Std_ReturnType Uart_AsyncSend(uint8 Channel,
                                                const uint8 *DataBuffer,
                                                uint32 DataSize)
{
    Std_ReturnType u8RetVal = E_NOT_OK;
    Uart_StatusType TransmitStatus;
    uint8 HwUnit;
    uint8 CoreId;

    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
/* [SWS_CDD_UART_00013] */
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_ASYNCSEND_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else if (Channel >= UART_CH_MAX_CONFIG)
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_ASYNCSEND_ID,
                            (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
#if (UART_MULTICORE_SUPPORT == STD_ON)
        if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            Uart_ReportDetError((uint8)UART_ASYNCSEND_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
        }
        else
        {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
            if (NULL_PTR == DataBuffer)
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                Uart_ReportDetError((uint8)UART_ASYNCSEND_ID,
                                    (uint8)UART_E_INVALID_POINTER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
            }
            else
            {
                if (0U >= DataSize)
                {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                    Uart_ReportDetError((uint8)UART_ASYNCSEND_ID,
                                        (uint8)UART_E_INVALID_PARAMETER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
                }
                else
                {
                    HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                    TransmitStatus = Uart_LLD_GetTransmitStatus(HwUnit, NULL_PTR);
                    if (UART_STATUS_BUSY == TransmitStatus)
                    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                        Uart_ReportDetError((uint8)UART_ASYNCSEND_ID,
                                            (uint8)UART_E_CHANNEL_BUSY);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
                    }
                    else
                    {
                        /* [SWS_CDD_UART_00073] */
                        /* [SWS_CDD_UART_00102] */
                        TransmitStatus = Uart_LLD_AsyncSend(HwUnit,
                                                            DataBuffer,
                                                            DataSize);
                        if (UART_STATUS_SUCCESS == TransmitStatus)
                        {
                            u8RetVal = (uint8)E_OK;
                        }
                    }
                }
            }
#if (UART_MULTICORE_SUPPORT == STD_ON)
        }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
    }
    return u8RetVal;
}

/**
 *
 * @brief   Get the transmission status of the current channel.
 * @details This function will return the current state of the channel.
 *
 * @param[in] Channel                      Uart channel used for transmission.
 * @param[in] RemainingBytesPointer        The pointer where to write the number of remaining bytes.
 * @param[in] TransType                    Transmission type.
 *
 *
 * @return   Uart_StatusType      The Uart driver status type.
 *
 */
/* [SWS_CDD_UART_00098] */
/* [SWS_CDD_UART_00082] */
UART_TEXT_SECTION Uart_StatusType Uart_GetStatus(uint8 Channel,
                                                 uint32 *RemainingBytesPointer,
                                                 Uart_DirectionType TransType)
{
    Uart_StatusType u8RetVal;
    uint8 CoreId;
    uint8 HwUnit;

    u8RetVal = UART_STATUS_ERROR;
    /* Get current core ID */
    CoreId = (uint8)Uart_GetCoreID();

    /* Check whether uart has already been initialized */
    if (NULL_PTR == Uart_Config_Ptr[CoreId])
    {
#if (UART_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_CDD_UART_00084] */
        Uart_ReportDetError((uint8)UART_GETSTATUS_ID,
                            (uint8)UART_E_UNINIT);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
        if (Channel >= UART_CH_MAX_CONFIG)
        {
#if (UART_DEV_ERROR_DETECT == STD_ON)
            Uart_ReportDetError((uint8)UART_GETSTATUS_ID,
                                (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
        }
        else
        {
            if (NULL_PTR == RemainingBytesPointer)
            {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                Uart_ReportDetError((uint8)UART_GETSTATUS_ID,
                                    (uint8)UART_E_INVALID_POINTER);
#endif /* (UART_DEV_ERROR_DETECT == STD_ON) */
            }
            else
            {
#if (UART_MULTICORE_SUPPORT == STD_ON)
                if (NULL_PTR == Uart_Config_Ptr[CoreId]->Configs[Channel])
                {
#if (UART_DEV_ERROR_DETECT == STD_ON)
                    Uart_ReportDetError((uint8)UART_GETSTATUS_ID,
                                        (uint8)UART_E_INVALID_CHANNEL);
#endif /* (UART_DEV_ERROR_DETECT     == STD_ON) */
                }
                else
                {
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
                    HwUnit = (uint8)Uart_Hw_ChnConfig[Channel]->UartHwChannel;
                    if (UART_SEND == TransType)
                    {
                        u8RetVal = Uart_LLD_GetTransmitStatus(HwUnit,
                                                              RemainingBytesPointer);
                    }
                    else
                    {
                        u8RetVal = Uart_LLD_GetReceiveStatus(HwUnit,
                                                             RemainingBytesPointer);
                    }
#if (UART_MULTICORE_SUPPORT == STD_ON)
                }
#endif /* (UART_MULTICORE_SUPPORT == STD_ON) */
            }
        }
    }
    return u8RetVal;
}

#if (UART_VERSION_INFO_API == STD_ON)
/**
 *
 * @brief   Get the version information of this module.
 * @details This function will return the version information of this module.
 *
 * @param[in] versioninfo    Pointer to where to store the version
 *                           information of this module.
 *
 * @return   void
 *
 */
/* [SWS_CDD_UART_00089] */
UART_TEXT_SECTION void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo)
/* [SWS_CDD_UART_00091] */
{
    if (NULL_PTR == VersionInfo)
    {
/* [SWS_CDD_UART_00092] */
#if (UART_DEV_ERROR_DETECT == STD_ON)
        Uart_ReportDetError((uint8)UART_VERSIONINFO_ID,
                            (uint8)UART_E_INVALID_POINTER);
#endif /* UART_DEV_ERROR_DETECT == STD_ON */
    }
    else
    {

        /* [SWS_CDD_UART_00090] */
        VersionInfo->vendorID = (uint16)UART_VENDOR_ID;
        VersionInfo->moduleID = (uint8)UART_MODULE_ID;
        VersionInfo->sw_major_version = (uint8)UART_SW_MAJOR_VERSION;
        VersionInfo->sw_minor_version = (uint8)UART_SW_MINOR_VERSION;
        VersionInfo->sw_patch_version = (uint8)UART_SW_PATCH_VERSION;
    }
}

#endif /* (UART_VERSION_INFO_API == STD_ON) */

#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

#ifdef __cplusplus
}
/** @} */

#endif
