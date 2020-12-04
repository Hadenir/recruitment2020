#include <iostream>

class Util
{
public:
    static float lerp(float a, float b, float t)
    {
        return (1 - t) * a + t * b;
    }

    static float clamp(float v, float min, float max)
    {
        if(v < min)
            return min;
        else if(v > max)
            return max;
        else
            return v;
    }
};

int main()
{
    std::cout << "lerp(2,5,0.5) = " << Util::lerp(2, 5, 0.5) << std::endl;
    std::cout << "clamp(10,0,3) = " << Util::clamp(10, 0, 3) << std::endl;
    std::cout << "clamp(2,0,3) = " << Util::clamp(2, 0, 3) << std::endl;
    std::cout << "clamp(-5,0,3) = " << Util::clamp(-5, 0, 3) << std::endl;

    return 0;
}
