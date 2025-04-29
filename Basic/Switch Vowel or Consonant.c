#include<stdio.h>
int main()
{
    char N;
    printf("Enter a Latter : ");
    scanf("%c",&N);
    switch(N)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");

        getch();
        return 0;


    }
}
