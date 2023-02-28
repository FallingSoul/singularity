cmake_minimum_required(VERSION 3.0.0)
project(singularity VERSION 0.1.0)

# set cpp standard
set(CMAKE_CXX_STANDARD 20)

# search, show files and save filenames
function(slShowFiles TartgetName Filepath OutList)
    file(GLOB_RECURSE TempList ${Filepath}/*.*)
    message("\n---- "  ${TartgetName}  " ----")
    foreach(x ${TempList})
        message("\t${x}")
    endforeach()
    message("---- "  ${TartgetName}  " ----\n")
    set(${OutList} ${${OutList}} ${TempList} PARENT_SCOPE)
endfunction()

# search and show files
slShowFiles(CORE ./include/sl/core SOURCE_LIST)
slShowFiles(UNICON ./include/sl/unicon SOURCE_LIST)


set(SOURCE_LIST)
slShowFiles(ALL ./include/sl/ SOURCE_LIST)

include_directories(./include)

add_subdirectory(test)