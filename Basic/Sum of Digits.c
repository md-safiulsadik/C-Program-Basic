//Sum of Digits (num%10)
#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;
    printf("Enter Digits to Sum Them : ");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("SUM = %d\n",sum);

    int n,t,s=0,re;
    printf("Enter Digits to Sum Them : ");
    scanf("%d",&n);
    t=n;

    while(t!=0)
    {
        re=t%10;
        s=s+re*re*re;
        t=t/10;
    }
    if(n==s)
    printf("Armstrong Number");
    else
     printf("Not Armstrong Number");
}

//OK
