#include <iostream>

void twice(int& number)
{
    number *= 2;
}

int main()
{
    std::cout << "Input a number: ";
    int num;
    std::cin >> num;

    twice(num);

    std::cout << "I doubled that number for you: " << num << std::endl;

    return 0;
}



