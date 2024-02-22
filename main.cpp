/* Copyright (c) 2023, Dreamer Collective
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

// everytime cmake recompiles insert this statement |v| into DreamerEpicCycle properties C/C++ include directories
// C:\SDK\VulkanSDK\Include;C:\SDK\SDL2-devel-2.28.4-VC\include
 
#include "Interaction/third_party/flecs/flecs/flecs.h"
#include "Interaction/src/Items/ItemModule.h"
#include "Graphics/src/vk_engine.h"
#include <iostream>


int main(int argc, char** argv) 
{

     bool ActiviateGraphics = true;

     bool ActiviateInteraction = false;

     if(ActiviateInteraction) {

         flecs::world world;

         //cout << "Type the amount of items to spawn" << std::endl;

         //cin >> AmountofItemstoSpawn;

         world.import<ItemConfig>();

         world.entity("Item").set<ItemConfigComponents::ConfigStage>({1});

         world.set_target_fps(60);

         world.import<flecs::monitor>();

         world.app().enable_rest(true).run();

         while (world.progress());
     }

     if(ActiviateGraphics) 
     {
         VulkanEngine engine;

         engine.init();

         engine.run();

         engine.cleanup();
     }

    return 0;
}
