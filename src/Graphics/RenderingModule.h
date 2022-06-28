#include "flecs/flecs.h"


struct RenderingModule
{
    explicit RenderingModule(flecs::world world)
    {
        world.module<RenderingModule>();
    }
};
