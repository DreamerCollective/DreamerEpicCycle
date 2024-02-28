#include "ItemGenerationSeed.h"

void ItemGenerationSeed::SettingSeedForRandomItemEntitiesGeneration(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss)
{
    for (auto it : iter)
    {
        if (!iss->ItemSeedStage)
        {
            int randomNumber = MathHelpers::CreatingSeed();
            //std::cout << "System SettingSeedForRandomItemEntitiesGeneration has generated this number " << randomNumber << " for " << it << std::endl;
            iss->Seed = randomNumber;
            iss->ItemSeedStage = true;
        }
    }
}
