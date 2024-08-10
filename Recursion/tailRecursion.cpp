#include <iostream>

// GCC has tail code optimization so recursion returning calls won't be seen in debugger

void tailRecursion(int n)
{
    if (n > 0)
    {
        std::cout << n << std::endl;
        tailRecursion(n - 1);
    }
}

int main()
{
    int x = 3;
    tailRecursion(3);
    return 0;
}
