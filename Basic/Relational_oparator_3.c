//Did I Passed or I Failed
#include<stdio.h>
int main()
{
    float m;
    printf("What's Your Mark : ");
    scanf("%f",&m);


    if(m>101)
        printf("Wrong Input");


    else if(m>=80)
        printf("You Passed :)\nYour GPA : A+\n");
    else  if(m>=70)
        printf("You Passed :)\nYour GPA : A\n");
    else if(m>=60)
        printf("You Passed :)\nYour GPA : A-\n");
    else
        printf("SORRY You Falied :(\n");

    getch();
    return 0;




}
