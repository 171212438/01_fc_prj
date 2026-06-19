#include "Platform_Types.h"
#include "Cpm_reg.h"

#if (defined(__ICCARM__))
    #include "stdint.h"

#elif (defined (__GNUC__))
    #include "sys/types.h"
#endif


#if ( (defined(__ICCARM__)) || (defined (__GNUC__)))


#define CPM_MISCR_CPU_ID_INDEX()  Cpm_HWA_GetCoreId()


__attribute__((weak)) char __Heap0Begin = 0;
__attribute__((weak)) char __Heap0Limit = 0;
__attribute__((weak)) char __Heap1Begin = 0;
__attribute__((weak)) char __Heap1Limit = 0;
__attribute__((weak)) char __Heap2Begin = 0;
__attribute__((weak)) char __Heap2Limit = 0;
__attribute__((weak)) char __Heap3Begin = 0;
__attribute__((weak)) char __Heap3Limit = 0;

static char* current_heap_end[4];
static char* heapBeginArray[4]={&__Heap0Begin, &__Heap1Begin, &__Heap2Begin, &__Heap3Begin };
static char* heapLimitArray[4]={&__Heap0Limit, &__Heap1Limit, &__Heap2Limit, &__Heap3Limit };

#endif



#if (defined(__ICCARM__))
extern void* sbrk(intptr_t incr);

void* sbrk(intptr_t incr)
{
    uint8 u8CoreIndex = CPM_MISCR_CPU_ID_INDEX();
    char* current_block_address;

    if (current_heap_end[u8CoreIndex] == 0)
    {
      current_heap_end[u8CoreIndex] = heapBeginArray[u8CoreIndex];
    }

    current_block_address = current_heap_end[u8CoreIndex];

    // Need to align heap to word boundary, else will get
    // hard faults on Cortex-M0. So we assume that heap starts on
    // word boundary, hence make sure we always add a multiple of
    // 4 to it.
    incr = (incr + 3) & (~3); // align value to 4
    if (current_heap_end[u8CoreIndex] + incr > heapLimitArray[u8CoreIndex])
    {
      // Some of the libstdc++-v3 tests rely upon detecting
      // out of memory errors, so do not abort here.
    #if 0
      extern void abort (void);

      _write (1, "_sbrk: Heap and stack collision\n", 32);

      abort ();
    #else
      // Heap has overflowed
      return (void*) - 1;
    #endif
    }

    current_heap_end[u8CoreIndex] += incr;

    return (void*)current_block_address;
}



#elif defined __GNUC__
extern caddr_t _sbrk(int incr);


caddr_t _sbrk(int incr)
{
    uint8 u8CoreIndex = CPM_MISCR_CPU_ID_INDEX();
    char* current_block_address;

    if (current_heap_end[u8CoreIndex] == 0)
    {
      current_heap_end[u8CoreIndex] = heapBeginArray[u8CoreIndex];
    }

    current_block_address = current_heap_end[u8CoreIndex];

    // Need to align heap to word boundary, else will get
    // hard faults on Cortex-M0. So we assume that heap starts on
    // word boundary, hence make sure we always add a multiple of
    // 4 to it.
    incr = (incr + 3) & (~3); // align value to 4
    if (current_heap_end[u8CoreIndex] + incr > heapLimitArray[u8CoreIndex])
    {
      // Some of the libstdc++-v3 tests rely upon detecting
      // out of memory errors, so do not abort here.
    #if 0
      extern void abort (void);

      _write (1, "_sbrk: Heap and stack collision\n", 32);

      abort ();
    #else
      // Heap has overflowed
      return (caddr_t) - 1;
    #endif
    }

    current_heap_end[u8CoreIndex] += incr;

    return (caddr_t) current_block_address;
}

#endif

