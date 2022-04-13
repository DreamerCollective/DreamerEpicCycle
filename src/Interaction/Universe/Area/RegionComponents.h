#pragma once

#include "flecs.h"

struct RegionComponents
{
    static const uint8_t NumberOfChunksInARegion = 32;

    struct RegionPosition
    {
        uint32_t xPosition;
        uint32_t yPosition;
        uint32_t zPosition;
    };

    struct RegionState
    {
        uint8_t regionState;
    };

    struct RegionInfo
    {
        uint16_t regionInfo;
    };

    explicit RegionComponents(flecs::world& world)
    {
        world.module<RegionComponents>();

        world.component<RegionPosition>();
        world.component<RegionState>();
        world.component<RegionInfo>();
    }
};
