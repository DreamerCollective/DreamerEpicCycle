cmake_minimum_required(VERSION 3.0.0)

project(DreamerEpicCycle VERSION 0.1.0)

find_package(Vulkan REQUIRED)
find_package(SDL2 REQUIRED)

add_library(RaptorFoundation STATIC
    source/raptor/foundation/array.hpp
    source/raptor/foundation/assert.cpp
    source/raptor/foundation/assert.hpp
    source/raptor/foundation/bit.cpp
    source/raptor/foundation/bit.hpp
    source/raptor/foundation/blob_serialization.cpp
    source/raptor/foundation/blob_serialization.hpp
    source/raptor/foundation/blob.hpp
    source/raptor/foundation/camera.cpp
    source/raptor/foundation/camera.hpp
    source/raptor/foundation/color.cpp
    source/raptor/foundation/color.hpp
    source/raptor/foundation/data_structures.cpp
    source/raptor/foundation/data_structures.hpp
    source/raptor/foundation/file.cpp
    source/raptor/foundation/file.hpp
    source/raptor/foundation/gltf.cpp
    source/raptor/foundation/gltf.hpp
    source/raptor/foundation/hash_map.hpp
    source/raptor/foundation/log.cpp
    source/raptor/foundation/log.hpp
    source/raptor/foundation/memory_utils.hpp
    source/raptor/foundation/memory.cpp
    source/raptor/foundation/memory.hpp
    source/raptor/foundation/numerics.cpp
    source/raptor/foundation/numerics.hpp
    source/raptor/foundation/platform.hpp
    source/raptor/foundation/process.cpp
    source/raptor/foundation/process.hpp
    source/raptor/foundation/relative_data_structures.hpp
    source/raptor/foundation/resource_manager.cpp
    source/raptor/foundation/resource_manager.hpp
    source/raptor/foundation/serialization.cpp
    source/raptor/foundation/serialization.hpp
    source/raptor/foundation/service_manager.cpp
    source/raptor/foundation/service_manager.hpp
    source/raptor/foundation/service.cpp
    source/raptor/foundation/service.hpp
    source/raptor/foundation/string.cpp
    source/raptor/foundation/string.hpp
    source/raptor/foundation/time.cpp
    source/raptor/foundation/time.hpp
)

set_property(TARGET RaptorFoundation PROPERTY CXX_STANDARD 17)

target_compile_definitions(RaptorFoundation PRIVATE
    _CRT_SECURE_NO_WARNINGS

    TRACY_ENABLE
    TRACY_ON_DEMAND
    TRACY_NO_SYSTEM_TRACING
)

target_include_directories(RaptorFoundation PRIVATE
    source
    source/raptor
    source/external
    ${SDL2_INCLUDE_DIRS}
)

add_library(RaptorApp STATIC
    source/raptor/application/application.cpp
    source/raptor/application/application.hpp
    source/raptor/application/game_camera.cpp
    source/raptor/application/game_camera.hpp
    source/raptor/application/game_application.cpp
    source/raptor/application/game_application.hpp
    source/raptor/application/input.cpp
    source/raptor/application/input.hpp
    source/raptor/application/keys.cpp
    source/raptor/application/keys.hpp
    source/raptor/application/window.cpp
    source/raptor/application/window.hpp
)

set_property(TARGET RaptorApp PROPERTY CXX_STANDARD 17)

target_compile_definitions(RaptorApp PRIVATE
    _CRT_SECURE_NO_WARNINGS

    TRACY_ENABLE
    TRACY_ON_DEMAND
    TRACY_NO_SYSTEM_TRACING
)

target_include_directories(RaptorApp PRIVATE
    source
    source/raptor
    source/external
    ${SDL2_INCLUDE_DIRS}
    )

if (WIN32)
    target_link_libraries(RaptorApp PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/lib/x64/assimp-vc143-mt.lib
        C:/SDK/SDL2-2.30.0/ib/x64/SDL2.lib)
else()
    target_link_libraries(RaptorApp PRIVATE
        dl
        pthread
        assimp
        SDL2::SDL2)
endif()

