#ifndef __SL_CORE_CPU_VERSION__
#define __SL_CORE_CPU_VERSION__

#include <sl/core/cpu/cpuid.hpp>

#if defined(SL_CPU_X86) || defined(SL_CPU_X64)

namespace sl
{
    namespace core
    {
        namespace cpu
        {
            class slCpuVersion
            {
                public:
                slCpuVersion(const slCpuID<1> &cpuid = slCpuID<1>())
                {
                    reinterpret_cast<int &>(this->version) = cpuid.info.eax;
                }
                struct 
                {
                    int stepping : 4;
                    int model : 4;
                    int family : 4;
                    // 0->OEM, 1->OverDrive, 2->Dual
                    int type : 2;
                    int padding0 : 2;
                    // only when model = 0x06 or 0x0F
                    // result = (extmodel << 4) + model
                    int extmodel : 4;
                    // only when family = 0x0F
                    // result = family + extfamily
                    int extfamily : 8;
                    int padding1 : 4;
                } version;
            };
        }
    }
}
#endif


#endif //!__SL_CORE_CPU_VERSION__