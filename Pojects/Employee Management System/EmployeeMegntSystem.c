#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

struct EmployeeMegntSystem
{
    char name[50];
    int eid;
    char designation[50];
    int exp;
    int age;
} emp;
int num = 0;
int main();
void gotoxy(int, int);
void add_employee();
void search_employee();
void delete_employee();
void view_all_info();

void add_employee()
{
    system("cls");
    int v = 1;

    FILE *fp;
    fp = fopen("employeeInfo.txt", "ab+");
    if (fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        gotoxy(54, v += 1);
        printf("Add Emlpoyee Information");
        gotoxy(53, v += 1);
        printf("-------------------------");

        gotoxy(15, v += 2);
        printf("Employee Name : ");
        fflush(stdin);
        gets(emp.name);

        gotoxy(15, v += 1);
        printf("Designation : ");
        gets(emp.designation);

        gotoxy(15, v += 1);
        printf("Employee ID : ");
        scanf("%d", &emp.eid);

        gotoxy(15, v += 1);
        printf("Experience : ");
        scanf("%d", &emp.exp);

        gotoxy(15, v += 1);
        printf("Age : ");
        scanf("%d", &emp.age);

        fwrite(&emp, sizeof(emp), 1, fp);
        fclose(fp);
    }
    gotoxy(1, v += 2);
    printf("Press Any Key...");
    getch();
    main();
}

void view_all_info()
{
    system("cls");
    int v = 1;
    char name[50];
    FILE *fp;
    fp = fopen("employeeInfo.txt", "rb+");
    if (fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        gotoxy(54, v += 1);
        printf("Search Emlpoyee");
        gotoxy(53, v += 1);
        printf("-----------------");

        while (fread(&emp, sizeof(emp), 1, fp) == 1)
        {
            gotoxy(15, v += 2);
            printf("Employee Name : %s", emp.name);
            gotoxy(15, v += 1);
            printf("Designation : %s", emp.designation);
            gotoxy(15, v += 1);
            printf("Employee ID : %d", emp.eid);
            gotoxy(15, v += 1);
            printf("Experience : %d Years", emp.exp);
            gotoxy(15, v += 1);
            printf("Age : %d Years", emp.age);
        }
        fclose(fp);
    }
    gotoxy(1, v += 2);
    printf("Press Any Key...");
    getch();
    main();
}

void edit_info()
{
    system("cls");
    int v = 1;
    char name[50];

    FILE *fp;
    fp = fopen("employeeInfo.txt", "rb+");
    if (fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        gotoxy(54, v += 1);
        printf("Edit Employee Information");
        gotoxy(53, v += 1);
        printf("--------------------------");
        gotoxy(12, v += 2);

        printf("Enter Employee Name : ");
        fflush(stdin);
        gets(name);

        while (fread(&emp, sizeof(emp), 1, fp) == 1)
        {
            if (strcmp(name, emp.name) == 0)
            {
                ++num;
                gotoxy(15, v += 2);
                printf("Employee Name : %s", emp.name);
                gotoxy(15, v += 1);
                printf("Designation : %s", emp.designation);
                gotoxy(15, v += 1);
                printf("Employee ID : %d", emp.eid);
                gotoxy(15, v += 1);
                printf("Experience : %d Years", emp.exp);
                gotoxy(15, v += 1);
                printf("Age : %d Years", emp.age);
            }
        }
        if (num == 0)
        {
            system("cls");
            gotoxy(15, v += 2);
            printf("Record Not Found");
            gotoxy(15, v += 2);
            printf("Press Any Key...");
            getch();
            main();
        }
        else if (num != 0)
        {
            gotoxy(15, v += 2);
            printf("To Edit Press Any Key");
            gotoxy(15, v += 1);
            printf("To Cncel Press (N/n)  ");
            char ch = getch();

            if (ch == 'N' || ch == 'n')
            {
                fclose(fp);
                ch = NULL;
                main();
            }
            else
            {

                rewind(fp);
                fflush(stdin);
                while (fread(&emp, sizeof(emp), 1, fp) == 1)
                {
                    if (strcmp(name, emp.name) == 0)
                    {
                        gotoxy(15, v += 2);
                        printf("Employee Name : ");
                        fflush(stdin);
                        gets(emp.name);

                        gotoxy(15, v += 1);
                        printf("Designation : ");
                        gets(emp.designation);

                        gotoxy(15, v += 1);
                        printf("Employee ID : ");
                        scanf("%d", &emp.eid);

                        gotoxy(15, v += 1);
                        printf("Experience : ");
                        scanf("%d", &emp.exp);

                        gotoxy(15, v += 1);
                        printf("Age : ");
                        scanf("%d", &emp.age);

                        fseek(fp, -sizeof(emp), SEEK_CUR);
                        fwrite(&emp, sizeof(emp), 1, fp);
                        break;
                    }
                }
            }
        }
        fclose(fp);
    }
    gotoxy(1, v += 2);
    printf("Press Any Key...");
    getch();
    main();
}

