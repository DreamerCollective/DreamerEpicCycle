/* Copyright (c) 2021, Dreamer Collective
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 the "License";
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
