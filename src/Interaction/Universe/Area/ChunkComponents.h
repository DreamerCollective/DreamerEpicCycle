#pragma once
#include <cstdint>

#include "flecs/flecs.h"

struct ChunkComponents
{
    //const uint8_t NumberOfVoxelsInAChunk = 32;

    struct ChunkPosition
    {
        uint64_t xPosition;
        uint64_t yPosition;
        uint64_t zPosition;
    };

    struct ChunkState
    {
        uint8_t chunkState;
    };

    struct ChunkInfo
    {
        uint8_t chunkState;
    };

    explicit ChunkComponents(flecs::world& world)
    {
        world.module<ChunkComponents>();

        world.component<ChunkPosition>();
        world.component<ChunkInfo>();
        world.component<ChunkState>();
    }

};
