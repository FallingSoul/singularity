#ifndef __SL_CORE_PLATFORM_HOST__
#define __SL_CORE_PLATFORM_HOST__

#ifdef __STDC_HOSTED__

// OS
#if defined(_WIN64)
#define SL_HOST_WIN64 1
#elif defined(_WIN32)
#define SL_HOST_WINDOWS 1
#endif

#if defined(__linux__)
#define SL_HOST_LINUX 1
#endif

#if defined(__unix__)
#define SL_HOST_UNIX 1
#endif

#if defined(__ADNROID__)
#define SL_HOST_ANDROID 1
#endif

#if defined(__APPLE__) || defined(__MACH__)
#define SL_HOST_APPLE 1

#include <TargetConditionals.h>

#if defined(TARGET_OS_EMBEDDED)
#define SL_HOST_APPLE_EMBEDDED 1
#endif

#if defined(TARGET_IPHONE_SIMULATOR)
#define SL_HOST_APPLE_IPHONE_SIMULATOR 1
#endif

#if defined(TARGET_OS_IPHONE)
#define SL_HOST_APPLE_IPHONE 1
#endif

#ifdef defined(TARGET_OS_MAC)
#define SL_HOST_APPLE_MAC 1
#endif

#endif

#if defined(_POSIX_VERSION)
#define SL_HOST_CYGWIN 1
#endif

#if defined(__sun)
#define SL_HOST_SOLARIS 1
#endif

#if defined(__hpux)
#define SL_HOST_HPUX 1
#endif

#if defined(BSD)
#define SL_HOST_BSD

#if defined(__DragonFly__)
#define SL_HOST_BSD_DRONGFLY 1
#endif

#if defined(__FreeBSD__)
#define SL_HOST_BSD_FREE 1
#endif

#if defined(__NetBSD__)
#define SL_HOST_BSD_NET 1
#endif

#if defined(__OpenBSD__)
#define SL_HOST_BSD_OPEN 1
#endif

#endif

#endif

#endif //!__SL_CORE_PLATFORM_HOST__