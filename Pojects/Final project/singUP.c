#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void fileWrite(char *userName, char *userPass)
{
    FILE *userfile;
    userfile = fopen("user.txt", "w");
    if (userfile == NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        fputs(userName, userfile);
    }

    FILE *passfile;
    passfile = fopen("pass.txt", "w");
    if (passfile == NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        fputs(userPass, passfile);
    }

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

    userName = (char *)malloc(50 * sizeof(char));
    userPass = (char *)malloc(20 * sizeof(char));

    InfoSingup st;

    st.name = (char *)malloc(50 * sizeof(char));
    st.id = (char *)malloc(50 * sizeof(int));
    st.mobile = (char *)malloc(50 * sizeof(int));
    st.job = (char *)malloc(1000 * sizeof(char));

    if (st.name==NULL || st.id==NULL || st.mobile==NULL ||st.job==NULL)
    {
        printf("Memory Allocation Failed !\n");
    }


    printf("        Sing Up         \n");
    printf("------------------------\n");
    printf("User Name : ");
    gets(userName);
    printf("Password : ");
    gets(userPass);

    fileWrite(userName, userPass);

    printf("Sing Up Successful !\n");
    printf("\n\n    Give Your Informations     \n");
    printf("------------------------------\n");

    printf("Name : ");
    gets(st.name);
    filename(st.name);


    printf("ID : ");
    gets(st.id);
    fileid(st.id);


    printf("Mobile Number : ");
    gets(st.mobile);
    filemobile(st.mobile);

    printf("Job Information : ");
    gets(st.job);
    filejob(st.job);



    free(st.name);
    free(st.id);
    free(st.mobile);
    free(st.job);
    free(userName);
    free(userPass);

    printf("\n\nYou Account Created Successfully \n");

    getch();
    return 0;
}
