/**
*   @file    CDD_I2c_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR I2c - Data structures for the I2c driver.
*   @details Post build structure configurations for the driver initialization.
*
*   @addtogroup I2c
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FCIIC
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
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_I2c.h"
#include "CDD_I2c_Reg.h"
#include "I2c_version.h"

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


#define I2C_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"



/**
* @brief        Definition of FCI2C hardware channel structure.
* @details      Configures the hardware peripheral of a FCI2C channel.
*               Configuration set by calling I2c_Init() API.
*/
I2C_DATA_SECTION static const FCIIC_InitType FCI2c_channelInitPB0Ch0 =
{
    /* Master mode or Slave mode. */
    I2C_MASTER_MODE,

    /* Slave address*/
    0U,

    /* I2C Hw index */
    (uint8)1
};



/**
* @brief        Definition of FCI2C hardware channel structure.
* @details      Configures the hardware peripheral of a FCI2C channel.
*               Configuration set by calling I2c_Init() API.
*/
I2C_DATA_SECTION static const FCIIC_RegCfgType FCI2c_RegInitPB0Ch0 =
{
    /* Master Control Config */
    FCIIC_MCR_DBGEN(0U) |
    FCIIC_MCR_MEN(1U),

    /*MDER Receive and transmit data dma enable*/
    FCIIC_MDER_TDDE(0U) | FCIIC_MDER_RDDE(0U),

    /* Master Config 0 */
    0U,

    /* Master Config 1 */
    FCIIC_MCFGR1_PINCFG(0U) |
    FCIIC_MCFGR1_IGNACK(1U) |
    FCIIC_MCFGR1_PRESCALE(1U),

    /* Master Config 2 */
    FCIIC_MCFGR2_FILTSDA(0U) |
    FCIIC_MCFGR2_FILTSCL(0U) |
    FCIIC_MCFGR2_BUSIDLE(24U),

    /* Master Config 3 */
    FCIIC_MCFGR3_PINLOW(0U),

    /* Clock Config 0 */
    FCIIC_MCCR_DATAVD(1U) |
    FCIIC_MCCR_SETHOLD(2U) |
    FCIIC_MCCR_CLKHI(5U) |
    FCIIC_MCCR_CLKLO(6U),

    /* MFCR Receive & transmit FIFO Watermark*/
    0U,

    /* Slave SCR Config*/
    FCIIC_SCR_FILTEN(1U) |
    FCIIC_SCR_SEN(0U),

    /*SDER Receive and transmit data dma enable*/
    FCIIC_SDER_AVDE(0U) | FCIIC_SDER_RDDE(0U)|FCIIC_SDER_TDDE(0U),
    
    /* Slave Config 1 */
    FCIIC_SCFGR1_ADDRCFG(0U) |
    FCIIC_SCFGR1_ACKSTALL(0U) |
    FCIIC_SCFGR1_TXDSTALL(0U) |
    FCIIC_SCFGR1_RXSTALL(0U) |
    FCIIC_SCFGR1_ADRSTALL(0U),

    /* Slave Config 2 */
    FCIIC_SCFGR2_FILTSDA(0U) |
    FCIIC_SCFGR2_FILTSCL(0U) |
    FCIIC_SCFGR2_DATAVD(0U) |
    FCIIC_SCFGR2_CLKHOLD(0U),

    /* Slave Address Config */
    FCIIC_SAMR_ADDR0(0U),

    /* Tx DMA Instance */
    0,
    /* Tx DMA Channel */
    0,

    /* Rx DMA Instance */
    0,
    /* Rx DMA Channel */
    0
};


/**
* @brief        Definition of I2c hardware channel structure.
* @details      Configures the hardware peripheral of an I2c channel.
*               Configuration set by calling I2c_Init() API.
*/
I2C_DATA_SECTION static const I2c_InitChannelConfigType FCI2c_ConfigPB0[1] =
{

    /* Start of FCI2c_Config[0]*/
    {

        .I2c_CoreId = 0,
        .tFCI2c_Config = &FCI2c_channelInitPB0Ch0,
        .tFCI2c_reg = &FCI2c_RegInitPB0Ch0

    }/* end of FCI2c_ConfigPB0[0]. */

};



/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/**
* @brief          Initialization data for the I2c driver.
* @details        A pointer to such a structure is provided to the I2c initialization routines for configuration.
*
*/
I2C_DATA_SECTION const I2c_ConfigType I2c_Config =
{
    /* Number of channel configurations. */
    (uint8)1,
    /* Pointer to I2c hardware unit configuration. */
    &FCI2c_ConfigPB0
};



#define I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
