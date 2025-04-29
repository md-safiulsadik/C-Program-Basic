#include<stdio.h>

void swap(int a,int b)
{
    int temp=0;
    printf("After Swapping\n");
    temp=a;
    a=b;
    b=temp;
    printf("Num1 = %d\n",a);
    printf("Num2 = %d\n",b);
}

int main()
{
    int swqp,num1=1,num2=2;

    printf("Num1 = %d\n",num1);
    printf("Num2 = %d\n",num2);

    swap(num1,num2);

    return 0;
}