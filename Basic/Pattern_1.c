/*
1
1 2
1 2 3
1 2 3 4
*/
#include<stdio.h>
int main()
{

    int n,NumRow,NumCol;
    printf("Enter Number Of Row : ");
    scanf("%d",&n);

    for(NumRow=1; NumRow<=n; NumRow++)
    {
        for(NumCol=1; NumCol<=NumRow; NumCol++)
        {
            printf("%d ",NumCol%2);
        }


        printf("\n");
    }


        int m,row,col;
    printf("\n\n\nEnter Number Of Row : ");
    scanf("%d",&m);

    for(row=1; row<=m; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row%2);
        }


        printf("\n");
    }



    getch();
    return 0;
}
