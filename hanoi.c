#include <stdio.h>

void hanoi(int n, int a, int b)
{
    if (n == 1)
        printf("prezuvam kamen 1 s %d na %d\n", a, b);
    else
    {
        hanoi(n - 1, a, 6 - a - b);
        printf("prezuvam kamen %d s %d na %d\n", n, a, b);
        hanoi(n-1, 6-a-b, b);
    }
}

int main()
{
    int n = 2;

    hanoi(n, 1, 2);
    return 0;
}
