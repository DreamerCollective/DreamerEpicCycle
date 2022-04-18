#pragma once

#include <cstdint>

#include "flecs/flecs.h"

struct VoxelComponents
{
    struct VoxelPosition
    {
        uint16_t xPosition;
        uint16_t yPosition;
        uint16_t zPosition;
    };

    struct VoxelType
    {
        uint16_t voxelType;
    };

    struct VoxelCondition
    {
        uint8_t voxelCondition;
    };

    struct VoxelState
    {
        uint8_t voxelState;
    };

    explicit VoxelComponents(flecs::world& world)
    {
        world.module<VoxelComponents>();

        world.component<VoxelPosition>();
        world.component<VoxelType>();
        world.component<VoxelCondition>();
        world.component<VoxelState>();
    }
};
