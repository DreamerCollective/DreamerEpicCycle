cmake_minimum_required(VERSION 3.0.0)

add_subdirectory(flecs)

add_library(DreamerEpicCycleInteraction STATIC
	Character/CharacterComponents.h
	Character/Characters.cpp
	Character/Characters.h

	Civilisation/CivilisationComponents.h
	Civilisation/CivilisationModule.h

	Command/Unit.cpp
	Command/Unit.h
	Command/UnitComponents.h
	
	Helpers/MathHelpers.cpp
	Helpers/MathHelpers.h
	
	Items/ItemComponents.h
	Items/ItemModule.h
	
	Items/ItemConfig/ItemConfig.cpp
	Items/ItemConfig/ItemConfig.h
	Items/ItemConfig/ItemConfigComponents.h
	Items/ItemConfig/ItemConfigModule.h

	Items/ItemGeneration/ItemGenerationModule.h
	Items/ItemGeneration/ItemGeneration.cpp
	Items/ItemGeneration/ItemGeneration.h
	Items/ItemGeneration/ItemGenerationAffixes.cpp
	Items/ItemGeneration/ItemGenerationAffixes.h
	Items/ItemGeneration/ItemGenerationBase.cpp
	Items/ItemGeneration/ItemGenerationBase.h
	Items/ItemGeneration/ItemGenerationManufacturer.cpp
	Items/ItemGeneration/ItemGenerationManufacturer.h
	Items/ItemGeneration/ItemGenerationMaterial.cpp
	Items/ItemGeneration/ItemGenerationMaterial.h
	Items/ItemGeneration/ItemGenerationParts.cpp
	Items/ItemGeneration/ItemGenerationParts.h
	Items/ItemGeneration/ItemGenerationQuality.cpp
	Items/ItemGeneration/ItemGenerationQuality.h
	Items/ItemGeneration/ItemGenerationRarity.cpp
	Items/ItemGeneration/ItemGenerationRarity.h
	Items/ItemGeneration/ItemGenerationSeed.cpp
	Items/ItemGeneration/ItemGenerationSeed.h
	Items/ItemGeneration/ItemGenerationStatCompile.cpp
	Items/ItemGeneration/ItemGenerationStatCompile.h
	Items/ItemGeneration/ItemGenerationStats.cpp
	Items/ItemGeneration/ItemGenerationStats.h
	Items/ItemGeneration/ItemGenerationTags.cpp
	Items/ItemGeneration/ItemGenerationTags.h

	Universe/Area/ChunkComponents.h
	Universe/Area/ChunkCreation.cpp
	Universe/Area/ChunkCreation.h
	Universe/Area/RegionCreation.cpp
	Universe/Area/RegionCreation.h
	Universe/Area/VoxelComponents.h
	
	Universe/Galaxy/GalaxyComponentConfig.h
	Universe/Galaxy/GalaxyComponents.h
	Universe/Galaxy/GalaxySystems.cpp
	Universe/Galaxy/GalaxySystems.h

	Universe/World/BioneComponents.h
	Universe/World/BioneCreation.cpp
	Universe/World/BioneCreation.h
)