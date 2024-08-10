#include <iostream>

double taylorSeriesUsingHornersRule(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return taylorSeriesUsingHornersRule(x, n - 1);
}

int main()
{
    int x = 2;
    int n = 10;
    std::cout << taylorSeriesUsingHornersRule(x, n) << std::endl;
    return 0;
}
