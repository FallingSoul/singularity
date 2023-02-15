#ifndef __SL_CPU_VENDORID__
#define __SL_CPU_VENDORID__

#include <core/cpu/cpuid.hpp>

namespace sl
{
    namespace core
    {
        namespace cpu
        {
            class slCpuVendorID
            {
            public:
                slCpuVendorID(const slCpuID<0> &cpuid = slCpuID<0>())
                {
                    id[0] = reinterpret_cast<const char *>(&cpuid.info.box[1])[0];
                    id[1] = reinterpret_cast<const char *>(&cpuid.info.box[1])[1];
                    id[2] = reinterpret_cast<const char *>(&cpuid.info.box[1])[2];
                    id[3] = reinterpret_cast<const char *>(&cpuid.info.box[1])[3];
                    id[4] = reinterpret_cast<const char *>(&cpuid.info.box[1])[8];
                    id[5] = reinterpret_cast<const char *>(&cpuid.info.box[1])[9];
                    id[6] = reinterpret_cast<const char *>(&cpuid.info.box[1])[10];
                    id[7] = reinterpret_cast<const char *>(&cpuid.info.box[1])[11];
                    id[8] = reinterpret_cast<const char *>(&cpuid.info.box[1])[4];
                    id[9] = reinterpret_cast<const char *>(&cpuid.info.box[1])[5];
                    id[10] = reinterpret_cast<const char *>(&cpuid.info.box[1])[6];
                    id[11] = reinterpret_cast<const char *>(&cpuid.info.box[1])[7];
                    id[12] = 0;
                }

                
                char id[13];
            };
        }
    }
}

#endif //!__SL_CPU_VENDORID__