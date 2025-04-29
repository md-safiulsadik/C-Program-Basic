//for counting number,digit,capital latter,small latter & word
#include<stdio.h>
int main()
{
    char ch, str[100];
    int others,number,digit,capitalLatter,smallLatter,word;
    others=word=number=digit=capitalLatter=smallLatter=0;
    int i=0,j,k;
    printf("Enter the String : ");
    gets(str);

    while((ch=str[i])!='\0')
    {
        if(ch>='a' && ch<='z')
            smallLatter++;
        else if(ch>='A' && ch<='Z')
            capitalLatter++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            others++;

        i++;
    }
    word++;


    printf("\nNumber Of Capital Latter : %d\n",capitalLatter);
    printf("Number Of Small Latter : %d\n",smallLatter);
    printf("Number Of Digit : %d\n",digit);
    printf("Number Of Word : %d\n",word);
    printf("Number Of Others : %d\n",others);
    printf("\n");


    getch();
    return 0;
}
