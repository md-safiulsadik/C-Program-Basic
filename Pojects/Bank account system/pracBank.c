#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

float mainBalance;
void accountOpen();
void logIn();
void accountinfo();
void accountSingupinfo();
void deposit();
void NewFunction();
void option();
void checkBalance();
void transaction();
float balance();

typedef struct Money
{
    float addBalance;
    float wdrwBalance;
} money;

typedef struct AllElements
{
    char userName[50];
    char userPass[50];
    char name[50];
    char nid[50];
    char mobile[50];
    char fname[50];
    char mname[50];
    char address[50];
    char bgrp[50];
    char age[50];
    char pro[50];
    char login[50];
    char loginpass[50];

} bankinfo;

float balance()
{
    float value;
    FILE *file = fopen("balance.txt", "r");
    if (file != NULL)
    {
        while (!feof(file))
        {
            fscanf(file, "%f", &value);
        }
    }
    else
    {
        printf("Could not open file\n");
    }

    fclose(file);

    return value;
}
void accountOpen()
{
    bankinfo accOpen;
    system("cls");

    printf("                                       CREATE A BANK ACCOUNT                                        \n");
    printf("******************************************************************************************************\n");

    printf("User Name : ");
    scanf("%s", &accOpen.userName);

    printf("Password : ");
    scanf("%s", &accOpen.userPass);

    FILE *nameFile;
    nameFile = fopen("userDATA.txt", "w");
    if (nameFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fprintf(nameFile, accOpen.userName);
        fputs("\n", nameFile);
        fprintf(nameFile, accOpen.userPass);
    }
    fclose(nameFile);

    accountSingupinfo();
}

void accountSingupinfo()
{
    bankinfo in;

    system("cls");

    printf("                                       Give Your Informations                                      \n");
    printf("******************************************************************************************************\n");
    printf("Name : ");
    fflush(stdin);
    gets(&in.name);

    printf("NID : ");
    gets(&in.nid);

    printf("Age : ");
    gets(&in.age);

    printf("Mobile : ");
    gets(&in.mobile);

    printf("Father's Name : ");
    gets(&in.fname);

    printf("Mother's Name : ");
    gets(&in.mname);

    printf("Address : ");
    gets(&in.address);

    printf("Blood Group : ");
    gets(&in.bgrp);

    printf("Profession : ");
    gets(&in.pro);

    FILE *infoFile;
    infoFile = fopen("userinfo.txt", "w");
    if (infoFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fputs("Name : ", infoFile);
        fprintf(infoFile, in.name);
        fputs("\n", infoFile);
        fputs("Age : ", infoFile);
        fprintf(infoFile, in.age);
        fputs("\n", infoFile);
        fputs("Mobile : ", infoFile);
        fprintf(infoFile, in.mobile);
        fputs("\n", infoFile);
        fputs("Father's Name : ", infoFile);
        fprintf(infoFile, in.fname);
        fputs("\n", infoFile);
        fputs("Mother's Name : ", infoFile);
        fprintf(infoFile, in.mname);
        fputs("\n", infoFile);
        fputs("Address : ", infoFile);
        fprintf(infoFile, in.address);
        fputs("\n", infoFile);
        fputs("Blood Group : ", infoFile);
        fprintf(infoFile, in.bgrp);
        fputs("\n", infoFile);
        fputs("Profession : ", infoFile);
        fprintf(infoFile, in.pro);
        fputs("\n", infoFile);
    }
    fclose(infoFile);

    printf("PLEASE WAIT....\nYOUR DATA IS PROCESSING....");
    for (int i = 0; i < 200000000; i++)
    {
        i++;
        i--;
    }
    printf("\n\nAccount Created Successfully !");
    printf("\n\nPress Enter to Sing In into Your Account ");
    getch();
    logIn();
}

