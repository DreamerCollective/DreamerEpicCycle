#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../third_party/flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationStatCompile {
public:

    explicit ItemGenerationStatCompile(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationStatCompile>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>("CompliedItemStatsOnEntity").multi_threaded().iter(CompliedItemStatsOnEntity);
    }
    static void CompliedItemStatsOnEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
private:

    static inline int CalculatingFinalItemStatRollInt(int itemRoll, int rarityRoll, int qualityRoll, int materialRoll, int manufacturerRoll,
                                                      int itemPart1, int itemPart2, int itemPart3, int itemPart4, int itemPart5, int itemPart6, int itemPart7, int itemPart8, int itemPart9, int itemPart10,
                                                      int itemAffixMods1, int itemAffixMods2, int itemAffixMods3, int itemAffixMods4, int itemAffixMods5, int itemAffixMods6, int itemAffixMods7, int itemAffixMods8, int itemAffixMods9, int itemAffixMods10);
    static inline float CalculatingFinalItemStatRollFloat(float itemRoll, float rarityRoll, float qualityRoll, float materialRoll, float manufacturerRoll,
                                                          float  itemPart1, float itemPart2, float itemPart3, float itemPart4, float itemPart5, float itemPart6, float itemPart7, float itemPart8, float itemPart9, float itemPart10,
                                                          float itemAffixMods1, float itemAffixMods2, float itemAffixMods3, float itemAffixMods4, float itemAffixMods5, float itemAffixMods6, float itemAffixMods7, float itemAffixMods8, float itemAffixMods9, float itemAffixMods10);

};