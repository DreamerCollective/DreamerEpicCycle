
# Add source to this project's executable.
add_library (vulkan_shared STATIC
  vk_types.h
  vk_initializers.cpp
  vk_initializers.h
  vk_images.h
  vk_images.cpp 
  vk_descriptors.h
  vk_descriptors.cpp
  vk_pipelines.h
  vk_pipelines.cpp
  camera.cpp
  camera.h
  meshes.h
  meshes.cpp
)

find_package(SDL2 REQUIRED)

set_property(TARGET vulkan_shared PROPERTY CXX_STANDARD 20)
target_compile_definitions(vulkan_shared PUBLIC GLM_FORCE_DEPTH_ZERO_TO_ONE)

target_include_directories(vulkan_shared PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(vulkan_shared PUBLIC vma glm Vulkan::Vulkan fmt::fmt stb_image SDL2::SDL2)

target_precompile_headers(vulkan_shared PUBLIC <optional> <vector> <memory> <string> <vector> <unordered_map> <glm/mat4x4.hpp>  <glm/vec4.hpp> <vulkan/vulkan.h>)
