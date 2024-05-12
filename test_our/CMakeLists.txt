cmake_minimum_required(VERSION 3.22)   #手册中没有这一行，但是Cmake要求每个Cmakelists开头必须添加这一行，否则报错
project(cmake_example)
find_package(verilator HINTS $ENV{VERILATOR_ROOT})
add_executable(Vour sim_main.cpp)
verilate(Vour SOURCES our.v)
