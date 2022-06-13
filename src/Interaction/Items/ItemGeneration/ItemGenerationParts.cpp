#include "ItemGenerationParts.h"
void ItemGenerationParts::AddItemPartsComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig, ItemConfigComponents::ItemComponentsConfig>();

    for (auto it : iter)
    {
        if (!iss->ItemPartsComponentsCreated)
        {
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc, ItemConfigComponents::ItemComponentsConfig& icc)
                                 {
                                     if(ibc.BaseTypeID == ib->BaseItemType)
                                     {

                                     }
                                 });
            iss->ItemPartsComponentsCreated = true;
        }
    }
}