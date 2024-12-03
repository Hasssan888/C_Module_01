// #include "headerfile.h"

#include <iostream>

int     add(int a, int b)
{
    return a + b;
}

int main()
{
    int(*funcPtr)(int, int) = add;
    std::cout << add(7, 4) << std::endl;
    std::cout << funcPtr(3, 4) << std::endl;
}