#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void mainMenu();
void add_student();
void print_stu_details();
void search_by_name();
void search_by_roll();
void search_by_id();
void modify_stu_details();
void delete_stu_details();

struct studantPra
{
    char name[50];
    int id;
    int roll;
    char mobile[12];
    char course[10];
    char branch[10];
} st;

void mainMenu()
{
    system("cls");
    gotoxy(65, 3);
    printf("STUDENT MANAGEMENT SYSTEM MAIN MANU");
    gotoxy(65, 4);
    printf("------------------------------------");
    gotoxy(10, 9);
    printf("1. ADD STUDENT DETAILS");
    gotoxy(10, 10);
    printf("2. VIEW ALL STUDENT DETAILS");
    gotoxy(10, 11);
    printf("3. SEARCH STUDENT BY NAME");
    gotoxy(10, 12);
    printf("4. SEARCH STUDENT BY ROLL");
    gotoxy(10, 13);
    printf("5. SEARCH STUDENT BY ID");
    gotoxy(10, 14);
    printf("6. MODIFY STUDENT DETAILS");
    gotoxy(10, 15);
    printf("7. DELETE STUDENT DETAILS");
    gotoxy(10, 16);
    printf("8. EXIT");
    gotoxy(10, 17);
    printf("ENTER YOUR CHOICE : ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add_student();
        break;
    case 2:
        print_stu_details();
        break;
    case 3:
        search_by_name();
        break;
    case 4:
        search_by_roll();
        break;
    case 5:
        search_by_id();
        break;
    case 6:
        modify_stu_details();
        break;
    case 7:
        delete_stu_details();
        break;
    case 8:
        exit(1);
        break;
    default:
        printf("\n\n\nINVALID CHOICE\n\n");
        printf("TO RETRY PRESS Y/y\nTO EXIT PRESS ANY OTHER KEY   ");
        char ch = getch();
        if (ch == 'Y' || ch == 'y')
        {
            mainMenu();
        }
    }
}

void add_student()
{
    FILE *fp;
    fp = fopen("studentinfo.txt", "ab+");
    if (fp == NULL)
    {
        printf("\n\nError!");
        getch();
        exit(1);
    }
    else
    {
        while (1)
        {
            system("cls");

            gotoxy(35, 5);
            printf("ADD STUDENT DETAILS\n\n");
            gotoxy(10, 7);
            printf("Enter your name: ");
            fflush(stdin);
            gets(st.name);
            gotoxy(10, 8);
            printf("Enter ID number: ");
            scanf("%d", &st.id);
            gotoxy(10, 9);
            printf("Enter your roll number: ");
            scanf("%d", &st.roll);
            gotoxy(10, 10);
            printf("Enter your mobile number: ");
            fflush(stdin);
            gets(st.mobile);
            gotoxy(10, 11);
            printf("Enter your course: ");
            gets(st.course);
            gotoxy(10, 12);
            printf("Enter your branch: ");
            gets(st.branch);

            fwrite(&st, sizeof(st), 1, fp);
            fclose(fp);
            gotoxy(8, 14);
            printf("Record inserted successfully");
            gotoxy(8, 16);
            printf("Any Key to ADD more record\nPress N/n for Main Menu ");
            char ch = getche();
            if (ch == 'n' || ch == 'N')
            {
                break;
            }
            else
            {
                system("cls");
                add_student();
            }
        }
        mainMenu();
    }
}

