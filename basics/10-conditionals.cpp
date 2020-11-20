#include <iostream>

int main()
{
    std::cout << "Pick a number: ";
    int number;
    std::cin >> number;

    if(number % 2 == 0)
    {
        std::cout << "Your number (" << number << ") is even!";
    }
    else if(number % 3 == 0)
    {
        std::cout << "Your number (" << number << ") is odd, but divisible by 3!";
    }
    else if(number == 1337 || number == -1)
    {
        std::cout << "Your number (" << number << ") is the best!";
    }
    else
    {
        std::cout << "Your number (" << number << ") is boring!";
    }

    std::cout << std::endl;

    return 0;
}


