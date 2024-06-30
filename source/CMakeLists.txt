cmake_minimum_required(VERSION 3.5)
project(concepts LANGUAGES CXX)
## INHERITANCE
# add_executable(myExe inheritance/public_private_and_protected_inheritance.cpp)
add_executable(myExe inheritance/visibility_and_accessiability.cpp)
## OTHER STUFF
# add_executable(myExe "pointers to members/main.cpp")
# add_executable(myExe enums/main.cpp)
target_compile_options(myExe PRIVATE -Wall -Wextra -Wpedantic)