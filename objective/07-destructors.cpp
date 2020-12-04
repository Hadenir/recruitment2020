#include <iostream>

class ExampleClass
{
public:
    ExampleClass(unsigned int id) : m_id(id)
    {
        std::cout << "Constructed object with id " << m_id << std::endl;
    }

    ~ExampleClass()
    {
        std::cout << "Deconstructed object with id " << m_id << std::endl;
    }

    void say()
    {
        std::cout << "Hello from " << m_id << std::endl;
    }

private:
    unsigned int m_id;
};

int main()
{
    ExampleClass ex1(1);
    ExampleClass ex2(2);

    ex1.say();

    {
        ExampleClass ex3(3);
        ex3.say();
    }

    ex2.say();

    return 0;
}
