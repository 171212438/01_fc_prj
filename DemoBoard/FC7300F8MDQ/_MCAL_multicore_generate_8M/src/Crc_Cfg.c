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
* @brief CRC Logic Channel 2 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_2 =
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
* @brief CRC Logic Channel 3 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_3 =
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
* @brief CRC Logic Channel 4 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_4 =
{
    /* uint64  PolynomialValue */ 
    0x2fU,
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
* @brief CRC Logic Channel 5 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_5 =
{
    /* uint64  PolynomialValue */ 
    0x2fU,
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
* @brief CRC Logic Channel 6 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_6 =
{
    /* uint64  PolynomialValue */ 
    0x2fU,
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
* @brief CRC Logic Channel 7 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_7 =
{
    /* uint64  PolynomialValue */ 
    0x1021U,
    /* uint64  SeedValue */ 
    0xFFFFU,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_NONE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_NORMAL,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_16
};
/**
* @brief CRC Logic Channel 8 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_8 =
{
    /* uint64  PolynomialValue */ 
    0x1021U,
    /* uint64  SeedValue */ 
    0xFFFFU,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_NONE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_NORMAL,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_16
};
/**
* @brief CRC Logic Channel 9 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_9 =
{
    /* uint64  PolynomialValue */ 
    0x1021U,
    /* uint64  SeedValue */ 
    0xFFFFU,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_NONE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_NORMAL,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_16
};
/**
* @brief CRC Logic Channel 10 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_10 =
{
    /* uint64  PolynomialValue */ 
    0x8005U,
    /* uint64  SeedValue */ 
    0x0U,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BIT_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_BIT_BYTE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_NORMAL,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_16
};
/**
* @brief CRC Logic Channel 11 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_11 =
{
    /* uint64  PolynomialValue */ 
    0x8005U,
    /* uint64  SeedValue */ 
    0x0U,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BIT_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_BIT_BYTE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_NORMAL,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_16
};
/**
* @brief CRC Logic Channel 12 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_12 =
{
    /* uint64  PolynomialValue */ 
    0x8005U,
    /* uint64  SeedValue */ 
    0x0U,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BIT_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_BIT_BYTE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_NORMAL,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_16
};
/**
* @brief CRC Logic Channel 13 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_13 =
{
    /* uint64  PolynomialValue */ 
    0x4c11db7U,
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
* @brief CRC Logic Channel 14 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_14 =
{
    /* uint64  PolynomialValue */ 
    0x4c11db7U,
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
* @brief CRC Logic Channel 15 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_15 =
{
    /* uint64  PolynomialValue */ 
    0x4c11db7U,
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
* @brief CRC Logic Channel 16 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_16 =
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
* @brief CRC Logic Channel 17 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_17 =
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
* @brief CRC Logic Channel 18 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_18 =
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
* @brief CRC Logic Channel 19 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_19 =
{
    /* uint64  PolynomialValue */ 
    0x42f0e1eba9ea3693U,
    /* uint64  SeedValue */ 
    0xFFFFFFFFFFFFFFFFU,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BIT_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_BIT_BYTE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_FXOR,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_64
};
/**
* @brief CRC Logic Channel 20 Configuration
**/
CRC_DATA_SECTION static const Crc_InitType LogicChannelCfg_20 =
{
    /* uint64  PolynomialValue */ 
    0x42f0e1eba9ea3693U,
    /* uint64  SeedValue */ 
    0xFFFFFFFFFFFFFFFFU,
    /* enum WriteDataSwap */ 
    (CRC_WriteDataSwapType)WRITE_DATASWAP_BIT_BYTE, 
    /* enum ReadDataSwap */ 
    (CRC_ReadDataSwapType)READ_DATASWAP_BIT_BYTE,
    /* enum FOXREnable */ 
    (CRC_ReadDataFXORType)READ_DATA_FXOR,
    /* enum BitWidth */ 
    (CRC_BitWidthType)CRC_BIT_64
};


/**
* @brief CRC Logic Channel Type 21 Configuration
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
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_E2E_P4,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_1
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_HARDWARE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_8BIT_SAE_J1850,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_2
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_RUNTIME_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_8BIT_SAE_J1850,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_3
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_8BIT_H2F,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_4
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_HARDWARE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_8BIT_H2F,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_5
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_RUNTIME_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_8BIT_H2F,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_6
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_16BIT_CCITT_FALSE,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_7
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_HARDWARE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_16BIT_CCITT_FALSE,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_8
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_RUNTIME_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_16BIT_CCITT_FALSE,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_9
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_16BIT_ARC,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_10
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_HARDWARE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_16BIT_ARC,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_11
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_RUNTIME_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_16BIT_ARC,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_12
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_ETHERNET,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_13
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_HARDWARE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_ETHERNET,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_14
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_RUNTIME_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_ETHERNET,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_15
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_E2E_P4,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_16
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_HARDWARE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_E2E_P4,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_17
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_RUNTIME_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_32BIT_E2E_P4,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_18
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_TABLE_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_64BIT_ECMA,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_19
    },

    {
        /* uint8 HwInstance */ 
        CRC_HW_INSTANCE_0,
        /* uint8 CalculationType */ 
        (Crc_CalculationType)CRC_RUNTIME_CALCULATION,
        /* uint8 CrcProtocolInfo */ 
        (Crc_StandardType)CRC_PROTOCOL_64BIT_ECMA,
        /* LogicChannelConfig */ 
        &LogicChannelCfg_20
    }

};

  
  
CRC_DATA_SECTION static const uint8 CrcPartitionMappingPtr[CRC_NUM_LOGIC_CHANNEL_MAX] =
{
    0U,
    1U,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU
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
