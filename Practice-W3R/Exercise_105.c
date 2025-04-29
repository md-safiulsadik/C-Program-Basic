//find the minimum number of swaps required to gather all elements less than or equal to k.
//#include <stdio.h>
//#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[] = {3, 6, 8, 4, 1, 2, 3, 6};
    int len = sizeof(array) / sizeof(array[0]);
    int temp[len];  // Temporary array to store rearranged elements
    int front = 0;  // Index for elements <= 4
    int back = len - 1;  // Index for elements > 4

    for (i = 0; i < len; i++)
    {
        if (array[i] <= 4)
        {
            temp[front++] = array[i];  // Place elements <= 4 at the front
        }
        else
        {
            temp[back--] = array[i];  // Place elements > 4 at the back
        }
    }

    // Copy the rearranged elements back into the original array
    for (i = 0; i < len; i++)
    {
        array[i] = temp[i];
    }

    puts("New Array");
    for (i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

/*int main()
{
    int i;
    int j;
    int array[] = {3,6,8,4,1,2,3,6};
    int len;
    len = sizeof(array) / sizeof(array[0]);
    int k = len;

    for (i = 0; i < len; i++)
    {
        if (array[i] > 4)
        {
            for (j = i; j < len ; j++)
            {
                array[j] = array[j + 1];
            }
            array[k] = array[i];
            k--;
            i--;
        }
    }


    puts("New Array");
    for(i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
*/













/*void swap(int array[], int i);

void swap(int array[], int i)
{
    int j = len - 1;
    int temp;
    temp = array[i];
    array[i] = array[j];
    array[j] = array[i];
}

int main()
{
    int array[] = {2,7,9,5}; //,8,7,4
    int len = sizeof(array) / sizeof(array[0]);
    int count = 0;
    int k = len ;
    int j = 0;

    for(int i = 0; i < len; i++)
    {
        if(array[i] > 7)
        {
            for( j = i ; j < len; j++)
            {
                array[j] = array[j + 1];
            }

        }
    }
    printf("\nSwapping Need %d\nNew Array :", count);
    for(int i = 0; i < len; i++)
    {
        printf(" %d" , array[i]);
    }

    return 0;
} */
