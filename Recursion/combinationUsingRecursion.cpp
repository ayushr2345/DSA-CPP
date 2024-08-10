#include <iostream>

int combinationUsingRecursion(int n, int r)
{
    if (r == 0 or n == r)
        return 1;
    return combinationUsingRecursion(n - 1, r) + combinationUsingRecursion(n - 1, r - 1);
}

int main()
{
    int n = 4;
    int r = 2;
    std::cout << "Combination using recursion: " << combinationUsingRecursion(n, r) << std::endl;
    return 0;
}
