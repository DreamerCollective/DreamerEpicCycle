#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../third_party/flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationAffixes {
public:

    explicit ItemGenerationAffixes(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationAffixes>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase, ItemComponents::ItemRarity>("AddItemAffixComponenttoEntity").multi_threaded().iter(AddItemAffixComponenttoEntity);
    }
    static void AddItemAffixComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib, ItemComponents::ItemRarity* ir);
};
