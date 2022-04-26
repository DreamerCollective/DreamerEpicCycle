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
#include "flecs/flecs.h"
#include "ItemComponents.h"
#include "ItemConfigComponents.h"
#include <iostream>

using namespace std;

struct ItemConfig
{
	explicit ItemConfig(flecs::world& world)
	{
		world.module<ItemConfig>();

		world.import<ItemComponents>();
		world.import<ItemConfigComponents>();


		world.system<ItemConfigComponents::ConfigStage>("StartConfig").multi_threaded().iter(StartConfig);
        world.system<ItemConfigComponents::ConfigStage>("CreateNormalItemComponentsConfigMelee").multi_threaded().iter(CreateNormalItemComponentsConfigMelee);
	}

	static void StartConfig(const flecs::iter& iter, ItemConfigComponents::ConfigStage* cs);

    static void CreateNormalItemComponentsConfigMelee(const flecs::iter& iter, ItemConfigComponents::ConfigStage* cs);

    static void CreateNormalItemComponentsConfigRange(const flecs::iter& iter, flecs::entity entity);

    static void CreateNormalItemComponentsConfigArmour(const flecs::iter& iter, flecs::entity entity);

};