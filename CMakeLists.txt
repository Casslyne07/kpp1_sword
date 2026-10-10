cmake_minimum_required(VERSION 3.10)   # CMake minimal versi 3.10
project(kpp1_sword)                    # nama proyek
set(CMAKE_CXX_STANDARD 17)             # pakai standar C++17
add_executable(sword_app main.cpp sword.cpp)   # program "sword_app" dari 2 file ini