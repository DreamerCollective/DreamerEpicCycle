#pragma once

#include <string>
#include <cstdint>
#include "../flecs/flecs/flecs.h"
#include "UnitComponents.h"



struct Unit
{
    explicit Unit(flecs::world& world)
    {
        world.module<Unit>();
        world.module<UnitComponents>();
        world.system<UnitComponents::SpawnUnit>("CreateUnitOnSimulation").multi_threaded();
    }
public:
	static void CreateUnitOnSimulation(flecs::iter& iter, UnitComponents::SpawnUnit* su);
};

