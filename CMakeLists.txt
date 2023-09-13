cmake_minimum_required(VERSION 3.21.1)
project(DreamerEpicCycle)

set(CMAKE_CXX_STANDARD 20)

include_directories(DreamerEpicCycle/src)
include_directories(DreamerEpicCycle/third-party)
include_directories(DreamerEpicCycle/shaders)


add_executable(DreamerEpicCycle

        third_party/tinyobjloader/tiny_obj_loader.h
        third_party/flecs/flecs.c
        third_party/flecs/flecs.h
        third_party/simdjson/simdjson.cpp
        third_party/simdjson/simdjson.h

        src/Graphics/control/app.cpp
        src/Graphics/control/app.h
        src/Graphics/control/logging.cpp
        src/Graphics/control/logging.h

        src/Graphics/model/scene.cpp
        src/Graphics/model/scene.h
        src/Graphics/model/vertex_menagerie.cpp
        src/Graphics/model/vertex_menagerie.h

        src/Graphics/view/vkImage/cubemap.cpp
        src/Graphics/view/vkImage/cubemap.h
        src/Graphics/view/vkImage/image.cpp
        src/Graphics/view/vkImage/image.h
        src/Graphics/view/vkImage/stb_image.h
        src/Graphics/view/vkImage/texture.cpp
        src/Graphics/view/vkImage/texture.h

        src/Graphics/view/vkInit/commands.h
        src/Graphics/view/vkInit/descriptors.cpp
        src/Graphics/view/vkInit/descriptors.h
        src/Graphics/view/vkInit/device.h
        src/Graphics/view/vkInit/framebuffer.h
        src/Graphics/view/vkInit/instance.h
        src/Graphics/view/vkInit/pipeline.cpp
        src/Graphics/view/vkInit/pipeline.h
        src/Graphics/view/vkInit/swapchain.h
        src/Graphics/view/vkInit/sync.h

        src/Graphics/view/vkJob/job.h
        src/Graphics/view/vkJob/job.cpp
        src/Graphics/view/vkJob/worker_thread.h
        src/Graphics/view/vkJob/worker_thread.cpp

        src/Graphics/view/vkMesh/mesh.h
        src/Graphics/view/vkMesh/obj_mesh.h
        src/Graphics/view/vkMesh/obj_mesh.cpp

        src/Graphics/view/vkUtil/frame.h
        src/Graphics/view/vkUtil/frame.cpp
        src/Graphics/view/vkUtil/memory.h
        src/Graphics/view/vkUtil/memory.cpp
        src/Graphics/view/vkUtil/queue_families.h
        src/Graphics/view/vkUtil/render_structs.h
        src/Graphics/view/vkUtil/shaders.cpp
        src/Graphics/view/vkUtil/shaders.h
        src/Graphics/view/vkUtil/single_time_commands.h
        src/Graphics/view/vkUtil/single_time_commands.cpp

        src/Graphics/view/engine.cpp
        src/Graphics/view/engine.h

        src/Graphics/config.h
        src/Graphics/config.cpp


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

        src/Interaction/Civilisation/CivilisationModule.h
        src/Interaction/Civilisation/CivilisationComponents.h

        src/Interaction/Command/Unit.cpp
        src/Interaction/Command/UnitComponents.h

        src/Interaction/Items/ItemComponents.h
        src/Interaction/Items/ItemModule.h

        src/Interaction/Items/ItemConfig/ItemConfig.cpp
        src/Interaction/Items/ItemConfig/ItemConfig.h
        src/Interaction/Items/ItemConfig/ItemConfigComponents.h
        src/Interaction/Items/ItemConfig/ItemConfigModule.h

        src/Interaction/Items/ItemGeneration/ItemGeneration.cpp
        src/Interaction/Items/ItemGeneration/ItemGeneration.h
        src/Interaction/Items/ItemGeneration/ItemGenerationSeed.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationSeed.h
        src/Interaction/Items/ItemGeneration/ItemGenerationBase.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationBase.h
        src/Interaction/Items/ItemGeneration/ItemGenerationRarity.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationRarity.h
        src/Interaction/Items/ItemGeneration/ItemGenerationQuality.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationQuality.h
        src/Interaction/Items/ItemGeneration/ItemGenerationMaterial.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationMaterial.h
        src/Interaction/Items/ItemGeneration/ItemGenerationManufacturer.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationManufacturer.h
        src/Interaction/Items/ItemGeneration/ItemGenerationAffixes.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationAffixes.h
        src/Interaction/Items/ItemGeneration/ItemGenerationParts.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationParts.h
        src/Interaction/Items/ItemGeneration/ItemGenerationTags.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationTags.h
        src/Interaction/Items/ItemGeneration/ItemGenerationStats.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationStats.h
        src/Interaction/Items/ItemGeneration/ItemGenerationStatCompile.cpp
        src/Interaction/Items/ItemGeneration/ItemGenerationStatCompile.h
        src/Interaction/Items/ItemGeneration/ItemGenerationModule.h

        src/Main/main.cpp src/Graphics/config.cpp src/Graphics/config.cpp src/Graphics/view/vkImage/cubemap.cpp)

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