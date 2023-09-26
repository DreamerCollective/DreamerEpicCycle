cmake_minimum_required(VERSION 3.25.3)
project(DreamerEpicCycle)

set(CMAKE_CXX_STANDARD 14)

include_directories(DreamerEpicCycle/src)
include_directories(DreamerEpicCycle/third-party)
add_subdirectory(DiligentEngine)
add_subdirectory(third_party/flecs/flecs)


add_executable(DreamerEpicCycle WIN32

        src/Graphics/engine.cpp

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

        src/Main/main.cpp
)

target_compile_options(DreamerEpicCycle PRIVATE -DUNICODE -DENGINE_DLL)

target_link_libraries(${PROJECT_NAME} PRIVATE
Diligent-GraphicsEngineD3D11-shared
Diligent-GraphicsEngineD3D12-shared
Diligent-GraphicsEngineVk-shared)

copy_required_dlls(DreamerEpicCycle)


