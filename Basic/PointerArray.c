#include<stdio.h>
int main()
{
    int arr[5]={68,41,7,56,12};
    int* ptrarr=&arr;
    int i;
    
    for ( i = 0; i < 5; i++)
    {
           printf("%d\n",*(ptrarr+i));
    }
    

    return 0;
}