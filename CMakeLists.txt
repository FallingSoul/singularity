cmake_minimum_required(VERSION 3.0.0)
project(singularity VERSION 0.1.0)

# set cpp standard
set(CMAKE_CXX_STANDARD 20)

# singalrity core
file(GLOB_RECURSE CORE_LIST ./include/core/*.hpp)
foreach(x ${CORE_LIST})
    message("CORE_LIST: ${x}")
endforeach()


set(SOURCE_LIST 
${CORE_LIST}
)

include_directories(./include)

add_subdirectory(test)