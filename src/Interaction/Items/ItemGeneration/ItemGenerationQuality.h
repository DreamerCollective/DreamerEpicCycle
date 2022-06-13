#pragma once

#include <cstdint>
#include <cstdlib>
#include "flecs/flecs.h"
#include "../ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationQuality {
public:

    explicit ItemGenerationQuality(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationQuality>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>("AddItemQualityComponenttoEntity").multi_threaded().iter(AddItemQualityComponenttoEntity);
    }
    static void AddItemQualityComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
};
