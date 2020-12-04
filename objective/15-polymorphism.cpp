#include <iostream>
#include <cmath>

class Shape
{
public:
    virtual float area() const = 0;
};

class Triangle : public Shape
{
public:
    Triangle(float a, float b, float c)
        : m_a(a), m_b(b), m_c(c) {}

    float area() const override
    {
        float p = (m_a+m_b+m_c) / 2;
        return sqrt(p*(p-m_a)*(p-m_b)*(p-m_c));
    }
private:
    float m_a, m_b, m_c;
};

class Square : public Shape
{
public:
    Square(float a) : m_a(a) {}

    float area() const override
    {
        return m_a*m_a;
    }
private:
    float m_a;
};

void print_area(const Shape& shape)
{
    std::cout << "Area of the shape is " << shape.area() << std::endl;
}

int main()
{
    Square square(2);

    Triangle triangle(3.0, 4.0, 5.0);

    print_area(square);
    print_area(triangle);

    return 0;
}