void search_by_name()
{
    system("cls");
    gotoxy(67, 3);
    printf("SEARCH STUDENT BY NAME");
    gotoxy(65, 4);
    printf("---------------------------");
    char name[50];
    FILE *fp;

    fp = fopen("studentinfo.txt", "rb+");
    if (fp == NULL)
    {
        printf("\n\nError!");
        getch();
        exit(1);
    }
    else
    {
        gotoxy(10, 7);
        printf("Enter Student Name : ");
        fflush(stdin);
        gets(name);

        while (fread(&st, sizeof(st), 1, fp) == 1)
        {
            if (strcmp(name, st.name) == 0)
            {

                gotoxy(10, 9);
                printf("Name : %s", st.name);
                gotoxy(10, 10);
                printf("ID : %d", st.id);
                gotoxy(10, 11);
                printf("Roll No : %d", st.roll);
                gotoxy(10, 12);
                printf("Mobile No : %s", st.mobile);
                gotoxy(10, 13);
                printf("Course : %s", st.course);
                gotoxy(10, 14);
                printf("Branch : %s", st.branch);
                gotoxy(10, 16);
                printf("Press any key to continue...");
                break;
            }
            else
            {
                gotoxy(10, 9);
                printf("Record not found");
                break;
            }
        }
        fclose(fp);
        getch();
        mainMenu();
    }
}

void search_by_roll()
{
    system("cls");
    gotoxy(67, 3);
    printf("SEARCH STUDENT BY NAME");
    gotoxy(65, 4);
    printf("---------------------------");
    int roll;
    FILE *fp;

    fp = fopen("studentinfo.txt", "rb+");
    if (fp == NULL)
    {
        printf("\n\nError!");
        getch();
        exit(1);
    }
    else
    {
        gotoxy(10, 7);
        printf("Enter Student Name : ");
        fflush(stdin);
        scanf("%d", &roll);

        while (fread(&st, sizeof(st), 1, fp) == 1)
        {
            if (roll == st.roll)
            {
                gotoxy(10, 9);
                printf("Name : %s", st.name);
                gotoxy(10, 10);
                printf("ID : %d", st.id);
                gotoxy(10, 11);
                printf("Roll No : %d", st.roll);
                gotoxy(10, 12);
                printf("Mobile No : %s", st.mobile);
                gotoxy(10, 13);
                printf("Course : %s", st.course);
                gotoxy(10, 14);
                printf("Branch : %s", st.branch);
                gotoxy(10, 16);
                printf("Press any key to continue...");
                break;
            }
            else
            {
                gotoxy(10, 9);
                printf("Record not found");
                break;
            }
        }
        fclose(fp);
        getch();
        mainMenu();
    }
}

void search_by_id()
{
    system("cls");
    gotoxy(67, 3);
    printf("SEARCH STUDENT BY NAME");
    gotoxy(65, 4);
    printf("---------------------------");
    int id;
    FILE *fp;

    fp = fopen("studentinfo.txt", "rb+");
    if (fp == NULL)
    {
        printf("\n\nError!");
        getch();
        exit(1);
    }
    else
    {
        gotoxy(10, 7);
        printf("Enter Student Name : ");
        fflush(stdin);
        scanf("%d", &id);

        while (fread(&st, sizeof(st), 1, fp) == 1)
        {
            if (id == st.id)
            {
                gotoxy(10, 9);
                printf("Name : %s", st.name);
                gotoxy(10, 10);
                printf("ID : %d", st.id);
                gotoxy(10, 11);
                printf("Roll No : %d", st.roll);
                gotoxy(10, 12);
                printf("Mobile No : %s", st.mobile);
                gotoxy(10, 13);
                printf("Course : %s", st.course);
                gotoxy(10, 14);
                printf("Branch : %s", st.branch);
                gotoxy(10, 16);
                printf("Press any key to continue...");
                break;
            }
            else
            {
                gotoxy(10, 9);
                printf("Record not found");
                break;
            }
        }
        fclose(fp);
        getch();
        mainMenu();
    }
}

