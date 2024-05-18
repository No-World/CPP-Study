#最低要求
cmake_minimum_required(VERSION 3.21)
#项目名称
project(Demo)

#设置CMake变量
set(CMAKE_CXX_STANDARD 14)

#将main.cpp生成可执行程序Demo
add_executable(Demo main.cpp)
