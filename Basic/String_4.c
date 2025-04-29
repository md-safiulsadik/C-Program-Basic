//putting a reveres string in another string
#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    int i=0,j,k=0;
    printf("Enter String Value :");
    gets(str1);

    strcpy(str2,str1);

    strrev(str1);
    printf("\nString :%s\n",str2);
    printf("\nRevers String :%s\n",str1);

//palindrome or not
     printf("\n");
     int d;
      d = strcmp(str1,str2);
     if(d==0)
     {
         printf("Palindrome :)");
     }
     else
     {
         printf("Not Palindrome :(");
     }





    getch();
    return 0;
}
