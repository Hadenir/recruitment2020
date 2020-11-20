#include <iostream>

int main()
{
    bool var_a = true;
    bool var_b = false;

    std::cout << "var_a: " << var_a << ", var_b: " << var_b << std::endl;

    std::cout << "var_c: ";
    bool var_c;
    std::cin >> var_c;

    std::cout << "not var_c = " << !var_c << std::endl;
    std::cout << "var_a or var_c = " << (var_a || var_c) << std::endl;
    std::cout << "var_a and var_c = " << (var_a && var_c) << std::endl;

    return 0;
}
