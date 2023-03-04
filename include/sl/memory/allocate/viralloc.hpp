#ifndef __SL_MEMORY_ALLOCATE_VIRALLOC__
#define __SL_MEMORY_ALLOCATE_VIRALLOC__

#include <sl/core/typedef.hpp>

#include <malloc.h>
namespace sl 
{
    namespace memory
    {
        namespace allocate
        {
            void * viralloc(slsize size)
            {
                return malloc(size);
            }
            void virfree(void * ptr)
            {
                free(ptr);
            }
        }
    }
}

#endif //!__SL_MEMORY_ALLOCATE_VIRALLOC__