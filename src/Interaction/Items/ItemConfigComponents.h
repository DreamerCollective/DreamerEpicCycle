#pragma once
#include "flecs.h"
#include <cstring>

struct ItemConfigComponents
{
    struct ItemBaseConfig
    {
        int BaseTypeID;
    };

    struct ItemRarityConfig
    {
        int RarityLevel;
        int RarityAffixAllowance;
        int RaritySpawnChanceMin;
        int RaritySpawnChanceMax;
    };

    struct ItemAffixModsConfig
    {
        int ModId;
        bool OrPrefixSuffix; // 0 = Prefix 1 = Suffix
    };

    struct ItemManufacturerConfig
    {
        int ManufacturerType;
    };

    struct ItemMaterialConfig
    {
        int MaterialType;
        int MaterialSpawnChanceMin;
        int MaterialSpawnChanceMax;
    };

    struct ItemQualityConfig
    {
        int QualityNum;
        int QualitySpawnChanceMin;
        int QualitySpawnChanceMax;
    };

    struct ItemPartsConfig
    {
        int PartsType;
    };

    struct ItemStatConfigCriticalDamage
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigPhysicalDamage
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigMagicalDamage
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigHandling
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemStatConfigAccuracy
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemStatConfigRange
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigGuard
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemStatConfigBlockChance
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemStatConfigAttackRate
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigWeight
    {
        int StatInt;
    };

    struct ItemStatConfigMagazineSize
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigFireRate
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigReloadTime
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigMovement
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigArmour
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigArmourRechargeRate
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemStatConfigArmourRechargeDelay
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemStatConfigShield
    {
        int StatIntRollMin;
        int StatIntRollMax;
    };

    struct ItemStatConfigShieldRechargeRate
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemStatConfigShieldRechargeDelay
    {
        float StatFloatRollMin;
        float StatFloatRollMax;
    };

    struct ItemComponentsConfig
    {
        int ItemComponentType;
    };

    struct ItemWeaponMeleeOneHandedSwordTags
    {
        flecs::entity EquipableItemTag;
        flecs::entity WeaponsItemTag;
        flecs::entity MeleeItemTag;
        flecs::entity OneHandedItemTag;
        flecs::entity SwordItemTag;
    };

    struct ItemWeaponMeleeOneHandedMaceTags
    {
        flecs::entity EquipableItemTag;
        flecs::entity WeaponsItemTag;
        flecs::entity MeleeItemTag;
        flecs::entity OneHandedItemTag;
        flecs::entity SwordItemTag;
    };

    struct ItemWeaponMeleeOneHandedKnifeTags
    {
        flecs::entity EquipableItemTag;
        flecs::entity WeaponsItemTag;
        flecs::entity MeleeItemTag;
        flecs::entity OneHandedItemTag;
        flecs::entity KnifeItemTag;
    };

    struct ItemWeaponMeleeOneHandedWarhammerTags
    {
        flecs::entity EquipableItemTag;
        flecs::entity WeaponsItemTag;
        flecs::entity MeleeItemTag;
        flecs::entity OneHandedItemTag;
        flecs::entity WarhammerItemTag;
    };

    struct ItemWeaponMeleeOneHandedAxeTags
    {
        flecs::entity EquipableItemTag;
        flecs::entity WeaponsItemTag;
        flecs::entity MeleeItemTag;
        flecs::entity OneHandedItemTag;
        flecs::entity AxeItemTag;
    };

    struct ItemWeaponMeleeOneHandedShieldTags
    {
        flecs::entity EquipableItemTag;
        flecs::entity WeaponsItemTag;
        flecs::entity MeleeItemTag;
        flecs::entity OneHandedItemTag;
        flecs::entity ShieldItemTag;
    };

    struct ItemWeaponMeleeOneHandedRapierTags
    {
        flecs::entity EquipableItemTag;
        flecs::entity WeaponsItemTag;
        flecs::entity MeleeItemTag;
        flecs::entity OneHandedItemTag;
        flecs::entity RapierItemTag;
    };

    struct ConfigStage 
    {
        uint8_t stage;
    };

