#include <iostream>

int staticVariableInRecursion(int n)
{
    static int x = 0;
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
