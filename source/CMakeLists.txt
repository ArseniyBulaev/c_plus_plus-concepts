cmake_minimum_required(VERSION 3.5)
project(concepts LANGUAGES CXX)
## MAIN
add_executable(Main main.cpp)

## INHERITANCE
add_executable(inheritance inheritance/public_private_and_protected_inheritance.cpp)
add_executable(visAndAccess inheritance/visibility_and_accessiability.cpp)
## OTHER STUFF
add_executable(pointersToMembers "pointers to members/main.cpp")
add_executable(enums enums/enums.cpp)
target_compile_options(Main PRIVATE -Wall -Wextra -Wpedantic)