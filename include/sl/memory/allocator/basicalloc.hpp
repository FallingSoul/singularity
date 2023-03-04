#ifndef __SL_MEMORY_ALLOCATOR_BASICALLOC__
#define __SL_MEMORY_ALLOCATOR_BASICALLOC__

#include <sl/memory/allocate.hpp>

namespace sl 
{
    namespace memory
    {
        namespace allocator
        {
            class slBasicAllocator
            {
                public:
                void * allocate(slsize size)
                {
                   return allocate::viralloc(size);
                }
                void free(void * ptr)
                {
                    allocate::virfree(ptr);
                }
            };
        }
    }
}

#endif //!__SL_MEMORY_ALLOCATOR_BASICALLOC__