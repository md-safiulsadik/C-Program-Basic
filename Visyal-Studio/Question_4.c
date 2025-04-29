#include <stdio.h>

int main()
{
    int x = 0;
    printf("Enter a integer: ");
    scanf("%d", &x);
    printf("Post-increment (x++): %d\n", x++);
    
    printf("Enter a integer: ");
    scanf("%d", &x);
    printf("Pre-increment (++x): %d\n", ++x);
    
    printf("Enter a integer: ");
    scanf("%d", &x);
    printf("Post-decrement (x--): %d\n", x--);

    printf("Enter a integer: ");
    scanf("%d", &x);
    printf("Pre-decrement (--x): %d\n", --x);

    return 0;
}