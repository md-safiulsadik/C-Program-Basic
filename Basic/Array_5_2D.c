#include<stdio.h>
int main()
{
    int row,col;
    int i,j;
    int FirstA[99][99];
    int FirstB[99][99];
    int FirstC[99][99];

    printf("Sum Of Martix\n");
    printf("Enter the Value of Row :");
    scanf("%d",&row);
    printf("Enter the Value of Col :");
    scanf("%d",&col);
    printf("\n");


    printf("Input A Matrix \n");

//Matrix A Scan
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] :",i+1,j+1);
            scanf("%d",&FirstA[i][j]);
        }
    }

    printf("\n");


    printf("Input B Matrix \n");
//Matrix B Scan
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("B[%d][%d] :",i+1,j+1);
            scanf("%d",&FirstB[i][j]);
        }
    }

//Print A Matrix
    printf("\n");
    printf("Matrix A\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("\t%d",FirstA[i][j]);
        }
        printf("\n");
    }


//Print B Matrix
    printf("\n");
    printf("Matrix B\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("\t%d",FirstB[i][j]);
        }
        printf("\n");
    }

//A + B = C Matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            FirstC[i][j] = FirstA[i][j] + FirstB[i][j] ;
        }
    }

//Print C Matrix
    printf("\n");
    printf("Matrix A + B \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("\t%d",FirstC[i][j]);
        }
        printf("\n");
    }


     printf("\n\n\n\n");
//New matrix


    {
        int row2nd,col2nd;
        int i,j;
        int SecondA[99][99];
        int SecondB[99][99];
        int SecondC[99][99];

        printf("Minus Of Matrix\n");
        printf("Enter the Value of Row :");
        scanf("%d",&row2nd);
        printf("Enter the Value of Col :");
        scanf("%d",&col2nd);
        printf("\n");


        printf("Input A Matrix \n");

//Matrix A Scan
        for(i=0; i<row2nd; i++)
        {
            for(j=0; j<col2nd; j++)
            {
                printf("A[%d][%d] :",i+1,j+1);
                scanf("%d",&SecondA[i][j]);
            }
        }

        printf("\n");


        printf("Input B Matrix \n");
//Matrix B Scan
        for(i=0; i<row2nd; i++)
        {
            for(j=0; j<col2nd; j++)
            {
                printf("B[%d][%d] :",i+1,j+1);
                scanf("%d",&SecondB[i][j]);
            }
        }

//Print A Matrix
        printf("\n");
        printf("Matrix A\n");
        for(i=0; i<row2nd; i++)
        {
            for(j=0; j<col2nd; j++)
            {

                printf("\t%d",SecondA[i][j]);
            }
            printf("\n");
        }


//Print B Matrix
        printf("\n");
        printf("Matrix B\n");
        for(i=0; i<row2nd; i++)
        {
            for(j=0; j<col2nd; j++)
            {

                printf("\t%d",SecondB[i][j]);
            }
            printf("\n");
        }

//A + B = C Matrix
        for(i=0; i<row2nd; i++)
        {
            for(j=0; j<col2nd; j++)
            {
                SecondC[i][j] = SecondA[i][j] - SecondB[i][j] ;
            }
        }

//Print C Matrix
        printf("\n");
        printf("Matrix A - B \n");
        for(i=0; i<row2nd; i++)
        {
            for(j=0; j<col2nd; j++)
            {

                printf("\t%d",SecondC[i][j]);
            }
            printf("\n");
        }

    }



    getch();
    return 0;
}
