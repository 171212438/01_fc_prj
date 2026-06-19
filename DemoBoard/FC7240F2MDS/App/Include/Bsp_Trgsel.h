#ifndef _BSP_TRGSEL_H_
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define _BSP_TRGSEL_H_
/* PRQA S 0602 -- */
/* PRQA S 0603 -- */
#include "Bsp_McalHeader.h"

/************ Global functions *******************/
void Bsp_Trgsel_Init(void);
void Bsp_Trgsel_1s_Task_Event(void);

#endif /* _BSP_TRGSEL_H_ */
