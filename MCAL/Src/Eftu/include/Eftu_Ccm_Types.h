/**
 *   @file    Eftu_Ccm_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - CCM driver specific type definition.
 *   @details This file contains the CCM hardware specific type definition
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CCM
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
*   1.0.0       15/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
#ifndef EFTU_CCM_TYPES_H
#define EFTU_CCM_TYPES_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Eftu_Common_Types.h"
#include "CDD_Eftu_Cfg.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief   Enable trigger for TIM
 */
#define EFTU_CCM_TRIG_TIM_ENABLE                0x10U
/**
 * @brief   Enable trigger for CCU0 of TOM0
 */
#define EFTU_CCM_TRIG_TOM0_CCU0_ENABLE          0x8U
/**
 * @brief   Enable trigger for CCU0 of TOM1
 */
#define EFTU_CCM_TRIG_TOM1_CCU0_ENABLE          0x4U
/**
 * @brief   Enable trigger for CCU1 of TOM0
 */
#define EFTU_CCM_TRIG_TOM0_CCU1_ENABLE          0x2U
/**
 * @brief   Enable trigger for CCU0 of TOM1
 */
#define EFTU_CCM_TRIG_TOM1_CCU1_ENABLE          0x1U

/**
 * @brief   OUT[3:2] switch with OUT_T[1:0]
 */
#define EFTU_CCM_TOM_SWAP_OUT_3_2_OUT_T_1_0     0x1U
/**
 * @brief   OUT[7:6] switch with OUT_T[5:4]
 */
#define EFTU_CCM_TOM_SWAP_OUT_7_6_OUT_T_5_4     0x2U
/**
 * @brief   OUT[11:10] switch with OUT_T[9:8]
 */
#define EFTU_CCM_TOM_SWAP_OUT_11_10_OUT_T_9_8   0x4U
/**
 * @brief   OUT[15:14] switch with OUT_T[13:12]
 */
#define EFTU_CCM_TOM_SWAP_OUT_15_14_OUT_T_13_12 0x8U
/**
 * @brief   OUT[7:4] switch with OUT_T[3:0]
 */
#define EFTU_CCM_TOM_SWAP_OUT_7_4_OUT_T_3_0     0x10U
/**
 * @brief   OUT[15:12] switch with OUT_T[11:8]
 */
#define EFTU_CCM_TOM_SWAP_OUT_15_12_OUT_T_11_8  0x20U

/**
 * @brief   Enable TOM CCU0_IRQ trigger DMA request
 */
#define EFTU_CCM_DMA_TOM_TRIG_CCU0              0x1U
/**
 * @brief   Enable TOM CCU1_IRQ trigger DMA request
 */
#define EFTU_CCM_DMA_TOM_TRIG_CCU1              0x2U

/**
 * @brief   Count of CMU clock resources
 */
#define EFTU_CCM_CMU_CLOCK_RES_COUNT            8U
/**
 * @brief   Count of TIM input sources
 */
#define EFTU_CCM_TIM_IN_SRC_COUNT               8U
/**
 * @brief   Count of TIM auxiliary inputs
 */
#define EFTU_CCM_TIM_AUX_IN_COUNT               8U
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/**
 * @brief Enumeration type defining the different debug modes for EFTU CCM.
 *
 */
typedef enum
{
    EFTU_CCM_DEBUG_RUN         = 0U, /**< Run mode */
    EFTU_CCM_DEBUG_TOM_HALT    = 1U, /**< TOM halt mode, register can access, flag not set */
    EFTU_CCM_DEBUG_OUT_FREEZEN = 2U, /**< TOM freeze mode, register can access, flag can set, out
                                        all frozen */
    EFTU_CCM_DEBUG_ALL_HALT = 3U,    /**< EFTU halt mode, TOM/TIM/TBU/DTM all halt,
                                          register can access,flag not set */
} EFTU_CCM_DebugModeType;

/**
 * @brief Enumeration for selecting CMU clock source in EFTU module
 *
 */
typedef enum
{
    EFTU_CCM_CMU_CLOCK_RES = 0U,   /**< Use CMU_CLK_RES signal of CMU as CLK_RES signal within
                                        Cluster. */
    EFTU_CCM_CMU_CLOCK_RES8 = 1U,  /**< Use CMU_CLK_RES[8] signal of CMU as CLK_RES signal within
                                        Cluster. */
    EFTU_CCM_TIM_EXT_CAPTURE = 2U, /**< Use TIM_EXT_CAPTURE of TIM signal as CLK_RES signal within
                                        cluster. */
} EFTU_CCM_CmuClkSelectType;

/**
 * @brief Enumeration for selecting TIM_IN Source in EFTU module
 *
 */
typedef enum
{
    EFTU_CCM_TIM_INSRC_PAD_IN = 0U, /**< from pad in */
    EFTU_CCM_TIM_INSRC_EXT_TRIGGER, /**< from external trigger */
} EFTU_CCM_TimInSrcType;

/**
 * @brief Enumeration for selecting the source of tim_aux_in in EFTU module
 *
 */
typedef enum
{
    EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 = 0U, /**< TIM_AUX_SELx source is from EFTU0 OUT0 */
    EFTU_CCM_TIM_AUX_IN_EFTU1_OUT0 = 1U, /**< TIM_AUX_SELx source is from EFTU1 OUT0 */
    EFTU_CCM_TIM_AUX_IN_EFTU2_OUT0 = 2U, /**< TIM_AUX_SELx source is from EFTU2 OUT0 */
    EFTU_CCM_TIM_AUX_IN_EFTU0_OUT1 = 3U, /**< TIM_AUX_SELx source is from EFTU0 OUT1 */
    EFTU_CCM_TIM_AUX_IN_EFTU1_OUT1 = 4U, /**< TIM_AUX_SELx source is from EFTU1 OUT1 */
    EFTU_CCM_TIM_AUX_IN_EFTU2_OUT1 = 5U, /**< TIM_AUX_SELx source is from EFTU2 OUT1 */
    EFTU_CCM_TIM_AUX_IN_ALWAYS_LOW = 6U, /**< TIM_AUX_SELx source is always low */
} EFTU_CCM_TimAuxInSrcType;

