#include <iostream>

int factorialUsingIteration(int n)
{
    int res = 1;
    for (int i = n; i > 0; i--)
    {
        res *= i;
    }
    return res;
}

int factorialUsingRecursion(int n)
{
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    else
        return factorialUsingRecursion(n - 1) * n;
}

int main()
{
    int x = 10;
    std::cout << factorialUsingIteration(x) << std::endl;
    std::cout << factorialUsingRecursion(x) << std::endl;
    return 0;
}
