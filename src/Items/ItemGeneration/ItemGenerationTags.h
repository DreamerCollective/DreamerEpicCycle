#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../../third_party/flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationTags {
public:

    explicit ItemGenerationTags(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationTags>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>("AddItemTagsComponenttoEntity").multi_threaded().iter(AddItemTagsComponenttoEntity);
    }
    static void AddItemTagsComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
};