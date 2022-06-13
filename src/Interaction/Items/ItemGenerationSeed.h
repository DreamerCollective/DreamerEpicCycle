#include <cstdint>
#include <cstdlib>
#include "flecs/flecs.h"
#include "ItemConfig.h"
#include "ItemComponents.h"
#include "../Helpers/MathHelpers.h"

struct ItemGenerationSeed
{
public:
    explicit ItemGenerationSeed(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.module<ItemGenerationSeed>();

        world.system<ItemComponents::ItemStaging>("SettingSeedForRandomItemEntitiesGeneration").multi_threaded().iter(SettingSeedForRandomItemEntitiesGeneration);
    }

    static void SettingSeedForRandomItemEntitiesGeneration(const flecs::iter& iter, ItemComponents::ItemStaging* iss);
};
