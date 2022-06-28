#pragma once

#include "flecs/flecs.h"

struct UnitComponents
{
    struct UnitBase
    {
        int organisationLevel;
        int maxSubUnits;
        int totalSubUnits;
    };

    struct SpawnUnit
    {
        int amountOfUnitsToSpawn;
        int organisationLevelSpawning;
        bool shouldSpawnWithSubUnits;
    };
    explicit UnitComponents(flecs::world& world)
    {
        world.module<UnitComponents>();

        world.component<UnitBase>();
        world.component<SpawnUnit>();
    }
};