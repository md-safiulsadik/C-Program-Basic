#include<stdio.h>
int main()
{
    float m;
    printf("Enter Your Mark : ");
    scanf("%f",&m);

    if (m>=101)
        printf("Wrong Input");
    else if (m>=80)
        printf("You Passed :)\nYou got A+");
    else if (m>=70)
        printf("You Passed :)\nYou got A");
    else if (m>=60)
        printf("You Passed :)\nYou got A-");
    else
            printf("You Failed :(");
    getch();
    return 0;

}
