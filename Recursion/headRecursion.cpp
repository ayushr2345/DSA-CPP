#include <iostream>

void headRecursion(int n)
{
    if (n > 0)
    {
        headRecursion(n - 1);
        std::cout << n << std::endl;
    }
}

int main()
{
    int x = 3;
    headRecursion(3);
    return 0;
}
