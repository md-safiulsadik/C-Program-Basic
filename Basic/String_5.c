// Number of Vowel,Consonant,Digit,Word & Others counting program
#include<stdio.h>
int main()
{
    while(1)
    {
        char ch, str[100];
        int i,j,k;
        int Vowel,Consonant,Digit,Word,Others;
        printf("Enter a String :");
        gets(str);

        i=Vowel=Consonant=Digit=Word=Others=0;

        while((ch=str[i])!='\0')
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                Vowel++;
            else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
                Consonant++;
            else if(ch>='0' && ch<='9')
                Digit++;
            else if(ch==' ')
                Word++;
            else
                Others++;

            i++;

        }
        Word++;
        printf("\nNumber of Vowel = %d\n",Vowel);
        printf("Number of Consonant = %d\n",Consonant);
        printf("Number of Word = %d\n",Word);
        printf("Number of Digit = %d\n",Digit);
        printf("Others = %d\n",Others);
        printf("\n");



    }
    getch();
    return 0;
}
