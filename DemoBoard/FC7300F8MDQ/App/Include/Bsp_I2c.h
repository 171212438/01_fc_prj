/*
 * Bsp_I2c.h
 *
 *  Created on: 2023-03-21
 *      Author: qxw0100
 */

#ifndef APP_INCLUDE_BSP_I2C_H_
#define APP_INCLUDE_BSP_I2C_H_

#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_I2c_Init(void);
void Bsp_I2c_1s_Task_Event(void);
void Init_Data(void);
void Is_Success( const I2c_RequestType *pRequestPtr);
void Bsp_I2c_5ms_Task_Event_ForCheckTimeout(void);
#endif /* APP_INCLUDE_BSP_I2C_H_ */
