#include <iostream>

int x = 0;

int staticVariableInRecursion(int n)
{
    if (n > 0)
    {
        x++;
        return staticVariableInRecursion(n - 1) + x;
    }
    return 0;
}

int main()
{
    int x = 5;
    std::cout << staticVariableInRecursion(x) << std::endl;
    return 0; 
}
