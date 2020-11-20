#include <iostream>

void print_employee(std::string name, int age, float salary)
{
    std::cout << name << ", age " << age << ", salary: $" << salary << std::endl;
}

int main()
{
    std::cout << "Fill personal data of your employee." << std::endl;
    std::cout << "Name: ";
    std::string emp_name;
    std::cin >> emp_name;
    std::cout << "Age: ";
    int emp_age;
    std::cin >> emp_age;
    std::cout << "Salary: $";
    float emp_salary;
    std::cin >> emp_salary;

    print_employee(emp_name, emp_age, emp_salary);

    return 0;
}
