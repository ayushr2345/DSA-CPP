#include <iostream>

int fibonacciUsingIteration(int n)
{
    int a = 0;
    int b = 1;
    int sum = 0;

    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}

int fibonacciUsingRecursion(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacciUsingRecursion(n - 2) + fibonacciUsingRecursion(n - 1);
}

static int fibonacciSeries[10];

int fibonacciUsingMemoization(int n)
{
    if (n <= 1)
    {
        fibonacciSeries[n] = n;
        return n;
    }
    else
    {
        if (fibonacciSeries[n - 2] == -1)
            fibonacciSeries[n - 2] = fibonacciUsingMemoization(n - 2);
        if (fibonacciSeries[n - 1] == -1)
            fibonacciSeries[n - 1] = fibonacciUsingMemoization(n - 1);
        return fibonacciSeries[n - 2] + fibonacciSeries[n - 1];
    }
}

int main()
{
    int x = 5;

    for (int i = 0; i < 10; i++)
        fibonacciSeries[i] = -1;

    std::cout << "Fibonacci using Iteration: " << fibonacciUsingIteration(x) << std::endl;
    std::cout << "Fibonacci using Recursion: " << fibonacciUsingRecursion(x) << std::endl;
    std::cout << "Fibonacci using Memoization: " << fibonacciUsingMemoization(x) << std::endl;
    return 0;
}
