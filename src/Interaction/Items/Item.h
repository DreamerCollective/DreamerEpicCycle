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
#include <cstdlib>
#include "flecs/flecs.h"
#include "ItemConfig.h"
#include "ItemComponents.h"
#include "../Helpers/MathHelpers.h"



using namespace std;


struct Item
{
public:

    explicit Item(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<Item>();

        world.system<ItemComponents::ItemSpawning>("CreateItemEntity").multi_threaded().iter(CreateItemEntity);

        world.system<ItemComponents::ItemStaging>("SettingSeedForRandomItemEntitiesGeneration").multi_threaded().iter(SettingSeedForRandomItemEntitiesGeneration);

        world.system<ItemComponents::ItemStaging>("AddItemBaseComponenttoEntity").multi_threaded().iter(AddItemBaseComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemRarityComponenttoEntity").multi_threaded().iter(AddItemRarityComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemQualityComponenttoEntity").multi_threaded().iter(AddItemQualityComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemMaterialComponenttoEntity").multi_threaded().iter(AddItemMaterialComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemManufacturerComponenttoEntity").multi_threaded().iter(AddItemManufacturerComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase, ItemComponents::ItemRarity>("AddItemAffixComponenttoEntity").multi_threaded().iter(AddItemAffixComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemPartsComponenttoEntity").multi_threaded().iter(AddItemPartsComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemTagsComponenttoEntity").multi_threaded().iter(AddItemTagsComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemStatsComponenttoEntity").multi_threaded().iter(AddItemStatsComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("CompliedItemStatsOnEntity").multi_threaded().iter(CompliedItemStatsOnEntity);

        //world.system<ItemComponents::ItemBase, ItemComponents::ItemStaging, ItemComponents::ItemRarity>("CreatingRarityModComponentsToEntity").iter(CreatingRarityModComponentsToEntity);

    }

    static void CreateItemEntity(const flecs::iter& iter, ItemComponents::ItemSpawning* is);

    static void AddItemBaseComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss);

    static void AddItemRarityComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);

    static void AddItemQualityComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);

    static void AddItemMaterialComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);

    static void AddItemManufacturerComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);

    static void AddItemAffixComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib, ItemComponents::ItemRarity* ir);

    static void AddItemPartsComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);

    static void AddItemTagsComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);

    static void AddItemStatsComponenttoEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);

    static void CompliedItemStatsOnEntity(const flecs::iter& iter, ItemComponents::ItemStaging* iss, ItemComponents::ItemBase* ib);
    
    static void SettingSeedForRandomItemEntitiesGeneration(const flecs::iter& iter, ItemComponents::ItemStaging* iss);

private:

    static inline int CalculatingFinalItemStatRollInt(int itemRoll, int rarityRoll, int qualityRoll, int materialRoll, int manufacturerRoll,
        int itemPart1, int itemPart2, int itemPart3, int itemPart4, int itemPart5, int itemPart6, int itemPart7, int itemPart8, int itemPart9, int itemPart10,
        int itemAffixMods1, int itemAffixMods2, int itemAffixMods3, int itemAffixMods4, int itemAffixMods5, int itemAffixMods6, int itemAffixMods7, int itemAffixMods8, int itemAffixMods9, int itemAffixMods10);
    static inline float CalculatingFinalItemStatRollFloat(float itemRoll, float rarityRoll, float qualityRoll, float materialRoll, float manufacturerRoll,
        float  itemPart1, float itemPart2, float itemPart3, float itemPart4, float itemPart5, float itemPart6, float itemPart7, float itemPart8, float itemPart9, float itemPart10,
        float itemAffixMods1, float itemAffixMods2, float itemAffixMods3, float itemAffixMods4, float itemAffixMods5, float itemAffixMods6, float itemAffixMods7, float itemAffixMods8, float itemAffixMods9, float itemAffixMods10);


};
