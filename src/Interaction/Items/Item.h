#pragma once

#include <cstdint>
#include <cstdlib>
#include "flecs.h"
#include "ItemConfig.h"
#include "ItemComponents.h"
#include <random>
#include <iostream>

using namespace std;


struct Item
{
public:

    Item(flecs::world& world) 
    {
        world.import<ItemComponents>();
        world.module<Item>();

        world.system<ItemComponents::ItemSpawning>("CreateItemEntity").iter(CreateItemEntity);

        world.system<ItemComponents::ItemStaging>("SettingSeedForRandomItemEntitiesGeneration").iter(SettingSeedForRandomItemEntitiesGeneration);

        world.system<ItemComponents::ItemStaging>("AddItemBaseComponenttoEntity").iter(AddItemBaseComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemRarityComponenttoEntity").iter(AddItemRarityComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemQualityComponenttoEntity").iter(AddItemQualityComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemMaterialComponenttoEntity").iter(AddItemMaterialComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemManufacturerComponenttoEntity").iter(AddItemManufacturerComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase, ItemComponents::ItemRarity>("AddItemAffixComponenttoEntity").iter(AddItemAffixComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemPartsComponenttoEntity").iter(AddItemPartsComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemTagsComponenttoEntity").iter(AddItemTagsComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("AddItemStatsComponenttoEntity").iter(AddItemStatsComponenttoEntity);

        world.system<ItemComponents::ItemStaging, ItemComponents::ItemBase>("CompliedItemStatsOnEntity").iter(CompliedItemStatsOnEntity);

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
    static inline int CreatingSeed();
    static inline int CreatingRandom32BitIntNumbers(int seed, int min, int max);
    static inline float CreatingRandom32BitFloatNumbers(int seed, float min, float max);
    static inline int CalculatingFinalItemStatRollInt(int itemRoll, int rarityRoll, int qualityRoll, int materialRoll, int manufacturerRoll,
        int itemPart1, int itemPart2, int itemPart3, int itemPart4, int itemPart5, int itemPart6, int itemPart7, int itemPart8, int itemPart9, int itemPart10,
        int itemAffixMods1, int itemAffixMods2, int itemAffixMods3, int itemAffixMods4, int itemAffixMods5, int itemAffixMods6, int itemAffixMods7, int itemAffixMods8, int itemAffixMods9, int itemAffixMods10);
    static inline float CalculatingFinalItemStatRollFloat(float itemRoll, float rarityRoll, float qualityRoll, float materialRoll, float manufacturerRoll,
        float  itemPart1, float itemPart2, float itemPart3, float itemPart4, float itemPart5, float itemPart6, float itemPart7, float itemPart8, float itemPart9, float itemPart10,
        float itemAffixMods1, float itemAffixMods2, float itemAffixMods3, float itemAffixMods4, float itemAffixMods5, float itemAffixMods6, float itemAffixMods7, float itemAffixMods8, float itemAffixMods9, float itemAffixMods10);


};
#endif
