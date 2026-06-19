/**
*   @file    Gpt_EftuTom_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt - hardware specific type definition
*   @details This file contains the Gpt Autosar hardware specific type definition
*
*   @addtogroup GPT_EftuTom
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_EFTUTOM
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
*   0.8.0       28/11/2024    QXW0074       N/A          Gpt_EftuTom Initial version
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_EFTUTOM_TYPES_H
#define GPT_EFTUTOM_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief EFTU TOM Channels defines
*/
#define EFTU_TOM_CH_0                  ((uint8)0)
#define EFTU_TOM_CH_1                  ((uint8)1)
#define EFTU_TOM_CH_2                  ((uint8)2)
#define EFTU_TOM_CH_3                  ((uint8)3)
#define EFTU_TOM_CH_4                  ((uint8)4)
#define EFTU_TOM_CH_5                  ((uint8)5)
#define EFTU_TOM_CH_6                  ((uint8)6)
#define EFTU_TOM_CH_7                  ((uint8)7)

/**
* @brief EFTU 0 TOM 0
*/
#define GPT_EFTU_0_TOM_0    ((uint8)0)

/**
* @brief EFTU 0 TOM 0
*/
#define GPT_EFTU_0_TOM_1    ((uint8)1)

/**
* @brief EFTU 0 TOM 0
*/
#define GPT_EFTU_1_TOM_0    ((uint8)2)

/**
* @brief EFTU 0 TOM 0
*/
#define GPT_EFTU_1_TOM_1    ((uint8)3)

/**
* @brief EFTU 0 TOM 0
*/
#define GPT_EFTU_2_TOM_0    ((uint8)4)

/**
* @brief EFTU 0 TOM 0
*/
#define GPT_EFTU_2_TOM_1    ((uint8)5)

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/** @brief EFTU TOM Channel clock source */
typedef enum
{
    GPT_EFTU_CMU_CLK_RES_0          = 0u,
    GPT_EFTU_CMU_CLK_RES_1          = 1u,
    GPT_EFTU_CMU_CLK_RES_2          = 2u,
    GPT_EFTU_CMU_CLK_RES_3          = 3u,
    GPT_EFTU_CMU_CLK_RES_4          = 4u,
    GPT_EFTU_CMU_CLK_RES_5          = 5u,
    GPT_EFTU_CMU_CLK_RES_6          = 6u,
    GPT_EFTU_CMU_CLK_RES_7          = 7u
} Gpt_EftuTomClockSourceType;

/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: When GPT_TPU_USED was defined, this Gpt_ConfigChannelTpuType will be used. */
/**
 * @brief
 */
typedef struct
{
    Gpt_EftuTomClockSourceType eEftuTomClkSrc;
} Gpt_ConfigChannelEftuTomType;
/* PRQA S 1535 -- */
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_EFTUTOM_TYPES_H*/
/** @} */
