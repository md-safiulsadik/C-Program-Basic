#include<stdio.h>
int main()
{
    char st2[]="MD SAFUL KAFI SADIK"
               ,strg[6]= {'S','A','D','I','K','\0'};

    printf("String = %s",strg);
    printf("\n");

    printf("\nString 2 = %s",st2);
    printf("\n");


//New String for Scan
    char st3[50];

    printf("\nEnter Your Name :");
    gets(st3);

    printf("Your String = %s",st3);
    printf("\n\n");


//New String
    char st4[]="\nSADIK";
    int i,count=-1;

    int len = strlen(st4); // strlen() is a variable
    printf("Length = %d",len);
    while(st4[i]!='\0')
    {
        printf("%c\n",st4[i]);
        i++;
    }

//New And last String of thing program
    printf("\n");
    char st5[99];
    printf("\nInput the Values of String :");
    gets(st5);
    int lenth=0;
    int a;

    while(st5[a]!='\0')
    {
        printf("%c\n",st5[a]);
        a++;
        lenth++;
    }
    printf("Number Of Input Value =%d",lenth);



    getch();
    return 0;
}
