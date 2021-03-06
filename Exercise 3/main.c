/* Exercise 3 - Guess a number between 1-100.
 * Author: Daniel Geula
 * Date: 05/05/2022
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int randomNumber, userGuess;

    // Seed random number generator, save as randomNumber.
    srand(time(NULL));
    randomNumber = rand() % 100 + 1;

    // Prompt user for a guess, save as userGuess.
    printf("\nGuess a number between 1 and 100: ");
    scanf("%d", &userGuess);

    begin: // Create goto label begin.
    if(userGuess == randomNumber) {
        printf("\nCongratulations! You guessed the correct number!\n");
    }
    // Prompt user for another guess if the previous guess was too low.
    else if(userGuess < randomNumber) {
        printf("\nToo low\n");
        printf("Try again: ");
        scanf("%d", &userGuess);
        goto begin; // Go back to the begin label.
    }
    // Do the same for other case.
    else {
        printf("\nToo high\n");
        printf("Try again: ");
        scanf("%d", &userGuess);
        goto begin;
    }

    return 0;
}