#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void accountOpen();
void logIn();
void accountinfo();


typedef struct AllElements
{
    char name[50];
    char nid[50];
    char mobile[50];
    char fname[50];
    char mname[50];
    char address[50];
    char bgrp[50];
    char age[50];
    char pro[50];

} bankinfo;

void accountOpen()
{
    system("cls");
    char userName[50];
    char userPass[20];

    printf("                        CREATE A BANK ACCOUNT                          \n");
    printf("***********************************************************************\n");

    printf("User Name : ");
    scanf("%s",&userName);

    printf("Password : ");
    scanf("%s",&userPass);

    FILE *nameFile;
    nameFile = fopen("userDATA.txt","w");
    if(nameFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fprintf(nameFile,userName);
        fputs("\n",nameFile);
        fprintf(nameFile,userPass);
    }
    fclose(nameFile);

    accountinfo();
}

void accountinfo()
{
    bankinfo in;

    system("cls");

    printf("                       Your Informations                         \n");
    printf("***********************************************************************\n");
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
    infoFile = fopen("userinfo.txt","w");
    if(infoFile == NULL)
    {
        printf("Something Went WRONG !\n");
    }
    else
    {
        fputs("Name : ",infoFile);
        fprintf(infoFile,in.name);
        fputs("\n",infoFile);
        fputs("Age : ",infoFile);
        fprintf(infoFile,in.age);
        fputs("\n",infoFile);
        fputs("Mobile : ",infoFile);
        fprintf(infoFile,in.mobile);
        fputs("\n",infoFile);
        fputs("Father's Name : ",infoFile);
        fprintf(infoFile,in.fname);
        fputs("\n",infoFile);
        fputs("Mother's Name : ",infoFile);
        fprintf(infoFile,in.mname);
        fputs("\n",infoFile);
        fputs("Address : ",infoFile);
        fprintf(infoFile,in.address);
        fputs("\n",infoFile);
        fputs("Blood Group : ",infoFile);
        fprintf(infoFile,in.bgrp);
        fputs("\n",infoFile);
        fputs("Profession : ",infoFile);
        fprintf(infoFile,in.pro);
        fputs("\n",infoFile);


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
    system("cls");
    printf("                             SIGN IN                                 \n");
    printf("***********************************************************************\n");
    printf("")


}

int main()
{
    printf("                        BANK ACCOUNT SYSTEM                          \n");
    printf("***********************************************************************\n");
    printf("                      1. CREATE A BANK ACCOUNT\n");
    printf("                      2. ALREADY A USER? SIGN IN\n");
    printf("                      3. EXIT\n");
    printf("\n\n\n");
    printf("WHAT YOU WANT TO DO ? ");
    int choice;
    scanf("%d",&choice);

    if (choice == 1)
    {
        accountOpen();
    }
    else if (choice == 2)
    {
        logIn();
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
