#include <cstdint>
#include <cstdlib>
#include "flecs/flecs.h"
#include "ItemConfig.h"
#include "ItemComponents.h"
#include "../Helpers/MathHelpers.h"

using namespace std;


struct ItemGeneration {
public:

    explicit ItemGeneration(flecs::world& world)
    {
        world.import<ItemComponents>();

        world.module<ItemGeneration>();
        world.system<ItemComponents::ItemSpawning>("CreateItemEntity").multi_threaded().iter(CreateItemEntity);
    }

    static void CreateItemEntity(const flecs::iter &iter, ItemComponents::ItemSpawning *is);
}