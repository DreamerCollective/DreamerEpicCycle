#include "flecs/flecs.h"
#include "ItemComponents.h"
#include "ItemConfig/ItemConfigModule.h"
#include "ItemGeneration/ItemGenerationModule.h"
#include <iostream>

struct ItemModule{
    explicit ItemModule(flecs::world& world)
    {
        world.module<ItemModule>();

        world.import<ItemComponents>();

        world.import<ItemConfigModule>();
        world.import<ItemGenerationModule>();
    }
};
