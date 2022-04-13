#pragma once
#include "flecs.h"
#include "CharacterComponents.h"

struct Characters
{


	Characters(flecs::world& world) 
	{
        world.import<CharactersComponents>();

		world.module<Characters>();


	}
};