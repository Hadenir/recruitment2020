#include <iostream>
#include <cstdlib>

float avarage(float numbers[], unsigned int size)
{
    float sum = 0;
    for(unsigned int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum / size;
}

int main()
{
    srand(time(nullptr));

    const unsigned int len = 1000;
    float array[len];
    for(unsigned int i = 0; i < len; ++i)
    {
        array[i] = rand() % 1000 + 1;
    }

    float avrg = avarage(array, len);
    std::cout << "Drew 1000 random numbers with avarage of " << avrg << std::endl;

    return 0;
}
