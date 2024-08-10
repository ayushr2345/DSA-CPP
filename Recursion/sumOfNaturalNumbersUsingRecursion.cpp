#include <iostream>

int sumOfNaturalNumbersUsingRecursion(int n)
{
    if (n > 0)
    {
        return sumOfNaturalNumbersUsingRecursion(n - 1) + n;
    }
    return 0;
}

int main()
{
    int x = 5;
    std::cout << sumOfNaturalNumbersUsingRecursion(x) << std::endl;
    return 0;
}
