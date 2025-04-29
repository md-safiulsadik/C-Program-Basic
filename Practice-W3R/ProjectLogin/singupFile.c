#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptrupUser = NULL, *ptrupPass = NULL, *ptrinUser = NULL, *ptrinPass = NULL;

    ptrupUser = (char *)malloc(20 * sizeof(char));
    ptrupPass = (char *)malloc(13 * sizeof(char));

    printf("       Sing UP       \n");
    printf("---------------------\n");
    printf("User Name\t:");
    gets(ptrupUser);

    printf("Password\t:");
    gets(ptrupPass);

    FILE *UsersUPfile;
    UsersUPfile = fopen("user.txt", "w");
    if (UsersUPfile == NULL)
    {
        printf("Something Went Wrong\n");
    }
    else
    {
        fputs(ptrupUser, UsersUPfile);
        fputs("\n", UsersUPfile);
        fputs(ptrupPass, UsersUPfile);
        printf("Sing Up Successful\n");
    }

    return 0;
}


