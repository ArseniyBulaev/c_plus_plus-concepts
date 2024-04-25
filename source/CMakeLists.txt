cmake_minimum_required(VERSION 3.5)
project(concepts LANGUAGES CXX)
add_executable(myExe enums/main.cpp)
target_compile_options(myExe PRIVATE -Wall -Wextra -Wpedantic)