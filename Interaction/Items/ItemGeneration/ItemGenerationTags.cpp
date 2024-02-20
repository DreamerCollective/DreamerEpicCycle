#include "ItemGenerationTags.h"
void ItemGenerationTags::AddItemTagsComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig, ItemConfigComponents::ItemComponentsConfig, ItemConfigComponents::ItemWeaponMeleeOneHandedAxeTags>();

    for (auto it : iter)
    {
        if (!iss->ItemTagsCreated)
        {
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc, ItemConfigComponents::ItemComponentsConfig& icc, ItemConfigComponents::ItemWeaponMeleeOneHandedAxeTags& icat)
                                 {
                                     if(icc.ItemComponentType == 1)
                                     {
                                         iter.world().entity(icat.AxeItemTag);
                                         iter.world().entity(icat.EquipableItemTag);
                                         iter.world().entity(icat.MeleeItemTag);
                                         iter.world().entity(icat.OneHandedItemTag);
                                         iter.world().entity(icat.WeaponsItemTag);
                                     }
                                 });
            iss->ItemTagsCreated = true;
        }
    }
}