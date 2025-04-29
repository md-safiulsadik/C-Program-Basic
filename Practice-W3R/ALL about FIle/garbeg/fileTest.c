#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void fileTest(char *ptr)
{
    FILE *file;
    file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("Something Went Wrong !");
    }
    else
    {
        fprintf(file, ptr);
    }
}

int main()
{
    char pass[20];
    char ch;
    char *ptr = NULL;
    ptr = (char *)malloc(100 * sizeof(char));

    printf("Write Something \n");

    int i = 0;

    ch = getch();
    if (ch = 13)
    {
        pass[i] = '\0';
    }
    else
    {
        pass[i++] = ch;
        printf("*");
    }

    fileTest(ptr);

    return 0;
}
