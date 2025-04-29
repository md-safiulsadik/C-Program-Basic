#include<stdio.h>
int main()
{
    int m=101,n,z;
    int *ptr = &m;

    printf("Memory value of M = %p\n",ptr);
    printf("Memory value of N = %p\n",&n);
    printf("Memory value of Z = %p\n",&z);


    getch();
    return 0;
}
