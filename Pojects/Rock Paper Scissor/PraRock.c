#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int winc=0,drwc=0,winp=0;
    while(1)
    {
        int num;

        printf("\n\n    Rock Paper Siccor Gamer    \n");
        printf("        Press 0 to Exit         \n");
        printf("-----------------------------------\n");
        printf("Rock = 1, Paper = 2, Scissor = 3 \n");
        scanf("%d",&num);

        srand(time(NULL));
        int c = 1 + rand() % 3;

        if(num == 0)
        {
            printf("\nYou Won %d Times\n",winp);
            printf("Computer Won %d Times\n",winc);
            printf("Drow %d Times\n",drwc);
            break;
        }

        else if(c == 1 && num == 2 || c == 2 && num == 3 || c == 3 && num==1)
        {
            printf("Computer Win !");
            winc+=1;
        }
        else if(c == num)
        {
            printf("Drow !");
            drwc+=1;
        }
        else
        {
            printf("You Win !");
            winp+=1;
        }


    }


    getch();
    return 0;
}
