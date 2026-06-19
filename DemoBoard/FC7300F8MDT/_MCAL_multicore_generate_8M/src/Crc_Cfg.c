/**
*   @file       Crc_Cfg.c
*   @implements Crc_Cfg.c_Artifact
*   @version 1.5.1
*
*   @brief      AUTOSAR Crc Configuration file for the driver.
*   @details    Precompile parameters and extern configuration.
*
*   @addtogroup CRC_CFG
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Crc_Cfg.h"
#include "Crc.h"

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/
#define CRC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crc_MemMap.h"
/**
* @brief CRC Logic Channel 0 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_0 =
{
    /* uint64  PolynomialValue */ 
    0x1dU,
    /* uint64  SeedValue */ 
    0xFFU,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_NONE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_FXOR,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_8
};
/**
* @brief CRC Logic Channel 1 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_1 =
{
    /* uint64  PolynomialValue */ 
    0xf4acfb13U,
    /* uint64  SeedValue */ 
    0xFFFFFFFFU,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BIT_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_BIT_BYTE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_FXOR,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_32
};


/**
* @brief CRC Logic Channel Type 2 Configuration
**/
CRC_DATA_SECTION static const CRC_ChannelConfiguration LogicChannel[CRC_NUM_LOGIC_CHANNEL_MAX] =
{

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_8BIT_SAE_J1850,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_0
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_1,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_HARDWARE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_E2E_P4,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_1
    }

};

  
  
CRC_DATA_SECTION static const uint8 CrcPartitionMappingPtr[CRC_NUM_LOGIC_CHANNEL_MAX] =
{
    0U,
    1U
};




/**
 * @brief  Crc Ip List Logic Channel Configuration
 * */
CRC_DATA_SECTION const Crc_ConfigType Crc_Config =
{
    /* uint8 Channel number */ 
    CRC_NUM_LOGIC_CHANNEL_MAX,
    /* CRC_ChannelConfiguration */  
    &LogicChannel
#if (CRC_MULTICORE_SUPPORT == STD_ON)
    ,
    /* Multicore mapping */  
    CrcPartitionMappingPtr
#endif
};

#define CRC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crc_MemMap.h"

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
