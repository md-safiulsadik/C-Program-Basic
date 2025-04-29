#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *userName;
    char *userPass;
    char *loginName;
    char *loginPass;

    loginPass = (char *)malloc(20 * sizeof(char));

    FILE *file;
    file = fopen("pass.txt","r");
    if(file == NULL){
        printf("Something Went Wrong\n");
    }
    else
    {
        fgets(loginPass,20,file);
        printf("%s\n",loginPass);
    }



    getch();
    return 0;
}

