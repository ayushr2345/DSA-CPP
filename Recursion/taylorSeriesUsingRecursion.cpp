#include <iostream>

double taylorSeriesUsingRecursion(int x, int n)
{
    static double p = 1;
    static double f = 1;
    double result;
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        result = taylorSeriesUsingRecursion(x, n - 1);
        p = p * x;
        f = f * n;
        return (result + p / f);
    }
}

int main()
{
    int x = 10;
    int n = 100;
    std::cout << taylorSeriesUsingRecursion(x, n) << std::endl;
    return 0;
}
