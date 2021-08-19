cmake_minimum_required(VERSION 3.20)
project(cpp_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories("00 Hello World")
include_directories(c)

add_executable(cpp_programming
        "00 Hello World/hello.cpp"
        "00 Hello World/hello.h"
        "00 Hello World/hello1.cpp"
        "01 Variables and Data Types/string.cpp"
        "01 Variables and Data Types/stringLength.cpp"
        "01 Variables and Data Types/subString.cpp"
        "01 Variables and Data Types/variables.cpp"
        "01 Variables and Data Types/variables2.cpp"
        "02 Conditions/if_else.cpp"
        "03 Input/area_circle.cpp"
        "03 Input/implicitConversion.cpp"
        "03 Input/mean.cpp"
        "03 Input/typeCast.cpp"
        "04 Functions/func.cpp"
        "04 Functions/multiply.cpp"
        "05 Conditions/else.cpp"
        "05 Conditions/if.cpp"
        "05 Conditions/leap_year.cpp"
        "05 Conditions/turnary.cpp"
        "06 File Operations/fstream.cpp"
        "06 File Operations/ifstreamExample.cpp"
        "07 Arrays/arrays.cpp"
        "07 Arrays/ndim_array.cpp"
        c/hello.c
        c/hello.h
        Lectures/Slides/restaurantBill.cpp
        Lectures/Slides/roomArea.cpp)
