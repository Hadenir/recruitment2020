#include <iostream>

int main()
{
    {
        int var_a = 123;
        std::cout << "var_a: " << var_a << std::endl;
    }

    int* ptr_b = new int;
    std::cout << "ptr_b: " << ptr_b << std::endl;
    *ptr_b = 456;
    std::cout << "ptr_b points to value: " << *ptr_b << std::endl;

    delete ptr_b;
    return 0;
}

