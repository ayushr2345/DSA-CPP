#include <iostream>

void treeRecursion(int n)
{
    if (n > 0)
    {
        std::cout << n << " ";
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

int main()
{
    int x = 3;
    treeRecursion(x);
    return 0;
}
