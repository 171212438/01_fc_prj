/**
*   @file    Spi_verson.h
*   @version 1.5.1
*
*   @brief   AUTOSAR  Spi - driver verion information.
*   @details This file contains the verion information of Spi Autosar driver.
*
*   @addtogroup SPI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SPI
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
*   0.1.0       14/07/2023    QXW0071       N/A          SPI Initial Version
*   0.2.0       03/10/2023    QXW0071       N/A          Add support for multi-core
*   0.3.0       19/10/2023    QXW0071       N/A          Optimize code to comply with Misra-C rules
*   0.4.0       17/11/2023    QXW0071       N/A          Add workaround when enable CS Continuous and sample on first edge.
*   0.5.0       01/16/2024    QXW0071       N/A          Optimize Code
*   0.6.0       02/28/2024    QXW0103       N/A          Add support for FC7240
==================================================================================================*/
#ifndef SPI_VERSION_H
#define SPI_VERSION_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SPI_AR_RELEASE_MAJOR_VERSION        4
#define SPI_AR_RELEASE_MINOR_VERSION        6
#define SPI_AR_RELEASE_REVISION_VERSION     0
#define SPI_SW_MAJOR_VERSION                1
#define SPI_SW_MINOR_VERSION                5
#define SPI_SW_PATCH_VERSION                1
#define SPI_VENDOR_ID                       174
#define SPI_MODULE_ID                       83

#ifdef __cplusplus
}
#endif

#endif /*SPI_VERSION_H*/
/** @} */

/*==================================================================================================
Version 0.4.0 : 

    [Fix bug] 
        In all previous verion, When "Spi Data shift edge" is configured to "leading" and "CS continuous" is configured to "true" in EB tresos, SPI driver can not send and receive data properly.
        This version fix this problem,but there are several restrictions on configuration. Please refer to chapter 4.4 of Spi_User_Manual.


Version 0.4.0-update2: 

    [Fix bug] 
        In version 0.4.0 and 0.4.0-update1, when "Spi Data shift edge" is configured to "leading" and "CS continuous" is configured to "false" in EB tresos, SPI driver can not send and receive data properly.


Version 0.4.0-update3: 

    [Fix bug] 
        In version 0.4.0 to 0.4.0-update2, when "Spi Level Delivered" is configured to '1', there will be compile error about function 'Spi_LL_AdjustDataInWordBeforeSend' and Spi_LL_AdjustDataInWordAfterReceive.
        If you want to avoid this problem but don't want to update you local Mcal source code to this version, please configure "Spi Level Delivered" to '2'.
    [Macro name change] 
        The name format of these macros has been changed in this version: Channel macro(SpiConf_SpiChannel_XXXX),Job macro(SpiConf_SpiJob_XXXX),Sequence macro(SpiConf_SpiSequence_XXXX).
        If you already have a local project and plan to update your MCAL source code to this version(and newer versions), it's neccessary to update the name of macros in your local project from "SPI_CONF_CHANNEL_XXX" to "SpiConf_SpiSequence_XXX".
    [Fix bug]
        In version 0.4.0 to 0.4.0-update2, when 'FC7300F4MD' series chip type is configured in 'COMMON' module, "FCSPI_0/FCSPI_1/FCSPI_2/FCSPI_3/FCSPI_4/FCSPI_5" can be configured in SPI module.
        However,the last SPI instance 'FC7300F4MD' supported is not "FCSPI_5" but "FCSPI_7".

==================================================================================================*/
