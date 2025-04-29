#include<stdio.h>
int main()


{
    printf("Enter a Lowercase Letter ");
    char lower;
    scanf("%c",&lower);
    lower =toupper(lower);
    printf("The Uppercase Latter %c",lower);
   getch();
   return 0;
}
