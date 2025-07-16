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
#include "GalaxyComponents.h"
#include <random>

struct GalaxySystems
{
	GalaxySystems(flecs::world& world)
	{
		world.import<GalaxyComponents>();

		world.module<GalaxySystems>();

		world.system<GalaxyComponents::Galaxy>("CreateGalaxySector").iter(CreateGalaxySector);

		world.system<GalaxyComponents::SectorGridCoord, GalaxyComponents::Sector, GalaxyComponents::SectorStage>("CreateSectorStars").iter(CreateSectorStars);

		world.system<GalaxyComponents::Sector, GalaxyComponents::SectorStage>("CreateStarsFromSectorCount").iter(CreateStarsFromSectorCount);

		world.system<GalaxyComponents::StarSystem, GalaxyComponents::StarSystemStage>("CreatePlanetsFromStarSystem").iter(CreatePlanetsFromStarSystem);
	};

public:

	static void CreateGalaxySector(const flecs::iter& iter, GalaxyComponents::Galaxy* g);
	static void CreateSectorStars(const flecs::iter& iter, GalaxyComponents::SectorGridCoord* sgc, GalaxyComponents::Sector* s, GalaxyComponents::SectorStage* ss);
	static void CreateStarsFromSectorCount(const flecs::iter& iter, GalaxyComponents::Sector* s, GalaxyComponents::SectorStage* ss);
	static void CreatePlanetsFromStarSystem(const flecs::iter& iter, GalaxyComponents::StarSystem* ssy, GalaxyComponents::StarSystemStage* sss);

private:

	static inline int CreatingSeed();
	static inline int CreatingRandom32BitIntNumbers(int seed, int min, int max);
	static inline float CreatingRandom32BitFloatNumbers(int seed, float min, float max);
};