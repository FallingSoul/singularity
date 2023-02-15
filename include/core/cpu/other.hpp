#ifndef __SL_CPU_OTHER__
#define __SL_CPU_OTHER__



#include <core/cpu/cpuid.hpp>


#if defined(SL_CPU_X86) || defined(SL_CPU_X64)
namespace sl 
{
    namespace core
    {
        namespace cpu
        {
            class slCpuOther
            {
                public:
                slCpuOther(const slCpuID<1> &cpuid = slCpuID<1>())
                {
                    reinterpret_cast<int &>(this->info) = cpuid.info.ebx;
                }
                struct
                {
                    // Brand Index
                    int brand : 8;
                    // CLFLUSH line size (Value ∗ 8 = cache line size in bytes; used also by CLFLUSHOPT)
                    int linesize_CLFLUSH : 8;
                    // Maximum number of addressable IDs for logical processors in this physical package
                    int maxaddr : 8;
                    // Initial APIC ID
                    int intailAPIC : 8;
                } info;
            };
        }
    }
}

#endif

#endif //!__SL_CPU_OTHER__