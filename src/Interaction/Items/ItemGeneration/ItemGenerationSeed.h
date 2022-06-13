#pragma once

#include <cstdint>
#include <cstdlib>
#include "flecs/flecs.h"
#include "../ItemConfig.h"
#include "../ItemComponents.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationSeed
{
public:
    explicit ItemGenerationSeed(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationSeed>();

        world.system<ItemComponents::EquipableItemStaging>("SettingSeedForRandomItemEntitiesGeneration").multi_threaded().iter(SettingSeedForRandomItemEntitiesGeneration);
    }

    static void SettingSeedForRandomItemEntitiesGeneration(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss);
};
