#include "flecs/flecs.h"
#include "ItemConfig.h"
#include "ItemConfigComponents.h"
#include <iostream>

struct ItemConfigModule{
    explicit ItemConfigModule(flecs::world& world)
    {
        world.module<ItemConfigModule>();

        world.import<ItemConfigComponents>();
        world.import<ItemConfig>();
    }
};
