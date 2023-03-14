cmake_minimum_required(VERSION 3.24)
project(Variables)

set(CMAKE_CXX_STANDARD 20)

add_executable(Variables main.cpp)
add_executable(Variables_const constant.cpp)
add_executable(Variables_naming naming_convention.cpp)
add_executable(Variables_math mathematical_operation.cpp)
add_executable(Variables_order operator_precedense.cpp)
add_executable(Variables_input input_from_console.cpp)

