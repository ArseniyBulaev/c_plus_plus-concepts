cmake_minimum_required(VERSION 3.5)

project(CPLUSPLUSCONCEPTS LANGUAGES CXX)
include_directories(include)
file(GLOB SOURCES "source/*/*.cpp" "source/main.cpp")
add_executable(CPLUSPLUSCONCEPTS  ${SOURCES})
target_compile_options(CPLUSPLUSCONCEPTS PRIVATE -Wall -Wextra -Wpedantic -Werror)