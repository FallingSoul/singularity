#ifndef __SL_MAIN_CALL__
#define __SL_MAIN_CALL__


namespace sl
{
    namespace main
    {
        class slMainCall
        {
            public:
            private:
            // Temporary
            static int main();
            friend class slMainPreparation;
        };
    }
}
#define slMain sl::main::slMainCall::main


#endif //!__SL_MAIN_CALL__