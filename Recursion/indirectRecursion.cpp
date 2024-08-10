#include <iostream>

void indirectRecursionB(int);

void indirectRecursionA(int n)
{
    if (n > 0)
    {
        std::cout << n << " ";
        indirectRecursionB(n - 1);
    }
}

void indirectRecursionB(int n)
{
    if (n > 1)
    {
        std::cout << n << " ";
        indirectRecursionA(n / 2);
    }
}

int main()
{
    int x = 20;
    indirectRecursionA(20);
    return 0;
}
