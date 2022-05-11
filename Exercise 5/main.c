/* Exercise 5 - Odd/Even, Positive/Negative.
 * Author: Daniel Geula
 * Date: 10/05/2022
 * Version: 1.0
*/

#include <stdio.h>
#include <math.h>

int main() {

    float userNumber;

    // Prompt user for a value between -10 and 10, save as userNumber.
    printf("\nEnter a value between -10 and 10: ");
    scanf("%f", &userNumber);

    // Check if userNumber is within the range of -10 and 10.
    if (userNumber < -10) {
        printf("\nInvalid value\n");
        return 0;
    }
    if (userNumber > 10) {
        printf("\nInvalid value\n");
        return 0;
    }

    // Is positive/negative?
    if (userNumber < 0) {
        printf("\nValue is negative\n");
    } else {
        printf("\nValue is positive\n");
    }

    // Is odd/even?
    if (fmod(userNumber, 2) == 0) {
        printf("\nValue is even\n");
    } else {
        printf("\nValue is odd\n");
    }

    return 0;

}