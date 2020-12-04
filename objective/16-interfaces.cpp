#include <iostream>
#include <cmath>

class INumber
{
public:
    virtual ~INumber() {}

    virtual void zero() = 0;

    virtual float abs() const = 0;
};

class Real : public INumber
{
public:
    float Value;

    Real(float val) : Value(val) {}

    void zero() override
    {
        Value = 0;
    }

    float abs() const override
    {
        if(Value < 0)
            return -Value;
        else
            return Value;
    }
};

class Complex : public INumber
{
public:
    float Re;
    float Im;

    Complex(float real, float imag) : Re(real), Im(imag) {}

    void zero() override
    {
        Re = Im = 0;
    }

    float abs() const override
    {
        return std::sqrt(Re * Re + Im * Im);
    }
};

void print_magnitute_and_zero(INumber& number)
{
    std::cout << number.abs() << std::endl;
    number.zero();
}

int main()
{
    Real pi(3.14);
    Real e(2.71);

    Complex z1(3, 4);
    Complex z2(0, 1);

    print_magnitute_and_zero(pi);
    print_magnitute_and_zero(e);
    print_magnitute_and_zero(z1);
    print_magnitute_and_zero(z2);

    std::cout << "Values: " << pi.Value << ',' << e.Value << ',' << z1.Re << ',' << z1.Im << ',' << z2.Re << ',' << z2.Im << std::endl;
}

