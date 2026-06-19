/**
 *   @file    Icu_Port.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - PORT driver source file.
 *   @details PORT source file, containing the variables and functions that are exported by the
 *            PORT driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : PORT
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
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
==================================================================================================*/
/* PRQA S 2071,5087 EOF  #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 0306 EOF #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
   object and an integer type Cast between a pointer to object and an integral type. REASON: This is
   a normal usage.
*/
/* PRQA S 3006,1006 EOF #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
                       #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented
   1006:[E] This in-line assembler construct is a language extension. The code has been ignored.
   3006:This function contains a mixture of in-line assembler statements and C statements.
   REASON: This is the normal usage of macros.
*/
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Port.h"
#include "SchM_Icu.h"
#include "Port_Reg.h"
#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
#include "Gpio_Reg.h"
#endif

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define ICU_START_SEC_CONST_32
#include "Icu_MemMap.h"
#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
   object and an integer type 0306:Cast between a pointer to object and an integral type. REASON:
   This is the GPIO base type initialization.
*/
ICU_DATA_SECTION static GPIO_Type *const GPIO_PTRS[] = GPIO_BASE_PTRS;
/* PRQA S 0306 -- */
#endif
#define ICU_STOP_SEC_CONST_32
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define ICU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Icu_MemMap.h"
/*Flag of Port channels those used by Icu driver */
ICU_DATA_SECTION static uint32 s_aPortMask[ICU_TOTAL_PORT_NUMBER] = { 0 };
#define ICU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

LOCAL_INLINE void   ICU_PORT_HWA_ClearPinInterruptFlag(PORT_Type *const pPort, uint8 u8Pin);
LOCAL_INLINE uint32 ICU_PORT_HWA_GetPinInterruptFlag(const PORT_Type *const pPort, uint8 u8Pin);
LOCAL_INLINE uint32 ICU_PORT_HWA_GetPinInterruptMode(const PORT_Type *const pPort, uint8 u8Pin);
#if (defined ICU_PORT_ISR_USED)
LOCAL_INLINE uint32 ICU_PORT_HWA_GetPortInterruptFlag(const PORT_Type *const pPort);
LOCAL_INLINE void   ICU_PORT_HWA_ClearPortInterruptFlag(PORT_Type *const pPort, uint32 u32Mask);
#endif
LOCAL_INLINE void ICU_PORT_HWA_SetPinInterruptMode(PORT_Type *const      pPort,
                                                   uint8                 u8Pin,
                                                   Icu_PortIntConfigType eIntConfig);
#if (defined ICU_PORT_ISR_USED)
LOCAL_INLINE void Icu_Port_ProcessInterrupt(const Icu_PortInstanceType ePortInstance);
#if (defined ICU_PORT_A_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_A_ISR);
#endif

#if (defined ICU_PORT_B_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_B_ISR);
#endif

#if (defined ICU_PORT_C_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_C_ISR);
#endif

#if (defined ICU_PORT_D_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_D_ISR);
#endif

#if (defined ICU_PORT_E_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_E_ISR);
#endif

#if (defined ICU_PORT_F_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_F_ISR);
#endif

#if (defined ICU_PORT_G_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_G_ISR);
#endif

#if (defined ICU_PORT_H_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_H_ISR);
#endif

#if (defined ICU_PORT_I_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_I_ISR);
#endif

#endif

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief Clear pin interrupt flag
 *
 * @param pPort -Port instance
 * @param u8Pin -Pin number
 */
LOCAL_INLINE void ICU_PORT_HWA_ClearPinInterruptFlag(PORT_Type *const pPort, uint8 u8Pin)
{
    pPort->PCR[u8Pin] |= (uint32)PORT_PCR_ISF_MASK;
}

/**
 * @brief Get pin interrupt flag
 *
 * @param pPort -Port instance
 * @param u8Pin -Pin number
 * @return      Pin interrupt flag
 */
