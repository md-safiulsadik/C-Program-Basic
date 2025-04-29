#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    fp = fopen("123.pdf", "rb+" );
    if(fp == NULL)
    {
        printf("Error !");
    }
    else
    {
        printf("File Open !");
        fclose(fp);
        remove("123.pdf");
    }
    getch();
    return 0;
}
