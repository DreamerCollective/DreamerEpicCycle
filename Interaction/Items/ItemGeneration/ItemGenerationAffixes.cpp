#include "ItemGenerationAffixes.h"

void ItemGenerationAffixes::AddItemAffixComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib, ItemComponents::ItemRarity* ir)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig, ItemConfigComponents::ItemComponentsConfig>();

    for (auto it : iter)
    {
        if (!iss->ItemAffixComponentsCreated && iss->ItemBaseComponentCreated)
        {
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc, ItemConfigComponents::ItemComponentsConfig& icc)
                                 {
                                     if(ibc.BaseTypeID == ib->BaseItemType)
                                     {
                                         if (ir->RarityAffixAllowance == 1 || ir->RarityAffixAllowance > 1)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods1>({});
                                         }
                                         if (ir->RarityAffixAllowance == 2 || ir->RarityAffixAllowance > 2)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods2>({});
                                         }
                                         if (ir->RarityAffixAllowance == 3 || ir->RarityAffixAllowance > 3)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods3>({});
                                         }
                                         if (ir->RarityAffixAllowance == 4 || ir->RarityAffixAllowance > 4)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods4>({});
                                         }
                                         if (ir->RarityAffixAllowance == 5 || ir->RarityAffixAllowance > 5)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods5>({});
                                         }
                                         if (ir->RarityAffixAllowance == 6 || ir->RarityAffixAllowance > 6)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods6>({});
                                         }
                                         if (ir->RarityAffixAllowance == 7 || ir->RarityAffixAllowance > 7)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods7>({});
                                         }
                                         if (ir->RarityAffixAllowance == 8 || ir->RarityAffixAllowance > 8)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods8>({});
                                         }
                                         if (ir->RarityAffixAllowance == 9 || ir->RarityAffixAllowance > 9)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods9>({});
                                         }
                                         if (ir->RarityAffixAllowance == 10)
                                         {
                                             iter.entity(it).set<ItemComponents::ItemAffixMods10>({});
                                         }
                                     }
                                 });
            iss->ItemAffixComponentsCreated = true;
        }
    }
}
