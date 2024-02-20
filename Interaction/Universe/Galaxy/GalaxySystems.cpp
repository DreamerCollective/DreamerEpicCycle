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

#include "GalaxySystems.h"

void GalaxySystems::CreateGalaxySector(const flecs::iter& iter, GalaxyComponents::Galaxy* g)
{
    auto e = iter.world().entity();
    e.set<GalaxyComponents::SectorGridCoord>({ static_cast<int16_t>(0), static_cast<int16_t>(0), static_cast<int16_t>(0)});
    e.set<GalaxyComponents::Sector>({0,0});
    e.set<GalaxyComponents::SectorStage>({1});

    std::cout << " This entity generated with the coordinates of " << 0 << " " << 0 << " " << 0 << std::endl;

//    int16_t gridOffsetX = 500;
//    int16_t gridOffsetY = 0;
//    int16_t gridOffsetZ = 0;
//	for (auto it : iter)
//	{
//		if (g->stage == 1)
//		{
//			for (int16_t x = -1; x <= 1; x++)
//			{
//				for (int16_t y = -1; y <= 1; y++)
//				{
//					for (int16_t z = -1; z <= 1; z++)
//					{
//						auto e = iter.world().entity();
//						e.set<GalaxyComponents::SectorGridCoord>({ static_cast<int16_t>(x + gridOffsetX), static_cast<int16_t>(y + gridOffsetY), static_cast<int16_t>(z + gridOffsetZ)});
//						e.set<GalaxyComponents::Sector>({0,0});
//						e.set<GalaxyComponents::SectorStage>({1});
//
//						std::cout << " This entity generated with the coordinates of " << x + gridOffsetX << " " << y + gridOffsetY << " " << z + gridOffsetZ << std::endl;
//
//					}
//				}
//			}
//            g->stage = 2;
//		}
//		if (g->stage == 2)
//		{
//			iter.world().entity().destruct();
//		}
	//}
}

