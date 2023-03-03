#ifndef __SL_CORE_ERROR_EXCEPTION__
#define __SL_CORE_ERROR_EXCEPTION__

#include <sl/core/srcloc.hpp>
namespace sl 
{
    namespace core
    {
        namespace error
        {
            class slException
            {
                public:
                slException(const char * _desc,const srcloc::slSourceLocation & _loc = srcloc::slSourceLocation())noexcept
                    :desc(_desc),loc(_loc)
                {}
                constexpr const char * describe()const noexcept
                {
                    return this->desc;
                }
                srcloc::slSourceLocation location()const noexcept
                {
                    return this->loc;
                }
                private:
                const char * desc;
                srcloc::slSourceLocation loc;
            };
        }
    }
}

#endif //!__SL_CORE_ERROR_EXCEPTION__