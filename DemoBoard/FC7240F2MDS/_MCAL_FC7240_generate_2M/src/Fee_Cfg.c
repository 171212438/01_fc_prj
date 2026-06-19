
/**
*   @file
*
*   @addtogroup FEE
*   @{
*/
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Fee_Cfg.h"

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/




#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"


/* Configuration of chunk group FeeChunkGroup_0 */
static const Fee_ChunkType Fee_FeeChunkGroup_0[2] =
{
    /* FeeChunk_0 */
    {
        0U,/* Start address */
        2048U /* Size */
    },
    /* FeeChunk_1 */
    {
        2048U,/* Start address */
        2048U /* Size */
    }
};

/* Configuration of chunk group FeeChunkGroup_1 */
static const Fee_ChunkType Fee_FeeChunkGroup_1[3] =
{
    /* FeeChunk_0 */
    {
        4096U,/* Start address */
        2048U /* Size */
    },
    /* FeeChunk_1 */
    {
        6144U,/* Start address */
        2048U /* Size */
    },
    /* FeeChunk_2 */
    {
        8192U,/* Start address */
        2048U /* Size */
    }
};

/* Configuration of chunk group FeeChunkGroup_2 */
static const Fee_ChunkType Fee_FeeChunkGroup_2[2] =
{
    /* FeeChunk_0 */
    {
        10240U,/* Start address */
        8192U /* Size */
    },
    /* FeeChunk_1 */
    {
        18432U,/* Start address */
        8192U /* Size */
    }
};

/* Configuration of chunk group set */
const Fee_ChunkGroupType Fee_Cfg_ChunkGrps[FEE_NUM_OF_CHUNK_GROUPS] =
{
    
    /* FeeChunkGroup_0 */
    {
        Fee_FeeChunkGroup_0, /* Chunk set */
        2U, /* Number of chunks */
        0U /* Size of the reserved area */
    },
    
    /* FeeChunkGroup_1 */
    {
        Fee_FeeChunkGroup_1, /* Chunk set */
        3U, /* Number of chunks */
        0U /* Size of the reserved area */
    },
    
    /* FeeChunkGroup_2 */
    {
        Fee_FeeChunkGroup_2, /* Chunk set */
        2U, /* Number of chunks */
        0U /* Size of the reserved area */
    }
};

/* Configuration of Fee blocks */
const Fee_BlockConfigType Fee_Cfg_BlockConfig[FEE_CFG_NUM_OF_BLOCKS] =
{
    /* FeeBlockConfiguration_0 */
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeChunkGroup */
        (boolean)FALSE,/* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /* FeeBlockConfiguration_1 */
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1, /* FeeBlockNumber symbol */
        6U, /* FeeBlockSize */
        1U, /* FeeChunkGroup */
        (boolean)FALSE,/* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /* FeeBlockConfiguration_3 */
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_3, /* FeeBlockNumber symbol */
        1020U, /* FeeBlockSize */
        2U, /* FeeChunkGroup */
        (boolean)FALSE,/* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /* FeeBlockConfiguration_2 */
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_2, /* FeeBlockNumber symbol */
        88U, /* FeeBlockSize */
        1U, /* FeeChunkGroup */
        (boolean)FALSE,/* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    }
};

#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @}*/
