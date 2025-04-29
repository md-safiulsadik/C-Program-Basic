/*
  1
 12
123
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ",col);

        }
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }



        printf("\n",row);

    }
    printf("\n",row);
    printf("\n",row);



    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            printf("  ");

        for(col=1; col<=row; col++)

            printf(" %c",col+64);




        printf("\n");
    }


    getch();
    return 0;
}
