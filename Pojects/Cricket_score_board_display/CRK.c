#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

void mainMenu();
void gotoxy(int, int);
void playerInfo();
void defaultScores();
void scoreBoard();
void selectBatsman();
void selectBowler();
void selectOver();
void switchHub();
void scoreCalculation();
void newBatsman();
void overConvert();

int scoure = 0, ball = 0, over = 0, wickets = 0;
int batsman1 = 0, batsman2 = 0, bowler = 0;

struct teamName
{
    char team1[20];
    char team2[20];
} tm;

struct battingTeam
{
    char name[30];
    int id;
    int run;
    int played;
    bool batting;
    bool out;
} bat[11];

struct bowlingTeam
{
    char name[30];
    int id;
    int wicket;
    int balls;
    bool bowlling;
} bowl[11];

void defaultScores()
{
    for (int i = 1; i <= 11; i++)
    {
        bat[i].run = 0;
        bat[i].played = 0;
        bat[i].batting = false;
        bowl[i].bowlling = false;
        bowl[i].wicket = 0;
        bowl[i].balls = 0;
    }
}

void scoreCalculation()
{
    while (1)
    {
        if (ball == over * 6)
        {
            system("cls");
            gotoxy(18, 5);
            printf("Match Over\nFinal Score");

            getch();
            scoreBoard();
            break;
        }
        else
        {
            if(ball % 6 == 0 && ball > 0)
            {
                system("cls");
                gotoxy(54, 8);
                printf("Over Ended");
                gotoxy(54, 9);
                printf("Select New Bowler");
                getch();
                selectBowler();
            }
            system("cls");
            scoreBoard();
            char blrun;
            gotoxy(12, 33);
            printf("Enter Run(1-6) 'W' for Wicket  ");
            fflush(stdin);
            scanf(" %c", &blrun);
            if (blrun == '0')
            {
                bat[batsman1].played += 1;
                bowl[bowler].balls += 1;
            }
            else if (blrun == '1')
            {
                bat[batsman1].run += 1;
                bat[batsman1].played += 1;
                bowl[bowler].balls += 1;
                switchHub();
            }
            else if (blrun == '2')
            {
                bat[batsman1].run += 2;
                bat[batsman1].played += 1;
                bowl[bowler].balls += 1;
            }
            else if (blrun == '3')
            {
                bat[batsman1].run += 3;
                bat[batsman1].played += 1;
                bowl[bowler].balls += 1;
                switchHub();
            }
            else if (blrun == '6')
            {
                bat[batsman1].run += 6;
                bat[batsman1].played += 1;
                bowl[bowler].balls += 1;
            }
            else if (blrun == 'W' || blrun == 'w')
            {
                wickets++;
                bowl[bowler].balls += 1;
                bowl[bowler].wicket += 1;
                bat[batsman1].played += 1;
                bat[batsman1].batting = false;
                bat[batsman1].out = true;

                system("cls");
                gotoxy(15, 5);
                printf("Player %s OUT", bat[batsman1].name);
                getch();
                newBatsman();
            }
            else
            {
                scoreCalculation();
            }
            scoure += bat[batsman1].run;
            ball++;
            if(wickets == 2)
            {
                system("cls");
                gotoxy(18, 5);
                printf("Match Over\nFinal Score");

                getch();
                scoreBoard();
                break;
            }
        }
    }
}

