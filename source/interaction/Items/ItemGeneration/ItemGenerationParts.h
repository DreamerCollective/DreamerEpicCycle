#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationParts {
public:

    explicit ItemGenerationParts(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationParts>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>("AddItemPartsComponenttoEntity").multi_threaded().iter(AddItemPartsComponenttoEntity);
    }
    static void AddItemPartsComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
};
