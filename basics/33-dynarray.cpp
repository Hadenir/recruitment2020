#include <iostream>

int main()
{
    std::cout << "How many friends have you got? ";
    unsigned int friends_count;
    std::cin >> friends_count;

    std::string* friends = new std::string[friends_count];
    std::string tmp;
    for(unsigned int i = 0; i < friends_count; i++)
    {
        std::cout << i+1 << ". ";
        std::cin >> tmp;

        friends[i] = tmp;
    }

    for(unsigned int i = 0; i < friends_count; i++)
    {
        std::cout << "Greetings " << friends[i] << "!" << std::endl;
    }

    delete[] friends;
    return 0;
}



