
#pragma once
#include "../flecs/flecs/flecs.h"

struct CivilisationComponents
{
    struct CivilisationPop
    {
        int Control;
        int Approval;
    };
    struct CivilisationPopIdeology
    {
        int Ideology;
    };
    struct CivilisationPopRace
    {

    };
    struct CivilisationTechnologicalLevel
    {
        int Techlevel;
    };
    struct CivilisationPopulationCount
    {
        int PopulationCount;
    };
    struct CivilisationManpower
    {
        int Manpower;
    };
    struct CivilisationWorkforce
    {
        int Workforce;
    };
    struct CivilisationIndustrialCapacity
    {
        int IC;
    };
    struct CivilisationIndustrialCapacityAllocation
    {
        int IC;
    };
    struct CivilisationGovernmentType
    {

    };
    struct CivilisationLeader
    {
        int Rank;
    };
    struct CivilisationRank
    {
        int CivRank;
    };
    struct CivilisationCurrency
    {
        int Currency;
    };

    explicit CivilisationComponents(flecs::world& world)
    {
        world.module<CivilisationComponents>();

        world.component<CivilisationPop>();
        world.component<CivilisationGovernmentType>();
        world.component<CivilisationCurrency>();
        world.component<CivilisationIndustrialCapacity>();
        world.component<CivilisationIndustrialCapacityAllocation>();
        world.component<CivilisationLeader>();
        world.component<CivilisationManpower>();
        world.component<CivilisationPopRace>();
        world.component<CivilisationPopIdeology>();
        world.component<CivilisationRank>();
        world.component<CivilisationPopulationCount>();
        world.component<CivilisationGovernmentType>();
        world.component<CivilisationWorkforce>();
        world.component<CivilisationTechnologicalLevel>();
        world.component<CivilisationLeader>();
    };
};
