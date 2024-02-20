cmake_minimum_required (VERSION 3.25)
# Add source to this project's executable.
project(Graphics)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(third_party)

find_package(Vulkan REQUIRED)
find_package(SDL2 REQUIRED)
find_program(GLSL_VALIDATOR glslangValidator HINTS /usr/bin /usr/local/bin $ENV{VULKAN_SDK}/Bin/ $ENV{VULKAN_SDK}/Bin32/)

add_executable (Graphics WIN32
	vk_types.h
	vk_initializers.cpp
	vk_initializers.h
	vk_images.h
	vk_images.cpp 
	vk_descriptors.h
	vk_descriptors.cpp
	vk_pipelines.h
	vk_pipelines.cpp
	vk_engine.cpp
	vk_engine.h
	vk_loader.h
	vk_loader.cpp
	camera.cpp
	camera.h
	meshes.h
	meshes.cpp
)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

set_property(TARGET Graphics PROPERTY VS_DEBUGGER_WORKING_DIRECTORY $<TARGET_FILE_DIR:Graphics>)
target_compile_definitions(Graphics PUBLIC GLM_FORCE_DEPTH_ZERO_TO_ONE)

target_include_directories(Graphics PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(Graphics PUBLIC vma glm vkbootstrap imgui fastgltf::fastgltf Vulkan::Vulkan fmt::fmt stb_image SDL2::SDL2)

target_precompile_headers(Graphics PUBLIC <optional> <vector> <memory> <string> <vector> <unordered_map> <glm/mat4x4.hpp>  <glm/vec4.hpp> <vulkan/vulkan.h>)

file(GLOB_RECURSE GLSL_SOURCE_FILES
    "${PROJECT_SOURCE_DIR}/shaders/*.frag"
    "${PROJECT_SOURCE_DIR}/shaders/*.vert"
    "${PROJECT_SOURCE_DIR}/shaders/*.comp"
    )

foreach(GLSL ${GLSL_SOURCE_FILES})
  message(STATUS "BUILDING SHADER")
  get_filename_component(FILE_NAME ${GLSL} NAME)
  set(SPIRV "${PROJECT_SOURCE_DIR}/shaders/${FILE_NAME}.spv")
  message(STATUS ${GLSL})
  add_custom_command(
    OUTPUT ${SPIRV}
    COMMAND ${GLSL_VALIDATOR} -V ${GLSL} -o ${SPIRV}
    DEPENDS ${GLSL})
  list(APPEND SPIRV_BINARY_FILES ${SPIRV})
endforeach(GLSL)

add_custom_target(
    Shaders 
    DEPENDS ${SPIRV_BINARY_FILES}
    )

add_custom_command(TARGET Graphics POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:Graphics> $<TARGET_FILE_DIR:Graphics>
  COMMAND_EXPAND_LISTS
  )
