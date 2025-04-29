#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,max;
    printf("Input How Many Number to SUM _array  ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Input[%d] :",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];

    }
    printf("Sum of Numbers = %d",sum);

    max==a[0];

    for(i=0;i<n;i++)
    {
        if(max < a[i])
            max=a[i];
    }
    printf("\nMaximum = %d",max);


     for(i=0;i<n;i++)
    {
        if(max > a[i])
            max=a[i];
    }
    printf("\nMinimum = %d",max);




    getch();
    return 0;
}
