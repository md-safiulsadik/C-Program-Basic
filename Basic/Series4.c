//1^2 + 2^2 + 3^2..... = 2^n
#include<stdio.h>
int main()
{
    while(1){
    int num1,num2,i,sum=0;
    printf("Enter 1sr Base Number : ");
    scanf("%d",&num1);
    printf("Enter Last Base Number : ");
    scanf("%d",&num2);
    i=num1;
    while(i<=num2)
    {
        if(i==num2)
        printf("%d^3  ",i);
        else if(i<num2)
        printf("%d^3 + ",i);

        sum=sum+i*i*i;
        i++;
    } printf("\nSum = %d\n\n",sum);
    }
    getch();
    return 0;
}
