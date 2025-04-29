#include<stdio.h>
int main()
{

    int array1[100];
    int n,a,array2[100];
    printf("How Many Number You Want to See : ");
    scanf("%d",&n);

    for(a=0; a<n; a++)
    {
        scanf("%d",&array1[a]);
    }

    printf("Array 1 :");
    for(a=0; a<n; a++)
    {
        printf("%d ",array1[a]);
    }

    printf(" \n");



    printf("Array 2 :");
    for(a=0; a<n; a++)
    {
        array2[a]=array1[a];
    }

    for(a=0; a<n; a++)
    {
        printf("%d ",array2[a]);
    }


    getch();
    return 0;
}
