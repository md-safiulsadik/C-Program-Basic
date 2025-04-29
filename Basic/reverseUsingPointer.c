#include <stdio.h>
int main()
{
    char str[50];
    char *ptr = str;
    int i, j;

    printf("This Program Can Revers a String with Pointer\n");
    printf("---------------------------------------------\n");
    printf("Inpurt a String : \n");
    gets(str);

    int count = strlen(str);

    printf("Revers String\n");
    printf("-------------\n");
    for (i = count, j = 1; i <= 0, j <= count; i++, j++)
    {
        printf("%c", *(str + count - j));
    }


    printf("\n\nMemory Values of String\n");
    printf("%p\n", str);


    printf("\n\nMemory Vaule of The Revers Pointer\n");
    printf("%p\n", ptr);

    printf("\n\nSize of Pointer = %d bytes\n",sizeof(ptr));
    printf("\nSize of String = %d bytes\n",sizeof(str));

    return 0;
}


