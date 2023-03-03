#ifndef __SL_CORE_SRCLOC_SRCLOC__
#define __SL_CORE_SRCLOC_SRCLOC__

#include <source_location>

namespace sl
{
    namespace core
    {
        namespace srcloc
        {
            class slSourceLocation
            {
                public:
                slSourceLocation(std::source_location loc = std::source_location::current())noexcept
                    :_line(loc.line()),_column(loc.column()),_filename(loc.file_name()),_funcname(loc.function_name())
                {} 
                constexpr int line()const noexcept
                {
                    return this->_line;
                }
                constexpr int colum()const noexcept
                {
                    return this->_column;
                }
                constexpr const char * filename()const noexcept
                {
                    return this->_filename;
                }
                constexpr const char * funcname()const noexcept
                {
                    return this->_funcname;
                }
                private:
                int _line;
                int _column;
                const char * _filename;
                const char * _funcname;
            };
        }
    }
}

#endif //!__SL_CORE_SRCLOC_SRCLOC__