void search_employee()
{
    system("cls");
    int v = 1;
    char name[50];
    FILE *fp;
    fp = fopen("employeeInfo.txt", "rb+");
    if (fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        gotoxy(54, v += 1);
        printf("Search Emlpoyee");
        gotoxy(53, v += 1);
        printf("-----------------");
        gotoxy(12, v += 2);
        printf("Enter Name : ");
        fflush(stdin);
        gets(name);
        while (fread(&emp, sizeof(emp), 1, fp) == 1)
        {
            if (strcmp(name, emp.name) == 0)
            {
                ++num;
                gotoxy(15, v += 2);
                printf("Employee Name : %s", emp.name);
                gotoxy(15, v += 1);
                printf("Designation : %s", emp.designation);
                gotoxy(15, v += 1);
                printf("Employee ID : %d", emp.eid);
                gotoxy(15, v += 1);
                printf("Experience : %d Years", emp.exp);
                gotoxy(15, v += 1);
                printf("Age : %d Years", emp.age);
                break;
            }
        }
        if (num == 0)
        {
            system("cls");
            gotoxy(15, v += 2);
            printf("Record Not Found");
            gotoxy(15, v += 2);
            printf("Press Any Key...");
            getch();
            main();
        }
        else
        {
            fclose(fp);
            num = 0;
            gotoxy(1, v += 2);
            printf("Press Any Key...");
            getch();
            main();
        }
    }
}

void delete_employee()
{
    system("cls");
    int v = 1;
    char name[50];
    FILE *fp, *ft;
    fp = fopen("employeeInfo.txt", "rb+");
    if (fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    ft = fopen("temp.txt", "wb+");
    if (ft == NULL)
    {
        system("cls");
        gotoxy(15, 3);
        printf("Error Opening File");
    }
    else
    {
        gotoxy(54, v += 1);
        printf("Delete Employee");
        gotoxy(53, v += 1);
        printf("-----------------");
        gotoxy(12, v += 2);
        printf("Enter Name : ");
        fflush(stdin);
        gets(name);

        while (fread(&emp, sizeof(emp), 1, fp) == 1)
        {
            if (strcmp(name, emp.name) == 0)
            {
                ++num;
                gotoxy(15, v += 2);
                printf("Employee Name : %s", emp.name);
                gotoxy(15, v += 1);
                printf("Designation : %s", emp.designation);
                gotoxy(15, v += 1);
                printf("Employee ID : %d", emp.eid);
                gotoxy(15, v += 1);
                printf("Experience : %d Years", emp.exp);
                gotoxy(15, v += 1);
                printf("Age : %d Years", emp.age);
            }
        }

        if (num == 0)
        {
            system("cls");
            fclose(fp);
            fclose(ft);
            remove("temp.txt");
            gotoxy(15, v += 2);
            printf("Record Not Found");
            gotoxy(15, v += 2);
            printf("Press Any Key...");
            getch();
            main();
        }
        else if (num != 0)
        {
            gotoxy(15, v += 2);
            printf("To Delete Press Any Key");
            gotoxy(15, v += 1);
            printf("To Cncel Press (N/n)  ");
            char ch = getch();

            if (ch == 'N' || ch == 'n')
            {
                fclose(fp);
                fclose(ft);
                remove("temp.txt");
                ch = NULL;
                main();
            }
            else
            {
                rewind(fp);
                fflush(stdin);
                rewind(ft);
                while (fread(&emp, sizeof(emp), 1, fp) == 1)
                {
                    if (strcmp(name, emp.name) != 0)
                    {
                        fwrite(&emp, sizeof(emp), 1, ft);
                    }
                }
                fclose(fp);
                fclose(ft);
                num = 0;
                remove("employeeInfo.txt");
                rename("temp.txt", "employeeInfo.txt");
                gotoxy(1, v += 2);
                printf("Press Any Key...");
                getch();
                main();
            }
        }
    }
}

int main(void)
{
    system("cls");
    int v = 1;
    gotoxy(54, v += 1);
    printf("Employee Management System");
    gotoxy(53, v += 1);
    printf("----------------------------");
    gotoxy(15, v += 2);
    printf("1.Add Emlpoyee Information");
    gotoxy(15, v += 1);
    printf("2.All Emlpoyee Information");
    gotoxy(15, v += 1);
    printf("3.Search Emlpoyee Information");
    gotoxy(15, v += 1);
    printf("4.Edit Employee Information");
    gotoxy(15, v += 1);
    printf("5.Delete Employee Information");
    gotoxy(15, v += 1);
    printf("6.Exit");

    int choice;
    gotoxy(15, v += 2);
    printf("Enter Your Choice  ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        add_employee();
        break;
    case 2:
        view_all_info();
        break;
    case 3:
        search_employee();
        break;
    case 4:
        edit_info();
        break;
    case 5:
        delete_employee();
        break;
    case 6:
        exit(0);
        break;
    default:
        system("cls");
        gotoxy(15, v += 1);
        printf("Invalid Input !");
        break;
    }

    return 0;
}

void gotoxy(int x, int y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
