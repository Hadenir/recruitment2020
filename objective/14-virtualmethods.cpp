#include <iostream>

class Shape
{
public:
    virtual void print() const
    {
        std::cout << "Shape(Generic)";
    }

    virtual float area() const = 0;

    virtual float perimeter() const = 0;
};

class GenericShape : public Shape
{
public:
    float area() const override { return 0; }

    float perimeter() const override { return 0; }
};

class Rectangle : public Shape
{
public:
    Rectangle(float a, float b) : m_a(a), m_b(b) {}

    void print() const override
    {
        std::cout << "Rectangle(a=" << m_a << ",b=" << m_b << ')';
    }

    float area() const override { return m_a * m_b; }

    float perimeter() const override { return 2 * (m_a + m_b); }

private:
    float m_a;
    float m_b;
};

class Circle : public Shape
{
public:
    Circle(float r) : m_r(r) {}

    void print() const override
    {
        std::cout << "Circle(r=" << m_r << ')';
    }

    float area() const override { return M_PI * m_r * m_r; }

    float perimeter() const override { return 2 * M_PI * m_r; }

private:
    const float M_PI = 3.1415;

    float m_r;
};

int main()
{
    GenericShape generic;
    Rectangle rectangle(3, 5);
    Circle circle(3);

    generic.print(); std::cout << ": area=" << generic.area() << ", per=" << generic.perimeter() << std::endl;
    rectangle.print(); std::cout << ": area=" << rectangle.area() << ", per=" << rectangle.perimeter() << std::endl;
    circle.print(); std::cout << ": area=" << circle.area() << ", per=" << circle.perimeter() << std::endl;
    return 0;
}

