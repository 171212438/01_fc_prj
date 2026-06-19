/**
 * @file device_header.h
 * @author Flagchip051
 * @brief include all peripheral register files
 * @version 0.1.0
 * @date 2024-01-12
 *
 * @copyright Copyright (c) 2024 Flagchip Semiconductors Co., Ltd.
 *
 */
#ifndef FLEXCORE_DEVICE_HEADER_H
#define FLEXCORE_DEVICE_HEADER_H
#include <stdint.h>

//typedef unsigned int uint32_t;
//typedef int int32_t;
//typedef unsigned char uint8_t;
//typedef char int8_t;
typedef unsigned int size_t;

//typedef unsigned short uint16_t;
//typedef short int16_t;

typedef unsigned long long uint64_t;

typedef enum {
    false = 0,
	true  = !false,
} bool;

//#ifndef NULL
#define NULL ((void *)0)
//#endif
#define DEV_ASSERT(x) do{}while((x) != 1)

#ifndef REG32
#define REG32(address) (*((volatile uint32_t*)(address)))
#endif

#define FC4150F512                    0x01U
#define FC4150F2M                     0x02U
#define FC7XXXHSM                     0x03U
#define FC7XXXCM7                     0x04U
#define DEVICE_TYPE                   FC7XXXHSM

#define FLASH_SIZE_8M                     (0u)
#define FLASH_SIZE_4M                     (1u)
#define FLASH_SIZE_TYPE                     FLASH_SIZE_8M

#define HSM_MAILBOX_CORE_INDEX 0x1

#ifndef __IO
#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions                 */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#endif
#define     __O     volatile             /*!< Defines 'write only' permissions                */
#define     __IO    volatile             /*!< Defines 'read / write' permissions              */
#endif


#if defined (__GNUC__)
#define INLINE           __attribute__((always_inline)) inline
#define LOCAL_INLINE     __attribute__((always_inline)) static inline

#else
#define INLINE           inline
#define LOCAL_INLINE     static inline

#endif
#endif /* FLEXCORE_DEVICE_HEADER_H */

