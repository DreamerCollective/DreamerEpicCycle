cmake_minimum_required(VERSION 3.25.3)
project(DreamerEpicCycle)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)
include_directories(${Vulkan_INCLUDE_DIRS})

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

include_directories(DreamerEpicCycle/src)
add_subdirectory(third_party)

add_executable(DreamerEpicCycle WIN32

	src/Graphics/graphics/asynchronous_loader.cpp
	src/Graphics/graphics/asynchronous_loader.hpp
	src/Graphics/graphics/command_buffer.cpp
	src/Graphics/graphics/command_buffer.hpp
	src/Graphics/graphics/frame_graph.cpp
	src/Graphics/graphics/frame_graph.hpp
	src/Graphics/graphics/gltf_scene.cpp
	src/Graphics/graphics/gltf_scene.hpp
	src/Graphics/graphics/gpu_device.cpp
	src/Graphics/graphics/gpu_device.hpp
	src/Graphics/graphics/gpu_enum.hpp
	src/Graphics/graphics/gpu_profiler.cpp
	src/Graphics/graphics/gpu_profiler.hpp
	src/Graphics/graphics/gpu_resources.cpp
	src/Graphics/graphics/gpu_resources.hpp
	src/Graphics/graphics/obj_scene.cpp
	src/Graphics/graphics/obj_scene.hpp
	src/Graphics/graphics/raptor_imgui.cpp
	src/Graphics/graphics/raptor_imgui.hpp
	src/Graphics/graphics/render_resources_loader.cpp
	src/Graphics/graphics/render_resources_loader.hpp
	src/Graphics/graphics/render_scene.cpp
	src/Graphics/graphics/render_scene.hpp
	src/Graphics/graphics/renderer.cpp
	src/Graphics/graphics/renderer.hpp
	src/Graphics/graphics/scene_graph.cpp
	src/Graphics/graphics/scene_graph.hpp
	src/Graphics/graphics/spirv_parser.cpp
	src/Graphics/graphics/spirv_parser.hpp

	src/Graphics/application/application.cpp
	src/Graphics/application/application.hpp
	src/Graphics/application/game_application.cpp
	src/Graphics/application/game_application.hpp
	src/Graphics/application/game_camera.cpp
	src/Graphics/application/game_camera.hpp
	src/Graphics/application/input.cpp
	src/Graphics/application/input.hpp
	src/Graphics/application/keys.cpp
	src/Graphics/application/keys.hpp
	src/Graphics/application/window.cpp
	src/Graphics/application/window.hpp

	src/Graphics/foundation/array.hpp
	src/Graphics/foundation/assert.cpp
	src/Graphics/foundation/assert.hpp
	src/Graphics/foundation/bit.cpp
	src/Graphics/foundation/bit.hpp
	src/Graphics/foundation/blob.hpp
	src/Graphics/foundation/blob_serialization.cpp
	src/Graphics/foundation/blob_serialization.hpp
	src/Graphics/foundation/camera.cpp
	src/Graphics/foundation/camera.hpp
	src/Graphics/foundation/color.cpp
	src/Graphics/foundation/color.hpp
	src/Graphics/foundation/data_structures.cpp
	src/Graphics/foundation/data_structures.hpp
	src/Graphics/foundation/file.cpp
	src/Graphics/foundation/file.hpp
	src/Graphics/foundation/gltf.cpp
	src/Graphics/foundation/gltf.hpp
	src/Graphics/foundation/hash_map.hpp
	src/Graphics/foundation/log.cpp
	src/Graphics/foundation/log.hpp
	src/Graphics/foundation/memory.cpp
	src/Graphics/foundation/memory.hpp
	src/Graphics/foundation/memory_utils.hpp
	src/Graphics/foundation/numerics.cpp
	src/Graphics/foundation/numerics.hpp
	src/Graphics/foundation/platform.hpp
	src/Graphics/foundation/process.cpp
	src/Graphics/foundation/process.hpp
	src/Graphics/foundation/relative_data_structures.hpp
	src/Graphics/foundation/resource_manager.cpp
	src/Graphics/foundation/resource_manager.hpp
	src/Graphics/foundation/serialization.cpp
	src/Graphics/foundation/serialization.hpp
	src/Graphics/foundation/service.cpp
	src/Graphics/foundation/service.hpp
	src/Graphics/foundation/service_manager.cpp
	src/Graphics/foundation/service_manager.hpp
	src/Graphics/foundation/string.cpp
	src/Graphics/foundation/string.hpp
	src/Graphics/foundation/time.cpp
	src/Graphics/foundation/time.hpp
	src/Graphics/foundation/windows_declarations.h

	src/Graphics/shaders/culling.h
	src/Graphics/shaders/ddgi.h
	src/Graphics/shaders/debug_rendering.h
	src/Graphics/shaders/lighting.h
	src/Graphics/shaders/mesh.h
	src/Graphics/shaders/meshlet.h
	src/Graphics/shaders/platform.h
	src/Graphics/shaders/scene.h

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

        src/main.cpp
)