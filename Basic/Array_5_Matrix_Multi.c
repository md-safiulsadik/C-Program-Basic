//Didn't Get it :(

#include<stdio.h>
int main()
{
    int A[99][99],B[99][99],C[99][99];
    int row,col,i,j,k,sum=0,mcol,x,y;

    printf("Enter the base of First Matrix :");
    scanf("%d %d",&i,&j);
    printf("Enter the base of Second Matrix :");
    scanf("%d %d",&x,&y);

    while(j!=x)
    {
        printf("Enter the base of First Matrix :");
        scanf("%d %d",&i,&j);
        printf("Enter the base of Second Matrix :");
        scanf("%d %d",&x,&y);

    }
//matrix A
    printf("Matrix A\n");
    for(row=0; row<i; row++)
    {
        for(col=0; col<j; col++)
        {
            printf("A[%d][%d] : ",row+1,col+1);
            scanf("%d",&A[row][col]);

        }
        printf("\n");
    }
//matrix B
    printf("Matrix B\n");
    for(row=0; row<x; row++)
    {
        for(col=0; col<y; col++)
        {
            printf("B[%d][%d] : ",row+1,col+1);
            scanf("%d",&B[row][col]);

        }
        printf("\n");
    }

//Print matrix A
    printf("Matrix A : \n");
    for(row=0; row<i; row++)
    {
        for(col=0; col<j; col++)
        {
            printf("\t%d",A[row][col]);

        }
        printf("\n");
    }
//Print matrix B
    printf("Matrix B : \n");
    for(row=0; row<x; row++)
    {
        for(col=0; col<y; col++)
        {
            printf("\t%d",B[row][col]);

        }
        printf("\n");
    }
//Multiply of A B
    for(row=0; row<i; row++)
    {
        for(col=0; col<y; col++)
        {
            for(mcol=0; mcol<j; mcol++)
            {
                sum = sum + A[row][mcol]*B[mcol][col];
            }
            C[row][col] = sum;
            sum=0;
        }

    }
//print matrix C
    printf("\n\n Multiply Of A Matrix & B Matrix\n");
    for(row=0; row<i; row++)
    {
        for(col=0; col<y; col++)
        {
            printf("\t%d",C[row][col]);
        }
        printf("\n");
    }



    getch();
    return 0;
}
