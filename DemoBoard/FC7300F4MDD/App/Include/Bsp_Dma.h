#ifndef _BSP_DMA_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define _BSP_DMA_H_
/* PRQA S 603, 602 -- */
#include "Bsp_McalHeader.h"

/************ Global functions *******************/
/* PRQA S 3449, 3451 ++ #Misra-C:2012 Rule-8.5 An external object or function shall be declared once in one and only one file
 *                      #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is just for testing or demonstration  */
void Bsp_Dma_Init(void);
void Dma_Channel2_CompleteIsr(void);
void Bsp_Dma_20ms_Task_Event(void);
void Tlib_Dma0_Channel0_Init(void);
/* PRQA S 3449, 3451 -- */
#define MEMCPY					0
#define CIRCULARBUFFER			1
#define DMA_TEST_SWITCH_ON		1
#define DMA_TEST_SWITCH_OFF		0

#define DMA_TEST_TYPE		CIRCULARBUFFER
#define DMA_TEST_SWITCH		DMA_TEST_SWITCH_ON

#define DMA_TEST_SW_CHANNEL_ID	0
#define DMA_TEST_SW_CHANNEL_ID6	6
#if 0
#define DMA_TEST_SW_CHANNEL_ID_CORE2 1

#define DMA_TEST_CHTOCH
#endif
#endif /* _BSP_DMA_H_ */
