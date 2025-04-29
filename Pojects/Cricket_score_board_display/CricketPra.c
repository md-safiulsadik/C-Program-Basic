#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

void gotoxy(int, int);
void mainMenu();
void newScorecard();
void teamDetails();
void scoringProcess();
void convertToOver(int pball1);
void switchb();

int ball = 0, over = 0, ballrun = 0, btm1 = 0, btm2 = 0, blrid = 0, score = 0;

struct btmsMan
{
    char name[20];
    int run;
    int pball;
    int id;
    bool out;
    bool batting;
} btm[11];

struct blrler
{
    char name[20];
    int wicket;
    int ball;
    int id;
    bool bowling;
} blr[11];

void mainMenu()
{
    system("cls");
    int ch;
    int v = 8;
    gotoxy(53, v += 1);
    printf("CRICKET SCORECARD MANAGEMENT SYSTEM");
    gotoxy(50, v += 2);
    printf("NOTE: Use this program when you already know which team is going to btm first.");
    gotoxy(50, v += 1);
    printf("1.Create new Scoresheet.");
    gotoxy(50, v += 1);
    printf("2.Exit.");
    gotoxy(50, v += 2);
    printf("Enter your Choice(1 or 2): ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        newScorecard();
    }
    else if (ch == 2)
    {
        exit(0);
    }
    else
    {
        mainMenu();
    }
}

void newScorecard()
{
    defaultScores();
    teamDetails();
    scoringProcess();
}

void scoringProcess()
{
    int b1, b2, nb, bo;
    char brun = '1';

    while (ball <= over * 6)
    {
        if (ball == over * 6)
        {
            system("cls");
            printf("\n\n\tFINAL SCORESHEET");
            scoreSheet();
            getch();
        }

        if (ball == 0)
        {
            system("cls");
            printf("\n\n\n\t\t SELECT BATSMAN\n\n");
            printf("\tID  Name        Runs      Balls\n");
            int i;
            for (i = 1; i <= 11; i++)
            {
                printf("\t%-3d %-10s: %-3dRuns  %-3dBalls\n", btm[i].id, btm[i].name, btm[i].run, btm[i].pball);
            }
        top:
            printf("\n\tEnter FIRST Batsman ID (1-11): ");
            scanf("%d", &b1);
            if (b1 < 1 || b1 > 11)
            {
                printf("\n\tError:Invalid choice.");
                goto top;
            }
            else
            {
                btm1 = b1;
                btm[b1].batting = true;
            }
        top1:
            printf("\tEnter SECOND Batsman ID (1-11): ");
            scanf("%d", &b2);
            if (btm[b2].batting)
            {
                printf("\tBatsman %d:%s is already batting.\n\tENTER AGAIN\n", btm[b2].id, btm[b2].name);
                goto top1;
            }
            if (b2 < 1 || b2 > 11)
            {
                printf("\n\tError:Invalid choice.");
                goto top1;
            }
            else
            {
                btm2 = b2;
                btm[b2].batting = true;
            }
        }

        if (ball % 6 == 0 && ball < over * 6)
        {
            system("cls");
            printf("\n\n\n\t\t SELECT BOWLER\n\n");
            printf("\tID  Name        Balls      Wickets\n");
            int j;
            for (j = 1; j <= 11; j++)
            {
                printf("\t%-3d %-10s: %-3dBalls  %-3dWickets\n", blr[j].id, blr[j].name, blr[j].ball, blr[j].wicket);
            }
            printf("\n\n\tEnter BOWLER ID (1-11): ");
            scanf("%d", &bo);
            if (ball > 5)
                switchb();
            blr[bo].bowling = true;
        }

        int no_of_out = 0;

    label:
        if (ball < over * 6)
        {
            system("cls");
            scoreSheet();
            printf("\n\n\tEnter Ball(1-6 runs, 'w' for out): ");
            scanf(" %c", &brun);
            if (brun == '0')
            {
                ballrun = '0' - '0';
                btm[btm1].run += 0;
                btm[btm1].pball++;
                blr[blrid].ball++;
            }
            else if (brun == '1')
            {
                ballrun = '1' - '0';
                btm[btm1].run += 1;
                btm[btm1].pball++;
                blr[blrid].ball++;
                switchb();
            }
            else if (brun == '2')
            {
                ballrun = '2' - '0';
                btm[btm1].run += 2;
                btm[btm1].pball++;
                blr[blrid].ball++;
            }
            else if (brun == '3')
            {
                ballrun = '3' - '0';
                btm[btm1].run += 3;
                btm[btm1].pball++;
                blr[blrid].ball++;
                switchb();
            }
            else if (brun == '4')
            {
                ballrun = '4' - '0';
                btm[btm1].run += 4;
                btm[btm1].pball++;
                blr[blrid].ball++;
            }
            else if (brun == '6')
            {
                ballrun = '6' - '0';
                btm[btm1].run += 6;
                btm[btm1].pball++;
                blr[blrid].ball++;;
            }
            else if (brun == 'w' || brun == 'W')
            {
                btm[btm1].out = true;
                blr[blrid].wicket++;
                blr[blrid].ball++;
                int a;
                for (a = 1; a <= 11; a++)
                {
                    if (btm[a].out == true)
                        no_of_out++;
                }
                if (no_of_out == 10)
                { 
                    ball++;
                    system("cls");                   
                    printf("\n\n\tFINAL SCORESHEET"); 
                    scoreSheet();                   
                    getch();                          
                    break;                          
                }
                btm[btm1].batting = false; 
                printf("\tBatsman %d: %s is out.", btm[btm1].id, btm[btm1].name);
            first:
                printf("\n\tEnter new batsman(1-11): ");
                scanf("%d", &nb); 
                if (btm[nb].batting)
                { 
                    printf("\tBatsman %d:%s is already batting.\n\tENTER AGAIN", btm[nb].id, btm[nb].name);
                    goto first; 
                }
                if (btm[nb].out)
                { 
                    printf("\tBatsman %d:%s is already out.\n\tENTER AGAIN", btm[nb].id, btm[nb].name);
                    goto first;
                }
                btm[btm1].pball++;        
                btm[nb].batting = true; 
                btm1 = nb;                 
            }
            else
            {
                printf("\n\tInvalid possibility.Enter again.");
                goto label; 
            }
        }
        ball++;                  
        score = score + ballrun; 
    }
}
void teamDetails()
{
    system("cls");
    printf("\n\n\t\t\t\t\tADD btmsman Names \n\n\n");
    for (int i = 1; i <= 11; i++)
    {
        printf("ID %d Name : ", i);
        btm[i].id = i;
        scanf("%s", btm[i].name);
    }
    system("cls");
    printf("\n\n\t\t\t\t\tADD blrer Names \n\n\n");
    for (int i = 1; i <= 11; i++)
    {
        printf("ID %d Name : ", i);
        blr[i].id = i;
        scanf("%s", blr[i].name);
    }
    system("cls");
    printf("\n\n\n\n\n\tENTER NUMBER OF over: ");
    scanf("%d", &over);
}

