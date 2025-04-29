// GCD and LCM
#include <stdio.h>

void my_fucntion()
{
    int num1, num2, n1, n2, remain, gcd, lcm;
    printf("Enter two Number to Get GCD and LMC : ");
    scanf("%d %d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    while (n2 != 0)
    {
        remain = n1 % n2;
        n1 = n2;
        n2 = remain;
    }
    gcd = n1;
    printf("GCD = %d\n", gcd);
    lcm = (num1 * num2) / gcd;
    printf("LCM = %d", lcm);
}

int main()
{
    my_fucntion();
    return 0;
}
