#include "ItemGenerationManufacturer.h"

void ItemGenerationManufacturer::AddItemManufacturerComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig, ItemConfigComponents::ItemComponentsConfig>();

    for (auto it : iter)
    {
        if (!iss->ItemManufacturerComponentCreated && iss->ItemBaseComponentCreated)
        {

            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc, ItemConfigComponents::ItemComponentsConfig& icc)
                                 {
                                     if(ibc.BaseTypeID == ib->BaseItemType)
                                     {
                                         int RandomItemGeneratrionManufacturerNumber = MathHelpers::CreatingRandom32BitIntNumbers(iss->Seed, 0, 11 + 1);
                                         for (int i = 0; i < 5; i++) {

                                         }
                                     }
                                 });
            iss->ItemManufacturerComponentCreated = true;
        }
    }
}
