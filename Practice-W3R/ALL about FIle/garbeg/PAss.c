#include <stdio.h>
#include <conio.h>

void getPassword(char *password, int maxLength)
{
    int i = 0;
    char ch;

    while (1)
    {
        ch = getch(); // Get character without echoing

        // If Enter is pressed, break the loop
        if (ch == '\r')
        {
            break;
        }
        // Handle Backspace: delete a character
        else if (ch == '\b')
        {
            if (i > 0)
            {
                i--;
                printf("\b \b"); // Move cursor back, overwrite with space, move back again
            }
        }
        // Otherwise, store character and print '*'
        else if (i < maxLength - 1)
        {
            password[i] = ch;
            i++;
            putchar('*');
        }
    }

    password[i] = '\0'; // Null-terminate the string
    printf("\n");
}

int main()
{
    char password[20];

    printf("Enter your password: ");
    getPassword(password, sizeof(password));

    printf("Your password is: %s\n", password);
    return 0;
}
