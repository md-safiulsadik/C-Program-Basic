#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int, int);
void mainManu();
void add_recode();
void view_recode();
void search_recode();
void modify_recode();
void delete_recode();

struct LogIn
{
    char Name[50];
    char Pass[20];
} log;
struct StudentInfo
{
    char name[50];
    int id;
    int roll;
    int mobile;
    char course[20];
    char subject[20];
} st;

void mainManu()
{
    system("cls");
    int choice;
    gotoxy(66, 2);
    printf("Main Manu");
    gotoxy(65, 3);
    printf("-----------");
    gotoxy(12, 6);
    printf("1.Add Student");
    gotoxy(12, 7);
    printf("2.View All Student");
    gotoxy(12, 8);
    printf("3.Search Name ");
    gotoxy(12, 9);
    printf("4.Modify Recode");
    gotoxy(12, 10);
    printf("5.Delete Recode");
    gotoxy(12, 11);
    printf("6.Exit");
    gotoxy(12, 13);
    printf("Enter Your Choice  ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add_recode();
        break;
    case 2:
        view_recode();
        break;
    case 3:
        search_recode();
        break;
    case 4:
        modify_recode();
        break;
    case 5:
        delete_recode();
        break;
    case 6:
        exit(1);
        break;
    default:
        system("cls");
        gotoxy(10, 2);
        printf("Invalid Input !");
    }
}

void add_recode()
{
    while (1)
    {
        system("cls");

        gotoxy(66, 2);
        printf("Add Student Menu");
        gotoxy(65, 3);
        printf("-----------------");

        gotoxy(12, 5);
        printf("Name : ");
        fflush(stdin);
        gets(st.name);
        gotoxy(12, 6);
        printf("ID : ");
        scanf("%d", &st.id);
        gotoxy(12, 7);
        printf("Roll : ");
        scanf("%d", &st.roll);
        gotoxy(12, 8);
        printf("Mobile : ");
        scanf("%d", &st.mobile);
        gotoxy(12, 9);
        printf("Course : ");
        fflush(stdin);
        gets(st.course);
        gotoxy(12, 10);
        printf("Subject : ");
        gets(st.subject);

        FILE *finfo;
        finfo = fopen("student.txt", "ab+");
        if (finfo == NULL)
        {
            system("cls");
            gotoxy(10, 3);
            printf("Error Opening File");
            getch();
            exit(0);
            ;
        }
        else
        {
            fwrite(&st, sizeof(st), 1, finfo);
            fclose(finfo);
            gotoxy(10, 12);
            printf("Recode Added Successful !");
        }
        gotoxy(1, 14);
        printf("Press (Y/y) To Add More Recode");
        gotoxy(1, 15);
        printf("Press Any To Exit...");
        char ch = getch();
        if (ch == 'y' || ch == 'Y')
        {
            add_recode();
        }
        else
        {
            mainManu();
        }
    }
}

void view_recode()
{
    system("cls");
    char N[] = "No";
    char n[] = "Name";
    char i[] = "ID";
    char r[] = "Roll";
    char m[] = "Mobile";
    char c[] = "Course";
    char s[] = "Subject";
    int j = 1;
    int v = 5;
    FILE *finfo;
    finfo = fopen("student.txt", "rb+");
    if (finfo == NULL)
    {
        system("cls");
        gotoxy(10, 3);
        printf("Error Opening File");
        getch();
        exit(0);
    }
    else
    {
        gotoxy(53, 1);
        printf("Student Recode");
        gotoxy(52, 2);
        printf("---------------");
        gotoxy(12, v);
        printf("%-6s%-22s%-12s%-12s%-18s%-12s%-12s\n", N, n, i, r, m, c, s);
        while (fread(&st, sizeof(st), 1, finfo))
        {
            gotoxy(12, v + 1);
            printf("%-6d%-22s%-12d%-12d%-18d%-12s%-12s\n", j, st.name, st.id, st.roll, st.mobile, st.course, st.subject);
            j += 1;
            v++;
        }
        fclose(finfo);
        gotoxy(12, v + 2);
        printf("\n\nPress Any Key...");
        getch();
        mainManu();
    }
}

