
# Add source to this project's executable.
add_executable (vulkan 
  main.cpp
  vk_engine.cpp
  vk_engine.h

  vk_loader.h
  vk_loader.cpp
)


set_property(TARGET vulkan PROPERTY CXX_STANDARD 20)
set_property(TARGET vulkan PROPERTY VS_DEBUGGER_WORKING_DIRECTORY $<TARGET_FILE_DIR:vulkan>)

target_include_directories(vulkan PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(vulkan vulkan_shared vkbootstrap imgui fastgltf::fastgltf)

add_custom_command(TARGET vulkan POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:vulkan> $<TARGET_FILE_DIR:vulkan>
  COMMAND_EXPAND_LISTS
  )