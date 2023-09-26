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

#include "../../../../third_party/flecs/flecs/flecs.h"

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
