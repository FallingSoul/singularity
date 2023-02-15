#ifndef __SL_CPU_CACHE__
#define __SL_CPU_CACHE__


#include <core/cpu/cpuid.hpp>

#if defined(SL_CPU_X86) || defined(SL_CPU_X64)

namespace sl
{
    namespace core
    {
        namespace cpu
        {
            enum class slCacheType
            {
                // None
                General,
                // Data Cache
                Cache,
                // Translation Look-aside Buffer
                // I think it should be called Address Translation Cache
                TLB,
                // Data TLB
                DTLB,
                // Instruction TLB
                ITLB,
                // Shared TLB
                STLB,
                // Prefetch
                Prefetch
            };
            // Uncompleted
            class slCpuCache
            {
                public:
                slCpuCache(const slCpuID<2> &cpuid = slCpuID<2>())
                {
                    reinterpret_cast<int *>(&this->info)[0] = cpuid.info.eax;
                    reinterpret_cast<int *>(&this->info)[1] = cpuid.info.ebx;
                    reinterpret_cast<int *>(&this->info)[2] = cpuid.info.ecx;
                    reinterpret_cast<int *>(&this->info)[3] = cpuid.info.edx;
                }
                union 
                {
                    int box[4];
                }info;
            };
        }
    }
}

#endif


#endif //!__SL_CPU_CACHE__