void GalaxySystems::CreateSectorStars(const flecs::iter& iter, GalaxyComponents::SectorGridCoord* sgc, GalaxyComponents::Sector* s, GalaxyComponents::SectorStage* ss)
{
	for (auto it : iter)
	{
		if (ss->stage == 1) 
		{
            s->numStars = CreatingRandom32BitIntNumbers(CreatingSeed(), GalaxyComponentsConfig::CoreSector.SectorNumStarsMin, GalaxyComponentsConfig::CoreSector.SectorNumStarsMax);
            std::cout << " This entity with sectorcoords of " << sgc->Xcoord << " x " << sgc->Ycoord << " y " << sgc->Zcoord << " z, generated this amount of stars of " << s->numStars << std::endl;
//            std::cout << " This entity has these components " << iter.entity(it).has<GalaxyComponents::SectorGridCoord>() << " " << iter.entity(it).has<GalaxyComponents::SectorGridCoord>() << " " << iter.entity(it).has<GalaxyComponents::SectorStage>() << std::endl;
//            if(sgc->Xcoord >= GalaxyComponentsConfig::CoreSector.SectorCoordRangeMinX && sgc->Xcoord <= GalaxyComponentsConfig::CoreSector.SectorCoordRangeMaxX &&
//            sgc->Ycoord >= GalaxyComponentsConfig::CoreSector.SectorCoordRangeMinY && sgc->Ycoord <= GalaxyComponentsConfig::CoreSector.SectorCoordRangeMaxY &&
//            sgc->Zcoord >= GalaxyComponentsConfig::CoreSector.SectorCoordRangeMinZ && sgc->Zcoord <= GalaxyComponentsConfig::CoreSector.SectorCoordRangeMaxZ)
//            {
//                s->numStars = CreatingRandom32BitIntNumbers(CreatingSeed(), GalaxyComponentsConfig::CoreSector.SectorNumStarsMin, GalaxyComponentsConfig::CoreSector.SectorNumStarsMax);
//                std::cout << " This entity with sectorcoords of " << sgc->Xcoord << " x " << sgc->Ycoord << " y " << sgc->Zcoord << " z generated this amount of stars of " << s->numStars << std::endl;
//            }
//            if(sgc->Xcoord >= GalaxyComponentsConfig::CoreDiskSector.SectorCoordRangeMinX && sgc->Xcoord <= GalaxyComponentsConfig::CoreDiskSector.SectorCoordRangeMaxX &&
//            sgc->Ycoord >= GalaxyComponentsConfig::CoreDiskSector.SectorCoordRangeMinY && sgc->Ycoord <= GalaxyComponentsConfig::CoreDiskSector.SectorCoordRangeMaxY &&
//            sgc->Zcoord >= GalaxyComponentsConfig::CoreDiskSector.SectorCoordRangeMinZ && sgc->Zcoord <= GalaxyComponentsConfig::CoreDiskSector.SectorCoordRangeMaxZ)
//            {
//                s->numStars = CreatingRandom32BitIntNumbers(CreatingSeed(), GalaxyComponentsConfig::CoreDiskSector.SectorNumStarsMin, GalaxyComponentsConfig::CoreDiskSector.SectorNumStarsMax);
//                std::cout << " This entity with sectorcoords of " << sgc->Xcoord << " x " << sgc->Ycoord << " y " << sgc->Zcoord << " z generated this amount of stars of " << s->numStars << std::endl;
//            }
//            if(sgc->Xcoord >= GalaxyComponentsConfig::MidDiskSector.SectorCoordRangeMinX && sgc->Xcoord <= GalaxyComponentsConfig::MidDiskSector.SectorCoordRangeMaxX &&
//            sgc->Ycoord >= GalaxyComponentsConfig::MidDiskSector.SectorCoordRangeMinY && sgc->Ycoord <= GalaxyComponentsConfig::MidDiskSector.SectorCoordRangeMaxY &&
//            sgc->Zcoord >= GalaxyComponentsConfig::MidDiskSector.SectorCoordRangeMinZ && sgc->Zcoord <= GalaxyComponentsConfig::MidDiskSector.SectorCoordRangeMaxZ)
//            {
//                s->numStars = CreatingRandom32BitIntNumbers(CreatingSeed(), GalaxyComponentsConfig::MidDiskSector.SectorNumStarsMin, GalaxyComponentsConfig::MidDiskSector.SectorNumStarsMax);
//                std::cout << " This entity with sectorcoords of " << sgc->Xcoord << " x " << sgc->Ycoord << " y " << sgc->Zcoord << " z generated this amount of stars of " << s->numStars << std::endl;
//            }
//            if(sgc->Xcoord >= GalaxyComponentsConfig::OuterDiskSector.SectorCoordRangeMinX && sgc->Xcoord <= GalaxyComponentsConfig::OuterDiskSector.SectorCoordRangeMaxX &&
//            sgc->Ycoord >= GalaxyComponentsConfig::OuterDiskSector.SectorCoordRangeMinY && sgc->Ycoord <= GalaxyComponentsConfig::OuterDiskSector.SectorCoordRangeMaxY &&
//            sgc->Zcoord >= GalaxyComponentsConfig::OuterDiskSector.SectorCoordRangeMinZ && sgc->Zcoord <= GalaxyComponentsConfig::OuterDiskSector.SectorCoordRangeMaxZ)
//            {
//                s->numStars = CreatingRandom32BitIntNumbers(CreatingSeed(), GalaxyComponentsConfig::OuterDiskSector.SectorNumStarsMin, GalaxyComponentsConfig::OuterDiskSector.SectorNumStarsMax);
//                std::cout << " This entity with sectorcoords of " << sgc->Xcoord << " x " << sgc->Ycoord << " y " << sgc->Zcoord << " z generated this amount of stars of " << s->numStars << std::endl;
//            }
//            if(sgc->Xcoord >= GalaxyComponentsConfig::EdgeDiskSector.SectorCoordRangeMinX && sgc->Xcoord <= GalaxyComponentsConfig::EdgeDiskSector.SectorCoordRangeMaxX &&
//            sgc->Ycoord >= GalaxyComponentsConfig::EdgeDiskSector.SectorCoordRangeMinY && sgc->Ycoord <= GalaxyComponentsConfig::EdgeDiskSector.SectorCoordRangeMaxY &&
//            sgc->Zcoord >= GalaxyComponentsConfig::EdgeDiskSector.SectorCoordRangeMinZ && sgc->Zcoord <= GalaxyComponentsConfig::EdgeDiskSector.SectorCoordRangeMaxZ)
//            {
//                s->numStars = CreatingRandom32BitIntNumbers(CreatingSeed(), GalaxyComponentsConfig::EdgeDiskSector.SectorNumStarsMin, GalaxyComponentsConfig::EdgeDiskSector.SectorNumStarsMax);
//                std::cout << " This entity with sectorcoords of " << sgc->Xcoord << " x " << sgc->Ycoord << " y " << sgc->Zcoord << " z generated this amount of stars of " << s->numStars << std::endl;
//            }
//            else
//            {
//                //std::cout << " error ranges are not lining up" << std::endl;
//            }

			std::cout << " This entity with sectorcoords of " << sgc->Xcoord << " x " << sgc->Ycoord << " y " << sgc->Zcoord << " z generated this amount of stars of " << s->numStars << std::endl;
			ss->stage = 2;
		}
	}
}

