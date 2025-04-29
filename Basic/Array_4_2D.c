#include<stdio.h>
int main()
{
    int i,j,row,col,x,y,a[100][100],b[100][100],c[100][100];




    printf("Input Base of Matrix A : ");
    scanf("%d %d",&i,&j);

    for(row=0 ; row<i; row++)
    {
        for(col=0; col<j; col++)
        {
            printf("A[%d][%d] :",row+1,col+1);
            scanf("%d",&a[row][col]);
        }
        printf("\n");
    }




//B martix
    printf("Input Base of Matrix B : ");
    scanf("%d %d",&x,&y);

    for(row=0; row<x; row++)
    {
        for(col=0; col<y; col++)
        {
            printf("B[%d][%d] :",row+1,col+1);
            scanf("%d",&b[row][col]);
        }
        printf("\n");
    }





    printf("A =");
    for(row=0; row<i; row++)
    {
        printf("\t");
        for(col=0; col<j; col++)
        {
            printf(" %d ",a[row][col]);
        }
        printf("\n");
    }
    printf("\n");





    printf("B =");
    for(row=0; row<x; row++)
    {
        printf("\t");
        for(col=0; col<y; col++)
        {
            printf(" %d ",b[row][col]);
        }
        printf("\n");
    }


    getch();
    return 0;
}
