#include<stdio.h>
int main()
{
    printf("For Loop\n");

    int n,m,i,sum=0;
    printf("Enter The 1st Number : ");
    scanf("%d",&n);
    printf("Enter The last Number : ");
    scanf("%d",&m);

    for(i=1; i<=m; i++)
    {
        sum=sum+i;
    }
    printf("%d + %d + %d +..... +%d = %d\n\n\n",n,n+1,n+2,m,sum);

// series using while loop

    printf("While Loop\n");

    int a=0,b,c,d,temp;
    printf("Enter The 1st Number : ");
    scanf("%d",&c);
    printf("Enter The last Number : ");
    scanf("%d",&d);
    temp=c;

    while(temp<=d)
    {
        a=a+temp;
        temp++;
    }

    printf("%d + %d + %d +..... +%d = %d\n\n\n",c,c+1,c+2,d,a);


// series using do while loop


    printf("Do While Loop\n");
    int q,w,e=0,r,t;
    printf("Enter The 1st Number : ");
    scanf("%d",&q);
    printf("Enter The last Number : ");
    scanf("%d",&w);
    t=q;

    do
    {
        e=e+t;
        t++;
    }
    while(t<=w);
    printf("%d + %d + %d +..... +%d = %d",q,q+1,q+2,w,e);






    getch();
    return 0;
}