void search_recode()
{
    system("cls");
    char name[30];
    int v = 7;
    int count = 0;
    gotoxy(53, 2);
    printf("Search Student");
    gotoxy(52, 3);
    printf("----------------");
    gotoxy(8, 6);
    printf("Enter Name : ");
    fflush(stdin);
    gets(name);

    FILE *finfo;
    finfo = fopen("student.txt", "rb+");
    if (finfo == NULL)
    {
        system("cls");
        gotoxy(10, 3);
        printf("Error Opening File");
        getch();
        exit(0);
    }
    else
    {
        while (fread(&st, sizeof(st), 1, finfo) == 1)
        {
            if (strcmp(name, st.name) == 0)
            {
                gotoxy(15, v += 1);
                printf("Name : %s", st.name);
                gotoxy(15, v += 1);
                printf("ID : %d", st.id);
                gotoxy(15, v += 1);
                printf("Roll : %d", st.roll);
                gotoxy(15, v += 1);
                printf("Mobile : %d", st.mobile);
                gotoxy(15, v += 1);
                printf("Name : %s", st.course);
                gotoxy(15, v += 1);
                printf("Name : %s", st.subject);
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            system("cls");
            gotoxy(12, 4);
            printf("Recode Not Found");
            gotoxy(1, 6);
            printf("Press Any Key...");
            getch();
            mainManu();
        }
        fclose(finfo);
        gotoxy(3, v += 2);
        printf("Press Any Key...");
        getch();
        mainManu();
    }
}

void modify_recode()
{
    system("cls");
    char name[30];
    int v = 6;
    int count = 0;
    FILE *finfo;
    finfo = fopen("student.txt", "rb+");
    if (finfo == NULL)
    {
        system("cls");
        gotoxy(10, 3);
        printf("Error Opening File");
        getch();
        exit(0);
    }
    else
    {
        gotoxy(53, 2);
        printf("Modify Recode");
        gotoxy(52, 3);
        printf("--------------");
        gotoxy(10, 5);
        printf("Enter Name : ");
        fflush(stdin);
        gets(name);
        rewind(finfo);
        fflush(stdin);
        while (fread(&st, sizeof(st), 1, finfo) == 1)
        {
            if (strcmp(name, st.name) == 0)
            {
                gotoxy(12, v += 1);
                printf("Name : %s", st.name);
                gotoxy(12, v += 1);
                printf("ID : %d", st.id);
                gotoxy(12, v += 1);
                printf("Roll : %d", st.roll);
                gotoxy(12, v += 1);
                printf("Mobile : %d", st.mobile);
                gotoxy(12, v += 1);
                printf("Name : %s", st.course);
                gotoxy(12, v += 1);
                printf("Name : %s", st.subject);

                gotoxy(10, v += 2);
                printf("Modify ");
                gotoxy(12, v += 2);
                printf("Name : ");
                fflush(stdin);
                gets(st.name);
                gotoxy(12, v += 1);
                printf("ID : ");
                scanf("%d", &st.id);
                gotoxy(12, v += 1);
                printf("Roll : ");
                scanf("%d", &st.roll);
                gotoxy(12, v += 1);
                printf("Mobile : ");
                scanf("%d", &st.mobile);
                gotoxy(12, v += 1);
                printf("Course : ");
                fflush(stdin);
                gets(st.course);
                gotoxy(12, v += 1);
                printf("Subject : ");
                gets(st.subject);

                fseek(finfo, -sizeof(st), SEEK_CUR);
                fwrite(&st, sizeof(st), 1, finfo);
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            system("cls");
            gotoxy(12, 4);
            printf("Recode Not Found");
            gotoxy(1, 6);
            printf("Press Any Key...");
            getch();
            mainManu();
        }
        fclose(finfo);
        gotoxy(8, v += 2);
        printf("Modify Successful..!");
        gotoxy(1, v += 2);
        printf("Press (Y/y) To Modify More Recode");
        gotoxy(1, v += 1);
        printf("Press Any Key To Go Back...");
        char ch = getch();
        if (ch == 'y' || ch == 'Y')
        {
            modify_recode();
        }
        else
        {
            mainManu();
        }
    }
}

void delete_recode()
{
    system("cls");
    char name[30];
    int v = 7;
    int count = 0;
    gotoxy(53, 2);
    printf("Delete Recode");
    gotoxy(52, 3);
    printf("----------------");
    gotoxy(8, 6);
    printf("Enter Name : ");
    fflush(stdin);
    gets(name);

    FILE *finfo, *dinfo;
    finfo = fopen("student.txt", "rb+");
    if (finfo == NULL)
    {
        system("cls");
        gotoxy(10, 3);
        printf("Error Opening File");
        getch();
        exit(0);
    }
    dinfo = fopen("temp.txt", "wb+");
    if (dinfo == NULL)
    {
        system("cls");
        gotoxy(10, 3);
        printf("Error Opening File");
        getch();
        exit(0);
    }
    else
    {
        while (fread(&st, sizeof(st), 1, finfo) == 1)
        {
            if (strcmp(name, st.name) == 0)
            {
                gotoxy(15, v += 1);
                printf("Name : %s", st.name);
                gotoxy(15, v += 1);
                printf("ID : %d", st.id);
                gotoxy(15, v += 1);
                printf("Roll : %d", st.roll);
                gotoxy(15, v += 1);
                printf("Mobile : %d", st.mobile);
                gotoxy(15, v += 1);
                printf("Name : %s", st.course);
                gotoxy(15, v += 1);
                printf("Name : %s", st.subject);
                count = 1;
            }
        }
        if (count == 0)
        {
            system("cls");
            gotoxy(12, 4);
            printf("Recode Not Found");
            gotoxy(1, 6);
            printf("Press Any Key...");
            getch();
            mainManu();
        }
        while (1)
        {
            gotoxy(1, v += 2);
            printf("To Delete Press Any Key");
            gotoxy(1, v += 1);
            printf("To Cancel Press (N/n)  ");
            char ch = getch();
            if (ch == 'n' || ch == 'N')
            {
                mainManu();
            }
            else
            {
                break;
            }
        }
        rewind(finfo);
        fflush(stdin);
        while (fread(&st, sizeof(st), 1, finfo) == 1)
        {
            if (strcmp(name, st.name) != 0)
            {
                fwrite(&st, sizeof(st), 1, dinfo);
            }
        }
    }
    fclose(finfo);
    fclose(dinfo);
    remove("student.txt");
    rename("temp.txt", "student.txt");
    gotoxy(8, v += 2);
    printf("Delete Successful..!");
    gotoxy(1, v += 2);
    printf("Press Any Key...");
    getch();
    mainManu();
}

int main()
{
    char name[50];
    char pass[20];
    int i;
    char ch;

    gotoxy(66, 2);
    printf("Student Management System");
    gotoxy(65, 3);
    printf("---------------------------");
    gotoxy(15, 5);
    printf("Log In ");
    gotoxy(15, 6);
    printf("-------");
    gotoxy(15, 8);
    printf("User Name : ");
    gets(name);
    gotoxy(15, 9);
    printf("Password : ");
    while(1)
    {
        ch = getch();
        if(ch == '\r')
        {
            break;
        }
        else if(ch == '\b')
        {
            if(i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(i < 20)
        {
            pass[i] = ch;
            i++;
            putchar('*');
        }
    }

    FILE *loginFile;
    loginFile = fopen("login.txt", "rb+");
    if (loginFile == NULL)
    {
        gotoxy(15, 12);
        printf("Error !");
        getch();
        exit(0);
    }
    else
    {
        while (fread(&log, sizeof(log), 1, loginFile) == 1)
        {
            if (strcmp(name, log.Name) == 0 && strcmp(pass, log.Pass) == 0)
            {
                gotoxy(15, 11);
                printf("Log In Successful !");
                mainManu();
            }
            else
            {
                gotoxy(15, 11);
                printf("Wrong Input !\n\n");
            }
        }
        fclose(loginFile);
    }

    return 0;
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
