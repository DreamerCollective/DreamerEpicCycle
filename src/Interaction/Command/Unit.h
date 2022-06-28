#pragma once

#include <string>
#include <cstdint>
#include "flecs/flecs.h"



struct Unit
{
    explicit Unit(flecs::world& world)
    {
        world.module<Unit>();

        world.system<SpawnUnit>("CreateUnitOnSimulation").multi_threaded();
    }
public:
	static void CreateUnitOnSimulation(flecs::iter& iter, SpawnUnit* su);
};

