#ifndef __SL_CORE_CPU_CONTEXT__
#define __SL_CORE_CPU_CONTEXT__



#include <sl/core/platform.hpp>

namespace sl 
{
    namespace core
    {
        namespace cpu
        {
            class slCpuCtx
            {
                public:
                static inline slCpuCtx save()
                {

                }
                private:
                slCpuCtx()
                {

                }
            #if defined(SL_CPU_X86)
            #elif defined(SL_CPU_X64)
            #elif defined(SL_CPU_ARM32)
            #elif defined(SL_CPU_ARM64)
            #elif defined(SL_CPU_THUMB)
            #endif
            };
        }
    }
}

#endif //!__SL_CORE_CPU_CONTEXT__