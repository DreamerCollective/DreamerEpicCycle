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

#include "../../../third_party/flecs/flecs/flecs.h"

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
