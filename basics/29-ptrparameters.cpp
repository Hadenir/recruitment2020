#include <iostream>

void thrice(int* ptr_num)
{
    *ptr_num *= 3;
}

int main()
{
    std::cout << "Give me a number: ";
    int number;
    std::cin >> number;

    thrice(&number);

    std::cout << "You number times 3 is equal to " << number << std::endl;

    return 0;
}


