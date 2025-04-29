#include<stdio.h>
int main()
{
    while(1)
    {
        int m,n,fact=1;
        printf("Input a Number to Get Factorial : ");
        scanf("%d",&m);

        for(n=1; n<=m; n++)
        {
            fact=fact*n;
        }
        printf("%d! = %d\n",m,fact);
    }
    getch();
    return 0;


}
