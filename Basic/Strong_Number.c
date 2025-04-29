#include<stdio.h>
int main()
{
    int sum=0,input,i,temp,fact,r;
    printf("Enter a Number to Check it's Strong or Not ");
    scanf("%d",&input);
    temp=input;
    while(temp!=0)
    {
        r=temp%10;
        fact=1;
        for(i=1; i<=r; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==input)
    printf("%d\tStrong Number",sum);
    else
         printf("%d\tNot a Strong Number",sum);

    getch();
    return 0;
}
