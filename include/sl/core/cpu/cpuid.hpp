#ifndef __SL_CORE_CPU_CPUID__
#define __SL_CORE_CPU_CPUID__


#include <sl/core/platform.hpp>


namespace sl
{
    namespace core
    {
        namespace cpu
        {
#if defined(SL_CPU_X86) || defined(SL_CPU_X64)
            template<int type>
            class slCpuID
            {
                public:
                static void load(int _array[4],int _type)
                {
                    #if defined(SL_CL_MSVC)
                    asm
                    {
                        mov eax,_type
                        cpuid
                        mov [_array],eax
                        mov [_array + 4],ebx
                        mov [_array + 8],ecx
                        mov [_array + 12],edx
                    }
                    #elif defined(SL_CL_GCC)
                    __asm__ __volatile__
                    (
                        "cpuid"
                        : "=a" (_array[0]), "=b" (_array[1]), "=c" (_array[2]), "=d" (_array[3])
                        : "a" (_type)
                    );
                    #endif
                }
                slCpuID()
                {
                    load(this->cpuid.array,type);
                }
                
                union
                {
                    int array[4];
                    struct
                    {
                        int eax;
                        int ebx;
                        int ecx;
                        int edx;
                    }box;
                }cpuid;
            };
#endif
        }
    }
}

#endif //!__SL_CORE_CPU_CPUID__