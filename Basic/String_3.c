// Sting Conpare
// strcmp() is variable
//it compare a return :0
#include<stdio.h>
int main()
{

    char str1[10];
    char str2[10];
    char revstr[30];

    printf("Input two Strings :\n");
    gets(str1);
    gets(str2);


//String Compare
    int d = strcmp(str1,str2);

    if(d==0)
        printf("Strings are Same ");
        else
         printf("Strings are Not Same ");
    printf("\n\n");


 //Revers function is [ STRREV() ]
    strrev(str1);
    printf("First String Revers = %s",str1);
    strrev(str2);
    printf("\n\nSecond String Revers = %s\n\n",str2);

/**
Revers with LOOP
**/

    char str3[30];
    printf("\nInput two Strings :\n");
    gets(str3);
    int j,i=0,len=0;

    while(str3[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0, j<=len ;i--,j++)
    {
        revstr[j] = str3[i];
    }

    printf
    ("Revers String : %s\n",revstr);



    getch();
    return 0;
}
