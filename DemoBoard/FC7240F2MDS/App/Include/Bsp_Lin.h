#ifndef _BSP_LIN_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define _BSP_LIN_H_
/* PRQA S 603, 602 -- */
#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_Lin_Init(void);

void Bsp_Lin_1s_Task_Event(void);

#endif /* _BSP_LIN_H_ */
