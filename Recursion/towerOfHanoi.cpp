#include <iostream>

void towerOfHanoi(int n, int A, int B, int C)
{
    if (n > 0)
    {
        towerOfHanoi(n - 1, A, C, B);
        std::cout << "Move 1 disk from " << A << " to " << C << std::endl;
        towerOfHanoi(n - 1, B, A, C);
    }
}

int main()
{
    int n = 3;
    int A = 1;
    int B = 2;
    int C = 3;

    towerOfHanoi(n, A, B, C);
    return 0;
}
