#include "ItemGeneration.h"

void ItemGeneration::CreateItemEntity(const flecs::iter& iter, ItemComponents::ItemSpawning* is)
{
    for (auto it : iter)
    {
        for (auto i = 0; i < is->NumberOfItems; i++)
        {
            auto e = iter.world().entity();
            e.set<ItemComponents::ItemStaging>({ false, false, false, false, false, false, false,false,false,false,false,0});
            //std::cout << "System CreateItemEntity has created item " << i << " " << std::endl;
        }
        //e.destruct();
        iter.entity(it).remove<ItemComponents::ItemSpawning>();
        //iter.entity(it).destruct();

    }
}