void GalaxySystems::CreateStarsFromSectorCount(const flecs::iter& iter, GalaxyComponents::Sector* s, GalaxyComponents::SectorStage* ss)
{
	for (auto it : iter) 
	{
		if (ss->stage == 2) 
		{
			for (int16_t x = 0; x < s->numStars; x++)
			{
				auto e = iter.world().entity().child_of(iter.entity(it));
				uint16_t xCoord = CreatingRandom32BitIntNumbers(CreatingSeed(), 0, 1000);
				uint16_t yCoord = CreatingRandom32BitIntNumbers(CreatingSeed(), 0, 1000);
				uint16_t zCoord = CreatingRandom32BitIntNumbers(CreatingSeed(), 0, 1000);
				e.set<GalaxyComponents::StarCoord>({xCoord, yCoord, zCoord});
				std::cout << " This entity with starcoords of " << xCoord << " " << yCoord << " " << zCoord << " is generated this amount of stars of " << std::endl;

				uint16_t starSize = CreatingRandom32BitIntNumbers(CreatingSeed(), 1, 10);
				uint16_t numPlanet = CreatingRandom32BitIntNumbers(CreatingSeed(), 0, 10);
				e.set<GalaxyComponents::StarSystem>({ starSize, numPlanet });
				e.set<GalaxyComponents::StarSystemStage>({ 1 });
				std::cout << " This entity with starsize and numPlants of " << starSize << " " << numPlanet << std::endl;
			}
			ss->stage = 3;
		}
	}
}

void GalaxySystems::CreatePlanetsFromStarSystem(const flecs::iter& iter, GalaxyComponents::StarSystem* ssy, GalaxyComponents::StarSystemStage* sss)
{
	for (auto it : iter)
	{
		if (sss->stage == 1) 
		{
			auto e = iter.world().entity().child_of(iter.entity(it));
			uint8_t StarSize = CreatingRandom32BitIntNumbers(CreatingSeed(), 1, 10);
			e.set<GalaxyComponents::Star>({ StarSize });
			for (int16_t i = 0; i < ssy->numPlants; i++)
			{
				auto e = iter.world().entity().child_of(iter.entity(it));
				uint8_t planetSize = CreatingRandom32BitIntNumbers(CreatingSeed(), 1, 10);
				e.set<GalaxyComponents::Planet>({ planetSize });
				std::cout << " This entity with planet generated the planetsize of " << planetSize << std::endl;
			}
			sss->stage = 2;
		}
	}
}

inline int GalaxySystems::CreatingSeed()
{
	std::random_device rand32;
	std::mt19937 gen(rand32());
	std::uniform_int_distribution<> randomNumber32(0, INT32_MAX);
	int randomNumber = randomNumber32(gen);
	return randomNumber;
}

inline int GalaxySystems::CreatingRandom32BitIntNumbers(int seed, int min, int max)
{
	std::mt19937 gen(seed);
	std::uniform_int_distribution<int> randomNumber32(min, max);
	int randomNumber = randomNumber32(gen);
	return randomNumber;
}

inline float GalaxySystems::CreatingRandom32BitFloatNumbers(int seed, float min, float max)
{
	std::mt19937 gen(seed);
	std::uniform_real_distribution<float> randomNumber32(min, max);
	float randomNumber = randomNumber32(gen);
	return randomNumber;
}
