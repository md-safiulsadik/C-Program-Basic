#include <stdio.h>
int main()
{
    int i, num1, num2, sum = 0;
    printf("Enter first and last Number : ");
    scanf("%d %d", &num1, &num2);
    for (i = num1; i <= num2; i = i + 2)
    {
        if (i == num2)
            printf("%d ", i);
        else if (i < num2)
            printf("%d + ", i);
        sum = sum + i;
    }
    printf("\nSum = %d", sum);

    return 0;
}
