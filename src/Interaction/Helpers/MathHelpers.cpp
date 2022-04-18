
#include "MathHelpers.h"
 int MathHelpers::CreatingSeed()
{
    std::random_device rand32;
    std::mt19937 gen(rand32());
    std::uniform_int_distribution<int> randomNumber32(0, INT32_MAX);
    int randomNumber = randomNumber32(gen);
    return randomNumber;
}

int MathHelpers::CreatingRandom32BitIntNumbers(int seed, int min, int max)
{
    std::mt19937 gen(seed);
    std::uniform_int_distribution<int> randomNumber32(min, max);
    int randomNumber = randomNumber32(gen);
    return randomNumber;
}

float  MathHelpers::CreatingRandom32BitFloatNumbers(int seed, float min, float max)
{
    std::mt19937 gen(seed);
    std::uniform_real_distribution<float> randomNumber32(min, max);
    float randomNumber = randomNumber32(gen);
    return randomNumber;
}