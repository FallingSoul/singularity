#ifndef __SL_MEMORY_STRUCTOR_CONSTRUCTOR__
#define __SL_MEMORY_STRUCTOR_CONSTRUCTOR__


#include <sl/memory/structor/new.hpp>

namespace sl
{
    namespace memory
    {
        namespace structor
        {
            template<class Target>
            class slConstructor
            {
                public:
                template<class ... CstArgs>
                inline static Target & construct(Target & target,CstArgs ... args)
                {
                    return * new(&target) Target(args...);
                }
            };
        }
    }
}


#endif //!__SL_MEMORY_STRUCTOR_CONSTRUCTOR__