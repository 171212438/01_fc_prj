#include "Mpu.h"
#include "fc7xxx_driver_mpu.h"

void Bsp_Mpu_Init(void)
{
    MPU_StatusType              eRet;
    MPU_RegionConfigurationType tCfg;
    uint32                      u32RegionSize, u32RegionIndex;
    uint32                      u32NonCacheStart, u32NonCacheSize;
    uint32                      u32ShareMemStart, u32ShareMemSize;

#if defined(__GNUC__) || defined(__ghs__)
    extern uint32 __ram_nocachable_data_start[];
    extern uint32 __nocachable_bss_end[];
    u32NonCacheStart = (uint32)__ram_nocachable_data_start;
    u32NonCacheSize  = (uint32)__nocachable_bss_end - u32NonCacheStart;

    extern uint32 __shareable_bss_end[];
    extern uint32 __rtt_buffer_bss_start[];
    u32ShareMemStart = (uint32)__rtt_buffer_bss_start;
    u32ShareMemSize  = (uint32)__shareable_bss_end - u32ShareMemStart;

#elif defined(__ICCARM__)
    #pragma section = "DATA_NOCACHEABLE"
    #pragma section = "BSS_NOCACHEABLE"
    #pragma section = "BSS_RTT_BUFFER"
    #pragma section = "DATA_SHAREABLE"
    #pragma section = "BSS_SHAREABLE"

    u32NonCacheStart = (uint32)__section_begin("DATA_NOCACHEABLE");
    if (u32NonCacheStart == 0U)
    {
        u32NonCacheStart = (uint32)__section_begin("BSS_NOCACHEABLE");
    }
    u32NonCacheSize = __section_size("BSS_NOCACHEABLE") + __section_size("DATA_NOCACHEABLE");

    u32ShareMemStart = (uint32)__section_begin("BSS_RTT_BUFFER");
    if (u32ShareMemStart == 0U)
    {
        u32ShareMemStart = (uint32)__section_begin("DATA_SHAREABLE");
    }
    if (u32ShareMemStart == 0U)
    {
        u32ShareMemStart = (uint32)__section_begin("BSS_SHAREABLE");
    }
    u32ShareMemSize = (uint32)__section_size("BSS_RTT_BUFFER") +
                      (uint32)__section_size("DATA_SHAREABLE") +
                      (uint32)__section_size("BSS_SHAREABLE");
#endif

    /* Disable I cache and D cache */
    if ((boolean)TRUE == SCB_HWA_ICacheEnabled(FC7XXX_SCB))
    {
        SCB_HWA_DisableICache(FC7XXX_SCB);
    }
    if ((boolean)TRUE == SCB_HWA_DCacheEnabled(FC7XXX_SCB))
    {
        SCB_HWA_DisableDCache(FC7XXX_SCB);
    }

    MPU_Disable();

    /* For ARM errata */
    tCfg.u32BaseAddr       = 0x00000000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_4GB;
    tCfg.eAccessPermission = MPU_REGION_AP_FULL_ACCESS;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_DISABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_0;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_DISABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_0, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    /* PFLASH 8MB readonly, cacheable, excutable */
    tCfg.u32BaseAddr       = 0x01000000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_8MB;
    tCfg.eAccessPermission = MPU_REGION_AP_PRIV_RO_URO;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_ENABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_0;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_ENABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_1, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    /* DFLASH0 256KB readonly, non-cacheable, non-excutable */
    tCfg.u32BaseAddr       = 0x04000000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_256KB;
    tCfg.eAccessPermission = MPU_REGION_AP_PRIV_RO_URO;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_DISABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_1;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_DISABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_2, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    /* DFLASH1 128 readonly, non-cacheable, non-excutable */
    tCfg.u32BaseAddr       = 0x04040000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_128KB;
    tCfg.eAccessPermission = MPU_REGION_AP_PRIV_RO_URO;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_DISABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_1;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_DISABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_3, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    /* ROM 128KB,RO, non-cacheable, excutable */
    tCfg.u32BaseAddr       = 0x04800000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_128KB;
    tCfg.eAccessPermission = MPU_REGION_AP_PRIV_RO_URO;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_ENABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_1;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_DISABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_4, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    /* ITCM0 32KB readonly, non-cacheable, excutable */
    tCfg.u32BaseAddr       = 0x00000000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_32KB;
    tCfg.eAccessPermission = MPU_REGION_AP_PRIV_RO_URO;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_ENABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_1;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_DISABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_5, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    /* DTCM0 64KB readwrite, non-cacheable, non-executable */
    tCfg.u32BaseAddr       = 0x20000000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_64KB;
    tCfg.eAccessPermission = MPU_REGION_AP_FULL_ACCESS;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_ENABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_1;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_DISABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_6, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    /* SRAM 896KB readwrite, write-through cacheable, non-executable */
    tCfg.u32BaseAddr       = 0x21000000u;
    tCfg.eRegionSize       = MPU_REGION_SIZE_1MB;
    tCfg.eAccessPermission = MPU_REGION_AP_FULL_ACCESS;
    tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_DISABLE;
    tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_0;
    tCfg.eShareable        = MPU_REGION_S_DISABLE;
    tCfg.eCacheable        = MPU_REGION_C_ENABLE;
    tCfg.eBufferable       = MPU_REGION_B_DISABLE;
    tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
    tCfg.eSubRegionDis_7   = MPU_REGION_SRD_DISABLE_SUBREGION;
    eRet                   = MPU_RegionEnable(MPU_REGION_NUMBER_7, &tCfg);
    if (eRet != MPU_STATUS_SUCCESS)
    {
        MPU_Disable();
        return;
    }

    u32RegionIndex = 8u;

    /* SRAM no cache readwrite, non-cacheable(normal), non-executable */
    if (u32NonCacheSize)
    {
        u32RegionSize = 0;
        while ((u32NonCacheSize >> u32RegionSize) > 0x1U)
        {
            ++u32RegionSize;
        }
        tCfg.u32BaseAddr       = u32NonCacheStart;
        tCfg.eRegionSize       = (((uint32)2u << u32RegionSize) == u32NonCacheSize) ?
                                     (MPU_RegionSizeType)(u32RegionSize - 1u) :
                                     (MPU_RegionSizeType)u32RegionSize;
        tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_DISABLE;
        tCfg.eAccessPermission = MPU_REGION_AP_FULL_ACCESS;
        tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_1;
        tCfg.eShareable        = MPU_REGION_S_DISABLE;
        tCfg.eCacheable        = MPU_REGION_C_DISABLE;
        tCfg.eBufferable       = MPU_REGION_B_DISABLE;
        tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
        eRet                   = MPU_RegionEnable((MPU_RegionNumberType)u32RegionIndex++, &tCfg);
        if (eRet != MPU_STATUS_SUCCESS)
        {
            MPU_Disable();
            return;
        }
    }

    /* SRAM share readwrite, non-cacheable(normal), non-executable */
    if (u32ShareMemSize)
    {
        u32RegionSize = 0;
        while ((u32ShareMemSize >> u32RegionSize) > 0x1U)
        {
            ++u32RegionSize;
        }
        tCfg.u32BaseAddr       = u32ShareMemStart;
        tCfg.eRegionSize       = (((uint32)2u << u32RegionSize) == u32ShareMemSize) ?
                                     (MPU_RegionSizeType)(u32RegionSize - 1u) :
                                     (MPU_RegionSizeType)u32RegionSize;
        tCfg.eExecuteNever     = MPU_REGION_XN_EXECUTE_DISABLE;
        tCfg.eAccessPermission = MPU_REGION_AP_FULL_ACCESS;
        tCfg.eTypeExtLevel     = MPU_REGION_TEX_LEVEL_1;
        tCfg.eShareable        = MPU_REGION_S_DISABLE;
        tCfg.eCacheable        = MPU_REGION_C_DISABLE;
        tCfg.eBufferable       = MPU_REGION_B_DISABLE;
        tCfg.eSubRegionDis_0   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_1   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_2   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_3   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_4   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_5   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_6   = MPU_REGION_SRD_ENABLE_SUBREGION;
        tCfg.eSubRegionDis_7   = MPU_REGION_SRD_ENABLE_SUBREGION;
        eRet                   = MPU_RegionEnable((MPU_RegionNumberType)u32RegionIndex++, &tCfg);
        if (eRet != MPU_STATUS_SUCCESS)
        {
            MPU_Disable();
            return;
        }
    }

    MPU_Enable(MPU_EN_PRIVILEGED_DEFAULT);
    /* Enable I cache and D cache */
    SCB_HWA_EnableDCache(FC7XXX_SCB);
    SCB_HWA_EnableICache(FC7XXX_SCB);
}
