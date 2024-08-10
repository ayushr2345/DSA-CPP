#include <iostream>

int powerUsingRecursion(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * powerUsingRecursion(m, n - 1);
}

int powerUsingRecursionImproved(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return powerUsingRecursionImproved(m * m, n / 2);
    else
        return m * powerUsingRecursionImproved(m * m, (n - 1) / 2);
}

int main()
{
    int m = 2, n = 9;
    std::cout << "Normal version: " << powerUsingRecursion(m, n) << std::endl;
    std::cout << "Improved version: " <<  powerUsingRecursionImproved(m, n) << std::endl;
    return 0;
}
