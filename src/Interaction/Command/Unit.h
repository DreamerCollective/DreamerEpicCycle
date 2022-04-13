#pragma once

#include <string>
#include <cstdint>
#include "flecs/flecs.h"

struct UnitBase
{
	int organisationLevel;
	int maxSubUnits;
	int totalSubUnits;
};

struct SpawnUnit 
{
	int organisationLevelSpawning;
	bool shouldSpawnWithSubUnits;
};

class Unit
{
public:
	static void CreateUnit(flecs::iter& iter, SpawnUnit* su);
};

