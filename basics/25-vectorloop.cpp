#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names = {"Ala", "Ola", "Tomek", "Karol"};
    std::vector<int> ages = {18, 20, 22, 20};

    for(int i = 0; i < 4; i++)
    {
        std::cout << names[i] << " is " << ages[i] << " years old." << std::endl;
    }

    for(std::string name : names)
    {
        std::cout << name << ", ";
    }

    for(int age : ages)
    {
        std::cout << age << ", ";
    }
    std::cout << std::endl;

    return 0;
}
