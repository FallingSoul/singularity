#ifndef __SL_CORE_PLATFORM_LANG__
#define __SL_CORE_PLATFORM_LANG__

#ifdef __cplusplus
#define SL_LANG_CPP 1

#if __cplusplus == 199711L
#define SL_LANG_CPP_STD 98
#elif __cplusplus == 201103L
#define SL_LANG_CPP_STD 11
#elif __cplusplus == 201402L
#define SL_LANG_CPP_STD 14
#elif __cplusplus == 201703L
#define SL_LANG_CPP_STD 17
#elif __cplusplus == 202002L
#define SL_LANG_CPP_STD 20
#endif

#endif

#ifdef __STDC__
#define SL_LANG_C 1

#if __STDC__VERSION__ == 199409L
#define SL_LANG_C_STD 95
#elif __STDC_VERSION__ == 199901L
#define SL_LANG_C_STD 99
#elif __STDC_VERSION__ == 201112L
#define SL_LANG_C_STD 11
#elif __STDC_VERSION__ == 201710L
#define SL_LANG_C_STD 17
#endif

#endif

#endif //!__SL_CORE_PLATFORM_LANG__