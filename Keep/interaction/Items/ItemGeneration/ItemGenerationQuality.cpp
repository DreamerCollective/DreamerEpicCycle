#include "ItemGenerationQuality.h"
void ItemGenerationQuality::AddItemQualityComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig, ItemConfigComponents::ItemComponentsConfig>();

    for (auto it : iter)
    {
        if (!iss->ItemQualityComponentCreated && iss->ItemBaseComponentCreated)
        {
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc, ItemConfigComponents::ItemComponentsConfig& icc)
                                 {
                                     if(ibc.BaseTypeID == ib->BaseItemType)
                                     {
                                         int RandomItemGeneratrionQualityNumber = MathHelpers::CreatingRandom32BitIntNumbers(iss->Seed, 0, 10000 + 1);
                                         for (int i = 0; i < 21; i++)
                                         {

                                         }
                                     }
                                 });
            iss->ItemQualityComponentCreated = true;
        }
    }
}