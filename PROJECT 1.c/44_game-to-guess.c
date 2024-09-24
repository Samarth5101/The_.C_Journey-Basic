/*programing a game to guess the number given by machine (auto genrated) 
and guessed by user*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));            //these 2 lines generates
    number = rand() % 100 + 1; // a random number between 1 to 100
    //loop runs untill the number is guessed
    do
    {

        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}