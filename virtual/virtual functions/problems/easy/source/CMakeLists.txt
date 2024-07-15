cmake_minimum_required(VERSION 3.2)
project(MyApp
        LANGUAGES CXX
)
add_executable(easy easy.cpp)

target_compile_options(easy PRIVATE -Wall -Wextra -Wpedantic -Werror)