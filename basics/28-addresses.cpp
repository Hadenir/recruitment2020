#include <iostream>

int main()
{
    int var_a = 32;
    int* ptr_a = &var_a;

    std::cout << "Variable var_a at address " << ptr_a << " has value " << var_a << std::endl;

    int var_b = var_a;
    int var_c = *ptr_a;

    std::cout << "var_b: " << var_b << " | var_c: " << var_c << std::endl;

    *ptr_a = -10;

    std::cout << "var_a: " << var_a << std::endl;

    return 0;
}


