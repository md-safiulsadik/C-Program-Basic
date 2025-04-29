//it took tinme 1:01:06  LOL
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void Addition()
{
    printf("            Addition          \n");
    printf("------------------------------\n");
    double *NUM;
    int nNum;
    printf("How Many Number You Want to Add : ");
    scanf("%d",&nNum);
    NUM = (double *)malloc(nNum * sizeof(double));

    for(int i = 0 ; i < nNum ; i++)
    {
        printf("Number[%d] : ",i+1);
        scanf("%lf",&NUM[i]);
    }
    double sum = 0;
    for(int i = 0 ; i < nNum ; i++)
    {
        sum = sum + NUM[i];
    }
    printf("Addition = %.2lf",sum);

    free(NUM);
}
void Subtraction()
{
    printf("          Subtraction         \n");
    printf("------------------------------\n");
    double *NUM;
    int nNum;
    printf("How Many Number You Want to Subtract : ");
    scanf("%d",&nNum);
    NUM = (double *)malloc(nNum * sizeof(double));

    for(int i = 0 ; i < nNum ; i++)
    {
        printf("Number[%d] : ",i+1);
        scanf("%lf",&NUM[i]);
    }
    double sum = 0;
    double sub;
    for(int i = 1 ; i < nNum ; i++)
    {
        sum = sum - NUM[i];
    }
    sub=NUM[0]+sum;
    printf("Subtraction = %.2lf",sub);

    free(NUM);
}
void Multiplication()
{
     printf("        Multiplication        \n");
    printf("------------------------------\n");
    double *NUM;
    int nNum;
    printf("How Many Number You Want to Multiply : ");
    scanf("%d",&nNum);
    NUM = (double *)malloc(nNum * sizeof(double));

    for(int i = 0 ; i < nNum ; i++)
    {
        printf("Number[%d] : ",i+1);
        scanf("%lf",&NUM[i]);
    }
    double sum = 1;
    for(int i = 0 ; i < nNum ; i++)
    {
        sum = sum * NUM[i];
    }
    printf("Multiplication = %.2lf",sum);

    free(NUM);

}


int main()
{

    double num1;
    double num2;
    int choice;

start:
    printf("        Simple Calculator      \n");
    printf("------------------------------\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Power\n");
    printf("5.Square Root\n");
    printf("6.Exit\n");


    printf("\nEnter Your Choice ");
    scanf("%d",&choice);
    printf("\n");

    switch(choice)
    {
    case 1:
        Addition();
        break;
    case 2:
        Subtraction();
        break;
    case 3:
        Multiplication();
        break;
    case 4:
    printf("             Power            \n");
    printf("------------------------------\n");
        printf("Enter Base : ");
        scanf("%lf",&num1);
        printf("Enter Power : ");
        scanf("%lf",&num2);
        printf("Result of %.2lf^%.2lf = %.2lf",num1,num2,pow(num1,num2));
        break;
    case 5:
    printf("           Square Root        \n");
    printf("------------------------------\n");
        printf("Enter Number : ");
        scanf("%lf",&num1);
        printf("Square Root of %.2lf = %.2lf");
        break;
    case 6:
        exit(0);
    default:
        printf("\nInvalid Input\n\n\n");
        goto start ;
    }

    getch();
    return 0;
}
