#include <stdio.h>
#include <string.h>
void finalAnswer(int array[], int len);

void finalAnswer(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (array[i] != 0 && array[i] == array[i + 1])
        {
            array[i] = array[i] * 2;
            array[i + 1] = 0;
        }
    }
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] != 0)
        {
            array[j] = array[i];
            j++;
        }
    }
    while (j < len )
    {
        array[j] = 0;
        j++;
    }
    printf("\nAnswer Array :");
    for (int i = 0; i < len; i++)
    {
        printf(" %d", array[i]);
    }
}

int main()
{
    int arry[] = {0, 3, 3, 3, 0, 0, 7, 7, 0, 9, 5, 7, 7, 4};
    int len = sizeof(arry) / sizeof(arry[0]);

    printf("Question Array :");
    for (int i = 0; i < len; i++)
    {
        printf(" %d", arry[i]);
    }

    finalAnswer(arry, len);

    return 0;
}
