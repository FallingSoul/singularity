#ifndef __SL_PLATFORM_ENDIAN__
#define __SL_PLATFORM_ENDIAN__

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

#endif //!__SL_PLATFORM_ENDIAN__