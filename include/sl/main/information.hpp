#ifndef __SL_MAIN_INFORMATION__
#define __SL_MAIN_INFORMATION__

namespace sl
{
    namespace main
    {
        class slMainInformation
        {
            public:
            slMainInformation():argc(param.argc),argv(param.argv),env(param.env)
            {

            }
            int &argc;
            char const ** &argv;
            char ** &env;
            private:
            static void setparam(int argc,char const **argv,char **env)
            {
                param.argc = argc;
                param.argv = argv;
                param.env = env;
            }
            static struct slMainParam
            {
                int argc;
                char const **argv;
                char **env;
            } param;
            friend class slMainPreparation;
        };
        slMainInformation::slMainParam slMainInformation::param = {0};
    }
}


#endif //!__SL_MAIN_INFORMATION__