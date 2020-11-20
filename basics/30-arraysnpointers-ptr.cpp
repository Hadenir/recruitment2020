#include <iostream>

int main()
{
    int array[] = {0, -1, -2, -3, -4, -5};
    int* ptr = array;

    std::cout << "Let's try to print an array directly: " << ptr << std::endl;

    for(int i = 0; i < 6; i++)
    {
        std::cout << "Address of " << i << "-th element is " << &ptr[i] << std::endl;
    }

    return 0;
}
