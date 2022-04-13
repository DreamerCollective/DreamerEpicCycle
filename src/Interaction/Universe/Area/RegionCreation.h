#pragma once

#include "flecs.h"
#include "RegionComponents.h"

struct RegionCreation
{
public:

    static void RegionComponentCreationSystem(const flecs::iter& iter, RegionComponents::RegionState* rs);

    explicit RegionCreation(flecs::world& world)
    {
        world.module<RegionCreation>();
        world.import<RegionComponents>();

        world.system<RegionComponents::RegionState>("RegionComponentCreationSystem").iter(RegionComponentCreationSystem);
    }
};

