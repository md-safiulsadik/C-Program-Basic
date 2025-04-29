//strcat() is a variable
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Connect String with 'strcat' \n");
    printf("Input String 1 :");
    gets(str1);
    printf("Input String 2 :");
    gets(str2);

    strcat(str1,str2); // str1 + srt2 = strcat() does

    printf("%s",str1);



// Connect with LOOP
    printf("\nConnect String with LOOP \n");

    char str3[100],str4[100];
    printf("Input String 1 :");
    gets(str3);
    printf("Input String 2 :");
    gets(str4);

    int i=0,j=0,k=0,l; // i for LOOP and k for counting value

    while(str3[i]!='\0')
    {
        i++;
        k++;
    } // counting the length String 3


    while(str4[j]!='\0')
    {
        str3[k+j]=str4[j];  //Last of string 3 + first of string 4
        j++; // if k=4 the j=0 so (k+j)=(4+0)=4 than (4+1)=5 (this way it works)
    }

    printf("%s",str3); // the value store at string 3 (first string)




    getch();
    return 0;
}
