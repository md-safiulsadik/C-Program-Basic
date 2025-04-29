#include<stdio.h>
int main()
{
    char  Choice;
    double temp,result;
    printf("To get Celsius To Fahrenheit Type F\nTo get Fahrenheit To Celsius Type C    \n");
    scanf("%c",&Choice);

    switch(Choice)
    {

    case 'F':
    case 'f':

        printf("Enter Temperature in  Celsius : ");
        scanf("%lf",&temp);
        result=(temp*1.8)+32;
        printf("Temperature in Fahrenheit : %.2lf",result);
        break;

    case 'C':
    case 'c':

        printf("Enter Temperature in Fahrenheit : ");
        scanf("%lf",&temp);
        result=(temp-32)/1.8;
        printf("Temperature in Celsius : %.2lf",result);
     break;

    default:
        printf("Wrong Input");

    }

    getch();
    return 0;
}