void playerInfo()
{
    // system("cls");
    // int v = 0;
    // gotoxy(49, v += 1);
    // printf("%s V/S %s", tm.team1, tm.team2);
    // gotoxy(44, v += 2);
    // printf("Enter Batting Team Player Names");
    // gotoxy(43, v += 1);
    // printf("---------------------------------");
    // for(int i = 1; i <= 11; i++)
    // {
    //     gotoxy(12, v += 1);
    //     bat[i].id = i;
    //     printf("Player Number %d : ", i+1);
    //     scanf("%s", &bat[i].name);
    // }
    // system("cls");
    // v = 0;
    // gotoxy(49, v += 1);
    // printf("%s V/S %s", tm.team1, tm.team2);
    // gotoxy(44, v += 2);
    // printf("Enter Bowling Team Player Names");
    // gotoxy(43, v += 1);
    // printf("---------------------------------");
    // for(int i = 1; i <= 11; i++)
    // {
    //     gotoxy(12, v += 1);
    //     bowl[i].id = i;

    //     printf("Player Number %d : ", i);
    //     scanf("%s", &bowl[i].name);
    // }
    for (int i = 1; i <= 11; i++)
    {
        sprintf(bat[i].name, "Batsaman %d", i);
        sprintf(bowl[i].name, "Bowler %d", i);
    }
}

void newBatsman()
{
    int v = 0;
    int bt1, bt2, bl;

    system("cls");
    printf("wicket : %d", wickets);
    gotoxy(55, v += 1);
    printf("Select New Batsman");
    gotoxy(54, v += 1);
    printf("-------------------");

    gotoxy(54, v += 1);
    printf("%s V/S %s", tm.team1, tm.team2);
    gotoxy(53, v += 1);
    printf("-------------------");

    gotoxy(15, v += 2);
    printf("Number      Name");
    for (int i = 1; i <= 11; i++)
    {
        gotoxy(15, v += 1);
        printf("%-12d%-12s", i, bat[i].name);
    }
reBat_1:
    gotoxy(12, v += 2);
    printf("Select New Batsman(1-11) : ");
    scanf("%d", &bt1);
    if(bt1 < 1 || bt1 > 11)
    {
        goto reBat_1;
    }
    else
    {
        batsman1 = bt1;
        if(bat[bt1].batting)
        {
            system("cls");
            gotoxy(18, 5);
            printf("Already Batting");
            getch();
            newBatsman();
        }
        else if(bat[bt1].out)
        {
            system("cls");
            gotoxy(18, 5);
            printf("Already Out");
            getch();
            newBatsman();
        }
        bat[batsman1].batting = true;
    }

}


void selectBatsman()
{
    system("cls");
    int v = 0;
    int bt1, bt2, bl;

    gotoxy(54, v += 1);
    printf("%s V/S %s", tm.team1, tm.team2);
    gotoxy(53, v += 1);
    printf("-------------------");

    gotoxy(55, v += 1);
    printf("Select Batsman");
    gotoxy(54, v += 1);
    printf("---------------");

    gotoxy(15, v += 2);
    printf("Number      Name");
    for (int i = 1; i <= 11; i++)
    {
        gotoxy(15, v += 1);
        printf("%-12d%-12s", i, bat[i].name);
    }
reBat_1:
    gotoxy(12, v += 2);
    printf("Select First Batsman(1-11) : ");
    scanf("%d", &bt1);
    if(bt1 < 1 || bt1 > 11)
    {
        goto reBat_1;
    }
    else
    {
        batsman1 = bt1;
        bat[batsman1].batting = true;
    }

reBat_2:
    gotoxy(12, v += 2);
    printf("Select Second Batsman(1-11) : ");
    scanf("%d", &bt2);
    if(bt2 < 1 || bt2 > 11 || bt2 == bt1)
    {
        goto reBat_2;
    }
    else
    {
        batsman2 = bt2;
        bat[batsman2].batting = true;
    }
}
void selectBowler()
{
start:
    system("cls");
    int v = 0, bl;
    gotoxy(54, v += 1);
    printf("%s V/S %s", tm.team1, tm.team2);
    gotoxy(53, v += 1);
    printf("-------------------");
    gotoxy(55, v += 1);
    printf("Select Bowler");
    gotoxy(54, v += 1);
    printf("---------------");
    for (int i = 1; i <= 11; i++)
    {
        gotoxy(15, v += 1);
        printf("%-8d%-12s", i + 1, bat[i].name);
    }
    gotoxy(12, v += 2);
    printf("Select Bowler(1-11) : ");
    scanf("%d", &bl);
    bowler = bl;
    if(bowl[bl].bowlling)
    {
        system("cls");
        gotoxy(18, 5);
        printf("Balled Last Over");
        getch();
        goto start;
    }
    bowl[bowler].bowlling = true;
}

