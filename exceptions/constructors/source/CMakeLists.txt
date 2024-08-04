cmake_minimum_required(VERSION 3.2)
project(MyApp
        LANGUAGES CXX
)
add_executable(myExe main.cpp)
target_compile_options(myExe PRIVATE -Wall -Wextra -Wpedantic -Werror)
