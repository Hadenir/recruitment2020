#include <iostream>
#include <string>

int main()
{
    char hello[] = {'H', 'e', 'l', 'l', 'o', 0};
    char welcome[] = "Welcome";
    std::string goodmorning = "Good morning!";

    std::cout << hello << std::endl;
    std::cout << welcome << std::endl;
    std::cout << goodmorning << std::endl;

    std::cout << "\"Good morning\" has " << goodmorning.length() << " characters: ";
    for(int i = 0; i < goodmorning.length(); i++)
    {
        std::cout << goodmorning[i] << ", ";
    }
    std::cout << std::endl;

    goodmorning.clear();

    if(goodmorning.empty())
    {
        std::cout << "String is empty :(" << std::endl;
    }

    return 0;
}
