//Write a program in C to calculate the sum of numbers from 1 to n using recursion
#include<stdio.h>
#include<conio.h>

int sumOfNumber(int a)
{
    int result;
    if(a<=20){
        return 20;
    }
    else
        result = a + sumOfNumber(a-2);
        return result;


}

int main()
{
    int sum,num,i=0;
    printf("Input ");
    scanf("%d",&num);

    if(num%2==0){
        num=num;
    }
    else if(num%2!=0){
        num=num-1;
    }

    sum=sumOfNumber(num);

    printf("%d",sum);


    getch();

    return 0;
}
