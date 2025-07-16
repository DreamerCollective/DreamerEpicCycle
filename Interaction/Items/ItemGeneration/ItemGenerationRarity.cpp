#include "ItemGenerationRarity.h"

void ItemGenerationRarity::AddItemRarityComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib)
{
    auto ItemConfigQuery = iter.world().filter_builder<ItemConfigComponents::ItemBaseConfig>().term(flecs::ChildOf).build();

    for (auto it : iter)
    {
        if (!iss->ItemRarityComponentCreated && iss->ItemBaseComponentCreated)
        {
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc )
                                 {

                                     if(ibc.BaseTypeID == ib->BaseItemType)
                                     {
                                         int RandomItemGeneratrionRarityNumber = MathHelpers::CreatingRandom32BitIntNumbers(iss->Seed, 0, 10000 + 1);


                                         //ItemConfigComponents::ItemRarityConfig
                                     }
                                 });
            iss->ItemRarityComponentCreated = true;
        }
    }
}