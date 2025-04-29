//fputs() input a latter a time in a file
#include<stdio.h>
int main()
{
    FILE *file;
    char str[999999];
    printf("With Something in the File \n");
    printf("---------------------------\n");

     gets(str);

        int lenght = strlen(str);

        file = fopen("file123123.c","w");

        if(file==NULL)
        {
            printf("Something Went Wrong !\n");
        }
        else
        {

            for(size_t i=0; i<lenght; i++)
            {
                fputc(str[i],file);

            }   fputs("\n",file);

            printf("Text input Successful \n");
            fclose(file);
        }

        while(str[0]!='\0'){
             gets(str);
        lenght = strlen(str);

        file = fopen("file123123.c","a");

        if(file==NULL)
        {
            printf("Something Went Wrong !\n");
        }
        else
        {

            for(size_t i=0; i<lenght; i++)
            {
                fputc(str[i],file);

            }   fputs("\n",file);

            printf("Text input Successful \n");
            fclose(file);
        }
        }
    return 0;
}

