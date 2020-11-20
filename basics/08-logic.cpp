#include <iostream>

int main()
{
    std::cout << "Enter A and B: ";
    int a;
    int b;
    std::cin >> a >> b;

    bool equal = a == b;
    bool a_greater = a > b;
    bool b_greater = a < b;
    std::cout << "A = B: " << equal << std::endl
              << "A > B: " << a_greater << std::endl
              << "A < B: " << b_greater << std::endl;

    std::cout << "A =/= B: " << (a != b) << std::endl
              << "A >= B: " << (a >= b) << std::endl
              << "A <= B: " << (a <= b) << std::endl;

    return 0;
}
