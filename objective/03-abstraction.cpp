#include <iostream>
#include <string>
#include <vector>

class ListBuilder
{
public:
    void add_name(const std::string& name)
    {
        m_names.push_back(name);
    }

    std::string get_list() const
    {
        std::string result = "Names list:\n";
        for(const std::string& name : m_names)
        {
            result += "-> " + name + "\n";
        }

        return result;
    }

private:
    std::vector<std::string> m_names;
};

int main()
{
    ListBuilder builder;

    builder.add_name("Ola");
    builder.add_name("Konrad");
    builder.add_name("Tomek");
    builder.add_name("Kasia");

    std::cout << builder.get_list();

    return 0;
}

