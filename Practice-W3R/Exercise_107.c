#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arry1[] = {10, 20, 30, 40, 50, 60, 70};
    int arry2[] = {60, 70, 80, 90, 100, 110, 120};
    int len1 = sizeof(arry1) / sizeof(arry1[0]);
    int len2 = sizeof(arry2) / sizeof(arry2[0]);

    int *arry3 = malloc((len1 + len2) * sizeof(int));

    int j = 0;
    for (int i = 0; i < len1; i++)
    {
        arry3[j] = arry1[i];
        j++;
    }
    for (int i = 0; i < len2; i++)
    {
        arry3[j] = arry2[i];
        j++;
    }

    printf("Final Array =");
    for (int i = 0; i < len1 + len2; i++)
    {
        printf(" %d", arry3[i]);
    }

    free(arry3);

    return 0;
}
