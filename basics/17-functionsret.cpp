#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

int diff(int a, int b)
{
    return a - b;
}

int prod(int a, int b)
{
    return a * b;
}

int quot(int a, int b)
{
    if(b == 0)
        return 0;

    return a / b;
}

int main()
{
    std::cout << "Input two numbers X and Y: ";
    int x;
    int y;
    std::cin >> x >> y;

    std::cout << "Choose operation to perform (+,-,*,/): ";
    char op;
    std::cin >> op;

    int result;
    switch(op)
    {
        case '+':
            result = sum(x, y);
            break;
        case '-':
            result = diff(x, y);
            break;
        case '*':
            result = prod(x, y);
            break;
        case '/':
            result = quot(x, y);
            break;
        default:
            std::cout << "You picked wrong operation!" << std::endl;
            return 1;
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}
