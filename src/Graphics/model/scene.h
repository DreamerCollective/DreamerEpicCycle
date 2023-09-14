#pragma once
#include "../config.h"
#include <random>


class Scene {

public:
	Scene();

    int16_t numberOfStars = 5000;
    int32_t seed = 1109837501;

    std::unordered_map<meshTypes, std::vector<glm::mat4x4>> transformmatrix;

    std::unordered_map<meshTypes, std::vector<glm::vec3>> position;
    std::unordered_map<meshTypes, std::vector<glm::vec3>> rotation;
    std::unordered_map<meshTypes, std::vector<glm::vec3>> scale;

private:
    static float CreatingRandom32BitFloatNumbers(int seed, float min, float max);
};

