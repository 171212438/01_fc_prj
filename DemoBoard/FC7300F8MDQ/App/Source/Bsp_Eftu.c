#include "Bsp_Eftu.h"

/************ Global functions *******************/
void Bsp_Eftu_Init(void)
{
    if (0U == GET_CPU_ID())
    {
        Eftu_Init(&Eftu_Config);
    }
}
