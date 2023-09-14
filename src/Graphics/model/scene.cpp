#include "scene.h"

/**
* Scene constructor
*/
Scene::Scene() {

    position.insert({ meshTypes::SPHERE, {} });
    for (int16_t x = 0; x <= 1000; x++)
    {
        position[meshTypes::SPHERE].emplace_back(CreatingRandom32BitFloatNumbers(Scene::seed, 0.0f, 1000.0f), CreatingRandom32BitFloatNumbers(Scene::seed, 0.0f, 100.0f), CreatingRandom32BitFloatNumbers(Scene::seed, 0.0f, 100.0f));
    }

    rotation.insert({ meshTypes::SPHERE, {} });
    for (int16_t x = 0; x <= 1000; x++)
    {
        rotation[meshTypes::SPHERE].emplace_back(CreatingRandom32BitFloatNumbers(Scene::seed, 0.0f, 160.0f), CreatingRandom32BitFloatNumbers(Scene::seed, 0.0f, 160.0f), CreatingRandom32BitFloatNumbers(Scene::seed, 0.0f, 160.0f));
    }

    scale.insert({ meshTypes::SPHERE, {} });
    for (int16_t x = 0; x <= 1000; x++)
    {
        float uniformscale = CreatingRandom32BitFloatNumbers(Scene::seed, 0.0f, 100.0f);
        scale[meshTypes::SPHERE].emplace_back(uniformscale, uniformscale, uniformscale);
    }
}

inline float Scene::CreatingRandom32BitFloatNumbers(int seed, float min, float max) {
    std::mt19937 gen(seed);
    std::uniform_real_distribution<float> randomNumber32(min, max);
    float randomNumber = randomNumber32(gen);
    return randomNumber;
};