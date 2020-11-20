#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1(20);
    vec1[0] = 1;
    vec1[1] = 2;
    vec1[2] = 3;

    std::vector<float> vec2 = {0, 1, 3.14, 2.72, 1.41, 1.62};
    std::vector<std::string> vec3;

    std::cout << "Length of vector 1 is " << vec1.size() << std::endl;
    std::cout << "Length of vector 2 is " << vec2.size() << std::endl;
    std::cout << "Length of vector 3 is " << vec3.size() << std::endl;

    vec3.push_back("Ala ma");
    vec3.push_back("kota.");
    std::cout << "Length of vector 3 is " << vec3.size() << std::endl;

    return 0;
}

