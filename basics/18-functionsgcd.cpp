#include <iostream>

int gcd(int a, int b)
{
    int t;
    while(b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    std::cout << "Input two integers: ";
    int number1;
    int number2;
    std::cin >> number1 >> number2;

    int divider = gcd(number1, number2);
    std::cout << "Greatest common divider of " << number1 << " and "
              << number2 << " is " << divider << std::endl;

    return 0;
}



