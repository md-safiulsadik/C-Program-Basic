//Bigger number of Three Numbers
#include<stdio.h>
int main()
{
    float n1,n2,n3;
    printf("1st Number : ");
    scanf("%f",&n1);
    printf("2nd Number : ");
    scanf("%f",&n2);
    printf("3rd Number : ");
    scanf("%f",&n3);

    if(n1>n2 && n1>n3)
   printf("Bigger Number is %.2f",n1);

   else if (n2>n1 && n2>n3)
        printf("Bigger Number is %.2f",n2);

   else if (n3>n1 && n3>n2)
        printf("Bigger Number is %.2f",n3);

    else
        printf("All Equal");

    getch();
    return 0;
}
