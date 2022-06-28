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
    struct PlayerCharacterCreatedBackground
    {
        int name;
        int gender;
        int sexuality;
        int ethnicity;
        int description;
        int background;
    };

    struct CharacterPoints
    {
        uint32_t characterPoints;
        uint32_t characterPointsToSpend;
        uint32_t characterPointsAlreadySpent;
        uint32_t characterExperiencePoints;
    };

    struct CharacterMainBackground
    {
        int race;
        int age;
    };

    struct CharacterStrengthAttribute
    {
        uint32_t Strength;
    };

    struct CharacterDexterityAttribute
    {
        uint32_t Dexterity;
    };

    struct CharacterIntelligenceAttribute
    {
        uint32_t Intelligence;
    };

    struct CharacterWillpowerAttribute
    {
        uint32_t Willpower;
    };

    struct CharacterEnduranceAttribute
    {
        uint32_t Endurance;
    };

    struct CharacterLuckAttribute
    {
        uint32_t Luck;
    };

    struct CharacterCharismaAttribute
    {
        uint32_t Charisma;
    };

    struct CharacterWisdomAttribute
    {
        uint32_t Wisdom;
    };

    struct CharacterMagicAttribute
    {
        uint32_t Magic;
    };

    struct CharacterNullAttribute
    {
        uint32_t Null;
    };

    struct CharacterLifeStats
    {
        uint32_t Life;
        float LifeRegenRate;
        float LifeRegenDelay;
    };

    struct CharacterEnergyStats
    {
        uint32_t Energy;
        float EnergyRegenRate;
        float EnergyRegenDelay;
    };

    struct CharacterArmourStats
    {
        uint32_t Armour;
        float ArmourRegenRate;
        float ArmourRegenDelay;
    };

    struct CharacterShieldStats
    {
        uint32_t Shield;
        float ShieldRegenRate;
        float ShieldRegenDelay;
    };

    struct CharacterMagicStats
    {
        uint32_t Magic;
        float MagicRegenRate;
        float MagicRegenDelay;
    };

    struct CharacterNullStats
    {
        uint32_t Null;
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
        uint32_t addFromGearMods, addFromTreeMods;
        uint32_t minusFromGearMods, minusFromTreeMods;
        uint32_t flatTotal;
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
        uint32_t level;
    };

    struct PassiveTreeModifier
    {
        uint32_t intmodifier;
        uint32_t floatmodifier;
    };

    struct PassiveTreeSkillPointsCost
    {
        uint32_t CharacterPointsCost;
        uint32_t pointsPerLevel;
        uint32_t pointIncreasePerLevel;
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
        world.component<CharacterStatNumbers>();

        world.component<CharacterLifeStats>();
        world.component<CharacterEnergyStats>();
        world.component<CharacterArmourStats>();
        world.component<CharacterShieldStats>();
        world.component<CharacterMagicStats>();
        world.component<CharacterNullStats>();

        world.component<CharacterMagicResistance>();
        world.component<CharacterNullResistance>();

        world.component<PassiveTreeModifier>();
        world.component<PassiveTreeSkillPointsCost>();
        world.component<PassiveTreeNode>();

        world.component<CharacterMainBackground>();
        world.component<PlayerCharacterCreatedBackground>();
        world.component<CharacterPoints>();

    }
};
