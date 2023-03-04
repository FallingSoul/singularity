#ifndef __SL_MEMORY_STRUCTOR_DESTRUCTOR__
#define __SL_MEMORY_STRUCTOR_DESTRUCTOR__


namespace sl 
{
    namespace memory
    {
        namespace structor
        {
            template<class Target>
            class slDestructor
            {
                public:
                inline static void destruct(Target & target)
                {
                    target.~Target();
                }
            };
        }
    }
}

#endif //!__SL_MEMORY_STRUCTOR_DESTRUCTOR__