LOCAL_INLINE uint32 ICU_PORT_HWA_GetPinInterruptFlag(const PORT_Type *const pPort, uint8 u8Pin)
{
    uint32 u32IsfValue = (uint32)(pPort->PCR[u8Pin]);
    u32IsfValue &= (uint32)PORT_PCR_ISF_MASK;
    return u32IsfValue;
}

/**
 * @brief Get pin interrupt mode
 *
 * @param pPort -Port instance
 * @param u8Pin -Pin number
 * @return      pin interrupt mode
 */
LOCAL_INLINE uint32 ICU_PORT_HWA_GetPinInterruptMode(const PORT_Type *const pPort, uint8 u8Pin)
{
    uint32 u32IrqcValue = (uint32)(pPort->PCR[u8Pin]);
    u32IrqcValue &= (uint32)PORT_PCR_IRQC_MASK;
    return (u32IrqcValue >> PORT_PCR_IRQC_SHIFT);
}

#if (defined ICU_PORT_ISR_USED)
/**
 * @brief Get port interrupt flag
 *
 * @param pPort -Port instance
 * @return      port interrupt flag
 */
LOCAL_INLINE uint32 ICU_PORT_HWA_GetPortInterruptFlag(const PORT_Type *const pPort)
{
    return (uint32)(pPort->ISFR);
}

/**
 * @brief Clear port interrupt flag
 *
 * @param pPort     -Port instance
 * @param u32Mask   -Mask for clear
 *
 */
/**/
LOCAL_INLINE void ICU_PORT_HWA_ClearPortInterruptFlag(PORT_Type *const pPort, uint32 u32Mask)
{
    pPort->ISFR = u32Mask;
}
#endif

/**
 * @brief Set pin interrupt mode
 *
 * @param pPort         -Port instance
 * @param u8Pin         -Pin number
 * @param eIntConfig    -Pin IRQC configuration value
 */
LOCAL_INLINE void ICU_PORT_HWA_SetPinInterruptMode(PORT_Type *const      pPort,
                                                   uint8                 u8Pin,
                                                   Icu_PortIntConfigType eIntConfig)
{
    uint32 u32TempRegVal = (uint32)(pPort->PCR[u8Pin]);
    pPort->PCR[u8Pin] = ((u32TempRegVal & ~(uint32)PORT_PCR_IRQC_MASK) | PORT_PCR_IRQC(eIntConfig));
    /* PRQA S 3469 -- */
}
#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Read port data input, this register indicate data on pad.
 *
 * @param pGpio Gpio instance
 * @return PDIR register value
 */
LOCAL_INLINE uint32 ICU_GPIO_HWA_ReadPortDataInput(const GPIO_Type *const pGpio)
{
    return pGpio->PDIR;
}
#endif
/**
 * @brief Init a port module of Icu
 *
 * @param ePortInstance     -Port instance
 *
 * @implements SWDESG_ICU_130
 */
ICU_TEXT_SECTION void Icu_Port_Init(const Icu_PortInstanceType ePortInstance)
{
    /*Clear Port mask*/
    s_aPortMask[ePortInstance] = 0U;
}

#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief Deinit a port module of Icu
 *
 * @param ePortInstance     -Port instance
 *
 * @implements SWDESG_ICU_131
 */
ICU_TEXT_SECTION void Icu_Port_DeInit(const Icu_PortInstanceType ePortInstance)
{
    /*Clear Port mask*/
    s_aPortMask[ePortInstance] = 0U;
}
#endif /* ICU_DE_INIT_API == STD_ON */
/**
 * @brief Init a port channel of Icu
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 *
 * @implements SWDESG_ICU_132
 */
ICU_TEXT_SECTION void Icu_Port_ChannelInit(const Icu_PortInstanceType ePortInstance,
                                           const uint8                u8Channel)
{
    PORT_Type *pPortPtr = PORT_PTRS[ePortInstance];
    ICU_PORT_HWA_SetPinInterruptMode(pPortPtr, u8Channel, ICU_PORT_IRQ_DISABLE);
    ICU_PORT_HWA_ClearPinInterruptFlag(pPortPtr, u8Channel);
}

