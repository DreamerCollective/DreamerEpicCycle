/* Copyright (c) 2021, Dreamer Collective
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 the "License";
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include "flecs/flecs.h"

struct CharactersComponents
{

    struct CharacterMood
    {
        int mindset;
    };

    struct PlayerCharacterCreatedBackground
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
        int heritage;
        int age;
        int background;
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

    struct PassiveTreeSkillPoints
    {
        int Skillpoints;
        int SkillpointsToSpend;
        int SKillpointsAlreadySpend;
    };

    explicit CharactersComponents(flecs::world& world)
    {
        world.module<CharactersComponents>();

        world.component<CharacterStrengthAttribute>();
        world.component<CharacterDexterityAttribute>();
        world.component<CharacterIntelligenceAttribute>();
        world.component<CharacterWillpowerAttribute>();
        world.component<CharacterEnduranceAttribute>();
        world.component<CharacterLuckAttribute>();
        world.component<CharacterCharismaAttribute>();
        world.component<CharacterWisdomAttribute>();
        world.component<CharacterMagicAttribute>();
        world.component<CharacterNullAttribute>();

        world.component<CharacterLifeStats>();
        world.component<CharacterEnergyStats>();
        world.component<CharacterArmourStats>();
        world.component<CharacterShieldStats>();
        world.component<CharacterMagicStats>();
        world.component<CharacterNullStats>();

        world.component<CharacterMagicResistance>();
        world.component<CharacterNullResistance>();


        world.component<CharacterStatNumbers>();
        world.component<PassiveTreeModifier>();
        world.component<PassiveTreeSkillPoints>();
        world.component<PassiveTreeNode>();


        world.component<CharacterMainBackground>();
        world.component<PlayerCharacterCreatedBackground>();
        world.component<CharacterLevel>();

        world.component<CharacterStatNumbers>();

    }
};
