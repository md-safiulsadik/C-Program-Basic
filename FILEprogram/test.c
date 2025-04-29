#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *ptrupUser = NULL, *ptrupPass = NULL, *ptrinUser = NULL, *ptrinPass = NULL;

    ptrupUser = (char *)malloc(20 * sizeof(char));
    ptrupPass = (char *)malloc(13 * sizeof(char));
    ptrinUser = (char *)malloc(20 * sizeof(char));
    ptrinPass = (char *)malloc(13 * sizeof(char));

    FILE *file;
    file = fopen("user.txt","r");
    if(file == NULL)
    {
        printf("Something Went Really Wrong\n");
    }
    else
    {
        fgets(ptrupUser,20,file);
        fgets(ptrupPass,13,file);
    }
label:
    printf("       Sing In       \n");
    printf("---------------------\n");
    printf("User Name\t:");
    gets(ptrinUser);

    printf("Password\t:");
    gets(ptrinPass);


    int checkUser = strcmp(ptrinUser,ptrupUser);
    int checkPass =  strcmp(ptrinPass,ptrupPass);


    printf("%s",ptrupUser);
    printf("%s",ptrupPass);
    printf("%d\n",checkUser);
    printf("%d\n",checkPass);


    getch();
    return 0;
}
