#include<stdio.h>


 void check(int a)
{
    if(a%2==0)
    printf("Even");
    else
    printf("Odd");
}

   int main()
{
    int num;
    printf("Enter a Number to Check Even/Odd ");
    scanf("%d",&num);
    check(num);
}    





