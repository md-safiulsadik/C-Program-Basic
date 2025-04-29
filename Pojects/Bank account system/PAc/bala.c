#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

#define MAX_NAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50
#define MAX_BALANCE_LENGTH 10

typedef struct
{
    char name[MAX_NAME_LENGTH];
    char nid[MAX_NAME_LENGTH];
    char age[MAX_NAME_LENGTH];
    char mobile[MAX_NAME_LENGTH];
    char fname[MAX_NAME_LENGTH];
    char mname[MAX_NAME_LENGTH];
    char address[MAX_NAME_LENGTH];
    char bgrp[MAX_NAME_LENGTH];
    char pro[MAX_NAME_LENGTH];
} UserInfo;

typedef struct
{
    char userName[MAX_NAME_LENGTH];
    char userPass[MAX_PASSWORD_LENGTH];
    UserInfo info;
    float balance;
} BankAccount;

void clearScreen()
{
    system("cls");
}

void printHeader(const char *title)
{
    clearScreen();
    printf(" %s \n", title);
    printf("***********************************************************************\n");
}

void printMenu(const char *title, const char *options[], int numOptions)
{
    printHeader(title);
    for (int i = 0; i < numOptions; i++)
    {
        printf(" %d. %s \n", i + 1, options[i]);
    }
    printf("\n\n\n");
}

void printUserInfo(const UserInfo *info)
{
    printf(" Name: %s \n", info->name);
    printf(" NID: %s \n", info->nid);
    printf(" Age: %s \n", info->age);
    printf(" Mobile: %s \n", info->mobile);
    printf(" Father's Name: %s \n", info->fname);
    printf(" Mother's Name: %s \n", info->mname);
    printf(" Address: %s \n", info->address);
    printf(" Blood Group: %s \n", info->bgrp);
    printf(" Profession: %s \n", info->pro);
    getch();
}

void printBankAccount(const BankAccount *account)
{
    printf(" User Name: %s \n", account->userName);
    getch();
    printf(" Balance: %.2f \n", account->balance);
    getch();
}

void createBankAccount(BankAccount *account)
{
    printHeader("CREATE A BANK ACCOUNT");
    printf(" User Name: ");
    fflush(stdin);
    scanf("%s", account->userName);
    printf(" Password: ");
    fflush(stdin);
    scanf("%s", account->userPass);
    printf(" Name: ");
    fflush(stdin);
    scanf("%s", account->info.name);
    printf(" NID: ");
    fflush(stdin);
    scanf("%s", account->info.nid);
    printf(" Age: ");
    fflush(stdin);
    scanf("%s", account->info.age);
    printf(" Mobile: ");
    fflush(stdin);
    scanf("%s", account->info.mobile);
    printf(" Father's Name: ");
    fflush(stdin);
    scanf("%s", account->info.fname);
    printf(" Mother's Name: ");
    fflush(stdin);
    scanf("%s", account->info.mname);
    printf(" Address: ");
    fflush(stdin);
    scanf("%s", account->info.address);
    printf(" Blood Group: ");
    fflush(stdin);
    scanf("%s", account->info.bgrp);
    printf(" Profession: ");
    fflush(stdin);
    scanf("%s", account->info.pro);
    fflush(stdin);
    account->balance = 0.0;
    fflush(stdin);
}

void login(BankAccount *account)
{
    printHeader("LOGIN");
    printf(" User Name: ");
    scanf("%s", account->userName);
    printf(" Password: ");
    scanf("%s", account->userPass);
    // TO DO: verify user name and password
}

void deposit(BankAccount *account)
{
    printHeader("DEPOSIT");
    printf(" Amount: ");
    float amount;
    scanf("%f", &amount);
    account->balance += amount;
    printf(" Balance: %.2f \n", account->balance);
}

void withdrawal(BankAccount *account)
{
    printHeader("WITHDRAWAL");
    printf(" Amount: ");
    float amount;
    scanf("%f", &amount);
    if (amount > account->balance)
    {
        printf(" Insufficient balance \n");
    }
    else
    {
        account->balance -= amount;
        printf(" Balance: %.2f \n", account->balance);
    }
}

void displayMenu(BankAccount *account)
{
    const char *options[] = {"Deposit", "Withdrawal", "Display Balance", "Display User Info", "Exit"};
    printMenu("MAIN MENU", options, 5);
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deposit(account);
        break;
    case 2:
        withdrawal(account);
        break;
    case 3:
        printBankAccount(account);
        break;
    case 4:
        printUserInfo(&account->info);
        break;
    case 5:
        exit(0);
        break;
    default:
        printf(" Invalid choice \n");
    }
}

int main()
{
    BankAccount account;
    createBankAccount(&account);
    while (1)
    {
        displayMenu(&account);
    }
    return 0;
}