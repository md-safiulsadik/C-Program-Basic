#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char matchFile(char *userName, char *userPass)
{
    FILE *userfile;
    userfile = fopen("user.txt", "r");
    if (userfile == NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        fgets(userName, 50 , userfile);
    }

    FILE *passfile;
    passfile = fopen("pass.txt", "r");
    if (passfile == NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        fgets(userPass, 20 , passfile);
    }

    return userName;
    return userPass;

    fclose(userfile);
    fclose(passfile);
}

void readInfo(char *ch)
{
    FILE *infofile;
    infofile = fopen("infoUP.txt","r");
    if(infofile==NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        printf("\n\n        Your Informations           \n");
        printf("----------------------------------\n");

        while(!feof(infofile))
        {
            ch = getc(infofile);
            printf("%c",ch);
        }
    }

    fclose(infofile);
}


int main()
{
    char ch;
    int i = 0;
    char *userName;
    char *userPass;
    char *loginName;
    char *loginPass;
    char *readstr;
    userName = (char *)malloc(50 * sizeof(char));
    userPass = (char *)malloc(20 * sizeof(char));
    loginName = (char *)malloc(50 * sizeof(char));
    loginPass = (char *)malloc(20 * sizeof(char));

start:
    printf("        Sing In         \n");
    printf("------------------------\n");
    printf("User Name : ");
    gets(loginName);
    printf("Password : ");
    while (1) //this hide the pass
    {
        ch = getch();
        if (ch == '\r' || i == 20)
        {

            break;
        }
        else if (ch == '\b')
        {
            printf("\b \b");
        }
        else if (i < 20)
        {
            loginPass[i] = ch;
            i++;
            putchar('*');
        }
    }
    loginPass[i] = '\0';
    printf("\n");

    matchFile(userName, userPass);

    int checkuserName = strcmp(loginName, userName);
    int checkuserPass = strcmp(loginPass, userPass);

    if (checkuserName == 0)
    {
        printf("Log In Successful !\n");
    }
    else
    {
        printf("Wrong Input !\n\n");
        goto start;
    }

    readInfo(readstr);

    free(userName);
    free(userPass);
    free(loginName);
    free(loginPass);

    getch();
    return 0;
}
