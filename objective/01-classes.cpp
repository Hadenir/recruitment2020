#include <iostream>

class Animal
{
public:
    void set_weight(float weight) { m_weight = weight; }

    float get_weight() const { return m_weight; }

    void set_age(int age) { m_age = age; }

    int get_age() const { return m_age; }

    void inc_age() { m_age++; }

private:
    int m_age;
    float m_weight;
};

int main()
{
    Animal animal1;
    // animal.m_age = 1;    <-- BLAD!
    animal1.set_age(1);
    // animal1.m_weight = 200;  <-- BLAD!
    animal1.set_weight(200);

    std::cout << "Animal:" << std::endl
           // << "  Age: " << animal.m_age  <-- BLAD!
           // << "  Weight: " << animal1.m_weight   <-- BLAD!
              << "  Age: " << animal1.get_age() << std::endl
              << "  Wieght: " << animal1.get_weight() << std::endl;
}
