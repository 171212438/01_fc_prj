#include "Platform_Types.h"

#if (defined(__ICCARM__))
    #include "stdint.h"

#elif (defined (__GNUC__))
    #include "sys/types.h"
#endif


#if  (defined(__ICCARM__))
#pragma section = "HEAP"

static char* current_heap_end;
static char* heapBeginptr=(char *)(__section_begin("HEAP"));
static char* heapLimitptr=(char *)(__section_end("HEAP")) ;

#elif (defined (__GNUC__))
extern char __HeapBegin; // Defined by the linker.
extern char __HeapLimit; // Defined by the linker.

static char* current_heap_end;
static char* heapBeginptr=&__HeapBegin;
static char* heapLimitptr=&__HeapLimit;

#endif



#if (defined(__ICCARM__))
extern void* sbrk(intptr_t incr);

void* sbrk(intptr_t incr)
{
    char* current_block_address;

    current_heap_end = heapBeginptr;


    current_block_address = current_heap_end;

    // Need to align heap to word boundary, else will get
    // hard faults on Cortex-M0. So we assume that heap starts on
    // word boundary, hence make sure we always add a multiple of
    // 4 to it.
    incr = (incr + 3) & (~3); // align value to 4
    if (current_heap_end + incr > heapLimitptr)
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

    current_heap_end += incr;

    return (void*)current_block_address;
}



#elif defined __GNUC__
extern caddr_t _sbrk(int incr);


caddr_t _sbrk(int incr)
{
    char* current_block_address;

    current_heap_end = heapBeginptr;

    current_block_address = current_heap_end;

    // Need to align heap to word boundary, else will get
    // hard faults on Cortex-M0. So we assume that heap starts on
    // word boundary, hence make sure we always add a multiple of
    // 4 to it.
    incr = (incr + 3) & (~3); // align value to 4
    if (current_heap_end + incr > heapLimitptr)
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

    current_heap_end += incr;

    return (caddr_t) current_block_address;
}

#endif

