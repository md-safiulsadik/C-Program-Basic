#include<stdio.h>
int main()
{

    while(1)
    {

        int n,row,col;
        printf("Enter N : ");
        scanf("%d",&n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)
            {
                printf("  ");
            }
            for(col=1; col<=(row*2)-1; col++)
            {
                printf(" %d",col%2);
            }

            printf("\n");
        }


        for(row=n-1; row>=1; row--)
        {
            for(col=1; col<=n-row; col++)
            {
                printf("  ");
            }
            for(col=1; col<=(row*2)-1; col++)
            {
                printf(" %d",col%2);
            }

            printf("\n");
        }





        printf("\n\n\n\n");

        for(row=1; row<=n; row++)
        {

            for(col=1; col<=n; col++)
            {
                printf(" %d",col);
            }


            printf("\n");
        }
        printf("\n\n\n\n");


        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)
            {
                printf("  ");
            }
            for(col=1; col<=row*2-1; col++)
            {
                printf(" #",col);
            }

            printf("\n");
        }


        for(row=n-1; row>=1; row--)
        {
            for(col=1; col<=n-row; col++)
            {
                printf("  ");
            }
            for(col=1; col<=row*2-1; col++)
            {
                printf(" #",col);
            }

            printf("\n");
        }




        printf("\n\n\n\n");

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf(" #",col);
            }

            printf("\n");
        }

        for(row=n-1; row>=1; row--)
        {
            for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf(" #",col);
            }

            printf("\n");
        }

        printf("\t\n\n\n\n");
        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
                if(row==1 || row==n || col==1 || col==n)
                {
                    printf(" #");
                }
                else
                    printf("  ");
            printf("\n");
        }

        printf("\t\n\n\n\n");
        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
                if(row==n || col==1 || col==row)
                {
                    printf(" #");
                }
                else
                    printf("  ");
            printf("\n");
        }

        printf("\n");
        printf("\n");
        printf("\n");

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
                if(col==row || col+row==n+1 )
                {
                    printf(" #");
                }
                else
                    printf("  ");
            printf("\n");
        }


        printf("\t\n\n\n\n");
        for(row=n; row>=1; row--)
        {
            for(col=1; col<=n-row; col++)
            {
                printf("  ");
            }
            for(col=1; col<=n; col++)
            {
                printf(" #",col);
            }


            printf("\n");
        }


        printf("\t\n\n\n\n");
        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)
                if(row+col==n+1)
                {
                    printf("*");
                }
                else
                    printf(" ");
            printf("\n");
        }



    }


    getch();
    return 0;
}
