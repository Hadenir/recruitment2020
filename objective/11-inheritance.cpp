#include <iostream>
#include <string>

class Person
{
public:
    std::string m_name;
    std::string m_surname;
};

class Employee : public Person
{
public:
    float m_salary;
};

int main()
{
    Employee me;
    me.m_name = "Conrad";
    me.m_surname = "Birchwood";
    me.m_salary = 2000;

    std::cout << me.m_name << ' ' << me.m_surname << ": $" << me.m_salary << std::endl;

    return 0;
}


