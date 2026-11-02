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
        int result = scanf("%d", &guess);

        if (result != 1) { //checks whether the input failed
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { } // EOF = end of file, a safety check; { } tells C, that the body is empty, so the loop ends here, and the printf below is a separate step that runs once afterwards
            //can also use: while ((c = getchar()) != '\n' && c != EOF); 
            printf("Please type a number. \n");
            continue; // jumps back to the top of the loop, skipping attempts++, etc
        }

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