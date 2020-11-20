#include <iostream>
#include <string>

void print_hello(std::string string)
{
    std::cout << "Hello " << string << "!" << std::endl;
}

int main()
{
    std::cout << "What's your name? ";
    std::string name;
    std::cin >> name;

    print_hello(name);

    return 0;
}
