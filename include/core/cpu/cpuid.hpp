#ifndef __SL_PLATFORM_CPUID__
#define __SL_PLATFORM_CPUID__


// https://www.cnblogs.com/DeeLMind/p/7535028.html

#include <core/platform/cpu.hpp>

#if defined(SL_CPU_X86) || defined(SL_CPU_X64)

#define SL_OPCODE_CPUID 0x0FA2
#include <intrin.h>

namespace sl
{
    namespace core
    {
        namespace cpu
        {
            template<int Code, int SubCode = 0>
            class slCpuID
            {
            public:
                slCpuID()
                {
                    __cpuidex(this->info.box, Code, SubCode);
                }
                union
                {
                    int box[4];
                    int eax, ebx, ecx, edx;
                } info;
            };
        }
    }
}
#endif

#endif //!__SL_PLATFORM_CPUID__