#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_WORD_LENGTH 20
#define MAX_GUESSES 6



int main()
{
   char *words = {"Hangman"};

    playGame(words);

    return 0;
}


void playGame(char *word)
{
    char guesses = MAX_GUESSES;
    int len = strlen(word);
    char guessWord[len];

    for(int i = 0 ; i < len ; i++)
    {
      guessWord[i] = '_';
    }


    while(guesses > 0)
    {
        printf("%s\n",guessWord);
        printf("Enter Guess : ");
        int guess ;
        scanf(" %c", &guess);
        int  currentguess = 0;
        for(int i = 0 ; i < len ; i++)
        {
            if(word[i]==guess)
            {
                guessWord[i] = guess;
                currentguess = 1;
            }
        }
        if(!currentguess)
        {
            guesses--;
        }
        int wordguessed = 1;

        for(int i = 0 ; i < len ; i++)
        {
            if(guessWord[i] == '_')
            wordguessed = 0;
        }

        if(wordguessed)
        {
            printf("Congratulations! You guessed the word: %s\n", word);
            return;
        }
    }


    printf("Game over! The word was: %s\n", word);
}
