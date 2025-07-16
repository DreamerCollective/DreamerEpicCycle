#include "ItemGenerationBase.h"

void ItemGenerationBase::AddItemBaseComponenttoEntity(const flecs::iter& iter, ItemComponents::EquipableItemStaging* iss)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig>();

    for (auto it : iter)
    {
        if (!iss->ItemBaseComponentCreated)
        {
            int GeneratingRandomBaseItemID = MathHelpers::CreatingRandom32BitIntNumbers(iss->Seed, 1, 10);
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc)
                                 {
                                     if (ibc.BaseTypeID == GeneratingRandomBaseItemID)
                                     {
                                         iter.entity(it).set<ItemComponents::ItemBase>({ GeneratingRandomBaseItemID});
                                     }
                                 });
            iss->ItemSeedStage = true;
        }
    }
}