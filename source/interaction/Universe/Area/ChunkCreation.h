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

#include "../../flecs/flecs/flecs.h"
#include "ChunkComponents.h"
#include "RegionComponents.h"

struct ChunkCreation
{
public:

    //static void ChunkComponentCreationSystem(const flecs::iter& iter, ChunkComponents::ChunkState* cs);

    explicit ChunkCreation(flecs::world& world)
    {
        world.module<ChunkCreation>();
        world.import<ChunkComponents>();
        world.import<RegionComponents>();

        //world.system<ChunkComponents::ChunkState>("ChunkComponentCreationSystem").iter(ChunkComponentCreationSystem);
    }
};
