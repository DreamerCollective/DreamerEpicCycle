cmake_minimum_required(VERSION 3.25.3)
project(DreamerEpicCycle)

set(CMAKE_CXX_STANDARD 11)


add_subdirectory(flecs/flecs)
add_subdirectory(flecs/flecs-components-cglm)
add_subdirectory(flecs/flecs-components-geometry)
add_subdirectory(flecs/flecs-components-graphics)
add_subdirectory(flecs/flecs-components-gui)
add_subdirectory(flecs/flecs-components-input)
add_subdirectory(flecs/flecs-components-physics)
add_subdirectory(flecs/flecs-components-transform)
add_subdirectory(flecs/flecs-game)
add_subdirectory(flecs/flecs-systems-physics)
add_subdirectory(flecs/flecs-systems-transform)