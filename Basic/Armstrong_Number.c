#include<stdio.h>
int main()
{
    int num1,num2,i,temp,remain,sum=0;
    printf("Input Two Numbers to Get Armstrong Number Between Them\n");
    printf("1st Number : ");
    scanf("%d",&num1);
    printf("2nd Number : ");
    scanf("%d",&num2);

    for(i=num1; i<=num2; i++)
    {
        temp=i; //1
        while(temp!=0)
        {
            remain=temp%10;
            sum=sum+(remain*remain*remain) ; //1
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d\n",sum);

        }
        sum=0;
    }


    getch();
    return 0;
}
