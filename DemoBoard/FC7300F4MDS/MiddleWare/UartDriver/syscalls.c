#include "Platform_Types.h"

#if (defined(__ICCARM__))
    #include "stdint.h"

#elif (defined (__GNUC__))
    #include "sys/types.h"
#endif


#if ( (defined(__ICCARM__)) || (defined (__GNUC__)))

#define CORE_NUM    3U

#define CPM_MISCR_CPU_ID_INDEX()  0U


extern char __Heap0Begin; // Defined by the linker.
extern char __Heap0Limit; // Defined by the linker.

extern char __Heap1Begin; // Defined by the linker.
extern char __Heap1Limit; // Defined by the linker.

extern char __Heap2Begin; // Defined by the linker.
extern char __Heap2Limit; // Defined by the linker.

static char* current_heap_end[CORE_NUM];
static char* heapBeginArray[CORE_NUM]={&__Heap0Begin, &__Heap1Begin, &__Heap2Begin };
static char* heapLimitArray[CORE_NUM]={&__Heap0Limit, &__Heap1Limit, &__Heap2Limit };

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

