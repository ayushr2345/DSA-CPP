#include <iostream>

int x = 0;

int globalVariableInRecursion(int n)
{
    if (n > 0)
    {
        x++;
        return globalVariableInRecursion(n - 1) + x;
    }
    return 0;
}

int main()
{
    int x = 5;
    std::cout << globalVariableInRecursion(x) << std::endl;
    return 0; 
}
