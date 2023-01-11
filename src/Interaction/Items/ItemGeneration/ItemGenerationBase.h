#include "flecs/flecs.h"
#pragma once

#include <cstdint>
#include <cstdlib>
#include "flecs/flecs.h"
#include "../ItemConfig/ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationBase
{
public:

    explicit ItemGenerationBase(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationBase>();
        world.system<ItemComponents::EquipableItemStaging>("AddItemBaseComponenttoEntity").multi_threaded().iter(AddItemBaseComponenttoEntity);
    }

    static void AddItemBaseComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss);

};
