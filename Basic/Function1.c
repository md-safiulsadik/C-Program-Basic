//create a function to calculate and return sum of integer
// return_type name_of_the_function (parameter_1, parameter_2);
#include<stdio.h>

int sum(int a, int b)
{
   return a+b;

}

int main()
{

    int num1,num2;
    printf("Enter two Integer : ");
    scanf("%d %d",&num1,&num2);
    printf("SUM by user base Function = %d",sum(num1,num2));

    getch();
    return 0;
}
