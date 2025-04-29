/*prefix increment x++
profix increment ++x
*/

#include<stdio.h>
int main()
{
    int x=10;

    printf("%d\n",x++);//10
    printf("%d\n",x);//11
    printf("%d\n",++x);//12
    printf("%d\n",x++);//12
    printf("%d\n",++x);//14
    printf("%d\n",x++);//14
    printf("%d\n",x);//15
    printf("%d\n",++x);//16
    printf("%d\n",x++);//16

    getch();


    return 0;
}
