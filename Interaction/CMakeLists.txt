cmake_minimum_required(VERSION 3.25.3)
project(Interaction)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(third_party)

add_executable(Interaction WIN32

	Helpers/MathHelpers.h
        Helpers/MathHelpers.cpp

        Character/Characters.cpp
        Character/Characters.h
        Character/CharacterComponents.h

        Universe/Galaxy/GalaxyComponents.h
        Universe/Galaxy/GalaxyComponentConfig.h
        Universe/Galaxy/GalaxySystems.cpp
        Universe/Galaxy/GalaxySystems.h
        Universe/Area/RegionComponents.h
        Universe/Area/RegionCreation.h
        Universe/Area/RegionCreation.h
        Universe/Area/VoxelComponents.h
        Universe/World/BioneComponents.h
        Universe/World/BioneCreation.h
        Universe/World/BioneCreation.cpp
        Universe/Area/ChunkComponents.h
        Universe/Area/ChunkCreation.h
        Universe/Area/ChunkCreation.cpp

        Civilisation/CivilisationModule.h
        Civilisation/CivilisationComponents.h

        Command/Unit.cpp
        Command/UnitComponents.h

        Items/ItemComponents.h
        Items/ItemModule.h

        Items/ItemConfig/ItemConfig.cpp
        Items/ItemConfig/ItemConfig.h
        Items/ItemConfig/ItemConfigComponents.h
        Items/ItemConfig/ItemConfigModule.h

        Items/ItemGeneration/ItemGeneration.cpp
        Items/ItemGeneration/ItemGeneration.h
        Items/ItemGeneration/ItemGenerationSeed.cpp
        Items/ItemGeneration/ItemGenerationSeed.h
        Items/ItemGeneration/ItemGenerationBase.cpp
        Items/ItemGeneration/ItemGenerationBase.h
        Items/ItemGeneration/ItemGenerationRarity.cpp
        Items/ItemGeneration/ItemGenerationRarity.h
        Items/ItemGeneration/ItemGenerationQuality.cpp
        Items/ItemGeneration/ItemGenerationQuality.h
        Items/ItemGeneration/ItemGenerationMaterial.cpp
        Items/ItemGeneration/ItemGenerationMaterial.h
        Items/ItemGeneration/ItemGenerationManufacturer.cpp
        Items/ItemGeneration/ItemGenerationManufacturer.h
        Items/ItemGeneration/ItemGenerationAffixes.cpp
        Items/ItemGeneration/ItemGenerationAffixes.h
        Items/ItemGeneration/ItemGenerationParts.cpp
        Items/ItemGeneration/ItemGenerationParts.h
        Items/ItemGeneration/ItemGenerationTags.cpp
        Items/ItemGeneration/ItemGenerationTags.h
        Items/ItemGeneration/ItemGenerationStats.cpp
        Items/ItemGeneration/ItemGenerationStats.h
        Items/ItemGeneration/ItemGenerationStatCompile.cpp
        Items/ItemGeneration/ItemGenerationStatCompile.h
        Items/ItemGeneration/ItemGenerationModule.h
)