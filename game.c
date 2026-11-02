#include <stdio.h>
#include <stdlib.h> //has rand(), srand()
#include <time.h>

int main(void)
{
    srand(time(NULL)); // shuffles the random generator

    int secret = rand() % 100 + 1; // gives a number from 1 to 100
    int guess = 0;
    int attempts = 0;

    while (guess != secret)
    {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret)
        {
            printf("Too low!\n");
        }
        else if (guess > secret)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct! You needed %d attempts. \n", attempts);
        }
    }

    return 0;
}