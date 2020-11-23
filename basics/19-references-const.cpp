#include <iostream>

int main()
{
    int var_a = 12;

    const int var_b = var_a;
    const int& var_c = var_a;

    std::cout << "a   b   c" << std::endl;
    std::cout << var_a << "  " << var_b << "  " << var_c << std::endl;

    var_a = 15;
    // var_b = 20; <-- BLAD!

    std::cout << var_a << "  " << var_b << "  " << var_c << std::endl;

    // var_c = 30; <-- BLAD!

    std::cout << var_a << "  " << var_b << "  " << var_c << std::endl;

    return 0;
}
