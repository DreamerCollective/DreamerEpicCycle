cmake_minimum_required(VERSION 3.25.3)
project(DreamerEpicCycle)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Graphics)
add_subdirectory(Interaction)

add_executable(DreamerEpicCycle WIN32

        main.cpp
)