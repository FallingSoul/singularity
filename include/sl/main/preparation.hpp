#ifndef __SL_MAIN_PREPARATION__
#define __SL_MAIN_PREPARATION__

#include <stdlib.h>

#include <sl/main/information.hpp>
#include <sl/main/call.hpp>

namespace sl
{
    namespace main
    {
        class slMainPreparation
        {
            public:
            static int main(int argc, const char** argv) {
                static bool status = false;
                // Check status
                if(status)
                {
                    // Cannot call again!
                    return -1;
                }
                status = true;
                // Set main parameters
                slMainInformation::setparam(argc,argv,_environ);
                // Call main
                slMainCall::main();
                return 0;
            }
        };
    }
}

#endif //!__SL_MAIN_PREPARATION__