void logIn()
{
    char pass;
    int i = 0;
    system("cls");
    bankinfo singIn;

    printf("                                            SIGN IN                                              \n");
    printf("******************************************************************************************************\n");
    printf("User Name : ");
    scanf("%s", &singIn.login);
    printf("Password : ");
    while (1)
    {
        pass = getch();
        if (pass == '\r')
        {
            break;
        }
        else if (pass == '\b')
        {
            printf("\b \b");
            i--;
        }
        else if (i < sizeof(singIn.loginpass))
        {
            singIn.loginpass[i] = pass;
            i++;
            putchar('*');
        }
    }
    singIn.loginpass[i] = '\0';

    FILE *logFile;
    logFile = fopen("userDATA.txt", "r");
    if (logFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    fscanf(logFile, "%s", &singIn.userName);
    fscanf(logFile, "%s", &singIn.userPass);

    if (strcmp(singIn.login, singIn.userName) == 0 && strcmp(singIn.loginpass, singIn.userPass) == 0)
    {
        printf("\nPLEASE WAIT....\nYOUR DATA IS PROCESSING....");
        for (int i = 0; i < 200000000; i++)
        {
            i++;
            i--;
        }
        printf("SING IN SUCCESSFULLY !\n");
    }
    else
    {
        printf("\nSORRY !\nWRONG INPUT !\n");
        printf("Press Enter to Re-Try \n");
        getch();
        logIn();
    }
    option();
}

void option()
{

    system("cls");
    printf("                             WHAT YOU TO DO ?                             \n");
    printf("-----------------------------------------------------------------------------\n");
    printf("1.Deposit \n");
    printf("2.Withdrawal \n");
    printf("3.Check Balance \n");
    printf("4.Check Transaction \n");
    printf("5.Check Information \n");
    printf("6.Main Menu\n");
    printf("0.Exit\n");

    int Singinchoice;
    scanf("%d", &Singinchoice);

    switch (Singinchoice)
    {
    case 1:
        deposit();
        break;
    case 2:
        withdrawal();
        break;
    case 3:
        checkBalance();
        break;
    case 4:
        transaction();
        break;
    case 5:
        accountinfo();
        break;
    case 6:
        main();
        break;
    case 0:
        exit(0);
        break;
    default:
        getch();
        printf("Wrong Choice !\n");
        printf("Press Enter to Re-Try \n");
        break;
    }
    getch();
    option();
}

void deposit()
{
    system("cls");
    money mmy;

    printf("How Much You Want to Deposit ?\n");
    scanf("%f", &mmy.addBalance);

    NewFunction();
    mainBalance = mainBalance + mmy.addBalance;

    FILE *balanceFile;
    balanceFile = fopen("balance.txt", "w");
    if (balanceFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fprintf(balanceFile, "%.3f", mainBalance);
    }
    fclose(balanceFile);

    time_t t = time(NULL);
    struct tm *timeinfo = localtime(&t);

    FILE *transFile;
    transFile = fopen("transtion.txt", "a");
    if (transFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fprintf(transFile, "%sDeposited : %.3f $\n\n", asctime(timeinfo), mmy.addBalance);
    }
    fclose(transFile);

    printf("Money Deposit Successfully !\n");
    printf("\nPress Enter to Go to Option Menu\n");
    getch();
    fflush(stdin);
    option();
}

void NewFunction()
{
    mainBalance = balance();
}

void withdrawal()
{
    system("cls");
    money mmy;

    printf("How Much You Want to Withdrawal ?\n");
    scanf("%f", &mmy.wdrwBalance);
    mainBalance = balance();
    mainBalance = mainBalance - mmy.wdrwBalance;

    if (mmy.wdrwBalance > mainBalance)
    {
        printf("Your Balance is Low !\n");
        printf("Please Deposit Money !\n");
        printf("\nPress Enter to Go to Option Menu\n");
        getch();
        option();
    }

    FILE *balanceFile;
    balanceFile = fopen("balance.txt", "w");
    if (balanceFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fprintf(balanceFile, "%.3f", mainBalance);
    }
    fclose(balanceFile);

    time_t t = time(NULL);
    struct tm *timeinfo = localtime(&t);

    FILE *transFile;
    transFile = fopen("transtion.txt", "a");
    if (transFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fprintf(transFile, "%sWithdrawal : %.3f $\n\n", asctime(timeinfo), mmy.wdrwBalance);
    }
    fclose(transFile);

    printf("Money Withdrawal Successfully !\n");
    printf("\nPress Enter to Go to Option Menu\n");
    getch();
    option();
}

void checkBalance()
{
    int r;
    system("cls");
    FILE *balanceFile;
    balanceFile = fopen("balance.txt", "r");
    if (balanceFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        printf("Main Balance : ");
        while (!feof(balanceFile))
        {
            r = fgetc(balanceFile);
            printf("%c", r);
        }

        printf("$\n");
        printf("\nPress Enter to Go to Option Menu\n");
        getch();
        option();
    }
    fclose(balanceFile);
}

void accountinfo()
{
    char ch;
    system("cls");
    printf("                          Your Informations                            \n");
    printf("***********************************************************************\n");

    FILE *readinfo;
    readinfo = fopen("userinfo.txt", "r");

    if (readinfo == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        while (!feof(readinfo))
        {
            ch = fgetc(readinfo);
            printf("%c", ch);
        }
    }

    fclose(readinfo);
    printf("\nPress Enter to Go to Option Menu\n");
    getch();
    option();
}
void transaction()
{
    system("cls");
    char t;
    FILE *readtrans;
    readtrans = fopen("transtion.txt", "r");
    if (readtrans == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        while (!feof(readtrans))
        {
            t = fgetc(readtrans);
            printf("%c", t);
        }
    }
    fclose(readtrans);
    printf("\nPress Enter to Go to Option Menu\n");
    getch();
    option();
}

int main()
{
    system("cls");
    printf("                        BANK ACCOUNT SYSTEM                          \n");
    printf("***********************************************************************\n");
    printf("                      1. SIGN IN \n");
    printf("                      2. CREATE A BANK ACCOUNT\n");
    printf("                      3. EXIT\n");
    printf("\n\n\n");
    printf("WHAT YOU WANT TO DO ? ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        logIn();
    }
    else if (choice == 2)
    {
        accountOpen();
    }

    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        printf("INVALID CHOICE");
    }

    return 0;
}
