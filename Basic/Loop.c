// loop - for,while,do, do while
// for loop - initialigition ; condition ; counter update
#include<stdio.h>
#include<conio.h>
int main()
{
    double i;
    for (i=2; i<=100000; i=i*9)
        printf("%lf\n",i);



    int m=1;
    while(m<=10)
    {
        printf("%d.Banana %d\n",m,m);
        m++;
    }

    int x=1;
    do
    {
        printf("%d.Mango %d\n",x,x);
        x++;
    } while(x<=10);


    int num,num1;
    printf("\nEnter a Number to get Multiplier : ");
    scanf("%d",&num1);
    for(num=1; num<=num1*10; num++)
    {
        if(num%num1==0)
            printf("%d\n",num);

        if(num==num1*10)
            break;
        continue;
    }



    getch();
    return 0;

}
