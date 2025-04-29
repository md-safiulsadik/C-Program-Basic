#include<stdio.h>
void sqr(double base, double pow)
{
    int i;
    double result=1 ;
    for (size_t i = 1; i <= pow; i++)
    {
       result = result * base;
    }
     printf("Output = %.2lf",result);
}


int main()
{
    double pow,base;
    printf("Input Base : ");
    scanf("%lf",&base);
    printf("Input Power : ");
    scanf("%lf",&pow);

    sqr(base,pow);

    getch();
    return 0;
}
