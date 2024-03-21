cmake_minimum_required(VERSION 3.27)
project(jdr)

set(CMAKE_CXX_STANDARD 23)

add_executable(jdr main.cpp
        tryYourLuck/TryYourLuck.cpp
        tryYourLuck/TryYourLuck.h)
