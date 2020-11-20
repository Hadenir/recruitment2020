#include <iostream>

int main()
{
    int var_a;
    var_a = 1;

    int var_b = 2;

    const int const_a = 1337;

    std::cout << "var_a: " << var_a << std::endl;
    std::cout << "var_b: " << var_b << std::endl;
    std::cout << "const_a: " << const_a << std::endl;

    var_a = 100;
    var_b = 200;

    std::cout << "var_a: " << var_a << std::endl;
    std::cout << "var_b: " << var_b << std::endl;

    // const_a = 7331; <-- BLAD!

    return 0;
}
