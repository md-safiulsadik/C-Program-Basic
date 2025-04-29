#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

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
    InfoSingup st;

    st.name = (char *)malloc(30 * sizeof(char));
    st.id = (char *)malloc(12 * sizeof(int));
    st.mobile = (char *)malloc(11 * sizeof(int));
    st.job = (char *)malloc(60 * sizeof(char));

    if (st.name==NULL || st.id==NULL || st.mobile==NULL ||st.job==NULL)
    {
        printf("Memory Allocation Failed !\n");
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


    return 0;
}

