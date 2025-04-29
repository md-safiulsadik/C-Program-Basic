#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int n;
    while (1)
    {
        printf("     Rock, paper, scissor game     \n         Enter 0 to exit     \n");
        printf("------------------------------------------------\n");
        printf("Enter 1 for rock, 2 for paper, 3 for scissor\n");
        scanf("%d", &n);

        srand(time(NULL));
        int computer = rand() % 3;

        if (n == 0)
        {
            break;
        }

        else if (n == computer)
        {
            printf("Draw\n\n");
        }
        else if (n == 1 && computer == 2 || n == 2 && computer == 3 || n == 3 && computer == 1)
        {
            printf("Computer won\n\n");
        }
        else
        {
            printf("You won\n\n");
        }
    }

    return 0;
}
