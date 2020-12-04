#include <iostream>

class IComparable
{
public:
    virtual bool lesser(const IComparable& other) = 0;

    virtual bool greater(const IComparable& other) = 0;
};

class Real : public IComparable
{
public:
    Real(float val) : m_val(val) {}

    bool lesser(const Real& other) override { return m_val < other.m_val; };

    bool greater(const Real& other) override { return m_val > other.m_val; };

private:
    float m_val;
}
