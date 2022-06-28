#include "Unit.h"

void Unit::CreateUnitOnSimulation(flecs::iter& iter, SpawnUnit* su)
{
	for (auto it : iter)
	{
		iter.entity(it).set<UnitBase>({ su->organisationLevelSpawning,0,10 });
		if (su->shouldSpawnWithSubUnits)
		{
			iter.world().entity("ChildUnit").set<UnitBase>({ su->organisationLevelSpawning, 0, 10 });
		}
		iter.entity(it).remove<SpawnUnit>();
	}
}
