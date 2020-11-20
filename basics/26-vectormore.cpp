#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& vec)
{
    std::cout << "vector: ";
    for(int element : vec)
    {
        std::cout << element << ", ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> numbers = {-2, -3, 100, 5, 0};
    print_vector(numbers);

    numbers.clear();

    if(numbers.empty())
    {
        std::cout << "Vector is empty :(" << std::endl;
    }

    return 0;
}

