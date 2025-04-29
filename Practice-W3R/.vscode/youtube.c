#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = NULL;

    ptr = (int *)malloc(10 * sizeof(int));

    printf("Enter Array Values \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
  
    for (size_t i = 0; i < 4; i++)
    {
        printf("The Value at %d is %d\n", i, ptr[i]);

      free(ptr);


    
    return 0;
}
