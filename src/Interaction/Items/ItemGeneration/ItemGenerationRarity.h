#pragma once

#include <cstdint>
#include <cstdlib>
#include "../../../../third_party/flecs/flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationRarity
        {
public:

    explicit ItemGenerationRarity(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationRarity>();


        world.system<ItemComponents::EquipableItemStaging, ItemComponents::ItemBase>(
                "AddItemRarityComponenttoEntity").multi_threaded().iter(AddItemRarityComponenttoEntity);
    }
    static void AddItemRarityComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss, ItemComponents::ItemBase* ib);
};
