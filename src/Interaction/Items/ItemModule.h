#include "flecs/flecs.h"
#include "ItemComponents.h"
#include "ItemConfigComponents.h"
#include "ItemGeneration/ItemGenerationModule.h"
#include <iostream>

struct ItemModule{
    explicit ItemModule(flecs::world& world)
    {
        world.module<ItemModule>();

        world.import<ItemComponents>();
        world.import<ItemConfigComponents>();

        world.import<ItemGenerationModule>();
    }
};
