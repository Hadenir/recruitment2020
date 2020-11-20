#include <iostream>
#include <cstdlib>

int main()
{
    srand(time(nullptr));

    int random = rand() % 30 + 1;

    std::cout << "Let's play a game! Try to guess random number between 1 and 30." << std::endl;
    int guess;
    std::cin >> guess;
    while(guess != random)
    {
        std::cout << "Nah, try again..." << std::endl;
        std::cin >> guess;
    }

    std::cout << "GZ! You won!" << std::endl;

    return 0;
}
