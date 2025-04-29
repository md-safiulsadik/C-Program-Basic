#include<stdio.h>
int main()
{
    int n,m,L;
    printf("Which Number is Larger\n");
    printf("Enter 1st Number : ");
    scanf("%d",&n);
    printf("Enter 2nd Number : ");
    scanf("%d",&m);

    L = n>m ? n : m;
    printf("The Large Number is %d",L);

    getch();
    return 0;
}
