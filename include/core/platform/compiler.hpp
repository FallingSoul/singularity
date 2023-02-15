#ifndef __SL_PLATFORM_COMPILER__
#define __SL_PLATFORM_COMPILER__

// Compiler
#if defined(_MSC_VER)
#define SL_CL_MSVC 1

#if _MSC_VER == 1200
#define SL_CL_MAJOR 6
#define SL_CL_MINOR 0
#elif _MSC_VER == 1300
#define SL_CL_MAJOR 7
#define SL_CL_MINOR 0
#elif _MSC_VER == 1310
#define SL_CL_MAJOR 7
#define SL_CL_MINOR 1
#elif _MSC_VER == 1400
#define SL_CL_MAJOR 8
#define SL_CL_MINOR 0
#elif _MSC_VER == 1500
#define SL_CL_MAJOR 9
#define SL_CL_MINOR 0
#elif _MSC_VER == 1600
#define SL_CL_MAJOR 10
#define SL_CL_MINOR 0
#elif _MSC_VER == 1700
#define SL_CL_MAJOR 11
#define SL_CL_MINOR 0
#elif _MSC_VER == 1800
#define SL_CL_MAJOR 12
#define SL_CL_MINOR 0
#elif _MSC_VER == 1900
#define SL_CL_MAJOR 14
#define SL_CL_MINOR 0
#elif _MSC_VER == 1910
#define SL_CL_MAJOR 15
#define SL_CL_MINOR 0
#elif _MSC_VER == 1911
#define SL_CL_MAJOR 15
#define SL_CL_MINOR 3
#elif _MSC_VER == 1912
#define SL_CL_MAJOR 15
#define SL_CL_MINOR 5
#elif _MSC_VER == 1913
#define SL_CL_MAJOR 15
#define SL_CL_MINOR 6
#elif _MSC_VER == 1914
#define SL_CL_MAJOR 15
#define SL_CL_MINOR 7
#elif _MSC_VER == 1915
#define SL_CL_MAJOR 15
#define SL_CL_MINOR 8
#elif _MSC_VER == 1916
#define SL_CL_MAJOR 15
#define SL_CL_MINOR 9
#elif _MSC_VER == 1920
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 0
#elif _MSC_VER == 1921
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 1
#elif _MSC_VER == 1922
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 2
#elif _MSC_VER == 1923
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 3
#elif _MSC_VER == 1924
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 4
#elif _MSC_VER == 1925
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 5
#elif _MSC_VER == 1926
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 6
#elif _MSC_VER == 1927
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 7
#elif _MSC_VER == 1928
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 8
#elif _MSC_VER == 1929
#define SL_CL_MAJOR 16
#define SL_CL_MINOR 10
#elif _MSC_VER == 1930
#define SL_CL_MAJOR 17
#define SL_CL_MINOR 0
#elif _MSC_VER == 1931
#define SL_CL_MAJOR 17
#define SL_CL_MINOR 1
#elif _MSC_VER == 1932
#define SL_CL_MAJOR 17
#define SL_CL_MINOR 2
#endif

#endif

#if defined(__GNUC__)
#define SL_CL_GCC 1

#define SL_CL_MAJOR __GNUC__
#define SL_CL_MINOR __GNUC_MINOR__

#if __GNUC__ >= 3
#define SL_CL_REVISION __GNUC_PATCHLEVEL__
#endif

#endif

#if defined(__clang__)
#define SL_CL_CLANG 1

#define SL_CL_MAJOR __clang_major__
#define SL_CL_MINOR __clang_minor__
#define SL_CL_REVISION __clang_patchlevel__

#endif

#if !defined(SL_CL_REVISION)
#define SL_CL_REVISION 0
#endif

#endif //!__SL_PLATFORM_COMPILER__