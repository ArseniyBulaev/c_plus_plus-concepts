cmake_minimum_required(VERSION 3.2)
project(MyApp
        LANGUAGES CXX
)
add_executable(notSoEasy not_so_easy.cpp)

target_compile_options(notSoEasy PRIVATE -Wall -Wextra -Wpedantic -Werror)