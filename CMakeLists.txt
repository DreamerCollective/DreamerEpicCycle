cmake_minimum_required(VERSION 3.21.1)
project(DreamerEpicCycle)

set(CMAKE_CXX_STANDARD 17)

include_directories(DreamerEpicCycle/src)
include_directories(DreamerEpicCycle/third-party)
include_directories(DreamerEpicCycle/shaders)


add_executable(DreamerEpicCycle
        src/Graphics/first_app.cpp
        src/Graphics/first_app.hpp
        src/Graphics/keyboard_movement_controller.cpp
        src/Graphics/keyboard_movement_controller.hpp
        src/Graphics/lve_buffer.cpp
        src/Graphics/lve_buffer.hpp
        src/Graphics/lve_camera.cpp
        src/Graphics/lve_camera.hpp
        src/Graphics/lve_device.cpp
        src/Graphics/lve_device.hpp
        src/Graphics/lve_frame_info.hpp
        src/Graphics/lve_game_object.cpp
        src/Graphics/lve_game_object.hpp
        src/Graphics/lve_model.cpp
        src/Graphics/lve_model.hpp
        src/Graphics/lve_pipeline.cpp
        src/Graphics/lve_pipeline.hpp
        src/Graphics/lve_renderer.cpp
        src/Graphics/lve_renderer.hpp
        src/Graphics/lve_swap_chain.cpp
        src/Graphics/lve_swap_chain.hpp
        src/Graphics/lve_utils.hpp
        src/Graphics/simple_render_system.cpp
        src/Graphics/simple_render_system.hpp
        src/Graphics/lve_window.cpp
        src/Graphics/lve_window.hpp
        third_party/tinyobjloader/tiny_obj_loader.h

        third_party/flecs/flecs.c
        third_party/flecs/flecs.h

        src/Interaction/Helpers/MathHelpers.h
        src/Interaction/Helpers/MathHelpers.cpp

        src/Interaction/Character/Characters.cpp
        src/Interaction/Character/Characters.h
        src/Interaction/Character/CharacterComponents.h

        src/Interaction/Universe/Galaxy/GalaxyComponents.h
        src/Interaction/Universe/Galaxy/GalaxyComponentConfig.h
        src/Interaction/Universe/Galaxy/GalaxySystems.cpp
        src/Interaction/Universe/Galaxy/GalaxySystems.h
        src/Interaction/Universe/Area/RegionComponents.h
        src/Interaction/Universe/Area/RegionCreation.h
        src/Interaction/Universe/Area/RegionCreation.h
        src/Interaction/Universe/Area/VoxelComponents.h
        src/Interaction/Universe/World/BioneComponents.h
        src/Interaction/Universe/World/BioneCreation.h
        src/Interaction/Universe/World/BioneCreation.cpp
        src/Interaction/Universe/Area/ChunkComponents.h
        src/Interaction/Universe/Area/ChunkCreation.h
        src/Interaction/Universe/Area/ChunkCreation.cpp

        src/Interaction/Items/Item.cpp
        src/Interaction/Items/Item.h
        src/Interaction/Items/ItemComponents.cpp
        src/Interaction/Items/ItemComponents.h
        src/Interaction/Items/ItemConfig.cpp
        src/Interaction/Items/ItemConfig.h
        src/Interaction/Items/ItemConfigComponents.h



        src/Main/main.cpp
        )

if (WIN32)
    target_include_directories(${PROJECT_NAME} PUBLIC
            c:/SDK/VulkanSDK/Include
            c:/SDK/glfw-3.3.4/include
            c:/SDK/glm
            ${PROJECT_SOURCE_DIR}/third_party
            )

    target_link_directories(${PROJECT_NAME} PUBLIC
            c:/SDK/VulkanSDK/Lib
            c:/SDK/glfw-3.3.4.bin.WIN64/lib-vc2019
            )

    target_link_libraries(${PROJECT_NAME} glfw3 vulkan-1)
elseif (UNIX)
    target_include_directories(${PROJECT_NAME} PUBLIC src/third_party)
    target_link_libraries(${PROJECT_NAME} glfw vulkan)
endif()