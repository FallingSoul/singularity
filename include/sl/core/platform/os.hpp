#ifndef __SL_CORE_PLATFORM_OS__
#define __SL_CORE_PLATFORM_OS__


// OS
#if defined(_WIN64)
#define SL_OS_WIN64 1
#elif defined(_WIN32)
#define SL_OS_WINDOWS 1
#endif

#if defined(__linux__)
#define SL_OS_LINUX 1
#endif

#if defined(__unix__)
#define SL_OS_UNIX 1
#endif

#if defined(__ADNROID__)
#define SL_OS_ANDROID 1
#endif

#if defined(__APPLE__) || defined(__MACH__)
#define SL_OS_APPLE 1

#include <TargetConditionals.h>

#if defined(TARGET_OS_EMBEDDED)
#define SL_OS_APPLE_EMBEDDED 1
#endif

#if defined(TARGET_IPHONE_SIMULATOR)
#define SL_OS_APPLE_IPHONE_SIMULATOR 1
#endif

#if defined(TARGET_OS_IPHONE)
#define SL_OS_APPLE_IPHONE 1
#endif

#ifdef defined(TARGET_OS_MAC)
#define SL_OS_APPLE_MAC 1
#endif

#endif

#if defined(_POSIX_VERSION)
#define SL_OS_CYGWIN 1
#endif

#if defined(__sun)
#define SL_OS_SOLARIS 1
#endif

#if defined(__hpux)
#define SL_OS_HPUX 1
#endif

#if defined(BSD)
#define SL_OS_BSD

#if defined(__DragonFly__)
#define SL_OS_BSD_DRONGFLY 1
#endif

#if defined(__FreeBSD__)
#define SL_OS_BSD_FREE 1
#endif

#if defined(__NetBSD__)
#define SL_OS_BSD_NET 1
#endif

#if defined(__OpenBSD__)
#define SL_OS_BSD_OPEN 1
#endif

#endif


#endif //!__SL_CORE_PLATFORM_OS__