void selectOver()
{
    int v  = 0;
    system("cls");
    gotoxy(54, v += 1);
    printf("%s V/S %s", tm.team1, tm.team2);
    gotoxy(53, v += 1);
    printf("-------------------");
    gotoxy(12, v += 6 );
    printf("Over : ");
    scanf("%d", &over);
}

void scoreBoard()
{
    system("cls");
    int v = 0;
    gotoxy(55, v += 1);
    printf("Match ScoreBoard");
    gotoxy(54, v += 1);
    printf("-----------------");
    gotoxy(54, v += 1);
    printf("%s V/S %s", tm.team1, tm.team2);
    gotoxy(3, v += 2);
    printf("Batting Team Status");
    gotoxy(2, v += 1);
    printf("--------------------");
    gotoxy(12, v += 2);
    printf("Number    Name       Run    Balls");
    for (int i = 1; i <= 11; i++)
    {
        if (i == batsman1)
        {
            gotoxy(14, v += 1);
            printf("%-8d%-12s%-7d%-7d *Strike\n", i, bat[i].name, bat[i].run, bat[i].played);
        }
        else if (i == batsman2)
        {
            gotoxy(14, v += 1);
            printf("%-8d%-12s%-7d%-7d *Not Strike\n", i, bat[i].name, bat[i].run, bat[i].played);
        }
        else
        {
            gotoxy(14, v += 1);
            printf("%-8d%-12s%-7d%-7d \n", i, bat[i].name, bat[i].run, bat[i].played);
        }
    }
    if (bowl[bowler].bowlling)
    {
        gotoxy(3, v += 2);
        printf("Bowling Team Status");
        gotoxy(2, v += 1);
        printf("--------------------");

        gotoxy(14, v += 1);
        printf("Bowler : %s              Ball : %d", bowl[bowler].name, bowl[bowler].balls);
        gotoxy(14, v += 2);
        printf("Number : %d                     Wickets : %d\n", bowl[bowler].id, bowl[bowler].wicket);

        gotoxy(3, v += 2);
        printf("Scores %s VS %s" , tm.team1 , tm.team2);
        gotoxy(2, v += 1);
        printf("------------------------------");
        gotoxy(14, v += 1);
        overConvert();
        gotoxy(45, v += 1);
        printf("Wickets : %d", wickets);
        gotoxy(14, v += 1);
        printf("Total Run : %d\n" , scoure);
    }
}

void overConvert()
{
    int num = 0;
    int dec = 0;
    num = ball / 6;
    dec = ball % 6;
    printf("Over : %d.%d", num, dec);
}

void mainMenu()
{
    system("cls");
    int v = 1;
    gotoxy(55, v += 1);
    printf("Enter Team Names");
    gotoxy(54, v += 1);
    printf("------------------");
    gotoxy(49, v += 2);
    printf("First Team V/S Second Team");
    gotoxy(15, v += 2);
    printf("First Team : ");
    sprintf(tm.team1, "Team 1");
    gotoxy(15, v += 1);
    printf("Second Team : ");
    sprintf(tm.team2, "Team 2");
    defaultScores();
    playerInfo();
    selectBatsman();
    selectBowler();
    selectOver();
    scoreCalculation();
}

int main()
{
    int v = 7;
    gotoxy(55, v += 1);
    printf("Cricket Scoreboard System");
    gotoxy(54, v += 1);
    printf("----------------------------");
    gotoxy(58, v += 1);
    printf("Programed By SADIK");
    gotoxy(57, v += 1);
    printf("--------------------");
    gotoxy(10, v += 2);
    printf("Press any key to continue....   ");
    getch();
    mainMenu();
    return 0;
}

void switchHub()
{
    int temp = 0;
    temp = batsman1;
    batsman1 = batsman2;
    batsman2 = temp;
}

void gotoxy(int x, int y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
