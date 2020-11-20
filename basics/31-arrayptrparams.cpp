#include <iostream>
#include <string>

void print_array(std::string* words, unsigned int size)
{
    for(unsigned int i = 0; i < size; i++)
    {
        std::cout << "Word " << i+1 << ": " << words[i] << std::endl;
    }
}

int main()
{
    std::string dict[] = {"replacement", "baseball", "lady", "opportunity", "driver"};

    print_array(dict, 5);

    std::string name = "Conrad";

    print_array(&name, 1);

    return 0;
}
