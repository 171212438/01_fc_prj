/**
*   @file    Mcu_Cmu.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Cmu driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Cmu hardware IP.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_WKU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       08/08/2024    QXW0055       N/A          Add SOSC no wait and PMC&RGM disable API
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/
#ifndef MCU_CMU_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_CMU_H
/* PRQA S 0603 -- */

#include "Platform_Types.h"

#if defined(__cplusplus)
extern "C" {
#endif
/**
 * @addtogroup Mcu_driver_cmu
 * @{
 */

#define CMU_INSTANCE_NUM  5U

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANT-LIKE DEFINES
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/** @brief CMU Instance type. */
typedef enum
{
    CMU_INSTANCE_0   = 0,
    CMU_INSTANCE_1   = 1,
    CMU_INSTANCE_2   = 2,
    CMU_INSTANCE_3   = 3,
    CMU_INSTANCE_4   = 4,
    CMU_INSTANCE_NO  = 5
} CMU_InstanceType;

/**
 * @brief CMU operation return values
 *
 */
typedef enum
{
    CMU_VALID        = 0x0U,         /*!< The CMU status valid */
    CMU_CLK_ERROR    = 0x1U,         /*!< The CMU related clock error */
} CMU_StatusType;

/** @brief CMU interrupt enum for clock interrupt type. */
typedef enum
{
    CMU_INTERRUPT_NONE  = 0,            /*!< No CMU interrupt. */
    CMU_INTERRUPT_LOC   = 1,            /*!< CMU_ST[LOC] bit, Monitor clock is loss. */
    CMU_INTERRUPT_MIS   = 2,            /*!< CMU_ST[MIS] bit, Monitor clock is mismatched. */
} CMU_InterruptType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** @brief CMU Channel ISR callback function prototype */
typedef void (*CMU_ISRCallbackType)(const CMU_InstanceType eInstance, const CMU_InterruptType eStatus);

/** @brief CMU configure structure. */
typedef struct
{
    boolean bIntEnable;                   /*!< CMU_CTRL[IRQ_EN] bit, interrupt enable, if this bit asserted, either LOC or MIS asserted can lead the interrupt.*/
    boolean bLpen;                        /*!< CMU_CTRL[LP_EN] bit, standby mode enable, need STOP_EN asserted.*/
    boolean bSten;                        /*!< CMU_CTRL[STOP_EN] bit, stop mode enable.*/
    boolean bEnable;                      /*!< CMU_CTRL[EN] bit, cmu enable.*/
    uint8 u8RefDiv;                       /*!< CMU_CTRL[REF_DIV] bit, the divider for the reference clock.*/
    uint8 u8PerMonitorWindow;             /*!< CMU_PERIOD[WINDOW] bits, Period Monitor mode WIDOW.*/
    boolean bPerMonitorEnable;            /*!< CMU_PERIOD[EN] bit, Period Monitor mode ENABLE.*/
    uint32 u32Min;                        /*!< CMU_MIN register*/
    uint32 u32Max;                        /*!< CMU_MAX register*/
    uint32 u32RefWindow;                  /*!< CMU_REF_WINDOW register*/
    CMU_ISRCallbackType pNotify;          /*!< CMU interrupt notification pointer */
} CMU_CfgType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

CMU_StatusType CMU_Init(CMU_InstanceType eInstance, const CMU_CfgType *const pInitCfg);

void CMU_Enable(CMU_InstanceType eInstance);

void CMU_Disable(CMU_InstanceType eInstance);

void CMU_EnableInterrupt(CMU_InstanceType eInstance);

void CMU_DisableInterrupt(CMU_InstanceType eInstance);

void CMU_UserIRQHandler(CMU_InstanceType eInstance);

void CMU_ClearInterruptFlag(CMU_InstanceType eInstance);

/** @}*/ /* Mcu_cmu */
#if defined(__cplusplus)
}
#endif

#endif

/** @}*/

