#ifndef __SL_CORE_ERROR_EXCEPTION__
#define __SL_CORE_ERROR_EXCEPTION__

#include <sl/core/srcloc.hpp>

class slException
{
public:
    slException(const char *_desc, const char *_sug = "", const sl::core::slSourceLocation &_loc = sl::core::slSourceLocation()) noexcept
        : desc(_desc), sug(_sug), loc(_loc)
    {
    }
    constexpr const char *describe() const noexcept
    {
        return this->desc;
    }
    constexpr const char *suggest() const noexcept
    {
        return this->sug;
    }
    sl::core::slSourceLocation location() const noexcept
    {
        return this->loc;
    }

private:
    const char *desc;
    const char *sug;
    sl::core::slSourceLocation loc;
};

#endif //!__SL_CORE_ERROR_EXCEPTION__