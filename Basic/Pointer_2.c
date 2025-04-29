#include <stdio.h>
int main()
{
    int sum ;
    int num1=6;
    float num2=5.541541;


    float* ptr1=&num1;
    int* ptr2=&num2;

    printf("%p\n",ptr1);
    printf("%p\n",ptr2);

    if(ptr1>ptr2)
        printf("(%p num1 is Bigger)\n",ptr1);
    else
        printf("(%p num2 is Bigger)\n",ptr2);


   printf("%d\n",sizeof(ptr1));
   printf("%d\n",sizeof(ptr2));




    getch();
    return 0;
}
