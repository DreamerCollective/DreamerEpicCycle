#pragma once
#include "flecs/flecs.h"

struct CharactersComponents
{
    enum PersonalityTypeInOutFocused
    {
        Intraversion = 0,
        Extraversion = 1
    };
    enum PersonalityTypeInformationGathering
    {
        Sensing = 0,
        Intuition = 1
    };
    enum PersonalityTypeMakeDecisions
    {
        Thinking = 0,
        Feeling = 1
    };
    enum PersonalityTypeOuterLife
    {
        Judging = 0,
        Perceiving = 1
    };

    struct CharacterMood
    {
        int mindset;
    };

    struct PlayerCharacterCreateBackground
    {
        int name;
        int gender;
        int sexuality;
        int ethnicity;
        int description;
    };

    struct CharacterLevel
    {
        uint16_t characterLevel;
        uint32_t characterExperience;
        uint32_t experienceNeededLevelUp;
    };

    struct CharacterMainBackground
    {
        int race;
        int age;
        int heritage;
        int background;
        PersonalityTypeInOutFocused IorE;
        PersonalityTypeInformationGathering SorN;
        PersonalityTypeMakeDecisions TorF;
        PersonalityTypeOuterLife JorP;
    };

    struct CharacterStrengthAttribute
    {
        int Strength;
    };

    struct CharacterDexterityAttribute
    {
        int Dexterity;
    };

    struct CharacterIntelligenceAttribute
    {
        int Intelligence;
    };

    struct CharacterWillpowerAttribute
    {
        int Willpower;
    };

    struct CharacterEnduranceAttribute
    {
        int Endurance;
    };

    struct CharacterLuckAttribute
    {
        int Luck;
    };

    struct CharacterCharismaAttribute
    {
        int Charisma;
    };

    struct CharacterWisdomAttribute
    {
        int Wisdom;
    };
    struct CharacterMagicAttribute
    {
        int Magic;
    };
    struct CharacterNullAttribute
    {
        int Null;
    };

    struct CharacterLifeStats
    {
        int Life;
        float LifeRegenRate;
        float LifeRegenDelay;
    };

    struct CharacterEnergyStats
    {
        int Energy;
        float EnergyRegenRate;
        float EnergyRegenDelay;
    };

    struct CharacterArmourStats
    {
        int Armour;
        float ArmourRegenRate;
        float ArmourRegenDelay;
    };

    struct CharacterShieldStats
    {
        int Shield;
        float ShieldRegenRate;
        float ShieldRegenDelay;
    };

    struct CharacterMagicStats
    {
        int Magic;
        float MagicRegenRate;
        float MagicRegenDelay;
    };

    struct CharacterNullStats
    {
        int Null;
        float NullRegenRate;
        float NullRegenDelay;
    };

    struct CharacterMagicResistance
    {
        float MagicResistance;
    };

    struct CharacterNullResistance
    {
        float NullResistance;
    };

    struct CharacterStatNumbers
    {
        int addFromGearMods, addFromTreeMods;
        int minusFromGearMods, minusFromTreeMods;
        int flatTotal;
        float increasedFromGearMods, increasedFromTreeMods;
        float decreasedFromGearMods, decreasedFromTreeMods;
        float additivePercentageTotal;
        float moreFromGearMods, moreFromTreeMods;
        float lessFromGearMods, lessFromTreeMods;
        float multiplicativePercentageTotal;
        float total;
    };

    struct PassiveTreeNode
    {
        uint32_t id;
    };

    struct PassiveTreeModifier
    {
        int intmodifier;
        int floatmodifier;
    };

    explicit CharactersComponents(flecs::world& world)
    {
        world.module<CharactersComponents>();

        //world.component<CharacterAttributes>();
        //world.component<CharacterStats>();
        //world.component<CharacterResistenances>();
        world.component<CharacterStatNumbers>();
        world.component<PassiveTreeModifier>();
        //world.component<CharacterGeneralBackground>();
        world.component<CharacterMainBackground>();
    }
};
