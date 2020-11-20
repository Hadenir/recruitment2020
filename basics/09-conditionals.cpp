#include <iostream>

int main()
{
    std::cout << "What hour is it? ";
    int hour;
    std::cin >> hour;

    bool cond = hour < 17;
    if(cond)
    {
        std::cout << "Good morning!" << std::endl;
    }
    else
    {
        std::cout << "Good evening!" << std::endl;
    }

    std::cout << "Goodbye!" << std::endl;

    return 0;
}
