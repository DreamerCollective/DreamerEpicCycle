#include "Unit.h"

void Unit::CreateUnitOnSimulation(flecs::iter& iter, UnitComponents::SpawnUnit* su)
{
	for (auto it : iter)
	{
		iter.entity(it).set<UnitComponents::UnitBase>({ su->organisationLevelSpawning,0,10 });
		if (su->shouldSpawnWithSubUnits)
		{
			iter.world().entity("ChildUnit").set<UnitComponents::UnitBase>({ su->organisationLevelSpawning, 0, 10 });
		}
		iter.entity(it).remove<UnitComponents::SpawnUnit>();
	}
}