add_library(RaptorExternal STATIC
    source/external/tlsf.c

    source/external/json.hpp

    source/external/imgui/imconfig.h
    source/external/imgui/imgui_draw.cpp
    source/external/imgui/imgui_impl_sdl.cpp
    source/external/imgui/imgui_impl_sdl.h
    source/external/imgui/imgui_internal.h
    source/external/imgui/imgui_memory_editor.h
    source/external/imgui/imgui_tables.cpp
    source/external/imgui/imgui_widgets.cpp
    source/external/imgui/imgui.cpp
    source/external/imgui/imgui.h
    source/external/imgui/imstb_rectpack.h
    source/external/imgui/imstb_textedit.h
    source/external/imgui/imstb_truetype.h
    source/external/imgui/stb_image.h
    source/external/imgui/TextEditor.cpp
    source/external/imgui/TextEditor.h

    source/external/tracy/tracy/Tracy.hpp
    source/external/tracy/tracy/TracyVulkan.hpp
    source/external/tracy/TracyClient.cpp

    source/external/enkiTS/LockLessMultiReadPipe.h
    source/external/enkiTS/TaskScheduler.cpp
    source/external/enkiTS/TaskScheduler.h

    source/external/meshoptimizer/allocator.cpp
    source/external/meshoptimizer/clusterizer.cpp
    source/external/meshoptimizer/indexcodec.cpp
    source/external/meshoptimizer/indexgenerator.cpp
    source/external/meshoptimizer/meshoptimizer.h
    source/external/meshoptimizer/overdrawanalyzer.cpp
    source/external/meshoptimizer/overdrawoptimizer.cpp
    source/external/meshoptimizer/simplifier.cpp
    source/external/meshoptimizer/spatialorder.cpp
    source/external/meshoptimizer/stripifier.cpp
    source/external/meshoptimizer/vcacheanalyzer.cpp
    source/external/meshoptimizer/vcacheoptimizer.cpp
    source/external/meshoptimizer/vertexcodec.cpp
    source/external/meshoptimizer/vertexfilter.cpp
    source/external/meshoptimizer/vfetchanalyzer.cpp
    source/external/meshoptimizer/vfetchoptimizer.cpp

    source/external/assimp/include/assimp/cimport.h
    source/external/assimp/include/assimp/scene.h
    source/external/assimp/include/assimp/postprocess.h

    source/external/flecs/flecs/flecs.h
	source/external/flecs/flecs/flecs.c
	
	source/external/flecs/flecs-game/src/camera_controller.c
	source/external/flecs/flecs-game/src/light_controller.c
	source/external/flecs/flecs-game/src/main.c
	source/external/flecs/flecs-game/src/world_cells.c
	source/external/flecs/flecs-game/include/flecs_game.h
	source/external/flecs/flecs-game/include/flecs-game/bake_config.h

	source/external/flecs/flecs-systems-transform/src/main.c
	source/external/flecs/flecs-systems-transform/include/flecs_systems_transform.h
	source/external/flecs/flecs-systems-transform/include/flecs-systems-transform/bake_config.h

	source/external/flecs/flecs-systems-physics/src/main.c
	source/external/flecs/flecs-systems-physics/src/octree.c
	source/external/flecs/flecs-systems-physics/src/spatial_query.c
	source/external/flecs/flecs-systems-physics/include/flecs_systems_physics.h
	source/external/flecs/flecs-systems-physics/include/flecs-systems-physics/bake_config.h
	source/external/flecs/flecs-systems-physics/include/flecs-systems-physics/octree.h
	source/external/flecs/flecs-systems-physics/include/flecs-systems-physics/spatial_query.h

	source/external/flecs/flecs-components-transform/src/transform.c
	source/external/flecs/flecs-components-transform/include/flecs_components_transform.h
	source/external/flecs/flecs-components-transform/include/flecs-components-transform/bake_config.h

	source/external/flecs/flecs-components-physics/src/physics.c
	source/external/flecs/flecs-components-physics/include/flecs_components_physics.h
	source/external/flecs/flecs-components-physics/include/flecs-components-physics/bake_config.h

	source/external/flecs/flecs-components-cglm/src/main.c
	source/external/flecs/flecs-components-cglm/include/flecs_components_cglm.h
	source/external/flecs/flecs-components-cglm/include/flecs-components-cglm/bake_config.h

	source/external/flecs/flecs-components-geometry/src/geometry.c
	source/external/flecs/flecs-components-geometry/include/flecs_components_geometry.h
	source/external/flecs/flecs-components-geometry/include/flecs-components-geometry/bake_config.h

	source/external/flecs/flecs-components-graphics/src/graphics.c
	source/external/flecs/flecs-components-graphics/include/flecs_components_graphics.h
	source/external/flecs/flecs-components-graphics/include/flecs-components-graphics/bake_config.h

	source/external/flecs/flecs-components-input/src/main.c
	source/external/flecs/flecs-components-input/include/flecs_components_input.h
	source/external/flecs/flecs-components-input/include/flecs-components-input/bake_config.h

	source/external/flecs/flecs-components-gui/src/main.c
	source/external/flecs/flecs-components-gui/include/flecs_components_gui.h
	source/external/flecs/flecs-components-gui/include/flecs-components-gui/bake_config.h
)

