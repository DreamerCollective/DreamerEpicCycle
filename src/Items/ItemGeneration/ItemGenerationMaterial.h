#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../../third_party/flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationMaterial {
public:

    explicit ItemGenerationMaterial(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationMaterial>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>("AddItemMaterialComponenttoEntity").multi_threaded().iter(AddItemMaterialComponenttoEntity);
    }
    static void AddItemMaterialComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
};
