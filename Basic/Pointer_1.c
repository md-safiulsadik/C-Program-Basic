#include<stdio.h>
int main()
{
    int m=300;
    float fx=300.600006;
    char cht ='z';

    int* ptrm = &m;
    float* ptrfx = &fx;
    char* ptrcht = &cht;

    printf("Pointer : Demonstrate the use of & and * operator :  \n");
    printf("--------------------------------------------------------\n");
    printf("m = 300\nfx = 300.600006\ncht = z\n\n");
    printf(" Using & operator :  \n");
    printf("-----------------------  \n");

    printf("address of m = %p\n",ptrm);
    printf("address of fx = %p\n",ptrfx);
    printf("address of cht = %p\n",ptrcht);

  printf("\n\n\nUsing & operator :\n----------------------- \n");
    printf("address of m = %d\n",*ptrm);
    printf("address of fx = %f\n",*ptrfx);
    printf("address of cht = %c\n",*ptrcht);





    getch();
    return 0;
}
