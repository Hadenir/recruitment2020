#include <iostream>

int main()
{
    std::cout << "Input integer a: ";
    int a;
    std::cin >> a;

    std::cout << "Input integer b: ";
    int b;
    std::cin >> b;

    a = a + 1;
    b = b - 1;
    std::cout << a << " " << b << std::endl;

    a += 1;
    b -= 1;
    std::cout << a << " " << b << std::endl;

    a++;
    b--;
    std::cout << a << " " << b << std::endl;
    std::cout << -a << " " << -b << std::endl;

    return 0;
}
