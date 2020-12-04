#include <iostream>

class Rectangle
{
public:
    Rectangle() {}

    Rectangle(float a) : m_a(a), m_b(a) {}

    Rectangle(float a, float b) : m_a(a), m_b(b) {}

    float area() const
    {
        return m_a * m_b;
    }

private:
    float m_a = 0;
    float m_b = 0;
};

int main()
{
    Rectangle point;
    Rectangle square(2);
    Rectangle rectangle(3, 5);

    std::cout << "Point has area of " << point.area() << std::endl;
    std::cout << "Square has area of " << square.area() << std::endl;
    std::cout << "Rectangle has area of " << rectangle.area() << std::endl;

    return 0;
}
