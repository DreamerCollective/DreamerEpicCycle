#pragma once
#include "flecs.h"

struct CharactersComponents
{
    enum PersonalityTypeInOutFocused
    {
        Introversion = 0,
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


    struct CharacterGeneralBackground
    {
        flecs::string name;
        flecs::string gender;
        flecs::string sexuality;
        flecs::string ethnicity;
        flecs::string description;
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
        PersonalityTypeInOutFocused IorE;
        PersonalityTypeInformationGathering SorN;
        PersonalityTypeMakeDecisions TorF;
        PersonalityTypeOuterLife JorP;
    };

    struct CharacterAttributes
    {
        int Strength;
        int Dexterity;
        int Intelligence;
        int Willpower;
        int Endurance;
        int Luck;
    };

    struct CharacterStats
    {
        int Life;
        float LifeRegenRate;
        float LifeRegenDelay;
        int Energy;
        float EnergyRegenRate;
        float EnergyRegenDelay;
        int Armour;
        float ArmourRegenRate;
        float ArmourRegenDelay;
        int Shield;
        float ShieldRegenRate;
        float ShieldRegenDelay;
        int Magic;
        float MagicRegenRate;
        float MagicRegenDelay;
    };

    struct CharacterResistenances
    {
        float MagicRadiationResistance;
        float MagicInsanityResistance;
        float MagicStiffnessResistance;
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

        world.component<CharacterAttributes>();
        world.component<CharacterStats>();
        world.component<CharacterResistenances>();
        world.component<CharacterStatNumbers>();
        world.component<PassiveTreeModifier>();
        world.component<CharacterGeneralBackground>();
        world.component<CharacterMainBackground>();
    }
};
