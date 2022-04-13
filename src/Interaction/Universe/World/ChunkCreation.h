#pragma once

#include "flecs.h"
#include "ChunkComponents.h"
#include "../Area/RegionComponents.h"

struct ChunkCreation
{
public:

    static void ChunkComponentCreationSystem(const flecs::iter& iter, ChunkComponents::ChunkState* cs);

    ChunkCreation(flecs::world& world)
    {
        world.module<ChunkCreation>();
        world.import<ChunkComponents>();
        world.import<RegionComponents>();

        //world.system<ChunkComponents::ChunkState>("ChunkComponentCreationSystem").iter(ChunkComponentCreationSystem);
    }
};
