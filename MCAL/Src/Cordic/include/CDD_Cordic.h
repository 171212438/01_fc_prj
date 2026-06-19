/**
*   @file    Cordic.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Cordic - Cordic driver header file.
*   @details
*
*   @addtogroup Cordic
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Cordic
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2024-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       02/04/2025    QXW0054       N/A          Release version
==================================================================================================*/
#ifndef CDD_CORDIC_H
#define CDD_CORDIC_H
/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Cordic_Types.h"

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

#define CORDIC_START_SEC_CODE
#include "Cordic_MemMap.h"

/**
 * @addtogroup module_driver_cordic
 * @{
 */

#if defined(__cplusplus)
extern "C"
{
#endif

/**
 * @brief CORDIC instance type.
 */
typedef enum
{
    CORDIC_INSTANCE_0 = 0U, /*!< CORDIC instance 0 is selected. */
} CORDIC_InstanceType;

/**
 * @brief Circular sine and cosine type.
 */
typedef struct
{
    float32 sinx; /*!< Sine value. */
    float32 cosx; /*!< Cosine value. */
} CORDIC_SinCos_Type;

/**
 * @brief Circular hyperbolic sine and cosine type.
 */
typedef struct
{
    float32 sinxh; /*!< Hyperbolic sine value. */
    float32 cosxh; /*!< Hyperbolic cosine value. */
} CORDIC_SinhCosh_Type;

/**
 * @brief Circular radical type.
 */
typedef float32 CORDIC_Radical_Type;

/**
 * @brief Circular arctangent type.
 */
typedef float32 CORDIC_Arctan_Type;

/**
 * @brief Circular hyperbolic arctangent type.
 */
typedef float32 CORDIC_Arctanh_Type;

/**
 * @brief The arctan type
 *
 */
typedef float32 CORDIC_Ln_Type;

/**
 * @brief The arctanh type
 *
 */
typedef float32 CORDIC_Sqrt_Type;

/**
 * @brief Computes sine and cosine values using the circular CORDIC algorithm.
 *
 * This function computes the sine and cosine of an angle specified in radians.
 * It uses the circular CORDIC algorithm to perform the computation.
 *
 * @param eInstance The instance of the CORDIC module to use.
 * @param radian The angle in radians for which to compute the sine and cosine.
 * @return A CORDIC_SinCos_Type structure containing the computed sine and cosine values.
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Sin_Cos(const float32 radian, CORDIC_SinCos_Type *const rst);

/**
 * @brief Computes the angle given the x and y components using the circular CORDIC algorithm.
 *
 * This function computes the angle given the x and y components using the circular
 * CORDIC algorithm in vector mode.
 *
 * @param eInstance The instance of the CORDIC module to use.
 * @param x The x component.
 * @param y The y component.
 * @return A CORDIC_Radical_Type representing the computed angle.
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Radical_Add(const float32  x, const float32 y,
						CORDIC_Radical_Type *const rst);

/**
 * @brief Computes the arctangent of a value using the circular CORDIC algorithm.
 *
 * This function computes the arctangent of a value using the circular CORDIC
 * algorithm in vector mode. It handles special cases for large input values.
 *
 * @param eInstance The instance of the CORDIC module to use.
 * @param y The value for which to compute the arctangent.
 * @return A CORDIC_Arctan_Type representing the computed arctangent value.
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Arctan_F( const float32 y, CORDIC_Arctan_Type *const rst);

/**
 * @brief Computes the arctangent of a point given its x and y coordinates using the circular CORDIC
 * algorithm.
 *
 * This function computes the arctangent of a point defined by its x and y
 * coordinates using the circular CORDIC algorithm in vector mode.
 *
 * @param eInstance The instance of the CORDIC module to use.
 * @param x The x-coordinate of the point.
 * @param y The y-coordinate of the point.
 * @return A CORDIC_Arctan_Type representing the computed arctangent value.
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Arctan(const sint32       x,
                                     const sint32       y,
									 CORDIC_Arctan_Type *const rst);

/**
 * @brief Computes the hyperbolic sine and cosine of a value using the circular CORDIC algorithm.
 *
 * This function computes the hyperbolic sine and cosine of a value using the
 * circular CORDIC algorithm in rotate mode.
 *
 * @param eInstance The instance of the CORDIC module to use.
 * @param z The value for which to compute the hyperbolic sine and cosine.
 * @return A CORDIC_SinhCosh_Type structure containing the computed hyperbolic sine and cosine values.
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Sinh_Cosh(const float32 z, CORDIC_SinhCosh_Type *const rst);

/**
 * @brief Computes the circular radical subtraction using the CORDIC algorithm.
 *
 * This function computes the circular radical subtraction of two input values `x` and `y`.
 * It uses the CORDIC hardware abstraction layer (HAL) functions to perform the calculations.
 *
 * @param eInstance The CORDIC instance identifier.
 * @param x The first input value.
 * @param y The second input value.
 * @return CORDIC_Radical_Type The result of the circular radical subtraction.
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Radical_Sub( const float32 x, const float32 y,
						 CORDIC_Radical_Type *const rst);

/**
 * @brief Computes the hyperbolic arctangent using the CORDIC algorithm.
 *
 * This function calculates the hyperbolic arctangent of a given input value `y`.
 * It uses the CORDIC hardware abstraction layer (HAL) functions to perform the calculations.
 *
 * @param eInstance The CORDIC instance identifier.
 * @param y The input value for which to compute the hyperbolic arctangent.
 * @return CORDIC_Arctanh_Type The computed hyperbolic arctangent value.
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Arctanh(const float32 y, CORDIC_Arctanh_Type *const rst);

/**
 * @brief The function to calculate ln
 *
 * @param y the input value
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Extended_LN(const float32 y, CORDIC_Ln_Type *const rst);

/**
 * @brief The function to calculate sqrt
 *
 * @param y the input value (0.0267120594,2.3397671865)
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Extended_Sqrt(const float32 y, CORDIC_Sqrt_Type *const rst);

#define CORDIC_STOP_SEC_CODE
#include "Cordic_MemMap.h"

#if defined(__cplusplus)
}
#endif

#endif /*CDD_CORDIC_H*/
