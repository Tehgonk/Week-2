/* Exercise 5 - Odd or Even, Positive or Negative.
 * Author: Daniel Geula
 * Date: 10/05/2022
 * Version: 1.0
*/

#include <stdio.h>
#include <math.h>

int main() {

    double userNum;

    printf("\nEnter a value between -10 and 10: ");
    scanf("%lf", &userNum);

    // Output warning and exit if userNum is not between -10 and 10.
    if (userNum < -10 || userNum > 10) {
        printf("\nInvalid value\n");
        return 0;
    }

    // Output that the value is positive if userNum < 0, else negative.
    if (userNum < 0) {
        printf("\nValue is negative\n");
    } else {
        printf("\nValue is positive\n");
    }

    // Output that the value is even if userNum mod 2 = 0, else odd.
    if (fmod(userNum, 2) == 0) {
        printf("\nValue is even\n");
    } else {
        printf("\nValue is odd\n");
    }

    return 0;

}