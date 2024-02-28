#include "ItemGenerationStats.h"
void ItemGenerationStats::AddItemStatsComponenttoEntity(const flecs::iter &iter, ItemComponents::EquipableItemStaging *iss, ItemComponents::ItemBase *ib)
{
    auto ItemConfigQuery = iter.world().filter<ItemConfigComponents::ItemBaseConfig, ItemConfigComponents::ItemComponentsConfig>();

    for (auto it : iter)
    {
        if (!iss->ItemStatComponentsCreated)
        {
            ItemConfigQuery.each([&](ItemConfigComponents::ItemBaseConfig& ibc, ItemConfigComponents::ItemComponentsConfig& icc)
                                 {
                                     if (icc.ItemComponentType == 1)
                                     {
                                         iter.entity(it).set<ItemComponents::CriticalChanceItemStat>({});
                                         iter.entity(it).set<ItemComponents::MagicalDamageItemStat>({});
                                         iter.entity(it).set<ItemComponents::PhysicalDamageItemStat>({});
                                         iter.entity(it).set<ItemComponents::HandlingItemStat>({});
                                         iter.entity(it).set<ItemComponents::AccuracyItemStat>({});
                                         iter.entity(it).set<ItemComponents::RangeItemStat>({});
                                         iter.entity(it).set<ItemComponents::GuardItemStat>({});
                                         iter.entity(it).set<ItemComponents::BlockChanceItemStat>({});
                                         iter.entity(it).set<ItemComponents::AttackRateItemStat>({});
                                         iter.entity(it).set<ItemComponents::WeightItemStat>({});
                                     }
                                     else if (icc.ItemComponentType == 2)
                                     {
                                         iter.entity(it).set<ItemComponents::CriticalChanceItemStat>({});
                                         iter.entity(it).set<ItemComponents::MagicalDamageItemStat>({});
                                         iter.entity(it).set<ItemComponents::PhysicalDamageItemStat>({});
                                         iter.entity(it).set<ItemComponents::HandlingItemStat>({});
                                         iter.entity(it).set<ItemComponents::AccuracyItemStat>({});
                                         iter.entity(it).set<ItemComponents::RangeItemStat>({});
                                         iter.entity(it).set<ItemComponents::MagazineSizeItemStat>({});
                                         iter.entity(it).set<ItemComponents::ReloadTimeItemStat>({});
                                         iter.entity(it).set<ItemComponents::FireRateItemStat>({});
                                         iter.entity(it).set<ItemComponents::WeightItemStat>({});
                                     }
                                     else if (icc.ItemComponentType == 3)
                                     {
                                         iter.entity(it).set<ItemComponents::ArmourItemStat>({});
                                         iter.entity(it).set<ItemComponents::ArmourRechargeRateItemStat>({});
                                         iter.entity(it).set<ItemComponents::ArmourRechargeDelayItemStat>({});
                                         iter.entity(it).set<ItemComponents::ShieldItemStat>({});
                                         iter.entity(it).set<ItemComponents::ShieldRechargeRateItemStat>({});
                                         iter.entity(it).set<ItemComponents::ShieldRechargeDelayItemStat>({});
                                         iter.entity(it).set<ItemComponents::EnergyItemStat>({});
                                         iter.entity(it).set<ItemComponents::EnergyRechargeRateItemStat>({});
                                         iter.entity(it).set<ItemComponents::EnergyRechargeDelayItemStat>({});
                                         iter.entity(it).set<ItemComponents::WeightItemStat>({});
                                     }
                                 });
            iss->ItemStatComponentsCreated = true;
        }
    }
}
