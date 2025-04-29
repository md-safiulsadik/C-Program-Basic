#include <stdio.h>  // Include standard input/output library
#include <stdlib.h> // Include standard library for additional functions

// Declare the function 'test' with two integer parameters
int test(int x, int y);

int main(void)
{
    // Call the function 'test' with arguments 78 and 95, and print the result
    printf("%d", test(78, 95));

    // Print a newline for formatting
    printf("\n");

    // Call the function 'test' with arguments 95 and 95, and print the result
    printf("%d", test(95, 95));

    // Print a newline for formatting
    printf("\n");

    // Call the function 'test' with arguments 99 and 70, and print the result
    printf("%d", test(99, 70));
}

// Function definition for 'test'
int test(int x, int y)
{
    int n = 100;      // Define a variable 'n' and assign it the value 100
    int val = abs(x - n);  // Calculate the absolute difference between 'x' and 'n' and store it in 'val'
    int val2 = abs(y - n); // Calculate the absolute difference between 'y' and 'n' and store it in 'val2'

    // Check if 'val' is equal to 'val2'. If true, return 0. Otherwise, return 'x' if 'val' is less than 'val2', otherwise return 'y'.
    return val == val2 ? 0 : (val < val2 ? x : y);
}
