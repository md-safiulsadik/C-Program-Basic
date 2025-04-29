#include<stdio.h>
void area(double a,double b)
{
    double result;
    result = (double)0.5 * a * b;
    printf("Area Of Triangle = %.2lf",result);  
}

int main()
{
    double hight , lenght;
    printf("Entre Hight : ");
    scanf("%lf",&hight);
    printf("Entre Lenght : ");
    scanf("%lf",&lenght);
    
    area(hight,lenght);

    getch();
    return 0;
}