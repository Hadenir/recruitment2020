#include <iostream>

class Fraction
{
public:


    Fraction(int numerator, int denominator)
        : m_numerator(numerator), m_denominator(denominator)
    {}

    Fraction add(Fraction other) const
    {
        return Fraction(
            m_numerator * other.m_denominator + other.m_numerator * m_denominator,
            m_denominator * other.m_denominator
        );
    }

    void print() const
    {
        std::cout << m_numerator << '/' << m_denominator;
    }

private:
    int m_numerator;
    int m_denominator;
};

int main()
{
    Fraction frac1(1,2);
    Fraction frac2 = frac1.add(frac1);

    // Fraction frac3;  <-- BLAD!

    std::cout << "1/2 + 1/2 = ";
    frac2.print();
    std::cout << std::endl;

    return 0;
}