/**
 * @brief Start a port channel of Icu
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 * @param eIntConfig        -Pin IRQC configuration value
 *
 * @implements SWDESG_ICU_133
 */
ICU_TEXT_SECTION void Icu_Port_ChannelStart(const Icu_PortInstanceType  ePortInstance,
                                            const uint8                 u8Channel,
                                            const Icu_PortIntConfigType eIntConfig)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_60();
    s_aPortMask[ePortInstance] |= ((uint32)1u << u8Channel);
    ICU_PORT_HWA_SetPinInterruptMode(PORT_PTRS[ePortInstance], u8Channel, eIntConfig);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_60();
}

/**
 * @brief Stop a port channel of Icu
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 *
 * @implements SWDESG_ICU_134
 */
ICU_TEXT_SECTION void Icu_Port_ChannelStop(const Icu_PortInstanceType ePortInstance,
                                           const uint8                u8Channel)
{
    PORT_Type *pPortPtr = PORT_PTRS[ePortInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_64();
    ICU_PORT_HWA_SetPinInterruptMode(pPortPtr, u8Channel, ICU_PORT_IRQ_DISABLE);
    ICU_PORT_HWA_ClearPinInterruptFlag(pPortPtr, u8Channel);
    s_aPortMask[ePortInstance] &= ~(((uint32)1u << u8Channel));
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_64();
}
#if (ICU_SET_MODE_API == STD_ON)

/**
 * @brief Set Pin to Sleep Mode
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 *
 * @implements SWDESG_ICU_139
 */
ICU_TEXT_SECTION void Icu_Port_SetSleepMode(const Icu_PortInstanceType ePortInstance,
                                            const uint8                u8Channel)
{
    PORT_Type *pPortPtr = PORT_PTRS[ePortInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_57();
    ICU_PORT_HWA_SetPinInterruptMode(pPortPtr, u8Channel, ICU_PORT_IRQ_DISABLE);
    ICU_PORT_HWA_ClearPinInterruptFlag(pPortPtr, u8Channel);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_57();
}
#endif
/**
 * @brief Set activation edge of a port channel
 *
 * @param ePortInstance         -Port instance
 * @param u8Channel             -Pin number
 * @param eActivationEdge       -Pin IRQC configuration value
 *
 * @implements SWDESG_ICU_135
 */
ICU_TEXT_SECTION void Icu_Port_SetActivationCondition(const Icu_PortInstanceType  ePortInstance,
                                                      const uint8                 u8Channel,
                                                      const Icu_PortIntConfigType eActivationEdge)
{
    PORT_Type *pPortPtr = PORT_PTRS[ePortInstance];
    /*Only set IRQC when Irq is enable*/
    if ((uint32)ICU_PORT_IRQ_DISABLE != ICU_PORT_HWA_GetPinInterruptMode(pPortPtr, u8Channel))
    {
        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_62();
        ICU_PORT_HWA_SetPinInterruptMode(pPortPtr, u8Channel, eActivationEdge);
        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_62();
    }
}

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the port channel
 *
 * @param ePortInstance         -Port instance
 * @param u8Channel             -Pin number
 * @return                      state of the channel
 *
 * @implements SWDESG_ICU_136
 */
ICU_TEXT_SECTION boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance,
                                                const uint8                u8Channel)
{
    boolean    bState     = FALSE;
    PORT_Type *pPortPtr   = PORT_PTRS[ePortInstance];
    uint32     u32IntMode = ICU_PORT_HWA_GetPinInterruptMode(pPortPtr, u8Channel);
    uint32     u32Isf     = ICU_PORT_HWA_GetPinInterruptFlag(pPortPtr, u8Channel);
    if ((0u != u32Isf) && ((uint32)ICU_PORT_IRQ_DISABLE == u32IntMode))
    {
        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_63();
        ICU_PORT_HWA_ClearPinInterruptFlag(pPortPtr, u8Channel);
        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_63();
        bState = TRUE;
    }
    return bState;
}
#endif

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief This function returns the input level of the port channel
 *
 * @param ePortInstance         -Port instance
 * @param u8Channel             -Pin number
 * @return                      input level of the channel
 *
 * @implements SWDESG_ICU_137
 */
ICU_TEXT_SECTION boolean Icu_Port_GetInputLevel(const Icu_PortInstanceType ePortInstance,
                                                const uint8                u8Channel)
{
    uint32 u32PortInput = ICU_GPIO_HWA_ReadPortDataInput(GPIO_PTRS[ePortInstance]);
    return (0u != (u32PortInput & ((uint32)1U << u8Channel))) ? (boolean)TRUE : (boolean)FALSE;
}
#endif

#if (defined ICU_PORT_ISR_USED)
/**
 * @brief Port interrupt process
 *
 * @param ePortInstance -Port instance
 *
 * @implements SWS_Icu_00149,SWS_Icu_00150
 */
/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
LOCAL_INLINE void Icu_Port_ProcessInterrupt(const Icu_PortInstanceType ePortInstance)
{
    /* SWS_Icu_00119 */
    uint32 u32Channel;
    /* PRQA S 3205 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
     * Reason: u32Rvalue will be used by Assemble instructions */
    volatile uint32 u32Rvalue;
    /* PRQA S 3205 -- */
    PORT_Type *pPortPtr   = PORT_PTRS[ePortInstance];
    uint32     u32IntFlag = ICU_PORT_HWA_GetPortInterruptFlag(pPortPtr);
    uint32     u32Mask    = u32IntFlag & s_aPortMask[ePortInstance];
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if ((Icu_pConfig[u8CoreID] != NULL_PTR) && (u32Mask != 0U))
#else
    if ((Icu_pConfig != NULL_PTR) && (u32Mask != 0U))
#endif
    {
        ICU_PORT_HWA_ClearPortInterruptFlag(pPortPtr, u32Mask);
        while ((u32Mask != (uint32)0U))
        {
            /* PRQA S 1006 ++ #Misra-C:2012: Dir-4.2 All usage of assembly language should be
           documented. Reason: Here we use a Assemble instruction to reduce code execution time */
            ASM_KEYWORD volatile("rbit %0,%1" : "=r"(u32Rvalue) : "r"(u32Mask));
            ASM_KEYWORD volatile("clz %0,%1" : "=r"(u32Channel) : "r"(u32Rvalue));
            /* PRQA S 1006 -- */
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
            to an inappropriate essential type. Reason: The relative register bits can be safely
            converted to the enumeration type */
            /* PRQA S 4393,4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate
             * essential type. Reason: No problem doing this conversion as the value is within the
             * range of the cast type.
             */
            Icu_HW_PortChannelIntrProcess(ePortInstance, u32Channel);
            /* PRQA S 4543 -- */
            /* PRQA S 4393,4394 -- */
            /* PRQA S 4342 -- */
            /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one
            operand of an operator in which the usual arithmetic conversions are performed then the
            other operand shall not have wider essential type. Reason: It is safety to multiply the
            u32Mask here */
            u32Mask &= ~(1u << u32Channel);
            /* PRQA S 1891 -- */
        }
    }
    else
    {
        /*Do nothing*/
    }
}
/* PRQA S 3006,1006 -- */

#if (defined ICU_PORT_A_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_A_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_A);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_B_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_B_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_B);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_C_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_C_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_C);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_D_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_D_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_D);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_E_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_E_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_E);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_F_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_F_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_F);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_G_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_G_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_G);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_H_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_H_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_H);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_PORT_I_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_PORT_I_ISR)
{
    Icu_Port_ProcessInterrupt(ICU_PORT_I);
    EXIT_INTERRUPT();
}
#endif
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
