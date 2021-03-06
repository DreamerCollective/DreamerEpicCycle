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

#include "flecs/flecs.h"
#include "../Interaction/Items/ItemModule.h"
#include "../Graphics/first_app.hpp"
#include <iostream>

using namespace std;

int main() 
{
    bool ActiviateVulkan = false;

    flecs::world world;

    //cout << "Type the amount of items to spawn" << std::endl;

    //cin >> AmountofItemstoSpawn;

    world.import<ItemConfig>();

    world.entity("Item").set<ItemConfigComponents::ConfigStage>({ 1 });

    world.set_target_fps(60);

    world.import<flecs::monitor>();

    //world.set_threads(12);

    world.app().enable_rest(true).run();

    while(world.progress());

    if(ActiviateVulkan)
    {
        lve::FirstApp app{};

        try
        {
            app.run();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
    }

}