#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_WORD_LENGTH 20
#define MAX_GUESSES 6

void drawHangman(int guesses);
void playGame(char *word);

int main()
{
    char word[MAX_WORD_LENGTH];
    srand(time(NULL)); // seed random number generator

    // select a random word from a predefined list
    char *words[] = {"apple", "banana", "cherry", "date", "elderberry"};
    strcpy(word, words[rand() % 5]);

    playGame(word);

    return 0;
}

void drawHangman(int guesses)
{
    switch (guesses)
    {
    case 6:
        printf(" +---+ \n");
        printf(" |   | \n");
        printf("     | \n");
        printf("     | \n");
        printf("     | \n");
        printf("     | \n");
        break;
    case 5:
        printf(" +---+ \n");
        printf(" |   | \n");
        printf(" O   | \n");
        printf("     | \n");
        printf("     | \n");
        printf("     | \n");
        break;
    case 4:
        printf(" +---+ \n");
        printf(" |   | \n");
        printf(" O   | \n");
        printf(" |   | \n");
        printf("     | \n");
        printf("     | \n");
        break;
    case 3:
        printf(" +---+ \n");
        printf(" |   | \n");
        printf(" O   | \n");
        printf(" /|   | \n");
        printf("     | \n");
        printf("     | \n");
        break;
    case 2:
        printf(" +---+ \n");
        printf(" |   | \n");
        printf(" O   | \n");
        printf(" /|\\  | \n");
        printf("     | \n");
        printf("     | \n");
        break;
    case 1:
        printf(" +---+ \n");
        printf(" |   | \n");
        printf(" O   | \n");
        printf(" /|\\  | \n");
        printf(" /    | \n");
        printf("     | \n");
        break;
    case 0:
        printf(" +---+ \n");
        printf(" |   | \n");
        printf(" O   | \n");
        printf(" /|\\  | \n");
        printf(" / \\  | \n");
        printf("     | \n");
        break;
    }
}

void playGame(char *word)
{
    int guesses = MAX_GUESSES;
    int wordLength = strlen(word);
    char guessedWord[wordLength];
    for (int i = 0; i < wordLength; i++)
    {
        guessedWord[i] = '_';
    }

    while (guesses > 0)
    {
        printf("Word: %s\n", guessedWord);
        drawHangman(guesses);
        printf("Guess a letter: ");
        char guess;
        scanf(" %c", &guess);

        int correctGuess = 0;
        for (int i = 0; i < wordLength; i++)
        {
            if (word[i] == guess)
            {
                guessedWord[i] = guess;
                correctGuess = 1;
            }
        }

        if (!correctGuess)
        {
            guesses--;
        }

        int wordGuessed = 1;
        for (int i = 0; i < wordLength; i++)
        {
            if (guessedWord[i] == '_')
            {
                wordGuessed = 0;
            }
        }

        if (wordGuessed)
        {
            printf("Congratulations! You guessed the word: %s\n", word);
            return;
        }
    }

    printf("Game over! The word was: %s\n", word);
}
