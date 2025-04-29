#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptrupUser = NULL, *ptrupPass = NULL, *ptrinUser = NULL, *ptrinPass = NULL;

    ptrupUser = (char *)malloc(20 * sizeof(char));
    ptrupPass = (char *)malloc(13 * sizeof(char));
    ptrinUser = (char *)malloc(20 * sizeof(char));
    ptrinPass = (char *)malloc(13 * sizeof(char));

    printf("       Sing UP       \n");
    printf("---------------------\n");
    printf("User Name\t:");
    gets(ptrupUser);

    printf("Password\t:");
    gets(ptrupPass);
label:
    printf("       Sing In       \n");
    printf("---------------------\n");
    printf("User Name\t:");
    gets(ptrinUser);
    printf("Password\t:");
    gets(ptrinPass);

    int checkUser = strcmp(ptrupUser, ptrinUser);
    int checkPass = strcmp(ptrupPass, ptrinPass);

    if (checkUser == 0 && checkUser == 0)
    {
        printf("Login Succecssfull\n");
    }
    else
    {
        printf("Something Went Worng\nCheck Your User Name and Password\n");
        goto label;
    }

    return 0;
}
