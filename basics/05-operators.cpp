#include <iostream>

int main()
{
    std::cout << "Input integer a: ";
    int a;
    std::cin >> a;

    std::cout << "Input integer b: ";
    int b;
    std::cin >> b;

    int sum = a + b;
    std::cout << "a + b = " << sum << std::endl;

    int diff = a - b;
    std::cout << "a - b = " << diff << std::endl;

    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;

    int result = (a + b) * (a - b);
    std::cout << "a^2 - b^2 = " << result << std::endl;

    std::cout << "Input real number c: ";
    float c;
    std::cin >> c;

    std::cout << "Input real number d: ";
    float d;
    std::cin >> d;

    float ratio = c / d;
    std::cout << "c / d = " << ratio << std::endl;
    std::cout << "c + d = " << c + d << std::endl;

    return 0;
}
