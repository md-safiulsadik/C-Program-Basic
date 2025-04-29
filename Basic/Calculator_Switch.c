#include<stdio.h>
int main()
{
    double num1,num2,result;
    char choise;

    printf("Enter an Operator (+,-,*,/) ");
    scanf("%c",&choise);

    switch(choise)
    {

    case '+':

        printf("Enter 1st Number : ");
        scanf("%lf",&num1);
        printf("Enter 2nd Number : ");
        scanf("%lf",&num2);
        result=num1+num2;
        printf("%.2lf + %.2lf = %.2lf",num1,num2,result);
        break;

    case '-':

        printf("Enter 1st Number : ");
        scanf("%lf",&num1);
        printf("Enter 2nd Number : ");
        scanf("%lf",&num2);
        result=num1-num2;
        printf("%.2lf - %.2lf = %.2lf",num1,num2,result);
        break;

    case '*':

        printf("Enter 1st Number : ");
        scanf("%lf",&num1);
        printf("Enter 2nd Number : ");
        scanf("%lf",&num2);
        result=num1*num2;
        printf("%.2lf x %.2lf = %.2lf",num1,num2,result);
        break;

    case '/':

        printf("Enter 1st Number : ");
        scanf("%lf",&num1);
        printf("Enter 2nd Number : ");
        scanf("%lf",&num2);
        result=num1/num2;
        printf("%.2lf / %.2lf = %.2lf",num1,num2,result);
        break;
    default:
        printf("Wrong Input");

    }
    getch();
    return 0;
}
