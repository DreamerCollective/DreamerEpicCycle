cmake_minimum_required(VERSION 3.25.3)
project(Interaction)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(third_party)

add_executable(Interaction
	src/Character/CharacterComponents.h
	src/Character/Characters.cpp
	src/Character/Characters.h

	src/Civilisation/CivilisationComponents.h
	src/Civilisation/CivilisationModule.h

	src/Command/Unit.cpp
	src/Command/Unit.h
	src/Command/UnitComponents.h
	
	src/Helpers/MathHelpers.cpp
	src/Helpers/MathHelpers.h
	
	src/Items/ItemComponents.h
	src/Items/ItemModule.h
	
	src/Items/ItemConfig/ItemConfig.cpp
	src/Items/ItemConfig/ItemConfig.h
	src/Items/ItemConfig/ItemConfigComponents.h
	src/Items/ItemConfig/ItemConfigModule.h

	src/Items/ItemGeneration/ItemGenerationModule.h
	src/Items/ItemGeneration/ItemGeneration.cpp
	src/Items/ItemGeneration/ItemGeneration.h
	src/Items/ItemGeneration/ItemGenerationAffixes.cpp
	src/Items/ItemGeneration/ItemGenerationAffixes.h
	src/Items/ItemGeneration/ItemGenerationBase.cpp
	src/Items/ItemGeneration/ItemGenerationBase.h
	src/Items/ItemGeneration/ItemGenerationManufacturer.cpp
	src/Items/ItemGeneration/ItemGenerationManufacturer.h
	src/Items/ItemGeneration/ItemGenerationMaterial.cpp
	src/Items/ItemGeneration/ItemGenerationMaterial.h
	src/Items/ItemGeneration/ItemGenerationParts.cpp
	src/Items/ItemGeneration/ItemGenerationParts.h
	src/Items/ItemGeneration/ItemGenerationQuality.cpp
	src/Items/ItemGeneration/ItemGenerationQuality.h
	src/Items/ItemGeneration/ItemGenerationRarity.cpp
	src/Items/ItemGeneration/ItemGenerationRarity.h
	src/Items/ItemGeneration/ItemGenerationSeed.cpp
	src/Items/ItemGeneration/ItemGenerationSeed.h
	src/Items/ItemGeneration/ItemGenerationStatCompile.cpp
	src/Items/ItemGeneration/ItemGenerationStatCompile.h
	src/Items/ItemGeneration/ItemGenerationStats.cpp
	src/Items/ItemGeneration/ItemGenerationStats.h
	src/Items/ItemGeneration/ItemGenerationTags.cpp
	src/Items/ItemGeneration/ItemGenerationTags.h

	src/Universe/Area/ChunkComponents.h
	src/Universe/Area/ChunkCreation.cpp
	src/Universe/Area/ChunkCreation.h
	src/Universe/Area/RegionCreation.cpp
	src/Universe/Area/RegionCreation.h
	src/Universe/Area/VoxelComponents.h
	
	src/Universe/Galaxy/GalaxyComponentConfig.h
	src/Universe/Galaxy/GalaxyComponents.h
	src/Universe/Galaxy/GalaxySystems.cpp
	src/Universe/Galaxy/GalaxySystems.h

	src/Universe/World/BioneComponents.h
	src/Universe/World/BioneCreation.cpp
	src/Universe/World/BioneCreation.h
)