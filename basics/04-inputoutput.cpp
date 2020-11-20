#include <iostream>
#include <string>

int main()
{
    std::cout << "What's your name? ";

    std::string name;
    std::cin >> name;

    std::cout << "How old are you? ";

    unsigned int age;
    std::cin >> age;

    std::cout << "Hello, " << name << " (" << age << ")!" << std::endl;

    return 0;
}
