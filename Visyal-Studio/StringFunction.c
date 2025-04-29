#include<stdio.h>

void display(int str[])

{
    int i;
    for (i = 0; i < 10; i++)
    {

        printf("%d ",str[i]);
    }

}

int main()
{

    int array[] = {10,25,1,6,69,7,4,56,54,88,7} ;
     display(array);
     getch();
    return 0;
}
