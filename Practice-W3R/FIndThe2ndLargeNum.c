#include <stdio.h>
int main()
{
    int num1 , num2, num3;
    printf("Enter Tree Number : \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1 > num2 && num1 < num3)
    {
        printf("Secode Large Number %d", num1);
    }
    else if (num2 > num1 && num2 < num3)
    {
        printf("Secode Large Number %d", num2);
    }
    else
        printf("Secode Large Number %d", num3);
    
    getch();
    return 0;
}