if (WIN32)
    target_link_libraries(RaptorExternal PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/lib/x64/assimp-vc143-mt.lib
        C:/SDK/SDL2-2.30.0/ib/x64/SDL2.lib
        SDL2::SDL2)
else()
    target_link_libraries(RaptorExternal PRIVATE
        dl
        pthread
        assimp
        SDL2::SDL2)
endif()

if (WIN32)
    target_sources(RaptorExternal PRIVATE
        source/external/StackWalker.cpp)
endif()

target_compile_definitions(RaptorExternal PRIVATE
    TRACY_ENABLE
    TRACY_ON_DEMAND
    TRACY_NO_SYSTEM_TRACING
)

target_include_directories(RaptorExternal PRIVATE
    source
    source/raptor
    source/external
)


add_library(RaptorGraphics
    source/graphics/asynchronous_loader.cpp
    source/graphics/asynchronous_loader.hpp
    source/graphics/command_buffer.cpp
    source/graphics/command_buffer.hpp
    source/graphics/frame_graph.cpp
    source/graphics/frame_graph.hpp
    source/graphics/gltf_scene.cpp
    source/graphics/gltf_scene.hpp
    source/graphics/gpu_device.cpp
    source/graphics/gpu_device.hpp
    source/graphics/gpu_enum.hpp
    source/graphics/gpu_profiler.cpp
    source/graphics/gpu_profiler.hpp
    source/graphics/gpu_resources.cpp
    source/graphics/gpu_resources.hpp
    source/graphics/obj_scene.cpp
    source/graphics/obj_scene.hpp
    source/graphics/render_resources_loader.cpp
    source/graphics/render_resources_loader.hpp
    source/graphics/render_scene.cpp
    source/graphics/render_scene.hpp
    source/graphics/renderer.cpp
    source/graphics/renderer.hpp
    source/graphics/scene_graph.cpp
    source/graphics/scene_graph.hpp
    source/graphics/spirv_parser.cpp
    source/graphics/spirv_parser.hpp

    source/graphics/raptor_imgui.cpp
    source/graphics/raptor_imgui.hpp

)

set_property(TARGET RaptorGraphics PROPERTY CXX_STANDARD 17)

target_include_directories(RaptorGraphics PRIVATE
    source
    source/raptor
    source/external
)

if (WIN32)
    target_compile_definitions(RaptorGraphics PRIVATE
        _CRT_SECURE_NO_WARNINGS
        WIN32_LEAN_AND_MEAN
        NOMINMAX)
endif()

target_compile_definitions(RaptorGraphics PRIVATE
    RAPTOR_WORKING_FOLDER="${CMAKE_CURRENT_SOURCE_DIR}"
    RAPTOR_SHADER_FOLDER="${CMAKE_CURRENT_SOURCE_DIR}/shaders/"
    RAPTOR_DATA_FOLDER="${CMAKE_SOURCE_DIR}/binaries/data"
)

target_compile_definitions(RaptorGraphics PRIVATE
    TRACY_ENABLE
    TRACY_ON_DEMAND
    TRACY_NO_SYSTEM_TRACING
)

target_include_directories(RaptorGraphics PRIVATE
    .
    ..
    ../raptor
    ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/include
    ${Vulkan_INCLUDE_DIRS}
)

if (WIN32)
    target_link_directories(RaptorGraphics PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/bin/x64
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/lib/x64
    )

   
else()
    target_link_directories(RaptorGraphics PRIVATE
        ../../binaries/assimp/linux/lib)

   
endif()

if (WIN32)
    target_link_libraries(RaptorGraphics PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/lib/x64/assimp-vc143-mt.lib
        C:/SDK/SDL2-2.30.0/ib/x64/SDL2.libSDL2
        SDL2::SDL2)
else()
    target_link_libraries(RaptorGraphics PRIVATE
        dl
        pthread
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp
        SDL2::SDL2)
endif()

target_link_libraries(RaptorGraphics PRIVATE
    RaptorFoundation
    RaptorExternal
    RaptorApp
    ${Vulkan_LIBRARIES}
)

if (WIN32)
    set(DLLS_TO_COPY
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/bin/x64/assimp-vc143-mt.dll
    )

    foreach(DLL ${DLLS_TO_COPY})
        add_custom_command(TARGET RaptorGraphics POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy ${DLL} "$(OutDir)"
            VERBATIM
        )
    endforeach()
endif()

