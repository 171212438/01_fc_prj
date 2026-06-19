#include "Bsp_EthSM.h"
#include "Bsp_Eth.h"
#include "Bsp_EthIf.h"



#define BSP_ETHSM_COMM_START_DELAY      2U

static void Bsp_EthSM_RequestComMode(void)
{
    DEBUG_INFO("Bsp_EthSM_RequestComMode\r\n");

    if (E_OK != Bsp_EthIf_SetControllerMode())
    {
        DEBUG_INFO("Bsp_EthIf_SetControllerMode failed\r\n");
    }
    else
    {
        DEBUG_INFO("Bsp_EthIf_SetControllerMode success\r\n");
    }
}

/* This event emulates the ComM module calling EthSM_RequestComMode */
void Bsp_EthSM_1s_Task_Event(void)
{
    static uint32 Bsp_EthSMEventcount = 0U;

    if (EthPartitionCoreIdMatched())
    {
        /* Call Bsp_EthSM_RequestComMode once */
        if (Bsp_EthSMEventcount < BSP_ETHSM_COMM_START_DELAY)
        {
            if (++Bsp_EthSMEventcount == BSP_ETHSM_COMM_START_DELAY)
            {
                Bsp_EthSM_RequestComMode();
            }
        }
    }
}


