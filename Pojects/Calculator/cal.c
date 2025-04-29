#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
    double num1, num2;

    printf("        Simple Calculator          \n");
    printf("-----------------------------------\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Exit\n");
    printf("\n");

    int choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    if (choice == 1)
    {
     ADD(num1, num2);
    }
    else if (choice == 2)
    {
        SUB(num1, num2);
    }
    else if (choice == 3)
    {
        MULI(num1, num2);
    }
    else if (choice == 4)
    {
        DIVE(num1, num2);
    }
    else if (choice == 5)
    {
        POWE(num1, num2);
    }
    else if (choice == 6)
    {
        SQRTOF(num1);
    }
    else if (choice == 7)
    {
        exit(0);
    }
    else{
        printf("Invalid Input");
    }


    getch();
    return 0;
}

void ADD(double num1, double num2)
{
    printf("RESULT = %.2lf ",num1 + num2);
}

void SUB(double num1, double num2)
{
    printf( "RESULT = %.2lf " ,num1 - num2);
}

void MULI(double num1, double num2)
{
    printf( "RESULT = %.2lf ", num1 * num2);
}

void DIVE(double num1, double num2){
    printf( "RESULT = %.2lf ", num1 / num2);
    }

void POWE(double num1, double num2){
    printf( "RESULT = %.2lf ", pow(num1, num2));
}

void SQRTOF(double num1){
    printf("RESULT = %.2lf " ,sqrt(num1));
}
