#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int position1 = 0;
    int position2 = 0;

    printf("           Snake & Ladder Game           \n");
    printf("*******************************************\n");
    printf("          Press Enter To Start !         \n");
    printf("------------------------------------------\n");

    while (1)
    {
        // player 1
        getchar();
        srand(time(NULL));
        int randise1 = rand() % 6 + 1;
        printf("Player 1 Roll %d\n", randise1);
        position1 = position1 + randise1;
        switch (position1)
        {
        case 10:
            printf("Congratulations !!\n      You Find a Ladder of 6 !\n");
            position1 += 6;
            break;
        case 30:
            printf("Nooooo !!\n       You Find a Snake of 16 !\n");
            position1 -= 16;
            break;
        case 36:
            printf("Congratulations !!\n      You Find a Ladder of 26 !\n");
            position1 += 26;
            break;
        case 68:
            printf("Nooooo !!\n       You Find a Sanke of 30 !\n");
            position1 -= 30;
            break;
        case 80:
            printf("Congratulations !!\n      You Find a Ladder of 6 !\n");
            position1 += 6;
            break;
        }
        if (position1 > 100)
        {
            position1 = position1 - randise1;
        }
        printf("Your Position on Bord %d\n", position1);

        // player 2
        getchar();
        int randise2 = rand() % 6 + 1;
        printf("\nPlayer 2 Roll %d\n", randise2);
        position2 = position2 + randise2;
        switch (position2)
        {
        case 10:
            printf("Congratulations !!\n      You Find a Ladder of 6 !\n");
            position1 += 6;
            break;
        case 30:
            printf("Nooooo !!\n       You Find a Snake of 16 !\n");
            position1 -= 16;
            break;
        case 36:
            printf("Congratulations !!\n      You Find a Ladder of 26 !\n");
            position1 += 26;
            break;
        case 68:
            printf("Nooooo !!\n       You Find a Sanke of 30 !\n");
            position1 -= 30;
            break;
        case 80:
            printf("Congratulations !!\n      You Find a Ladder of 6 !\n");
            position1 += 6;
            break;
        }

        if (position2 > 100)
        {
            position2 = position2 - randise2;
        }
        printf("Your Position on Bord %d\n", position2);

        if (position1 == 100)
        {
            printf("\n\nPlayer 1 Win !!\n");
            break;
        }

        if (position2 == 100)
        {
            printf("\n\nPlayer 2 Win !!\n");
            break;
        }

        getchar();
    }

    return 0;
}
