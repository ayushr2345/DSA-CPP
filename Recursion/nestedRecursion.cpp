#include <iostream>

int nestedRecursion(int n)
{
    if (n > 100)
        return n - 10;
    else
        return nestedRecursion(nestedRecursion(n + 11));
}

int main()
{
    int x = 95;
    std::cout << nestedRecursion(x) << std::endl;
    return 0;
}
