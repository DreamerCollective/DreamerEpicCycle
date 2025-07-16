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

#include "../../flecs/flecs/flecs.h"

struct ChunkComponents
{
    //const uint8_t NumberOfVoxelsInAChunk = 32;

    struct VoxelMegametrePosition
    {
        uint32_t VoxelMegametrePositionBitArray;
        uint8_t chunkState;
    };

    struct VoxelKilometrePosition
    {
        uint32_t VoxelKilometrePositionBitArray;
        uint8_t chunkState;
    };

    struct VoxelMetrePosition
    {
        uint32_t VoxelMeterPositionBitArray;
        uint8_t chunkState;
    };

    explicit ChunkComponents(flecs::world& world)
    {
        world.module<ChunkComponents>();

        world.component<VoxelMegametrePosition>();
        world.component<VoxelKilometrePosition>();
        world.component<VoxelMetrePosition>();
    }

};
