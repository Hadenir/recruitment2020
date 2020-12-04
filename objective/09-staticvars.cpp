#include <iostream>
#include <string>
#include <vector>

class Account
{
public:
    static unsigned int AccountCount;

    Account(const std::string& name, const std::string& surname)
        : m_name(name), m_surname(surname)
    { AccountCount++; }

    ~Account() { AccountCount--; }

    void deposit(float amount) { m_balance += amount; }

    void withdraw(float amount) { m_balance -= amount; }

    float balance() const { return m_balance; }

private:
    std::string m_name;
    std::string m_surname;
    float m_balance = 0.0;
};

unsigned int Account::AccountCount = 0;

int main()
{
    Account my_acc("Konrad", "Brzozka");
    my_acc.deposit(100);

    {
        Account acc1("Jan", "Kowalski");
        Account acc2("Filip", "Zawislak");
        Account acc3("Anna", "Nowak");

        std::cout << "There are " << my_acc.AccountCount << " accounts" << std::endl;
    }

    std::cout << "Konrad has $" << my_acc.balance() << std::endl;
    std::cout << "There are " << Account::AccountCount << " accounts" << std::endl;

    return 0;
}

