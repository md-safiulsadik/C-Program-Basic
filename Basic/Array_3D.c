#include<stdio.h>
int main()
{
    int num1,num2,num3,a,row,col,array[9][9][9];
    printf("Input Array Value :");
    scanf("%d",&num1);
    printf("Input Row Value :");
    scanf("%d",&num2);
    printf("Input Column Value :");
    scanf("%d",&num3);
      printf("\n");

      while(num1<=2)
      {

     printf("Array Value Have to be 3 or Higher\n");
     printf("Input Array Value :");
    scanf("%d",&num1);
      }

//Scan the Array,Row,Column value
     for(a=0;a<num1;a++)
     {
         for(row=0;row<num2;row++)
         {
             for(col=0;col<num3;col++)
             {
                 printf("Array[%d][%d][%d] :",a,row,col);
                 scanf("%d",&array[a][row][col]);
             }
         } printf("\n");

     } printf("\n");

    printf("3D Array :\n");

    for(a=0; a<3; a++)
    {
        for(row=0; row<2; row++)
        {
            for(col=0; col<2; col++)
            {
             printf("\t%d ",array[a][row][col]);

            }
            printf("\n");
        }
        printf("\n");

    }




    getch();
    return 0;
}
