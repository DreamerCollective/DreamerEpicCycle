
#pragma once
#include "flecs/flecs.h"

struct CivilisationComponents
{
    struct CivilisationPop
    {
        int Ideology;
        int Culture;
        int Race;
        int Rights;
        int Economic;
    };

    explicit CivilisationComponents(flecs::world& world)
    {
        world.module<CivilisationComponents>();

        world.component<CivilisationPop>();
    };
};