add_library(DreamerEpicCycleInteraction STATIC
	source/interaction/Character/CharacterComponents.h
	source/interaction/Character/Characters.cpp
	source/interaction/Character/Characters.h

	source/interaction/Civilisation/CivilisationComponents.h
	source/interaction/Civilisation/CivilisationModule.h

	source/interaction/Command/Unit.cpp
	source/interaction/Command/Unit.h
	source/interaction/Command/UnitComponents.h
	
	source/interaction/Helpers/MathHelpers.cpp
	source/interaction/Helpers/MathHelpers.h
	
	source/interaction/Items/ItemComponents.h
	source/interaction/Items/ItemModule.h
	
	source/interaction/Items/ItemConfig/ItemConfig.cpp
	source/interaction/Items/ItemConfig/ItemConfig.h
	source/interaction/Items/ItemConfig/ItemConfigComponents.h
	source/interaction/Items/ItemConfig/ItemConfigModule.h

	source/interaction/Items/ItemGeneration/ItemGenerationModule.h
	source/interaction/Items/ItemGeneration/ItemGeneration.cpp
	source/interaction/Items/ItemGeneration/ItemGeneration.h
	source/interaction/Items/ItemGeneration/ItemGenerationAffixes.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationAffixes.h
	source/interaction/Items/ItemGeneration/ItemGenerationBase.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationBase.h
	source/interaction/Items/ItemGeneration/ItemGenerationManufacturer.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationManufacturer.h
	source/interaction/Items/ItemGeneration/ItemGenerationMaterial.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationMaterial.h
	source/interaction/Items/ItemGeneration/ItemGenerationParts.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationParts.h
	source/interaction/Items/ItemGeneration/ItemGenerationQuality.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationQuality.h
	source/interaction/Items/ItemGeneration/ItemGenerationRarity.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationRarity.h
	source/interaction/Items/ItemGeneration/ItemGenerationSeed.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationSeed.h
	source/interaction/Items/ItemGeneration/ItemGenerationStatCompile.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationStatCompile.h
	source/interaction/Items/ItemGeneration/ItemGenerationStats.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationStats.h
	source/interaction/Items/ItemGeneration/ItemGenerationTags.cpp
	source/interaction/Items/ItemGeneration/ItemGenerationTags.h

	source/interaction/Universe/Area/ChunkComponents.h
	source/interaction/Universe/Area/ChunkCreation.cpp
	source/interaction/Universe/Area/ChunkCreation.h
	source/interaction/Universe/Area/RegionCreation.cpp
	source/interaction/Universe/Area/RegionCreation.h
	source/interaction/Universe/Area/VoxelComponents.h
	
	source/interaction/Universe/Galaxy/GalaxyComponentConfig.h
	source/interaction/Universe/Galaxy/GalaxyComponents.h
	source/interaction/Universe/Galaxy/GalaxySystems.cpp
	source/interaction/Universe/Galaxy/GalaxySystems.h

	source/interaction/Universe/World/BioneComponents.h
	source/interaction/Universe/World/BioneCreation.cpp
	source/interaction/Universe/World/BioneCreation.h
)

target_link_libraries(RaptorGraphics PRIVATE
    RaptorExternal
)

add_executable(DreamerEpicCycle
	main.cpp
)

target_include_directories(DreamerEpicCycle PRIVATE
    source
    source/raptor
)

target_link_libraries(DreamerEpicCycle PRIVATE
    RaptorFoundation
    RaptorExternal
    RaptorApp
    DreamerEpicCycleInteraction
    ${Vulkan_LIBRARIES}
    ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/lib/x64/assimp-vc143-mt.lib
    C:/SDK/SDL2-2.30.0/lib/x64/SDL2.lib
)

if (WIN32)
    target_link_libraries(DreamerEpicCycle PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/source/external/assimp/lib/x64/assimp-vc143-mt.lib
        C:/SDK/SDL2-2.30.0/lib/x64/SDL2.lib
        Vulkan::Vulkan)
else()
    target_link_libraries(DreamerEpicCycle PRIVATE
        dl
        pthread
        assimp
        SDL2::SDL2
        Vulkan::Vulkan)
endif()

target_compile_definitions(DreamerEpicCycle PRIVATE
    RAPTOR_WORKING_FOLDER="${CMAKE_CURRENT_SOURCE_DIR}"
    RAPTOR_SHADER_FOLDER="${CMAKE_CURRENT_SOURCE_DIR}/shaders/"
    RAPTOR_DATA_FOLDER="${CMAKE_SOURCE_DIR}/binaries/data"
)

if (WIN32)
    target_compile_definitions(DreamerEpicCycle PRIVATE
        _CRT_SECURE_NO_WARNINGS
        WIN32_LEAN_AND_MEAN
        NOMINMAX)
endif()


