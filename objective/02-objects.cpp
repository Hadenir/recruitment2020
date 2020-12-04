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
    Animal dog;
    dog.set_age(1);
    dog.set_weight(2.5);

    Animal elephant;
    elephant.set_age(30);
    elephant.set_weight(2700);

    Animal hamster;
    hamster.set_age(0);
    hamster.set_weight(0.031);

    for(int i = 0; i < 10; i++)
        elephant.inc_age();

    std::cout << "The elephant is " << elephant.get_age() << " years old!" << std::endl;

    return 0;
}


