#include<stdio.h>
int main()
{
    int r,sum=0,i,num1,num2,count=1;
    printf("Enter Base ");
    scanf("%d",&num1);
    printf("Enter power ");
    scanf("%d",&num2);

    r=num1;

    while(count<=num2)
    {
        sum=sum+r;
        if(count<num2)
            printf("%d + ",r);
        else if(count==num2)
            printf("%d  ",r);
        r=r*num1;
        count=count+1;

    }
    printf("\nSum = %d",sum);

    getch();
    return 0;



}   //Allhamdulillah
