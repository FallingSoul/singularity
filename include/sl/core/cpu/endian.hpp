#ifndef __SL_CORE_CPU_ENDIAN__
#define __SL_CORE_CPU_ENDIAN__

namespace sl
{
    namespace core
    {
        namespace cpu
        {

            class slEndian
            {
            public:
                enum Endian
                {
                    BigEndian,
                    LittleEndian
                };
                static Endian get()
                {
                    static int code = 1;
                    return *reinterpret_cast<char *>(&code) & 1 ? LittleEndian : BigEndian;
                }
            };
        }
    }
}

#endif //!__SL_CORE_CPU_ENDIAN__