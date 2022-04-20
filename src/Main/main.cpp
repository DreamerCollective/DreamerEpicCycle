#include "flecs/flecs.h"
#include "../Interaction/Items/Item.h"
#include "../Interaction/Items/ItemConfig.h"
#include "../Graphics/first_app.hpp"
#include <iostream>

using namespace std;

int main() 
{
    bool ActiviateVulkan = false;

    flecs::world world;

    int AmountofItemstoSpawn = 1000;

    //cout << "Type the amount of items to spawn" << std::endl;

    //cin >> AmountofItemstoSpawn;

    if (AmountofItemstoSpawn == 0)
    {
        AmountofItemstoSpawn = 100;
    }

    world.import<ItemConfig>();

    world.import<Item>();

    world.entity("Item").set<ItemConfigComponents::ConfigStage>({ 1 });

    world.set_target_fps(60);

    //world.set_threads(12);

    world.app().enable_rest(true).run();

    while(world.progress());

    if(ActiviateVulkan)
    {
        lve::FirstApp app{};

        try
        {
            app.run();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
    }

}