void defaultScores()
{
    int i;
    for (i = 0; i < 11; i++)
    {
        btm[i].pball = 0;
        btm[i].run = 0;
        btm[i].out = false;
        btm[i].batting = false;
        blr[i].ball = 0;
        blr[i].wicket = 0;
        blr[i].bowling= false;
    }
}

void scoreSheet()
{
    printf("\n\n\tbtmTING TEAM STATS:\n\n");
    int i;
    for (i = 1; i <= 11; i++)
    {
        if (btm[i].out)
        {
            printf("\t%-3d%-10s: %-3drun  %-3dpball  OUT\n", btm[i].id, btm[i].name, btm[i].run, btm[i].pball);
        }
        else
        {
            if (i == btm1)
                printf("\t%-3d%-10s: %-3drun  %-3dpball  NOT-OUT  *Strike\n", btm[i].id, btm[i].name, btm[i].run, btm[i].pball);
            else if (i == btm2)
                printf("\t%-3d%-10s: %-3drun  %-3dpball  NOT-OUT  *Non Strike\n", btm[i].id, btm[i].name, btm[i].run, btm[i].pball);
            else
                printf("\t%-3d%-10s: %-3drun  %-3dpball  NOT-OUT\n", btm[i].id, btm[i].name, btm[i].run, btm[i].pball);
        }
    }
    printf("\n\tblrING TEAM STATS:\n\n");
    int j;
    for (j = 1; j <= 11; j++)
    {
        if (blr[j].bowling)
        {
            printf("\t%-3d%-10s: %-3dpball  %-3dWickets\n", blr[j].id, blr[j].name, blr[j].ball, blr[j].wicket);
        }
    }
    printf("\n\tover: ");
    convertToOver(ball);
    printf("\t\tSCORE: %d", score);
}

void switchb()
{
    int temp = 0; // Temporary variable to store the ID of the striker.
    temp = btm1;
    btm1 = btm2; // Switch the striker and non-striker batsmen.
    btm2 = temp;
}

void convertToOver(int pball1)
{
    int o = 0, b = 0;
    o = pball1 / 6;
    b = pball1 % 6;
    printf("%d.%d", o, b);
}

int main()
{
    system("cls");
    gotoxy(55, 10);
    printf("WELCOME TO CRICKET");
    gotoxy(55, 12);
    printf("CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");
    gotoxy(55, 14);
    printf("CREATED BY: SADIK(copied from github) ");
    gotoxy(55, 16);
    printf("Press any key to continue.....");
    getch();
    mainMenu();
    return 0;
}
void gotoxy(x, y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}