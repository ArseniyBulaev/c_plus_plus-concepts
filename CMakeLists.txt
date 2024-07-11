cmake_minimum_required(VERSION 3.5)

project(CPLUSPLUSCONCEPTS LANGUAGES CXX)
include_directories(include)
file(GLOB SOURCES "source/*/*.cpp")
add_executable(CPLUSPLUSCONCEPTS "source/main.cpp" ${SOURCES})
target_compile_options(CPLUSPLUSCONCEPTS PRIVATE -Wall -Wextra -Wpedantic -Werror)