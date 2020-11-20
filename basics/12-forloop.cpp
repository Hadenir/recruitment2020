#include <iostream>

int main()
{
    std::cout << "What's your name? ";
    std::string name;
    std::cin >> name;

    std::cout << "Pick a number: ";
    int n;
    std::cin >> n;

    for(int i = n; i > 0; i--)
    {
        std::cout << "Hello " << name << std::endl;
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << "Hello " << name << std::endl;
    }

    return 0;
}
