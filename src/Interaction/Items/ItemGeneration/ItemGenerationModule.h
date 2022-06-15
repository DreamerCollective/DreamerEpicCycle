#pragma once

#include <cstdint>
#include <cstdlib>
#include "flecs/flecs.h"
#include "../ItemConfig.h"
#include "../ItemComponents.h"
#include "ItemGenerationAffixes.h"
#include "ItemGenerationBase.h"
#include "ItemGenerationManufacturer.h"
#include "ItemGenerationMaterial.h"
#include "ItemGenerationParts.h"
#include "ItemGenerationQuality.h"
#include "ItemGenerationRarity.h"
#include "ItemGenerationSeed.h"
#include "ItemGenerationStatCompile.h"
#include "ItemGenerationStats.h"
#include "ItemGenerationTags.h"
#include "ItemGeneration.h"
#include "../../Helpers/MathHelpers.h"
using namespace std;

struct ItemGenerationModule
{
public:

    explicit ItemGenerationModule(flecs::world& world)
    {
        world.import<ItemComponents>();
        world.import<ItemGeneration>();
        world.import<ItemGenerationAffixes>();
        world.import<ItemGenerationBase>();
        world.import<ItemGenerationManufacturer>();
        world.import<ItemGenerationMaterial>();
        world.import<ItemGenerationParts>();
        world.import<ItemGenerationQuality>();
        world.import<ItemGenerationRarity>();
        world.import<ItemGenerationSeed>();
        world.import<ItemGenerationStatCompile>();
        world.import<ItemGenerationStats>();
        world.import<ItemGenerationTags>();

        world.module<ItemGenerationModule>();
    }
};
