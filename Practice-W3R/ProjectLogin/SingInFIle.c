#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptrupUser, *ptrupPass, *ptrinUser, *ptrinPass;

    ptrupUser = (char *)malloc(20 * sizeof(char));
    ptrupPass = (char *)malloc(13 * sizeof(char));
    ptrinUser = (char *)malloc(20 * sizeof(char));
    ptrinPass = (char *)malloc(13 * sizeof(char));

    FILE *UsersINfile;
    UsersINfile = fopen("user.txt", "r");
    if (UsersINfile == NULL)
    {
        printf("Something Went Wrong\n");
        return 0;
    }
    else
    {
        fgets(ptrupUser, 20 , UsersINfile);
        fgets(ptrupPass, 13 , UsersINfile);
    }
    printf("%s",ptrupUser);
    printf("%s",ptrupPass);
    printf("\n\n");


    printf("       Sing In       \n");
    printf("---------------------\n");
    printf("User Name\t:");
    gets(ptrinUser);

    printf("Password\t:");
    gets(ptrinPass);


    int checkUser = strcmp(ptrinUser, ptrupUser);
    int checkPass = strcmp(ptrinPass, ptrupPass);

    printf("%d\n",checkUser);
    printf("%d\n",checkPass);

    if (checkUser == 0 && checkPass == 0)
    {
        printf("Login Succecssful !");
    }
    else
    {
        printf("NOT Good");
    }

    return 0;
}
