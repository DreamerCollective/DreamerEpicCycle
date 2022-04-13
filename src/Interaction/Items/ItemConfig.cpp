#include "ItemConfig.h"
#include <iostream>

static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity1{ 1, 0, 0, 5000}; //"Common"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity2{ 2, 1, 5000, 7000,}; //"Uncommon"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity3{ 3, 2, 7000, 7500,}; //"Rare"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity4{ 4, 3, 7500, 8900,}; //"Masterwork"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity5{ 5, 4, 8900, 9200}; //"Epic"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity6{ 6, 5, 9200, 9300}; //"Mythic"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity7{ 7, 6, 9300, 9350}; //"Exotic"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity8{ 8, 7, 9350, 9390}; //"Ancient"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity9{ 9, 8, 9390, 9430}; //"Legendary"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity10{ 10, 9, 9430, 9450}; //"Heirloom"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity11{ 11, 10, 9450, 9460}; //"Transcendent"
static constexpr ItemConfigComponents::ItemRarityConfig ItemRarity12{ 12, 10, 9460, 10000 }; //"Unique"

static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial1{ 1, 0, 1000 }; // Wood
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial2{ 2, 1000, 2000 }; // Stone
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial3{ 3, 2000, 3000 }; // Copper
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial4{ 4, 3000, 4000 }; // Iron
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial5{ 5, 4000, 5000 }; // Steel
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial6{ 6, 5000, 6000 }; // Obsidian
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial7{ 7, 6000, 7000 }; // Diamond
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial8{ 8, 7000, 8000 }; // Unimon
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial9{ 9, 8000, 9000 }; // Tetradurmus
static constexpr ItemConfigComponents::ItemMaterialConfig ItemMaterial10{ 10, 9000, 10000 }; // Hexaferi

static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig1{ 1 }; //Triumvirate
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig2{ 2 }; //Kybi-i
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig3{ 3 }; //Yib-Hud
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig4{ 4 }; //Ignition
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig5{ 5 }; //Technicore
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig6{ 6 }; //O-mal
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig7{ 7 }; //Sithia
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig8{ 8 }; //Kerdaborn
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig9{ 9 }; //Vedia
static constexpr ItemConfigComponents::ItemManufacturerConfig ItemManufacturerConfig10{ 10 }; //


static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig0{ 0, 5000, 0};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig1{ 5000, 7000, 1};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig2{ 7000, 7500, 2};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig3{ 7500, 9000, 3};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig4{ 9000, 9200, 4};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig5{ 9200, 9300, 5};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig6{ 9300, 9350, 6};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig7{ 9350, 9400, 7};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig8{ 9400, 9450, 8};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig9{ 9450, 9500, 9};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig10{ 9500, 9550, 10};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig11{ 9550, 9600, 11};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig12{ 9600, 9650, 12};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig13{ 9650, 9700, 13};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig14{ 9700, 9750, 14};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig15{ 9750, 9800, 15};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig16{ 9800, 9850, 16};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig17{ 9850, 9900, 17};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig18{ 9900, 9950, 18};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig19{ 9950, 9955, 19};
static constexpr ItemConfigComponents::ItemQualityConfig ItemQualityConfig20{ 9955, 10000, 20};

//One Handed Short Sword Bronze Falx Parts 

