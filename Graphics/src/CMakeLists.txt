
# Add source to this project's executable.
add_executable (src 
  vk_engine.cpp
  vk_engine.h

  vk_loader.h
  vk_loader.cpp
)


set_property(TARGET src PROPERTY CXX_STANDARD 20)
set_property(TARGET src PROPERTY VS_DEBUGGER_WORKING_DIRECTORY $<TARGET_FILE_DIR:src>)

target_include_directories(src PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(src shared vkbootstrap imgui fastgltf::fastgltf)

add_custom_command(TARGET src POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:src> $<TARGET_FILE_DIR:src>
  COMMAND_EXPAND_LISTS
  )