/**
 * @brief Enumeration for selecting HRPWM output
 *
 */
typedef enum
{
    EFTU_CCM_HRPWM_SRC_OUT03_OUT_T03 = 0x0U, /**< HRPWM output uses {OUT[3:0],OUT_T[3:0]} */
    EFTU_CCM_HRPWM_SRC_OUT47_OUT_T47 = 0x1U, /**< HRPWM output uses {OUT[7:4],OUT_T[7:4} */
    EFTU_CCM_HRPWM_SRC_OUT07         = 0x2U, /**< HRPWM output uses {OUT[7:0]} */
    EFTU_CCM_HRPWM_SRC_OUT_T07       = 0x3U, /**< HRPWM output uses {OUT_T[7:0]} */
} EFTU_CCM_HrPwmSwapType;

/**
 * @brief Enumeration for selecting TOM multiplex control
 *
 */
typedef enum
{
    EFTU_CCM_TOM0_CH0_TO_TOM1_CH0 = 0x0U, /**< TOM1CH0 uses TOM0CH0 trig_out as trig_in */
    EFTU_CCM_TOM0_CH7_TO_TOM1_CH0 = 0x1U, /**< TOM1CH0 uses TOM0CH7 trig_out with 1cycle delay as
                                             trig_in */
} EFTU_CCM_TomChTrigInType;

/**
 * @brief Enumeration for selecting DMA request
 *
 */
typedef enum
{
    EFTU_CCM_DMA_REQ_SRC_TOM_1 = 1U, /**< DMA request source uses TOM1 */
    EFTU_CCM_DMA_REQ_SRC_TOM_0 = 2U, /**< DMA request source uses TOM0 */
    EFTU_CCM_DMA_REQ_SRC_TIM   = 3U  /**< DMA request source uses TIM */
} EFTU_CCM_DmaReqSrcType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Defines a structure for configuring the MUX channel of EFTU-GTOM modules
 *
 */
typedef struct
{
    uint8             u8GtomChannel;   /**< GTOM channel number */
    EFTU_InstanceType eInstance;       /**< EFTU instance type */
    uint8             u8ModuleChannel; /**< Module channel number */
} Eftu_CcmGtomMuxChannelType;

/**
 * @brief Defines a structure for configuring the MUX of EFTU-GTOM modules
 *
 */
typedef struct
{
    uint8                       u8MuxChannelCount; /**< Number of MUX channels */
    Eftu_CcmGtomMuxChannelType *pChannel;          /**< Pointer to MUX channel configuration */
} Eftu_CcmGtomMuxType;

/**
 * @brief Defines a structure for configuring the trigger MUX channel in the EFTU module
 *
 */
typedef struct
{
    uint8             u8TrigChannel; /**< Trigger channel number */
    EFTU_InstanceType eInstance;     /**< EFTU instance type */
    uint8             u8EnableFlag;  /**< Enable flag */
} Eftu_CcmTrigMuxChannelType;

/**
 * @brief Defines a structure for configuring the trigger MUX in the EFTU module
 *
 */
typedef struct
{
    uint8                       u8MuxChannelCount; /**< Number of MUX channels */
    Eftu_CcmTrigMuxChannelType *pChannel;          /**< Pointer to MUX channel configuration */
} Eftu_CcmTrigMuxType;

/**
 * @brief Defines a structure for configuring an instance of the EFTU-CCM module
 *
 */
typedef struct
{
    EFTU_InstanceType         eInstance;                                /**< EFTU instance type */
    EFTU_CCM_DebugModeType    eDebugMode;                               /**< Debug mode */
    EFTU_CCM_CmuClkSelectType aCmuClkRes[EFTU_CCM_CMU_CLOCK_RES_COUNT]; /**< Array of CMU clock
                                                                           resources */
    EFTU_CCM_TimInSrcType aTimIn[EFTU_CCM_TIM_IN_SRC_COUNT]; /**< Array of TIM input sources */
    uint8 aTimAuxIn[EFTU_CCM_TIM_AUX_IN_COUNT];              /**< Array of auxiliary TIM inputs */
    EFTU_CCM_HrPwmSwapType   eHrpwmSwap;                     /**< HRPWM swap type */
    EFTU_CCM_TomChTrigInType eTomTrigIn;                     /**< TOM trigger input type */
    uint32                   u32TomSwapFlag;                 /**< TOM swap flag */
    struct
    {
        EFTU_CCM_DmaReqSrcType eReqSource;    /**< DMA request source */
        uint8                  u8Channel;     /**< Channel number */
        uint8                  u8TomTrigFlag; /**< TOM trigger flag */
    } aDmaReq[EFTU_CCM_DMA_REQ_COUNT];
} Eftu_CcmInsConfigType;

/**
 * @brief Defines a structure for the global configuration of the EFTU-CCM module
 *
 */
typedef struct
{
    uint8                  u8InstanceCount; /**< Number of instances */
    Eftu_CcmInsConfigType *pCcmConfig; /**<  Pointer to EFTU-CCM module instance configuration */
} Eftu_CcmConfigType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#ifdef __cplusplus
}
#endif

#endif /* EFTU_CCM_TYPES_H */
/** @} */
