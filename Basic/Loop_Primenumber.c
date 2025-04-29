#include<stdio.h>
#include<conio.h>

int main()
{
    while(1)
    {
        int in,n,count=0;
        printf("Any Positive Number : ");
        scanf("%d",&in);

        for(n=2; n<in; n++)
        {
            if(in%n==0)
            {
                count++;
                printf("%d\n",n);

            }

        }
        if(count==0)
            printf("Prime Number\n");
        else if(count!=0)
            printf("Not Prime Number\n");

        else
            printf("Wrong Input");

    }



    getch();
    return 0;
}
