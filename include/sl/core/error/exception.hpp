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
                slException(const char * _desc,const slSourceLocation & _loc = slSourceLocation())noexcept
                    :desc(_desc),loc(_loc)
                {}
                constexpr const char * describe()const noexcept
                {
                    return this->desc;
                }
                slSourceLocation location()const noexcept
                {
                    return this->loc;
                }
                private:
                const char * desc;
                slSourceLocation loc;
            };
        }
    }
}

#endif //!__SL_CORE_ERROR_EXCEPTION__