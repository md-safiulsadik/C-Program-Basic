// 0 1 1 2 3 5 8 ......
#include<stdio.h>
int main()
{
    int first=0,secend=1,n,count=1,fibo ;
    printf("Enter Range ");
    scanf("%d",&n);
    printf("Fibonacci Series : ");
    while(count<=n)
    {
        if(count==1)
            fibo=first;
        else if(count==2)
            fibo=secend;
        else if(count>=3)
        {
            fibo = first + secend;
            first=secend;
            secend=fibo;
        }

        printf("%d ",fibo);

        count++;

    }


    getch();
    return 0;
}
