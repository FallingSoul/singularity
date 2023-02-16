#ifndef __SL_CORE_PLATFORM_CPU__
#define __SL_CORE_PLATFORM_CPU__

#include <sl/core/platform/compiler.hpp>

#if defined(SL_CL_MSVC)
#if defined(_M_IX86)
#define SL_CPU_X86 1
#elif defined(_M_X64) || defined(_M_AMD64)
#define SL_CPU_X64 1
#elif defined(_M_ARM64)
#define SL_CPU_ARM64 1
#elif defined(_M_ARM)
#define SL_CPU_ARM32 1
#elif defined(_M_THUMB)
#define SL_CPU_THUMB 1
#endif
#endif

#if defined(SL_CL_GCC) || defined(SL_CL_CLANG)
#if defined(__i386__)
#define SL_CPU_X86 1
#elif defined(__x86_64__)
#define SL_CPU_X64 1
#elif defined(__aarch64__)
#define SL_CPU_ARM64 1
#elif defined(__arm__)
#define SL_CPU_ARM32 1
#elif defined(__thumb__)
#define SL_CPU_THUMB 1
#endif
#endif


#endif //!__SL_CORE_PLATFORM_CPU__