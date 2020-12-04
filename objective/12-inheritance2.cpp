#include <iostream>

class Person
{
public:
    Person(const std::string& name, const std::string& surname)
        : m_name(name), m_surname(surname)
    {}

    void print() const { std::cout << m_name << ' ' << m_surname; }

private:
    std::string m_name;
    std::string m_surname;
};

class Student : public Person
{
public:
    Student(const std::string& name, const std::string& surname, const std::string& faculty)
        : Person(name, surname), m_faculty(faculty)
    {}

    void print() const
    {
        Person::print();
        std::cout << " studying at " << m_faculty;
    }

private:
    std::string m_faculty;
};

int main()
{
    Person person1("Jan", "Kowalski");
    Person person2("Anna", "Nowak");

    Student student1("Wojtek", "Kozlowski", "MiNI");
    Student student2("Kasia", "Witkowska", "MEiL");

    person1.print(); std::cout << std::endl;
    person2.print(); std::cout << std::endl;
    student1.print(); std::cout << std::endl;
    student2.print(); std::cout << std::endl;
}
