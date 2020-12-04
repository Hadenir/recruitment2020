#include <iostream>

class Complex
{
public:
    Complex(float real, float imag) : m_real(real), m_imag(imag) {}

    Complex add(Complex other)
    {
        return Complex(m_real + other.m_real, m_imag + other.m_imag);
    }

    void print() const
    {
        std::cout << m_real << " + " << m_imag << 'i' << std::endl;
    }

private:
    float m_real, m_imag;
};

int main()
{
    Complex comp_a(1, 0);    // a = 1 + 0i
    Complex comp_b(0, 2);    // b = 0 + 2i

    Complex comp_c = comp_a.add(comp_b);    // c = 1 + 2i

    std::cout << "The sum is: ";
    comp_c.print();

    return 0;
}
