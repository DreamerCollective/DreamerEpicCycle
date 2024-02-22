#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../third_party/flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationStats {
public:

    explicit ItemGenerationStats(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationStats>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>("AddItemStatsComponenttoEntity").multi_threaded().iter(AddItemStatsComponenttoEntity);
    }
    static void AddItemStatsComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
};