void print_stu_details()
{
    system("cls");
    gotoxy(65, 3);
    printf("ALL STUDENT DETAILS");
    gotoxy(65, 4);
    printf("--------------------");
    struct studantPra st;
    int i = 1;
    int v = 8;
    FILE *fp;
    fp = fopen("studentinfo.txt", "rb+");
    if (fp == NULL)
    {
        printf("\n\nError!");
        getch();
        exit(1);
    }
    else
    {
        gotoxy(10, v);
        printf("-----------------------------------------------------------------------------------------------------\n");
        gotoxy(10, v += 1);
        printf("| NO      NAME                  ID          ROLL        MOBILE               COURSE      BRANCH      |\n");
        gotoxy(10, v += 1);
        printf("-----------------------------------------------------------------------------------------------------\n");
        while (fread(&st, sizeof(st), 1, fp) == 1)
        {
            gotoxy(10, v + 1);
            printf("|%-8d%-22s%-12d%-12d%-22s%-12s%-12s|\n", i, st.name, st.id, st.roll, st.mobile, st.course, st.branch);
            gotoxy(10, v + 2);
            printf("----------------------------------------------------------------------------------------------------\n");
            i++;
            v++;
        }
        fclose(fp);
        printf("\n\nPress any key to continue....");
        getch();
        mainMenu();
    }
}

void modify_stu_details()
{
    char stname[20];
    FILE *fp, *ft;
    system("cls");
    gotoxy(10, 3);
    printf("<--:DELETE RECORD:-->");
    gotoxy(10, 5);
    printf("Enter name of student to delete record : ");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt", "rb+");
    if (fp == NULL)
    {
        gotoxy(10, 6);
        printf("Error opening file");
        exit(1);
    }
    ft = fopen("temp.txt", "wb+");
    if (ft == NULL)
    {
        gotoxy(10, 6);
        printf("Error opening file");
        exit(1);
    }
    while (fread(&st, sizeof(st), 1, fp) == 1)
    {
        if (strcmp(stname, st.name) != 0)
            fwrite(&st, sizeof(st), 1, ft);
    }
    fclose(fp);
    fclose(ft);
    remove("record.txt");
    rename("temp.txt", "record.txt");
    gotoxy(10, 10);
    printf("Press any key to continue.");
    getch();
    mainMenu();
}

void delete_stu_details()
{
    char name[50];
    system("cls");
    gotoxy(65, 3);
    printf("Delete Student Details");
    gotoxy(10, 5);
    printf("Enter name of student to delete record : ");
    fflush(stdin);
    gets(name);

    FILE *fp, *ft;
    fp = fopen("studentinfo.txt", "rb+");
    if (fp == NULL)
    {
        gotoxy(10, 6);
        printf("Error opening file");
        exit(1);
    }
    ft = fopen("temp.txt", "wb+");
    if (ft == NULL)
    {
        gotoxy(10, 6);
        printf("Error opening file");
        exit(1);
    }
    while (fread(&st, sizeof(st), 1, fp) == 1)
    {

        if (strcmp(name, st.name) == 0)
        {
            gotoxy(10, 9);
            printf("Name : %s", st.name);
            gotoxy(10, 10);
            printf("ID : %d", st.id);
            gotoxy(10, 11);
            printf("Roll No : %d", st.roll);
            gotoxy(10, 12);
            printf("Mobile No : %s", st.mobile);
            gotoxy(10, 13);
            printf("Course : %s", st.course);
            gotoxy(10, 14);
            printf("Branch : %s", st.branch);
            gotoxy(10, 15);
            printf("Do you want to delete this record (y/n) : ");
            fflush(stdin);
            char ch = getche();
            if (ch == 'n' || ch == 'N')
            {
                break;
            }
        }

        if (strcmp(name, st.name) != 0){
            fwrite(&st, sizeof(st), 1, ft);
        }

    }
    fclose(fp);
    fclose(ft);
    remove("studentinfo.txt");
    rename("temp.txt", "studentinfo.txt");
    gotoxy(10, 17);
    printf("Press any key to continue.");
    getch();
    mainMenu();
}

int main()
{
    // Student Management System
    system("cls");
    gotoxy(65, 15);
    printf("STUDENT MANAGEMENT SYSTEM");
    gotoxy(65, 16);
    printf("-------------------------");
    gotoxy(65, 17);
    printf("DEVELOPED BY : SADIK");
    gotoxy(55, 21);
    printf("Press any key to continue....");
    getch();

    mainMenu();
    return 0;
}

void gotoxy(int x, int y)
{
    printf("\033[%d;%df", y, x);
}
