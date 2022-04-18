#include <random>
#include <iostream>

class MathHelpers
{
public:
    static int CreatingSeed();
    static int CreatingRandom32BitIntNumbers(int seed, int min, int max);
    static float CreatingRandom32BitFloatNumbers(int seed, float min, float max);
};
