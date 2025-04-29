//ax^2+bx+c=0

#include<stdio.h>
int main()
{
    double a,b,c,X1,X2,d;
    printf("Enter the value of A : ");
    scanf("%lf",&a);

    printf("Enter the value of B : ");
    scanf("%lf",&b);

    printf("Enter the value of C : ");
    scanf("%lf",&c);

    d=sqrt(b*b-4*a*c);
    printf("D = %.1lf\n",d);

    X1=(-b+d)/2*a;
    X2=(-b-d)/2*a;


    printf("X1 = %.1lf\n",X1);
    printf("X2 = %.1lf\n",X2);



    getch();
    return 0;


}
