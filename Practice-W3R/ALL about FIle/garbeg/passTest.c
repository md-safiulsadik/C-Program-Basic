#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void printPass(char *pass, int length)
{
    char ch;
    int i = 0;

    while(1)
    {

        ch = getch();

        if (ch == '\r' || i == length)

        {
            break;

        }
        else if(ch=='\b')
        {
            i--;
            printf("\b \b \b");
        }
        else if (i < length )
        {
            pass[i] = ch;
            i++;
            putchar('*');

        }
    }
    pass[i] = '\0';
    printf("\n\n");
}


int main()
{
    char str[5];

    printf("Enter  Password\n");

    printPass(str, sizeof(str));

    printf("Your password is:%s\n",str);

    return 0;
}
