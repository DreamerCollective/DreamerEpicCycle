#pragma once

#include "flecs.h"

struct ChunkComponents
{
    const uint8_t NumberOfVoxelsInAChunk = 32;

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

    };

    explicit ChunkComponents(flecs::world& world)
    {
        world.module<ChunkComponents>();

        //world.system<ChunkComponents::ChunkPosition>();
        //world.system<ChunkComponents::ChunkInfo>();
        //world.system<ChunkComponents::ChunkState>();
    }

};
