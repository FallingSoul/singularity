#ifndef __SL_CORE_ERROR_ERROR__
#define __SL_CORE_ERROR_ERROR__

template <int ErrCode, int SpaceCode>
class slMetaError
{
public:
    static constexpr int code() noexcept
    {
        return ErrCode;
    }
    static constexpr int space() noexcept
    {
        return SpaceCode;
    }
    static constexpr const char *describe() noexcept;
    static constexpr const char *suggest() noexcept;
};


class slError
{
public:
    template <int ErrCode, int SpaceCode>
    slError(slMetaError<ErrCode, SpaceCode>)
        : _code(slMetaError<ErrCode, SpaceCode>::code()),
          _space(slMetaError<ErrCode, SpaceCode>::space()),
          desc(slMetaError<ErrCode, SpaceCode>::describe()),
          sug(slMetaError<ErrCode, SpaceCode>::suggest())
    {
    }
    constexpr int code() const noexcept
    {
        return this->_code;
    }
    constexpr int space() const noexcept
    {
        return this->_space;
    }
    constexpr const char *describe() const noexcept
    {
        return this->desc;
    }
    constexpr const char *suggest() const noexcept
    {
        return this->sug;
    }

private:
    int _code;
    int _space;
    const char *desc;
    const char *sug;
};



#define SL_DEFERROR(CODE, SPACE, DESC, SUG)              \
    template <>                                          \
    class slMetaError<CODE, SPACE>                       \
    {                                                    \
    public:                                              \
        static constexpr int code() noexcept             \
        {                                                \
            return CODE;                                 \
        }                                                \
        static constexpr int space() noexcept            \
        {                                                \
            return SPACE;                                \
        }                                                \
        static constexpr const char *describe() noexcept \
        {                                                \
            return DESC;                                 \
        }                                                \
        static constexpr const char *suggest() noexcept  \
        {                                                \
            return SUG;                                  \
        }                                                \
    }

/*
namespace A
{
    template<int> class B;
}
template<>
class ::A::B<0>{};
*/
#endif //!__SL_CORE_ERROR_ERROR__