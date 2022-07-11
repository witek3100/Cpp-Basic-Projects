cmake_minimum_required(VERSION 3.21)
project(Ships)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ships main.cpp source_files/Ships.cpp header_files/Ships.h source_files/Menu.cpp header_files/Menu.h source_files/Game.cpp header_files/Game.h source_files/Board.cpp header_files/Board.h)