    explicit ItemConfigComponents(flecs::world& world)
    {
        world.module<ItemConfigComponents>();

        world.component<ItemBaseConfig>();
        world.component<ItemRarityConfig>();
        world.component<ItemAffixModsConfig>();
        world.component<ItemManufacturerConfig>();
        world.component<ItemMaterialConfig>();
        world.component<ItemQualityConfig>();
        world.component<ItemPartsConfig>();
        world.component<ItemStatConfigCriticalDamage>();
        world.component<ItemStatConfigMagicalDamage>();
        world.component<ItemStatConfigPhysicalDamage>();
        world.component<ItemStatConfigHandling>();
        world.component<ItemStatConfigAccuracy>();
        world.component<ItemStatConfigRange>();
        world.component<ItemStatConfigGuard>();
        world.component<ItemStatConfigBlockChance>();
        world.component<ItemStatConfigAttackRate>();
        world.component<ItemStatConfigWeight>();
        world.component<ItemStatConfigMagazineSize>();
        world.component<ItemStatConfigFireRate>();
        world.component<ItemStatConfigReloadTime>();
        world.component<ItemStatConfigArmour>();
        world.component<ItemStatConfigArmourRechargeDelay>();
        world.component<ItemStatConfigArmourRechargeRate>();
        world.component<ItemStatConfigShield>();
        world.component<ItemStatConfigShieldRechargeDelay>();
        world.component<ItemStatConfigShieldRechargeRate>();
        world.component<ItemStatConfigMovement>();
        world.component<ItemComponentsConfig>();
        world.component<ConfigStage>();
    }
};

struct EquipableItemTag {};
struct WeaponsItemTag {};
struct MeleeItemTag {};
struct RangedItemTag {};
struct OneHandedItemTag {};
struct TwoHandedItemTag {};
struct SwordItemTag {};
struct MaceItemTag {};
struct KnifeItemTag {};
struct WarhammerItemTag {};
struct AxeItemTag {};
struct ShieldItemTag {};
struct RapierItemTag {};
struct ClubItemTag {};
struct HalberdItemTag {};
struct StaffItemTag {};
struct SpearItemTag {};
struct ClawsItemTag {};
struct WandItemTag {};
struct ThrownItemTag {};
struct PistolItemTag {};
struct HandCannonItemTag {};
struct RevolverItemTag {};
struct HandCrossbowItemTag {};
struct BowItemTag {};
struct CrossbowItemTag {};
struct CarbineItemTag {};
struct AssaultRifleItemTag {};
struct SniperRifleItemTag {};
struct LightMachineGunItemTag {};
struct SubMachineGunItemTag {};
struct ShotgunItemTag {};
struct GrenadeLauncherItemTag {};
struct RocketLauncherItemTag {};
struct ArmourItemTag {};
struct PowerArmourItemTag {};
struct LightPowerArmourItemTag {};
struct MediumPowerArmourItemTag {};
struct HeavyPowerArmourItemTag {};
struct NonPowerArmourItemTag {};
struct ClothsItemTag {};
struct HeadItemTag {};
struct BeltItemTag {};
struct ChestsItemTag {};
struct LegsItemTag {};
struct ArmsItemTag {};
struct HandsItemTag {};
struct ShouldersItemTag {};
struct BackpackItemTag {};
struct RingsItemTag {};
struct NecklaceItemTag {};
struct EquipmentItemTag {};
struct FlasksItemTag {};
struct HealthItemTag {};
struct MagicItemTag {};
struct MovementItemTag {};
struct ResistanceItemTag {};
struct AmmoItemTag {};
struct QuiversItemTag {};
struct MagazinesItemTag {};
struct GrenadesItemTag {};
struct RocketsItemTag {};
struct MinesItemTag {};
struct ScrollsItemTag {};
struct BuildingsItemTag {};
struct CraftingItemTag {};
struct MapsItemTag {};
struct MapChiselItemTag {};
struct CrystalsItemTag {};
struct CardsItemTag {};
struct OrbsItemTag {};
struct OrbOfIdentifyingItemTag {};
struct OrbOfErasingItemTag {};
struct OrbOfForgingItemTag {};
struct OrbOfChaosItemTag {};
struct OrbOfDivinityItemTag {};
struct OrbOfInvigoratingItemTag {};
struct OrbOfEnforingItemTag {};
struct OrbOfModifyingItemTag {};
struct OrbOfEnhancingItemTag {};
struct OrbOfChangeItemTag {};
struct OrbOfMirroringItemTag {};