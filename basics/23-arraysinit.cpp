#include <iostream>
#include <string>

int main()
{
    std::string names[] = {"Ala", "Ola", "Tomek", "Karol"};
    int ages[] = {18, 20, 22, 20};

    for(int i = 0; i < 4; i++)
    {
        std::cout << names[i] << " is " << ages[i] << " years old." << std::endl;
    }

    return 0;
}
