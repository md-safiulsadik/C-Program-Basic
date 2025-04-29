#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number_X;
    int guessed_num;
    int count = 3;

    printf("Enter the number_X: ");
    scanf("%d", &number_X);
    system("cls");

    while (count)
    {
        printf("Enter you choise: ");
        scanf("%d", &guessed_num);

        if (number_X == guessed_num)
        {
            printf("Right, Player 2 wins!\n");
            break;
        }
        else
        {
            count -= 1;
            printf("Worng, %d chance(s) left\n", count);
            if (count == 0)
            {
                printf("Player-1 wins! \n");
            }
        }
    }
    getch();
    return 0;
}
