#include<stdio.h>
int main()
{

    int digit;
    printf("Enter a Single Digit : ");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Tree");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Saven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    default:
        printf("Wrong Input");

    }

    getch();
    return 0;

}
