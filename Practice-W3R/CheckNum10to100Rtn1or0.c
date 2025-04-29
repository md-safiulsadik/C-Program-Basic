#include <stdio.h>

int test(int a, int b)
{
    if (a == 200 || b == 200 || 10 < a && a < 101 || 9 < b && b < 101)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    printf("%d\n", test(3, 2));
    printf("%d\n", test(200, 6));
    printf("%d\n", test(3, 200));
    printf("%d\n", test(200, 6));
}