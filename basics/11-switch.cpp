#include <iostream>

int main()
{
    std::cout << "Pick an option (0,1,2): ";
    int option;
    std::cin >> option;

    switch(option)
    {
        case 0:
            std::cout << "Luke, I am your father." << std::endl;
            break;
        case 1:
            std::cout << "May the force be with you." << std::endl;
            break;
        case 2:
            std::cout << "There are no accidents." << std::endl;
            break;
        default:
            std::cout << "You picked a wrong option!" << std::endl;
            return 1;
    }

    return 0;
}
