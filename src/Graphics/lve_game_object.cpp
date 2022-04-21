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

#include "lve_game_object.hpp"

namespace lve {

glm::mat4 TransformComponent::mat4() {
  const float c3 = glm::cos(rotation.z);
  const float s3 = glm::sin(rotation.z);
  const float c2 = glm::cos(rotation.x);
  const float s2 = glm::sin(rotation.x);
  const float c1 = glm::cos(rotation.y);
  const float s1 = glm::sin(rotation.y);
  return glm::mat4{
      {
          scale.x * (c1 * c3 + s1 * s2 * s3),
          scale.x * (c2 * s3),
          scale.x * (c1 * s2 * s3 - c3 * s1),
          0.0f,
      },
      {
          scale.y * (c3 * s1 * s2 - c1 * s3),
          scale.y * (c2 * c3),
          scale.y * (c1 * c3 * s2 + s1 * s3),
          0.0f,
      },
      {
          scale.z * (c2 * s1),
          scale.z * (-s2),
          scale.z * (c1 * c2),
          0.0f,
      },
      {translation.x, translation.y, translation.z, 1.0f}};
}

glm::mat3 TransformComponent::normalMatrix() {
  const float c3 = glm::cos(rotation.z);
  const float s3 = glm::sin(rotation.z);
  const float c2 = glm::cos(rotation.x);
  const float s2 = glm::sin(rotation.x);
  const float c1 = glm::cos(rotation.y);
  const float s1 = glm::sin(rotation.y);
  const glm::vec3 invScale = 1.0f / scale;

  return glm::mat3{
      {
          invScale.x * (c1 * c3 + s1 * s2 * s3),
          invScale.x * (c2 * s3),
          invScale.x * (c1 * s2 * s3 - c3 * s1),
      },
      {
          invScale.y * (c3 * s1 * s2 - c1 * s3),
          invScale.y * (c2 * c3),
          invScale.y * (c1 * c3 * s2 + s1 * s3),
      },
      {
          invScale.z * (c2 * s1),
          invScale.z * (-s2),
          invScale.z * (c1 * c2),
      },
  };
}

LveGameObject LveGameObject::makePointLight(float intensity, float radius, glm::vec3 color) {
  LveGameObject gameObj = LveGameObject::createGameObject();
  gameObj.color = color;
  gameObj.transform.scale.x = radius;
  gameObj.pointLight = std::make_unique<PointLightComponent>();
  gameObj.pointLight->lightIntensity = intensity;
  return gameObj;
}

}  // namespace lve