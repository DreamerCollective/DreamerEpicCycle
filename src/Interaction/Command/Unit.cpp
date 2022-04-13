#include "Unit.h"

void Unit::CreateUnit(flecs::iter& iter, SpawnUnit* su)
{
	for (auto it : iter)
	{
		iter.entity(it).set<UnitBase>({ su->organisationLevelSpawning,0,10 });
		if (su->shouldSpawnWithSubUnits == true) 
		{
			iter.world().entity("ChildUnit").add_childof(it).set<UnitBase>({ su->organisationLevelSpawning, 0, 10 });
		}
		iter.entity(it).remove<SpawnUnit>();
	}
}
