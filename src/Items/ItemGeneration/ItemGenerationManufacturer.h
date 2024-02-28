#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../../third_party/flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationManufacturer {
public:

    explicit ItemGenerationManufacturer(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationManufacturer>();

        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>("AddItemManufacturerComponenttoEntity").multi_threaded().iter(AddItemManufacturerComponenttoEntity);
    }
    static void AddItemManufacturerComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
};
