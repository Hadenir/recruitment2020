#include <iostream>
#include <vector>

class Gcd
{
public:
    void add_number(int n)
    {
        m_numbers.push_back(n);
    }

    int calculate() const
    {
        if(m_numbers.empty())
            return 0;

        int result = m_numbers[0];
        for(int i = 1; i < m_numbers.size(); i++)
        {
            result = euclid_gcd(result, m_numbers[i]);
        }

        return result;
    }

private:
    std::vector<int> m_numbers;

    int euclid_gcd(int a, int b) const
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
};

int main()
{
    Gcd gcd_calculator;

    gcd_calculator.add_number(21);
    gcd_calculator.add_number(456);
    gcd_calculator.add_number(2337);
    gcd_calculator.add_number(9339);

    std::cout << "GCD of these numbers is " << gcd_calculator.calculate() << std::endl;

    return 0;
}
