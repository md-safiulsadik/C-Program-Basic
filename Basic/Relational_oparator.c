/* Write a program that shows Even or Odd Numder
<
<=
>
>=
!=
Control statement
Conditional statement
*/
#include<stdio.h>
int main()
{
    int num,time=8;
    printf("Enter a Integer Number : ");
    scanf("%d",&num);

    if(num%2==0)
    printf("Even");
    else
    printf("Odd");



    getch();
    return 0;
}
