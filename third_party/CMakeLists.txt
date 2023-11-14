cmake_minimum_required(VERSION 3.25.3)
project(DreamerEpicCycle)

set(CMAKE_CXX_STANDARD 11)


add_subdirectory(flecs)
add_subdirectory(cglm)
add_subdirectory(enkiTS)
add_subdirectory(imgui)
add_subdirectory(meshoptimizer)
add_subdirectory(tracy)

add_executable(DreamerEpicCycle WIN32

	json.hpp
	StackWalker.cpp
	StackWalker.h
	stb_image.h
	thsvs.h
	tlsf.c
	tlsf.h
	vl_mem_alloc.h
	wyhash.h

)