// ItemSlot1 Sword Core
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part1{ 1 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part2{ 2 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part3{ 3 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part4{ 4 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part5{ 5 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part6{ 6 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part7{ 7 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part8{ 8 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part9{ 9 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot1Part10{ 10 };

// ItemSlot2 Sword Blade
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part1{ 11 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part2{ 12 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part3{ 13 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part4{ 14 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part5{ 15 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part6{ 16 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part7{ 17 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part8{ 18 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part9{ 19 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot2Part10{ 20 };

static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part1{ 21 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part2{ 22 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part3{ 23 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part4{ 24 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part5{ 25 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part6{ 26 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part7{ 27 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part8{ 28 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part9{ 29 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot3Part10{ 30 };

static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part1{ 31 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part2{ 32 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part3{ 33 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part4{ 34 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part5{ 35 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part6{ 36 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part7{ 37 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part8{ 38 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part9{ 39 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot4Part10{ 40 };

static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part1{ 41 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part2{ 42 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part3{ 43 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part4{ 44 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part5{ 45 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part6{ 46 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part7{ 47 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part8{ 48 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part9{ 49 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot5Part10{ 50 };

static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part1{ 51 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part2{ 52 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part3{ 53 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part4{ 54 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part5{ 55 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part6{ 56 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part7{ 57 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part8{ 58 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part9{ 59 };
static constexpr ItemConfigComponents::ItemPartsConfig ItemPartItem1Slot6Part10{ 60 };

void ItemConfig::StartConfig(const flecs::iter& iter, ItemConfigComponents::ConfigStage* cs)
{
    for (auto it : iter) 
    {
        if (cs->stage == 1)
        {


            auto ConfigItemBronzeFalx = iter.world().entity(); //"One Handed Short Sword Bronze Falx"
            ConfigItemBronzeFalx.set<ItemConfigComponents::ItemBaseConfig>({1});

            auto ConfigItemBronzeFalxBase = iter.world().entity().child_of(ConfigItemBronzeFalx);

            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemBronzeFalxBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemBronzeFalx.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemBronzeFalx.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigUtemBronzeFalxNormal = iter.world().entity().child_of(ConfigItemBronzeFalx);

            CreateNormalItemComponentsConfigMelee(iter, ConfigUtemBronzeFalxNormal);

            auto ConfigItemIllyrSica = iter.world().entity();
            auto ConfigItemIllyrSicaBase = iter.world().entity().child_of(ConfigItemIllyrSica);

            ConfigItemIllyrSica.set<ItemConfigComponents::ItemBaseConfig>({ 2 }); //"One Handed Short Sword Sica"
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemIllyrSicaBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemIllyrSica.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemIllyrSica.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemGrandDao = iter.world().entity();
            auto ConfigItemGrandDaoBase = iter.world().entity().child_of(ConfigItemGrandDao);

            ConfigItemGrandDao.set<ItemConfigComponents::ItemBaseConfig>({ 3 }); //"One Handed Short Sword Dao"
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemGrandDaoBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemGrandDao.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemGrandDao.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemWateredXiphos = iter.world().entity();
            auto ConfigItemWateredXiphosBase = iter.world().entity().child_of(ConfigItemWateredXiphos);

            ConfigItemWateredXiphos.set<ItemConfigComponents::ItemBaseConfig>({ 4 }); //"One Handed Short Sword Xiphos"
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemWateredXiphosBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemWateredXiphos.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemWateredXiphos.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemDryKhopesh = iter.world().entity();
            auto ConfigItemDryKhopeshBase = iter.world().entity().child_of(ConfigItemDryKhopesh);

            ConfigItemDryKhopesh.set<ItemConfigComponents::ItemBaseConfig>({ 5 }); //"One Handed Short Sword Khopesh"
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemDryKhopeshBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemDryKhopesh.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemDryKhopesh.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemCuttingSabre = iter.world().entity();
            auto ConfigItemCuttingSabreBase = iter.world().entity().child_of(ConfigItemBronzeFalx);

            ConfigItemCuttingSabre.set<ItemConfigComponents::ItemBaseConfig>({ 6 }); //"One Handed Short Sword Sabre"
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemCuttingSabreBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemCuttingSabre.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemCuttingSabre.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemBloodyMacuahui = iter.world().entity();
            auto ConfigItemBloodyMacuahuiBase = iter.world().entity().child_of(ConfigItemBloodyMacuahui);

            ConfigItemBloodyMacuahui.set<ItemConfigComponents::ItemBaseConfig>({ 7 }); //"One Handed Short Sword Macuahuit"
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemBloodyMacuahuiBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemBloodyMacuahui.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemBloodyMacuahui.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemShiningCrusader = iter.world().entity();
            auto ConfigItemShiningCrusaderBase = iter.world().entity().child_of(ConfigItemShiningCrusader);

            ConfigItemShiningCrusader.set<ItemConfigComponents::ItemBaseConfig>({ 8 }); //"One Handed Short Sword Knightly Sword"
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemShiningCrusaderBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemShiningCrusader.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemShiningCrusader.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemSerratedKhanda = iter.world().entity();
            auto ConfigItemSerratedKhandaBase = iter.world().entity().child_of(ConfigItemSerratedKhanda);

            ConfigItemSerratedKhanda.set<ItemConfigComponents::ItemBaseConfig>({ 9 }); //"One Handed Short Sword Khanda"
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemSerratedKhandaBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemSerratedKhanda.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemSerratedKhanda.set<ItemConfigComponents::ItemComponentsConfig>({1});

            auto ConfigItemHoledAkrafena = iter.world().entity();
            auto ConfigItemHoledAkrafenaBase = iter.world().entity().child_of(ConfigItemHoledAkrafena);

            ConfigItemHoledAkrafena.set<ItemConfigComponents::ItemBaseConfig>({ 10 }); //"One Handed Short Sword Akrafena"
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({15,20});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({23,30});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({3,6});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigHandling>({1.5,2.6});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigAccuracy>({0.6,0.7});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigRange>({2,3});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigGuard>({8,10});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigBlockChance>({0.20,0.29});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigAttackRate>({10,13});
            ConfigItemHoledAkrafenaBase.set<ItemConfigComponents::ItemStatConfigWeight>({1500});

            ConfigItemHoledAkrafena.set<ItemConfigComponents::ItemWeaponMeleeOneHandedSwordTags>({iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it), iter.world().entity(it)});
            ConfigItemHoledAkrafena.set<ItemConfigComponents::ItemComponentsConfig>({1});

            iter.world().entity("Item").set<ItemComponents::ItemSpawning>({ 1000 });

            char *stringJSON = ecs_entity_to_json(iter.world(), ConfigItemHoledAkrafena);

            cs->stage++;
        }
    }
}

void ItemConfig::CreateNormalItemComponentsConfigMelee(const flecs::iter &iter, flecs::entity entity)
{
    auto ConfigRarity = iter.world().entity().child_of(entity);

    auto ConfigRarityMelee1 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee1.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity1);
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee1.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee2 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee2.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity2);
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee2.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee3 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee3.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity3);
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee3.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee4 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee4.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity4);
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee4.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee5 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee5.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity5);
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee5.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee6 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee6.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity6);
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee6.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee7 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee7.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity7);
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee7.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee8 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee8.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity8);
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee8.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee9 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee9.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity9);
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee9.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee10 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee10.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity10);
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee10.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigRarityMelee11 = iter.world().entity().child_of(ConfigRarity);
    ConfigRarityMelee11.set<ItemConfigComponents::ItemRarityConfig>(ItemRarity11);
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigRarityMelee11.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQuality = iter.world().entity().child_of(entity);

    auto ConfigQualityMelee1 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee1.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig1);
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee1.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee2 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee2.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig2);
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee2.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee3 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee3.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig3);
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee3.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee4 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee4.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig4);
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee4.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee5 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee5.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig5);
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee5.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee6 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee6.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig6);
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee6.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee7 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee7.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig7);
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee7.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee8 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee8.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig8);
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee8.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee9 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee9.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig9);
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee9.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee10 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee10.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig10);
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee10.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee11 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee11.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig11);
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee11.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee12 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee12.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig12);
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee12.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee13 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee13.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig13);
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee13.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee14 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee14.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig14);
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee14.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee15 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee15.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig15);
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee15.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee16 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee16.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig16);
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee16.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee17 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee17.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig17);
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee17.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee18 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee18.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig18);
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee18.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee19 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee19.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig19);
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee19.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigQualityMelee20 = iter.world().entity().child_of(ConfigQuality);
    ConfigQualityMelee20.set<ItemConfigComponents::ItemQualityConfig>(ItemQualityConfig20);
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigQualityMelee20.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterial = iter.world().entity().child_of(entity);

    auto ConfigMaterialMelee1 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig1);
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee1.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee2 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig2);
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee2.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee3 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig3);
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee3.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee4 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig4);
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee4.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee5 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig5);
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee5.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee6 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig6);
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee6.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee7 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig7);
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee7.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee8 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig8);
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee8.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee9 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig9);
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee9.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigMaterialMelee10 = iter.world().entity().child_of(ConfigMaterial);
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig10);
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigMaterialMelee10.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});
    
    auto ConfigManufacturer = iter.world().entity().child_of(entity);

    auto ConfigManufacturerMelee1 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig1);
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee1.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee2 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig2);
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee2.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee3 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig3);
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee3.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee4 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig4);
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee4.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee5 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig5);
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee5.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee6 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig6);
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee6.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee7 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig7);
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee7.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee8 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig8);
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee8.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee9 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig9);
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee9.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});

    auto ConfigManufacturerMelee10 = iter.world().entity().child_of(ConfigManufacturer);

    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemManufacturerConfig>(ItemManufacturerConfig10);
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigPhysicalDamage>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigMagicalDamage>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigCriticalDamage>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigBlockChance>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigGuard>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigRange>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigAttackRate>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigHandling>({0,0});
    ConfigManufacturerMelee10.set<ItemConfigComponents::ItemStatConfigAccuracy>({0,0});
}

void ItemConfig::CreateNormalItemComponentsConfigRange(const flecs::iter &iter, flecs::entity entity)
{

}

void ItemConfig::CreateNormalItemComponentsConfigArmour(const flecs::iter &iter, flecs::entity entity)
{

}
