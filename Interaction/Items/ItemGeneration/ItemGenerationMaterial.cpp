#include "ItemGenerationMaterial.h"
void ItemGenerationMaterial::AddItemMaterialComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig, ItemConfigComponents::ItemComponentsConfig>();

    for (auto it : iter)
    {
        if (!iss->ItemMaterialComponentCreated && iss->ItemBaseComponentCreated)
        {
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc, ItemConfigComponents::ItemComponentsConfig& icc)
                                 {
                                     if(ibc.BaseTypeID == ib->BaseItemType)
                                     {
                                         int RandomItemGeneratrionMaterialNumber = MathHelpers::CreatingRandom32BitIntNumbers(iss->Seed, 0, 10000 + 1);
                                         for (int i = 0; i < 10; i++) {

                                         }
                                     }
                                 });
            iss->ItemMaterialComponentCreated = true;
        }
    }
}