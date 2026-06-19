/**
*   @file    Gpt_Ftu_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Ftu - hardware specific type definition
*   @details This file contains the Gpt_Ftu Autosar hardware specific type definition
*
*   @addtogroup Gpt_Ftu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_FTU
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
*   0.1.0       24/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_FTU_TYPES_H
#define GPT_FTU_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/** @brief Ftu debug mode */
typedef enum
{
    GPT_FTU_DBG_COUNTER_STOP_CHN_WORKS = 0U,            /**< FTU counter stopped, channel works as function mode. */
    GPT_FTU_DBG_COUNTER_STOP_CHN_FORCE_SAFE = 1U,       /**< FTU counter stopped, channel output force to safe state. */
    GPT_FTU_DBG_COUNTER_STOP_CHN_FROZEN = 2U,           /**< FTU counter stopped, channel output is frozen. */
    GPT_FTU_DBG_COUNTER_WORKS_CHN_WORKS = 3U            /**< FTU counter works as function mode, channel works as function mode. */
} Gpt_FtuDebugModeType;

/** @brief Ftu counter prescaler */
typedef enum
{
    GPT_FTU_DIV_1 = 0U,
    GPT_FTU_DIV_2,
    GPT_FTU_DIV_4,
    GPT_FTU_DIV_8,
    GPT_FTU_DIV_16,
    GPT_FTU_DIV_32,
    GPT_FTU_DIV_64,
    GPT_FTU_DIV_128
} Gpt_FtuPrescalerType;

/** @brief Ftu module clock source */
typedef enum
{
    GPT_FTU_MDOULE_NO_CLK        = 0U,
    GPT_FTU_MDOULE_BUS_CLK       = 1U,
    GPT_FTU_MDOULE_PCC_CLK       = 3U,
    GPT_FTU_MODULE_EXTERNAL_TCK0 = 4U,
    GPT_FTU_MODULE_EXTERNAL_TCK1 = 5U,
    GPT_FTU_MODULE_EXTERNAL_TCK2 = 6U,
} Gpt_FtuModuleClkSrcType;

/**
 * @brief
 */
typedef struct
{
    Gpt_FtuPrescalerType eFtuPrescaler;
    Gpt_FtuModuleClkSrcType eFtuClkSrc;
} Gpt_ConfigChannelFtuType;
/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Number of counter cycles missed due to overflow
*/
#define GPT_FTU_OVERFLOW_PAD_U32           ((uint32)1U)

/**
* @brief Highest possible value for Ftu channels
*/
#define GPT_FTU_CNT_MAX_VALUE_U32          ((uint32)0xFFFFuL)

/**
* @brief Highest possible value for Ftu1/2 channels
*/
#define GPT_FTU_24BIT_CNT_MAX_VALUE_U32    ((uint32)0xFFFFFFuL)

/**
* @brief FTU 0
*/
#define GPT_FTU_0    ((uint8)0)
/**
* @brief FTU 1
*/
#define GPT_FTU_1    ((uint8)1)
/**
* @brief FTU 2
*/
#define GPT_FTU_2    ((uint8)2)
/**
* @brief FTU 3
*/
#define GPT_FTU_3    ((uint8)3)
/**
* @brief FTU 4
*/
#define GPT_FTU_4    ((uint8)4)
/**
* @brief FTU 5
*/
#define GPT_FTU_5    ((uint8)5)
/**
* @brief FTU 6
*/
#define GPT_FTU_6    ((uint8)6)
/**
* @brief FTU 7
*/
#define GPT_FTU_7    ((uint8)7)

/**
* @brief FTU 8
*/
#define GPT_FTU_8    ((uint8)8)

/**
* @brief FTU 9
*/
#define GPT_FTU_9    ((uint8)9)

/**
* @brief FTU 10
*/
#define GPT_FTU_10    ((uint8)10)

/**
* @brief FTU 11
*/
#define GPT_FTU_11    ((uint8)11)

/**
* @brief FTU channel 0
*/
#define GPT_FTU_CH_0    ((uint8)0x00)
/**
* @brief FTU channel 1
*/
#define GPT_FTU_CH_1    ((uint8)0x01)
/**
* @brief FTU channel 2
*/
#define GPT_FTU_CH_2    ((uint8)0x02)
/**
* @brief FTU channel 3
*/
#define GPT_FTU_CH_3    ((uint8)0x03)
/**
* @brief FTU channel 4
*/
#define GPT_FTU_CH_4    ((uint8)0x04)
/**
* @brief FTU channel 5
*/
#define GPT_FTU_CH_5    ((uint8)0x05)
/**
* @brief FTU channel 6
*/
#define GPT_FTU_CH_6    ((uint8)0x06)
/**
* @brief FTU channel 7
*/
#define GPT_FTU_CH_7    ((uint8)0x07)



/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* GPT_FTU_TYPES_H */
/** @} */
