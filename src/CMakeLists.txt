cmake_minimum_required(VERSION 3.17)
project(src)

set(CMAKE_CXX_STANDARD 17)

add_executable(app main.cpp Encrypter.cpp baseChanger/baseChanger.cpp)
add_library(static Encrypter.cpp)
add_library(shared SHARED Encrypter.cpp)