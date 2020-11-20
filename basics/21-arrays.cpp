#include <iostream>

int main()
{
    int var1 = 1;
    int var2 = 2;
    int var3 = 3;

    int tab[100];
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    std::cout << "First 3 elements of array are: " << tab[0] << ' ' << tab[1] << ' ' << tab[2] << std::endl;

    for(int i = 3; i < 100; i++)
    {
        tab[i] = 2 * i;
    }

    for(int i = 0; i < 100; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
    }

    return 0;
}
