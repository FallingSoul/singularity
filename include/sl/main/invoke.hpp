#ifndef __SL_MAIN_INVOKE__
#define __SL_MAIN_INVOKE__

#include <sl/main/preparation.hpp>


int main(int argc, const char** argv) {
    sl::main::slMainPreparation::main(argc,argv);
    return 0;
}


#endif //!__SL_MAIN_INVOKE__