#include <iostream>

int main()
{
    int array[] = {0, -1, -2, -3, -4, -5};

    std::cout << "Let's try to print an array directly: " << array << std::endl;

    for(int i = 0; i < 6; i++)
    {
        std::cout << "Address of " << i << "-th element is " << &array[i] << std::endl;
    }

    return 0;
}


