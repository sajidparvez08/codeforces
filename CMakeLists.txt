cmake_minimum_required(VERSION 3.27)
project(Codeforces)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Codeforces-style compile flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -pipe -Wall -Wextra")

# Automatically add all .cpp files in this folder as separate executables
file(GLOB CPP_FILES "*.cpp")

foreach(file ${CPP_FILES})
    get_filename_component(exe_name ${file} NAME_WE)
    add_executable(${exe_name} ${file}
            4A_Watermelon.cpp)
endforeach()