#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char fileRead(char *userName, char *userPass)
{
    FILE *userfile;
    userfile = fopen("user.txt", "r");
    if (userfile == NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        fgets(userName, 20, userfile);
    }

    FILE *passfile;
    passfile = fopen("pass.txt", "r");
    if (passfile == NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        fgets(userPass, 20, passfile);
    }

    return userName;
    return userPass;

    fclose(userfile);
    fclose(passfile);
}
void filename(char *name)
{
    FILE *infoFile;
    infoFile = fopen("infoUP.txt","w");
    if (infoFile==NULL)
    {
        printf("Something Went Wrong !\n");
    }
    else
    {
        fputs("Name : ",infoFile);
        fputs(name,infoFile);
        fputs("\n",infoFile);
    }

    fclose(infoFile);
}


void fileid(char *id)
{
    FILE *infoFile;
    infoFile = fopen("infoUP.txt","a");
    if (infoFile==NULL)
    {
        printf("Something Went Wrong !\n");
    }
    else
    {
        fputs("ID : ",infoFile);
        fputs(id,infoFile);
        fputs("\n",infoFile);
    }
    fclose(infoFile);
}


void filemobile(char *mobile)
{
    FILE *infoFile;
    infoFile = fopen("infoUP.txt","a");
    if (infoFile==NULL)
    {
        printf("Something Went Wrong !\n");
    }
    else
    {
        fputs("Mobile : ",infoFile);
        fputs(mobile,infoFile);
        fputs("\n",infoFile);
    }
    fclose(infoFile);
}


void filejob(char *job)
{
    FILE *infoFile;
    infoFile = fopen("infoUP.txt","a");
    if (infoFile==NULL)
    {
        printf("Something Went Wrong !\n");
    }
    else
    {
        fputs("Job Information : ",infoFile);
        fputs(job,infoFile);
        fputs("\n",infoFile);

    }
    fclose(infoFile);
}



typedef struct InfoSingup
{
    char *name;
    char *id;
    char *mobile;
    char *job;
} InfoSingup;


int main()
{
    char ch;
    int i = 0;
    char *userName;
    char *userPass;
    char *loginName;
    char *loginPass;

    userName = (char *)malloc(20 * sizeof(char));
    userPass = (char *)malloc(20 * sizeof(char));
    loginName = (char *)malloc(20 * sizeof(char));
    loginPass = (char *)malloc(20 * sizeof(char));


    InfoSingup st;

    st.name = (char *)malloc(30 * sizeof(char));
    st.id = (char *)malloc(12 * sizeof(int));
    st.mobile = (char *)malloc(11 * sizeof(int));
    st.job = (char *)malloc(60 * sizeof(char));

    if (st.name==NULL || st.id==NULL || st.mobile==NULL ||st.job==NULL)
    {
        printf("Memory Allocation Failed !\n");
    }


start:

    printf("        Sing In         \n");
    printf("------------------------\n");
    printf("User Name : ");
    gets(loginName);
    printf("Password : ");
    while (1) //this hide the pass
    {
        ch = getch();
        if (ch == '\r' || i == 13)
        {

            break;
        }
        else if (ch == '\b')
        {
            printf("\b \b");
        }
        else if (i < 13)
        {
            loginPass[i] = ch;
            i++;
            putchar('*');
        }
    }
    loginPass[i] = '\0';
    printf("\n");

    fileRead(userName, userPass);

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

    printf("Name : ");
    gets(st.name);
    filename(st.name);
    printf("Name Successful ! \n");


    printf("ID : ");
    gets(st.id);
    fileid(st.id);
    printf("Name Successful ! \n");


    printf("Mobile Number : ");
    gets(st.mobile);
    filemobile(st.mobile);
    printf("Name Successful ! \n");

    printf("Job Information : ");
    gets(st.job);
    filejob(st.job);
    printf("Name Successful ! \n");


    free(st.name);
    free(st.id);
    free(st.mobile);
    free(st.job);
    free(userName);
    free(userPass);

    getch();
    return 0;
}
