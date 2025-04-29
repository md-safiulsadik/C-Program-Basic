#include <stdio.h>
#include <stdlib.h>
struct stu
{
    char name[50];
    char pass[20];
}stu;
int main()
{

      printf("\t\t\tSing UP \n\n");
      printf("User Name : ");
      gets(stu.name);
      printf("Password : ");
      gets(stu.pass);

    FILE *singInFile ;
    //singInFile = fopen("login.txt","rb+");
     singInFile = fopen("login.txt","wb+");

    if(singInFile == NULL)
    {
        printf("Error !");
        getch();
        exit(1);
    }
    else
    {
         fwrite(&stu,sizeof(stu),1,singInFile);

       // while(fread(&stu,sizeof(stu),1,singInFile) == 1)
      //  {
       //     printf("%s\t%s",stu.name,stu.pass);
       // }

        fclose(singInFile);
        printf("\nOperation Successful..! ");
    }
    return 0;
}
