#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

struct libraryinfo
{
    char name[50];
    char author[50];
    float price;
    int page;
} lib;
struct searchinfo
{
    char name[50];
    char author[50];
} src;

void gotoxy(int, int);
void add_book();
void view_book();
void search_name();
void search_author();

void add_book()
{
    system("cls");
    int v = 1;
    gotoxy(54,v+=1);
    printf("Add Book Informations");
    gotoxy(53,v+=1);
    printf("-----------------------");

    gotoxy(12,v+=2);
    printf("Book Name : ");
    fflush(stdin);
    gets(lib.name);
    gotoxy(12,v+=1);
    printf("Author Name : ");
    gets(lib.author);
    gotoxy(12,v+=1);
    printf("Price : ");
    scanf("%f",&lib.price);
    gotoxy(12,v+=1);
    printf("Pages : ");
    scanf("%d",&lib.page);

    FILE *fp;
    fp = fopen("libraryInfo.txt","ab+");
    if(fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        fwrite(&lib, sizeof(lib), 1, fp);
        fclose(fp);
    }

    gotoxy(8,v+=2);
    printf("Press Any Key...");
    getch();
    main();
}

void view_book()
{
    system("cls");
    int v = 1;
    gotoxy(54,v+=1);
    printf("View All Book Information");
    gotoxy(53,v+=1);
    printf("--------------------------");
    gotoxy(57,v+=2);

    FILE *fp;
    fp = fopen("libraryInfo.txt","rb+");
    if(fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        while(fread(&lib, sizeof(lib), 1, fp) == 1)
        {
            gotoxy(12,v+=2);
            printf("Book Name : %s",lib.name);
            gotoxy(12,v+=1);
            printf("Author Name : %s",lib.author);
            gotoxy(12,v+=1);
            printf("Price : %.2f$",lib.price);
            gotoxy(12,v+=1);
            printf("Pages : %d",lib.page);
        }
        fclose(fp);
    }

    gotoxy(1,v+=2);
    printf("Press Any Key...");
    getch();
    main();
}

void search_name()
{
    system("cls");
    int v = 1;
    int errormsg = 0;
    gotoxy(54,v+=1);
    printf("Search Book Name");
    gotoxy(53,v+=1);
    printf("------------------");
    gotoxy(10,v+=2);
    printf("Book Name : ");
    fflush(stdin);
    gets(src.name);

    FILE *fp;
    fp = fopen("libraryInfo.txt","rb+");
    if(fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        while(fread(&lib, sizeof(lib), 1, fp) == 1)
        {
            if(strcmp(src.name, lib.name) == 0)
            {
                errormsg++;
                gotoxy(12,v+=2);
                printf("Book Name : %s",lib.name);
                gotoxy(12,v+=1);
                printf("Author Name : %s",lib.author);
                gotoxy(12,v+=1);
                printf("Price : %.2f$",lib.price);
                gotoxy(12,v+=1);
                printf("Pages : %d",lib.page);
            }
        }
        fclose(fp);
    }
    if(errormsg == 0)
    {
        system("cls");
        gotoxy(10,v+=1);
        printf("Book Not Found In List");
    }

    gotoxy(8,v+=2);
    printf("Press Any Key...");
    getch();
    main();
}

void search_author()
{
    system("cls");
    int v = 1;
    int errormsg = 0;
    gotoxy(54,v+=1);
    printf("Search Book By Author Name");
    gotoxy(53,v+=1);
    printf("----------------------------");
    gotoxy(10,v+=2);
    printf("Author Name : ");
    gets(src.author);

    FILE *fp;
    fp = fopen("libraryInfo.txt","rb+");
    if(fp == NULL)
    {
        system("cls");
        gotoxy(15, 2);
        printf("Error Opening File");
    }
    else
    {
        while(fread(&lib, sizeof(lib), 1, fp) == 1)
        {
            if(strcmp(src.author, lib.author) == 0)
            {
                errormsg++;
                gotoxy(12,v+=2);
                printf("Book Name : %s",lib.name);
                gotoxy(12,v+=1);
                printf("Author Name : %s",lib.author);
                gotoxy(12,v+=1);
                printf("Price : %.2f$",lib.price);
                gotoxy(12,v+=1);
                printf("Pages : %d",lib.page);
            }
        }
        fclose(fp);
    }
    if(errormsg == 0)
    {
        system("cls");
        gotoxy(10,v+=1);
        printf("Book Not Found In List");
    }

    gotoxy(8,v+=2);
    printf("Press Any Key...");
    getch();
    main();
}

int main()
{
    system("cls");
    int v = 1;
    gotoxy(54,v+=1);
    printf("E-Library Management System");
    gotoxy(53,v+=1);
    printf("-----------------------------");

    gotoxy(12,v+=2);
    printf("1.Add Book Information");
    gotoxy(12,v+=1);
    printf("2.View All Book");
    gotoxy(12,v+=1);
    printf("3.Search Book Name");
    gotoxy(12,v+=1);
    printf("4.Search Book By Author Name");
    gotoxy(12,v+=1);
    printf("5.Exit");

    int choice;
    gotoxy(10,v+=2);
    printf("Enter Your Choice  ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        add_book();
        break;
    case 2:
        view_book();
        break;
    case 3:
        search_name();
        break;
    case 4:
        search_author();
        break;
    case 5:
        exit(0);
        break;
    default :
        system("cls");
        gotoxy(20,2);
        printf("Invalid Input !\n\n");
    }
    return 0;
}

void gotoxy(int x, int y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
